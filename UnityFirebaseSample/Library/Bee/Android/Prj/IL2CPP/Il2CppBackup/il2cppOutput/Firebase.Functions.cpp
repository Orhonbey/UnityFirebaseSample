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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>
struct Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Functions.FirebaseFunctions>
struct Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>,Firebase.Functions.HttpsCallableResult>
struct Func_2_t01A062AFB2E1404AA0866B7C6C418382BF589F84;
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
struct Func_2_t374ECF90050F953CFA1EB9E9CE02A9C76AC292B2;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.Exception>
struct IList_1_t584E66CD0123CFB6503AC3E597748948194AAA5E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>
struct KeyCollection_t53A0F2243B71D8C17C4019AE777DE62AAA62069D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Firebase.Functions.FirebaseFunctions>
struct KeyCollection_tFD701A3E6345F2C97C3EAB80C22617381E314950;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal>
struct TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResult>
struct Task_1_tBBAD4AE7DDD4F2281E3F4302E116EB16967BB6B8;
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>
struct Task_1_t53143AECA7658134C63B9385563DBDECDAA17503;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>
struct ValueCollection_tA8E6DA0556C3C707E98097807FBCD4F4469DCB06;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Firebase.Functions.FirebaseFunctions>
struct ValueCollection_t01A7D342E5C102EF1D83F478A709943C53743C35;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>[]
struct EntryU5BU5D_t137D36767493FB2A37FF0E48A193E547DB3163C6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Firebase.Functions.FirebaseFunctions>[]
struct EntryU5BU5D_t100C8CE308DBC8D50D9699F129A64CD1A40E4065;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
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
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2;
// Firebase.FirebaseException
struct FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED;
// Firebase.Functions.FirebaseFunctions
struct FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE;
// Firebase.Functions.FirebaseFunctionsInternal
struct FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E;
// Firebase.Functions.FunctionsException
struct FunctionsException_tF9A782424F93633763DA6C6E4EB0C56F65EBC366;
// Firebase.Functions.FunctionsInternal
struct FunctionsInternal_tB314B1E1CDC271E9E070238FA557673ED508A754;
// Firebase.Functions.FunctionsInternalPINVOKE
struct FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA;
// Firebase.FutureBase
struct FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36;
// Firebase.Functions.Future_HttpsCallableResult
struct Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057;
// Firebase.Functions.HttpsCallableReference
struct HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1;
// Firebase.Functions.HttpsCallableReferenceInternal
struct HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C;
// Firebase.Functions.HttpsCallableResult
struct HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B;
// Firebase.Functions.HttpsCallableResultInternal
struct HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3;
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
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// Firebase.Variant
struct Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1;
// Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException
struct SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2;
// Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D;
// Firebase.Functions.Future_HttpsCallableResult/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09;
// Firebase.Functions.Future_HttpsCallableResult/Action
struct Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A;
// Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0;
// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12;
// Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9;

IL2CPP_EXTERN_C RuntimeClass* Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t01A062AFB2E1404AA0866B7C6C418382BF589F84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FunctionsException_tF9A782424F93633763DA6C6E4EB0C56F65EBC366_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F;
IL2CPP_EXTERN_C String_t* _stringLiteral3AA322FB2DA3648EC81AEB6AFE2CA46BC7B37EC7;
IL2CPP_EXTERN_C String_t* _stringLiteral48189E861560CEBB714411DF089B9ECCF7761320;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB5647C188F04DC03A9F3CB77B8711FDFA8AF4C30;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18;
IL2CPP_EXTERN_C String_t* _stringLiteralC9191C84DBBA8308DD0092667E2B69A1C00EBBC5;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m044D73503E37BC0CFCFE185ABEF5F1AD060B1F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mC0B8E2B0DD33445AC1866FDCA69D332C4934E796_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m68E55D9AC4CA91592D05807524007D0DF117FAD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mBAE84CA7C4C2369D659565F3085F89CECA0F9F1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD1B2425E180A6697EA2CFF6E4DDA018D2844FDD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD9BB91D7AD7EDAD2475F2DC932A0BE1C12EE8107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m23193070931F221690B4AFF49ECC32FC41F00982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m4A6EF3006344E1B6C3B594C536707A6257EC2DB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseFunctionsInternal_GetHttpsCallableFromURL_mF810982D47D777E0CA2BB280B557350879E06410_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseFunctionsInternal_GetHttpsCallable_m1B822609DE2F33B993941CA586139F30A73202A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseFunctionsInternal_GetInstanceInternal_m5C67FC07CC486B0C90FF657F335446A420F8F839_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseFunctionsInternal_ReleaseReferenceInternal_m3315B5DFFEE93C6C09D88E76EF50DEF8F44EFE0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseFunctionsInternal_UseFunctionsEmulator_m4F6E9E0E0001A9C18E7BEBCB442F0E958BF7FC85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseFunctionsInternal_get_App_m62620C2BE9FEDEBDB8A07F7C13621DDECC6038E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseFunctionsInternal_swigRelease_mE1AC2F9452EB44A1BA6006A582AA8A887EFA8EEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseFunctions_GetInstance_m3A1CB5B7F6BFD7E931F53B41B8E9F9FB9C33E37D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseFunctions_OnAppDisposed_mE17B21E00C3DC7785DBEA109165800E88DE49586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseFunctions_ThrowIfNull_mCF74877590082CB775EE46CE637135F61F775BEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_HttpsCallableResult_GetResult_m34CDDE3BAE9018DD42AC7C4C9A8571AB472BBF74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_HttpsCallableResult_SWIG_CompletionDispatcher_m5ABC0D95B7A4A08B60078B8CBF0472969C134A90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_HttpsCallableResult_SWIG_FreeCompletionData_m303AC72BB4879C8B7111BEF9540F7DEBCB595BDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_HttpsCallableResult_SWIG_OnCompletion_mA4C3D854740F4B77E7AB478606E3B538354ED9F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_HttpsCallableResult_ThrowIfDisposed_m0613BECE8D559609DAE01BE4F36BCA5AC1233129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_HttpsCallableResult__ctor_mB1B131A7B601AD417ABA2A1AA1291D1792526D2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_HttpsCallableResult_swigRelease_m586EE557A192CE68CC39325BB57FCEDBCEB54E64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpsCallableReferenceInternal_CallAsync_m7BD00ADB34AC56357156F9A6CD08227209031787_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpsCallableReferenceInternal_CallAsync_m9425A922780EEDD788DE096634337084362D811A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpsCallableReferenceInternal__ctor_m4DFAE5E073A3C8F342705F697EA85080A7AEA500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpsCallableReferenceInternal__ctor_mB1998C4A1EC0A3F485AA1E8814604A56433895E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpsCallableReferenceInternal_get_Functions_mCD015B62AFD68DBCA9A46E5D6C89B148C9DB6457_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpsCallableReferenceInternal_get_IsValid_m1483E632CACA0AFECEE62383C84F0E913E8C294C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpsCallableReferenceInternal_swigRelease_mBDEA9E15338411A19860D50E683625EB6675FABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpsCallableReference_U3CCallAsyncU3Eb__9_0_m12374D4FD6DBFF0D2C952544525658A43FD8020C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpsCallableResultInternal__ctor_m084F828433B315DECD1A8E98986DDD99A9385AA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpsCallableResultInternal__ctor_mEF49F52132BF88E4318FF12FBDF1D1BA9B509A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpsCallableResultInternal_data_m268B74E23C14C592B9ECD27DC01237267E489B46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpsCallableResultInternal_swigRelease_m43B69150ED77D0820E4C0EF8EE3797FA1CB6DCE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m7FFCF0A70D5E68DCE979D90F2A2A369D15766E49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_mB28C0E8E1C72D661907FA07D3E07D279EFA1CA50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_mC5DFEF6C993FEB15174B1132C46610AB794A8376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m977EB9947A66334C23A3A8CE7EDC069C4FA72C1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_mA47618D85CEA1AD632307DE6518ED199B797FC6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m7BA4D3567824AB4D83FE631F61EC35A394CE7494_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_mE7B7BB5D3140893D587C33A2ECAEDCE547EF84AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m32E41124613D2F61B2AFB13DD25E026EC98453D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m320675D3ADE4FA1C49E68C3C79BF79EADA59AEF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m0DC409CBBD3DA9123DD2683A67FBA56F480F1C74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m99B16EEB736C612C48021B8C7B7FBB3CD66F5099_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m69E8631819BCD1F60D2524AF76DBA6134546A031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_mDA36E9D1C1131C736FFD002A690CDDB6E35273E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m8770ED05C98BB6B6750DF02609CB90132DE1CDD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m47F45E608CDBB943EB4A18F7925618AF66B50916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_mFD3BDFACED0A485A335AD53EEF9062046802E518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_mCA618E92574BDBE0C0F62D1006B580762CC9EC35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mF99DD1C33EC5EA7208B292F054232012D92308FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m29722D36C838285B6D411487DFA148FB2D979EE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m8683161C15654D333DD000A7295F719362E5318E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_TisHttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B_mC740B95A9B6CB33238C9E1180E31AC661E1F2081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m703DED742BAB60FC5FCB811550AE88B2C037A2ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CGetTaskU3Eb__0_mFE06DABE2CF8B9BBD7BDEC6C62E3FF812D10D6F0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6A36CB08BC1223FA35A4B58E9B5CEDC7B5FA233B 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>
struct Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t137D36767493FB2A37FF0E48A193E547DB3163C6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t53A0F2243B71D8C17C4019AE777DE62AAA62069D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA8E6DA0556C3C707E98097807FBCD4F4469DCB06* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Firebase.Functions.FirebaseFunctions>
struct Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t100C8CE308DBC8D50D9699F129A64CD1A40E4065* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tFD701A3E6345F2C97C3EAB80C22617381E314950* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t01A7D342E5C102EF1D83F478A709943C53743C35* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal>
struct TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// Firebase.Functions.FirebaseFunctions
struct FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE  : public RuntimeObject
{
	// Firebase.Functions.FirebaseFunctionsInternal Firebase.Functions.FirebaseFunctions::functionsInternal
	FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* ___functionsInternal_1;
	// Firebase.FirebaseApp Firebase.Functions.FirebaseFunctions::firebaseApp
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___firebaseApp_2;
	// System.String Firebase.Functions.FirebaseFunctions::instanceKey
	String_t* ___instanceKey_3;
};

// Firebase.Functions.FunctionsInternal
struct FunctionsInternal_tB314B1E1CDC271E9E070238FA557673ED508A754  : public RuntimeObject
{
};

// Firebase.Functions.FunctionsInternalPINVOKE
struct FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA  : public RuntimeObject
{
};

// Firebase.Functions.HttpsCallableReference
struct HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1  : public RuntimeObject
{
	// Firebase.Functions.FirebaseFunctions Firebase.Functions.HttpsCallableReference::firebaseFunctions
	FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* ___firebaseFunctions_0;
	// Firebase.Functions.HttpsCallableReferenceInternal Firebase.Functions.HttpsCallableReference::<Internal>k__BackingField
	HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* ___U3CInternalU3Ek__BackingField_1;
};

// Firebase.Functions.HttpsCallableResult
struct HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B  : public RuntimeObject
{
	// System.Object Firebase.Functions.HttpsCallableResult::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_0;
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

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
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

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1  : public RuntimeObject
{
};

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException
struct SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2  : public RuntimeObject
{
};

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D  : public RuntimeObject
{
};

// Firebase.Functions.Future_HttpsCallableResult/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09  : public RuntimeObject
{
	// Firebase.Functions.Future_HttpsCallableResult Firebase.Functions.Future_HttpsCallableResult/<>c__DisplayClass5_0::fu
	Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal> Firebase.Functions.Future_HttpsCallableResult/<>c__DisplayClass5_0::tcs
	TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280* ___tcs_1;
};

// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResult>
struct Task_1_tBBAD4AE7DDD4F2281E3F4302E116EB16967BB6B8  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>
struct Task_1_t53143AECA7658134C63B9385563DBDECDAA17503  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
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

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
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

// Firebase.FirebaseException
struct FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED  : public Exception_t
{
	// System.Int32 Firebase.FirebaseException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_18;
};

// Firebase.Functions.FirebaseFunctionsInternal
struct FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Functions.FirebaseFunctionsInternal::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Functions.FirebaseFunctionsInternal::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.Functions.FunctionsException
struct FunctionsException_tF9A782424F93633763DA6C6E4EB0C56F65EBC366  : public Exception_t
{
	// Firebase.Functions.FunctionsErrorCode Firebase.Functions.FunctionsException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_18;
};

// Firebase.FutureBase
struct FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.Functions.HttpsCallableReferenceInternal
struct HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Functions.HttpsCallableReferenceInternal::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Functions.HttpsCallableReferenceInternal::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.Functions.HttpsCallableResultInternal
struct HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Functions.HttpsCallableResultInternal::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Functions.HttpsCallableResultInternal::swigCMemOwn
	bool ___swigCMemOwn_1;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Firebase.Variant
struct Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Variant::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Variant::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.Func`2<System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>,Firebase.Functions.HttpsCallableResult>
struct Func_2_t01A062AFB2E1404AA0866B7C6C418382BF589F84  : public MulticastDelegate_t
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

// Firebase.Functions.Future_HttpsCallableResult
struct Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057  : public FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36
{
	// System.Runtime.InteropServices.HandleRef Firebase.Functions.Future_HttpsCallableResult::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
	// System.IntPtr Firebase.Functions.Future_HttpsCallableResult::callbackData
	intptr_t ___callbackData_6;
	// Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate Firebase.Functions.Future_HttpsCallableResult::SWIG_CompletionCB
	SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* ___SWIG_CompletionCB_7;
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

// Firebase.Functions.Future_HttpsCallableResult/Action
struct Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A  : public MulticastDelegate_t
{
};

// Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF  : public MulticastDelegate_t
{
};

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0  : public MulticastDelegate_t
{
};

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12  : public MulticastDelegate_t
{
};

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9  : public MulticastDelegate_t
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

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>

// System.Collections.Generic.Dictionary`2<System.String,Firebase.Functions.FirebaseFunctions>

// System.Collections.Generic.Dictionary`2<System.String,Firebase.Functions.FirebaseFunctions>

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal>

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// Firebase.Functions.FirebaseFunctions
struct FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Functions.FirebaseFunctions> Firebase.Functions.FirebaseFunctions::functionsByInstanceKey
	Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* ___functionsByInstanceKey_0;
};

// Firebase.Functions.FirebaseFunctions

// Firebase.Functions.FunctionsInternal

// Firebase.Functions.FunctionsInternal

// Firebase.Functions.FunctionsInternalPINVOKE
struct FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_StaticFields
{
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper Firebase.Functions.FunctionsInternalPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1* ___swigExceptionHelper_0;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper Firebase.Functions.FunctionsInternalPINVOKE::swigStringHelper
	SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D* ___swigStringHelper_1;
};

// Firebase.Functions.FunctionsInternalPINVOKE

// Firebase.Functions.HttpsCallableReference

// Firebase.Functions.HttpsCallableReference

// Firebase.Functions.HttpsCallableResult

// Firebase.Functions.HttpsCallableResult

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

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.Uri

// System.ValueType

// System.ValueType

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields
{
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___applicationDelegate_0;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___arithmeticDelegate_1;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___divideByZeroDelegate_2;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___indexOutOfRangeDelegate_3;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___invalidCastDelegate_4;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___invalidOperationDelegate_5;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___ioDelegate_6;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___nullReferenceDelegate_7;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___outOfMemoryDelegate_8;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___overflowDelegate_9;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___systemDelegate_10;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* ___argumentDelegate_11;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* ___argumentNullDelegate_12;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* ___argumentOutOfRangeDelegate_13;
};

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException
struct SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_StaticFields
{
	// System.Int32 Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
	// System.Object Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::exceptionsLock
	RuntimeObject* ___exceptionsLock_2;
};

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException
struct SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_ThreadStaticFields
{
	// System.Exception Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::pendingException
	Exception_t* ___pendingException_0;
};

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D_StaticFields
{
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* ___stringDelegate_0;
};

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper

// Firebase.Functions.Future_HttpsCallableResult/<>c__DisplayClass5_0

// Firebase.Functions.Future_HttpsCallableResult/<>c__DisplayClass5_0

// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResult>

// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResult>

// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>

// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>

// System.Threading.Tasks.Task`1<System.Object>

// System.Threading.Tasks.Task`1<System.Object>

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

// System.AggregateException

// System.AggregateException

// System.ApplicationException

// System.ApplicationException

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

// Firebase.FirebaseException

// Firebase.FirebaseException

// Firebase.Functions.FirebaseFunctionsInternal

// Firebase.Functions.FirebaseFunctionsInternal

// Firebase.Functions.FunctionsException

// Firebase.Functions.FunctionsException

// Firebase.FutureBase

// Firebase.FutureBase

// Firebase.Functions.HttpsCallableReferenceInternal

// Firebase.Functions.HttpsCallableReferenceInternal

// Firebase.Functions.HttpsCallableResultInternal

// Firebase.Functions.HttpsCallableResultInternal

// Firebase.InitializationException

// Firebase.InitializationException

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

// Firebase.Variant

// Firebase.Variant

// System.Func`2<System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>,Firebase.Functions.HttpsCallableResult>

// System.Func`2<System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>,Firebase.Functions.HttpsCallableResult>

// System.ArgumentException

// System.ArgumentException

// System.ArithmeticException

// System.ArithmeticException

// System.AsyncCallback

// System.AsyncCallback

// System.EventHandler

// System.EventHandler

// Firebase.Functions.Future_HttpsCallableResult
struct Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action> Firebase.Functions.Future_HttpsCallableResult::Callbacks
	Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A* ___Callbacks_3;
	// System.Int32 Firebase.Functions.Future_HttpsCallableResult::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.Functions.Future_HttpsCallableResult::CallbackLock
	RuntimeObject* ___CallbackLock_5;
};

// Firebase.Functions.Future_HttpsCallableResult

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

// Firebase.Functions.Future_HttpsCallableResult/Action

// Firebase.Functions.Future_HttpsCallableResult/Action

// Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate

// Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate

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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Object>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_1_ContinueWith_TisRuntimeObject_mBAE10B98BE3AB4220C36C1DA465B07919FD7F3DF_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, Func_2_t374ECF90050F953CFA1EB9E9CE02A9C76AC292B2* ___0_continuationFunction, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_m7DB7E6251CB92C741F7E081E2ECAA06FF79E212F_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_mA69C039F3F3D08D1CCD6ADE3E9693B6157038ABB_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m849DD816EFE8D669DBFA139254D5E3C4D8C78F85 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FirebaseFunctionsInternal::SetSwigCMemOwn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_SetSwigCMemOwn_m65812A8C24846C95791A9F279F1678E05ADA21D1 (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* __this, bool ___0_ownership, const RuntimeMethod* method) ;
// System.String Firebase.Functions.FirebaseFunctions::InstanceKey(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseFunctions_InstanceKey_m9BDDCC10FF7C55F5099CDEB836D8F36A57C9FAB1 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, String_t* ___1_region, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FirebaseFunctions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions_Dispose_m54FB1DCF9305F9F4BCF6B2A1AD6864B70417CDAA (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Functions.FirebaseFunctions>::Remove(TKey)
inline bool Dictionary_2_Remove_m044D73503E37BC0CFCFE185ABEF5F1AD060B1F69 (Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Void Firebase.Functions.FirebaseFunctionsInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_Dispose_mC94E11C6DABFFDFD2CEA00328CD2D63B158AEE32 (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* __this, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_mAAF77EA50314A467CBB4481448C72FA9B7173289 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0 (const RuntimeMethod* method) ;
// Firebase.Functions.FirebaseFunctions Firebase.Functions.FirebaseFunctions::GetInstance(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* FirebaseFunctions_GetInstance_m640126081C57F4DA29995DAC6082092AC662AC06 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, const RuntimeMethod* method) ;
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m89C11F96726C8E4FD3CCAE04A5DC3129F7CD975E (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// Firebase.Functions.FirebaseFunctions Firebase.Functions.FirebaseFunctions::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* FirebaseFunctions_GetInstance_m3A1CB5B7F6BFD7E931F53B41B8E9F9FB9C33E37D (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, String_t* ___1_region, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Functions.FirebaseFunctions>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m68E55D9AC4CA91592D05807524007D0DF117FAD7 (Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* __this, String_t* ___0_key, FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883*, String_t*, FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// Firebase.Functions.FirebaseFunctionsInternal Firebase.Functions.FirebaseFunctionsInternal::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* FirebaseFunctionsInternal_GetInstanceInternal_m5C67FC07CC486B0C90FF657F335446A420F8F839 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, String_t* ___1_region, int32_t* ___2_init_result_out, const RuntimeMethod* method) ;
// System.String Firebase.ErrorMessages::get_DllNotFoundExceptionErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DllNotFoundExceptionErrorMessage_m0B273BB2A0E048AACEA44918DBBBBACB38B579F3 (const RuntimeMethod* method) ;
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_mC48C74EE90B137CDEA82068C2E1695D81974C5BF (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* __this, int32_t ___0_result, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49 (int32_t ___0_logLevel, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FirebaseFunctions::.ctor(Firebase.Functions.FirebaseFunctionsInternal,Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions__ctor_m8B90EB528FFF27F7D51057EB3E2E1E07FBAFBE67 (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* __this, FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* ___0_functions, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___1_app, String_t* ___2_region, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Functions.FirebaseFunctions>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m4A6EF3006344E1B6C3B594C536707A6257EC2DB6 (Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* __this, String_t* ___0_key, FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883*, String_t*, FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Runtime.InteropServices.HandleRef Firebase.Functions.FirebaseFunctionsInternal::getCPtr(Firebase.Functions.FirebaseFunctionsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseFunctionsInternal_getCPtr_m7BA78F671CB1587E01912DD8E3E53A3176BE1065 (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FirebaseFunctions::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions_ThrowIfNull_mCF74877590082CB775EE46CE637135F61F775BEA (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* __this, const RuntimeMethod* method) ;
// Firebase.Functions.HttpsCallableReferenceInternal Firebase.Functions.FirebaseFunctionsInternal::GetHttpsCallable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* FirebaseFunctionsInternal_GetHttpsCallable_m1B822609DE2F33B993941CA586139F30A73202A8 (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.HttpsCallableReference::.ctor(Firebase.Functions.FirebaseFunctions,Firebase.Functions.HttpsCallableReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReference__ctor_mD1098348B580CEE2BAB4D795CDFE7AF7A39A10F8 (HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* __this, FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* ___0_functions, HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* ___1_callableReferenceInternal, const RuntimeMethod* method) ;
// Firebase.Functions.HttpsCallableReferenceInternal Firebase.Functions.FirebaseFunctionsInternal::GetHttpsCallableFromURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* FirebaseFunctionsInternal_GetHttpsCallableFromURL_mF810982D47D777E0CA2BB280B557350879E06410 (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// Firebase.Functions.HttpsCallableReference Firebase.Functions.FirebaseFunctions::GetHttpsCallableFromURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* FirebaseFunctions_GetHttpsCallableFromURL_mFC6C2461216C1A40BC034B3E3545643B2B78DD27 (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FirebaseFunctionsInternal::UseFunctionsEmulator(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_UseFunctionsEmulator_m4F6E9E0E0001A9C18E7BEBCB442F0E958BF7FC85 (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* __this, String_t* ___0_origin, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Functions.FirebaseFunctions>::.ctor()
inline void Dictionary_2__ctor_mD1B2425E180A6697EA2CFF6E4DDA018D2844FDD4 (Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 Firebase.FirebaseException::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FirebaseException_get_ErrorCode_mE665B1ADB8DD846C3C604DD72F25C1B476EB3A66_inline (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsException::set_ErrorCode(Firebase.Functions.FunctionsErrorCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FunctionsException_set_ErrorCode_mF79722F297C916938AABEDDF00B6CF78BE7011A6_inline (FunctionsException_tF9A782424F93633763DA6C6E4EB0C56F65EBC366* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.HttpsCallableReference::set_Internal(Firebase.Functions.HttpsCallableReferenceInternal)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpsCallableReference_set_Internal_m7605C8CDBC33018A2EC28A061BCF1A7445D26D50_inline (HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* __this, HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResult> Firebase.Functions.HttpsCallableReference::CallAsync(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tBBAD4AE7DDD4F2281E3F4302E116EB16967BB6B8* HttpsCallableReference_CallAsync_m5987867A49598F5F95FE8685ABCEE269D6FFD742 (HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* __this, RuntimeObject* ___0_data, const RuntimeMethod* method) ;
// Firebase.Variant Firebase.Variant::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* Variant_FromObject_m5D406B8B5BBF1DB6FDD90D83468B7F29B01501B7 (RuntimeObject* ___0_o, const RuntimeMethod* method) ;
// Firebase.Functions.HttpsCallableReferenceInternal Firebase.Functions.HttpsCallableReference::get_Internal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* HttpsCallableReference_get_Internal_mD2A9C790BBD1AD69FA92E6AC7151EBEF3961A741_inline (HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal> Firebase.Functions.HttpsCallableReferenceInternal::CallAsync(Firebase.Variant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* HttpsCallableReferenceInternal_CallAsync_m7BD00ADB34AC56357156F9A6CD08227209031787 (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* __this, Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* ___0_data, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>,Firebase.Functions.HttpsCallableResult>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF97AF5F0BB02336B2349AFC95B2DE794F31CF2CA (Func_2_t01A062AFB2E1404AA0866B7C6C418382BF589F84* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t01A062AFB2E1404AA0866B7C6C418382BF589F84*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>::ContinueWith<Firebase.Functions.HttpsCallableResult>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>)
inline Task_1_tBBAD4AE7DDD4F2281E3F4302E116EB16967BB6B8* Task_1_ContinueWith_TisHttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B_mC740B95A9B6CB33238C9E1180E31AC661E1F2081 (Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* __this, Func_2_t01A062AFB2E1404AA0866B7C6C418382BF589F84* ___0_continuationFunction, const RuntimeMethod* method)
{
	return ((  Task_1_tBBAD4AE7DDD4F2281E3F4302E116EB16967BB6B8* (*) (Task_1_t53143AECA7658134C63B9385563DBDECDAA17503*, Func_2_t01A062AFB2E1404AA0866B7C6C418382BF589F84*, const RuntimeMethod*))Task_1_ContinueWith_TisRuntimeObject_mBAE10B98BE3AB4220C36C1DA465B07919FD7F3DF_gshared)(__this, ___0_continuationFunction, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC (ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886*, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared)(__this, method);
}
// System.Void Firebase.Functions.FunctionsException::.ctor(Firebase.FirebaseException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsException__ctor_m949678CC25A994D3CA44044651E62BE39932E509 (FunctionsException_tF9A782424F93633763DA6C6E4EB0C56F65EBC366* __this, FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* ___0_e, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>::get_Result()
inline HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* Task_1_get_Result_m703DED742BAB60FC5FCB811550AE88B2C037A2ED (Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* __this, const RuntimeMethod* method)
{
	return ((  HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* (*) (Task_1_t53143AECA7658134C63B9385563DBDECDAA17503*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// Firebase.Variant Firebase.Functions.HttpsCallableResultInternal::data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* HttpsCallableResultInternal_data_m268B74E23C14C592B9ECD27DC01237267E489B46 (HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* __this, const RuntimeMethod* method) ;
// System.Object Firebase.VariantExtension::ToObject(Firebase.Variant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VariantExtension_ToObject_m14F3320AA1586559646082460FA2633439C0CBD4 (Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* ___0_variant, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.HttpsCallableResult::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResult__ctor_m06FCDA33D24727CA7A4E376F1A288E66A8E88A36 (HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B* __this, RuntimeObject* ___0_data, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.HttpsCallableResult::set_Data(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpsCallableResult_set_Data_m1CE1349DE624F9387FC23BF6C71AC5BCA62435AF_inline (HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.Future_HttpsCallableResult::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_SWIG_CompletionDispatcher_m5ABC0D95B7A4A08B60078B8CBF0472969C134A90 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Future_HttpsCallableResult_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Future_HttpsCallableResult_SWIGUpcast_m44D72DE55B6E79DC312987A3D4FBC20ED90C80DF (intptr_t ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_m98C8AE4F030730C1CEE7E0B4A1816C623F2B9BE0 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___0_wrapper, intptr_t ___1_handle, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m32193D02DE4608C6C3EDF42F3D0495707DA4D15E (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.Future_HttpsCallableResult::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_SetCompletionData_mA9078B22BBA79512C13DE42D52314A678B504672 (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* __this, intptr_t ___0_data, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::delete_Future_HttpsCallableResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_delete_Future_HttpsCallableResult_m5744DD3241122796355C571391301984230F9BC2 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.FutureBase::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m17D716EFFAF752B7DBF402C73D757D02C34457EB (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.Future_HttpsCallableResult/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m45B7883EB0D88E7E9494BD8F6504BC87B0117676 (U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal>::.ctor()
inline void TaskCompletionSource_1__ctor_m29722D36C838285B6D411487DFA148FB2D979EE5 (TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// System.Boolean Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_mB6422DD2E5C51E682EBE4E86B9E6ADE557079F60 (const RuntimeMethod* method) ;
// System.Exception Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682 (const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_mCA618E92574BDBE0C0F62D1006B580762CC9EC35 (TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_SetException_m7DB7E6251CB92C741F7E081E2ECAA06FF79E212F_gshared)(__this, ___0_exception, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal>::get_Task()
inline Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* TaskCompletionSource_1_get_Task_m8683161C15654D333DD000A7295F719362E5318E_inline (TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* (*) (TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_mC75FD35438B176F95462D3A5D7D9194629211902 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_m18D67DA955D2B4EA2BC58BCE0E96AC0A177DD70F (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* __this, int32_t ___0_errorCode, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.Future_HttpsCallableResult/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m494A9233AF9F63427E72B6C3167AD3815C4B77F1 (Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.Future_HttpsCallableResult::SetOnCompletionCallback(Firebase.Functions.Future_HttpsCallableResult/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_SetOnCompletionCallback_m7BD1EE99BF580F0C214EAD8D567DE2208CC205BE (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* __this, Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* ___0_userCompletionCallback, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.Future_HttpsCallableResult::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_ThrowIfDisposed_m0613BECE8D559609DAE01BE4F36BCA5AC1233129 (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m1C79947D7FFA9AEBA29DCC845FFE355FA8CBEDDD (SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>::.ctor()
inline void Dictionary_2__ctor_mD9BB91D7AD7EDAD2475F2DC932A0BE1C12EE8107 (Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m23193070931F221690B4AFF49ECC32FC41F00982 (Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A* __this, int32_t ___0_key, Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A*, int32_t, Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.IntPtr Firebase.Functions.Future_HttpsCallableResult::SWIG_OnCompletion(Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_HttpsCallableResult_SWIG_OnCompletion_mA4C3D854740F4B77E7AB478606E3B538354ED9F5 (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* __this, SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* ___0_cs_callback, int32_t ___1_cs_key, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.Future_HttpsCallableResult::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_SWIG_FreeCompletionData_m303AC72BB4879C8B7111BEF9540F7DEBCB595BDC (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* __this, intptr_t ___0_data, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mBAE84CA7C4C2369D659565F3085F89CECA0F9F1F (Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A* __this, int32_t ___0_key, Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A*, int32_t, Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>::Remove(TKey)
inline bool Dictionary_2_Remove_mC0B8E2B0DD33445AC1866FDCA69D332C4934E796 (Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___0_key, method);
}
// System.Void Firebase.Functions.Future_HttpsCallableResult/Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m6F6A4E766588CA62EA8A607E9A75413E8A33ADCA_inline (Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* __this, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::new_Future_HttpsCallableResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_new_Future_HttpsCallableResult_m282583AB7FB3002F36CD5811AFE7C5647DF11222 (const RuntimeMethod* method) ;
// System.Void Firebase.Functions.Future_HttpsCallableResult::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult__ctor_mF14D418B13A19A10E88EA97D4C47E434A3632532 (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE (const RuntimeMethod* method) ;
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51 (const RuntimeMethod* method) ;
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Future_HttpsCallableResult_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Future_HttpsCallableResult_SWIG_OnCompletion_mBFDB51E533FE070B340F52AC4F6DF052B2355E89 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::Future_HttpsCallableResult_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_Future_HttpsCallableResult_SWIG_FreeCompletionData_m74ABB701E5E1565DC8F3640D70523C7511F968BC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Future_HttpsCallableResult_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Future_HttpsCallableResult_GetResult_m0E6F7CD71342C074100A5995FC1CA5CF3DE7D9D5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.HttpsCallableResultInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResultInternal__ctor_m188853F20BAA49703E65490721AB6EC7D08D5B40 (HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_mFD3BDFACED0A485A335AD53EEF9062046802E518 (TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280*, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_mA69C039F3F3D08D1CCD6ADE3E9693B6157038ABB_gshared)(__this, method);
}
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_m47E3B5E0A43B4C19510A77B3658EE5D7D10B6030 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m5CC18319253B1ECC3C8AC675B213A08B1755D527 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// Firebase.Functions.HttpsCallableResultInternal Firebase.Functions.Future_HttpsCallableResult::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* Future_HttpsCallableResult_GetResult_m34CDDE3BAE9018DD42AC7C4C9A8571AB472BBF74 (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_mF99DD1C33EC5EA7208B292F054232012D92308FD (TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280* __this, HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280*, HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared)(__this, ___0_result, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.HttpsCallableReferenceInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReferenceInternal_Dispose_m03BC5478F12D7AC83DD627E6539F7EFA3456FF08 (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::delete_HttpsCallableReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_delete_HttpsCallableReferenceInternal_m691BBEE83440B636AE7B1175EA30E980B1B6FD9A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::new_HttpsCallableReferenceInternal__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_new_HttpsCallableReferenceInternal__SWIG_0_m2C2E23CD4CF3D50D526DD106F207CB7482E73146 (const RuntimeMethod* method) ;
// System.Void Firebase.Functions.HttpsCallableReferenceInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReferenceInternal__ctor_mAD4B75F160005854190D44535DFC5876D96041E0 (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.Functions.HttpsCallableReferenceInternal::getCPtr(Firebase.Functions.HttpsCallableReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F HttpsCallableReferenceInternal_getCPtr_m07901B220B532F59F07EA8607E646BFCBFEB0FEE (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::new_HttpsCallableReferenceInternal__SWIG_1(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_new_HttpsCallableReferenceInternal__SWIG_1_m60176A8068FAF2E772354E7E58240D89FBFBB9B5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::HttpsCallableReferenceInternal_Call__SWIG_0(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_HttpsCallableReferenceInternal_Call__SWIG_0_m047B8FEE40C1625943A93A028E6A05F98E961CA1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal> Firebase.Functions.Future_HttpsCallableResult::GetTask(Firebase.Functions.Future_HttpsCallableResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* Future_HttpsCallableResult_GetTask_m1E36472756E1BE4E53F0BDF5F1D08086AADA007B (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* ___0_fu, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.Variant::getCPtr(Firebase.Variant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F Variant_getCPtr_m02745459FA3350FFDC29D01587C8D797BFC10067 (Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::HttpsCallableReferenceInternal_Call__SWIG_1(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_HttpsCallableReferenceInternal_Call__SWIG_1_m91B3A2841B4DDEBBF2224D6F0F3EC901A882EC94 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::HttpsCallableReferenceInternal_Functions_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_HttpsCallableReferenceInternal_Functions_get_m8161F33B08FCEFBE74BE99CB5818C0FF82E202ED (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FirebaseFunctionsInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal__ctor_m9C6C9816FD7FEF909D2CB4C159A4A6C792900EDA (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Boolean Firebase.Functions.FunctionsInternalPINVOKE::HttpsCallableReferenceInternal_IsValid_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FunctionsInternalPINVOKE_HttpsCallableReferenceInternal_IsValid_get_m80E1909929C624A28BAA4D0FE19BE203C5B8EE31 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.HttpsCallableResultInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResultInternal_Dispose_mE727D53C05611CD2200811866D95FE855DDF6FC2 (HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::delete_HttpsCallableResultInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_delete_HttpsCallableResultInternal_m2BEDF2B91E4DDC72CEC7EA38266D0582A3225146 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::new_HttpsCallableResultInternal__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_new_HttpsCallableResultInternal__SWIG_0_m961C833CCC73754F92A407BB0C0396CCFF94BA2F (const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.Functions.HttpsCallableResultInternal::getCPtr(Firebase.Functions.HttpsCallableResultInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F HttpsCallableResultInternal_getCPtr_m045A49E42622D8E0857F68C574075CBE534A9052 (HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::new_HttpsCallableResultInternal__SWIG_1(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_new_HttpsCallableResultInternal__SWIG_1_m8C8B2CB2D6C6C93FBA301D1E499FE884ADFC2BF3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::HttpsCallableResultInternal_data(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_HttpsCallableResultInternal_data_m6AD188669EED52C3ED2618838EA10D6E3A128283 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Variant::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Variant__ctor_mCBCDC0D6E1290E1A8412B59A4A8956BC32DFA163 (Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FirebaseFunctionsInternal::ReleaseReferenceInternal(Firebase.Functions.FirebaseFunctionsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_ReleaseReferenceInternal_m3315B5DFFEE93C6C09D88E76EF50DEF8F44EFE0C (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* ___0_instance, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::FirebaseFunctionsInternal_GetHttpsCallable(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_FirebaseFunctionsInternal_GetHttpsCallable_mA5BF42B88978D381BA9E3E49296E989A537A3C72 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::FirebaseFunctionsInternal_GetHttpsCallableFromURL(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_FirebaseFunctionsInternal_GetHttpsCallableFromURL_mE103B4195234C6B4D8E58323FD100467FB842F7F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::FirebaseFunctionsInternal_UseFunctionsEmulator(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_FirebaseFunctionsInternal_UseFunctionsEmulator_mE0EE48C65B08BD0681C66EC5C8F576B8A2DD63AC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::FirebaseFunctionsInternal_App_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_FirebaseFunctionsInternal_App_get_mD88C7E999218E05D86852A763975CA611A83A8D9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp__ctor_mC539AF748C2E16CD3B7820D6039B9A29DBDF908C (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseApp_getCPtr_m54B5DAC73BA43E79771E0181BEFD846BBE06C84F (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::FirebaseFunctionsInternal_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_FirebaseFunctionsInternal_GetInstanceInternal_m74C4F3EB7D11B6C04E8F4A81DDFB02F3646BDA1B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, int32_t* ___2_jarg3, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::FirebaseFunctionsInternal_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_FirebaseFunctionsInternal_ReleaseReferenceInternal_m8ED65D54A71C84C5B04C0E6F57D7A3B0CB11026C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m966347603E004BED6861B69E41F38362C39E31E8 (SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m2F624F773D17AF9EBDA8BA7A8983402E3F5B341D (SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m7FFCF0A70D5E68DCE979D90F2A2A369D15766E49 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_mA47618D85CEA1AD632307DE6518ED199B797FC6C (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m7BA4D3567824AB4D83FE631F61EC35A394CE7494 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m32E41124613D2F61B2AFB13DD25E026EC98453D0 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m320675D3ADE4FA1C49E68C3C79BF79EADA59AEF7 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m0DC409CBBD3DA9123DD2683A67FBA56F480F1C74 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mE7B7BB5D3140893D587C33A2ECAEDCE547EF84AA (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m99B16EEB736C612C48021B8C7B7FBB3CD66F5099 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m69E8631819BCD1F60D2524AF76DBA6134546A031 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mDA36E9D1C1131C736FFD002A690CDDB6E35273E4 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m8770ED05C98BB6B6750DF02609CB90132DE1CDD1 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mB28C0E8E1C72D661907FA07D3E07D279EFA1CA50 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mC5DFEF6C993FEB15174B1132C46610AB794A8376 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m977EB9947A66334C23A3A8CE7EDC069C4FA72C1C (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5 (Exception_t* ___0_e, const RuntimeMethod* method) ;
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
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m74D21E060B3E1413A42880DA0979CD03D103944D (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mD0057A550768AD310F9B13F65A495B2A0F6D522E (ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FunctionsInternal(Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FunctionsInternal_m5E22471229B80DE87FB3B4F3CF476DD9BFB4904B (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___0_applicationDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___1_arithmeticDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___2_divideByZeroDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___3_indexOutOfRangeDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___4_invalidCastDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___5_invalidOperationDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___6_ioDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___7_nullReferenceDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___8_outOfMemoryDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___9_overflowDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___10_systemExceptionDelegate, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FunctionsInternal(Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FunctionsInternal_m7FE15E0EFCDEB651F6F4E2026582BBD5D480F5C0 (ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* ___0_argumentDelegate, ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* ___1_argumentNullDelegate, ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* ___2_argumentOutOfRangeDelegate, const RuntimeMethod* method) ;
// System.String Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m47F45E608CDBB943EB4A18F7925618AF66B50916 (String_t* ___0_cString, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m388B9393AFF16EDA1F7F71FA0BD654122F49B1A4 (SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FunctionsInternal(Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FunctionsInternal_m5BF4458F7C3914CD0FDBCF502905A980C97AA4E1 (SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* ___0_stringDelegate, const RuntimeMethod* method) ;
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::ExportFix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_ExportFix_m451E35224542B663D20C0A3FE3BBA0A165610160 (const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Functions_CSharp_ExportFix();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_CSharp_new_Future_HttpsCallableResult();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_CSharp_Future_HttpsCallableResult_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Functions_CSharp_Future_HttpsCallableResult_SWIG_FreeCompletionData(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_CSharp_Future_HttpsCallableResult_GetResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Functions_CSharp_delete_Future_HttpsCallableResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_CSharp_new_HttpsCallableReferenceInternal__SWIG_0();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Functions_CSharp_delete_HttpsCallableReferenceInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_CSharp_new_HttpsCallableReferenceInternal__SWIG_1(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_CSharp_HttpsCallableReferenceInternal_Call__SWIG_0(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_CSharp_HttpsCallableReferenceInternal_Call__SWIG_1(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_CSharp_HttpsCallableReferenceInternal_Functions_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Functions_CSharp_HttpsCallableReferenceInternal_IsValid_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_CSharp_new_HttpsCallableResultInternal__SWIG_0();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Functions_CSharp_delete_HttpsCallableResultInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_CSharp_new_HttpsCallableResultInternal__SWIG_1(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_CSharp_HttpsCallableResultInternal_data(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Functions_CSharp_delete_FirebaseFunctionsInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_CSharp_FirebaseFunctionsInternal_GetHttpsCallable(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_CSharp_FirebaseFunctionsInternal_GetHttpsCallableFromURL(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Functions_CSharp_FirebaseFunctionsInternal_UseFunctionsEmulator(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_CSharp_FirebaseFunctionsInternal_App_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_CSharp_FirebaseFunctionsInternal_GetInstanceInternal(void*, char*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Functions_CSharp_FirebaseFunctionsInternal_ReleaseReferenceInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_CSharp_Future_HttpsCallableResult_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_FunctionsInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_FunctionsInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_FunctionsInternal(Il2CppMethodPointer);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Functions.FirebaseFunctions::.ctor(Firebase.Functions.FirebaseFunctionsInternal,Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions__ctor_m8B90EB528FFF27F7D51057EB3E2E1E07FBAFBE67 (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* __this, FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* ___0_functions, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___1_app, String_t* ___2_region, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_OnAppDisposed_mE17B21E00C3DC7785DBEA109165800E88DE49586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___1_app;
		__this->___firebaseApp_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firebaseApp_2), (void*)L_0);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_1 = __this->___firebaseApp_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_2, __this, (intptr_t)((void*)FirebaseFunctions_OnAppDisposed_mE17B21E00C3DC7785DBEA109165800E88DE49586_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		FirebaseApp_add_AppDisposed_m849DD816EFE8D669DBFA139254D5E3C4D8C78F85(L_1, L_2, NULL);
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_3 = ___0_functions;
		__this->___functionsInternal_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___functionsInternal_1), (void*)L_3);
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_4 = __this->___functionsInternal_1;
		NullCheck(L_4);
		FirebaseFunctionsInternal_SetSwigCMemOwn_m65812A8C24846C95791A9F279F1678E05ADA21D1(L_4, (bool)1, NULL);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_5 = ___1_app;
		String_t* L_6 = ___2_region;
		il2cpp_codegen_runtime_class_init_inline(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = FirebaseFunctions_InstanceKey_m9BDDCC10FF7C55F5099CDEB836D8F36A57C9FAB1(L_5, L_6, NULL);
		__this->___instanceKey_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instanceKey_3), (void*)L_7);
		return;
	}
}
// System.Void Firebase.Functions.FirebaseFunctions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions_Finalize_mF7D3BB8700A120518305ABD8849CC413E45BAFE9 (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			FirebaseFunctions_Dispose_m54FB1DCF9305F9F4BCF6B2A1AD6864B70417CDAA(__this, NULL);
			goto IL_0013;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		return;
	}
}
// System.Void Firebase.Functions.FirebaseFunctions::OnAppDisposed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions_OnAppDisposed_mE17B21E00C3DC7785DBEA109165800E88DE49586 (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_eventArgs, const RuntimeMethod* method) 
{
	{
		FirebaseFunctions_Dispose_m54FB1DCF9305F9F4BCF6B2A1AD6864B70417CDAA(__this, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FirebaseFunctions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions_Dispose_m54FB1DCF9305F9F4BCF6B2A1AD6864B70417CDAA (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m044D73503E37BC0CFCFE185ABEF5F1AD060B1F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_OnAppDisposed_mE17B21E00C3DC7785DBEA109165800E88DE49586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
		Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* L_0 = ((FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var))->___functionsByInstanceKey_0;
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
					Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* L_2 = V_0;
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
				Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_4 = __this->___functionsInternal_1;
				V_2 = (bool)((((RuntimeObject*)(FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_5 = V_2;
				if (!L_5)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_0073;
			}

IL_0029_1:
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
				Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* L_6 = ((FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var))->___functionsByInstanceKey_0;
				String_t* L_7 = __this->___instanceKey_3;
				NullCheck(L_6);
				bool L_8;
				L_8 = Dictionary_2_Remove_m044D73503E37BC0CFCFE185ABEF5F1AD060B1F69(L_6, L_7, Dictionary_2_Remove_m044D73503E37BC0CFCFE185ABEF5F1AD060B1F69_RuntimeMethod_var);
				FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_9 = __this->___functionsInternal_1;
				NullCheck(L_9);
				FirebaseFunctionsInternal_Dispose_mC94E11C6DABFFDFD2CEA00328CD2D63B158AEE32(L_9, NULL);
				__this->___functionsInternal_1 = (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___functionsInternal_1), (void*)(FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E*)NULL);
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_10 = __this->___firebaseApp_2;
				EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_11 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
				NullCheck(L_11);
				EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_11, __this, (intptr_t)((void*)FirebaseFunctions_OnAppDisposed_mE17B21E00C3DC7785DBEA109165800E88DE49586_RuntimeMethod_var), NULL);
				NullCheck(L_10);
				FirebaseApp_remove_AppDisposed_mAAF77EA50314A467CBB4481448C72FA9B7173289(L_10, L_11, NULL);
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
// Firebase.Functions.FirebaseFunctions Firebase.Functions.FirebaseFunctions::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* FirebaseFunctions_get_DefaultInstance_m33DE256DFD03D69319407C64DC9DFF3263814571 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0;
		L_0 = FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0(NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
		FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* L_1;
		L_1 = FirebaseFunctions_GetInstance_m640126081C57F4DA29995DAC6082092AC662AC06(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* L_2 = V_0;
		return L_2;
	}
}
// Firebase.FirebaseApp Firebase.Functions.FirebaseFunctions::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseFunctions_get_App_m4F9054DEB06EB1AF167CBF78F8D0D8AD69040603 (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* __this, const RuntimeMethod* method) 
{
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_0 = NULL;
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = __this->___firebaseApp_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_1 = V_0;
		return L_1;
	}
}
// System.String Firebase.Functions.FirebaseFunctions::InstanceKey(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseFunctions_InstanceKey_m9BDDCC10FF7C55F5099CDEB836D8F36A57C9FAB1 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, String_t* ___1_region, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___0_app;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FirebaseApp_get_Name_m89C11F96726C8E4FD3CCAE04A5DC3129F7CD975E(L_0, NULL);
		String_t* L_2 = ___1_region;
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_2, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// Firebase.Functions.FirebaseFunctions Firebase.Functions.FirebaseFunctions::GetInstance(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* FirebaseFunctions_GetInstance_m640126081C57F4DA29995DAC6082092AC662AC06 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5647C188F04DC03A9F3CB77B8711FDFA8AF4C30);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* V_0 = NULL;
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___0_app;
		il2cpp_codegen_runtime_class_init_inline(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
		FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* L_1;
		L_1 = FirebaseFunctions_GetInstance_m3A1CB5B7F6BFD7E931F53B41B8E9F9FB9C33E37D(L_0, _stringLiteralB5647C188F04DC03A9F3CB77B8711FDFA8AF4C30, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* L_2 = V_0;
		return L_2;
	}
}
// Firebase.Functions.FirebaseFunctions Firebase.Functions.FirebaseFunctions::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* FirebaseFunctions_GetInstance_m0890C53503329AEEA6C7593AD4C0E62C68761593 (String_t* ___0_region, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0;
		L_0 = FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0(NULL);
		String_t* L_1 = ___0_region;
		il2cpp_codegen_runtime_class_init_inline(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
		FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* L_2;
		L_2 = FirebaseFunctions_GetInstance_m3A1CB5B7F6BFD7E931F53B41B8E9F9FB9C33E37D(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* L_3 = V_0;
		return L_3;
	}
}
// Firebase.Functions.FirebaseFunctions Firebase.Functions.FirebaseFunctions::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* FirebaseFunctions_GetInstance_m3A1CB5B7F6BFD7E931F53B41B8E9F9FB9C33E37D (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, String_t* ___1_region, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m68E55D9AC4CA91592D05807524007D0DF117FAD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m4A6EF3006344E1B6C3B594C536707A6257EC2DB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AA322FB2DA3648EC81AEB6AFE2CA46BC7B37EC7);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* V_3 = NULL;
	int32_t V_4 = 0;
	FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* G_B7_0 = NULL;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* G_B6_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
		Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* L_0 = ((FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var))->___functionsByInstanceKey_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00aa:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00b4;
					}
				}
				{
					Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_00b4:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_4 = ___0_app;
				String_t* L_5 = ___1_region;
				il2cpp_codegen_runtime_class_init_inline(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
				String_t* L_6;
				L_6 = FirebaseFunctions_InstanceKey_m9BDDCC10FF7C55F5099CDEB836D8F36A57C9FAB1(L_4, L_5, NULL);
				V_2 = L_6;
				V_3 = (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE*)NULL;
				Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* L_7 = ((FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var))->___functionsByInstanceKey_0;
				String_t* L_8 = V_2;
				NullCheck(L_7);
				bool L_9;
				L_9 = Dictionary_2_TryGetValue_m68E55D9AC4CA91592D05807524007D0DF117FAD7(L_7, L_8, (&V_3), Dictionary_2_TryGetValue_m68E55D9AC4CA91592D05807524007D0DF117FAD7_RuntimeMethod_var);
				V_6 = L_9;
				bool L_10 = V_6;
				if (!L_10)
				{
					goto IL_0041_1;
				}
			}
			{
				FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* L_11 = V_3;
				V_7 = (bool)((!(((RuntimeObject*)(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_12 = V_7;
				if (!L_12)
				{
					goto IL_0040_1;
				}
			}
			{
				FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* L_13 = V_3;
				V_8 = L_13;
				goto IL_00b5;
			}

IL_0040_1:
			{
			}

IL_0041_1:
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_14 = ___0_app;
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_15 = L_14;
				G_B6_0 = L_15;
				if (L_15)
				{
					G_B7_0 = L_15;
					goto IL_004b_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_16;
				L_16 = FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0(NULL);
				G_B7_0 = L_16;
			}

IL_004b_1:
			{
				___0_app = G_B7_0;
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_17 = ___0_app;
				String_t* L_18 = ___1_region;
				FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_19;
				L_19 = FirebaseFunctionsInternal_GetInstanceInternal_m5C67FC07CC486B0C90FF657F335446A420F8F839(L_17, L_18, (&V_4), NULL);
				V_5 = L_19;
				int32_t L_20 = V_4;
				V_9 = (bool)((!(((uint32_t)L_20) <= ((uint32_t)0)))? 1 : 0);
				bool L_21 = V_9;
				if (!L_21)
				{
					goto IL_0071_1;
				}
			}
			{
				int32_t L_22 = V_4;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var)));
				String_t* L_23;
				L_23 = ErrorMessages_get_DllNotFoundExceptionErrorMessage_m0B273BB2A0E048AACEA44918DBBBBACB38B579F3(NULL);
				InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* L_24 = (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var)));
				NullCheck(L_24);
				InitializationException__ctor_mC48C74EE90B137CDEA82068C2E1695D81974C5BF(L_24, L_22, L_23, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseFunctions_GetInstance_m3A1CB5B7F6BFD7E931F53B41B8E9F9FB9C33E37D_RuntimeMethod_var)));
			}

IL_0071_1:
			{
				FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_25 = V_5;
				V_10 = (bool)((((RuntimeObject*)(FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E*)L_25) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_26 = V_10;
				if (!L_26)
				{
					goto IL_008e_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
				LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(3, _stringLiteral3AA322FB2DA3648EC81AEB6AFE2CA46BC7B37EC7, NULL);
				V_8 = (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE*)NULL;
				goto IL_00b5;
			}

IL_008e_1:
			{
				FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_27 = V_5;
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_28 = ___0_app;
				String_t* L_29 = ___1_region;
				FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* L_30 = (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE*)il2cpp_codegen_object_new(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
				NullCheck(L_30);
				FirebaseFunctions__ctor_m8B90EB528FFF27F7D51057EB3E2E1E07FBAFBE67(L_30, L_27, L_28, L_29, NULL);
				V_3 = L_30;
				il2cpp_codegen_runtime_class_init_inline(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
				Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* L_31 = ((FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var))->___functionsByInstanceKey_0;
				String_t* L_32 = V_2;
				FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* L_33 = V_3;
				NullCheck(L_31);
				Dictionary_2_set_Item_m4A6EF3006344E1B6C3B594C536707A6257EC2DB6(L_31, L_32, L_33, Dictionary_2_set_Item_m4A6EF3006344E1B6C3B594C536707A6257EC2DB6_RuntimeMethod_var);
				FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* L_34 = V_3;
				V_8 = L_34;
				goto IL_00b5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b5:
	{
		FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* L_35 = V_8;
		return L_35;
	}
}
// System.Void Firebase.Functions.FirebaseFunctions::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions_ThrowIfNull_mCF74877590082CB775EE46CE637135F61F775BEA (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* __this, const RuntimeMethod* method) 
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
	int32_t G_B3_0 = 0;
	{
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_0 = __this->___functionsInternal_1;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_1 = __this->___functionsInternal_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		L_2 = FirebaseFunctionsInternal_getCPtr_m7BA78F671CB1587E01912DD8E3E53A3176BE1065(L_1, NULL);
		V_1 = L_2;
		intptr_t L_3;
		L_3 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline((&V_1), NULL);
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 1;
	}

IL_0029:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_7 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseFunctions_ThrowIfNull_mCF74877590082CB775EE46CE637135F61F775BEA_RuntimeMethod_var)));
	}

IL_0034:
	{
		return;
	}
}
// Firebase.Functions.HttpsCallableReference Firebase.Functions.FirebaseFunctions::GetHttpsCallable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* FirebaseFunctions_GetHttpsCallable_mEA45AB5C8EBF74F563FBB50154433BE774F890BE (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* V_0 = NULL;
	{
		FirebaseFunctions_ThrowIfNull_mCF74877590082CB775EE46CE637135F61F775BEA(__this, NULL);
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_0 = __this->___functionsInternal_1;
		String_t* L_1 = ___0_name;
		NullCheck(L_0);
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_2;
		L_2 = FirebaseFunctionsInternal_GetHttpsCallable_m1B822609DE2F33B993941CA586139F30A73202A8(L_0, L_1, NULL);
		HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* L_3 = (HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1*)il2cpp_codegen_object_new(HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HttpsCallableReference__ctor_mD1098348B580CEE2BAB4D795CDFE7AF7A39A10F8(L_3, __this, L_2, NULL);
		V_0 = L_3;
		goto IL_001d;
	}

IL_001d:
	{
		HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* L_4 = V_0;
		return L_4;
	}
}
// Firebase.Functions.HttpsCallableReference Firebase.Functions.FirebaseFunctions::GetHttpsCallableFromURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* FirebaseFunctions_GetHttpsCallableFromURL_mFC6C2461216C1A40BC034B3E3545643B2B78DD27 (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* V_0 = NULL;
	{
		FirebaseFunctions_ThrowIfNull_mCF74877590082CB775EE46CE637135F61F775BEA(__this, NULL);
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_0 = __this->___functionsInternal_1;
		String_t* L_1 = ___0_url;
		NullCheck(L_0);
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_2;
		L_2 = FirebaseFunctionsInternal_GetHttpsCallableFromURL_mF810982D47D777E0CA2BB280B557350879E06410(L_0, L_1, NULL);
		HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* L_3 = (HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1*)il2cpp_codegen_object_new(HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HttpsCallableReference__ctor_mD1098348B580CEE2BAB4D795CDFE7AF7A39A10F8(L_3, __this, L_2, NULL);
		V_0 = L_3;
		goto IL_001d;
	}

IL_001d:
	{
		HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* L_4 = V_0;
		return L_4;
	}
}
// Firebase.Functions.HttpsCallableReference Firebase.Functions.FirebaseFunctions::GetHttpsCallableFromURL(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* FirebaseFunctions_GetHttpsCallableFromURL_m81EDB9D566A53513D27DABED0A5381395436D5B6 (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_url, const RuntimeMethod* method) 
{
	HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* V_0 = NULL;
	{
		FirebaseFunctions_ThrowIfNull_mCF74877590082CB775EE46CE637135F61F775BEA(__this, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___0_url;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* L_2;
		L_2 = FirebaseFunctions_GetHttpsCallableFromURL_mFC6C2461216C1A40BC034B3E3545643B2B78DD27(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.Functions.FirebaseFunctions::UseFunctionsEmulator(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions_UseFunctionsEmulator_m925612B91390F6B5B00519803BBD890094D34493 (FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* __this, String_t* ___0_origin, const RuntimeMethod* method) 
{
	{
		FirebaseFunctions_ThrowIfNull_mCF74877590082CB775EE46CE637135F61F775BEA(__this, NULL);
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_0 = __this->___functionsInternal_1;
		String_t* L_1 = ___0_origin;
		NullCheck(L_0);
		FirebaseFunctionsInternal_UseFunctionsEmulator_m4F6E9E0E0001A9C18E7BEBCB442F0E958BF7FC85(L_0, L_1, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FirebaseFunctions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions__cctor_mBCBCB0BE5D92F794BC863FF9CB6558106E7768A1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD1B2425E180A6697EA2CFF6E4DDA018D2844FDD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883* L_0 = (Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883*)il2cpp_codegen_object_new(Dictionary_2_t1C31701FC6DF441499B7AF4A932A519800588883_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mD1B2425E180A6697EA2CFF6E4DDA018D2844FDD4(L_0, Dictionary_2__ctor_mD1B2425E180A6697EA2CFF6E4DDA018D2844FDD4_RuntimeMethod_var);
		((FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var))->___functionsByInstanceKey_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE_il2cpp_TypeInfo_var))->___functionsByInstanceKey_0), (void*)L_0);
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
// Firebase.Functions.FunctionsErrorCode Firebase.Functions.FunctionsException::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FunctionsException_get_ErrorCode_mD5C8A4E9569FC293B0C4A610227BA48FB0F48E11 (FunctionsException_tF9A782424F93633763DA6C6E4EB0C56F65EBC366* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Firebase.Functions.FunctionsException::set_ErrorCode(Firebase.Functions.FunctionsErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsException_set_ErrorCode_mF79722F297C916938AABEDDF00B6CF78BE7011A6 (FunctionsException_tF9A782424F93633763DA6C6E4EB0C56F65EBC366* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CErrorCodeU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Void Firebase.Functions.FunctionsException::.ctor(Firebase.FirebaseException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsException__ctor_m949678CC25A994D3CA44044651E62BE39932E509 (FunctionsException_tF9A782424F93633763DA6C6E4EB0C56F65EBC366* __this, FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* L_0 = ___0_e;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_1, NULL);
		FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* L_2 = ___0_e;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FirebaseException_get_ErrorCode_mE665B1ADB8DD846C3C604DD72F25C1B476EB3A66_inline(L_2, NULL);
		FunctionsException_set_ErrorCode_mF79722F297C916938AABEDDF00B6CF78BE7011A6_inline(__this, L_3, NULL);
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
// System.Void Firebase.Functions.HttpsCallableReference::.ctor(Firebase.Functions.FirebaseFunctions,Firebase.Functions.HttpsCallableReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReference__ctor_mD1098348B580CEE2BAB4D795CDFE7AF7A39A10F8 (HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* __this, FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* ___0_functions, HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* ___1_callableReferenceInternal, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* L_0 = ___0_functions;
		__this->___firebaseFunctions_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firebaseFunctions_0), (void*)L_0);
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_1 = ___1_callableReferenceInternal;
		HttpsCallableReference_set_Internal_m7605C8CDBC33018A2EC28A061BCF1A7445D26D50_inline(__this, L_1, NULL);
		return;
	}
}
// Firebase.Functions.HttpsCallableReferenceInternal Firebase.Functions.HttpsCallableReference::get_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* HttpsCallableReference_get_Internal_mD2A9C790BBD1AD69FA92E6AC7151EBEF3961A741 (HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* __this, const RuntimeMethod* method) 
{
	{
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_0 = __this->___U3CInternalU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.Functions.HttpsCallableReference::set_Internal(Firebase.Functions.HttpsCallableReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReference_set_Internal_m7605C8CDBC33018A2EC28A061BCF1A7445D26D50 (HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* __this, HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* ___0_value, const RuntimeMethod* method) 
{
	{
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_0 = ___0_value;
		__this->___U3CInternalU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInternalU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Firebase.Functions.FirebaseFunctions Firebase.Functions.HttpsCallableReference::get_Functions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* HttpsCallableReference_get_Functions_mBF34EEBB734BC55BBB4BB6ACF55815A856F1FBF3 (HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* __this, const RuntimeMethod* method) 
{
	FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* V_0 = NULL;
	{
		FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* L_0 = __this->___firebaseFunctions_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		FirebaseFunctions_tADA172ACC20A09E7D83BFE71E65356790E5B24CE* L_1 = V_0;
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResult> Firebase.Functions.HttpsCallableReference::CallAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tBBAD4AE7DDD4F2281E3F4302E116EB16967BB6B8* HttpsCallableReference_CallAsync_m1CD7D9BB15D5EFC5AD0F7372482DE9D73FBA2BA1 (HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* __this, const RuntimeMethod* method) 
{
	Task_1_tBBAD4AE7DDD4F2281E3F4302E116EB16967BB6B8* V_0 = NULL;
	{
		Task_1_tBBAD4AE7DDD4F2281E3F4302E116EB16967BB6B8* L_0;
		L_0 = HttpsCallableReference_CallAsync_m5987867A49598F5F95FE8685ABCEE269D6FFD742(__this, NULL, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		Task_1_tBBAD4AE7DDD4F2281E3F4302E116EB16967BB6B8* L_1 = V_0;
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResult> Firebase.Functions.HttpsCallableReference::CallAsync(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tBBAD4AE7DDD4F2281E3F4302E116EB16967BB6B8* HttpsCallableReference_CallAsync_m5987867A49598F5F95FE8685ABCEE269D6FFD742 (HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* __this, RuntimeObject* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t01A062AFB2E1404AA0866B7C6C418382BF589F84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpsCallableReference_U3CCallAsyncU3Eb__9_0_m12374D4FD6DBFF0D2C952544525658A43FD8020C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_TisHttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B_mC740B95A9B6CB33238C9E1180E31AC661E1F2081_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* V_0 = NULL;
	Task_1_tBBAD4AE7DDD4F2281E3F4302E116EB16967BB6B8* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_data;
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_1;
		L_1 = Variant_FromObject_m5D406B8B5BBF1DB6FDD90D83468B7F29B01501B7(L_0, NULL);
		V_0 = L_1;
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_2;
		L_2 = HttpsCallableReference_get_Internal_mD2A9C790BBD1AD69FA92E6AC7151EBEF3961A741_inline(__this, NULL);
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_3 = V_0;
		NullCheck(L_2);
		Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* L_4;
		L_4 = HttpsCallableReferenceInternal_CallAsync_m7BD00ADB34AC56357156F9A6CD08227209031787(L_2, L_3, NULL);
		Func_2_t01A062AFB2E1404AA0866B7C6C418382BF589F84* L_5 = (Func_2_t01A062AFB2E1404AA0866B7C6C418382BF589F84*)il2cpp_codegen_object_new(Func_2_t01A062AFB2E1404AA0866B7C6C418382BF589F84_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mF97AF5F0BB02336B2349AFC95B2DE794F31CF2CA(L_5, __this, (intptr_t)((void*)HttpsCallableReference_U3CCallAsyncU3Eb__9_0_m12374D4FD6DBFF0D2C952544525658A43FD8020C_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Task_1_tBBAD4AE7DDD4F2281E3F4302E116EB16967BB6B8* L_6;
		L_6 = Task_1_ContinueWith_TisHttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B_mC740B95A9B6CB33238C9E1180E31AC661E1F2081(L_4, L_5, Task_1_ContinueWith_TisHttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B_mC740B95A9B6CB33238C9E1180E31AC661E1F2081_RuntimeMethod_var);
		V_1 = L_6;
		goto IL_0028;
	}

IL_0028:
	{
		Task_1_tBBAD4AE7DDD4F2281E3F4302E116EB16967BB6B8* L_7 = V_1;
		return L_7;
	}
}
// Firebase.Functions.HttpsCallableResult Firebase.Functions.HttpsCallableReference::<CallAsync>b__9_0(System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B* HttpsCallableReference_U3CCallAsyncU3Eb__9_0_m12374D4FD6DBFF0D2C952544525658A43FD8020C (HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* __this, Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m703DED742BAB60FC5FCB811550AE88B2C037A2ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9191C84DBBA8308DD0092667E2B69A1C00EBBC5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t* V_4 = NULL;
	bool V_5 = false;
	HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B* V_6 = NULL;
	{
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_0;
		L_0 = HttpsCallableReference_get_Internal_mD2A9C790BBD1AD69FA92E6AC7151EBEF3961A741_inline(__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(4, _stringLiteralC9191C84DBBA8308DD0092667E2B69A1C00EBBC5, NULL);
	}

IL_001c:
	{
		Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* L_2 = ___0_task;
		NullCheck(L_2);
		bool L_3;
		L_3 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_007c;
		}
	}
	{
		Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* L_5 = ___0_task;
		NullCheck(L_5);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_6;
		L_6 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_5, NULL);
		V_2 = L_6;
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_7 = V_2;
		NullCheck(L_7);
		ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* L_8;
		L_8 = AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline(L_7, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC(L_8, ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var);
		V_3 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_3;
					if (!L_10)
					{
						goto IL_0079;
					}
				}
				{
					RuntimeObject* L_11 = V_3;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0079:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0065_1;
			}

IL_003d_1:
			{
				RuntimeObject* L_12 = V_3;
				NullCheck(L_12);
				Exception_t* L_13;
				L_13 = InterfaceFuncInvoker0< Exception_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Exception>::get_Current() */, IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var, L_12);
				V_4 = L_13;
				Exception_t* L_14 = V_4;
				V_5 = (bool)((!(((RuntimeObject*)(FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)((FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)IsInstSealed((RuntimeObject*)L_14, FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_15 = V_5;
				if (!L_15)
				{
					goto IL_0064_1;
				}
			}
			{
				Exception_t* L_16 = V_4;
				FunctionsException_tF9A782424F93633763DA6C6E4EB0C56F65EBC366* L_17 = (FunctionsException_tF9A782424F93633763DA6C6E4EB0C56F65EBC366*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FunctionsException_tF9A782424F93633763DA6C6E4EB0C56F65EBC366_il2cpp_TypeInfo_var)));
				NullCheck(L_17);
				FunctionsException__ctor_m949678CC25A994D3CA44044651E62BE39932E509(L_17, ((FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)CastclassSealed((RuntimeObject*)L_16, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var)))), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableReference_U3CCallAsyncU3Eb__9_0_m12374D4FD6DBFF0D2C952544525658A43FD8020C_RuntimeMethod_var)));
			}

IL_0064_1:
			{
			}

IL_0065_1:
			{
				RuntimeObject* L_18 = V_3;
				NullCheck(L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_003d_1;
				}
			}
			{
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_20 = V_2;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableReference_U3CCallAsyncU3Eb__9_0_m12374D4FD6DBFF0D2C952544525658A43FD8020C_RuntimeMethod_var)));
	}

IL_007c:
	{
		Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* L_21 = ___0_task;
		NullCheck(L_21);
		HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* L_22;
		L_22 = Task_1_get_Result_m703DED742BAB60FC5FCB811550AE88B2C037A2ED(L_21, Task_1_get_Result_m703DED742BAB60FC5FCB811550AE88B2C037A2ED_RuntimeMethod_var);
		NullCheck(L_22);
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_23;
		L_23 = HttpsCallableResultInternal_data_m268B74E23C14C592B9ECD27DC01237267E489B46(L_22, NULL);
		RuntimeObject* L_24;
		L_24 = VariantExtension_ToObject_m14F3320AA1586559646082460FA2633439C0CBD4(L_23, NULL);
		HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B* L_25 = (HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B*)il2cpp_codegen_object_new(HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		HttpsCallableResult__ctor_m06FCDA33D24727CA7A4E376F1A288E66A8E88A36(L_25, L_24, NULL);
		V_6 = L_25;
		goto IL_0095;
	}

IL_0095:
	{
		HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B* L_26 = V_6;
		return L_26;
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
// System.Void Firebase.Functions.HttpsCallableResult::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResult__ctor_m06FCDA33D24727CA7A4E376F1A288E66A8E88A36 (HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B* __this, RuntimeObject* ___0_data, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_data;
		HttpsCallableResult_set_Data_m1CE1349DE624F9387FC23BF6C71AC5BCA62435AF_inline(__this, L_0, NULL);
		return;
	}
}
// System.Object Firebase.Functions.HttpsCallableResult::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HttpsCallableResult_get_Data_mE248A2721DAF4F68BC1E31B79A2199BF37C75E2F (HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CDataU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Firebase.Functions.HttpsCallableResult::set_Data(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResult_set_Data_m1CE1349DE624F9387FC23BF6C71AC5BCA62435AF (HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_0), (void*)L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Future_HttpsCallableResult_SWIG_CompletionDispatcher_m5ABC0D95B7A4A08B60078B8CBF0472969C134A90(int32_t ___0_key)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Future_HttpsCallableResult_SWIG_CompletionDispatcher_m5ABC0D95B7A4A08B60078B8CBF0472969C134A90(___0_key, NULL);

}
// System.Void Firebase.Functions.Future_HttpsCallableResult::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult__ctor_mF14D418B13A19A10E88EA97D4C47E434A3632532 (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___callbackData_6 = L_0;
		__this->___SWIG_CompletionCB_7 = (SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SWIG_CompletionCB_7), (void*)(SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF*)NULL);
		intptr_t L_1 = ___0_cPtr;
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = FunctionsInternalPINVOKE_Future_HttpsCallableResult_SWIGUpcast_m44D72DE55B6E79DC312987A3D4FBC20ED90C80DF(L_1, NULL);
		bool L_3 = ___1_cMemoryOwn;
		FutureBase__ctor_m98C8AE4F030730C1CEE7E0B4A1816C623F2B9BE0(__this, L_2, L_3, NULL);
		intptr_t L_4 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5;
		memset((&L_5), 0, sizeof(L_5));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_5), __this, L_4, /*hidden argument*/NULL);
		__this->___swigCPtr_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_2))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Functions.Future_HttpsCallableResult::getCPtr(Firebase.Functions.Future_HttpsCallableResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F Future_HttpsCallableResult_getCPtr_m5EFE4C6F4EF3C4A5C530D077FCDF6AAA2C879DEF (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* ___0_obj, const RuntimeMethod* method) 
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
		Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_1 = ___0_obj;
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
// System.Runtime.InteropServices.HandleRef Firebase.Functions.Future_HttpsCallableResult::swigRelease(Firebase.Functions.Future_HttpsCallableResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F Future_HttpsCallableResult_swigRelease_m586EE557A192CE68CC39325BB57FCEDBCEB54E64 (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* ___0_obj, const RuntimeMethod* method) 
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
		Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_0 = ___0_obj;
		V_0 = (bool)((!(((RuntimeObject*)(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_2 = ___0_obj;
		NullCheck(L_2);
		bool L_3 = ((FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36*)L_2)->___swigCMemOwn_1;
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_HttpsCallableResult_swigRelease_m586EE557A192CE68CC39325BB57FCEDBCEB54E64_RuntimeMethod_var)));
	}

IL_0022:
	{
		Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_6 = ___0_obj;
		NullCheck(L_6);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = L_6->___swigCPtr_2;
		V_1 = L_7;
		Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_8 = ___0_obj;
		NullCheck(L_8);
		((FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36*)L_8)->___swigCMemOwn_1 = (bool)0;
		Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_9 = ___0_obj;
		NullCheck(L_9);
		FutureBase_Dispose_m32193D02DE4608C6C3EDF42F3D0495707DA4D15E(L_9, NULL);
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
// System.Void Firebase.Functions.Future_HttpsCallableResult::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_Dispose_m3E28E7D79C7540645A58E40D95D88C7AC2745426 (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
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

FINALLY_007c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0086;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0086:
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
					goto IL_006a_1;
				}
			}
			{
				intptr_t L_9 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				Future_HttpsCallableResult_SetCompletionData_mA9078B22BBA79512C13DE42D52314A678B504672(__this, L_9, NULL);
				bool L_10 = ((FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36*)__this)->___swigCMemOwn_1;
				V_3 = L_10;
				bool L_11 = V_3;
				if (!L_11)
				{
					goto IL_0058_1;
				}
			}
			{
				((FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36*)__this)->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_12 = __this->___swigCPtr_2;
				il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
				FunctionsInternalPINVOKE_delete_Future_HttpsCallableResult_m5744DD3241122796355C571391301984230F9BC2(L_12, NULL);
			}

IL_0058_1:
			{
				intptr_t L_13 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_14;
				memset((&L_14), 0, sizeof(L_14));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_14), NULL, L_13, /*hidden argument*/NULL);
				__this->___swigCPtr_2 = L_14;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_2))->____wrapper_0), (void*)NULL);
			}

IL_006a_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				bool L_15 = ___0_disposing;
				FutureBase_Dispose_m17D716EFFAF752B7DBF402C73D757D02C34457EB(__this, L_15, NULL);
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal> Firebase.Functions.Future_HttpsCallableResult::GetTask(Firebase.Functions.Future_HttpsCallableResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* Future_HttpsCallableResult_GetTask_m1E36472756E1BE4E53F0BDF5F1D08086AADA007B (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* ___0_fu, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_mCA618E92574BDBE0C0F62D1006B580762CC9EC35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m29722D36C838285B6D411487DFA148FB2D979EE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m8683161C15654D333DD000A7295F719362E5318E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CGetTaskU3Eb__0_mFE06DABE2CF8B9BBD7BDEC6C62E3FF812D10D6F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09* V_0 = NULL;
	bool V_1 = false;
	Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* V_2 = NULL;
	bool V_3 = false;
	{
		U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09* L_0 = (U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m45B7883EB0D88E7E9494BD8F6504BC87B0117676(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09* L_1 = V_0;
		Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_2 = ___0_fu;
		NullCheck(L_1);
		L_1->___fu_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fu_0), (void*)L_2);
		U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09* L_3 = V_0;
		TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280* L_4 = (TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280*)il2cpp_codegen_object_new(TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TaskCompletionSource_1__ctor_m29722D36C838285B6D411487DFA148FB2D979EE5(L_4, TaskCompletionSource_1__ctor_m29722D36C838285B6D411487DFA148FB2D979EE5_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___tcs_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___tcs_1), (void*)L_4);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = SWIGPendingException_get_Pending_mB6422DD2E5C51E682EBE4E86B9E6ADE557079F60(NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09* L_7 = V_0;
		NullCheck(L_7);
		TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280* L_8 = L_7->___tcs_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_9;
		L_9 = SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682(NULL);
		NullCheck(L_8);
		TaskCompletionSource_1_SetException_mCA618E92574BDBE0C0F62D1006B580762CC9EC35(L_8, L_9, TaskCompletionSource_1_SetException_mCA618E92574BDBE0C0F62D1006B580762CC9EC35_RuntimeMethod_var);
		U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09* L_10 = V_0;
		NullCheck(L_10);
		TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280* L_11 = L_10->___tcs_1;
		NullCheck(L_11);
		Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* L_12;
		L_12 = TaskCompletionSource_1_get_Task_m8683161C15654D333DD000A7295F719362E5318E_inline(L_11, TaskCompletionSource_1_get_Task_m8683161C15654D333DD000A7295F719362E5318E_RuntimeMethod_var);
		V_2 = L_12;
		goto IL_00a0;
	}

IL_0042:
	{
		U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09* L_13 = V_0;
		NullCheck(L_13);
		Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_14 = L_13->___fu_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = FutureBase_status_mC75FD35438B176F95462D3A5D7D9194629211902(L_14, NULL);
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)2))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_007a;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09* L_17 = V_0;
		NullCheck(L_17);
		TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280* L_18 = L_17->___tcs_1;
		FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* L_19 = (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)il2cpp_codegen_object_new(FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		FirebaseException__ctor_m18D67DA955D2B4EA2BC58BCE0E96AC0A177DD70F(L_19, 0, _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18, NULL);
		NullCheck(L_18);
		TaskCompletionSource_1_SetException_mCA618E92574BDBE0C0F62D1006B580762CC9EC35(L_18, L_19, TaskCompletionSource_1_SetException_mCA618E92574BDBE0C0F62D1006B580762CC9EC35_RuntimeMethod_var);
		U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09* L_20 = V_0;
		NullCheck(L_20);
		TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280* L_21 = L_20->___tcs_1;
		NullCheck(L_21);
		Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* L_22;
		L_22 = TaskCompletionSource_1_get_Task_m8683161C15654D333DD000A7295F719362E5318E_inline(L_21, TaskCompletionSource_1_get_Task_m8683161C15654D333DD000A7295F719362E5318E_RuntimeMethod_var);
		V_2 = L_22;
		goto IL_00a0;
	}

IL_007a:
	{
		U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09* L_23 = V_0;
		NullCheck(L_23);
		Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_24 = L_23->___fu_0;
		U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09* L_25 = V_0;
		Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* L_26 = (Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A*)il2cpp_codegen_object_new(Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action__ctor_m494A9233AF9F63427E72B6C3167AD3815C4B77F1(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CGetTaskU3Eb__0_mFE06DABE2CF8B9BBD7BDEC6C62E3FF812D10D6F0_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		Future_HttpsCallableResult_SetOnCompletionCallback_m7BD1EE99BF580F0C214EAD8D567DE2208CC205BE(L_24, L_26, NULL);
		U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09* L_27 = V_0;
		NullCheck(L_27);
		TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280* L_28 = L_27->___tcs_1;
		NullCheck(L_28);
		Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* L_29;
		L_29 = TaskCompletionSource_1_get_Task_m8683161C15654D333DD000A7295F719362E5318E_inline(L_28, TaskCompletionSource_1_get_Task_m8683161C15654D333DD000A7295F719362E5318E_RuntimeMethod_var);
		V_2 = L_29;
		goto IL_00a0;
	}

IL_00a0:
	{
		Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* L_30 = V_2;
		return L_30;
	}
}
// System.Void Firebase.Functions.Future_HttpsCallableResult::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_ThrowIfDisposed_m0613BECE8D559609DAE01BE4F36BCA5AC1233129 (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_0 = (&__this->___swigCPtr_2);
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_HttpsCallableResult_ThrowIfDisposed_m0613BECE8D559609DAE01BE4F36BCA5AC1233129_RuntimeMethod_var)));
	}

IL_0026:
	{
		return;
	}
}
// System.Void Firebase.Functions.Future_HttpsCallableResult::SetOnCompletionCallback(Firebase.Functions.Future_HttpsCallableResult/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_SetOnCompletionCallback_m7BD1EE99BF580F0C214EAD8D567DE2208CC205BE (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* __this, Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* ___0_userCompletionCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD9BB91D7AD7EDAD2475F2DC932A0BE1C12EE8107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m23193070931F221690B4AFF49ECC32FC41F00982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_HttpsCallableResult_SWIG_CompletionDispatcher_m5ABC0D95B7A4A08B60078B8CBF0472969C134A90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		Future_HttpsCallableResult_ThrowIfDisposed_m0613BECE8D559609DAE01BE4F36BCA5AC1233129(__this, NULL);
		SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* L_0 = __this->___SWIG_CompletionCB_7;
		V_1 = (bool)((((RuntimeObject*)(SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* L_2 = (SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF*)il2cpp_codegen_object_new(SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SWIG_CompletionDelegate__ctor_m1C79947D7FFA9AEBA29DCC845FFE355FA8CBEDDD(L_2, NULL, (intptr_t)((void*)Future_HttpsCallableResult_SWIG_CompletionDispatcher_m5ABC0D95B7A4A08B60078B8CBF0472969C134A90_RuntimeMethod_var), NULL);
		__this->___SWIG_CompletionCB_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SWIG_CompletionCB_7), (void*)L_2);
	}

IL_0029:
	{
		il2cpp_codegen_runtime_class_init_inline(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var))->___CallbackLock_5;
		V_2 = L_3;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_3;
					if (!L_4)
					{
						goto IL_007d;
					}
				}
				{
					RuntimeObject* L_5 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_007d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_6 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_3), NULL);
				il2cpp_codegen_runtime_class_init_inline(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
				Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A* L_7 = ((Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var))->___Callbacks_3;
				V_4 = (bool)((((RuntimeObject*)(Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_8 = V_4;
				if (!L_8)
				{
					goto IL_0055_1;
				}
			}
			{
				Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A* L_9 = (Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A*)il2cpp_codegen_object_new(Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				Dictionary_2__ctor_mD9BB91D7AD7EDAD2475F2DC932A0BE1C12EE8107(L_9, Dictionary_2__ctor_mD9BB91D7AD7EDAD2475F2DC932A0BE1C12EE8107_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
				((Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var))->___Callbacks_3 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&((Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var))->___Callbacks_3), (void*)L_9);
			}

IL_0055_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
				int32_t L_10 = ((Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var))->___CallbackIndex_4;
				int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
				((Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var))->___CallbackIndex_4 = L_11;
				V_0 = L_11;
				Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A* L_12 = ((Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var))->___Callbacks_3;
				int32_t L_13 = V_0;
				Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* L_14 = ___0_userCompletionCallback;
				NullCheck(L_12);
				Dictionary_2_set_Item_m23193070931F221690B4AFF49ECC32FC41F00982(L_12, L_13, L_14, Dictionary_2_set_Item_m23193070931F221690B4AFF49ECC32FC41F00982_RuntimeMethod_var);
				goto IL_007e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007e:
	{
		SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* L_15 = __this->___SWIG_CompletionCB_7;
		int32_t L_16 = V_0;
		intptr_t L_17;
		L_17 = Future_HttpsCallableResult_SWIG_OnCompletion_mA4C3D854740F4B77E7AB478606E3B538354ED9F5(__this, L_15, L_16, NULL);
		Future_HttpsCallableResult_SetCompletionData_mA9078B22BBA79512C13DE42D52314A678B504672(__this, L_17, NULL);
		return;
	}
}
// System.Void Firebase.Functions.Future_HttpsCallableResult::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_SetCompletionData_mA9078B22BBA79512C13DE42D52314A678B504672 (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* __this, intptr_t ___0_data, const RuntimeMethod* method) 
{
	{
		Future_HttpsCallableResult_ThrowIfDisposed_m0613BECE8D559609DAE01BE4F36BCA5AC1233129(__this, NULL);
		intptr_t L_0 = __this->___callbackData_6;
		Future_HttpsCallableResult_SWIG_FreeCompletionData_m303AC72BB4879C8B7111BEF9540F7DEBCB595BDC(__this, L_0, NULL);
		intptr_t L_1 = ___0_data;
		__this->___callbackData_6 = L_1;
		return;
	}
}
// System.Void Firebase.Functions.Future_HttpsCallableResult::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_SWIG_CompletionDispatcher_m5ABC0D95B7A4A08B60078B8CBF0472969C134A90 (int32_t ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mC0B8E2B0DD33445AC1866FDCA69D332C4934E796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mBAE84CA7C4C2369D659565F3085F89CECA0F9F1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	{
		V_0 = (Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A*)NULL;
		il2cpp_codegen_runtime_class_init_inline(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var))->___CallbackLock_5;
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_004b;
					}
				}
				{
					RuntimeObject* L_2 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_004b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_2), NULL);
				il2cpp_codegen_runtime_class_init_inline(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
				Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A* L_4 = ((Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var))->___Callbacks_3;
				if (!L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
				Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A* L_5 = ((Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var))->___Callbacks_3;
				int32_t L_6 = ___0_key;
				NullCheck(L_5);
				bool L_7;
				L_7 = Dictionary_2_TryGetValue_mBAE84CA7C4C2369D659565F3085F89CECA0F9F1F(L_5, L_6, (&V_0), Dictionary_2_TryGetValue_mBAE84CA7C4C2369D659565F3085F89CECA0F9F1F_RuntimeMethod_var);
				G_B4_0 = ((int32_t)(L_7));
				goto IL_002c_1;
			}

IL_002b_1:
			{
				G_B4_0 = 0;
			}

IL_002c_1:
			{
				V_3 = (bool)G_B4_0;
				bool L_8 = V_3;
				if (!L_8)
				{
					goto IL_003e_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
				Dictionary_2_tE32B8E659605ABBEA0257DB4FBB11F731A68223A* L_9 = ((Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var))->___Callbacks_3;
				int32_t L_10 = ___0_key;
				NullCheck(L_9);
				bool L_11;
				L_11 = Dictionary_2_Remove_mC0B8E2B0DD33445AC1866FDCA69D332C4934E796(L_9, L_10, Dictionary_2_Remove_mC0B8E2B0DD33445AC1866FDCA69D332C4934E796_RuntimeMethod_var);
			}

IL_003e_1:
			{
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* L_12 = V_0;
		V_4 = (bool)((!(((RuntimeObject*)(Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_005d;
		}
	}
	{
		Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* L_14 = V_0;
		NullCheck(L_14);
		Action_Invoke_m6F6A4E766588CA62EA8A607E9A75413E8A33ADCA_inline(L_14, NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void Firebase.Functions.Future_HttpsCallableResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult__ctor_mB1B131A7B601AD417ABA2A1AA1291D1792526D2B (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = FunctionsInternalPINVOKE_new_Future_HttpsCallableResult_m282583AB7FB3002F36CD5811AFE7C5647DF11222(NULL);
		Future_HttpsCallableResult__ctor_mF14D418B13A19A10E88EA97D4C47E434A3632532(__this, L_0, (bool)1, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_HttpsCallableResult__ctor_mB1B131A7B601AD417ABA2A1AA1291D1792526D2B_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.IntPtr Firebase.Functions.Future_HttpsCallableResult::SWIG_OnCompletion(Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_HttpsCallableResult_SWIG_OnCompletion_mA4C3D854740F4B77E7AB478606E3B538354ED9F5 (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* __this, SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* ___0_cs_callback, int32_t ___1_cs_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* L_1 = ___0_cs_callback;
		int32_t L_2 = ___1_cs_key;
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = FunctionsInternalPINVOKE_Future_HttpsCallableResult_SWIG_OnCompletion_mBFDB51E533FE070B340F52AC4F6DF052B2355E89(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_HttpsCallableResult_SWIG_OnCompletion_mA4C3D854740F4B77E7AB478606E3B538354ED9F5_RuntimeMethod_var)));
	}

IL_001e:
	{
		intptr_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0022;
	}

IL_0022:
	{
		intptr_t L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Functions.Future_HttpsCallableResult::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_SWIG_FreeCompletionData_m303AC72BB4879C8B7111BEF9540F7DEBCB595BDC (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* __this, intptr_t ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		intptr_t L_1 = ___0_data;
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		FunctionsInternalPINVOKE_Future_HttpsCallableResult_SWIG_FreeCompletionData_m74ABB701E5E1565DC8F3640D70523C7511F968BC(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_HttpsCallableResult_SWIG_FreeCompletionData_m303AC72BB4879C8B7111BEF9540F7DEBCB595BDC_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// Firebase.Functions.HttpsCallableResultInternal Firebase.Functions.Future_HttpsCallableResult::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* Future_HttpsCallableResult_GetResult_m34CDDE3BAE9018DD42AC7C4C9A8571AB472BBF74 (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* V_0 = NULL;
	bool V_1 = false;
	HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = FunctionsInternalPINVOKE_Future_HttpsCallableResult_GetResult_m0E6F7CD71342C074100A5995FC1CA5CF3DE7D9D5(L_0, NULL);
		HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* L_2 = (HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3*)il2cpp_codegen_object_new(HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HttpsCallableResultInternal__ctor_m188853F20BAA49703E65490721AB6EC7D08D5B40(L_2, L_1, (bool)1, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_HttpsCallableResult_GetResult_m34CDDE3BAE9018DD42AC7C4C9A8571AB472BBF74_RuntimeMethod_var)));
	}

IL_0022:
	{
		HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* L_6 = V_0;
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* L_7 = V_2;
		return L_7;
	}
}
// System.Void Firebase.Functions.Future_HttpsCallableResult::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult__cctor_m3A73E9793133ABF57E4831A0D06950E6E304B7F0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var))->___CallbackIndex_4 = 0;
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var))->___CallbackLock_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var))->___CallbackLock_5), (void*)L_0);
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
void Action_Invoke_m6F6A4E766588CA62EA8A607E9A75413E8A33ADCA_Multicast(Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* currentDelegate = reinterpret_cast<Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Action_Invoke_m6F6A4E766588CA62EA8A607E9A75413E8A33ADCA_OpenInst(Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Action_Invoke_m6F6A4E766588CA62EA8A607E9A75413E8A33ADCA_OpenStatic(Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Action_Invoke_m6F6A4E766588CA62EA8A607E9A75413E8A33ADCA_OpenStaticInvoker(Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void Action_Invoke_m6F6A4E766588CA62EA8A607E9A75413E8A33ADCA_ClosedStaticInvoker(Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A (Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.Functions.Future_HttpsCallableResult/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m494A9233AF9F63427E72B6C3167AD3815C4B77F1 (Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_m6F6A4E766588CA62EA8A607E9A75413E8A33ADCA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_m6F6A4E766588CA62EA8A607E9A75413E8A33ADCA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_m6F6A4E766588CA62EA8A607E9A75413E8A33ADCA_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&Action_Invoke_m6F6A4E766588CA62EA8A607E9A75413E8A33ADCA_Multicast;
}
// System.Void Firebase.Functions.Future_HttpsCallableResult/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m6F6A4E766588CA62EA8A607E9A75413E8A33ADCA (Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Firebase.Functions.Future_HttpsCallableResult/Action::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Action_BeginInvoke_m0B180A6B05874366C9801784A48D609281882D34 (Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void Firebase.Functions.Future_HttpsCallableResult/Action::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_EndInvoke_m363F9157E5EDE7E9D98CF0DF43B095C08D7B3CEF (Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void SWIG_CompletionDelegate_Invoke_mA514F30210AB69A892E0CCA91DB048BA83DA6AA5_Multicast(SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* currentDelegate = reinterpret_cast<SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_index, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SWIG_CompletionDelegate_Invoke_mA514F30210AB69A892E0CCA91DB048BA83DA6AA5_OpenInst(SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_index, method);
}
void SWIG_CompletionDelegate_Invoke_mA514F30210AB69A892E0CCA91DB048BA83DA6AA5_OpenStatic(SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_index, method);
}
void SWIG_CompletionDelegate_Invoke_mA514F30210AB69A892E0CCA91DB048BA83DA6AA5_OpenStaticInvoker(SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_index);
}
void SWIG_CompletionDelegate_Invoke_mA514F30210AB69A892E0CCA91DB048BA83DA6AA5_ClosedStaticInvoker(SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_index);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF (SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_index);

}
// System.Void Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m1C79947D7FFA9AEBA29DCC845FFE355FA8CBEDDD (SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&SWIG_CompletionDelegate_Invoke_mA514F30210AB69A892E0CCA91DB048BA83DA6AA5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIG_CompletionDelegate_Invoke_mA514F30210AB69A892E0CCA91DB048BA83DA6AA5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIG_CompletionDelegate_Invoke_mA514F30210AB69A892E0CCA91DB048BA83DA6AA5_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&SWIG_CompletionDelegate_Invoke_mA514F30210AB69A892E0CCA91DB048BA83DA6AA5_Multicast;
}
// System.Void Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_mA514F30210AB69A892E0CCA91DB048BA83DA6AA5 (SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_index, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIG_CompletionDelegate_BeginInvoke_mC8DCE9436F640EFE9E8E562D62A31FF50B508C48 (SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* __this, int32_t ___0_index, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_index);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_EndInvoke_m15BCFC2515A622B1587873D22F25ED76C384B44F (SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void Firebase.Functions.Future_HttpsCallableResult/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m45B7883EB0D88E7E9494BD8F6504BC87B0117676 (U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Functions.Future_HttpsCallableResult/<>c__DisplayClass5_0::<GetTask>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CGetTaskU3Eb__0_mFE06DABE2CF8B9BBD7BDEC6C62E3FF812D10D6F0 (U3CU3Ec__DisplayClass5_0_t5F2BF734C79F4EA80AD6583E4921747F50E3FC09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_mFD3BDFACED0A485A335AD53EEF9062046802E518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_mCA618E92574BDBE0C0F62D1006B580762CC9EC35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mF99DD1C33EC5EA7208B292F054232012D92308FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_0 = __this->___fu_0;
			NullCheck(L_0);
			int32_t L_1;
			L_1 = FutureBase_status_mC75FD35438B176F95462D3A5D7D9194629211902(L_0, NULL);
			V_0 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_0024_1;
			}
		}
		{
			TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280* L_3 = __this->___tcs_1;
			NullCheck(L_3);
			TaskCompletionSource_1_SetCanceled_mFD3BDFACED0A485A335AD53EEF9062046802E518(L_3, TaskCompletionSource_1_SetCanceled_mFD3BDFACED0A485A335AD53EEF9062046802E518_RuntimeMethod_var);
			goto IL_0074_1;
		}

IL_0024_1:
		{
			Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_4 = __this->___fu_0;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = FutureBase_error_m47E3B5E0A43B4C19510A77B3658EE5D7D10B6030(L_4, NULL);
			V_1 = L_5;
			int32_t L_6 = V_1;
			V_2 = (bool)((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_005a_1;
			}
		}
		{
			TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280* L_8 = __this->___tcs_1;
			int32_t L_9 = V_1;
			Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_10 = __this->___fu_0;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = FutureBase_error_message_m5CC18319253B1ECC3C8AC675B213A08B1755D527(L_10, NULL);
			FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* L_12 = (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)il2cpp_codegen_object_new(FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
			NullCheck(L_12);
			FirebaseException__ctor_m18D67DA955D2B4EA2BC58BCE0E96AC0A177DD70F(L_12, L_9, L_11, NULL);
			NullCheck(L_8);
			TaskCompletionSource_1_SetException_mCA618E92574BDBE0C0F62D1006B580762CC9EC35(L_8, L_12, TaskCompletionSource_1_SetException_mCA618E92574BDBE0C0F62D1006B580762CC9EC35_RuntimeMethod_var);
			goto IL_0073_1;
		}

IL_005a_1:
		{
			TaskCompletionSource_1_tA42D6C74057C7B241DDAADF12D91DAFFEEA6B280* L_13 = __this->___tcs_1;
			Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_14 = __this->___fu_0;
			NullCheck(L_14);
			HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* L_15;
			L_15 = Future_HttpsCallableResult_GetResult_m34CDDE3BAE9018DD42AC7C4C9A8571AB472BBF74(L_14, NULL);
			NullCheck(L_13);
			TaskCompletionSource_1_SetResult_mF99DD1C33EC5EA7208B292F054232012D92308FD(L_13, L_15, TaskCompletionSource_1_SetResult_mF99DD1C33EC5EA7208B292F054232012D92308FD_RuntimeMethod_var);
		}

IL_0073_1:
		{
		}

IL_0074_1:
		{
			goto IL_008e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_16 = V_3;
		String_t* L_17;
		L_17 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F)), L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var)));
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(4, L_17, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008e;
	}// end catch (depth: 1)

IL_008e:
	{
		Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_18 = __this->___fu_0;
		NullCheck(L_18);
		FutureBase_Dispose_m32193D02DE4608C6C3EDF42F3D0495707DA4D15E(L_18, NULL);
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
// System.Void Firebase.Functions.HttpsCallableReferenceInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReferenceInternal__ctor_mAD4B75F160005854190D44535DFC5876D96041E0 (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
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
// System.Runtime.InteropServices.HandleRef Firebase.Functions.HttpsCallableReferenceInternal::getCPtr(Firebase.Functions.HttpsCallableReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F HttpsCallableReferenceInternal_getCPtr_m07901B220B532F59F07EA8607E646BFCBFEB0FEE (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* ___0_obj, const RuntimeMethod* method) 
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
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_1 = ___0_obj;
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
// System.Runtime.InteropServices.HandleRef Firebase.Functions.HttpsCallableReferenceInternal::swigRelease(Firebase.Functions.HttpsCallableReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F HttpsCallableReferenceInternal_swigRelease_mBDEA9E15338411A19860D50E683625EB6675FABD (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* ___0_obj, const RuntimeMethod* method) 
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
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_0 = ___0_obj;
		V_0 = (bool)((!(((RuntimeObject*)(HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_2 = ___0_obj;
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableReferenceInternal_swigRelease_mBDEA9E15338411A19860D50E683625EB6675FABD_RuntimeMethod_var)));
	}

IL_0022:
	{
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_6 = ___0_obj;
		NullCheck(L_6);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = L_6->___swigCPtr_0;
		V_1 = L_7;
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_8 = ___0_obj;
		NullCheck(L_8);
		L_8->___swigCMemOwn_1 = (bool)0;
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_9 = ___0_obj;
		NullCheck(L_9);
		HttpsCallableReferenceInternal_Dispose_m03BC5478F12D7AC83DD627E6539F7EFA3456FF08(L_9, NULL);
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
// System.Void Firebase.Functions.HttpsCallableReferenceInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReferenceInternal_Finalize_m60F7CFFC20F6FD128A809F21A97435C9DAB95B18 (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* __this, const RuntimeMethod* method) 
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
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Functions.HttpsCallableReferenceInternal::Dispose(System.Boolean) */, __this, (bool)0);
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
// System.Void Firebase.Functions.HttpsCallableReferenceInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReferenceInternal_Dispose_m03BC5478F12D7AC83DD627E6539F7EFA3456FF08 (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Functions.HttpsCallableReferenceInternal::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.Functions.HttpsCallableReferenceInternal::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReferenceInternal_Dispose_m70114EA028967DB7687528B47166DB5B6B886BE0 (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
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
				il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
				FunctionsInternalPINVOKE_delete_HttpsCallableReferenceInternal_m691BBEE83440B636AE7B1175EA30E980B1B6FD9A(L_11, NULL);
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
// System.Void Firebase.Functions.HttpsCallableReferenceInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReferenceInternal__ctor_m4DFAE5E073A3C8F342705F697EA85080A7AEA500 (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = FunctionsInternalPINVOKE_new_HttpsCallableReferenceInternal__SWIG_0_m2C2E23CD4CF3D50D526DD106F207CB7482E73146(NULL);
		HttpsCallableReferenceInternal__ctor_mAD4B75F160005854190D44535DFC5876D96041E0(__this, L_0, (bool)1, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableReferenceInternal__ctor_m4DFAE5E073A3C8F342705F697EA85080A7AEA500_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.Functions.HttpsCallableReferenceInternal::.ctor(Firebase.Functions.HttpsCallableReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReferenceInternal__ctor_mB1998C4A1EC0A3F485AA1E8814604A56433895E1 (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* __this, HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* ___0_reference, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_0 = ___0_reference;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = HttpsCallableReferenceInternal_getCPtr_m07901B220B532F59F07EA8607E646BFCBFEB0FEE(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = FunctionsInternalPINVOKE_new_HttpsCallableReferenceInternal__SWIG_1_m60176A8068FAF2E772354E7E58240D89FBFBB9B5(L_1, NULL);
		HttpsCallableReferenceInternal__ctor_mAD4B75F160005854190D44535DFC5876D96041E0(__this, L_2, (bool)1, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableReferenceInternal__ctor_mB1998C4A1EC0A3F485AA1E8814604A56433895E1_RuntimeMethod_var)));
	}

IL_0023:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal> Firebase.Functions.HttpsCallableReferenceInternal::CallAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* HttpsCallableReferenceInternal_CallAsync_m9425A922780EEDD788DE096634337084362D811A (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = FunctionsInternalPINVOKE_HttpsCallableReferenceInternal_Call__SWIG_0_m047B8FEE40C1625943A93A028E6A05F98E961CA1(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableReferenceInternal_CallAsync_m9425A922780EEDD788DE096634337084362D811A_RuntimeMethod_var)));
	}

IL_001c:
	{
		intptr_t L_5 = V_0;
		Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_6 = (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057*)il2cpp_codegen_object_new(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Future_HttpsCallableResult__ctor_mF14D418B13A19A10E88EA97D4C47E434A3632532(L_6, L_5, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
		Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* L_7;
		L_7 = Future_HttpsCallableResult_GetTask_m1E36472756E1BE4E53F0BDF5F1D08086AADA007B(L_6, NULL);
		V_2 = L_7;
		goto IL_002b;
	}

IL_002b:
	{
		Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* L_8 = V_2;
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal> Firebase.Functions.HttpsCallableReferenceInternal::CallAsync(Firebase.Variant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* HttpsCallableReferenceInternal_CallAsync_m7BD00ADB34AC56357156F9A6CD08227209031787 (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* __this, Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_1 = ___0_data;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		L_2 = Variant_getCPtr_m02745459FA3350FFDC29D01587C8D797BFC10067(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = FunctionsInternalPINVOKE_HttpsCallableReferenceInternal_Call__SWIG_1_m91B3A2841B4DDEBBF2224D6F0F3EC901A882EC94(L_0, L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableReferenceInternal_CallAsync_m7BD00ADB34AC56357156F9A6CD08227209031787_RuntimeMethod_var)));
	}

IL_0022:
	{
		intptr_t L_7 = V_0;
		Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057* L_8 = (Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057*)il2cpp_codegen_object_new(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Future_HttpsCallableResult__ctor_mF14D418B13A19A10E88EA97D4C47E434A3632532(L_8, L_7, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Future_HttpsCallableResult_tDFD5AF03205005EE4C2BE33B775F072DDD178057_il2cpp_TypeInfo_var);
		Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* L_9;
		L_9 = Future_HttpsCallableResult_GetTask_m1E36472756E1BE4E53F0BDF5F1D08086AADA007B(L_8, NULL);
		V_2 = L_9;
		goto IL_0031;
	}

IL_0031:
	{
		Task_1_t53143AECA7658134C63B9385563DBDECDAA17503* L_10 = V_2;
		return L_10;
	}
}
// Firebase.Functions.FirebaseFunctionsInternal Firebase.Functions.HttpsCallableReferenceInternal::get_Functions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* HttpsCallableReferenceInternal_get_Functions_mCD015B62AFD68DBCA9A46E5D6C89B148C9DB6457 (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* V_1 = NULL;
	bool V_2 = false;
	FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* V_3 = NULL;
	FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* G_B3_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = FunctionsInternalPINVOKE_HttpsCallableReferenceInternal_Functions_get_m8161F33B08FCEFBE74BE99CB5818C0FF82E202ED(L_0, NULL);
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
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_6 = (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E*)il2cpp_codegen_object_new(FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		FirebaseFunctionsInternal__ctor_m9C6C9816FD7FEF909D2CB4C159A4A6C792900EDA(L_6, L_5, (bool)0, NULL);
		G_B3_0 = L_6;
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = ((FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E*)(NULL));
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableReferenceInternal_get_Functions_mCD015B62AFD68DBCA9A46E5D6C89B148C9DB6457_RuntimeMethod_var)));
	}

IL_0034:
	{
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_10 = V_1;
		V_3 = L_10;
		goto IL_0038;
	}

IL_0038:
	{
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_11 = V_3;
		return L_11;
	}
}
// System.Boolean Firebase.Functions.HttpsCallableReferenceInternal::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpsCallableReferenceInternal_get_IsValid_m1483E632CACA0AFECEE62383C84F0E913E8C294C (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = FunctionsInternalPINVOKE_HttpsCallableReferenceInternal_IsValid_get_m80E1909929C624A28BAA4D0FE19BE203C5B8EE31(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableReferenceInternal_get_IsValid_m1483E632CACA0AFECEE62383C84F0E913E8C294C_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_6 = V_2;
		return L_6;
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
// System.Void Firebase.Functions.HttpsCallableResultInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResultInternal__ctor_m188853F20BAA49703E65490721AB6EC7D08D5B40 (HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
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
// System.Runtime.InteropServices.HandleRef Firebase.Functions.HttpsCallableResultInternal::getCPtr(Firebase.Functions.HttpsCallableResultInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F HttpsCallableResultInternal_getCPtr_m045A49E42622D8E0857F68C574075CBE534A9052 (HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* ___0_obj, const RuntimeMethod* method) 
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
		HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* L_1 = ___0_obj;
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
// System.Runtime.InteropServices.HandleRef Firebase.Functions.HttpsCallableResultInternal::swigRelease(Firebase.Functions.HttpsCallableResultInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F HttpsCallableResultInternal_swigRelease_m43B69150ED77D0820E4C0EF8EE3797FA1CB6DCE3 (HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* ___0_obj, const RuntimeMethod* method) 
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
		HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* L_0 = ___0_obj;
		V_0 = (bool)((!(((RuntimeObject*)(HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* L_2 = ___0_obj;
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableResultInternal_swigRelease_m43B69150ED77D0820E4C0EF8EE3797FA1CB6DCE3_RuntimeMethod_var)));
	}

IL_0022:
	{
		HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* L_6 = ___0_obj;
		NullCheck(L_6);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = L_6->___swigCPtr_0;
		V_1 = L_7;
		HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* L_8 = ___0_obj;
		NullCheck(L_8);
		L_8->___swigCMemOwn_1 = (bool)0;
		HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* L_9 = ___0_obj;
		NullCheck(L_9);
		HttpsCallableResultInternal_Dispose_mE727D53C05611CD2200811866D95FE855DDF6FC2(L_9, NULL);
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
// System.Void Firebase.Functions.HttpsCallableResultInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResultInternal_Finalize_mF848A0EFBE0D4A2BF5C61F7079106C4DAB57D93B (HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* __this, const RuntimeMethod* method) 
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
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Functions.HttpsCallableResultInternal::Dispose(System.Boolean) */, __this, (bool)0);
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
// System.Void Firebase.Functions.HttpsCallableResultInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResultInternal_Dispose_mE727D53C05611CD2200811866D95FE855DDF6FC2 (HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Functions.HttpsCallableResultInternal::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.Functions.HttpsCallableResultInternal::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResultInternal_Dispose_m337B37CD25B485E8297A21B3E5EAAFF53F69EAA0 (HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
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
				il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
				FunctionsInternalPINVOKE_delete_HttpsCallableResultInternal_m2BEDF2B91E4DDC72CEC7EA38266D0582A3225146(L_11, NULL);
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
// System.Void Firebase.Functions.HttpsCallableResultInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResultInternal__ctor_m084F828433B315DECD1A8E98986DDD99A9385AA2 (HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = FunctionsInternalPINVOKE_new_HttpsCallableResultInternal__SWIG_0_m961C833CCC73754F92A407BB0C0396CCFF94BA2F(NULL);
		HttpsCallableResultInternal__ctor_m188853F20BAA49703E65490721AB6EC7D08D5B40(__this, L_0, (bool)1, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableResultInternal__ctor_m084F828433B315DECD1A8E98986DDD99A9385AA2_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.Functions.HttpsCallableResultInternal::.ctor(Firebase.Functions.HttpsCallableResultInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResultInternal__ctor_mEF49F52132BF88E4318FF12FBDF1D1BA9B509A4D (HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* __this, HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* L_0 = ___0_other;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = HttpsCallableResultInternal_getCPtr_m045A49E42622D8E0857F68C574075CBE534A9052(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = FunctionsInternalPINVOKE_new_HttpsCallableResultInternal__SWIG_1_m8C8B2CB2D6C6C93FBA301D1E499FE884ADFC2BF3(L_1, NULL);
		HttpsCallableResultInternal__ctor_m188853F20BAA49703E65490721AB6EC7D08D5B40(__this, L_2, (bool)1, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableResultInternal__ctor_mEF49F52132BF88E4318FF12FBDF1D1BA9B509A4D_RuntimeMethod_var)));
	}

IL_0023:
	{
		return;
	}
}
// Firebase.Variant Firebase.Functions.HttpsCallableResultInternal::data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* HttpsCallableResultInternal_data_m268B74E23C14C592B9ECD27DC01237267E489B46 (HttpsCallableResultInternal_t71704E40C16C417ED984E2351D8715B6055F4AA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* V_0 = NULL;
	bool V_1 = false;
	Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = FunctionsInternalPINVOKE_HttpsCallableResultInternal_data_m6AD188669EED52C3ED2618838EA10D6E3A128283(L_0, NULL);
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_2 = (Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C*)il2cpp_codegen_object_new(Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Variant__ctor_mCBCDC0D6E1290E1A8412B59A4A8956BC32DFA163(L_2, L_1, (bool)0, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableResultInternal_data_m268B74E23C14C592B9ECD27DC01237267E489B46_RuntimeMethod_var)));
	}

IL_0022:
	{
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_6 = V_0;
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_7 = V_2;
		return L_7;
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
// System.Void Firebase.Functions.FirebaseFunctionsInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal__ctor_m9C6C9816FD7FEF909D2CB4C159A4A6C792900EDA (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
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
// System.Runtime.InteropServices.HandleRef Firebase.Functions.FirebaseFunctionsInternal::getCPtr(Firebase.Functions.FirebaseFunctionsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseFunctionsInternal_getCPtr_m7BA78F671CB1587E01912DD8E3E53A3176BE1065 (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* ___0_obj, const RuntimeMethod* method) 
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
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_1 = ___0_obj;
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
// System.Runtime.InteropServices.HandleRef Firebase.Functions.FirebaseFunctionsInternal::swigRelease(Firebase.Functions.FirebaseFunctionsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseFunctionsInternal_swigRelease_mE1AC2F9452EB44A1BA6006A582AA8A887EFA8EEC (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* ___0_obj, const RuntimeMethod* method) 
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
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_0 = ___0_obj;
		V_0 = (bool)((!(((RuntimeObject*)(FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_2 = ___0_obj;
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseFunctionsInternal_swigRelease_mE1AC2F9452EB44A1BA6006A582AA8A887EFA8EEC_RuntimeMethod_var)));
	}

IL_0022:
	{
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_6 = ___0_obj;
		NullCheck(L_6);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = L_6->___swigCPtr_0;
		V_1 = L_7;
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_8 = ___0_obj;
		NullCheck(L_8);
		L_8->___swigCMemOwn_1 = (bool)0;
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_9 = ___0_obj;
		NullCheck(L_9);
		FirebaseFunctionsInternal_Dispose_mC94E11C6DABFFDFD2CEA00328CD2D63B158AEE32(L_9, NULL);
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
// System.Void Firebase.Functions.FirebaseFunctionsInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_Finalize_mB6FC030A665E69E65BACE263B8D5FC78521FE316 (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* __this, const RuntimeMethod* method) 
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
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Functions.FirebaseFunctionsInternal::Dispose(System.Boolean) */, __this, (bool)0);
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
// System.Void Firebase.Functions.FirebaseFunctionsInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_Dispose_mC94E11C6DABFFDFD2CEA00328CD2D63B158AEE32 (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Functions.FirebaseFunctionsInternal::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FirebaseFunctionsInternal::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_Dispose_m257D30A2B9246CD6AB597FEBA3BDC8BA7287606E (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			FirebaseFunctionsInternal_ReleaseReferenceInternal_m3315B5DFFEE93C6C09D88E76EF50DEF8F44EFE0C(__this, NULL);
			__this->___swigCMemOwn_1 = (bool)0;
			intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5;
			memset((&L_5), 0, sizeof(L_5));
			HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_5), NULL, L_4, /*hidden argument*/NULL);
			__this->___swigCPtr_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			goto IL_0040;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		return;
	}
}
// System.Void Firebase.Functions.FirebaseFunctionsInternal::SetSwigCMemOwn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_SetSwigCMemOwn_m65812A8C24846C95791A9F279F1678E05ADA21D1 (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* __this, bool ___0_ownership, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_ownership;
		__this->___swigCMemOwn_1 = L_0;
		return;
	}
}
// Firebase.Functions.HttpsCallableReferenceInternal Firebase.Functions.FirebaseFunctionsInternal::GetHttpsCallable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* FirebaseFunctionsInternal_GetHttpsCallable_m1B822609DE2F33B993941CA586139F30A73202A8 (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* V_0 = NULL;
	bool V_1 = false;
	HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = FunctionsInternalPINVOKE_FirebaseFunctionsInternal_GetHttpsCallable_mA5BF42B88978D381BA9E3E49296E989A537A3C72(L_0, L_1, NULL);
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_3 = (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C*)il2cpp_codegen_object_new(HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HttpsCallableReferenceInternal__ctor_mAD4B75F160005854190D44535DFC5876D96041E0(L_3, L_2, (bool)1, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseFunctionsInternal_GetHttpsCallable_m1B822609DE2F33B993941CA586139F30A73202A8_RuntimeMethod_var)));
	}

IL_0023:
	{
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_7 = V_0;
		V_2 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_8 = V_2;
		return L_8;
	}
}
// Firebase.Functions.HttpsCallableReferenceInternal Firebase.Functions.FirebaseFunctionsInternal::GetHttpsCallableFromURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* FirebaseFunctionsInternal_GetHttpsCallableFromURL_mF810982D47D777E0CA2BB280B557350879E06410 (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* V_0 = NULL;
	bool V_1 = false;
	HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___0_url;
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = FunctionsInternalPINVOKE_FirebaseFunctionsInternal_GetHttpsCallableFromURL_mE103B4195234C6B4D8E58323FD100467FB842F7F(L_0, L_1, NULL);
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_3 = (HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C*)il2cpp_codegen_object_new(HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HttpsCallableReferenceInternal__ctor_mAD4B75F160005854190D44535DFC5876D96041E0(L_3, L_2, (bool)1, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseFunctionsInternal_GetHttpsCallableFromURL_mF810982D47D777E0CA2BB280B557350879E06410_RuntimeMethod_var)));
	}

IL_0023:
	{
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_7 = V_0;
		V_2 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Functions.FirebaseFunctionsInternal::UseFunctionsEmulator(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_UseFunctionsEmulator_m4F6E9E0E0001A9C18E7BEBCB442F0E958BF7FC85 (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* __this, String_t* ___0_origin, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___0_origin;
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		FunctionsInternalPINVOKE_FirebaseFunctionsInternal_UseFunctionsEmulator_mE0EE48C65B08BD0681C66EC5C8F576B8A2DD63AC(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseFunctionsInternal_UseFunctionsEmulator_m4F6E9E0E0001A9C18E7BEBCB442F0E958BF7FC85_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// Firebase.FirebaseApp Firebase.Functions.FirebaseFunctionsInternal::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseFunctionsInternal_get_App_m62620C2BE9FEDEBDB8A07F7C13621DDECC6038E3 (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_1 = NULL;
	bool V_2 = false;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_3 = NULL;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* G_B3_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = FunctionsInternalPINVOKE_FirebaseFunctionsInternal_App_get_mD88C7E999218E05D86852A763975CA611A83A8D9(L_0, NULL);
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
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_6 = (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)il2cpp_codegen_object_new(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		FirebaseApp__ctor_mC539AF748C2E16CD3B7820D6039B9A29DBDF908C(L_6, L_5, (bool)0, NULL);
		G_B3_0 = L_6;
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)(NULL));
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseFunctionsInternal_get_App_m62620C2BE9FEDEBDB8A07F7C13621DDECC6038E3_RuntimeMethod_var)));
	}

IL_0034:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_10 = V_1;
		V_3 = L_10;
		goto IL_0038;
	}

IL_0038:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_11 = V_3;
		return L_11;
	}
}
// Firebase.Functions.FirebaseFunctionsInternal Firebase.Functions.FirebaseFunctionsInternal::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* FirebaseFunctionsInternal_GetInstanceInternal_m5C67FC07CC486B0C90FF657F335446A420F8F839 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, String_t* ___1_region, int32_t* ___2_init_result_out, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* V_2 = NULL;
	bool V_3 = false;
	FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* V_4 = NULL;
	FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* G_B4_0 = NULL;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				int32_t* L_0 = ___2_init_result_out;
				int32_t L_1 = V_0;
				*((int32_t*)L_0) = (int32_t)L_1;
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_2 = ___0_app;
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_3;
				L_3 = FirebaseApp_getCPtr_m54B5DAC73BA43E79771E0181BEFD846BBE06C84F(L_2, NULL);
				String_t* L_4 = ___1_region;
				il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
				intptr_t L_5;
				L_5 = FunctionsInternalPINVOKE_FirebaseFunctionsInternal_GetInstanceInternal_m74C4F3EB7D11B6C04E8F4A81DDFB02F3646BDA1B(L_3, L_4, (&V_0), NULL);
				V_1 = L_5;
				intptr_t L_6 = V_1;
				intptr_t L_7 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_8;
				L_8 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_6, L_7, NULL);
				if (L_8)
				{
					goto IL_0029_1;
				}
			}
			{
				intptr_t L_9 = V_1;
				FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_10 = (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E*)il2cpp_codegen_object_new(FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				FirebaseFunctionsInternal__ctor_m9C6C9816FD7FEF909D2CB4C159A4A6C792900EDA(L_10, L_9, (bool)0, NULL);
				G_B4_0 = L_10;
				goto IL_002a_1;
			}

IL_0029_1:
			{
				G_B4_0 = ((FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E*)(NULL));
			}

IL_002a_1:
			{
				V_2 = G_B4_0;
				il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
				bool L_11;
				L_11 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
				V_3 = L_11;
				bool L_12 = V_3;
				if (!L_12)
				{
					goto IL_003a_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
				Exception_t* L_13;
				L_13 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseFunctionsInternal_GetInstanceInternal_m5C67FC07CC486B0C90FF657F335446A420F8F839_RuntimeMethod_var)));
			}

IL_003a_1:
			{
				FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_14 = V_2;
				V_4 = L_14;
				goto IL_0045;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_15 = V_4;
		return L_15;
	}
}
// System.Void Firebase.Functions.FirebaseFunctionsInternal::ReleaseReferenceInternal(Firebase.Functions.FirebaseFunctionsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_ReleaseReferenceInternal_m3315B5DFFEE93C6C09D88E76EF50DEF8F44EFE0C (FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* ___0_instance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseFunctionsInternal_tF70271D802A2C72D5A353DB15B5B03F1C78C694E* L_0 = ___0_instance;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = FirebaseFunctionsInternal_getCPtr_m7BA78F671CB1587E01912DD8E3E53A3176BE1065(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		FunctionsInternalPINVOKE_FirebaseFunctionsInternal_ReleaseReferenceInternal_m8ED65D54A71C84C5B04C0E6F57D7A3B0CB11026C(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseFunctionsInternal_ReleaseReferenceInternal_m3315B5DFFEE93C6C09D88E76EF50DEF8F44EFE0C_RuntimeMethod_var)));
	}

IL_001c:
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
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE__cctor_m393B56EBE55CDD33DF561703917C7E6B6C9F15E8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1* L_0 = (SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1*)il2cpp_codegen_object_new(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGExceptionHelper__ctor_m966347603E004BED6861B69E41F38362C39E31E8(L_0, NULL);
		((FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_StaticFields*)il2cpp_codegen_static_fields_for(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var))->___swigExceptionHelper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_StaticFields*)il2cpp_codegen_static_fields_for(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var))->___swigExceptionHelper_0), (void*)L_0);
		SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D* L_1 = (SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D*)il2cpp_codegen_object_new(SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SWIGStringHelper__ctor_m2F624F773D17AF9EBDA8BA7A8983402E3F5B341D(L_1, NULL);
		((FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_StaticFields*)il2cpp_codegen_static_fields_for(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var))->___swigStringHelper_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_StaticFields*)il2cpp_codegen_static_fields_for(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var))->___swigStringHelper_1), (void*)L_1);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::ExportFix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_ExportFix_m451E35224542B663D20C0A3FE3BBA0A165610160 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_ExportFix", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_ExportFix)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::new_Future_HttpsCallableResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_new_Future_HttpsCallableResult_m282583AB7FB3002F36CD5811AFE7C5647DF11222 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_new_Future_HttpsCallableResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_new_Future_HttpsCallableResult)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Future_HttpsCallableResult_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Future_HttpsCallableResult_SWIG_OnCompletion_mBFDB51E533FE070B340F52AC4F6DF052B2355E89 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, SWIG_CompletionDelegate_t94671613D673562F3567922B287515704BB2CFFF* ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_Future_HttpsCallableResult_SWIG_OnCompletion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_Future_HttpsCallableResult_SWIG_OnCompletion)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#endif

	return returnValue;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::Future_HttpsCallableResult_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_Future_HttpsCallableResult_SWIG_FreeCompletionData_m74ABB701E5E1565DC8F3640D70523C7511F968BC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_Future_HttpsCallableResult_SWIG_FreeCompletionData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_Future_HttpsCallableResult_SWIG_FreeCompletionData)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Future_HttpsCallableResult_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Future_HttpsCallableResult_GetResult_m0E6F7CD71342C074100A5995FC1CA5CF3DE7D9D5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_Future_HttpsCallableResult_GetResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_Future_HttpsCallableResult_GetResult)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::delete_Future_HttpsCallableResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_delete_Future_HttpsCallableResult_m5744DD3241122796355C571391301984230F9BC2 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_delete_Future_HttpsCallableResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_delete_Future_HttpsCallableResult)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::new_HttpsCallableReferenceInternal__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_new_HttpsCallableReferenceInternal__SWIG_0_m2C2E23CD4CF3D50D526DD106F207CB7482E73146 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_new_HttpsCallableReferenceInternal__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_new_HttpsCallableReferenceInternal__SWIG_0)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::delete_HttpsCallableReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_delete_HttpsCallableReferenceInternal_m691BBEE83440B636AE7B1175EA30E980B1B6FD9A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_delete_HttpsCallableReferenceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_delete_HttpsCallableReferenceInternal)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::new_HttpsCallableReferenceInternal__SWIG_1(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_new_HttpsCallableReferenceInternal__SWIG_1_m60176A8068FAF2E772354E7E58240D89FBFBB9B5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_new_HttpsCallableReferenceInternal__SWIG_1", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_new_HttpsCallableReferenceInternal__SWIG_1)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::HttpsCallableReferenceInternal_Call__SWIG_0(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_HttpsCallableReferenceInternal_Call__SWIG_0_m047B8FEE40C1625943A93A028E6A05F98E961CA1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_HttpsCallableReferenceInternal_Call__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_HttpsCallableReferenceInternal_Call__SWIG_0)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::HttpsCallableReferenceInternal_Call__SWIG_1(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_HttpsCallableReferenceInternal_Call__SWIG_1_m91B3A2841B4DDEBBF2224D6F0F3EC901A882EC94 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_HttpsCallableReferenceInternal_Call__SWIG_1", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_HttpsCallableReferenceInternal_Call__SWIG_1)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::HttpsCallableReferenceInternal_Functions_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_HttpsCallableReferenceInternal_Functions_get_m8161F33B08FCEFBE74BE99CB5818C0FF82E202ED (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_HttpsCallableReferenceInternal_Functions_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_HttpsCallableReferenceInternal_Functions_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Boolean Firebase.Functions.FunctionsInternalPINVOKE::HttpsCallableReferenceInternal_IsValid_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FunctionsInternalPINVOKE_HttpsCallableReferenceInternal_IsValid_get_m80E1909929C624A28BAA4D0FE19BE203C5B8EE31 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_HttpsCallableReferenceInternal_IsValid_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_HttpsCallableReferenceInternal_IsValid_get)(____0_jarg1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::new_HttpsCallableResultInternal__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_new_HttpsCallableResultInternal__SWIG_0_m961C833CCC73754F92A407BB0C0396CCFF94BA2F (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_new_HttpsCallableResultInternal__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_new_HttpsCallableResultInternal__SWIG_0)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::delete_HttpsCallableResultInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_delete_HttpsCallableResultInternal_m2BEDF2B91E4DDC72CEC7EA38266D0582A3225146 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_delete_HttpsCallableResultInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_delete_HttpsCallableResultInternal)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::new_HttpsCallableResultInternal__SWIG_1(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_new_HttpsCallableResultInternal__SWIG_1_m8C8B2CB2D6C6C93FBA301D1E499FE884ADFC2BF3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_new_HttpsCallableResultInternal__SWIG_1", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_new_HttpsCallableResultInternal__SWIG_1)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::HttpsCallableResultInternal_data(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_HttpsCallableResultInternal_data_m6AD188669EED52C3ED2618838EA10D6E3A128283 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_HttpsCallableResultInternal_data", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_HttpsCallableResultInternal_data)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::delete_FirebaseFunctionsInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_delete_FirebaseFunctionsInternal_m480EDCC8CA03D8ED593171F5711B220CC8FE3A81 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_delete_FirebaseFunctionsInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_delete_FirebaseFunctionsInternal)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::FirebaseFunctionsInternal_GetHttpsCallable(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_FirebaseFunctionsInternal_GetHttpsCallable_mA5BF42B88978D381BA9E3E49296E989A537A3C72 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_FirebaseFunctionsInternal_GetHttpsCallable", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_FirebaseFunctionsInternal_GetHttpsCallable)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::FirebaseFunctionsInternal_GetHttpsCallableFromURL(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_FirebaseFunctionsInternal_GetHttpsCallableFromURL_mE103B4195234C6B4D8E58323FD100467FB842F7F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_FirebaseFunctionsInternal_GetHttpsCallableFromURL", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_FirebaseFunctionsInternal_GetHttpsCallableFromURL)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::FirebaseFunctionsInternal_UseFunctionsEmulator(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_FirebaseFunctionsInternal_UseFunctionsEmulator_mE0EE48C65B08BD0681C66EC5C8F576B8A2DD63AC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_FirebaseFunctionsInternal_UseFunctionsEmulator", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_FirebaseFunctionsInternal_UseFunctionsEmulator)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::FirebaseFunctionsInternal_App_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_FirebaseFunctionsInternal_App_get_mD88C7E999218E05D86852A763975CA611A83A8D9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_FirebaseFunctionsInternal_App_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_FirebaseFunctionsInternal_App_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::FirebaseFunctionsInternal_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_FirebaseFunctionsInternal_GetInstanceInternal_m74C4F3EB7D11B6C04E8F4A81DDFB02F3646BDA1B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, int32_t* ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_FirebaseFunctionsInternal_GetInstanceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_FirebaseFunctionsInternal_GetInstanceInternal)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::FirebaseFunctionsInternal_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_FirebaseFunctionsInternal_ReleaseReferenceInternal_m8ED65D54A71C84C5B04C0E6F57D7A3B0CB11026C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_FirebaseFunctionsInternal_ReleaseReferenceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_FirebaseFunctionsInternal_ReleaseReferenceInternal)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Future_HttpsCallableResult_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Future_HttpsCallableResult_SWIGUpcast_m44D72DE55B6E79DC312987A3D4FBC20ED90C80DF (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "Firebase_Functions_CSharp_Future_HttpsCallableResult_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_CSharp_Future_HttpsCallableResult_SWIGUpcast)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE__ctor_mE055B368AECB4422C2F49CE0291767A0FE6BAA49 (FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA* __this, const RuntimeMethod* method) 
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m7FFCF0A70D5E68DCE979D90F2A2A369D15766E49(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m7FFCF0A70D5E68DCE979D90F2A2A369D15766E49(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_mA47618D85CEA1AD632307DE6518ED199B797FC6C(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_mA47618D85CEA1AD632307DE6518ED199B797FC6C(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m7BA4D3567824AB4D83FE631F61EC35A394CE7494(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m7BA4D3567824AB4D83FE631F61EC35A394CE7494(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m32E41124613D2F61B2AFB13DD25E026EC98453D0(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m32E41124613D2F61B2AFB13DD25E026EC98453D0(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m320675D3ADE4FA1C49E68C3C79BF79EADA59AEF7(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m320675D3ADE4FA1C49E68C3C79BF79EADA59AEF7(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m0DC409CBBD3DA9123DD2683A67FBA56F480F1C74(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m0DC409CBBD3DA9123DD2683A67FBA56F480F1C74(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mE7B7BB5D3140893D587C33A2ECAEDCE547EF84AA(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_mE7B7BB5D3140893D587C33A2ECAEDCE547EF84AA(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m99B16EEB736C612C48021B8C7B7FBB3CD66F5099(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m99B16EEB736C612C48021B8C7B7FBB3CD66F5099(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m69E8631819BCD1F60D2524AF76DBA6134546A031(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m69E8631819BCD1F60D2524AF76DBA6134546A031(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_mDA36E9D1C1131C736FFD002A690CDDB6E35273E4(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_mDA36E9D1C1131C736FFD002A690CDDB6E35273E4(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m8770ED05C98BB6B6750DF02609CB90132DE1CDD1(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m8770ED05C98BB6B6750DF02609CB90132DE1CDD1(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_mB28C0E8E1C72D661907FA07D3E07D279EFA1CA50(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_mB28C0E8E1C72D661907FA07D3E07D279EFA1CA50(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mC5DFEF6C993FEB15174B1132C46610AB794A8376(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_mC5DFEF6C993FEB15174B1132C46610AB794A8376(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m977EB9947A66334C23A3A8CE7EDC069C4FA72C1C(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m977EB9947A66334C23A3A8CE7EDC069C4FA72C1C(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FunctionsInternal(Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FunctionsInternal_m5E22471229B80DE87FB3B4F3CF476DD9BFB4904B (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___0_applicationDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___1_arithmeticDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___2_divideByZeroDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___3_indexOutOfRangeDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___4_invalidCastDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___5_invalidOperationDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___6_ioDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___7_nullReferenceDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___8_outOfMemoryDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___9_overflowDelegate, ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* ___10_systemExceptionDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "SWIGRegisterExceptionCallbacks_FunctionsInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_FunctionsInternal)(____0_applicationDelegate_marshaled, ____1_arithmeticDelegate_marshaled, ____2_divideByZeroDelegate_marshaled, ____3_indexOutOfRangeDelegate_marshaled, ____4_invalidCastDelegate_marshaled, ____5_invalidOperationDelegate_marshaled, ____6_ioDelegate_marshaled, ____7_nullReferenceDelegate_marshaled, ____8_outOfMemoryDelegate_marshaled, ____9_overflowDelegate_marshaled, ____10_systemExceptionDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_applicationDelegate_marshaled, ____1_arithmeticDelegate_marshaled, ____2_divideByZeroDelegate_marshaled, ____3_indexOutOfRangeDelegate_marshaled, ____4_invalidCastDelegate_marshaled, ____5_invalidOperationDelegate_marshaled, ____6_ioDelegate_marshaled, ____7_nullReferenceDelegate_marshaled, ____8_outOfMemoryDelegate_marshaled, ____9_overflowDelegate_marshaled, ____10_systemExceptionDelegate_marshaled);
	#endif

}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FunctionsInternal(Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FunctionsInternal_m7FE15E0EFCDEB651F6F4E2026582BBD5D480F5C0 (ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* ___0_argumentDelegate, ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* ___1_argumentNullDelegate, ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* ___2_argumentOutOfRangeDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "SWIGRegisterExceptionArgumentCallbacks_FunctionsInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_FunctionsInternal)(____0_argumentDelegate_marshaled, ____1_argumentNullDelegate_marshaled, ____2_argumentOutOfRangeDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_argumentDelegate_marshaled, ____1_argumentNullDelegate_marshaled, ____2_argumentOutOfRangeDelegate_marshaled);
	#endif

}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m7FFCF0A70D5E68DCE979D90F2A2A369D15766E49 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682(NULL);
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_2 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_mA47618D85CEA1AD632307DE6518ED199B797FC6C (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682(NULL);
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_2 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m7BA4D3567824AB4D83FE631F61EC35A394CE7494 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682(NULL);
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_2 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m32E41124613D2F61B2AFB13DD25E026EC98453D0 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682(NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_2 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m320675D3ADE4FA1C49E68C3C79BF79EADA59AEF7 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682(NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m0DC409CBBD3DA9123DD2683A67FBA56F480F1C74 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mE7B7BB5D3140893D587C33A2ECAEDCE547EF84AA (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682(NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_2 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m99B16EEB736C612C48021B8C7B7FBB3CD66F5099 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m69E8631819BCD1F60D2524AF76DBA6134546A031 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682(NULL);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_2 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mDA36E9D1C1131C736FFD002A690CDDB6E35273E4 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682(NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m8770ED05C98BB6B6750DF02609CB90132DE1CDD1 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682(NULL);
		SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* L_2 = (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295*)il2cpp_codegen_object_new(SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mB28C0E8E1C72D661907FA07D3E07D279EFA1CA50 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		String_t* L_1 = ___1_paramName;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0(L_3, L_0, L_1, L_2, NULL);
		SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5(L_3, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mC5DFEF6C993FEB15174B1132C46610AB794A8376 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682(NULL);
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
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5(L_9, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m977EB9947A66334C23A3A8CE7EDC069C4FA72C1C (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682(NULL);
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
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5(L_9, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m2C5CE17A5B92D826ABE3227B539B20F5F1BCC631 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m7FFCF0A70D5E68DCE979D90F2A2A369D15766E49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_mB28C0E8E1C72D661907FA07D3E07D279EFA1CA50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_mC5DFEF6C993FEB15174B1132C46610AB794A8376_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m977EB9947A66334C23A3A8CE7EDC069C4FA72C1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_mA47618D85CEA1AD632307DE6518ED199B797FC6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_m7BA4D3567824AB4D83FE631F61EC35A394CE7494_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_mE7B7BB5D3140893D587C33A2ECAEDCE547EF84AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m32E41124613D2F61B2AFB13DD25E026EC98453D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m320675D3ADE4FA1C49E68C3C79BF79EADA59AEF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_m0DC409CBBD3DA9123DD2683A67FBA56F480F1C74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m99B16EEB736C612C48021B8C7B7FBB3CD66F5099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_m69E8631819BCD1F60D2524AF76DBA6134546A031_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_mDA36E9D1C1131C736FFD002A690CDDB6E35273E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_m8770ED05C98BB6B6750DF02609CB90132DE1CDD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_0 = (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12*)il2cpp_codegen_object_new(ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExceptionDelegate__ctor_m74D21E060B3E1413A42880DA0979CD03D103944D(L_0, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingApplicationException_m7FFCF0A70D5E68DCE979D90F2A2A369D15766E49_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___applicationDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___applicationDelegate_0), (void*)L_0);
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_1 = (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12*)il2cpp_codegen_object_new(ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ExceptionDelegate__ctor_m74D21E060B3E1413A42880DA0979CD03D103944D(L_1, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArithmeticException_mA47618D85CEA1AD632307DE6518ED199B797FC6C_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___arithmeticDelegate_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___arithmeticDelegate_1), (void*)L_1);
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_2 = (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12*)il2cpp_codegen_object_new(ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ExceptionDelegate__ctor_m74D21E060B3E1413A42880DA0979CD03D103944D(L_2, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingDivideByZeroException_m7BA4D3567824AB4D83FE631F61EC35A394CE7494_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2), (void*)L_2);
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_3 = (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12*)il2cpp_codegen_object_new(ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ExceptionDelegate__ctor_m74D21E060B3E1413A42880DA0979CD03D103944D(L_3, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m32E41124613D2F61B2AFB13DD25E026EC98453D0_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3), (void*)L_3);
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_4 = (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12*)il2cpp_codegen_object_new(ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ExceptionDelegate__ctor_m74D21E060B3E1413A42880DA0979CD03D103944D(L_4, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidCastException_m320675D3ADE4FA1C49E68C3C79BF79EADA59AEF7_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___invalidCastDelegate_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___invalidCastDelegate_4), (void*)L_4);
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_5 = (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12*)il2cpp_codegen_object_new(ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ExceptionDelegate__ctor_m74D21E060B3E1413A42880DA0979CD03D103944D(L_5, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidOperationException_m0DC409CBBD3DA9123DD2683A67FBA56F480F1C74_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5), (void*)L_5);
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_6 = (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12*)il2cpp_codegen_object_new(ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ExceptionDelegate__ctor_m74D21E060B3E1413A42880DA0979CD03D103944D(L_6, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIOException_mE7B7BB5D3140893D587C33A2ECAEDCE547EF84AA_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___ioDelegate_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___ioDelegate_6), (void*)L_6);
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_7 = (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12*)il2cpp_codegen_object_new(ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ExceptionDelegate__ctor_m74D21E060B3E1413A42880DA0979CD03D103944D(L_7, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingNullReferenceException_m99B16EEB736C612C48021B8C7B7FBB3CD66F5099_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7), (void*)L_7);
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_8 = (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12*)il2cpp_codegen_object_new(ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ExceptionDelegate__ctor_m74D21E060B3E1413A42880DA0979CD03D103944D(L_8, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOutOfMemoryException_m69E8631819BCD1F60D2524AF76DBA6134546A031_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8), (void*)L_8);
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_9 = (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12*)il2cpp_codegen_object_new(ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ExceptionDelegate__ctor_m74D21E060B3E1413A42880DA0979CD03D103944D(L_9, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOverflowException_mDA36E9D1C1131C736FFD002A690CDDB6E35273E4_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___overflowDelegate_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___overflowDelegate_9), (void*)L_9);
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_10 = (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12*)il2cpp_codegen_object_new(ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ExceptionDelegate__ctor_m74D21E060B3E1413A42880DA0979CD03D103944D(L_10, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingSystemException_m8770ED05C98BB6B6750DF02609CB90132DE1CDD1_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___systemDelegate_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___systemDelegate_10), (void*)L_10);
		ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* L_11 = (ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ExceptionArgumentDelegate__ctor_mD0057A550768AD310F9B13F65A495B2A0F6D522E(L_11, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentException_mB28C0E8E1C72D661907FA07D3E07D279EFA1CA50_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___argumentDelegate_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___argumentDelegate_11), (void*)L_11);
		ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* L_12 = (ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ExceptionArgumentDelegate__ctor_mD0057A550768AD310F9B13F65A495B2A0F6D522E(L_12, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentNullException_mC5DFEF6C993FEB15174B1132C46610AB794A8376_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___argumentNullDelegate_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___argumentNullDelegate_12), (void*)L_12);
		ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* L_13 = (ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ExceptionArgumentDelegate__ctor_mD0057A550768AD310F9B13F65A495B2A0F6D522E(L_13, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m977EB9947A66334C23A3A8CE7EDC069C4FA72C1C_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13), (void*)L_13);
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_14 = ((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___applicationDelegate_0;
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_15 = ((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___arithmeticDelegate_1;
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_16 = ((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2;
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_17 = ((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3;
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_18 = ((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___invalidCastDelegate_4;
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_19 = ((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5;
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_20 = ((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___ioDelegate_6;
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_21 = ((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7;
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_22 = ((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8;
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_23 = ((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___overflowDelegate_9;
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* L_24 = ((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___systemDelegate_10;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FunctionsInternal_m5E22471229B80DE87FB3B4F3CF476DD9BFB4904B(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, NULL);
		ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* L_25 = ((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___argumentDelegate_11;
		ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* L_26 = ((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___argumentNullDelegate_12;
		ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* L_27 = ((SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FunctionsInternal_m7FE15E0EFCDEB651F6F4E2026582BBD5D480F5C0(L_25, L_26, L_27, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m966347603E004BED6861B69E41F38362C39E31E8 (SWIGExceptionHelper_tFCFA3DFC745A5F9AF57BD8C79B7602EB55C6B8F1* __this, const RuntimeMethod* method) 
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
void ExceptionDelegate_Invoke_m268BF3562AD9288241421375B25D79837B58D871_Multicast(ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* currentDelegate = reinterpret_cast<ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionDelegate_Invoke_m268BF3562AD9288241421375B25D79837B58D871_OpenInst(ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ExceptionDelegate_Invoke_m268BF3562AD9288241421375B25D79837B58D871_OpenStatic(ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ExceptionDelegate_Invoke_m268BF3562AD9288241421375B25D79837B58D871_OpenStaticInvoker(ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message);
}
void ExceptionDelegate_Invoke_m268BF3562AD9288241421375B25D79837B58D871_ClosedStaticInvoker(ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12 (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* __this, String_t* ___0_message, const RuntimeMethod* method)
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
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m74D21E060B3E1413A42880DA0979CD03D103944D (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m268BF3562AD9288241421375B25D79837B58D871_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m268BF3562AD9288241421375B25D79837B58D871_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m268BF3562AD9288241421375B25D79837B58D871_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m268BF3562AD9288241421375B25D79837B58D871_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionDelegate_Invoke_m268BF3562AD9288241421375B25D79837B58D871_Multicast;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m268BF3562AD9288241421375B25D79837B58D871 (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_m148A602BA67C766D73B7202CDA7932651C2D98BF (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* __this, String_t* ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_m30ED20E38D0C339445FF23C2C91D70C978FC600D (ExceptionDelegate_t8E77E330DCF8196CA1422FC0E2C6B83E1E523E12* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void ExceptionArgumentDelegate_Invoke_m82A8A2B599FCE0F5519FDC96834E4857FDBA4B07_Multicast(ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* currentDelegate = reinterpret_cast<ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, ___1_paramName, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionArgumentDelegate_Invoke_m82A8A2B599FCE0F5519FDC96834E4857FDBA4B07_OpenInst(ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, ___1_paramName, method);
}
void ExceptionArgumentDelegate_Invoke_m82A8A2B599FCE0F5519FDC96834E4857FDBA4B07_OpenStatic(ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, ___1_paramName, method);
}
void ExceptionArgumentDelegate_Invoke_m82A8A2B599FCE0F5519FDC96834E4857FDBA4B07_OpenStaticInvoker(ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message, ___1_paramName);
}
void ExceptionArgumentDelegate_Invoke_m82A8A2B599FCE0F5519FDC96834E4857FDBA4B07_ClosedStaticInvoker(ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message, ___1_paramName);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0 (ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
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
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mD0057A550768AD310F9B13F65A495B2A0F6D522E (ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m82A8A2B599FCE0F5519FDC96834E4857FDBA4B07_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m82A8A2B599FCE0F5519FDC96834E4857FDBA4B07_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m82A8A2B599FCE0F5519FDC96834E4857FDBA4B07_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m82A8A2B599FCE0F5519FDC96834E4857FDBA4B07_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m82A8A2B599FCE0F5519FDC96834E4857FDBA4B07_Multicast;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m82A8A2B599FCE0F5519FDC96834E4857FDBA4B07 (ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, ___1_paramName, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_mC19BB4BC1B0E5DF3A16C98EDDE7AC89FAA13EC6E (ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* __this, String_t* ___0_message, String_t* ___1_paramName, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_message;
	__d_args[1] = ___1_paramName;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m94AC95BECBF99985914B1A651A8B263A03C286BF (ExceptionArgumentDelegate_tFE92A2FE72D372E994257DEB3872F799E7774CA0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Boolean Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_mB6422DD2E5C51E682EBE4E86B9E6ADE557079F60 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_2 = ((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___pendingException_0;
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
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5 (Exception_t* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_0 = ((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = (bool)((!(((RuntimeObject*)(Exception_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var)));
		Exception_t* L_2 = ((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))))->___pendingException_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		Exception_t* L_5 = ___0_e;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_6 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_6, L_4, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_m631DCCBE90F87AD8D7C878F938428EA3C625A6F5_RuntimeMethod_var)));
	}

IL_002d:
	{
		Exception_t* L_7 = ___0_e;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___pendingException_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___pendingException_0), (void*)L_7);
		RuntimeObject* L_8 = ((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___exceptionsLock_2;
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
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
			int32_t L_12 = ((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
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
// System.Exception Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m35A6C71D0C35E43381E68A56F12E7B055D446682 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_2 = ((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___pendingException_0;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		Exception_t* L_4 = ((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = L_4;
		((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		RuntimeObject* L_5 = ((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___exceptionsLock_2;
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
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
			int32_t L_9 = ((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
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
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__cctor_m69471A301E86FCD7255C1B54131BC0064E2E6E16 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = 0;
		((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___exceptionsLock_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___exceptionsLock_2), (void*)NULL);
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___exceptionsLock_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2_il2cpp_TypeInfo_var))->___exceptionsLock_2), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__ctor_m8187BFE839F0FE424FC7BDF1DF1A070220B12647 (SWIGPendingException_t74CFE1B5E2E8D4FB256E482E896DC642970F62E2* __this, const RuntimeMethod* method) 
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m47F45E608CDBB943EB4A18F7925618AF66B50916(char* ___0_cString)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_cString' to managed representation
	String_t* ____0_cString_unmarshaled = NULL;
	____0_cString_unmarshaled = il2cpp_codegen_marshal_string_result(___0_cString);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_m47F45E608CDBB943EB4A18F7925618AF66B50916(____0_cString_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FunctionsInternal(Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FunctionsInternal_m5BF4458F7C3914CD0FDBCF502905A980C97AA4E1 (SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* ___0_stringDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_2_0"), "SWIGRegisterStringCallback_FunctionsInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_stringDelegate' to native representation
	Il2CppMethodPointer ____0_stringDelegate_marshaled = NULL;
	____0_stringDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_stringDelegate));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_2_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_FunctionsInternal)(____0_stringDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_stringDelegate_marshaled);
	#endif

}
// System.String Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m47F45E608CDBB943EB4A18F7925618AF66B50916 (String_t* ___0_cString, const RuntimeMethod* method) 
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
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m5C66888FA515630B50F025E7ACB6C4D22656D57A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_m47F45E608CDBB943EB4A18F7925618AF66B50916_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* L_0 = (SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9*)il2cpp_codegen_object_new(SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGStringDelegate__ctor_m388B9393AFF16EDA1F7F71FA0BD654122F49B1A4(L_0, NULL, (intptr_t)((void*)SWIGStringHelper_CreateString_m47F45E608CDBB943EB4A18F7925618AF66B50916_RuntimeMethod_var), NULL);
		((SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D_il2cpp_TypeInfo_var))->___stringDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D_il2cpp_TypeInfo_var))->___stringDelegate_0), (void*)L_0);
		SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* L_1 = ((SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D_il2cpp_TypeInfo_var))->___stringDelegate_0;
		SWIGStringHelper_SWIGRegisterStringCallback_FunctionsInternal_m5BF4458F7C3914CD0FDBCF502905A980C97AA4E1(L_1, NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m2F624F773D17AF9EBDA8BA7A8983402E3F5B341D (SWIGStringHelper_tD5D36765730E4E4AB124374BFCB58C167C6E268D* __this, const RuntimeMethod* method) 
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
String_t* SWIGStringDelegate_Invoke_m689F8F989E69F0B2AE5EE4152BD0563D5E6DE974_Multicast(SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* currentDelegate = reinterpret_cast<SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
String_t* SWIGStringDelegate_Invoke_m689F8F989E69F0B2AE5EE4152BD0563D5E6DE974_OpenInst(SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
String_t* SWIGStringDelegate_Invoke_m689F8F989E69F0B2AE5EE4152BD0563D5E6DE974_OpenStatic(SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
String_t* SWIGStringDelegate_Invoke_m689F8F989E69F0B2AE5EE4152BD0563D5E6DE974_OpenStaticInvoker(SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message);
}
String_t* SWIGStringDelegate_Invoke_m689F8F989E69F0B2AE5EE4152BD0563D5E6DE974_ClosedStaticInvoker(SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< String_t*, RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9 (SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* __this, String_t* ___0_message, const RuntimeMethod* method)
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
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m388B9393AFF16EDA1F7F71FA0BD654122F49B1A4 (SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m689F8F989E69F0B2AE5EE4152BD0563D5E6DE974_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m689F8F989E69F0B2AE5EE4152BD0563D5E6DE974_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m689F8F989E69F0B2AE5EE4152BD0563D5E6DE974_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m689F8F989E69F0B2AE5EE4152BD0563D5E6DE974_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SWIGStringDelegate_Invoke_m689F8F989E69F0B2AE5EE4152BD0563D5E6DE974_Multicast;
}
// System.String Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m689F8F989E69F0B2AE5EE4152BD0563D5E6DE974 (SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_m26115F82BF1E55B710C508F5451C41155DEEA8C3 (SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* __this, String_t* ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.String Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_mCDDCA73DFB31FD1B27B5EE6556230C1FEF8766F5 (SWIGStringDelegate_t745E3718A30CDF05BEFE2BE6742A08FFF69651B9* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void Firebase.Functions.FunctionsInternal::ExportFix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternal_ExportFix_m86165DD2330438A081D4A97E0BD84D5D035E45CE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FunctionsInternalPINVOKE_t5D1A94B31AD1C4E2F0F67189BF51D0566377A5CA_il2cpp_TypeInfo_var);
		FunctionsInternalPINVOKE_ExportFix_m451E35224542B663D20C0A3FE3BBA0A165610160(NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternal__ctor_mA6A59D4A826FEBF54AD5EE79AC8EC43E6E862775 (FunctionsInternal_tB314B1E1CDC271E9E070238FA557673ED508A754* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____handle_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FirebaseException_get_ErrorCode_mE665B1ADB8DD846C3C604DD72F25C1B476EB3A66_inline (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FunctionsException_set_ErrorCode_mF79722F297C916938AABEDDF00B6CF78BE7011A6_inline (FunctionsException_tF9A782424F93633763DA6C6E4EB0C56F65EBC366* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CErrorCodeU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpsCallableReference_set_Internal_m7605C8CDBC33018A2EC28A061BCF1A7445D26D50_inline (HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* __this, HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* ___0_value, const RuntimeMethod* method) 
{
	{
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_0 = ___0_value;
		__this->___U3CInternalU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInternalU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* HttpsCallableReference_get_Internal_mD2A9C790BBD1AD69FA92E6AC7151EBEF3961A741_inline (HttpsCallableReference_t7C32DFEA9A3921F259C1483245AF307CC62417B1* __this, const RuntimeMethod* method) 
{
	{
		HttpsCallableReferenceInternal_tCE79D9587AA837E70AA5823E5B98EBEAE299360C* L_0 = __this->___U3CInternalU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* L_0 = __this->___m_innerExceptions_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpsCallableResult_set_Data_m1CE1349DE624F9387FC23BF6C71AC5BCA62435AF_inline (HttpsCallableResult_t2FA435FCD334CB21B9890AC3C2CA2FC7650ED42B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m6F6A4E766588CA62EA8A607E9A75413E8A33ADCA_inline (Action_t92263C4887C4BDB40C34DFC523051B602EEDD65A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
