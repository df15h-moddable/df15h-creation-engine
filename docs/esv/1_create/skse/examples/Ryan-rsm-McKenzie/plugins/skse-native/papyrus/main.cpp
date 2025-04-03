#include "common/IDebugLog.h"  // IDebugLog
#include "common/ITypes.h"  // SInt32
#include "skse64_common/skse_version.h"  // RUNTIME_VERSION
#include "skse64/GameTypes.h"  // BSFixedString
#include "skse64/PapyrusNativeFunctions.h"  // NativeFunction, StaticFunctionTag
#include "skse64/PapyrusVM.h"  // VMClassRegistry
#include "skse64/PluginAPI.h"  // SKSEPapyrusInterface, SKSEInterface, PluginInfo

#include <ShlObj.h>  // CSIDL_MYDOCUMENTS

#include "version.h"  // VERSION_VERSTRING, VERSION_MAJOR


static SKSEPapyrusInterface* g_papyrusInterface = 0;


BSFixedString HelloWorld(StaticFunctionTag*)
{
	return BSFixedString("Hello world!");
}


SInt32 Sum(StaticFunctionTag*, SInt32 a_num1, SInt32 a_num2)
{
	return a_num1 + a_num2;
}


bool RegisterFuncs(VMClassRegistry* a_registry)
{
	a_registry->RegisterFunction(new NativeFunction0<StaticFunctionTag, BSFixedString>("HelloWorld", "MyClass", HelloWorld, a_registry));
	a_registry->RegisterFunction(new NativeFunction2<StaticFunctionTag, SInt32, SInt32, SInt32>("Sum", "MyClass", Sum, a_registry));
	return true;
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

		g_papyrusInterface = static_cast<SKSEPapyrusInterface*>(a_skse->QueryInterface(kInterface_Papyrus));
		if (!g_papyrusInterface) {
			return false;
		} else if (!g_papyrusInterface->Register(RegisterFuncs)) {
			return false;
		}

		return true;
	}
};
