

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Jan 22 13:47:08 2018
 */
/* Compiler settings for testocx2015.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
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


#ifndef __testocx2015idl_h__
#define __testocx2015idl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___Dtestocx2015_FWD_DEFINED__
#define ___Dtestocx2015_FWD_DEFINED__
typedef interface _Dtestocx2015 _Dtestocx2015;

#endif 	/* ___Dtestocx2015_FWD_DEFINED__ */


#ifndef ___Dtestocx2015Events_FWD_DEFINED__
#define ___Dtestocx2015Events_FWD_DEFINED__
typedef interface _Dtestocx2015Events _Dtestocx2015Events;

#endif 	/* ___Dtestocx2015Events_FWD_DEFINED__ */


#ifndef __testocx2015_FWD_DEFINED__
#define __testocx2015_FWD_DEFINED__

#ifdef __cplusplus
typedef class testocx2015 testocx2015;
#else
typedef struct testocx2015 testocx2015;
#endif /* __cplusplus */

#endif 	/* __testocx2015_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_testocx2015_0000_0000 */
/* [local] */ 

#pragma once
#pragma region Desktop Family
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_testocx2015_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_testocx2015_0000_0000_v0_0_s_ifspec;


#ifndef __testocx2015Lib_LIBRARY_DEFINED__
#define __testocx2015Lib_LIBRARY_DEFINED__

/* library testocx2015Lib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_testocx2015Lib;

#ifndef ___Dtestocx2015_DISPINTERFACE_DEFINED__
#define ___Dtestocx2015_DISPINTERFACE_DEFINED__

/* dispinterface _Dtestocx2015 */
/* [uuid] */ 


EXTERN_C const IID DIID__Dtestocx2015;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("6D6025A9-2A7D-4DD2-9CB4-B6F2780F8357")
    _Dtestocx2015 : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _Dtestocx2015Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _Dtestocx2015 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _Dtestocx2015 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _Dtestocx2015 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _Dtestocx2015 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _Dtestocx2015 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _Dtestocx2015 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _Dtestocx2015 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _Dtestocx2015Vtbl;

    interface _Dtestocx2015
    {
        CONST_VTBL struct _Dtestocx2015Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _Dtestocx2015_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _Dtestocx2015_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _Dtestocx2015_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _Dtestocx2015_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _Dtestocx2015_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _Dtestocx2015_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _Dtestocx2015_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___Dtestocx2015_DISPINTERFACE_DEFINED__ */


#ifndef ___Dtestocx2015Events_DISPINTERFACE_DEFINED__
#define ___Dtestocx2015Events_DISPINTERFACE_DEFINED__

/* dispinterface _Dtestocx2015Events */
/* [uuid] */ 


EXTERN_C const IID DIID__Dtestocx2015Events;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("6185002C-AE47-4BCB-A2D8-5EB40869FDA7")
    _Dtestocx2015Events : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _Dtestocx2015EventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _Dtestocx2015Events * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _Dtestocx2015Events * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _Dtestocx2015Events * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _Dtestocx2015Events * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _Dtestocx2015Events * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _Dtestocx2015Events * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _Dtestocx2015Events * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _Dtestocx2015EventsVtbl;

    interface _Dtestocx2015Events
    {
        CONST_VTBL struct _Dtestocx2015EventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _Dtestocx2015Events_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _Dtestocx2015Events_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _Dtestocx2015Events_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _Dtestocx2015Events_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _Dtestocx2015Events_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _Dtestocx2015Events_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _Dtestocx2015Events_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___Dtestocx2015Events_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_testocx2015;

#ifdef __cplusplus

class DECLSPEC_UUID("D1280FBA-3804-4D7C-B91F-99A63C230597")
testocx2015;
#endif
#endif /* __testocx2015Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


