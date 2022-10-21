

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IPreview,0x5D700C3D,0x0E75,0x44F8,0xB8,0x9B,0x95,0x85,0x62,0x7F,0xD6,0xC1);


MIDL_DEFINE_GUID(IID, IID_IThumbnail,0x22E6D8D8,0xD891,0x451D,0x97,0x43,0x4C,0x4D,0xA2,0xEF,0x7C,0x8F);


MIDL_DEFINE_GUID(IID, IID_ISearch,0x61464977,0xD0D1,0x4A7B,0xBD,0x1B,0xAC,0xCC,0x69,0xE2,0x4D,0x15);


MIDL_DEFINE_GUID(IID, LIBID_JarredBrowserHandlersLib,0x0FA15EC8,0xB70B,0x4823,0xAE,0xD2,0xAD,0xED,0x18,0x0D,0xAD,0x22);


MIDL_DEFINE_GUID(CLSID, CLSID_Preview,0x22DE8E58,0x0BC1,0x49DE,0x8D,0xCD,0x2C,0x9F,0x9E,0x21,0x09,0xF7);


MIDL_DEFINE_GUID(CLSID, CLSID_Thumbnail,0x1C71462E,0xB57B,0x457B,0xB8,0xD6,0x30,0x42,0x66,0x7C,0xD7,0xC6);


MIDL_DEFINE_GUID(CLSID, CLSID_Search,0x65F1ADA6,0x6BB5,0x4791,0xBC,0x4E,0xC4,0x1C,0x0E,0x45,0x39,0x6C);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



