#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<Firebase.Auth.FirebaseAuth>
struct Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IEnumerable`1<System.String>>
struct TaskCompletionSource_1_tA60F5C217979823DB87631425DB793A895BA5315;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.AuthResult>
struct TaskCompletionSource_1_tA7D35E202C7858F7B9E092F07BFBDBCF1CEF1274;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>
struct TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.SignInResult>
struct TaskCompletionSource_1_t49D13F120C96CB33C1BDC538125A5AFC9EC846BF;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.String>>
struct Task_1_tE60931675018ECD797A5A72E6A87CDF8A1CB9B1A;
// System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>
struct Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5;
// System.Threading.Tasks.Task`1<Firebase.Auth.FetchProvidersResult>
struct Task_1_tB462149201177ED15C2B6D4F4F62D4B0DFC71564;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Firebase.Auth.SignInResult>
struct Task_1_tE044B471A8697F8A4C48A034BFE61C09DB17BDE8;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Firebase.Auth.AuthResult
struct AuthResult_t5BF95C4AB72884856E83E1580EFAB3355F0F9DAA;
// Firebase.Auth.AuthUtil
struct AuthUtil_t8EE1E6800343A54D198ED93603284F34262CB222;
// Firebase.Auth.AuthUtilPINVOKE
struct AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// Firebase.Auth.FederatedAuthProvider
struct FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E;
// Firebase.Auth.FederatedOAuthProvider
struct FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506;
// Firebase.Auth.FederatedOAuthProviderData
struct FederatedOAuthProviderData_t4A5AD4CBB4ACD54A60999A0DD116D8EB65FE778E;
// Firebase.Auth.FetchProvidersResult
struct FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2;
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// Firebase.InitializationException
struct InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Firebase.Auth.SignInResult
struct SignInResult_t0237743B22D00F0796EC3735D24FDB4428111945;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// Firebase.StringList
struct StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270;
// Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException
struct SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A;
// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D;
// Firebase.Auth.FirebaseAuth/<>c
struct U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t7F74AC30D537FBFE22F6D15897E1FFC338A8C498;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tC70F5B358115CABCB91EF37DE2F8962D1926267A;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1
struct U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1
struct U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_t9C43C3F57C2F39C9DBDFD8E99D4252F24B44F186;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t8EFCEB07A4612F009AED3FA5779CEB154806AA3A;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_tD58D6A8C803E8AC9BC33D2D9D116D8846419D50F;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass51_0
struct U3CU3Ec__DisplayClass51_0_t7A64750175A0B7BDE33CEE111E44616E21C42C18;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_tDA6B712CD02A4A1D1A17D12F635D9107A5A7F7B8;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass53_0
struct U3CU3Ec__DisplayClass53_0_t9CD244F39147FF12D5EA8AEDCFB4ED42F43C52A6;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass54_0
struct U3CU3Ec__DisplayClass54_0_t7BA16C42339F390144B91CBC8714DB5E05A31537;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass55_0
struct U3CU3Ec__DisplayClass55_0_t50665C682802EBD108430C3FB84B3605A8667EC9;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass56_0
struct U3CU3Ec__DisplayClass56_0_tE7BC1957D329471EDFF0EC68E7854FE2D5BFEB5E;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_t6DF8EC5FD76EB4AD0A34F47D788CCCFB7E378619;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_tD208601270F6926262A695B8B622DE090E733FAF;
// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051;
// Firebase.Auth.Future_AuthResult/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tDBA30C5A67741B1019B61FF9D48DD130CE6393DC;
// Firebase.Auth.Future_Credential/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t9E662009E934925D7D7A44DE7174BE598500E257;
// Firebase.Auth.Future_FetchProvidersResult/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t74D6A7A9C1563D7F8E5E41689C4ABFB87BDB9554;
// Firebase.Auth.Future_SignInResult/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tBF82F8CD52E738A53F766723168DEE904CF7940A;
// Firebase.Auth.Future_User/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78;
// Firebase.Auth.Future_User_Value/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tAF9E301A88DCA1BC338F672DB240C824229FA144;
// Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate
struct CodeSentDelegate_t5FE776456B1600539EA3FCADF4F155821F843735;
// Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate
struct TimeOutDelegate_t96FEFFA515EA85CB7B5C41E3413B7B8C168E2427;
// Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate
struct VerificationCompletedDelegate_tF55B9109A15CAB9EF2CAECDEDA082D6FA15C10C4;
// Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate_DEPRECATED
struct VerificationCompletedDelegate_DEPRECATED_t9C42EC20A22F71522F604997AE2A0D765A6DACD7;
// Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate
struct VerificationFailedDelegate_t0774384FF44CDE5C89A4A85ED4C2CD6045F5CFD5;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1;
// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A;
// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820;

IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteral48189E861560CEBB714411DF089B9ECCF7761320;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_CreateAuthStateListener_mD22744C56BD1CE6B28D72EF8C0C4E6EAD33419D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_CreateIdTokenListener_m8C6F2E7117ACC51D7CF40F116E11CD28609EE616_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_DestroyAuthStateListener_m6F9EC8163EEEEEF16C95440A873991C3E90E2D83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_DestroyIdTokenListener_m087ED37EF1A7E0FCBDC0EFD4D4AD649C5046A504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FederatedAuthProvider_swigRelease_m3D9606F0A210E2D35EFE21F340796B2B1DF7E53E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FederatedOAuthProvider_SetProviderData_mF736442E7DA07F7C1E786723914C962FE26AC879_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FederatedOAuthProvider__ctor_m8E41D43DC5460CE1758987E5C1E3134A8E01AA7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FederatedOAuthProvider__ctor_mA31F20A8B8A6C2B38A70BBF511DC292BFB0C6233_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FederatedOAuthProvider_swigRelease_m02485CEEC6FA6CC3EC942DF720A169B4DD070AE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FetchProvidersResult__ctor_m58E551FE8B15D4EF27788710947B48D9261FA78A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FetchProvidersResult_get_Providers_m491537D9A69A2412B70D5F726D2CB1120C881178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FetchProvidersResult_swigRelease_mE499F05F485E2EE447E7D3906F0FC7F479BE6A9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_mD3D5DF4565F2D8B785CECDDE06C94EB1AF3B7ACD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m21B2170535EECF45751C6F48948BC1322346A5F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m09944997FE4F760BD1423A7DC3082736F605535C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7111A0768AC3707D3151755C7456E30482F974DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m6D48FAE1D40F739EBE2EB7B7A2D35A4C38E273D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m5E4DFAD8B4B70C66EA34EC78307E69F6B0D8F7E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m097E27E1B950DDEDBE75ECAA525FBA1F9CCC55FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m05738E7A913471982107EC9DAFF8E575AD16D09D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m7CEBADF8ADECB392731AD0215CA9D2162344E3EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m946F88971C00DC640C4A7FEFB4D820E03AFCBA8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m7103FEC1AD9831462CD640AF2BD4BD51B457BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m477DE4F591DB31AFA8DFACEBACA2CCA81CD28367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m5E2F92E1488F0943C4B43806F9F6EF812073D384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m988E84E7A45B7FCE1EC1597585471AFA78B06887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m973E9F1971668A0D3BEA767B3479889D49CC39E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m4A389517FAF82E787A2A80A676FC04228BF999C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m55521C7FF2D3D597A5F02DC2C81AB2800818E62E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_1_U3CGetAuthU3Eb__0_mB1A8F1DF269278FF25902E6A86AE0F9797ABA8EF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IEnumerable`1<System.String>>
struct TaskCompletionSource_1_tA60F5C217979823DB87631425DB793A895BA5315  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tE60931675018ECD797A5A72E6A87CDF8A1CB9B1A* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.AuthResult>
struct TaskCompletionSource_1_tA7D35E202C7858F7B9E092F07BFBDBCF1CEF1274  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>
struct TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.SignInResult>
struct TaskCompletionSource_1_t49D13F120C96CB33C1BDC538125A5AFC9EC846BF  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tE044B471A8697F8A4C48A034BFE61C09DB17BDE8* ____task_0;
};

// Firebase.Auth.AuthUtil
struct AuthUtil_t8EE1E6800343A54D198ED93603284F34262CB222  : public RuntimeObject
{
};

// Firebase.Auth.AuthUtilPINVOKE
struct AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270  : public RuntimeObject
{
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException
struct SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A  : public RuntimeObject
{
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D  : public RuntimeObject
{
};

// Firebase.Auth.FirebaseAuth/<>c
struct U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057  : public RuntimeObject
{
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t7F74AC30D537FBFE22F6D15897E1FFC338A8C498  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass11_0::<>4__this
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.SignInResult> Firebase.Auth.FirebaseAuth/<>c__DisplayClass11_0::taskCompletionSource
	TaskCompletionSource_1_t49D13F120C96CB33C1BDC538125A5AFC9EC846BF* ___taskCompletionSource_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tC70F5B358115CABCB91EF37DE2F8962D1926267A  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass12_0::<>4__this
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.AuthResult> Firebase.Auth.FirebaseAuth/<>c__DisplayClass12_0::taskCompletionSource
	TaskCompletionSource_1_tA7D35E202C7858F7B9E092F07BFBDBCF1CEF1274* ___taskCompletionSource_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0::auth
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___auth_0;
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0::app
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1
struct U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643  : public RuntimeObject
{
	// Firebase.InitResult Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1::init_result
	int32_t ___init_result_0;
	// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0 Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* ___CSU24U3CU3E8__locals1_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426  : public RuntimeObject
{
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_0::stateChangeClosure
	Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* ___stateChangeClosure_0;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1
struct U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1::auth
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___auth_0;
	// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_0 Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426* ___CSU24U3CU3E8__locals1_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_t9C43C3F57C2F39C9DBDFD8E99D4252F24B44F186  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IEnumerable`1<System.String>> Firebase.Auth.FirebaseAuth/<>c__DisplayClass44_0::taskCompletionSource
	TaskCompletionSource_1_tA60F5C217979823DB87631425DB793A895BA5315* ___taskCompletionSource_0;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t8EFCEB07A4612F009AED3FA5779CEB154806AA3A  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass48_0::<>4__this
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth/<>c__DisplayClass48_0::taskCompletionSource
	TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* ___taskCompletionSource_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0::<>4__this
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.AuthResult> Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0::taskCompletionSource
	TaskCompletionSource_1_tA7D35E202C7858F7B9E092F07BFBDBCF1CEF1274* ___taskCompletionSource_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_tD58D6A8C803E8AC9BC33D2D9D116D8846419D50F  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass50_0::<>4__this
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth/<>c__DisplayClass50_0::taskCompletionSource
	TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* ___taskCompletionSource_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass51_0
struct U3CU3Ec__DisplayClass51_0_t7A64750175A0B7BDE33CEE111E44616E21C42C18  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass51_0::<>4__this
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.SignInResult> Firebase.Auth.FirebaseAuth/<>c__DisplayClass51_0::taskCompletionSource
	TaskCompletionSource_1_t49D13F120C96CB33C1BDC538125A5AFC9EC846BF* ___taskCompletionSource_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_tDA6B712CD02A4A1D1A17D12F635D9107A5A7F7B8  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass52_0::<>4__this
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.AuthResult> Firebase.Auth.FirebaseAuth/<>c__DisplayClass52_0::taskCompletionSource
	TaskCompletionSource_1_tA7D35E202C7858F7B9E092F07BFBDBCF1CEF1274* ___taskCompletionSource_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass53_0
struct U3CU3Ec__DisplayClass53_0_t9CD244F39147FF12D5EA8AEDCFB4ED42F43C52A6  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass53_0::<>4__this
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth/<>c__DisplayClass53_0::taskCompletionSource
	TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* ___taskCompletionSource_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass54_0
struct U3CU3Ec__DisplayClass54_0_t7BA16C42339F390144B91CBC8714DB5E05A31537  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass54_0::<>4__this
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.AuthResult> Firebase.Auth.FirebaseAuth/<>c__DisplayClass54_0::taskCompletionSource
	TaskCompletionSource_1_tA7D35E202C7858F7B9E092F07BFBDBCF1CEF1274* ___taskCompletionSource_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass55_0
struct U3CU3Ec__DisplayClass55_0_t50665C682802EBD108430C3FB84B3605A8667EC9  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass55_0::<>4__this
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth/<>c__DisplayClass55_0::taskCompletionSource
	TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* ___taskCompletionSource_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass56_0
struct U3CU3Ec__DisplayClass56_0_tE7BC1957D329471EDFF0EC68E7854FE2D5BFEB5E  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass56_0::<>4__this
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.AuthResult> Firebase.Auth.FirebaseAuth/<>c__DisplayClass56_0::taskCompletionSource
	TaskCompletionSource_1_tA7D35E202C7858F7B9E092F07BFBDBCF1CEF1274* ___taskCompletionSource_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_t6DF8EC5FD76EB4AD0A34F47D788CCCFB7E378619  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass57_0::<>4__this
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth/<>c__DisplayClass57_0::taskCompletionSource
	TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* ___taskCompletionSource_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_tD208601270F6926262A695B8B622DE090E733FAF  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass58_0::<>4__this
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.AuthResult> Firebase.Auth.FirebaseAuth/<>c__DisplayClass58_0::taskCompletionSource
	TaskCompletionSource_1_tA7D35E202C7858F7B9E092F07BFBDBCF1CEF1274* ___taskCompletionSource_1;
};

// System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>
struct Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	AuthResult_t5BF95C4AB72884856E83E1580EFAB3355F0F9DAA* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Firebase.Auth.FetchProvidersResult>
struct Task_1_tB462149201177ED15C2B6D4F4F62D4B0DFC71564  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Firebase.Auth.SignInResult>
struct Task_1_tE044B471A8697F8A4C48A034BFE61C09DB17BDE8  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	SignInResult_t0237743B22D00F0796EC3735D24FDB4428111945* ___m_result_22;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// Firebase.Auth.FederatedAuthProvider
struct FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FederatedAuthProvider::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.FederatedAuthProvider::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.Auth.FederatedProviderData
struct FederatedProviderData_t817A9CD74E50256A8BEFBA6827DCD64085869682  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FederatedProviderData::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.FederatedProviderData::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.Auth.FetchProvidersResult
struct FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FetchProvidersResult::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.FetchProvidersResult::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2* ___appPlatform_16;
};

// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.FirebaseAuth::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::appProxy
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___appProxy_2;
	// System.IntPtr Firebase.Auth.FirebaseAuth::appCPtr
	intptr_t ___appCPtr_3;
	// System.IntPtr Firebase.Auth.FirebaseAuth::authStateListener
	intptr_t ___authStateListener_4;
	// System.IntPtr Firebase.Auth.FirebaseAuth::idTokenListener
	intptr_t ___idTokenListener_5;
	// System.EventHandler Firebase.Auth.FirebaseAuth::stateChangedImpl
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___stateChangedImpl_6;
	// System.EventHandler Firebase.Auth.FirebaseAuth::idTokenChangedImpl
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___idTokenChangedImpl_7;
	// System.Boolean Firebase.Auth.FirebaseAuth::persistentLoaded
	bool ___persistentLoaded_8;
};

// Firebase.InitializationException
struct InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E  : public Exception_t
{
	// Firebase.InitResult Firebase.InitializationException::<InitResult>k__BackingField
	int32_t ___U3CInitResultU3Ek__BackingField_18;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Firebase.StringList
struct StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.StringList::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.StringList::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<Firebase.Auth.FirebaseAuth>
struct Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// Firebase.Auth.FederatedOAuthProvider
struct FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506  : public FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FederatedOAuthProvider::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
};

// Firebase.Auth.FederatedOAuthProviderData
struct FederatedOAuthProviderData_t4A5AD4CBB4ACD54A60999A0DD116D8EB65FE778E  : public FederatedProviderData_t817A9CD74E50256A8BEFBA6827DCD64085869682
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FederatedOAuthProviderData::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051  : public MulticastDelegate_t
{
};

// Firebase.Auth.Future_AuthResult/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tDBA30C5A67741B1019B61FF9D48DD130CE6393DC  : public MulticastDelegate_t
{
};

// Firebase.Auth.Future_Credential/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t9E662009E934925D7D7A44DE7174BE598500E257  : public MulticastDelegate_t
{
};

// Firebase.Auth.Future_FetchProvidersResult/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t74D6A7A9C1563D7F8E5E41689C4ABFB87BDB9554  : public MulticastDelegate_t
{
};

// Firebase.Auth.Future_SignInResult/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tBF82F8CD52E738A53F766723168DEE904CF7940A  : public MulticastDelegate_t
{
};

// Firebase.Auth.Future_User/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78  : public MulticastDelegate_t
{
};

// Firebase.Auth.Future_User_Value/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tAF9E301A88DCA1BC338F672DB240C824229FA144  : public MulticastDelegate_t
{
};

// Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate
struct CodeSentDelegate_t5FE776456B1600539EA3FCADF4F155821F843735  : public MulticastDelegate_t
{
};

// Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate
struct TimeOutDelegate_t96FEFFA515EA85CB7B5C41E3413B7B8C168E2427  : public MulticastDelegate_t
{
};

// Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate
struct VerificationCompletedDelegate_tF55B9109A15CAB9EF2CAECDEDA082D6FA15C10C4  : public MulticastDelegate_t
{
};

// Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate_DEPRECATED
struct VerificationCompletedDelegate_DEPRECATED_t9C42EC20A22F71522F604997AE2A0D765A6DACD7  : public MulticastDelegate_t
{
};

// Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate
struct VerificationFailedDelegate_t0774384FF44CDE5C89A4A85ED4C2CD6045F5CFD5  : public MulticastDelegate_t
{
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1  : public MulticastDelegate_t
{
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A  : public MulticastDelegate_t
{
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IEnumerable`1<System.String>>

// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IEnumerable`1<System.String>>

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.AuthResult>

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.AuthResult>

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.SignInResult>

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.SignInResult>

// Firebase.Auth.AuthUtil

// Firebase.Auth.AuthUtil

// Firebase.Auth.AuthUtilPINVOKE
struct AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_StaticFields
{
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper Firebase.Auth.AuthUtilPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270* ___swigExceptionHelper_0;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper Firebase.Auth.AuthUtilPINVOKE::swigStringHelper
	SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D* ___swigStringHelper_1;
};

// Firebase.Auth.AuthUtilPINVOKE

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.ValueType

// System.ValueType

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields
{
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___applicationDelegate_0;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___arithmeticDelegate_1;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___divideByZeroDelegate_2;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___indexOutOfRangeDelegate_3;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___invalidCastDelegate_4;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___invalidOperationDelegate_5;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___ioDelegate_6;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___nullReferenceDelegate_7;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___outOfMemoryDelegate_8;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___overflowDelegate_9;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___systemDelegate_10;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___argumentDelegate_11;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___argumentNullDelegate_12;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___argumentOutOfRangeDelegate_13;
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper

// Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException
struct SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields
{
	// System.Int32 Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
	// System.Object Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::exceptionsLock
	RuntimeObject* ___exceptionsLock_2;
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException
struct SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields
{
	// System.Exception Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::pendingException
	Exception_t* ___pendingException_0;
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_StaticFields
{
	// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* ___stringDelegate_0;
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper

// Firebase.Auth.FirebaseAuth/<>c
struct U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_StaticFields
{
	// Firebase.Auth.FirebaseAuth/<>c Firebase.Auth.FirebaseAuth/<>c::<>9
	U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057* ___U3CU3E9_0;
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth/<>c::<>9__24_0
	Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* ___U3CU3E9__24_0_1;
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth/<>c::<>9__25_0
	Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* ___U3CU3E9__25_0_2;
};

// Firebase.Auth.FirebaseAuth/<>c

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass11_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass11_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass12_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass12_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass44_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass44_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass48_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass48_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass50_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass50_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass51_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass51_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass52_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass52_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass53_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass53_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass54_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass54_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass55_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass55_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass56_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass56_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass57_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass57_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass58_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass58_0

// System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>

// System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>

// System.Threading.Tasks.Task`1<Firebase.Auth.FetchProvidersResult>

// System.Threading.Tasks.Task`1<Firebase.Auth.FetchProvidersResult>

// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>

// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>

// System.Threading.Tasks.Task`1<Firebase.Auth.SignInResult>

// System.Threading.Tasks.Task`1<Firebase.Auth.SignInResult>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.HandleRef

// System.Runtime.InteropServices.HandleRef

// System.ApplicationException

// System.ApplicationException

// Firebase.Auth.FederatedAuthProvider

// Firebase.Auth.FederatedAuthProvider

// Firebase.Auth.FederatedProviderData

// Firebase.Auth.FederatedProviderData

// Firebase.Auth.FetchProvidersResult

// Firebase.Auth.FetchProvidersResult

// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields
{
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject* ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3* ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject* ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Boolean Firebase.FirebaseApp::userAgentRegistered
	bool ___userAgentRegistered_11;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_14;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject* ___CheckDependenciesThreadLock_15;
};

// Firebase.FirebaseApp

// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::appCPtrToAuth
	Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* ___appCPtrToAuth_9;
};

// Firebase.Auth.FirebaseAuth

// Firebase.InitializationException

// Firebase.InitializationException

// System.MulticastDelegate

// System.MulticastDelegate

// Firebase.StringList

// Firebase.StringList

// System.SystemException

// System.SystemException

// System.Action`1<Firebase.Auth.FirebaseAuth>

// System.Action`1<Firebase.Auth.FirebaseAuth>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.ArgumentException

// System.ArgumentException

// System.ArithmeticException

// System.ArithmeticException

// System.AsyncCallback

// System.AsyncCallback

// System.EventHandler

// System.EventHandler

// Firebase.Auth.FederatedOAuthProvider

// Firebase.Auth.FederatedOAuthProvider

// Firebase.Auth.FederatedOAuthProviderData

// Firebase.Auth.FederatedOAuthProviderData

// System.IO.IOException

// System.IO.IOException

// System.IndexOutOfRangeException

// System.IndexOutOfRangeException

// System.InvalidCastException

// System.InvalidCastException

// System.InvalidOperationException

// System.InvalidOperationException

// System.NullReferenceException

// System.NullReferenceException

// System.OutOfMemoryException

// System.OutOfMemoryException

// Firebase.Auth.FirebaseAuth/StateChangedDelegate

// Firebase.Auth.FirebaseAuth/StateChangedDelegate

// Firebase.Auth.Future_AuthResult/SWIG_CompletionDelegate

// Firebase.Auth.Future_AuthResult/SWIG_CompletionDelegate

// Firebase.Auth.Future_Credential/SWIG_CompletionDelegate

// Firebase.Auth.Future_Credential/SWIG_CompletionDelegate

// Firebase.Auth.Future_FetchProvidersResult/SWIG_CompletionDelegate

// Firebase.Auth.Future_FetchProvidersResult/SWIG_CompletionDelegate

// Firebase.Auth.Future_SignInResult/SWIG_CompletionDelegate

// Firebase.Auth.Future_SignInResult/SWIG_CompletionDelegate

// Firebase.Auth.Future_User/SWIG_CompletionDelegate

// Firebase.Auth.Future_User/SWIG_CompletionDelegate

// Firebase.Auth.Future_User_Value/SWIG_CompletionDelegate

// Firebase.Auth.Future_User_Value/SWIG_CompletionDelegate

// Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate

// Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate

// Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate

// Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate

// Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate

// Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate

// Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate_DEPRECATED

// Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate_DEPRECATED

// Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate

// Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate

// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate

// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.DivideByZeroException

// System.DivideByZeroException

// System.OverflowException

// System.OverflowException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth::CompleteSignInResultTask(System.Threading.Tasks.Task`1<Firebase.Auth.SignInResult>,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.SignInResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_CompleteSignInResultTask_m0768522B9FF967200A52841235D5341EBE045BFF (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, Task_1_tE044B471A8697F8A4C48A034BFE61C09DB17BDE8* ___0_task, TaskCompletionSource_1_t49D13F120C96CB33C1BDC538125A5AFC9EC846BF* ___1_taskCompletionSource, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth::CompleteAuthResultTask(System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.AuthResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_CompleteAuthResultTask_m49F73EBECFAEA889992BD9AF8C20A82A9E372004 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* ___0_task, TaskCompletionSource_1_tA7D35E202C7858F7B9E092F07BFBDBCF1CEF1274* ___1_taskCompletionSource, const RuntimeMethod* method) ;
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuthInternal(Firebase.FirebaseApp,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* FirebaseAuth_GetAuthInternal_m55709A4143C7E2EC3108ACF3706A971567ECF5E4 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, int32_t* ___1_init_result_out, const RuntimeMethod* method) ;
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m68E3C1F4B8BE16E94441B47A815203360CC4E47D (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* __this, int32_t ___0_result, const RuntimeMethod* method) ;
// System.Void System.Action`1<Firebase.Auth.FirebaseAuth>::Invoke(T)
inline void Action_1_Invoke_m1E7F3EF0DE14DA642C9C76E520CCF3422001A3B0_inline (Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* __this, FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17*, FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void Firebase.Auth.FirebaseAuth/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFD414BD20F66C697B495DF5E566C07B0F4B7804D (U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// TResult System.Threading.Tasks.Task`1<Firebase.Auth.FetchProvidersResult>::get_Result()
inline FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* Task_1_get_Result_m55521C7FF2D3D597A5F02DC2C81AB2800818E62E (Task_1_tB462149201177ED15C2B6D4F4F62D4B0DFC71564* __this, const RuntimeMethod* method)
{
	return ((  FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* (*) (Task_1_tB462149201177ED15C2B6D4F4F62D4B0DFC71564*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<System.String> Firebase.Auth.FetchProvidersResult::get_Providers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchProvidersResult_get_Providers_m491537D9A69A2412B70D5F726D2CB1120C881178 (FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IEnumerable`1<System.String>>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_m4A389517FAF82E787A2A80A676FC04228BF999C1 (TaskCompletionSource_1_tA60F5C217979823DB87631425DB793A895BA5315* __this, RuntimeObject* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tA60F5C217979823DB87631425DB793A895BA5315*, RuntimeObject*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared)(__this, ___0_result, method);
}
// System.Void Firebase.Auth.FirebaseAuth::CompleteFirebaseUserTask(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_CompleteFirebaseUserTask_m8B737EC46AD5F532A0DE7E90341A5FBC3E28DFC8 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___0_task, TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* ___1_taskCompletionSource, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___0_wrapper, intptr_t ___1_handle, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FetchProvidersResult::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchProvidersResult_Dispose_mF2598D4AEEB2675E759B41397340F24B3719A4DA (FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FetchProvidersResult::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchProvidersResult_Dispose_mC808CDA6986697CFBF9FEFDE1585B20D31CA34B6 (FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FetchProvidersResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FetchProvidersResult_m93D46C24A5030BA1413D52D1A26EC05B850E8E05 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FetchProvidersResult_Providers_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FetchProvidersResult_Providers_get_m15FF5FFD13E0DE6DD326639C5C6EA2F3AAAAA086 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void Firebase.StringList::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringList__ctor_mE8BF198CF78FE1F0CE2270373652B8C5F991E521 (StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE (const RuntimeMethod* method) ;
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51 (const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_FetchProvidersResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_FetchProvidersResult_m0BF6A06C828DF036972D9ACB428F85F805E7CDF3 (const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FetchProvidersResult::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchProvidersResult__ctor_mC602DBB1677CA3FDAF3C78A8A84EEFBA603613AC (FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FederatedAuthProvider::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FederatedAuthProvider_Dispose_mED9B374EF4B42A0BCB3358B6FED4A972F0ACD987 (FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FederatedAuthProvider(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FederatedAuthProvider_mFFAF5AC262CB697E85EF526569F935E814C06384 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FederatedOAuthProvider_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FederatedOAuthProvider_SWIGUpcast_m0300FCC0CB5547BF55ABD3B9BE146CB2CCA3D1A9 (intptr_t ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FederatedAuthProvider::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FederatedAuthProvider__ctor_m78323280B32D48FD01CA87508D0C30CDCC5D65BB (FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FederatedOAuthProvider(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FederatedOAuthProvider_mF7B6161AD3BA614A9BDEF30D90DA9ECF48657B50 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FederatedAuthProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FederatedAuthProvider_Dispose_m74D8A2815F985A6F330D561CDBB15AB0170874DA (FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_FederatedOAuthProvider__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_FederatedOAuthProvider__SWIG_0_m4840076A9EB400503DEBBDB9D066B2830B61104B (const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FederatedOAuthProvider::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FederatedOAuthProvider__ctor_mFA18C328B54461C935851B3B30772E396E2A286D (FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FederatedOAuthProviderData::getCPtr(Firebase.Auth.FederatedOAuthProviderData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FederatedOAuthProviderData_getCPtr_mD6D27CEE19C662611F374DA15585183160F8B851 (FederatedOAuthProviderData_t4A5AD4CBB4ACD54A60999A0DD116D8EB65FE778E* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_FederatedOAuthProvider__SWIG_1(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_FederatedOAuthProvider__SWIG_1_m2A2B6CF92FD4C6FB4DDA7F82F58EB372375F3888 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::FederatedOAuthProvider_SetProviderData(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FederatedOAuthProvider_SetProviderData_mC8BC038C8464C69A62E8AF08F6ED4720EF34881D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m6709B95358A2A3B65272194E10E6AFD106926A1C (SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_mC8327633A09D4DD655AA5FEA5A2A7BF7C841430E (SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mD3D5DF4565F2D8B785CECDDE06C94EB1AF3B7ACD (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m6D48FAE1D40F739EBE2EB7B7A2D35A4C38E273D2 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m5E4DFAD8B4B70C66EA34EC78307E69F6B0D8F7E7 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m05738E7A913471982107EC9DAFF8E575AD16D09D (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m7CEBADF8ADECB392731AD0215CA9D2162344E3EB (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m946F88971C00DC640C4A7FEFB4D820E03AFCBA8A (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m097E27E1B950DDEDBE75ECAA525FBA1F9CCC55FC (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m7103FEC1AD9831462CD640AF2BD4BD51B457BE24 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m477DE4F591DB31AFA8DFACEBACA2CCA81CD28367 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m5E2F92E1488F0943C4B43806F9F6EF812073D384 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m988E84E7A45B7FCE1EC1597585471AFA78B06887 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m21B2170535EECF45751C6F48948BC1322346A5F0 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m09944997FE4F760BD1423A7DC3082736F605535C (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7111A0768AC3707D3151755C7456E30482F974DF (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Exception Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E (const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B (Exception_t* ___0_e, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23 (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2 (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, Exception_t* ___2_innerException, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5 (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m3F2FB66273FFCF78BE237864E1209316F6FC195A (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_m5A0AC467CB894DA14A8D5FC72E1C4C0923C12E61 (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___0_applicationDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___1_arithmeticDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___2_divideByZeroDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___3_indexOutOfRangeDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___4_invalidCastDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___5_invalidOperationDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___6_ioDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___7_nullReferenceDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___8_outOfMemoryDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___9_overflowDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___10_systemExceptionDelegate, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_mAD9B1407D55B00A38D10D3CE2B615942F9BDDF0B (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___0_argumentDelegate, ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___1_argumentNullDelegate, ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___2_argumentOutOfRangeDelegate, const RuntimeMethod* method) ;
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m973E9F1971668A0D3BEA767B3479889D49CC39E3 (String_t* ___0_cString, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m39AE1969D572DCB5A0266DC4EAE96243DFFEDE6D (SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_mF1E51D0E5816C991DC9BD57E0668EEDCF81CA902 (SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* ___0_stringDelegate, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::ExportFix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_ExportFix_mDC7E0B0ACD89C6169FDA35052747F7896516C15D (const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::getCPtr(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseAuth_getCPtr_mF3D3A8469B4C252267CB1EBAC51D24A9DD11B6B8 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::CreateAuthStateListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_CreateAuthStateListener_m0A51BCF7288AC201F2774CB5506D5F5DEFFD2682 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::DestroyAuthStateListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_DestroyAuthStateListener_m79297782C9683325F91FB03C0577B3B02664EC31 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::CreateIdTokenListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_CreateIdTokenListener_m38F412B973371F0CFF8D891D71C97CE99022FDC5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::DestroyIdTokenListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_DestroyIdTokenListener_mACBDFF676A4BC45B7951C31647CFBDCED08D1B4D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_ExportFix();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_Clear(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_Add(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_size(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_capacity(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_reserve(void*, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_UserInfoInterfaceList__SWIG_0();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_UserInfoInterfaceList__SWIG_1(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_UserInfoInterfaceList__SWIG_2(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_getitemcopy(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_getitem(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_setitem(void*, int32_t, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_AddRange(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_GetRange(void*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_Insert(void*, int32_t, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_InsertRange(void*, int32_t, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_RemoveAt(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_RemoveRange(void*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_Repeat(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_Reverse__SWIG_0(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_Reverse__SWIG_1(void*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterfaceList_SetRange(void*, int32_t, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_UserInfoInterfaceList(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_Future_User();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_User_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_Future_User_SWIG_FreeCompletionData(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_User_GetResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_Future_User(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_Future_User_Value();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_User_Value_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_Future_User_Value_SWIG_FreeCompletionData(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_User_Value_GetResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_Future_User_Value(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_Future_FetchProvidersResult();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_FetchProvidersResult_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_Future_FetchProvidersResult_SWIG_FreeCompletionData(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_FetchProvidersResult_GetResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_Future_FetchProvidersResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_Future_Credential();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_Credential_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_Future_Credential_SWIG_FreeCompletionData(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_Credential_GetResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_Future_Credential(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_Future_SignInResult();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_SignInResult_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_Future_SignInResult_SWIG_FreeCompletionData(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_SignInResult_GetResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_Future_SignInResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_Future_AuthResult();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_AuthResult_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_Future_AuthResult_SWIG_FreeCompletionData(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_AuthResult_GetResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_Future_AuthResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_Credential();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_Credential(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Auth_CSharp_Credential_IsValid(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_Credential_Provider_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_PhoneAuthCredential__SWIG_0();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_PhoneAuthCredential__SWIG_1(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthCredential_SmsCodeInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_PhoneAuthCredential(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_EmailAuthProvider_GetCredential(char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_EmailAuthProvider_ProviderId_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_EmailAuthProvider(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FacebookAuthProvider_GetCredential(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_FacebookAuthProvider_ProviderId_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_FacebookAuthProvider(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_GameCenterAuthProvider_GetCredential();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Auth_CSharp_GameCenterAuthProvider_IsPlayerAuthenticated();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_GameCenterAuthProvider_ProviderId_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_GameCenterAuthProvider(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_GitHubAuthProvider_GetCredential(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_GitHubAuthProvider_ProviderId_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_GitHubAuthProvider(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_GoogleAuthProvider_GetCredential(char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_GoogleAuthProvider_ProviderId_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_GoogleAuthProvider(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_MicrosoftAuthProvider_ProviderId_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_MicrosoftAuthProvider();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_MicrosoftAuthProvider(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_OAuthProvider_GetCredential__SWIG_0(char*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_OAuthProvider_GetCredential__SWIG_1(char*, char*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_OAuthProvider(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthProviderInternal_GetCredential(void*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthProviderInternal_GetCredential_DEPRECATED(void*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthProviderInternal_GetInstance(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthProviderInternal_ProviderId_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthProviderInternal_VerifyPhoneNumberInternal__SWIG_0(void*, char*, uint32_t, void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthProviderInternal_VerifyPhoneNumberInternal__SWIG_1(void*, void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthProviderInternal_DestroyListenerImplInternal(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthProviderInternal_SetCallbacks(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_ForceResendingToken(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_PhoneAuthOptions();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthOptions_ForceResendingToken_set(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthOptions_ForceResendingToken_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthOptions_PhoneNumber_set(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthOptions_PhoneNumber_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthOptions_TimeoutInMilliseconds_set(void*, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthOptions_TimeoutInMilliseconds_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_PhoneAuthOptions(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_PlayGamesAuthProvider_GetCredential(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_PlayGamesAuthProvider_ProviderId_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_PlayGamesAuthProvider(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_TwitterAuthProvider_GetCredential(char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_TwitterAuthProvider_ProviderId_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_TwitterAuthProvider(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_YahooAuthProvider_ProviderId_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_YahooAuthProvider();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_YahooAuthProvider(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_FederatedProviderData_ProviderId_set(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_FederatedProviderData_ProviderId_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_FederatedProviderData();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_FederatedProviderData(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_FederatedOAuthProviderData__SWIG_0();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_FederatedOAuthProviderData__SWIG_1(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_FederatedOAuthProviderData_Scopes_set(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FederatedOAuthProviderData_Scopes_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_FederatedOAuthProviderData_CustomParameters_set(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FederatedOAuthProviderData_CustomParameters_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_FederatedOAuthProviderData(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_UserInfoInterface(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterface_UserId_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterface_Email_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterface_DisplayName_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterface_PhotoUrlInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterface_ProviderId_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterface_PhoneNumberInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_UserInfoInterface();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_AdditionalUserInfo_ProviderId_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_AdditionalUserInfo_UserName_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_AdditionalUserInfo_ProfileInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_AdditionalUserInfo_UpdatedCredential_set(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_AdditionalUserInfo_UpdatedCredential_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_AdditionalUserInfo(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_UserMetadata();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C uint64_t DEFAULT_CALL Firebase_Auth_CSharp_UserMetadata_LastSignInTimestamp_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C uint64_t DEFAULT_CALL Firebase_Auth_CSharp_UserMetadata_CreationTimestamp_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_UserMetadata(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_SignInResult_UserInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_SignInResult_Info_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_SignInResult_Meta_set(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_SignInResult_Meta_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_SignInResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_FirebaseUser__SWIG_0();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_FirebaseUser__SWIG_1(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_FirebaseUser(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_IsValid(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_Token(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_UpdateEmail(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_UpdatePassword(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_Reauthenticate(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_ReauthenticateAndRetrieveDataInternalAsync(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_ReauthenticateAndRetrieveDataInternalAsync_DEPRECATED(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_ReauthenticateWithProviderInternalAsync(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_ReauthenticateWithProviderInternalAsync_DEPRECATED(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_SendEmailVerification(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_UpdateUserProfile(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_LinkWithCredentialInternalAsync(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_LinkWithCredentialInternalAsync_DEPRECATED(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_LinkAndRetrieveDataWithCredentialInternalAsync(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_LinkWithProviderInternalAsync(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_LinkWithProviderInternalAsync_DEPRECATED(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_UnlinkInternalAsync(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_UnlinkInternalAsync_DEPRECATED(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_UpdatePhoneNumberCredentialInternalAsync(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_UpdatePhoneNumberCredentialInternalAsync_DEPRECATED(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_Reload(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_Delete(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_EqualToInternal(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_DisplayName_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_Email_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_IsAnonymous_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_IsEmailVerified_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_Metadata_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_PhoneNumber_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_PhotoUrlInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_ProviderData_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_ProviderId_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_UserId_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_UserProfile();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_UserProfile_DisplayName_set(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_UserProfile_DisplayName_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_UserProfile_PhotoUrlInternal_set(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_UserProfile_PhotoUrlInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_UserProfile(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_AuthResult_AdditionalUserInfoInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_AuthResult_CredentialInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_AuthResult_UserInternal_set(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_AuthResult_UserInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_AuthResult();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_AuthResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_FirebaseAuth(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_LanguageCodeInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SetLanguageCodeInternal(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_UseAppLanguage(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_FetchProvidersForEmailInternal(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignInWithCustomTokenInternalAsync(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignInWithCustomTokenInternalAsync_DEPRECATED(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignInWithCredentialInternalAsync(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignInWithCredential_DEPRECATED(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignInWithProviderInternalAsync(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignInWithProviderInternalAsync_DEPRECATED(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignInAndRetrieveDataWithCredentialInternalAsync(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignInAndRetrieveDataWithCredentialInternalAsync_DEPRECATED(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignInAnonymouslyInternalAsync(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignInAnonymouslyInternalAsync_DEPRECATED(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignInWithEmailAndPasswordInternalAsync(void*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_DEPRECATED(void*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_CreateUserWithEmailAndPasswordInternalAsync(void*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_CreateUserWithEmailAndPasswordInternalAsync_DEPRECATED(void*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignOut(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SendPasswordResetEmail(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_GetAuthInternal(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_LogHeartbeatInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_ReleaseReferenceInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_CurrentUserInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FetchProvidersResult_Providers_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_FetchProvidersResult();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_FetchProvidersResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_FederatedAuthProvider(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_FederatedOAuthProvider__SWIG_0();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_new_FederatedOAuthProvider__SWIG_1(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_FederatedOAuthProvider(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_FederatedOAuthProvider_SetProviderData(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_CreateAuthStateListener(void*, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_DestroyAuthStateListener(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_CreateIdTokenListener(void*, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_DestroyIdTokenListener(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_User_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_User_Value_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_FetchProvidersResult_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_Credential_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_SignInResult_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_AuthResult_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthCredential_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FederatedOAuthProviderData_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FederatedOAuthProvider_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_AuthUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_AuthUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_AuthUtil(Il2CppMethodPointer);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_Multicast(StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, intptr_t ___0_authCPtr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* currentDelegate = reinterpret_cast<StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_authCPtr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_OpenInst(StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, intptr_t ___0_authCPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_authCPtr, method);
}
void StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_OpenStatic(StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, intptr_t ___0_authCPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_authCPtr, method);
}
void StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_OpenStaticInvoker(StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, intptr_t ___0_authCPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_authCPtr);
}
void StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_ClosedStaticInvoker(StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, intptr_t ___0_authCPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_authCPtr);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051 (StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, intptr_t ___0_authCPtr, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_authCPtr);

}
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate__ctor_m971B96650420F9DD96060A076F8D39527962C42F (StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_Multicast;
}
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4 (StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, intptr_t ___0_authCPtr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_authCPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Firebase.Auth.FirebaseAuth/StateChangedDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateChangedDelegate_BeginInvoke_mD693B629D187A152A531E572BFACADE4F1C29630 (StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, intptr_t ___0_authCPtr, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_authCPtr);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate_EndInvoke_mFC38D33810C58121DB8E8208B57F122AE3E7B062 (StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m9FC10C76D4A409FFA03F213C7556B0E3C9A0732A (U3CU3Ec__DisplayClass11_0_t7F74AC30D537FBFE22F6D15897E1FFC338A8C498* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass11_0::<SignInWithProviderAsync_DEPRECATED>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.SignInResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CSignInWithProviderAsync_DEPRECATEDU3Eb__0_mCDEF1CDD2DEDBB800981B3F3FDEACFA491314C41 (U3CU3Ec__DisplayClass11_0_t7F74AC30D537FBFE22F6D15897E1FFC338A8C498* __this, Task_1_tE044B471A8697F8A4C48A034BFE61C09DB17BDE8* ___0_task, const RuntimeMethod* method) 
{
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___U3CU3E4__this_0;
		Task_1_tE044B471A8697F8A4C48A034BFE61C09DB17BDE8* L_1 = ___0_task;
		TaskCompletionSource_1_t49D13F120C96CB33C1BDC538125A5AFC9EC846BF* L_2 = __this->___taskCompletionSource_1;
		NullCheck(L_0);
		FirebaseAuth_CompleteSignInResultTask_m0768522B9FF967200A52841235D5341EBE045BFF(L_0, L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m9A50F11AE8DFD82551CA1C2E1E714351C57000B5 (U3CU3Ec__DisplayClass12_0_tC70F5B358115CABCB91EF37DE2F8962D1926267A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass12_0::<SignInWithProviderAsync>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CSignInWithProviderAsyncU3Eb__0_mB93634AF3387F37941F1E4B073855C244DCCD02E (U3CU3Ec__DisplayClass12_0_tC70F5B358115CABCB91EF37DE2F8962D1926267A* __this, Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* ___0_task, const RuntimeMethod* method) 
{
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___U3CU3E4__this_0;
		Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* L_1 = ___0_task;
		TaskCompletionSource_1_tA7D35E202C7858F7B9E092F07BFBDBCF1CEF1274* L_2 = __this->___taskCompletionSource_1;
		NullCheck(L_0);
		FirebaseAuth_CompleteAuthResultTask_m49F73EBECFAEA889992BD9AF8C20A82A9E372004(L_0, L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m5BA94BEA2582743E481859C1F4376480C97E43C0 (U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_1__ctor_mF8D8387CF1928604864B73AD3B866729F15CEC7C (U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1::<GetAuth>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_1_U3CGetAuthU3Eb__0_mB1A8F1DF269278FF25902E6A86AE0F9797ABA8EF (U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_1 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_1);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_2 = L_1->___app_1;
		int32_t* L_3 = (&__this->___init_result_0);
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_4;
		L_4 = FirebaseAuth_GetAuthInternal_m55709A4143C7E2EC3108ACF3706A971567ECF5E4(L_2, L_3, NULL);
		NullCheck(L_0);
		L_0->___auth_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___auth_0), (void*)L_4);
		int32_t L_5 = __this->___init_result_0;
		V_0 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_7 = __this->___init_result_0;
		InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* L_8 = (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InitializationException__ctor_m68E3C1F4B8BE16E94441B47A815203360CC4E47D(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass20_1_U3CGetAuthU3Eb__0_mB1A8F1DF269278FF25902E6A86AE0F9797ABA8EF_RuntimeMethod_var)));
	}

IL_003c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m9976BF776BAC98193D01D29B902FB24CFE64AEC2 (U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_1__ctor_mF48D1CFC3A407C0177EA4DD27B47C71EE7B9122E (U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1::<ForwardStateChange>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_1_U3CForwardStateChangeU3Eb__0_m95B57ED08D8D92E50775CFEDB0AE034745CC1E9D (U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A* __this, const RuntimeMethod* method) 
{
	{
		U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* L_1 = L_0->___stateChangeClosure_0;
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_2 = __this->___auth_0;
		NullCheck(L_1);
		Action_1_Invoke_m1E7F3EF0DE14DA642C9C76E520CCF3422001A3B0_inline(L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2679267971D705E9EC045B2D7F18588CA504DCF5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057* L_0 = (U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057*)il2cpp_codegen_object_new(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mFD414BD20F66C697B495DF5E566C07B0F4B7804D(L_0, NULL);
		((U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFD414BD20F66C697B495DF5E566C07B0F4B7804D (U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c::<StateChangedFunction>b__24_0(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStateChangedFunctionU3Eb__24_0_m25FE5EF7275A4E54EEAD23507A99E08D71CC9297 (U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057* __this, FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_auth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = ___0_auth;
		NullCheck(L_0);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0->___stateChangedImpl_6;
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_3 = ___0_auth;
		NullCheck(L_3);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_4 = L_3->___stateChangedImpl_6;
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_5 = ___0_auth;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_6 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_4);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(L_4, L_5, L_6, NULL);
	}

IL_0022:
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_7 = ___0_auth;
		NullCheck(L_7);
		L_7->___persistentLoaded_8 = (bool)1;
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c::<IdTokenChangedFunction>b__25_0(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CIdTokenChangedFunctionU3Eb__25_0_mD56E4FFCA8F83F4DA4DFAB740C7EDCB29DCA06D3 (U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057* __this, FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_auth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = ___0_auth;
		NullCheck(L_0);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0->___idTokenChangedImpl_7;
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_3 = ___0_auth;
		NullCheck(L_3);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_4 = L_3->___idTokenChangedImpl_7;
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_5 = ___0_auth;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_6 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_4);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(L_4, L_5, L_6, NULL);
	}

IL_0022:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass44_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0__ctor_mBA511430E849AD534B0681AD8121569EDFBF520F (U3CU3Ec__DisplayClass44_0_t9C43C3F57C2F39C9DBDFD8E99D4252F24B44F186* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass44_0::<FetchProvidersForEmailAsync>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.FetchProvidersResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0_U3CFetchProvidersForEmailAsyncU3Eb__0_m7F3EA658C847091688E39F4D26DF3D2977E7322F (U3CU3Ec__DisplayClass44_0_t9C43C3F57C2F39C9DBDFD8E99D4252F24B44F186* __this, Task_1_tB462149201177ED15C2B6D4F4F62D4B0DFC71564* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m4A389517FAF82E787A2A80A676FC04228BF999C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m55521C7FF2D3D597A5F02DC2C81AB2800818E62E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t G_B3_0 = 0;
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		Task_1_tB462149201177ED15C2B6D4F4F62D4B0DFC71564* L_1 = ___0_t;
		NullCheck(L_1);
		FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* L_2;
		L_2 = Task_1_get_Result_m55521C7FF2D3D597A5F02DC2C81AB2800818E62E(L_1, Task_1_get_Result_m55521C7FF2D3D597A5F02DC2C81AB2800818E62E_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		Task_1_tB462149201177ED15C2B6D4F4F62D4B0DFC71564* L_3 = ___0_t;
		NullCheck(L_3);
		FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* L_4;
		L_4 = Task_1_get_Result_m55521C7FF2D3D597A5F02DC2C81AB2800818E62E(L_3, Task_1_get_Result_m55521C7FF2D3D597A5F02DC2C81AB2800818E62E_RuntimeMethod_var);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = FetchProvidersResult_get_Providers_m491537D9A69A2412B70D5F726D2CB1120C881178(L_4, NULL);
		G_B3_0 = ((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		Task_1_tB462149201177ED15C2B6D4F4F62D4B0DFC71564* L_7 = ___0_t;
		NullCheck(L_7);
		FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* L_8;
		L_8 = Task_1_get_Result_m55521C7FF2D3D597A5F02DC2C81AB2800818E62E(L_7, Task_1_get_Result_m55521C7FF2D3D597A5F02DC2C81AB2800818E62E_RuntimeMethod_var);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = FetchProvidersResult_get_Providers_m491537D9A69A2412B70D5F726D2CB1120C881178(L_8, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_9);
		V_2 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_2;
					if (!L_11)
					{
						goto IL_005e;
					}
				}
				{
					RuntimeObject* L_12 = V_2;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_005e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004a_1;
			}

IL_0039_1:
			{
				RuntimeObject* L_13 = V_2;
				NullCheck(L_13);
				String_t* L_14;
				L_14 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_13);
				V_3 = L_14;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = V_0;
				String_t* L_16 = V_3;
				NullCheck(L_15);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_15, L_16, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_004a_1:
			{
				RuntimeObject* L_17 = V_2;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_0039_1;
				}
			}
			{
				goto IL_005f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
	}

IL_0060:
	{
		TaskCompletionSource_1_tA60F5C217979823DB87631425DB793A895BA5315* L_19 = __this->___taskCompletionSource_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = V_0;
		NullCheck(L_19);
		TaskCompletionSource_1_SetResult_m4A389517FAF82E787A2A80A676FC04228BF999C1(L_19, L_20, TaskCompletionSource_1_SetResult_m4A389517FAF82E787A2A80A676FC04228BF999C1_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m8243C64A231F9505C62F38611FAB7F2C4AC7F10C (U3CU3Ec__DisplayClass48_0_t8EFCEB07A4612F009AED3FA5779CEB154806AA3A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass48_0::<SignInWithCustomTokenAsync_DEPRECATED>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0_U3CSignInWithCustomTokenAsync_DEPRECATEDU3Eb__0_mD1D78C53CC97AE66149346577679CD8679F01B5E (U3CU3Ec__DisplayClass48_0_t8EFCEB07A4612F009AED3FA5779CEB154806AA3A* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___0_task, const RuntimeMethod* method) 
{
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___U3CU3E4__this_0;
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_1 = ___0_task;
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_2 = __this->___taskCompletionSource_1;
		NullCheck(L_0);
		FirebaseAuth_CompleteFirebaseUserTask_m8B737EC46AD5F532A0DE7E90341A5FBC3E28DFC8(L_0, L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0__ctor_m41D9546731C9E5DBA791D6B2355E5363C7FBF20A (U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0::<SignInWithCustomTokenAsync>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0_U3CSignInWithCustomTokenAsyncU3Eb__0_m730CD216FD083D71063CE7ED61FAE55EA900AB79 (U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3* __this, Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* ___0_task, const RuntimeMethod* method) 
{
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___U3CU3E4__this_0;
		Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* L_1 = ___0_task;
		TaskCompletionSource_1_tA7D35E202C7858F7B9E092F07BFBDBCF1CEF1274* L_2 = __this->___taskCompletionSource_1;
		NullCheck(L_0);
		FirebaseAuth_CompleteAuthResultTask_m49F73EBECFAEA889992BD9AF8C20A82A9E372004(L_0, L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass50_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0__ctor_m8CF09DF59520108EE6FD50030E5CF279E62ACC39 (U3CU3Ec__DisplayClass50_0_tD58D6A8C803E8AC9BC33D2D9D116D8846419D50F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass50_0::<SignInWithCredentialAsync>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0_U3CSignInWithCredentialAsyncU3Eb__0_m0F9678B474FFC90E1B35F9CE7D27D866FEFB2C43 (U3CU3Ec__DisplayClass50_0_tD58D6A8C803E8AC9BC33D2D9D116D8846419D50F* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___0_task, const RuntimeMethod* method) 
{
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___U3CU3E4__this_0;
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_1 = ___0_task;
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_2 = __this->___taskCompletionSource_1;
		NullCheck(L_0);
		FirebaseAuth_CompleteFirebaseUserTask_m8B737EC46AD5F532A0DE7E90341A5FBC3E28DFC8(L_0, L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass51_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0__ctor_m764D265B0F9483E28C2A87E9B69AB1B4C29B29DB (U3CU3Ec__DisplayClass51_0_t7A64750175A0B7BDE33CEE111E44616E21C42C18* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass51_0::<SignInAndRetrieveDataWithCredentialAsync_DEPRECATED>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.SignInResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0_U3CSignInAndRetrieveDataWithCredentialAsync_DEPRECATEDU3Eb__0_mC11D4D68A854A4F1D6CEDEA132B08DC6002AF5F0 (U3CU3Ec__DisplayClass51_0_t7A64750175A0B7BDE33CEE111E44616E21C42C18* __this, Task_1_tE044B471A8697F8A4C48A034BFE61C09DB17BDE8* ___0_task, const RuntimeMethod* method) 
{
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___U3CU3E4__this_0;
		Task_1_tE044B471A8697F8A4C48A034BFE61C09DB17BDE8* L_1 = ___0_task;
		TaskCompletionSource_1_t49D13F120C96CB33C1BDC538125A5AFC9EC846BF* L_2 = __this->___taskCompletionSource_1;
		NullCheck(L_0);
		FirebaseAuth_CompleteSignInResultTask_m0768522B9FF967200A52841235D5341EBE045BFF(L_0, L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass52_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0__ctor_m1296862205350FCC48EE1C16761361D5A18BA7F0 (U3CU3Ec__DisplayClass52_0_tDA6B712CD02A4A1D1A17D12F635D9107A5A7F7B8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass52_0::<SignInAndRetrieveDataWithCredentialAsync>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0_U3CSignInAndRetrieveDataWithCredentialAsyncU3Eb__0_mEAE95366176AE13162CBB7A58D916335B6B40BB1 (U3CU3Ec__DisplayClass52_0_tDA6B712CD02A4A1D1A17D12F635D9107A5A7F7B8* __this, Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* ___0_task, const RuntimeMethod* method) 
{
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___U3CU3E4__this_0;
		Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* L_1 = ___0_task;
		TaskCompletionSource_1_tA7D35E202C7858F7B9E092F07BFBDBCF1CEF1274* L_2 = __this->___taskCompletionSource_1;
		NullCheck(L_0);
		FirebaseAuth_CompleteAuthResultTask_m49F73EBECFAEA889992BD9AF8C20A82A9E372004(L_0, L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass53_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass53_0__ctor_mEF72104CD2D0F5D099E91229C44EF1A1CDACAB5B (U3CU3Ec__DisplayClass53_0_t9CD244F39147FF12D5EA8AEDCFB4ED42F43C52A6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass53_0::<SignInAnonymouslyAsync_DEPRECATED>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass53_0_U3CSignInAnonymouslyAsync_DEPRECATEDU3Eb__0_m8BF8F9A169A0BF2CF5A76E2A44F2327AA71D0CB0 (U3CU3Ec__DisplayClass53_0_t9CD244F39147FF12D5EA8AEDCFB4ED42F43C52A6* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___0_task, const RuntimeMethod* method) 
{
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___U3CU3E4__this_0;
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_1 = ___0_task;
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_2 = __this->___taskCompletionSource_1;
		NullCheck(L_0);
		FirebaseAuth_CompleteFirebaseUserTask_m8B737EC46AD5F532A0DE7E90341A5FBC3E28DFC8(L_0, L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass54_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass54_0__ctor_m726558D810C52F50B53CA9AFB78599A1124C6D59 (U3CU3Ec__DisplayClass54_0_t7BA16C42339F390144B91CBC8714DB5E05A31537* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass54_0::<SignInAnonymouslyAsync>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass54_0_U3CSignInAnonymouslyAsyncU3Eb__0_m237938FC38E93A673E2AD0670273F3BBF3F1BAD6 (U3CU3Ec__DisplayClass54_0_t7BA16C42339F390144B91CBC8714DB5E05A31537* __this, Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* ___0_task, const RuntimeMethod* method) 
{
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___U3CU3E4__this_0;
		Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* L_1 = ___0_task;
		TaskCompletionSource_1_tA7D35E202C7858F7B9E092F07BFBDBCF1CEF1274* L_2 = __this->___taskCompletionSource_1;
		NullCheck(L_0);
		FirebaseAuth_CompleteAuthResultTask_m49F73EBECFAEA889992BD9AF8C20A82A9E372004(L_0, L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass55_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass55_0__ctor_m0B013C57C8321A5760C83AB0064EFBEBDC95BDE2 (U3CU3Ec__DisplayClass55_0_t50665C682802EBD108430C3FB84B3605A8667EC9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass55_0::<SignInWithEmailAndPasswordAsync_DEPRECATED>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass55_0_U3CSignInWithEmailAndPasswordAsync_DEPRECATEDU3Eb__0_mC9FC304111D10F33E9E253E50C7D560FC30BB22F (U3CU3Ec__DisplayClass55_0_t50665C682802EBD108430C3FB84B3605A8667EC9* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___0_task, const RuntimeMethod* method) 
{
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___U3CU3E4__this_0;
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_1 = ___0_task;
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_2 = __this->___taskCompletionSource_1;
		NullCheck(L_0);
		FirebaseAuth_CompleteFirebaseUserTask_m8B737EC46AD5F532A0DE7E90341A5FBC3E28DFC8(L_0, L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass56_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass56_0__ctor_m181D57F41B6BE1F40E9BD38C890FC9AD3CF942BE (U3CU3Ec__DisplayClass56_0_tE7BC1957D329471EDFF0EC68E7854FE2D5BFEB5E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass56_0::<SignInWithEmailAndPasswordAsync>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass56_0_U3CSignInWithEmailAndPasswordAsyncU3Eb__0_m5C1922EBB9F63740357904801DACCFBCFD253ABA (U3CU3Ec__DisplayClass56_0_tE7BC1957D329471EDFF0EC68E7854FE2D5BFEB5E* __this, Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* ___0_task, const RuntimeMethod* method) 
{
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___U3CU3E4__this_0;
		Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* L_1 = ___0_task;
		TaskCompletionSource_1_tA7D35E202C7858F7B9E092F07BFBDBCF1CEF1274* L_2 = __this->___taskCompletionSource_1;
		NullCheck(L_0);
		FirebaseAuth_CompleteAuthResultTask_m49F73EBECFAEA889992BD9AF8C20A82A9E372004(L_0, L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass57_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0__ctor_mCDD0A64581A9D3D3495EB02523597A9C82E06B58 (U3CU3Ec__DisplayClass57_0_t6DF8EC5FD76EB4AD0A34F47D788CCCFB7E378619* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass57_0::<CreateUserWithEmailAndPasswordAsync_DEPRECATED>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0_U3CCreateUserWithEmailAndPasswordAsync_DEPRECATEDU3Eb__0_mB4DAEFDC517C1A517790A69117F34F6C52F195BE (U3CU3Ec__DisplayClass57_0_t6DF8EC5FD76EB4AD0A34F47D788CCCFB7E378619* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___0_task, const RuntimeMethod* method) 
{
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___U3CU3E4__this_0;
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_1 = ___0_task;
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_2 = __this->___taskCompletionSource_1;
		NullCheck(L_0);
		FirebaseAuth_CompleteFirebaseUserTask_m8B737EC46AD5F532A0DE7E90341A5FBC3E28DFC8(L_0, L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass58_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0__ctor_mCA8197BD3E9530D5E499600AFB78ABA9310E4531 (U3CU3Ec__DisplayClass58_0_tD208601270F6926262A695B8B622DE090E733FAF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass58_0::<CreateUserWithEmailAndPasswordAsync>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0_U3CCreateUserWithEmailAndPasswordAsyncU3Eb__0_m3EC99E966A7CABE78943F2EDCC955198656A6A49 (U3CU3Ec__DisplayClass58_0_tD208601270F6926262A695B8B622DE090E733FAF* __this, Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* ___0_task, const RuntimeMethod* method) 
{
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___U3CU3E4__this_0;
		Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* L_1 = ___0_task;
		TaskCompletionSource_1_tA7D35E202C7858F7B9E092F07BFBDBCF1CEF1274* L_2 = __this->___taskCompletionSource_1;
		NullCheck(L_0);
		FirebaseAuth_CompleteAuthResultTask_m49F73EBECFAEA889992BD9AF8C20A82A9E372004(L_0, L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FetchProvidersResult::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchProvidersResult__ctor_mC602DBB1677CA3FDAF3C78A8A84EEFBA603613AC (FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___1_cMemoryOwn;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FetchProvidersResult::getCPtr(Firebase.Auth.FetchProvidersResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FetchProvidersResult_getCPtr_m3711D1597EE84BBB1AC9D1EE41D99605BBFFCC35 (FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* L_1 = ___0_obj;
		NullCheck(L_1);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1->___swigCPtr_0;
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), NULL, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5 = V_0;
		return L_5;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FetchProvidersResult::swigRelease(Firebase.Auth.FetchProvidersResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FetchProvidersResult_swigRelease_mE499F05F485E2EE447E7D3906F0FC7F479BE6A9D (FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* L_0 = ___0_obj;
		V_0 = (bool)((!(((RuntimeObject*)(FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* L_2 = ___0_obj;
		NullCheck(L_2);
		bool L_3 = L_2->___swigCMemOwn_1;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_5 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral48189E861560CEBB714411DF089B9ECCF7761320)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FetchProvidersResult_swigRelease_mE499F05F485E2EE447E7D3906F0FC7F479BE6A9D_RuntimeMethod_var)));
	}

IL_0022:
	{
		FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* L_6 = ___0_obj;
		NullCheck(L_6);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = L_6->___swigCPtr_0;
		V_1 = L_7;
		FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* L_8 = ___0_obj;
		NullCheck(L_8);
		L_8->___swigCMemOwn_1 = (bool)0;
		FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* L_9 = ___0_obj;
		NullCheck(L_9);
		FetchProvidersResult_Dispose_mF2598D4AEEB2675E759B41397340F24B3719A4DA(L_9, NULL);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_10 = V_1;
		V_3 = L_10;
		goto IL_004a;
	}

IL_003b:
	{
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_12;
		memset((&L_12), 0, sizeof(L_12));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_12), NULL, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		goto IL_004a;
	}

IL_004a:
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13 = V_3;
		return L_13;
	}
}
// System.Void Firebase.Auth.FetchProvidersResult::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchProvidersResult_Finalize_mDA784F16813D7AE35373BAB4FBC1C4C89A7C08D5 (FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			FetchProvidersResult_Dispose_mC808CDA6986697CFBF9FEFDE1585B20D31CA34B6(__this, (bool)0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Auth.FetchProvidersResult::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchProvidersResult_Dispose_mF2598D4AEEB2675E759B41397340F24B3719A4DA (FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FetchProvidersResult_Dispose_mC808CDA6986697CFBF9FEFDE1585B20D31CA34B6(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FetchProvidersResult::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchProvidersResult_Dispose_mC808CDA6986697CFBF9FEFDE1585B20D31CA34B6 (FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0072;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0072:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_4 = (&__this->___swigCPtr_0);
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_4, NULL);
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_005e_1;
				}
			}
			{
				bool L_9 = __this->___swigCMemOwn_1;
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_004c_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_11 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
				AuthUtilPINVOKE_delete_FetchProvidersResult_m93D46C24A5030BA1413D52D1A26EC05B850E8E05(L_11, NULL);
			}

IL_004c_1:
			{
				intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13;
				memset((&L_13), 0, sizeof(L_13));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_13), NULL, L_12, /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_005e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Firebase.Auth.FetchProvidersResult::get_Providers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchProvidersResult_get_Providers_m491537D9A69A2412B70D5F726D2CB1120C881178 (FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* G_B3_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = AuthUtilPINVOKE_FetchProvidersResult_Providers_get_m15FF5FFD13E0DE6DD326639C5C6EA2F3AAAAA086(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		intptr_t L_5 = V_0;
		StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* L_6 = (StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451*)il2cpp_codegen_object_new(StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StringList__ctor_mE8BF198CF78FE1F0CE2270373652B8C5F991E521(L_6, L_5, (bool)0, NULL);
		G_B3_0 = L_6;
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = ((StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451*)(NULL));
	}

IL_0024:
	{
		V_1 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_9;
		L_9 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FetchProvidersResult_get_Providers_m491537D9A69A2412B70D5F726D2CB1120C881178_RuntimeMethod_var)));
	}

IL_0034:
	{
		StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* L_10 = V_1;
		V_3 = L_10;
		goto IL_0038;
	}

IL_0038:
	{
		RuntimeObject* L_11 = V_3;
		return L_11;
	}
}
// System.Void Firebase.Auth.FetchProvidersResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchProvidersResult__ctor_m58E551FE8B15D4EF27788710947B48D9261FA78A (FetchProvidersResult_t40819EDBD59FA39A3C18603E1F730AAAEBE27035* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = AuthUtilPINVOKE_new_FetchProvidersResult_m0BF6A06C828DF036972D9ACB428F85F805E7CDF3(NULL);
		FetchProvidersResult__ctor_mC602DBB1677CA3FDAF3C78A8A84EEFBA603613AC(__this, L_0, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FetchProvidersResult__ctor_m58E551FE8B15D4EF27788710947B48D9261FA78A_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FederatedAuthProvider::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FederatedAuthProvider__ctor_m78323280B32D48FD01CA87508D0C30CDCC5D65BB (FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___1_cMemoryOwn;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FederatedAuthProvider::getCPtr(Firebase.Auth.FederatedAuthProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FederatedAuthProvider_getCPtr_m0F52276224DA51F5DCF38C5610E390DD17C1C6F5 (FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E* L_1 = ___0_obj;
		NullCheck(L_1);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1->___swigCPtr_0;
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), NULL, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5 = V_0;
		return L_5;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FederatedAuthProvider::swigRelease(Firebase.Auth.FederatedAuthProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FederatedAuthProvider_swigRelease_m3D9606F0A210E2D35EFE21F340796B2B1DF7E53E (FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E* L_0 = ___0_obj;
		V_0 = (bool)((!(((RuntimeObject*)(FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E* L_2 = ___0_obj;
		NullCheck(L_2);
		bool L_3 = L_2->___swigCMemOwn_1;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_5 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral48189E861560CEBB714411DF089B9ECCF7761320)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FederatedAuthProvider_swigRelease_m3D9606F0A210E2D35EFE21F340796B2B1DF7E53E_RuntimeMethod_var)));
	}

IL_0022:
	{
		FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E* L_6 = ___0_obj;
		NullCheck(L_6);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = L_6->___swigCPtr_0;
		V_1 = L_7;
		FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E* L_8 = ___0_obj;
		NullCheck(L_8);
		L_8->___swigCMemOwn_1 = (bool)0;
		FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E* L_9 = ___0_obj;
		NullCheck(L_9);
		FederatedAuthProvider_Dispose_mED9B374EF4B42A0BCB3358B6FED4A972F0ACD987(L_9, NULL);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_10 = V_1;
		V_3 = L_10;
		goto IL_004a;
	}

IL_003b:
	{
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_12;
		memset((&L_12), 0, sizeof(L_12));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_12), NULL, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		goto IL_004a;
	}

IL_004a:
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13 = V_3;
		return L_13;
	}
}
// System.Void Firebase.Auth.FederatedAuthProvider::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FederatedAuthProvider_Finalize_mBD71BB30ACE5C8184DFC0EB656122309279F22D6 (FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Auth.FederatedAuthProvider::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Auth.FederatedAuthProvider::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FederatedAuthProvider_Dispose_mED9B374EF4B42A0BCB3358B6FED4A972F0ACD987 (FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Auth.FederatedAuthProvider::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FederatedAuthProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FederatedAuthProvider_Dispose_m74D8A2815F985A6F330D561CDBB15AB0170874DA (FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0072;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0072:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_4 = (&__this->___swigCPtr_0);
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_4, NULL);
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_005e_1;
				}
			}
			{
				bool L_9 = __this->___swigCMemOwn_1;
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_004c_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_11 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
				AuthUtilPINVOKE_delete_FederatedAuthProvider_mFFAF5AC262CB697E85EF526569F935E814C06384(L_11, NULL);
			}

IL_004c_1:
			{
				intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13;
				memset((&L_13), 0, sizeof(L_13));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_13), NULL, L_12, /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_005e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FederatedOAuthProvider::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FederatedOAuthProvider__ctor_mFA18C328B54461C935851B3B30772E396E2A286D (FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_cPtr;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = AuthUtilPINVOKE_FederatedOAuthProvider_SWIGUpcast_m0300FCC0CB5547BF55ABD3B9BE146CB2CCA3D1A9(L_0, NULL);
		bool L_2 = ___1_cMemoryOwn;
		FederatedAuthProvider__ctor_m78323280B32D48FD01CA87508D0C30CDCC5D65BB(__this, L_1, L_2, NULL);
		intptr_t L_3 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), __this, L_3, /*hidden argument*/NULL);
		__this->___swigCPtr_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_2))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FederatedOAuthProvider::getCPtr(Firebase.Auth.FederatedOAuthProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FederatedOAuthProvider_getCPtr_m292127CBF42394D574F9094F79CBE1B32D2B48F6 (FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506* L_1 = ___0_obj;
		NullCheck(L_1);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1->___swigCPtr_2;
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), NULL, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5 = V_0;
		return L_5;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FederatedOAuthProvider::swigRelease(Firebase.Auth.FederatedOAuthProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FederatedOAuthProvider_swigRelease_m02485CEEC6FA6CC3EC942DF720A169B4DD070AE9 (FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506* L_0 = ___0_obj;
		V_0 = (bool)((!(((RuntimeObject*)(FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506* L_2 = ___0_obj;
		NullCheck(L_2);
		bool L_3 = ((FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E*)L_2)->___swigCMemOwn_1;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_5 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral48189E861560CEBB714411DF089B9ECCF7761320)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FederatedOAuthProvider_swigRelease_m02485CEEC6FA6CC3EC942DF720A169B4DD070AE9_RuntimeMethod_var)));
	}

IL_0022:
	{
		FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506* L_6 = ___0_obj;
		NullCheck(L_6);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = L_6->___swigCPtr_2;
		V_1 = L_7;
		FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506* L_8 = ___0_obj;
		NullCheck(L_8);
		((FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E*)L_8)->___swigCMemOwn_1 = (bool)0;
		FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506* L_9 = ___0_obj;
		NullCheck(L_9);
		FederatedAuthProvider_Dispose_mED9B374EF4B42A0BCB3358B6FED4A972F0ACD987(L_9, NULL);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_10 = V_1;
		V_3 = L_10;
		goto IL_004a;
	}

IL_003b:
	{
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_12;
		memset((&L_12), 0, sizeof(L_12));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_12), NULL, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		goto IL_004a;
	}

IL_004a:
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13 = V_3;
		return L_13;
	}
}
// System.Void Firebase.Auth.FederatedOAuthProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FederatedOAuthProvider_Dispose_mFA156271E27890FD307E6D71183917D5BE5A3ECE (FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_007a;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_007a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_4 = (&__this->___swigCPtr_2);
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_4, NULL);
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_005e_1;
				}
			}
			{
				bool L_9 = ((FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E*)__this)->___swigCMemOwn_1;
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_004c_1;
				}
			}
			{
				((FederatedAuthProvider_t54C5F79A13FD3C8CB5BD4096E92D34B764C1172E*)__this)->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_11 = __this->___swigCPtr_2;
				il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
				AuthUtilPINVOKE_delete_FederatedOAuthProvider_mF7B6161AD3BA614A9BDEF30D90DA9ECF48657B50(L_11, NULL);
			}

IL_004c_1:
			{
				intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13;
				memset((&L_13), 0, sizeof(L_13));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_13), NULL, L_12, /*hidden argument*/NULL);
				__this->___swigCPtr_2 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_2))->____wrapper_0), (void*)NULL);
			}

IL_005e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				bool L_14 = ___0_disposing;
				FederatedAuthProvider_Dispose_m74D8A2815F985A6F330D561CDBB15AB0170874DA(__this, L_14, NULL);
				goto IL_007b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007b:
	{
		return;
	}
}
// System.Void Firebase.Auth.FederatedOAuthProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FederatedOAuthProvider__ctor_mA31F20A8B8A6C2B38A70BBF511DC292BFB0C6233 (FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = AuthUtilPINVOKE_new_FederatedOAuthProvider__SWIG_0_m4840076A9EB400503DEBBDB9D066B2830B61104B(NULL);
		FederatedOAuthProvider__ctor_mFA18C328B54461C935851B3B30772E396E2A286D(__this, L_0, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FederatedOAuthProvider__ctor_mA31F20A8B8A6C2B38A70BBF511DC292BFB0C6233_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.Auth.FederatedOAuthProvider::.ctor(Firebase.Auth.FederatedOAuthProviderData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FederatedOAuthProvider__ctor_m8E41D43DC5460CE1758987E5C1E3134A8E01AA7B (FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506* __this, FederatedOAuthProviderData_t4A5AD4CBB4ACD54A60999A0DD116D8EB65FE778E* ___0_providerData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FederatedOAuthProviderData_t4A5AD4CBB4ACD54A60999A0DD116D8EB65FE778E* L_0 = ___0_providerData;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = FederatedOAuthProviderData_getCPtr_mD6D27CEE19C662611F374DA15585183160F8B851(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = AuthUtilPINVOKE_new_FederatedOAuthProvider__SWIG_1_m2A2B6CF92FD4C6FB4DDA7F82F58EB372375F3888(L_1, NULL);
		FederatedOAuthProvider__ctor_mFA18C328B54461C935851B3B30772E396E2A286D(__this, L_2, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FederatedOAuthProvider__ctor_m8E41D43DC5460CE1758987E5C1E3134A8E01AA7B_RuntimeMethod_var)));
	}

IL_0023:
	{
		return;
	}
}
// System.Void Firebase.Auth.FederatedOAuthProvider::SetProviderData(Firebase.Auth.FederatedOAuthProviderData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FederatedOAuthProvider_SetProviderData_mF736442E7DA07F7C1E786723914C962FE26AC879 (FederatedOAuthProvider_t6B2C271BB1C19DB11F827AD3AFB8355AC01A2506* __this, FederatedOAuthProviderData_t4A5AD4CBB4ACD54A60999A0DD116D8EB65FE778E* ___0_providerData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		FederatedOAuthProviderData_t4A5AD4CBB4ACD54A60999A0DD116D8EB65FE778E* L_1 = ___0_providerData;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		L_2 = FederatedOAuthProviderData_getCPtr_mD6D27CEE19C662611F374DA15585183160F8B851(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_FederatedOAuthProvider_SetProviderData_mC8BC038C8464C69A62E8AF08F6ED4720EF34881D(L_0, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FederatedOAuthProvider_SetProviderData_mF736442E7DA07F7C1E786723914C962FE26AC879_RuntimeMethod_var)));
	}

IL_0022:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.AuthUtilPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE__cctor_m1630D95EAAE6E61E8A8E565239682157B7385C38 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270* L_0 = (SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270*)il2cpp_codegen_object_new(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGExceptionHelper__ctor_m6709B95358A2A3B65272194E10E6AFD106926A1C(L_0, NULL);
		((AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_StaticFields*)il2cpp_codegen_static_fields_for(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var))->___swigExceptionHelper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_StaticFields*)il2cpp_codegen_static_fields_for(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var))->___swigExceptionHelper_0), (void*)L_0);
		SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D* L_1 = (SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D*)il2cpp_codegen_object_new(SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SWIGStringHelper__ctor_mC8327633A09D4DD655AA5FEA5A2A7BF7C841430E(L_1, NULL);
		((AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_StaticFields*)il2cpp_codegen_static_fields_for(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var))->___swigStringHelper_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_StaticFields*)il2cpp_codegen_static_fields_for(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var))->___swigStringHelper_1), (void*)L_1);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::ExportFix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_ExportFix_mDC7E0B0ACD89C6169FDA35052747F7896516C15D (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_ExportFix", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_ExportFix)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_Clear(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_UserInfoInterfaceList_Clear_m84D08D44EAC78AFA7E3FFE81DE622A9C15AB6E6D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_Clear", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_Clear)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_Add(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_UserInfoInterfaceList_Add_m2B9AF38C693CE4493A351353AEAB00D4AEAC2D1D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_Add", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_Add)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

}
// System.UInt32 Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_size(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AuthUtilPINVOKE_UserInfoInterfaceList_size_m066B7CC65DD89DDE33C4C20ADB14048D02E463F6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_size", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_size)(____0_jarg1_marshaled);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.UInt32 Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_capacity(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AuthUtilPINVOKE_UserInfoInterfaceList_capacity_mE9760BA44D016925A3810839F4CB7EFB0F4D7CDF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_capacity", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_capacity)(____0_jarg1_marshaled);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_reserve(System.Runtime.InteropServices.HandleRef,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_UserInfoInterfaceList_reserve_mC5E211BE4577AE92D940F7606BB467395F91C27D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, uint32_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_reserve", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_reserve)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_UserInfoInterfaceList__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_UserInfoInterfaceList__SWIG_0_mADEE06A8877BAB33A513BBA6AF68BCF51C9C7EA5 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_UserInfoInterfaceList__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_UserInfoInterfaceList__SWIG_0)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_UserInfoInterfaceList__SWIG_1(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_UserInfoInterfaceList__SWIG_1_mA89F74AD67A08EB5CB70737436AEB490FDA4551A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_UserInfoInterfaceList__SWIG_1", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_UserInfoInterfaceList__SWIG_1)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_UserInfoInterfaceList__SWIG_2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_UserInfoInterfaceList__SWIG_2_m091DAC05EADC98A3B0A406CDA76AE62D6FA47A33 (int32_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_UserInfoInterfaceList__SWIG_2", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_UserInfoInterfaceList__SWIG_2)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_getitemcopy(System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_UserInfoInterfaceList_getitemcopy_m06E4941EA4EBE0E74733708D5BF4558ED8C412AD (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, int32_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_getitemcopy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_getitemcopy)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_getitem(System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_UserInfoInterfaceList_getitem_mF4D49DD6ECF0A4F9A5492D0462C4DFEC0AADF02F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, int32_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_getitem", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_getitem)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_setitem(System.Runtime.InteropServices.HandleRef,System.Int32,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_UserInfoInterfaceList_setitem_m74C18CCB527EFA9D1F7043DE3DB1B19C94148800 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, int32_t ___1_jarg2, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___2_jarg3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_setitem", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___2_jarg3' to native representation
	void* ____2_jarg3_marshaled = NULL;
	____2_jarg3_marshaled = (void*)___2_jarg3.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_setitem)(____0_jarg1_marshaled, ___1_jarg2, ____2_jarg3_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2, ____2_jarg3_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_AddRange(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_UserInfoInterfaceList_AddRange_m5D8FEEC796E689E797B8101B2F45F4E2D0827B0C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_AddRange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_AddRange)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_GetRange(System.Runtime.InteropServices.HandleRef,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_UserInfoInterfaceList_GetRange_m71D0DB0E3D46E8D844D645468971E851134B812C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, int32_t ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_GetRange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_GetRange)(____0_jarg1_marshaled, ___1_jarg2, ___2_jarg3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2, ___2_jarg3);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_Insert(System.Runtime.InteropServices.HandleRef,System.Int32,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_UserInfoInterfaceList_Insert_mB88C0140E716EFD64BA921F1B3371B33FFF2F172 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, int32_t ___1_jarg2, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___2_jarg3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_Insert", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___2_jarg3' to native representation
	void* ____2_jarg3_marshaled = NULL;
	____2_jarg3_marshaled = (void*)___2_jarg3.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_Insert)(____0_jarg1_marshaled, ___1_jarg2, ____2_jarg3_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2, ____2_jarg3_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_InsertRange(System.Runtime.InteropServices.HandleRef,System.Int32,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_UserInfoInterfaceList_InsertRange_mD188FBBAC9A64621D810523EBAA83B0926A18DA2 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, int32_t ___1_jarg2, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___2_jarg3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_InsertRange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___2_jarg3' to native representation
	void* ____2_jarg3_marshaled = NULL;
	____2_jarg3_marshaled = (void*)___2_jarg3.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_InsertRange)(____0_jarg1_marshaled, ___1_jarg2, ____2_jarg3_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2, ____2_jarg3_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_RemoveAt(System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_UserInfoInterfaceList_RemoveAt_mBEBC4FE5E0C4997CFA9A011464BEC44EEE9713B6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, int32_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_RemoveAt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_RemoveAt)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_RemoveRange(System.Runtime.InteropServices.HandleRef,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_UserInfoInterfaceList_RemoveRange_m2E322992A632E130E899C0C0090C56784DFCBC2A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, int32_t ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_RemoveRange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_RemoveRange)(____0_jarg1_marshaled, ___1_jarg2, ___2_jarg3);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2, ___2_jarg3);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_Repeat(System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_UserInfoInterfaceList_Repeat_m1A1EAFAFC655320BEE367A7FD6232269086CA0D1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, int32_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_Repeat", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_Repeat)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_Reverse__SWIG_0(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_UserInfoInterfaceList_Reverse__SWIG_0_mC0C879E2622C0BF34C53953D642CD100C456CD3E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_Reverse__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_Reverse__SWIG_0)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_Reverse__SWIG_1(System.Runtime.InteropServices.HandleRef,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_UserInfoInterfaceList_Reverse__SWIG_1_m2E24466BC2C31473F502CB755BA83445C65C8526 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, int32_t ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_Reverse__SWIG_1", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_Reverse__SWIG_1)(____0_jarg1_marshaled, ___1_jarg2, ___2_jarg3);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2, ___2_jarg3);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::UserInfoInterfaceList_SetRange(System.Runtime.InteropServices.HandleRef,System.Int32,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_UserInfoInterfaceList_SetRange_mC283408BCEFA728FDD15D729579FDDCB88F22C39 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, int32_t ___1_jarg2, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___2_jarg3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterfaceList_SetRange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___2_jarg3' to native representation
	void* ____2_jarg3_marshaled = NULL;
	____2_jarg3_marshaled = (void*)___2_jarg3.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterfaceList_SetRange)(____0_jarg1_marshaled, ___1_jarg2, ____2_jarg3_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2, ____2_jarg3_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_UserInfoInterfaceList(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_UserInfoInterfaceList_m673388B29961D491797C27A1E10A1B179E8F60CC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_UserInfoInterfaceList", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_UserInfoInterfaceList)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_Future_User()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_Future_User_mB79540024B7BD8E8A7CC5ADA7CED3669E04715D0 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_Future_User", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_Future_User)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_SWIG_OnCompletion_m296C5844E099430387E2F721F1D6A24FD54AF941 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_User_SWIG_OnCompletion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	Il2CppMethodPointer ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_jarg2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_SWIG_OnCompletion)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Future_User_SWIG_FreeCompletionData_mCC85615B9EA0C81F14B6931EFEE22EE54688779A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_User_SWIG_FreeCompletionData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_SWIG_FreeCompletionData)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_GetResult_m0C533833AEE8C39D03639B1C4E7118AF22C643F4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_User_GetResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_GetResult)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Future_User(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Future_User_mDE5DCFBB612138DDA4A71F05AE25A3FC55385D53 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_Future_User", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_Future_User)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_Future_User_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_Future_User_Value_mA1F243F40B6DE48A09531C6A199AE63CDBFBE115 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_Future_User_Value", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_Future_User_Value)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_Value_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Auth.Future_User_Value/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_Value_SWIG_OnCompletion_m7FB5A301F58ADAAC36FC703D1303AA173E72D7BD (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, SWIG_CompletionDelegate_tAF9E301A88DCA1BC338F672DB240C824229FA144* ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_User_Value_SWIG_OnCompletion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	Il2CppMethodPointer ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_jarg2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_Value_SWIG_OnCompletion)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::Future_User_Value_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Future_User_Value_SWIG_FreeCompletionData_m6AE55F3876D53DCE835FBB86C1402D3460CDE033 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_User_Value_SWIG_FreeCompletionData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_Value_SWIG_FreeCompletionData)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_Value_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_Value_GetResult_m1C550DEE942CEF3D7AABEE6E52292D5AC97AE699 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_User_Value_GetResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_Value_GetResult)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Future_User_Value(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Future_User_Value_m8A1407E210F9CEE757D4B04FBDF43F515C0018E6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_Future_User_Value", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_Future_User_Value)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_Future_FetchProvidersResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_Future_FetchProvidersResult_m637E1EED4E17DD07DA2114AF477FE3D91C63AE4E (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_Future_FetchProvidersResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_Future_FetchProvidersResult)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_FetchProvidersResult_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Auth.Future_FetchProvidersResult/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_FetchProvidersResult_SWIG_OnCompletion_m048159AB970F755F9D71A4D20B7A5338D148A0BE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, SWIG_CompletionDelegate_t74D6A7A9C1563D7F8E5E41689C4ABFB87BDB9554* ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_FetchProvidersResult_SWIG_OnCompletion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	Il2CppMethodPointer ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_jarg2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_FetchProvidersResult_SWIG_OnCompletion)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::Future_FetchProvidersResult_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Future_FetchProvidersResult_SWIG_FreeCompletionData_m8DD443B094A34325CAF22432AED2883973CAE1A0 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_FetchProvidersResult_SWIG_FreeCompletionData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_FetchProvidersResult_SWIG_FreeCompletionData)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_FetchProvidersResult_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_FetchProvidersResult_GetResult_m55A6802B6786928A1E4C0BA9A73D19E2F09BA45B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_FetchProvidersResult_GetResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_FetchProvidersResult_GetResult)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Future_FetchProvidersResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Future_FetchProvidersResult_mEB3A1B0084093E8A8A037FB1F24CEB2D5AC81F2C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_Future_FetchProvidersResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_Future_FetchProvidersResult)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_Future_Credential()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_Future_Credential_m71718D2549474AFC5DA452418375D0317747F4E8 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_Future_Credential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_Future_Credential)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_Credential_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Auth.Future_Credential/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_Credential_SWIG_OnCompletion_m2B19DC16E0E135C896B1FC22AA142C1013290F62 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, SWIG_CompletionDelegate_t9E662009E934925D7D7A44DE7174BE598500E257* ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_Credential_SWIG_OnCompletion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	Il2CppMethodPointer ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_jarg2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_Credential_SWIG_OnCompletion)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::Future_Credential_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Future_Credential_SWIG_FreeCompletionData_m232396289D86BE094EFD42E037DEB07EB51076E1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_Credential_SWIG_FreeCompletionData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_Credential_SWIG_FreeCompletionData)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_Credential_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_Credential_GetResult_mC63CA8A18E5A33B37818E8231B4CAA0148F882B1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_Credential_GetResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_Credential_GetResult)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Future_Credential(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Future_Credential_mEED0DFA6288DCCF59A150A683C98758CDD334C51 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_Future_Credential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_Future_Credential)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_Future_SignInResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_Future_SignInResult_m6BB7063E00F579D6A29A5AA292DF372956B5505F (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_Future_SignInResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_Future_SignInResult)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_SignInResult_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Auth.Future_SignInResult/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_SignInResult_SWIG_OnCompletion_mEC7857CAAAE3088AD88D548069B8C16E04273DFA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, SWIG_CompletionDelegate_tBF82F8CD52E738A53F766723168DEE904CF7940A* ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_SignInResult_SWIG_OnCompletion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	Il2CppMethodPointer ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_jarg2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_SignInResult_SWIG_OnCompletion)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::Future_SignInResult_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Future_SignInResult_SWIG_FreeCompletionData_mB05F46F48506E8EA664E1D2C5ADBE20656684EB8 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_SignInResult_SWIG_FreeCompletionData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_SignInResult_SWIG_FreeCompletionData)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_SignInResult_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_SignInResult_GetResult_mE3A4B5217FD68BE85A020222F5E38AA7911726D3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_SignInResult_GetResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_SignInResult_GetResult)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Future_SignInResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Future_SignInResult_m54B525CE7E105797186E4DBCEA8A93BEB58A4DBC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_Future_SignInResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_Future_SignInResult)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_Future_AuthResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_Future_AuthResult_mEFBB10D0D05EA814925C8511E88C09446AD99FA2 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_Future_AuthResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_Future_AuthResult)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_AuthResult_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Auth.Future_AuthResult/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_AuthResult_SWIG_OnCompletion_mD799BAA41D01A7E1E2E87FF0C1A49EFAB14D79A9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, SWIG_CompletionDelegate_tDBA30C5A67741B1019B61FF9D48DD130CE6393DC* ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_AuthResult_SWIG_OnCompletion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	Il2CppMethodPointer ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_jarg2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_AuthResult_SWIG_OnCompletion)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::Future_AuthResult_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Future_AuthResult_SWIG_FreeCompletionData_m83C1C85D67ED0CA0070754F3EE5FD28F25C546BF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_AuthResult_SWIG_FreeCompletionData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_AuthResult_SWIG_FreeCompletionData)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_AuthResult_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_AuthResult_GetResult_m3199FB842DE67ACD42076EDD1CEBFB292E0E14D5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_AuthResult_GetResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_AuthResult_GetResult)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Future_AuthResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Future_AuthResult_mC32B8A5A8AA4281450E6EABBCE748BB136B74588 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_Future_AuthResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_Future_AuthResult)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_Credential()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_Credential_m610F752E3E54826B1E025F52F377000A9161560F (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_Credential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_Credential)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Credential(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Credential_m9BBFD0335963236DDC1ACD3F4F34C50A395083E7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_Credential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_Credential)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Boolean Firebase.Auth.AuthUtilPINVOKE::Credential_IsValid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthUtilPINVOKE_Credential_IsValid_mAEEBFB81870EECE907E638F93D32D624BFA92F73 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Credential_IsValid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Credential_IsValid)(____0_jarg1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.String Firebase.Auth.AuthUtilPINVOKE::Credential_Provider_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_Credential_Provider_get_mDAF5FC55AA8B21C98462BF7E2457533E1AA39D92 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Credential_Provider_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Credential_Provider_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_PhoneAuthCredential__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_PhoneAuthCredential__SWIG_0_mDD9CE35D78F2E9757A8CAC619325FFA69ABAECC0 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_PhoneAuthCredential__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_PhoneAuthCredential__SWIG_0)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_PhoneAuthCredential__SWIG_1(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_PhoneAuthCredential__SWIG_1_mFE3EE8B6E2F4901AF8C217CE9BCFB77DB80F9717 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_PhoneAuthCredential__SWIG_1", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_PhoneAuthCredential__SWIG_1)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::PhoneAuthCredential_SmsCodeInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_PhoneAuthCredential_SmsCodeInternal_get_mAEBBF84646F109268C680F03945959BEA4E16414 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PhoneAuthCredential_SmsCodeInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthCredential_SmsCodeInternal_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_PhoneAuthCredential(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_PhoneAuthCredential_mDA8C34DC7EC371C2C41B972FCC5658ED14A4AB2C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_PhoneAuthCredential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_PhoneAuthCredential)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::EmailAuthProvider_GetCredential(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_EmailAuthProvider_GetCredential_mC8AA0629B38F1F42960F8E11D50586AF4AF54A17 (String_t* ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_EmailAuthProvider_GetCredential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_EmailAuthProvider_GetCredential)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::EmailAuthProvider_ProviderId_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_EmailAuthProvider_ProviderId_get_m6A0D568B734B049A50C9CB6ED1B21677A989DA99 (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_EmailAuthProvider_ProviderId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_EmailAuthProvider_ProviderId_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_EmailAuthProvider(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_EmailAuthProvider_mFE4B85DA3D8D0056C8C568CE7D901BED758A5513 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_EmailAuthProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_EmailAuthProvider)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FacebookAuthProvider_GetCredential(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FacebookAuthProvider_GetCredential_mAE4DA92C0C4599D635B7E5F9D87BCF2295115E67 (String_t* ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FacebookAuthProvider_GetCredential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FacebookAuthProvider_GetCredential)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

	return returnValue;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::FacebookAuthProvider_ProviderId_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_FacebookAuthProvider_ProviderId_get_m43593ECD251DDEC303945C4473118EC3A8A00FD7 (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FacebookAuthProvider_ProviderId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FacebookAuthProvider_ProviderId_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FacebookAuthProvider(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FacebookAuthProvider_m8C3E2BCD7782E012189B8631ABA484359760BEC7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_FacebookAuthProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_FacebookAuthProvider)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::GameCenterAuthProvider_GetCredential()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_GameCenterAuthProvider_GetCredential_m96E5BF5E1F8DB4800F3B6F28B82A77149C5901DF (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_GameCenterAuthProvider_GetCredential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_GameCenterAuthProvider_GetCredential)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Boolean Firebase.Auth.AuthUtilPINVOKE::GameCenterAuthProvider_IsPlayerAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthUtilPINVOKE_GameCenterAuthProvider_IsPlayerAuthenticated_mC02993367B38C5571BF493E03CE43E85AE8F3052 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_GameCenterAuthProvider_IsPlayerAuthenticated", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_GameCenterAuthProvider_IsPlayerAuthenticated)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.String Firebase.Auth.AuthUtilPINVOKE::GameCenterAuthProvider_ProviderId_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_GameCenterAuthProvider_ProviderId_get_m8AB5E19BBCA539E1452B974677687CADDDBF12AC (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_GameCenterAuthProvider_ProviderId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_GameCenterAuthProvider_ProviderId_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_GameCenterAuthProvider(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_GameCenterAuthProvider_m357F922F282EBFE7631D6F5961AA019BF85C630F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_GameCenterAuthProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_GameCenterAuthProvider)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::GitHubAuthProvider_GetCredential(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_GitHubAuthProvider_GetCredential_mC8AD3C0C31E47A8C5955138E9092917FD20547EC (String_t* ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_GitHubAuthProvider_GetCredential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_GitHubAuthProvider_GetCredential)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

	return returnValue;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::GitHubAuthProvider_ProviderId_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_GitHubAuthProvider_ProviderId_get_mEE28BBDF64FCF26FD33449A539A83368C7DA34C5 (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_GitHubAuthProvider_ProviderId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_GitHubAuthProvider_ProviderId_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_GitHubAuthProvider(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_GitHubAuthProvider_mCE6C30FC0F3C295B76B6A21E8DCAC3A326C71A6B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_GitHubAuthProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_GitHubAuthProvider)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::GoogleAuthProvider_GetCredential(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_GoogleAuthProvider_GetCredential_m98D471DEBF8A1C50200D407F52FF1C73AA74CA95 (String_t* ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_GoogleAuthProvider_GetCredential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_GoogleAuthProvider_GetCredential)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::GoogleAuthProvider_ProviderId_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_GoogleAuthProvider_ProviderId_get_mA422F1920FD6D0F31226B987968FB97823E59A43 (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_GoogleAuthProvider_ProviderId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_GoogleAuthProvider_ProviderId_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_GoogleAuthProvider(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_GoogleAuthProvider_mCC7A644A7AFBECA0D791A054682971AB1570C12D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_GoogleAuthProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_GoogleAuthProvider)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.String Firebase.Auth.AuthUtilPINVOKE::MicrosoftAuthProvider_ProviderId_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_MicrosoftAuthProvider_ProviderId_get_m63FD8380A3E0EBEFE8585E7B5710DDE1371AC9FB (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_MicrosoftAuthProvider_ProviderId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_MicrosoftAuthProvider_ProviderId_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_MicrosoftAuthProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_MicrosoftAuthProvider_m32C2337EE380D971488314D0AD5B9569A707209A (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_MicrosoftAuthProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_MicrosoftAuthProvider)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_MicrosoftAuthProvider(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_MicrosoftAuthProvider_mDC7D173D25F8265E2724ADF7D77942EACC7818B8 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_MicrosoftAuthProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_MicrosoftAuthProvider)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::OAuthProvider_GetCredential__SWIG_0(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_OAuthProvider_GetCredential__SWIG_0_m9B75B080347BF359E309F935CA73EE4B57A14C69 (String_t* ___0_jarg1, String_t* ___1_jarg2, String_t* ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_OAuthProvider_GetCredential__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Marshaling of parameter '___2_jarg3' to native representation
	char* ____2_jarg3_marshaled = NULL;
	____2_jarg3_marshaled = il2cpp_codegen_marshal_string(___2_jarg3);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_OAuthProvider_GetCredential__SWIG_0)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_jarg3' native representation
	il2cpp_codegen_marshal_free(____2_jarg3_marshaled);
	____2_jarg3_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::OAuthProvider_GetCredential__SWIG_1(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_OAuthProvider_GetCredential__SWIG_1_m18AC8A6D36AD9B910FF73EDE81E32320E29D8C28 (String_t* ___0_jarg1, String_t* ___1_jarg2, String_t* ___2_jarg3, String_t* ___3_jarg4, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_OAuthProvider_GetCredential__SWIG_1", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Marshaling of parameter '___2_jarg3' to native representation
	char* ____2_jarg3_marshaled = NULL;
	____2_jarg3_marshaled = il2cpp_codegen_marshal_string(___2_jarg3);

	// Marshaling of parameter '___3_jarg4' to native representation
	char* ____3_jarg4_marshaled = NULL;
	____3_jarg4_marshaled = il2cpp_codegen_marshal_string(___3_jarg4);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_OAuthProvider_GetCredential__SWIG_1)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled, ____3_jarg4_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled, ____3_jarg4_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_jarg3' native representation
	il2cpp_codegen_marshal_free(____2_jarg3_marshaled);
	____2_jarg3_marshaled = NULL;

	// Marshaling cleanup of parameter '___3_jarg4' native representation
	il2cpp_codegen_marshal_free(____3_jarg4_marshaled);
	____3_jarg4_marshaled = NULL;

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_OAuthProvider(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_OAuthProvider_m28FFD4E834DA15CD5E33F4E275E1868946B8112E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_OAuthProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_OAuthProvider)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_GetCredential(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_PhoneAuthProviderInternal_GetCredential_mFCACC5EF4DEE6668200113E1025C437D1E1746CA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, String_t* ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PhoneAuthProviderInternal_GetCredential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Marshaling of parameter '___2_jarg3' to native representation
	char* ____2_jarg3_marshaled = NULL;
	____2_jarg3_marshaled = il2cpp_codegen_marshal_string(___2_jarg3);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthProviderInternal_GetCredential)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_jarg3' native representation
	il2cpp_codegen_marshal_free(____2_jarg3_marshaled);
	____2_jarg3_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_GetCredential_DEPRECATED(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_PhoneAuthProviderInternal_GetCredential_DEPRECATED_mB2C885DFD5C51F080DDCDE9C6DF638DB6D06BE53 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, String_t* ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PhoneAuthProviderInternal_GetCredential_DEPRECATED", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Marshaling of parameter '___2_jarg3' to native representation
	char* ____2_jarg3_marshaled = NULL;
	____2_jarg3_marshaled = il2cpp_codegen_marshal_string(___2_jarg3);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthProviderInternal_GetCredential_DEPRECATED)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_jarg3' native representation
	il2cpp_codegen_marshal_free(____2_jarg3_marshaled);
	____2_jarg3_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_GetInstance(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_PhoneAuthProviderInternal_GetInstance_m632B14F423442FF16C572D8FC1ED26DBC19D48F6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PhoneAuthProviderInternal_GetInstance", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthProviderInternal_GetInstance)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_ProviderId_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_PhoneAuthProviderInternal_ProviderId_get_m268CDD3E72BFB5E6B3D2F383EED6211FBCF9FCB8 (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PhoneAuthProviderInternal_ProviderId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthProviderInternal_ProviderId_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_VerifyPhoneNumberInternal__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String,System.UInt32,System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_PhoneAuthProviderInternal_VerifyPhoneNumberInternal__SWIG_0_mA290F71BE109F0343663C353DA29337818EB12A3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, uint32_t ___2_jarg3, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___3_jarg4, int32_t ___4_jarg5, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, uint32_t, void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(uint32_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PhoneAuthProviderInternal_VerifyPhoneNumberInternal__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Marshaling of parameter '___3_jarg4' to native representation
	void* ____3_jarg4_marshaled = NULL;
	____3_jarg4_marshaled = (void*)___3_jarg4.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthProviderInternal_VerifyPhoneNumberInternal__SWIG_0)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3, ____3_jarg4_marshaled, ___4_jarg5);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3, ____3_jarg4_marshaled, ___4_jarg5);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_VerifyPhoneNumberInternal__SWIG_1(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_PhoneAuthProviderInternal_VerifyPhoneNumberInternal__SWIG_1_mEA4162081C6E3F65FAC92FDFB75505709112E17A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PhoneAuthProviderInternal_VerifyPhoneNumberInternal__SWIG_1", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthProviderInternal_VerifyPhoneNumberInternal__SWIG_1)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_DestroyListenerImplInternal(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_PhoneAuthProviderInternal_DestroyListenerImplInternal_mD925379203712DFED35B212AE3BB08BB4FFAED56 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PhoneAuthProviderInternal_DestroyListenerImplInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthProviderInternal_DestroyListenerImplInternal)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_SetCallbacks(Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate_DEPRECATED,Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate,Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate,Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate,Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_PhoneAuthProviderInternal_SetCallbacks_mD898E49D1F9A297072DBFCD835B1F73FFA959B1C (VerificationCompletedDelegate_DEPRECATED_t9C42EC20A22F71522F604997AE2A0D765A6DACD7* ___0_jarg1, VerificationCompletedDelegate_tF55B9109A15CAB9EF2CAECDEDA082D6FA15C10C4* ___1_jarg2, VerificationFailedDelegate_t0774384FF44CDE5C89A4A85ED4C2CD6045F5CFD5* ___2_jarg3, CodeSentDelegate_t5FE776456B1600539EA3FCADF4F155821F843735* ___3_jarg4, TimeOutDelegate_t96FEFFA515EA85CB7B5C41E3413B7B8C168E2427* ___4_jarg5, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PhoneAuthProviderInternal_SetCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	Il2CppMethodPointer ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_jarg1));

	// Marshaling of parameter '___1_jarg2' to native representation
	Il2CppMethodPointer ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_jarg2));

	// Marshaling of parameter '___2_jarg3' to native representation
	Il2CppMethodPointer ____2_jarg3_marshaled = NULL;
	____2_jarg3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_jarg3));

	// Marshaling of parameter '___3_jarg4' to native representation
	Il2CppMethodPointer ____3_jarg4_marshaled = NULL;
	____3_jarg4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___3_jarg4));

	// Marshaling of parameter '___4_jarg5' to native representation
	Il2CppMethodPointer ____4_jarg5_marshaled = NULL;
	____4_jarg5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___4_jarg5));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthProviderInternal_SetCallbacks)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled, ____3_jarg4_marshaled, ____4_jarg5_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled, ____3_jarg4_marshaled, ____4_jarg5_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_ForceResendingToken(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_ForceResendingToken_m18E6CE43B5A109C55871748835E56723A8D8D435 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_ForceResendingToken", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_ForceResendingToken)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_PhoneAuthOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_PhoneAuthOptions_mC7D7A7B1D61AD4D637CB90539E621052EF08322A (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_PhoneAuthOptions", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_PhoneAuthOptions)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::PhoneAuthOptions_ForceResendingToken_set(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_PhoneAuthOptions_ForceResendingToken_set_mD983DDFC353E94D1585F9F40DC8E166B8F8F6B17 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PhoneAuthOptions_ForceResendingToken_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthOptions_ForceResendingToken_set)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::PhoneAuthOptions_ForceResendingToken_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_PhoneAuthOptions_ForceResendingToken_get_mB74FE5ABD0B5BAB4A772BB5E500D56F6B40F10DA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PhoneAuthOptions_ForceResendingToken_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthOptions_ForceResendingToken_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::PhoneAuthOptions_PhoneNumber_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_PhoneAuthOptions_PhoneNumber_set_m9320717016791B27AB93E12D910BB2D11484A7C3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PhoneAuthOptions_PhoneNumber_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthOptions_PhoneNumber_set)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

}
// System.String Firebase.Auth.AuthUtilPINVOKE::PhoneAuthOptions_PhoneNumber_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_PhoneAuthOptions_PhoneNumber_get_mC4089BD7D023A8CF8F139ABE728BDE77D9DDD00A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PhoneAuthOptions_PhoneNumber_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthOptions_PhoneNumber_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::PhoneAuthOptions_TimeoutInMilliseconds_set(System.Runtime.InteropServices.HandleRef,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_PhoneAuthOptions_TimeoutInMilliseconds_set_mADCCF985BCC073834737FBCE30A0CB5CE633F7E0 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, uint32_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PhoneAuthOptions_TimeoutInMilliseconds_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthOptions_TimeoutInMilliseconds_set)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.UInt32 Firebase.Auth.AuthUtilPINVOKE::PhoneAuthOptions_TimeoutInMilliseconds_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AuthUtilPINVOKE_PhoneAuthOptions_TimeoutInMilliseconds_get_m83203396700EE6D7F1FDF9CB577FBD4757A6009A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PhoneAuthOptions_TimeoutInMilliseconds_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthOptions_TimeoutInMilliseconds_get)(____0_jarg1_marshaled);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_PhoneAuthOptions(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_PhoneAuthOptions_mBF0E20F7CB3A11766CEEB58A2BC987DBF6EA3E8D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_PhoneAuthOptions", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_PhoneAuthOptions)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::PlayGamesAuthProvider_GetCredential(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_PlayGamesAuthProvider_GetCredential_mC9874DABC744BC22B5A2E5F1CE15CBCDC845E7D9 (String_t* ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PlayGamesAuthProvider_GetCredential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PlayGamesAuthProvider_GetCredential)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

	return returnValue;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::PlayGamesAuthProvider_ProviderId_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_PlayGamesAuthProvider_ProviderId_get_mC3D8AEAB202EE7BD425512DE419358E48502F393 (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PlayGamesAuthProvider_ProviderId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PlayGamesAuthProvider_ProviderId_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_PlayGamesAuthProvider(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_PlayGamesAuthProvider_m3A6F8972629AF1BA64546D157020835A17B4280B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_PlayGamesAuthProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_PlayGamesAuthProvider)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::TwitterAuthProvider_GetCredential(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_TwitterAuthProvider_GetCredential_mE51C34A9E3FE46FCD3DCE5C50A7746FF3BBB4C37 (String_t* ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_TwitterAuthProvider_GetCredential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_TwitterAuthProvider_GetCredential)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::TwitterAuthProvider_ProviderId_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_TwitterAuthProvider_ProviderId_get_m26B817B21F3E813CA3DB9D593021683E879D3A57 (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_TwitterAuthProvider_ProviderId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_TwitterAuthProvider_ProviderId_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_TwitterAuthProvider(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_TwitterAuthProvider_mF77B55EE6CB687992B6DDFCB95274938DF98C464 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_TwitterAuthProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_TwitterAuthProvider)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.String Firebase.Auth.AuthUtilPINVOKE::YahooAuthProvider_ProviderId_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_YahooAuthProvider_ProviderId_get_mBD49D0D2F75C470715E7D04C0BD348C76766D3B6 (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_YahooAuthProvider_ProviderId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_YahooAuthProvider_ProviderId_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_YahooAuthProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_YahooAuthProvider_m283F08AA8AF9AD38D7A6AF2BD39BD0A2100FDFE0 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_YahooAuthProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_YahooAuthProvider)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_YahooAuthProvider(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_YahooAuthProvider_m6C248AE5F5FD4A319EB64632F7B097EAFAD71D38 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_YahooAuthProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_YahooAuthProvider)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::FederatedProviderData_ProviderId_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FederatedProviderData_ProviderId_set_mDC3A54ED17DE535A247F61F60483E5FD2376970D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FederatedProviderData_ProviderId_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FederatedProviderData_ProviderId_set)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

}
// System.String Firebase.Auth.AuthUtilPINVOKE::FederatedProviderData_ProviderId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_FederatedProviderData_ProviderId_get_m8717097C0A37497BF245478FDEE2EC709934F896 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FederatedProviderData_ProviderId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FederatedProviderData_ProviderId_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_FederatedProviderData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_FederatedProviderData_m8EF4D964B1AD254F7AC37BF9CD15BD76219048E3 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_FederatedProviderData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_FederatedProviderData)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FederatedProviderData(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FederatedProviderData_m5D0DA853EC3C8FDB0D8F3F3DAAFC875E47040CF5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_FederatedProviderData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_FederatedProviderData)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_FederatedOAuthProviderData__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_FederatedOAuthProviderData__SWIG_0_m51C964C60949D2C7DFA7D8D129514F0B2F83BCFA (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_FederatedOAuthProviderData__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_FederatedOAuthProviderData__SWIG_0)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_FederatedOAuthProviderData__SWIG_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_FederatedOAuthProviderData__SWIG_1_m75C7810339A26419CD9B83EFA06C2EB8B1CCA47A (String_t* ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_FederatedOAuthProviderData__SWIG_1", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_FederatedOAuthProviderData__SWIG_1)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::FederatedOAuthProviderData_Scopes_set(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FederatedOAuthProviderData_Scopes_set_m7BF164A9BF36A0995878EA3BF72D2BDDF23406BB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FederatedOAuthProviderData_Scopes_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FederatedOAuthProviderData_Scopes_set)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FederatedOAuthProviderData_Scopes_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FederatedOAuthProviderData_Scopes_get_m74A2CA5541ABC2F779142E034A726F6C97D9BBFA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FederatedOAuthProviderData_Scopes_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FederatedOAuthProviderData_Scopes_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::FederatedOAuthProviderData_CustomParameters_set(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FederatedOAuthProviderData_CustomParameters_set_m8C921FFB2E88B87900FD05A661D0150692C6A0AF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FederatedOAuthProviderData_CustomParameters_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FederatedOAuthProviderData_CustomParameters_set)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FederatedOAuthProviderData_CustomParameters_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FederatedOAuthProviderData_CustomParameters_get_m0F481B6D48C8AF0109D274CBC483C6A789179CF8 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FederatedOAuthProviderData_CustomParameters_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FederatedOAuthProviderData_CustomParameters_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FederatedOAuthProviderData(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FederatedOAuthProviderData_mB7B58576EECF463CF92FC312EC8B65BDCF03E3AD (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_FederatedOAuthProviderData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_FederatedOAuthProviderData)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_UserInfoInterface(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_UserInfoInterface_m8D0C46DE47E822CA27457B7AFA84FA550F6EE486 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_UserInfoInterface", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_UserInfoInterface)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.String Firebase.Auth.AuthUtilPINVOKE::UserInfoInterface_UserId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_UserInfoInterface_UserId_get_m3428D7A0C57C6481EF6FB0491DA97F045CEE7C75 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterface_UserId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterface_UserId_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::UserInfoInterface_Email_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_UserInfoInterface_Email_get_mD6EBAEDF0B1F5DC104D5781431ABF89C648A9219 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterface_Email_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterface_Email_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::UserInfoInterface_DisplayName_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_UserInfoInterface_DisplayName_get_m41D43B4B54197A1A095B371CD9B9F19F873A689E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterface_DisplayName_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterface_DisplayName_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::UserInfoInterface_PhotoUrlInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_UserInfoInterface_PhotoUrlInternal_get_mB065ADB3EA4D4B1EFC997C0C1BFB5F6096A49407 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterface_PhotoUrlInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterface_PhotoUrlInternal_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::UserInfoInterface_ProviderId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_UserInfoInterface_ProviderId_get_m2F29993DD1C4B6710D87D72F9D529CA903CE20E8 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterface_ProviderId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterface_ProviderId_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::UserInfoInterface_PhoneNumberInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_UserInfoInterface_PhoneNumberInternal_get_mE75FF6F7308B5F885BA3F14B33F1C354293FD9D9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserInfoInterface_PhoneNumberInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterface_PhoneNumberInternal_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_UserInfoInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_UserInfoInterface_m58072F4E803A28136CF5970C7AC5ED4EC7D7CF0E (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_UserInfoInterface", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_UserInfoInterface)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::AdditionalUserInfo_ProviderId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_AdditionalUserInfo_ProviderId_get_m5754CD4AD5EDE2F67164515FE0ECDA5817C95B8F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_AdditionalUserInfo_ProviderId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_AdditionalUserInfo_ProviderId_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::AdditionalUserInfo_UserName_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_AdditionalUserInfo_UserName_get_m77E8E2832E2B9E25E45F2AEF4B8ACB71E0D9DFBB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_AdditionalUserInfo_UserName_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_AdditionalUserInfo_UserName_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::AdditionalUserInfo_ProfileInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_AdditionalUserInfo_ProfileInternal_get_mF79629F43218E38CAD5C57EA0CACC4B44114C621 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_AdditionalUserInfo_ProfileInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_AdditionalUserInfo_ProfileInternal_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::AdditionalUserInfo_UpdatedCredential_set(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_AdditionalUserInfo_UpdatedCredential_set_m55702AF91F9496048B894114EE31C95F67136D2F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_AdditionalUserInfo_UpdatedCredential_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_AdditionalUserInfo_UpdatedCredential_set)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::AdditionalUserInfo_UpdatedCredential_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_AdditionalUserInfo_UpdatedCredential_get_m8A28A2D9D35171B7F19525368097FA9D179CC90B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_AdditionalUserInfo_UpdatedCredential_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_AdditionalUserInfo_UpdatedCredential_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_AdditionalUserInfo(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_AdditionalUserInfo_mE46DFA92DEDE9C180361CEEB436DD874DC445098 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_AdditionalUserInfo", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_AdditionalUserInfo)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_UserMetadata()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_UserMetadata_m09503E7869131784EAA6FB64E5BA5F2AC2294091 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_UserMetadata", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_UserMetadata)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.UInt64 Firebase.Auth.AuthUtilPINVOKE::UserMetadata_LastSignInTimestamp_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t AuthUtilPINVOKE_UserMetadata_LastSignInTimestamp_get_m51EAC297BC64AA505A4C817B7AADD0FE994A577F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserMetadata_LastSignInTimestamp_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserMetadata_LastSignInTimestamp_get)(____0_jarg1_marshaled);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.UInt64 Firebase.Auth.AuthUtilPINVOKE::UserMetadata_CreationTimestamp_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t AuthUtilPINVOKE_UserMetadata_CreationTimestamp_get_mBF8C0AE2ECD49CA5B75A69FB46FBF0F4F83DACCF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserMetadata_CreationTimestamp_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserMetadata_CreationTimestamp_get)(____0_jarg1_marshaled);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_UserMetadata(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_UserMetadata_m7EB6C81132D23ED631EDC74F612AA9FA3C2F2858 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_UserMetadata", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_UserMetadata)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::SignInResult_UserInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_SignInResult_UserInternal_get_mAF0CCD6D1048DEEC5768CBA70F69E09E3518F00B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_SignInResult_UserInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_SignInResult_UserInternal_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::SignInResult_Info_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_SignInResult_Info_get_m1761FC51EB0EA45D2A2C359D530187BBBEEF6060 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_SignInResult_Info_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_SignInResult_Info_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::SignInResult_Meta_set(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_SignInResult_Meta_set_m93AE90668EB1E6A5EBB5C6FE443AB8495D593EF1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_SignInResult_Meta_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_SignInResult_Meta_set)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::SignInResult_Meta_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_SignInResult_Meta_get_mA4E32B65800482B143A3F6E44202E389D6CCE7C2 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_SignInResult_Meta_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_SignInResult_Meta_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_SignInResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_SignInResult_mD87DE519E169438819B983D7028B410028583768 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_SignInResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_SignInResult)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_FirebaseUser__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_FirebaseUser__SWIG_0_m1A827924461794E8FA991226F2D782F130571A61 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_FirebaseUser__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_FirebaseUser__SWIG_0)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_FirebaseUser__SWIG_1(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_FirebaseUser__SWIG_1_m91817AF39270C4B679F9B1A824CE0C87D8328F7D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_FirebaseUser__SWIG_1", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_FirebaseUser__SWIG_1)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FirebaseUser(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FirebaseUser_m49FDDF59500F3E43F730B2043E1C95332F6F81DD (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_FirebaseUser", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_FirebaseUser)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Boolean Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_IsValid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthUtilPINVOKE_FirebaseUser_IsValid_m8506CC0BE369BBEFD83BBC02F1777C140A16299F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_IsValid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_IsValid)(____0_jarg1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_Token(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_Token_m1C7BC830748735ACB43C9600CD9AAEFB0F51447C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, bool ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_Token", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_Token)(____0_jarg1_marshaled, static_cast<int32_t>(___1_jarg2));
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, static_cast<int32_t>(___1_jarg2));
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_UpdateEmail(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_UpdateEmail_mEFC274693006DA611DB2377BA49E6477D873137E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_UpdateEmail", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_UpdateEmail)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_UpdatePassword(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_UpdatePassword_m7DA646E2B216EFC2EC534E9287950A2440F33837 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_UpdatePassword", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_UpdatePassword)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_Reauthenticate(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_Reauthenticate_mF126CA3E42CD6EC3ED527257F7C76860F5B2C415 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_Reauthenticate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_Reauthenticate)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_ReauthenticateAndRetrieveDataInternalAsync(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_ReauthenticateAndRetrieveDataInternalAsync_mF051F0F30C613C3B9D1DB208329D32849A934BB9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_ReauthenticateAndRetrieveDataInternalAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_ReauthenticateAndRetrieveDataInternalAsync)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_ReauthenticateAndRetrieveDataInternalAsync_DEPRECATED(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_ReauthenticateAndRetrieveDataInternalAsync_DEPRECATED_m45FAF9B43AC7D68A143FDF5D2688F4246DA9E929 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_ReauthenticateAndRetrieveDataInternalAsync_DEPRECATED", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_ReauthenticateAndRetrieveDataInternalAsync_DEPRECATED)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_ReauthenticateWithProviderInternalAsync(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_ReauthenticateWithProviderInternalAsync_m4AA8FC0526BF446E30303FF078EE8CC4163320BF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_ReauthenticateWithProviderInternalAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_ReauthenticateWithProviderInternalAsync)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_ReauthenticateWithProviderInternalAsync_DEPRECATED(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_ReauthenticateWithProviderInternalAsync_DEPRECATED_m3E319AFEF68C9D76FC2939548EB1703A0361A640 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_ReauthenticateWithProviderInternalAsync_DEPRECATED", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_ReauthenticateWithProviderInternalAsync_DEPRECATED)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_SendEmailVerification(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_SendEmailVerification_m588F5D2BAFF4631DA36C4EECB026DA9B7E280E00 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_SendEmailVerification", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_SendEmailVerification)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_UpdateUserProfile(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_UpdateUserProfile_mE9F4AA6BF5197BA196E7388A11D7A36FDC204022 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_UpdateUserProfile", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_UpdateUserProfile)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_LinkWithCredentialInternalAsync(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_LinkWithCredentialInternalAsync_m9ED62CB76355A6059A79C22B2C75929A4E53916C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_LinkWithCredentialInternalAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_LinkWithCredentialInternalAsync)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_LinkWithCredentialInternalAsync_DEPRECATED(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_LinkWithCredentialInternalAsync_DEPRECATED_m068EB6B2B8AD69FC51C070C2F32F1CAAFAEDA233 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_LinkWithCredentialInternalAsync_DEPRECATED", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_LinkWithCredentialInternalAsync_DEPRECATED)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_LinkAndRetrieveDataWithCredentialInternalAsync(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_LinkAndRetrieveDataWithCredentialInternalAsync_mB0420656891DC700A1B3BA38BC50045A6E90679E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_LinkAndRetrieveDataWithCredentialInternalAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_LinkAndRetrieveDataWithCredentialInternalAsync)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_LinkWithProviderInternalAsync(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_LinkWithProviderInternalAsync_m30F0AEB79FFDC52AE8608397DE7875E3552A201E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_LinkWithProviderInternalAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_LinkWithProviderInternalAsync)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_LinkWithProviderInternalAsync_DEPRECATED(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_LinkWithProviderInternalAsync_DEPRECATED_m71F698F633C8A0E2983D51B00E5CF90FD6D76ED7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_LinkWithProviderInternalAsync_DEPRECATED", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_LinkWithProviderInternalAsync_DEPRECATED)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_UnlinkInternalAsync(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_UnlinkInternalAsync_m0469167E85FE3809C0D55B1069481311FD58B6B4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_UnlinkInternalAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_UnlinkInternalAsync)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_UnlinkInternalAsync_DEPRECATED(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_UnlinkInternalAsync_DEPRECATED_mBA8104937577336882BD31B7267B7F87E59E61AE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_UnlinkInternalAsync_DEPRECATED", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_UnlinkInternalAsync_DEPRECATED)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_UpdatePhoneNumberCredentialInternalAsync(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_UpdatePhoneNumberCredentialInternalAsync_m9B09F2BFC582AE386BE23B163D762A6E051EEA5A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_UpdatePhoneNumberCredentialInternalAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_UpdatePhoneNumberCredentialInternalAsync)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_UpdatePhoneNumberCredentialInternalAsync_DEPRECATED(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_UpdatePhoneNumberCredentialInternalAsync_DEPRECATED_mF55FC40EB824DB555AEB124389AEC20C3E322787 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_UpdatePhoneNumberCredentialInternalAsync_DEPRECATED", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_UpdatePhoneNumberCredentialInternalAsync_DEPRECATED)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_Reload(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_Reload_m163586DD445227E143D2A553B32A3D8356D88B15 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_Reload", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_Reload)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_Delete(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_Delete_m352B0ECB70722DD128585771554404176CCDAABF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_Delete", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_Delete)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Boolean Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_EqualToInternal(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthUtilPINVOKE_FirebaseUser_EqualToInternal_mA51792A1F473252F40624C426C5649411CAF4861 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_EqualToInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_EqualToInternal)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.String Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_DisplayName_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_FirebaseUser_DisplayName_get_m1D8E378B86936F9B5E1F58F13DFC7E531BEF3103 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_DisplayName_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_DisplayName_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_Email_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_FirebaseUser_Email_get_m5B22BAB276F67D5C1BF7C839387EC7CBDDAB68DE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_Email_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_Email_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Boolean Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_IsAnonymous_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthUtilPINVOKE_FirebaseUser_IsAnonymous_get_m16E5AAB306E5892A14FFCE588F07566FAD3297DE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_IsAnonymous_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_IsAnonymous_get)(____0_jarg1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_IsEmailVerified_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthUtilPINVOKE_FirebaseUser_IsEmailVerified_get_mC7B3600A0C9591637BA9C7A5B9EB01A1E1445FF5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_IsEmailVerified_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_IsEmailVerified_get)(____0_jarg1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_Metadata_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_Metadata_get_mCB5564DF5BCA06FA48DD23C98E822A9F1143F27E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_Metadata_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_Metadata_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_PhoneNumber_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_FirebaseUser_PhoneNumber_get_m233EB29AECA62DCCEE51A49F7B1907BFC0ACFAA3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_PhoneNumber_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_PhoneNumber_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_PhotoUrlInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_FirebaseUser_PhotoUrlInternal_get_mE1D651EC8433744B9BA7225165C5F076588E17C6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_PhotoUrlInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_PhotoUrlInternal_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_ProviderData_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_ProviderData_get_m06D7D7DA645CAE9D373D95DA8001214524D4048C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_ProviderData_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_ProviderData_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_ProviderId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_FirebaseUser_ProviderId_get_mDE50598B17BCA84D6C50ECDAF7AFA5A3EE743CD6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_ProviderId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_ProviderId_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_UserId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_FirebaseUser_UserId_get_m9AC71A907AB6237CCB8C73CB163FE659DC7D4006 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_UserId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_UserId_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_UserProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_UserProfile_mE12D222479F06C9BF8BD973F134347E9C9B59C36 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_UserProfile", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_UserProfile)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::UserProfile_DisplayName_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_UserProfile_DisplayName_set_m29AC9CB86AFEB2CEB1D5C7FC556892B08330C111 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserProfile_DisplayName_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserProfile_DisplayName_set)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

}
// System.String Firebase.Auth.AuthUtilPINVOKE::UserProfile_DisplayName_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_UserProfile_DisplayName_get_m00E28BD0E8B0F4E9F720F21E85540C50E7E1C2A0 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserProfile_DisplayName_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserProfile_DisplayName_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::UserProfile_PhotoUrlInternal_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_UserProfile_PhotoUrlInternal_set_mDA6B5CA5E997F28250F7C0F845EBC2FC8058B24C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserProfile_PhotoUrlInternal_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserProfile_PhotoUrlInternal_set)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

}
// System.String Firebase.Auth.AuthUtilPINVOKE::UserProfile_PhotoUrlInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_UserProfile_PhotoUrlInternal_get_m94C675EF9323FEB5407F3654A544AD330A497E09 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_UserProfile_PhotoUrlInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserProfile_PhotoUrlInternal_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_UserProfile(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_UserProfile_mFF16260FA3516853A2688374ED38CC8AAC04F5A7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_UserProfile", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_UserProfile)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::AuthResult_AdditionalUserInfoInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_AuthResult_AdditionalUserInfoInternal_get_m3AEEBEE862C2B5890DD71A991EB3929C9E4F8FC5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_AuthResult_AdditionalUserInfoInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_AuthResult_AdditionalUserInfoInternal_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::AuthResult_CredentialInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_AuthResult_CredentialInternal_get_m95FD51DEB8AF9B949CA553301AD7165598806CA6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_AuthResult_CredentialInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_AuthResult_CredentialInternal_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::AuthResult_UserInternal_set(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_AuthResult_UserInternal_set_mCF940FA517E5FF756BBF1C1A7EC3619B4AD8B31C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_AuthResult_UserInternal_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_AuthResult_UserInternal_set)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::AuthResult_UserInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_AuthResult_UserInternal_get_m19CE0FB18756675C5595B8A8FDBE7CA7836E3C24 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_AuthResult_UserInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_AuthResult_UserInternal_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_AuthResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_AuthResult_mFCA43D91B6DB6059BE7AE049FA607B3805A1BC31 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_AuthResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_AuthResult)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_AuthResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_AuthResult_m13BE525C4EA52DAD5AA52F05EC000131F2B1BCB8 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_AuthResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_AuthResult)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FirebaseAuth(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FirebaseAuth_m83B6F654B1BAAC524E12D91BB0A77794CE7AD9E5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_FirebaseAuth", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_FirebaseAuth)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.String Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_LanguageCodeInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_FirebaseAuth_LanguageCodeInternal_m3406852A46AB1119DFABF6908824961AC4B594E0 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_LanguageCodeInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_LanguageCodeInternal)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SetLanguageCodeInternal(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_SetLanguageCodeInternal_m5845C340F155D2A2A2D5AA8AD2CEF5F384C3CFFF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_SetLanguageCodeInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SetLanguageCodeInternal)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_UseAppLanguage(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_UseAppLanguage_mA3EF9E844235D3E1F479851FD07306E9B844D6EE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_UseAppLanguage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_UseAppLanguage)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_FetchProvidersForEmailInternal(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_FetchProvidersForEmailInternal_mC9D56278ABF562FEA09C01108615DD555B5CF8DD (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_FetchProvidersForEmailInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_FetchProvidersForEmailInternal)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInWithCustomTokenInternalAsync(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInWithCustomTokenInternalAsync_m89CAA64F09944706A69244E32CA4EA5FD6BCDE46 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignInWithCustomTokenInternalAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignInWithCustomTokenInternalAsync)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInWithCustomTokenInternalAsync_DEPRECATED(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInWithCustomTokenInternalAsync_DEPRECATED_m8A166D16CBECFA00F38B3AFD17977449F5D3F882 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignInWithCustomTokenInternalAsync_DEPRECATED", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignInWithCustomTokenInternalAsync_DEPRECATED)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInWithCredentialInternalAsync(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInWithCredentialInternalAsync_m1EE3877473E6259BBC9B380712AC813CFF7313FA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignInWithCredentialInternalAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignInWithCredentialInternalAsync)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInWithCredential_DEPRECATED(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInWithCredential_DEPRECATED_mFCC8AD19FB0C7CFC5013C44F3ED3DB73BEF93CC3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignInWithCredential_DEPRECATED", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignInWithCredential_DEPRECATED)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInWithProviderInternalAsync(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInWithProviderInternalAsync_m23DE1EA674E50994612BAD5B479AAD480EACBCA2 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignInWithProviderInternalAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignInWithProviderInternalAsync)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInWithProviderInternalAsync_DEPRECATED(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInWithProviderInternalAsync_DEPRECATED_m64E05F61FC77CCC54E01333CE25EA2EA15A2B829 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignInWithProviderInternalAsync_DEPRECATED", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignInWithProviderInternalAsync_DEPRECATED)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInAndRetrieveDataWithCredentialInternalAsync(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInAndRetrieveDataWithCredentialInternalAsync_m00D288429D890B1DCA7A0ACC27600AE62EB8E637 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignInAndRetrieveDataWithCredentialInternalAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignInAndRetrieveDataWithCredentialInternalAsync)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInAndRetrieveDataWithCredentialInternalAsync_DEPRECATED(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInAndRetrieveDataWithCredentialInternalAsync_DEPRECATED_mBDBC544AECFEFF82A16F610DE36FB39728717ED4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignInAndRetrieveDataWithCredentialInternalAsync_DEPRECATED", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignInAndRetrieveDataWithCredentialInternalAsync_DEPRECATED)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInAnonymouslyInternalAsync(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInAnonymouslyInternalAsync_mC6D0C4D586A4F7E722391757843FFE2B7DFCB061 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignInAnonymouslyInternalAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignInAnonymouslyInternalAsync)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInAnonymouslyInternalAsync_DEPRECATED(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInAnonymouslyInternalAsync_DEPRECATED_m229CCECC4BB16E969E7FE87739799210017117F4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignInAnonymouslyInternalAsync_DEPRECATED", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignInAnonymouslyInternalAsync_DEPRECATED)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInWithEmailAndPasswordInternalAsync(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_m4A7CF767C10E03689156652E5F11843CB9FB53D4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, String_t* ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignInWithEmailAndPasswordInternalAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Marshaling of parameter '___2_jarg3' to native representation
	char* ____2_jarg3_marshaled = NULL;
	____2_jarg3_marshaled = il2cpp_codegen_marshal_string(___2_jarg3);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignInWithEmailAndPasswordInternalAsync)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_jarg3' native representation
	il2cpp_codegen_marshal_free(____2_jarg3_marshaled);
	____2_jarg3_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_DEPRECATED(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_DEPRECATED_m740C6F70C63DCD6266C4DDF120A22026519F00B9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, String_t* ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_DEPRECATED", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Marshaling of parameter '___2_jarg3' to native representation
	char* ____2_jarg3_marshaled = NULL;
	____2_jarg3_marshaled = il2cpp_codegen_marshal_string(___2_jarg3);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_DEPRECATED)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_jarg3' native representation
	il2cpp_codegen_marshal_free(____2_jarg3_marshaled);
	____2_jarg3_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_CreateUserWithEmailAndPasswordInternalAsync(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_CreateUserWithEmailAndPasswordInternalAsync_mB1AD0302F86FF2CD9457FEA700008D37997DCE91 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, String_t* ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_CreateUserWithEmailAndPasswordInternalAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Marshaling of parameter '___2_jarg3' to native representation
	char* ____2_jarg3_marshaled = NULL;
	____2_jarg3_marshaled = il2cpp_codegen_marshal_string(___2_jarg3);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_CreateUserWithEmailAndPasswordInternalAsync)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_jarg3' native representation
	il2cpp_codegen_marshal_free(____2_jarg3_marshaled);
	____2_jarg3_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_CreateUserWithEmailAndPasswordInternalAsync_DEPRECATED(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_CreateUserWithEmailAndPasswordInternalAsync_DEPRECATED_m3748C519107320AB09D593E5B03133DC7368F5EA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, String_t* ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_CreateUserWithEmailAndPasswordInternalAsync_DEPRECATED", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Marshaling of parameter '___2_jarg3' to native representation
	char* ____2_jarg3_marshaled = NULL;
	____2_jarg3_marshaled = il2cpp_codegen_marshal_string(___2_jarg3);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_CreateUserWithEmailAndPasswordInternalAsync_DEPRECATED)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_jarg3' native representation
	il2cpp_codegen_marshal_free(____2_jarg3_marshaled);
	____2_jarg3_marshaled = NULL;

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignOut(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_SignOut_m2A10F7589BABECFD819E06E4DD8BADD83D8512E0 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignOut", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignOut)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SendPasswordResetEmail(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SendPasswordResetEmail_m6DE91F0761CCED9158442479E4A7229FF5DB80EB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_SendPasswordResetEmail", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SendPasswordResetEmail)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_GetAuthInternal(System.Runtime.InteropServices.HandleRef,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_GetAuthInternal_m3E83970E2674AEC5DDD01FD9818845156FE134AB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, int32_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_GetAuthInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_GetAuthInternal)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_LogHeartbeatInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_LogHeartbeatInternal_m66F0D6932BA24BBFF5FB02522D1F901C1AA87D1D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_LogHeartbeatInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_LogHeartbeatInternal)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_ReleaseReferenceInternal_mFED7F33D46743757B5DE19BF3D91C701F5671876 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_ReleaseReferenceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_ReleaseReferenceInternal)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_CurrentUserInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_CurrentUserInternal_get_mB1ED6160407E8C4982746296099A9B1DE21D5DAC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseAuth_CurrentUserInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_CurrentUserInternal_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FetchProvidersResult_Providers_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FetchProvidersResult_Providers_get_m15FF5FFD13E0DE6DD326639C5C6EA2F3AAAAA086 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FetchProvidersResult_Providers_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FetchProvidersResult_Providers_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_FetchProvidersResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_FetchProvidersResult_m0BF6A06C828DF036972D9ACB428F85F805E7CDF3 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_FetchProvidersResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_FetchProvidersResult)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FetchProvidersResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FetchProvidersResult_m93D46C24A5030BA1413D52D1A26EC05B850E8E05 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_FetchProvidersResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_FetchProvidersResult)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FederatedAuthProvider(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FederatedAuthProvider_mFFAF5AC262CB697E85EF526569F935E814C06384 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_FederatedAuthProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_FederatedAuthProvider)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_FederatedOAuthProvider__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_FederatedOAuthProvider__SWIG_0_m4840076A9EB400503DEBBDB9D066B2830B61104B (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_FederatedOAuthProvider__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_FederatedOAuthProvider__SWIG_0)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::new_FederatedOAuthProvider__SWIG_1(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_new_FederatedOAuthProvider__SWIG_1_m2A2B6CF92FD4C6FB4DDA7F82F58EB372375F3888 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_new_FederatedOAuthProvider__SWIG_1", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_new_FederatedOAuthProvider__SWIG_1)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FederatedOAuthProvider(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FederatedOAuthProvider_mF7B6161AD3BA614A9BDEF30D90DA9ECF48657B50 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_delete_FederatedOAuthProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_FederatedOAuthProvider)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::FederatedOAuthProvider_SetProviderData(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FederatedOAuthProvider_SetProviderData_mC8BC038C8464C69A62E8AF08F6ED4720EF34881D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FederatedOAuthProvider_SetProviderData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FederatedOAuthProvider_SetProviderData)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::CreateAuthStateListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_CreateAuthStateListener_m0A51BCF7288AC201F2774CB5506D5F5DEFFD2682 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_CreateAuthStateListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	Il2CppMethodPointer ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_jarg2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_CreateAuthStateListener)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::DestroyAuthStateListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_DestroyAuthStateListener_m79297782C9683325F91FB03C0577B3B02664EC31 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_DestroyAuthStateListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_DestroyAuthStateListener)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::CreateIdTokenListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_CreateIdTokenListener_m38F412B973371F0CFF8D891D71C97CE99022FDC5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_CreateIdTokenListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	Il2CppMethodPointer ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_jarg2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_CreateIdTokenListener)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::DestroyIdTokenListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_DestroyIdTokenListener_mACBDFF676A4BC45B7951C31647CFBDCED08D1B4D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_DestroyIdTokenListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_DestroyIdTokenListener)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_SWIGUpcast_m8351BB3FFF59BBB0E79A615DE27479EE2D490B27 (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_User_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_SWIGUpcast)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_Value_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_Value_SWIGUpcast_mF415E84A8F57AEE800312B9F5764E5FCD05051B5 (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_User_Value_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_Value_SWIGUpcast)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_FetchProvidersResult_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_FetchProvidersResult_SWIGUpcast_m9D3A7E3E2F8CD2A9C5C5276DEC316F8A8EEF79A1 (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_FetchProvidersResult_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_FetchProvidersResult_SWIGUpcast)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_Credential_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_Credential_SWIGUpcast_m4C455D1D06160DC07B3ED7290BDAB8E7B696CE48 (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_Credential_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_Credential_SWIGUpcast)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_SignInResult_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_SignInResult_SWIGUpcast_m5471CFE57E9370BBB945C87538A9D74994C143D1 (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_SignInResult_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_SignInResult_SWIGUpcast)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_AuthResult_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_AuthResult_SWIGUpcast_m146C300378B5CA71E97B6D2C260F4269996991B3 (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_Future_AuthResult_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_AuthResult_SWIGUpcast)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::PhoneAuthCredential_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_PhoneAuthCredential_SWIGUpcast_m028339E41A14922D865CFBAFDCADC43905340DAD (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_PhoneAuthCredential_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthCredential_SWIGUpcast)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FederatedOAuthProviderData_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FederatedOAuthProviderData_SWIGUpcast_m0CA5EEDF5F8D803F9D14BC066B9577B552BBEB88 (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FederatedOAuthProviderData_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FederatedOAuthProviderData_SWIGUpcast)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_SWIGUpcast_m7CAB9D14AEA69B1F0AEBC88EBC4CA0BA90CABB46 (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FirebaseUser_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_SWIGUpcast)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FederatedOAuthProvider_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FederatedOAuthProvider_SWIGUpcast_m0300FCC0CB5547BF55ABD3B9BE146CB2CCA3D1A9 (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Auth_CSharp_FederatedOAuthProvider_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FederatedOAuthProvider_SWIGUpcast)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE__ctor_m50AA67112642AE22D29BA511BDF64840DF69E31D (AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_mD3D5DF4565F2D8B785CECDDE06C94EB1AF3B7ACD(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_mD3D5DF4565F2D8B785CECDDE06C94EB1AF3B7ACD(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m6D48FAE1D40F739EBE2EB7B7A2D35A4C38E273D2(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m6D48FAE1D40F739EBE2EB7B7A2D35A4C38E273D2(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m5E4DFAD8B4B70C66EA34EC78307E69F6B0D8F7E7(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m5E4DFAD8B4B70C66EA34EC78307E69F6B0D8F7E7(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m05738E7A913471982107EC9DAFF8E575AD16D09D(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m05738E7A913471982107EC9DAFF8E575AD16D09D(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m7CEBADF8ADECB392731AD0215CA9D2162344E3EB(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m7CEBADF8ADECB392731AD0215CA9D2162344E3EB(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m946F88971C00DC640C4A7FEFB4D820E03AFCBA8A(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m946F88971C00DC640C4A7FEFB4D820E03AFCBA8A(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m097E27E1B950DDEDBE75ECAA525FBA1F9CCC55FC(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m097E27E1B950DDEDBE75ECAA525FBA1F9CCC55FC(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m7103FEC1AD9831462CD640AF2BD4BD51B457BE24(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m7103FEC1AD9831462CD640AF2BD4BD51B457BE24(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m477DE4F591DB31AFA8DFACEBACA2CCA81CD28367(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m477DE4F591DB31AFA8DFACEBACA2CCA81CD28367(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m5E2F92E1488F0943C4B43806F9F6EF812073D384(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m5E2F92E1488F0943C4B43806F9F6EF812073D384(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m988E84E7A45B7FCE1EC1597585471AFA78B06887(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m988E84E7A45B7FCE1EC1597585471AFA78B06887(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m21B2170535EECF45751C6F48948BC1322346A5F0(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m21B2170535EECF45751C6F48948BC1322346A5F0(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m09944997FE4F760BD1423A7DC3082736F605535C(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m09944997FE4F760BD1423A7DC3082736F605535C(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7111A0768AC3707D3151755C7456E30482F974DF(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7111A0768AC3707D3151755C7456E30482F974DF(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_m5A0AC467CB894DA14A8D5FC72E1C4C0923C12E61 (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___0_applicationDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___1_arithmeticDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___2_divideByZeroDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___3_indexOutOfRangeDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___4_invalidCastDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___5_invalidOperationDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___6_ioDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___7_nullReferenceDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___8_outOfMemoryDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___9_overflowDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___10_systemExceptionDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "SWIGRegisterExceptionCallbacks_AuthUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_applicationDelegate' to native representation
	Il2CppMethodPointer ____0_applicationDelegate_marshaled = NULL;
	____0_applicationDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_applicationDelegate));

	// Marshaling of parameter '___1_arithmeticDelegate' to native representation
	Il2CppMethodPointer ____1_arithmeticDelegate_marshaled = NULL;
	____1_arithmeticDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_arithmeticDelegate));

	// Marshaling of parameter '___2_divideByZeroDelegate' to native representation
	Il2CppMethodPointer ____2_divideByZeroDelegate_marshaled = NULL;
	____2_divideByZeroDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_divideByZeroDelegate));

	// Marshaling of parameter '___3_indexOutOfRangeDelegate' to native representation
	Il2CppMethodPointer ____3_indexOutOfRangeDelegate_marshaled = NULL;
	____3_indexOutOfRangeDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___3_indexOutOfRangeDelegate));

	// Marshaling of parameter '___4_invalidCastDelegate' to native representation
	Il2CppMethodPointer ____4_invalidCastDelegate_marshaled = NULL;
	____4_invalidCastDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___4_invalidCastDelegate));

	// Marshaling of parameter '___5_invalidOperationDelegate' to native representation
	Il2CppMethodPointer ____5_invalidOperationDelegate_marshaled = NULL;
	____5_invalidOperationDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___5_invalidOperationDelegate));

	// Marshaling of parameter '___6_ioDelegate' to native representation
	Il2CppMethodPointer ____6_ioDelegate_marshaled = NULL;
	____6_ioDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___6_ioDelegate));

	// Marshaling of parameter '___7_nullReferenceDelegate' to native representation
	Il2CppMethodPointer ____7_nullReferenceDelegate_marshaled = NULL;
	____7_nullReferenceDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___7_nullReferenceDelegate));

	// Marshaling of parameter '___8_outOfMemoryDelegate' to native representation
	Il2CppMethodPointer ____8_outOfMemoryDelegate_marshaled = NULL;
	____8_outOfMemoryDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___8_outOfMemoryDelegate));

	// Marshaling of parameter '___9_overflowDelegate' to native representation
	Il2CppMethodPointer ____9_overflowDelegate_marshaled = NULL;
	____9_overflowDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___9_overflowDelegate));

	// Marshaling of parameter '___10_systemExceptionDelegate' to native representation
	Il2CppMethodPointer ____10_systemExceptionDelegate_marshaled = NULL;
	____10_systemExceptionDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___10_systemExceptionDelegate));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_AuthUtil)(____0_applicationDelegate_marshaled, ____1_arithmeticDelegate_marshaled, ____2_divideByZeroDelegate_marshaled, ____3_indexOutOfRangeDelegate_marshaled, ____4_invalidCastDelegate_marshaled, ____5_invalidOperationDelegate_marshaled, ____6_ioDelegate_marshaled, ____7_nullReferenceDelegate_marshaled, ____8_outOfMemoryDelegate_marshaled, ____9_overflowDelegate_marshaled, ____10_systemExceptionDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_applicationDelegate_marshaled, ____1_arithmeticDelegate_marshaled, ____2_divideByZeroDelegate_marshaled, ____3_indexOutOfRangeDelegate_marshaled, ____4_invalidCastDelegate_marshaled, ____5_invalidOperationDelegate_marshaled, ____6_ioDelegate_marshaled, ____7_nullReferenceDelegate_marshaled, ____8_outOfMemoryDelegate_marshaled, ____9_overflowDelegate_marshaled, ____10_systemExceptionDelegate_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_mAD9B1407D55B00A38D10D3CE2B615942F9BDDF0B (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___0_argumentDelegate, ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___1_argumentNullDelegate, ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___2_argumentOutOfRangeDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "SWIGRegisterExceptionArgumentCallbacks_AuthUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_argumentDelegate' to native representation
	Il2CppMethodPointer ____0_argumentDelegate_marshaled = NULL;
	____0_argumentDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_argumentDelegate));

	// Marshaling of parameter '___1_argumentNullDelegate' to native representation
	Il2CppMethodPointer ____1_argumentNullDelegate_marshaled = NULL;
	____1_argumentNullDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_argumentNullDelegate));

	// Marshaling of parameter '___2_argumentOutOfRangeDelegate' to native representation
	Il2CppMethodPointer ____2_argumentOutOfRangeDelegate_marshaled = NULL;
	____2_argumentOutOfRangeDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_argumentOutOfRangeDelegate));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_AuthUtil)(____0_argumentDelegate_marshaled, ____1_argumentNullDelegate_marshaled, ____2_argumentOutOfRangeDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_argumentDelegate_marshaled, ____1_argumentNullDelegate_marshaled, ____2_argumentOutOfRangeDelegate_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mD3D5DF4565F2D8B785CECDDE06C94EB1AF3B7ACD (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_2 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m6D48FAE1D40F739EBE2EB7B7A2D35A4C38E273D2 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_2 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m5E4DFAD8B4B70C66EA34EC78307E69F6B0D8F7E7 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_2 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m05738E7A913471982107EC9DAFF8E575AD16D09D (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_2 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m7CEBADF8ADECB392731AD0215CA9D2162344E3EB (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m946F88971C00DC640C4A7FEFB4D820E03AFCBA8A (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m097E27E1B950DDEDBE75ECAA525FBA1F9CCC55FC (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_2 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m7103FEC1AD9831462CD640AF2BD4BD51B457BE24 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m477DE4F591DB31AFA8DFACEBACA2CCA81CD28367 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_2 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m5E2F92E1488F0943C4B43806F9F6EF812073D384 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m988E84E7A45B7FCE1EC1597585471AFA78B06887 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* L_2 = (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295*)il2cpp_codegen_object_new(SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m21B2170535EECF45751C6F48948BC1322346A5F0 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		String_t* L_1 = ___1_paramName;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0(L_3, L_0, L_1, L_2, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_3, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m09944997FE4F760BD1423A7DC3082736F605535C (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___0_message;
		Exception_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_5, NULL);
		___0_message = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___1_paramName;
		String_t* L_8 = ___0_message;
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_9, L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_9, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7111A0768AC3707D3151755C7456E30482F974DF (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___0_message;
		Exception_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_5, NULL);
		___0_message = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___1_paramName;
		String_t* L_8 = ___0_message;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_9, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m082E44E87C697836CECA0760676EF7FC0FFCC789 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_mD3D5DF4565F2D8B785CECDDE06C94EB1AF3B7ACD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_m21B2170535EECF45751C6F48948BC1322346A5F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_m09944997FE4F760BD1423A7DC3082736F605535C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7111A0768AC3707D3151755C7456E30482F974DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_m6D48FAE1D40F739EBE2EB7B7A2D35A4C38E273D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_m5E4DFAD8B4B70C66EA34EC78307E69F6B0D8F7E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_m097E27E1B950DDEDBE75ECAA525FBA1F9CCC55FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m05738E7A913471982107EC9DAFF8E575AD16D09D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m7CEBADF8ADECB392731AD0215CA9D2162344E3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_m946F88971C00DC640C4A7FEFB4D820E03AFCBA8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m7103FEC1AD9831462CD640AF2BD4BD51B457BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_m477DE4F591DB31AFA8DFACEBACA2CCA81CD28367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_m5E2F92E1488F0943C4B43806F9F6EF812073D384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_m988E84E7A45B7FCE1EC1597585471AFA78B06887_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_0 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_0, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingApplicationException_mD3D5DF4565F2D8B785CECDDE06C94EB1AF3B7ACD_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___applicationDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___applicationDelegate_0), (void*)L_0);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_1 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_1, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArithmeticException_m6D48FAE1D40F739EBE2EB7B7A2D35A4C38E273D2_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___arithmeticDelegate_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___arithmeticDelegate_1), (void*)L_1);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_2 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_2, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingDivideByZeroException_m5E4DFAD8B4B70C66EA34EC78307E69F6B0D8F7E7_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2), (void*)L_2);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_3 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_3, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m05738E7A913471982107EC9DAFF8E575AD16D09D_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3), (void*)L_3);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_4 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_4, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidCastException_m7CEBADF8ADECB392731AD0215CA9D2162344E3EB_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___invalidCastDelegate_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___invalidCastDelegate_4), (void*)L_4);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_5 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_5, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidOperationException_m946F88971C00DC640C4A7FEFB4D820E03AFCBA8A_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5), (void*)L_5);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_6 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_6, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIOException_m097E27E1B950DDEDBE75ECAA525FBA1F9CCC55FC_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___ioDelegate_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___ioDelegate_6), (void*)L_6);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_7 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_7, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingNullReferenceException_m7103FEC1AD9831462CD640AF2BD4BD51B457BE24_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7), (void*)L_7);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_8 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_8, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOutOfMemoryException_m477DE4F591DB31AFA8DFACEBACA2CCA81CD28367_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8), (void*)L_8);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_9 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_9, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOverflowException_m5E2F92E1488F0943C4B43806F9F6EF812073D384_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___overflowDelegate_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___overflowDelegate_9), (void*)L_9);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_10 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_10, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingSystemException_m988E84E7A45B7FCE1EC1597585471AFA78B06887_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___systemDelegate_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___systemDelegate_10), (void*)L_10);
		ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* L_11 = (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ExceptionArgumentDelegate__ctor_m3F2FB66273FFCF78BE237864E1209316F6FC195A(L_11, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentException_m21B2170535EECF45751C6F48948BC1322346A5F0_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentDelegate_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentDelegate_11), (void*)L_11);
		ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* L_12 = (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ExceptionArgumentDelegate__ctor_m3F2FB66273FFCF78BE237864E1209316F6FC195A(L_12, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentNullException_m09944997FE4F760BD1423A7DC3082736F605535C_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentNullDelegate_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentNullDelegate_12), (void*)L_12);
		ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* L_13 = (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ExceptionArgumentDelegate__ctor_m3F2FB66273FFCF78BE237864E1209316F6FC195A(L_13, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7111A0768AC3707D3151755C7456E30482F974DF_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13), (void*)L_13);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_14 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___applicationDelegate_0;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_15 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___arithmeticDelegate_1;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_16 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_17 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_18 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___invalidCastDelegate_4;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_19 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_20 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___ioDelegate_6;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_21 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_22 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_23 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___overflowDelegate_9;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_24 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___systemDelegate_10;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_m5A0AC467CB894DA14A8D5FC72E1C4C0923C12E61(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, NULL);
		ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* L_25 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentDelegate_11;
		ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* L_26 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentNullDelegate_12;
		ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* L_27 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_mAD9B1407D55B00A38D10D3CE2B615942F9BDDF0B(L_25, L_26, L_27, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m6709B95358A2A3B65272194E10E6AFD106926A1C (SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_Multicast(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* currentDelegate = reinterpret_cast<ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_OpenInst(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_OpenStatic(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_OpenStaticInvoker(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message);
}
void ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_ClosedStaticInvoker(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	il2cppPInvokeFunc(____0_message_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5 (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_Multicast;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_m2EBE3CD9BB14674DC3E760EEDAFF050BBA8A866E (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, String_t* ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_m458C25DA2853AF600A46042E0A39B7F0508B1178 (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_Multicast(ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* currentDelegate = reinterpret_cast<ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, ___1_paramName, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_OpenInst(ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, ___1_paramName, method);
}
void ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_OpenStatic(ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, ___1_paramName, method);
}
void ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_OpenStaticInvoker(ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message, ___1_paramName);
}
void ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_ClosedStaticInvoker(ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message, ___1_paramName);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1 (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Marshaling of parameter '___1_paramName' to native representation
	char* ____1_paramName_marshaled = NULL;
	____1_paramName_marshaled = il2cpp_codegen_marshal_string(___1_paramName);

	// Native function invocation
	il2cppPInvokeFunc(____0_message_marshaled, ____1_paramName_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_paramName' native representation
	il2cpp_codegen_marshal_free(____1_paramName_marshaled);
	____1_paramName_marshaled = NULL;

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m3F2FB66273FFCF78BE237864E1209316F6FC195A (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_Multicast;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, ___1_paramName, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m0C5E05C3BDC4300D73E0709FF3721E1D57E25A0D (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, String_t* ___0_message, String_t* ___1_paramName, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_message;
	__d_args[1] = ___1_paramName;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m53AFD960614BAB41DECF1717C8B96D5221CC57E0 (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m882B63921C8EAF5A22A08AFD6851BE6F4400A48C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_2 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_001d:
	{
		bool L_4 = V_0;
		V_3 = L_4;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_5 = V_3;
		return L_5;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B (Exception_t* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_0 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = (bool)((!(((RuntimeObject*)(Exception_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var)));
		Exception_t* L_2 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))))->___pendingException_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		Exception_t* L_5 = ___0_e;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_6 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_6, L_4, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B_RuntimeMethod_var)));
	}

IL_002d:
	{
		Exception_t* L_7 = ___0_e;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0), (void*)L_7);
		RuntimeObject* L_8 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___exceptionsLock_2;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_005e;
					}
				}
				{
					RuntimeObject* L_10 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_10, NULL);
				}

IL_005e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_11 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_11, (&V_2), NULL);
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
			int32_t L_12 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			goto IL_005f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		return;
	}
}
// System.Exception Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	Exception_t* V_5 = NULL;
	{
		V_0 = (Exception_t*)NULL;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_2 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_4 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = L_4;
		((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		RuntimeObject* L_5 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___exceptionsLock_2;
		V_3 = L_5;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				{
					bool L_6 = V_4;
					if (!L_6)
					{
						goto IL_0056;
					}
				}
				{
					RuntimeObject* L_7 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_7, NULL);
				}

IL_0056:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_8 = V_3;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_8, (&V_4), NULL);
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
			int32_t L_9 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
			goto IL_0057;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
	}

IL_0058:
	{
	}

IL_0059:
	{
		Exception_t* L_10 = V_0;
		V_5 = L_10;
		goto IL_005e;
	}

IL_005e:
	{
		Exception_t* L_11 = V_5;
		return L_11;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__cctor_mE0D00CBC7AAB9C703CD919329322A196DB282FA9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = 0;
		((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___exceptionsLock_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___exceptionsLock_2), (void*)NULL);
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___exceptionsLock_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___exceptionsLock_2), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__ctor_m7C3AF942003962FA57D87D2635BC859DC0F2C6D0 (SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m973E9F1971668A0D3BEA767B3479889D49CC39E3(char* ___0_cString)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_cString' to managed representation
	String_t* ____0_cString_unmarshaled = NULL;
	____0_cString_unmarshaled = il2cpp_codegen_marshal_string_result(___0_cString);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_m973E9F1971668A0D3BEA767B3479889D49CC39E3(____0_cString_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_mF1E51D0E5816C991DC9BD57E0668EEDCF81CA902 (SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* ___0_stringDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "SWIGRegisterStringCallback_AuthUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_stringDelegate' to native representation
	Il2CppMethodPointer ____0_stringDelegate_marshaled = NULL;
	____0_stringDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_stringDelegate));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_AuthUtil)(____0_stringDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_stringDelegate_marshaled);
	#endif

}
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m973E9F1971668A0D3BEA767B3479889D49CC39E3 (String_t* ___0_cString, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_cString;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m4233D189A57454B02357CBCC668E53E2B93F71D1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_m973E9F1971668A0D3BEA767B3479889D49CC39E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* L_0 = (SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820*)il2cpp_codegen_object_new(SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGStringDelegate__ctor_m39AE1969D572DCB5A0266DC4EAE96243DFFEDE6D(L_0, NULL, (intptr_t)((void*)SWIGStringHelper_CreateString_m973E9F1971668A0D3BEA767B3479889D49CC39E3_RuntimeMethod_var), NULL);
		((SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_il2cpp_TypeInfo_var))->___stringDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_il2cpp_TypeInfo_var))->___stringDelegate_0), (void*)L_0);
		SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* L_1 = ((SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_il2cpp_TypeInfo_var))->___stringDelegate_0;
		SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_mF1E51D0E5816C991DC9BD57E0668EEDCF81CA902(L_1, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_mC8327633A09D4DD655AA5FEA5A2A7BF7C841430E (SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
String_t* SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_Multicast(SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* currentDelegate = reinterpret_cast<SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
String_t* SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_OpenInst(SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
String_t* SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_OpenStatic(SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
String_t* SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_OpenStaticInvoker(SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message);
}
String_t* SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_ClosedStaticInvoker(SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< String_t*, RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820 (SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____0_message_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m39AE1969D572DCB5A0266DC4EAE96243DFFEDE6D (SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_Multicast;
}
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E (SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_m6CAA25E7F5165C319041F1B9F8B33086ECBD5274 (SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, String_t* ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m80A2424DD4BDDAC9F906545F99213105FC0A9CFB (SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (String_t*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.AuthUtil::ExportFix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_ExportFix_m836B2E2171DF1B537CAB3E9C1D6124FB2CFF27F1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_ExportFix_mDC7E0B0ACD89C6169FDA35052747F7896516C15D(NULL);
		return;
	}
}
// System.IntPtr Firebase.Auth.AuthUtil::CreateAuthStateListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateAuthStateListener_mD22744C56BD1CE6B28D72EF8C0C4E6EAD33419D6 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_auth, StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* ___1_state_changed_delegate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = ___0_auth;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = FirebaseAuth_getCPtr_mF3D3A8469B4C252267CB1EBAC51D24A9DD11B6B8(L_0, NULL);
		StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* L_2 = ___1_state_changed_delegate;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AuthUtilPINVOKE_CreateAuthStateListener_m0A51BCF7288AC201F2774CB5506D5F5DEFFD2682(L_1, L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthUtil_CreateAuthStateListener_mD22744C56BD1CE6B28D72EF8C0C4E6EAD33419D6_RuntimeMethod_var)));
	}

IL_001d:
	{
		intptr_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		intptr_t L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Auth.AuthUtil::DestroyAuthStateListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyAuthStateListener_m6F9EC8163EEEEEF16C95440A873991C3E90E2D83 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_auth, intptr_t ___1_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = ___0_auth;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = FirebaseAuth_getCPtr_mF3D3A8469B4C252267CB1EBAC51D24A9DD11B6B8(L_0, NULL);
		intptr_t L_2 = ___1_listener;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_DestroyAuthStateListener_m79297782C9683325F91FB03C0577B3B02664EC31(L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthUtil_DestroyAuthStateListener_m6F9EC8163EEEEEF16C95440A873991C3E90E2D83_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.IntPtr Firebase.Auth.AuthUtil::CreateIdTokenListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateIdTokenListener_m8C6F2E7117ACC51D7CF40F116E11CD28609EE616 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_auth, StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* ___1_state_changed_delegate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = ___0_auth;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = FirebaseAuth_getCPtr_mF3D3A8469B4C252267CB1EBAC51D24A9DD11B6B8(L_0, NULL);
		StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* L_2 = ___1_state_changed_delegate;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AuthUtilPINVOKE_CreateIdTokenListener_m38F412B973371F0CFF8D891D71C97CE99022FDC5(L_1, L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthUtil_CreateIdTokenListener_m8C6F2E7117ACC51D7CF40F116E11CD28609EE616_RuntimeMethod_var)));
	}

IL_001d:
	{
		intptr_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		intptr_t L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Auth.AuthUtil::DestroyIdTokenListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyIdTokenListener_m087ED37EF1A7E0FCBDC0EFD4D4AD649C5046A504 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_auth, intptr_t ___1_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = ___0_auth;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = FirebaseAuth_getCPtr_mF3D3A8469B4C252267CB1EBAC51D24A9DD11B6B8(L_0, NULL);
		intptr_t L_2 = ___1_listener;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_DestroyIdTokenListener_mACBDFF676A4BC45B7951C31647CFBDCED08D1B4D(L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthUtil_DestroyIdTokenListener_m087ED37EF1A7E0FCBDC0EFD4D4AD649C5046A504_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.Auth.AuthUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil__ctor_mCB85234B20007ED27C9D8D16D626AE9BA98ECF6A (AuthUtil_t8EE1E6800343A54D198ED93603284F34262CB222* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____handle_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
