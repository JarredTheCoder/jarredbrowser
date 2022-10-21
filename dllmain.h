// dllmain.h : Declaration of module class.

class CJarredBrowserHandlersModule : public ATL::CAtlDllModuleT< CJarredBrowserHandlersModule >
{
public :
	DECLARE_LIBID(LIBID_JarredBrowserHandlersLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_JARREDBROWSERHANDLERS, "{D97C944B-470F-4AD5-9AAC-C0A4D1C128C5}")
};

extern class CJarredBrowserHandlersModule _AtlModule;
