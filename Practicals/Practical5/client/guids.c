

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Nov 06 19:16:51 2013
 */
/* Compiler settings for IFunction.idl:
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

MIDL_DEFINE_GUID(IID, IID_IFunction,0x3DC9017D,0x10E4,0x4D83,0x80,0x97,0xE0,0xFC,0x04,0x97,0xB9,0xAA);


MIDL_DEFINE_GUID(IID, IID_ISerialization,0x048C493E,0xA924,0x4345,0x86,0x50,0x18,0xBE,0x59,0x7B,0x41,0xAA);


MIDL_DEFINE_GUID(IID, LIBID_FunctionLib,0x10C1D956,0xB61A,0x4B2C,0x87,0x95,0x58,0xCA,0x53,0x29,0x8A,0xAA);


MIDL_DEFINE_GUID(CLSID, CLSID_CFunction,0x36C1D956,0xB61A,0x4B2C,0x87,0x95,0x58,0xCA,0x53,0x29,0x8A,0xAA);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



