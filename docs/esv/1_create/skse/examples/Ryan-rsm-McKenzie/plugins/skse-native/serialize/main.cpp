#include "common/IDebugLog.h"  // IDebugLog
#include "skse64_common/skse_version.h"  // RUNTIME_VERSION
#include "skse64/PluginAPI.h"  // PluginHandle, SKSESerializationInterface, SKSEInterface, PluginInfo

#include <ShlObj.h>  // CSIDL_MYDOCUMENTS

#include <vector>  // vector

#include "version.h"  // VERSION_VERSTRING, VERSION_MAJOR


static PluginHandle g_pluginHandle = kPluginHandle_Invalid;
static SKSESerializationInterface* g_serializationInterface = 0;


void SaveCallback(SKSESerializationInterface* a_intfc)
{
	SInt32 num = 42;
	std::vector<SInt32> arr;
	for (std::size_t i = 0; i < 10; ++i) {
		arr.push_back(i);
	}

	if (!a_intfc->WriteRecord('NUM_', 1, &num, sizeof(num))) {
		_ERROR("Failed to serialize num!");
	}

	if (!a_intfc->OpenRecord('ARR_', 1)) {
		_ERROR("Failed to open record for arr!");
	} else {
		std::size_t size = arr.size();
		if (!a_intfc->WriteRecordData(&size, sizeof(size))) {
			_ERROR("Failed to write size of arr!");
		} else {
			for (auto& elem : arr) {
				if (!a_intfc->WriteRecordData(&elem, sizeof(elem))) {
					_ERROR("Failed to write data for elem!");
					break;
				}
			}
		}
	}
}


void LoadCallback(SKSESerializationInterface* a_intfc)
{
	SInt32 num;
	std::vector<SInt32> arr;

	UInt32 type;
	UInt32 version;
	UInt32 length;
	while (a_intfc->GetNextRecordInfo(&type, &version, &length)) {
		switch (type) {
		case 'NUM_':
			if (!a_intfc->ReadRecordData(&num, sizeof(num))) {
				_ERROR("Failed to load num!");
			}
			break;
		case 'ARR_':
			{
				std::size_t size = a_intfc->ReadRecordData(&size, sizeof(size));
				for (UInt32 i = 0; i < size; ++i) {
					SInt32 elem;
					if (!a_intfc->ReadRecordData(&elem, sizeof(elem))) {
						_ERROR("Failed to load elem!");
						break;
					} else {
						arr.push_back(elem);
					}
				}
			}
			break;
		default:
			_ERROR("Unrecognized signature type!");
			break;
		}
	}
}


extern "C" {
	bool SKSEPlugin_Query(const SKSEInterface* a_skse, PluginInfo* a_info)
	{
		gLog.OpenRelative(CSIDL_MYDOCUMENTS, "\\My Games\\Skyrim Special Edition\\SKSE\\MyFirstPlugin.log");
		gLog.SetPrintLevel(IDebugLog::kLevel_DebugMessage);
		gLog.SetLogLevel(IDebugLog::kLevel_DebugMessage);

		_MESSAGE("MyFirstPlugin v%s", MYFP_VERSION_VERSTRING);

		a_info->infoVersion = PluginInfo::kInfoVersion;
		a_info->name = "MyFirstPlugin";
		a_info->version = MYFP_VERSION_MAJOR;

		if (a_skse->isEditor) {
			_FATALERROR("[FATAL ERROR] Loaded in editor, marking as incompatible!\n");
			return false;
		} else if (a_skse->runtimeVersion != RUNTIME_VERSION_1_5_73) {
			_FATALERROR("[FATAL ERROR] Unsupported runtime version %08X!\n", a_skse->runtimeVersion);
			return false;
		}

		return true;
	}


	bool SKSEPlugin_Load(const SKSEInterface* a_skse)
	{
		_MESSAGE("[MESSAGE] MyFirstPlugin loaded");

		g_pluginHandle = a_skse->GetPluginHandle();
		if (g_pluginHandle == kPluginHandle_Invalid) {
			return false;
		}

		g_serializationInterface = static_cast<SKSESerializationInterface*>(a_skse->QueryInterface(kInterface_Serialization));
		if (!g_serializationInterface) {
			return false;
		}
		g_serializationInterface->SetUniqueID(g_pluginHandle, 'MYFP');
		g_serializationInterface->SetSaveCallback(g_pluginHandle, SaveCallback);
		g_serializationInterface->SetLoadCallback(g_pluginHandle, LoadCallback);

		return true;
	}
};
