/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Nov 21 12:30:12 2013
 */
/* Compiler settings for C:\Users\ewgenij\Documents\WORKSHOP\—Ë·√”“»\2013(PROGRAM DESIGN)\work\Lecture4-Automation\ATLTest2013\ATLTest2013.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
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

#ifndef __ATLTest2013_h__
#define __ATLTest2013_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IForStudents_FWD_DEFINED__
#define __IForStudents_FWD_DEFINED__
typedef interface IForStudents IForStudents;
#endif 	/* __IForStudents_FWD_DEFINED__ */


#ifndef __ForStudents_FWD_DEFINED__
#define __ForStudents_FWD_DEFINED__

#ifdef __cplusplus
typedef class ForStudents ForStudents;
#else
typedef struct ForStudents ForStudents;
#endif /* __cplusplus */

#endif 	/* __ForStudents_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IForStudents_INTERFACE_DEFINED__
#define __IForStudents_INTERFACE_DEFINED__

/* interface IForStudents */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IForStudents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3497DE41-1E18-4EF8-ABB0-C56ED746066D")
    IForStudents : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Test2013( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Val( 
            /* [retval][out] */ double __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Val( 
            /* [in] */ double newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IForStudentsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IForStudents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IForStudents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IForStudents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IForStudents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IForStudents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IForStudents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IForStudents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Test2013 )( 
            IForStudents __RPC_FAR * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Val )( 
            IForStudents __RPC_FAR * This,
            /* [retval][out] */ double __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Val )( 
            IForStudents __RPC_FAR * This,
            /* [in] */ double newVal);
        
        END_INTERFACE
    } IForStudentsVtbl;

    interface IForStudents
    {
        CONST_VTBL struct IForStudentsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IForStudents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IForStudents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IForStudents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IForStudents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IForStudents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IForStudents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IForStudents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IForStudents_Test2013(This)	\
    (This)->lpVtbl -> Test2013(This)

#define IForStudents_get_Val(This,pVal)	\
    (This)->lpVtbl -> get_Val(This,pVal)

#define IForStudents_put_Val(This,newVal)	\
    (This)->lpVtbl -> put_Val(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IForStudents_Test2013_Proxy( 
    IForStudents __RPC_FAR * This);


void __RPC_STUB IForStudents_Test2013_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IForStudents_get_Val_Proxy( 
    IForStudents __RPC_FAR * This,
    /* [retval][out] */ double __RPC_FAR *pVal);


void __RPC_STUB IForStudents_get_Val_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IForStudents_put_Val_Proxy( 
    IForStudents __RPC_FAR * This,
    /* [in] */ double newVal);


void __RPC_STUB IForStudents_put_Val_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IForStudents_INTERFACE_DEFINED__ */



#ifndef __ATLTEST2013Lib_LIBRARY_DEFINED__
#define __ATLTEST2013Lib_LIBRARY_DEFINED__

/* library ATLTEST2013Lib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ATLTEST2013Lib;

EXTERN_C const CLSID CLSID_ForStudents;

#ifdef __cplusplus

class DECLSPEC_UUID("64E3FED8-D31B-46DD-B16A-767A78681A8C")
ForStudents;
#endif
#endif /* __ATLTEST2013Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
