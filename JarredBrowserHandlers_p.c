

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Oct 19 10:01:19 2022
 */
/* Compiler settings for JarredBrowserHandlers.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "JarredBrowserHandlers_i.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   1                                 
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _JarredBrowserHandlers_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } JarredBrowserHandlers_MIDL_TYPE_FORMAT_STRING;

typedef struct _JarredBrowserHandlers_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } JarredBrowserHandlers_MIDL_PROC_FORMAT_STRING;

typedef struct _JarredBrowserHandlers_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } JarredBrowserHandlers_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const JarredBrowserHandlers_MIDL_TYPE_FORMAT_STRING JarredBrowserHandlers__MIDL_TypeFormatString;
extern const JarredBrowserHandlers_MIDL_PROC_FORMAT_STRING JarredBrowserHandlers__MIDL_ProcFormatString;
extern const JarredBrowserHandlers_MIDL_EXPR_FORMAT_STRING JarredBrowserHandlers__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPreview_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPreview_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IThumbnail_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IThumbnail_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISearch_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISearch_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const JarredBrowserHandlers_MIDL_PROC_FORMAT_STRING JarredBrowserHandlers__MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const JarredBrowserHandlers_MIDL_TYPE_FORMAT_STRING JarredBrowserHandlers__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IPreview, ver. 0.0,
   GUID={0x5D700C3D,0x0E75,0x44F8,{0xB8,0x9B,0x95,0x85,0x62,0x7F,0xD6,0xC1}} */

#pragma code_seg(".orpc")
static const unsigned short IPreview_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPreview_ProxyInfo =
    {
    &Object_StubDesc,
    JarredBrowserHandlers__MIDL_ProcFormatString.Format,
    &IPreview_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPreview_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    JarredBrowserHandlers__MIDL_ProcFormatString.Format,
    &IPreview_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(3) _IPreviewProxyVtbl = 
{
    0,
    &IID_IPreview,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _IPreviewStubVtbl =
{
    &IID_IPreview,
    &IPreview_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IThumbnail, ver. 0.0,
   GUID={0x22E6D8D8,0xD891,0x451D,{0x97,0x43,0x4C,0x4D,0xA2,0xEF,0x7C,0x8F}} */

#pragma code_seg(".orpc")
static const unsigned short IThumbnail_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IThumbnail_ProxyInfo =
    {
    &Object_StubDesc,
    JarredBrowserHandlers__MIDL_ProcFormatString.Format,
    &IThumbnail_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IThumbnail_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    JarredBrowserHandlers__MIDL_ProcFormatString.Format,
    &IThumbnail_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(3) _IThumbnailProxyVtbl = 
{
    0,
    &IID_IThumbnail,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _IThumbnailStubVtbl =
{
    &IID_IThumbnail,
    &IThumbnail_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISearch, ver. 0.0,
   GUID={0x61464977,0xD0D1,0x4A7B,{0xBD,0x1B,0xAC,0xCC,0x69,0xE2,0x4D,0x15}} */

#pragma code_seg(".orpc")
static const unsigned short ISearch_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ISearch_ProxyInfo =
    {
    &Object_StubDesc,
    JarredBrowserHandlers__MIDL_ProcFormatString.Format,
    &ISearch_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISearch_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    JarredBrowserHandlers__MIDL_ProcFormatString.Format,
    &ISearch_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(3) _ISearchProxyVtbl = 
{
    0,
    &IID_ISearch,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _ISearchStubVtbl =
{
    &IID_ISearch,
    &ISearch_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    JarredBrowserHandlers__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x700022b, /* MIDL Version 7.0.555 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _JarredBrowserHandlers_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IPreviewProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISearchProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IThumbnailProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _JarredBrowserHandlers_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IPreviewStubVtbl,
    ( CInterfaceStubVtbl *) &_ISearchStubVtbl,
    ( CInterfaceStubVtbl *) &_IThumbnailStubVtbl,
    0
};

PCInterfaceName const _JarredBrowserHandlers_InterfaceNamesList[] = 
{
    "IPreview",
    "ISearch",
    "IThumbnail",
    0
};


#define _JarredBrowserHandlers_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _JarredBrowserHandlers, pIID, n)

int __stdcall _JarredBrowserHandlers_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _JarredBrowserHandlers, 3, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _JarredBrowserHandlers, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _JarredBrowserHandlers, 3, *pIndex )
    
}

const ExtendedProxyFileInfo JarredBrowserHandlers_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _JarredBrowserHandlers_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _JarredBrowserHandlers_StubVtblList,
    (const PCInterfaceName * ) & _JarredBrowserHandlers_InterfaceNamesList,
    0, /* no delegation */
    & _JarredBrowserHandlers_IID_Lookup, 
    3,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

