#include <binaryninjaapi.h>

extern "C" {

BN_DECLARE_CORE_ABI_VERSION

BINARYNINJAPLUGIN bool CorePluginInit()
{
	BinaryNinja::LogInfo("Example plugin loaded successfully");
	return true;
}

/* */
}
