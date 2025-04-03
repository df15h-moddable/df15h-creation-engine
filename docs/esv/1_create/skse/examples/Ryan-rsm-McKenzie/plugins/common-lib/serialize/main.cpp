#include "version.h"


void SaveCallback(SKSE::SerializationInterface* a_intfc)
{
	SInt32 num = 42;
	std::vector<SInt32> arr;
	for (std::size_t i = 0; i < 10; ++i) {
		arr.push_back(i);
	}

	if (!a_intfc->WriteRecord('NUM_', 1, num)) {
		_ERROR("Failed to serialize num!");
	}

	if (!a_intfc->OpenRecord('ARR_', 1)) {
		_ERROR("Failed to open record for arr!");
	} else {
		std::size_t size = arr.size();
		if (!a_intfc->WriteRecordData(size)) {
			_ERROR("Failed to write size of arr!");
		} else {
			for (auto& elem : arr) {
				if (!a_intfc->WriteRecordData(elem)) {
					_ERROR("Failed to write data for elem!");
					break;
				}
			}
		}
	}
}


void LoadCallback(SKSE::SerializationInterface* a_intfc)
{
	SInt32 num;
	std::vector<SInt32> arr;

	UInt32 type;
	UInt32 version;
	UInt32 length;
	while (a_intfc->GetNextRecordInfo(type, version, length)) {
		switch (type) {
		case 'NUM_':
			if (!a_intfc->ReadRecordData(num)) {
				_ERROR("Failed to load num!");
			}
			break;
		case 'ARR_':
			{
				std::size_t size;
				if (!a_intfc->ReadRecordData(size)) {
					_ERROR("Failed to load size!");
					break;
				}

				for (UInt32 i = 0; i < size; ++i) {
					SInt32 elem;
					if (!a_intfc->ReadRecordData(elem)) {
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


extern "C" DLLEXPORT bool APIENTRY SKSEPlugin_Query(const SKSE::QueryInterface* a_skse, SKSE::PluginInfo* a_info)
{
	SKSE::Logger::OpenRelative(FOLDERID_Documents, L"\\My Games\\Skyrim Special Edition\\SKSE\\MyFirstPlugin.log");
	SKSE::Logger::SetPrintLevel(SKSE::Logger::Level::kDebugMessage);
	SKSE::Logger::SetFlushLevel(SKSE::Logger::Level::kDebugMessage);
	SKSE::Logger::UseLogStamp(true);

	_MESSAGE("MyFirstPlugin v%s", MYFP_VERSION_VERSTRING);

	a_info->infoVersion = SKSE::PluginInfo::kVersion;
	a_info->name = "MyFirstPlugin";
	a_info->version = MYFP_VERSION_MAJOR;

	if (a_skse->IsEditor()) {
		_FATALERROR("Loaded in editor, marking as incompatible!\n");
		return false;
	}

	const auto ver = a_skse->RuntimeVersion();
	if (ver < SKSE::RUNTIME_1_5_39) {
		_FATALERROR("Unsupported runtime version %s!\n", ver.GetString().c_str());
		return false;
	}

	return true;
}


extern "C" DLLEXPORT bool APIENTRY SKSEPlugin_Load(const SKSE::LoadInterface* a_skse)
{
	_MESSAGE("MyFirstPlugin loaded");

	if (!SKSE::Init(a_skse)) {
		return false;
	}

	auto serialization = SKSE::GetSerializationInterface();
	serialization->SetUniqueID('MYFP');
	serialization->SetSaveCallback(SaveCallback);
	serialization->SetLoadCallback(LoadCallback);

	return true;
}
