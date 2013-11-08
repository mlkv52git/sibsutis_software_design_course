

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __root_i_h__
#define __root_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IFunction_FWD_DEFINED__
#define __IFunction_FWD_DEFINED__
typedef interface IFunction IFunction;
#endif 	/* __IFunction_FWD_DEFINED__ */


#ifndef __ISerialization_FWD_DEFINED__
#define __ISerialization_FWD_DEFINED__
typedef interface ISerialization ISerialization;
#endif 	/* __ISerialization_FWD_DEFINED__ */


#ifndef __CFunction_FWD_DEFINED__
#define __CFunction_FWD_DEFINED__

#ifdef __cplusplus
typedef class CFunction CFunction;
#else
typedef struct CFunction CFunction;
#endif /* __cplusplus */

#endif 	/* __CFunction_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IFunction_INTERFACE_DEFINED__
#define __IFunction_INTERFACE_DEFINED__

/* interface IFunction */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IFunction;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3DC9017D-10E4-4D83-8097-E0FC0497B9AA")
    IFunction : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE getValue( 
            /* [out] */ double *d) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE setValue( 
            /* [in] */ double d) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFunctionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFunction * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFunction * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFunction * This);
        
        HRESULT ( STDMETHODCALLTYPE *getValue )( 
            IFunction * This,
            /* [out] */ double *d);
        
        HRESULT ( STDMETHODCALLTYPE *setValue )( 
            IFunction * This,
            /* [in] */ double d);
        
        END_INTERFACE
    } IFunctionVtbl;

    interface IFunction
    {
        CONST_VTBL struct IFunctionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFunction_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFunction_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFunction_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFunction_getValue(This,d)	\
    ( (This)->lpVtbl -> getValue(This,d) ) 

#define IFunction_setValue(This,d)	\
    ( (This)->lpVtbl -> setValue(This,d) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFunction_INTERFACE_DEFINED__ */


#ifndef __ISerialization_INTERFACE_DEFINED__
#define __ISerialization_INTERFACE_DEFINED__

/* interface ISerialization */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISerialization;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("048C493E-A924-4345-8650-18BE597B41AA")
    ISerialization : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Load( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Store( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISerializationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISerialization * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISerialization * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISerialization * This);
        
        HRESULT ( STDMETHODCALLTYPE *Load )( 
            ISerialization * This);
        
        HRESULT ( STDMETHODCALLTYPE *Store )( 
            ISerialization * This);
        
        END_INTERFACE
    } ISerializationVtbl;

    interface ISerialization
    {
        CONST_VTBL struct ISerializationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISerialization_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISerialization_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISerialization_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISerialization_Load(This)	\
    ( (This)->lpVtbl -> Load(This) ) 

#define ISerialization_Store(This)	\
    ( (This)->lpVtbl -> Store(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISerialization_INTERFACE_DEFINED__ */



#ifndef __FunctionLib_LIBRARY_DEFINED__
#define __FunctionLib_LIBRARY_DEFINED__

/* library FunctionLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_FunctionLib;

EXTERN_C const CLSID CLSID_CFunction;

#ifdef __cplusplus

class DECLSPEC_UUID("36C1D956-B61A-4B2C-8795-58CA53298AAA")
CFunction;
#endif
#endif /* __FunctionLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


