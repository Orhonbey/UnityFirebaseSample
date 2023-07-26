#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>>
struct Action_1_t72AC2BBF8D83C444F55D972584ADE8DF9F42F1E4;
// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32Enum>>
struct Action_1_tC3BD22662CBF7BCA7CF101E25DD9C3BC0C8058B4;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.RemoteConfig.FirebaseRemoteConfig>
struct Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.EventHandler`1<Firebase.RemoteConfig.ConfigUpdateEventArgs>
struct EventHandler_1_t7BFF5899F8127C9119FA6798BCF5EDB83CB6C08B;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>,System.Threading.Tasks.Task>
struct Func_2_t9BC23F1985BAB2D4C4528E624BEB56D66FA471A1;
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
struct Func_2_t374ECF90050F953CFA1EB9E9CE02A9C76AC292B2;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// Google.FutureAPIImpl`1<Google.GoogleSignInUser>
struct FutureAPIImpl_1_t1DBB9AEFB8C58CA4AD9AFE5C32CA4C9CF3E58E8B;
// Google.FutureAPIImpl`1<System.Object>
struct FutureAPIImpl_1_tB70B1803C3C8E7E6A30F4E5B318E1BCBA62575DA;
// Google.Future`1<Google.GoogleSignInUser>
struct Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B;
// Google.Future`1<System.Object>
struct Future_1_tA71DD05DCEB77C6104765DDB3DA5A4E3484933CF;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// OrhonBey.Utility.Singleton`1<AuthenticationManager>
struct Singleton_1_tD959AAC6E60C350E78CA14611700EB448099D222;
// OrhonBey.Utility.Singleton`1<FirebaseManager>
struct Singleton_1_t2934699BF8DEC664311D1DC7E8C5F49044AAAD3B;
// OrhonBey.Utility.Singleton`1<GameManager>
struct Singleton_1_tBDDF8490A29F13785F0AB8AF8B258F903924D981;
// OrhonBey.Utility.Singleton`1<System.Object>
struct Singleton_1_t8352515DC2CCEA7E470D7C75A7C541B726970B05;
// OrhonBey.Utility.Singleton`1<_Game.Controller.RemoteConfigController>
struct Singleton_1_tA64608FFE9A349653115A38C5F6AF985D343114C;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>
struct TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7;
// System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>
struct TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>
struct Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B;
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser>
struct Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926;
// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// Firebase.Auth.AuthResult
struct AuthResult_t5BF95C4AB72884856E83E1580EFAB3355F0F9DAA;
// AuthenticationCanvasController
struct AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72;
// AuthenticationManager
struct AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725;
// Google.Impl.BaseObject
struct BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// _Game.Scripts.CanvasControllerBase
struct CanvasControllerBase_tEF2A4A21096F3E5CAF0A2667F33CC4BC69C5D51F;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Firebase.RemoteConfig.ConfigInfo
struct ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Firebase.Auth.Credential
struct Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
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
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF;
// FirebaseManager
struct FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA;
// Firebase.RemoteConfig.FirebaseRemoteConfig
struct FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C;
// Firebase.RemoteConfig.FirebaseRemoteConfigInternal
struct FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// Google.GoogleSignIn
struct GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA;
// Google.GoogleSignInConfiguration
struct GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8;
// Google.Impl.GoogleSignInImpl
struct GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349;
// Google.GoogleSignInUser
struct GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HomeCanvasController
struct HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// Google.ISignInImpl
struct ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// OrhonBey.Utility.InternetChecker
struct InternetChecker_tCC9585BDD70E9A643C6F2D9257A30428DB3E7758;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LoadingCanvasController
struct LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Google.Impl.NativeFuture
struct NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// LayerLab.FantasyRPG.PanelControlFantasyRPG
struct PanelControlFantasyRPG_t349674BAAAFE9C9EE00F3A74E494E610A2AEFD94;
// LayerLab.FantasyRPG.PanelFantasyRPG
struct PanelFantasyRPG_t7FA31F44D0215D76665755F33903BC9C583A34C9;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// _Game.Controller.RemoteConfigController
struct RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// RewardedPopupController
struct RewardedPopupController_t241F047302CF06AA93D75BEE52918633932F410D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SampleTest
struct SampleTest_tF743B3F78CD8ABAE4CBBDE0A1B53FA8D0160E60B;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// Google.Impl.SignInHelperObject
struct SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D;
// UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem
struct UIParticleSystem_t761CD61A1155A6B806D54F7C386AAD16A5A9744F;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// AuthenticationManager/<>c
struct U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5;
// AuthenticationManager/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD;
// AuthenticationManager/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93;
// AuthenticationManager/<Start>d__15
struct U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663;
// Google.Impl.BaseObject/OutStringMethod
struct OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// GameManager/<>c
struct U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5;
// GameManager/<Start>d__1
struct U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9;
// Google.GoogleSignIn/SignInException
struct SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A;
// OrhonBey.Utility.InternetChecker/<IntertnetController>d__2
struct U3CIntertnetControllerU3Ed__2_tDE762F2EFB8A7214780B1D4ECCE500507C513DDA;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Google.Impl.NativeFuture/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08;
// _Game.Controller.RemoteConfigController/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t92B722F9888BA8A0866D9A2A365A79DDF1888EBA;
// Firebase.RemoteConfig.RemoteConfigUtil/ConfigUpdateDelegate
struct ConfigUpdateDelegate_tD7EEFA5B2ECAEF1510EB8631A4078A5E9BD319C7;
// SampleTest/<>c
struct U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t72AC2BBF8D83C444F55D972584ADE8DF9F42F1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9BC23F1985BAB2D4C4528E624BEB56D66FA471A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleAuthProvider_t646272DD18929729FAEDA1A1F2CAD87CC5DB8D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LastFetchStatus_tB4E1A21120C7A536FBA01570333DEA73A000C9A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIntertnetControllerU3Ed__2_tDE762F2EFB8A7214780B1D4ECCE500507C513DDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t92B722F9888BA8A0866D9A2A365A79DDF1888EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral030A90BDC2949D237E808312D95E3C3FC7EF194E;
IL2CPP_EXTERN_C String_t* _stringLiteral03F5A76E7D3EE29DD40559B8AC04F5304131CF39;
IL2CPP_EXTERN_C String_t* _stringLiteral0B11FA9B8FB956FD3D9E0103B9C94936F4AA2C52;
IL2CPP_EXTERN_C String_t* _stringLiteral1711E4233414ACB1C078B9EC0B830013B9CD905B;
IL2CPP_EXTERN_C String_t* _stringLiteral204CF478AC8387BBA4B84CDFE9477B0CB8D33071;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral29FC83044E5E70D958FF8831DA38F40803BE6447;
IL2CPP_EXTERN_C String_t* _stringLiteral2B1AEE29FBAC288AB359FBE1FD7E9D7039EE986C;
IL2CPP_EXTERN_C String_t* _stringLiteral2E041CB71644ABC519EE3E6595E2439D00838528;
IL2CPP_EXTERN_C String_t* _stringLiteral349F52249E4C8D8AB5D64F7A048F8E19AF6B3180;
IL2CPP_EXTERN_C String_t* _stringLiteral3648B5804433DF67C739DC6A6EEBD633F059DD4F;
IL2CPP_EXTERN_C String_t* _stringLiteral45E7A509DBBC65D236BD3C077F664195647ECBC9;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral668E956168155A1BF58C29AEF5DCBF0107C1583F;
IL2CPP_EXTERN_C String_t* _stringLiteral674EF683D8B400F1F0F590BCCA13A350C3C1A25F;
IL2CPP_EXTERN_C String_t* _stringLiteral79098B9D29578596CA3BA3FCEDAFB6AF622D9AFD;
IL2CPP_EXTERN_C String_t* _stringLiteral7A3A118AD8C709A8FB48EEBD256D292036364137;
IL2CPP_EXTERN_C String_t* _stringLiteral85BA58034483559E0E25BDDF7C26E31883BFAB55;
IL2CPP_EXTERN_C String_t* _stringLiteral89B650612508ACDDB9A0DC2082485AC3F4F0BE31;
IL2CPP_EXTERN_C String_t* _stringLiteral9F68598AE98A5313BD184DAEF34A7037F05FC8E8;
IL2CPP_EXTERN_C String_t* _stringLiteralA86BDCBBC2FA80BCBFDC9E4CF4F7E42C893E13E3;
IL2CPP_EXTERN_C String_t* _stringLiteralAD43EC3355588F199F4B3583249329900C65773E;
IL2CPP_EXTERN_C String_t* _stringLiteralAF6F52C201014AC06A53A76080873492D1F90B0C;
IL2CPP_EXTERN_C String_t* _stringLiteralB315581250E493B92511C294D8A7CB223BEC3ECB;
IL2CPP_EXTERN_C String_t* _stringLiteralC4D88D83869C6BB3FF0599255C10138ED6518794;
IL2CPP_EXTERN_C String_t* _stringLiteralCF0480E1D7561EFF9602EDC526AD2ABD27D7C6EE;
IL2CPP_EXTERN_C String_t* _stringLiteralD400EB487C20E145E8637C4026A2356D9E546258;
IL2CPP_EXTERN_C String_t* _stringLiteralD6AEB00E2908EDBFDB9EF7E0BC9A94A5D2742E6C;
IL2CPP_EXTERN_C String_t* _stringLiteralD750B914CC651C5B635840E7E9CA1DEF82D44260;
IL2CPP_EXTERN_C String_t* _stringLiteralD96F4ECE8F390D6FD974BFA2A25CA2B3007D9E40;
IL2CPP_EXTERN_C String_t* _stringLiteralDAFAF1BA7E22CC639E69C44B0308455A786E3D91;
IL2CPP_EXTERN_C String_t* _stringLiteralDB332A448720D3906137EF8781017144CEFBB3F7;
IL2CPP_EXTERN_C String_t* _stringLiteralE24671EEB077DE2F5C7240DA0AE3AD456FD1C7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralE7308DA6A9AD1E8B5F5BD38AF235BEC86C7D663E;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mD15E9A6E04E79BE24EB4E4C2EE69BB0F6282CF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_m1DD34E5190D672FC0ADA173F14AC66B2462E9148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650_m90B7097E36D451AD65291564D57AE73A174EBED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mFD61D9A88FEC3DDB879F4E6F6A4934183707024A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046_m0A628626CD2867C0CA4354518A4504E3D8E807F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650_mF094A225CB909E768C049409BB8BBA859D15DF50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mA8D0034D04ED8960AB646ABC4C3A3D454851F495_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046_mD56FDF7B669D97020D45AEDF20F7A70BD3B9360C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4_mDCC6F031311939D31C1D86F0DB2CC9C952B9844F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67_m5A0B54432393235F665BE5091E5565E8089E964B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0_m1680CF5666B58020AFBFE0D3697836D57314756A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC_m01D9798070DEAFAA34AF8D6A80885ED4CA8B1477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC_m3A2DAB6F7DE04F0586A542F03AE3ED459E92D3B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67_m3029A26ABE314A956F58600F5A9ABA9ED25DC97C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0_mB07DC17C9F3EC64250AF21AE97B004A70F007B44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationCanvasController_SignInAnonymous_m5D1AB733C8290F87E3D575F5F5161F0B93CAE394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationCanvasController_SignInGoogle_mA39136A8E247B64E6D8E85184E7BCC45D7B76C9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationManager_OnAuthStateChanged_m57FAEA581C137B3B6C7C103F2E1711F6CC4AD1D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseManager_U3CAwakeU3Eb__11_0_m001FB5CEBE7F8452D91AD8863AAFD75D187E1E43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSignIn_set_Configuration_m0009916D90123692747FEC684C93862607011E85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PanelControlFantasyRPG_Click_Next_mD64716E54983DDD21CF5A9BC4B725E93D6C309C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PanelControlFantasyRPG_Click_Prev_m1483EC72CC6A65420B3879714252EA3F683D66C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoteConfigController_OnFetchComplete_mA92CACE44672E28538CA66B8F49ACA948077A975_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoteConfigController_OnFirebaseInitialized_m0C11A6457C0A9606253412BCE83D61DD9CFE30D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m135DC7697F48846DB67865A3EC3C390C8D039D24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m444839D780B1D3AF09A9CC71E785DCAE8DBCA41C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m5AD0B3BC1A2C173C3280C7A45684EC8415D4119A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mC9F4E3C6F27207A9DF8367CEB037E317F6139A52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m4F793460B18CBC5BDB3BE09ACB921FC450A9BC6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m583337DA21A39446D30C6D628BE4E55A7675D85E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m758B73EB33323FE7C8E2187BDF0DFA12DCDB2B78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m4EB971FF698452AEB022F44DFAEEC81E362753F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m7FA9C259934C2CF76F8F2AF6045F8B9E258475FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m884056EC0E150DD925FC8699219160C375C3F0D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m8EAC0CF6F7399BA0A01909BE1E0A54FD68812148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_m3BCD8A3933D86F155005ACEC30431C292BE070CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m07417FCCF4B1AFC798B6E6689EF51B56E50957A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtension_ContinueWithOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EFE53110BF57BDA0A8D55A9B5C280C5BC03E957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_TisTask_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_m4A5CFA40A9A0301D382852656925960E19E23B97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m549608C19B9ED5ECA2FD9094527278477B3A2E38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m8B22C71DCB0DB43BD57F17585AAB6B2A24173C75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m5ACC25F4A7BF31570CB1FE48632BAA6816BA0BB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mB7C249D2A7594DE278EC6A3405675C0E1AF09EE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m08A0DB0CF6E61747C35CAF708B06D54EBAE292AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisGoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_m69E9F2520C11A445365360C1D4F6D4DFC0663F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIntertnetControllerU3Ed__2_System_Collections_IEnumerator_Reset_mCB0099EFE715670D76D677083C7E54CFE40B20B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__15_System_Collections_IEnumerator_Reset_mC5676243966FE8985E96D92F6814167FCA4E5407_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m118AEE091A4DC2FB5E6F88A4275D961953416A4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CDeleteAccountU3Eb__20_0_m629C7F9F1B049CDCA978F702C29288BCF7FDFF3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__0_0_mCE4166078582E2A49C43EDE27EB2715A9643459C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__15_0_m3A68811BD8BD8C7BEA9F51B48D0499D359B1C3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__1_0_m1E2E7A1C8C9E2EB3A3ABDE6E243652DF72C9CCF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__1_1_m70B32588E040329D27ED6B28A5785BC3D86C23B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__1_2_m9305585DB9A855582E7FE0702640EDD973528E33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3COnFetchCompleteU3Eb__0_mF9C2BD188739273A18F70318AB14AB66E2C601E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CSignInAnonymousAsyncU3Eb__0_m636CB43DC5733B162630E03ECCABD332FA3DE971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CSignInGoogleAsyncU3Eb__0_m22FC0416877CB18ECDBD2EB3AD95FA44709D9371_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CSignInGoogleAsyncU3Eb__1_m52301F6FC790A50CCD09D71ACA7549FFA930E2C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Google.Future`1<Google.GoogleSignInUser>
struct Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B  : public RuntimeObject
{
	// Google.FutureAPIImpl`1<T> Google.Future`1::apiImpl
	RuntimeObject* ___apiImpl_0;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

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

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>
struct TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>
struct TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// Firebase.RemoteConfig.FirebaseRemoteConfig
struct FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C  : public RuntimeObject
{
	// Firebase.RemoteConfig.FirebaseRemoteConfigInternal Firebase.RemoteConfig.FirebaseRemoteConfig::remoteConfigInternal
	FirebaseRemoteConfigInternal_tD0CA5A3CDC211041D06D51595B2084329739E3C7* ___remoteConfigInternal_1;
	// Firebase.FirebaseApp Firebase.RemoteConfig.FirebaseRemoteConfig::firebaseApp
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___firebaseApp_2;
	// System.String Firebase.RemoteConfig.FirebaseRemoteConfig::instanceKey
	String_t* ___instanceKey_3;
	// System.EventHandler`1<Firebase.RemoteConfig.ConfigUpdateEventArgs> Firebase.RemoteConfig.FirebaseRemoteConfig::ConfigUpdateListenerImpl
	EventHandler_1_t7BFF5899F8127C9119FA6798BCF5EDB83CB6C08B* ___ConfigUpdateListenerImpl_5;
};

// Google.GoogleSignIn
struct GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA  : public RuntimeObject
{
	// Google.ISignInImpl Google.GoogleSignIn::impl
	RuntimeObject* ___impl_2;
};

// Google.GoogleSignInConfiguration
struct GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8  : public RuntimeObject
{
	// System.Boolean Google.GoogleSignInConfiguration::UseGameSignIn
	bool ___UseGameSignIn_0;
	// System.String Google.GoogleSignInConfiguration::WebClientId
	String_t* ___WebClientId_1;
	// System.Boolean Google.GoogleSignInConfiguration::RequestAuthCode
	bool ___RequestAuthCode_2;
	// System.Boolean Google.GoogleSignInConfiguration::ForceTokenRefresh
	bool ___ForceTokenRefresh_3;
	// System.Boolean Google.GoogleSignInConfiguration::RequestEmail
	bool ___RequestEmail_4;
	// System.Boolean Google.GoogleSignInConfiguration::RequestIdToken
	bool ___RequestIdToken_5;
	// System.Boolean Google.GoogleSignInConfiguration::RequestProfile
	bool ___RequestProfile_6;
	// System.Boolean Google.GoogleSignInConfiguration::HidePopups
	bool ___HidePopups_7;
	// System.String Google.GoogleSignInConfiguration::AccountName
	String_t* ___AccountName_8;
	// System.Collections.Generic.IEnumerable`1<System.String> Google.GoogleSignInConfiguration::AdditionalScopes
	RuntimeObject* ___AdditionalScopes_9;
};

// Google.GoogleSignInUser
struct GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA  : public RuntimeObject
{
	// System.String Google.GoogleSignInUser::<AuthCode>k__BackingField
	String_t* ___U3CAuthCodeU3Ek__BackingField_0;
	// System.String Google.GoogleSignInUser::<Email>k__BackingField
	String_t* ___U3CEmailU3Ek__BackingField_1;
	// System.String Google.GoogleSignInUser::<IdToken>k__BackingField
	String_t* ___U3CIdTokenU3Ek__BackingField_2;
	// System.String Google.GoogleSignInUser::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String Google.GoogleSignInUser::<GivenName>k__BackingField
	String_t* ___U3CGivenNameU3Ek__BackingField_4;
	// System.String Google.GoogleSignInUser::<FamilyName>k__BackingField
	String_t* ___U3CFamilyNameU3Ek__BackingField_5;
	// System.Uri Google.GoogleSignInUser::<ImageUrl>k__BackingField
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___U3CImageUrlU3Ek__BackingField_6;
	// System.String Google.GoogleSignInUser::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_7;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// AuthenticationManager/<>c
struct U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5  : public RuntimeObject
{
};

// AuthenticationManager/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD  : public RuntimeObject
{
	// System.Boolean AuthenticationManager/<>c__DisplayClass18_0::isResult
	bool ___isResult_0;
};

// AuthenticationManager/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93  : public RuntimeObject
{
	// System.String AuthenticationManager/<>c__DisplayClass19_0::idToken
	String_t* ___idToken_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> AuthenticationManager/<>c__DisplayClass19_0::signInCompleted
	TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* ___signInCompleted_1;
	// System.Boolean AuthenticationManager/<>c__DisplayClass19_0::result
	bool ___result_2;
};

// AuthenticationManager/<Start>d__15
struct U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663  : public RuntimeObject
{
	// System.Int32 AuthenticationManager/<Start>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AuthenticationManager/<Start>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// AuthenticationManager AuthenticationManager/<Start>d__15::<>4__this
	AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* ___U3CU3E4__this_2;
};

// GameManager/<>c
struct U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5  : public RuntimeObject
{
};

// GameManager/<Start>d__1
struct U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9  : public RuntimeObject
{
	// System.Int32 GameManager/<Start>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<Start>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// OrhonBey.Utility.InternetChecker/<IntertnetController>d__2
struct U3CIntertnetControllerU3Ed__2_tDE762F2EFB8A7214780B1D4ECCE500507C513DDA  : public RuntimeObject
{
	// System.Int32 OrhonBey.Utility.InternetChecker/<IntertnetController>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OrhonBey.Utility.InternetChecker/<IntertnetController>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// OrhonBey.Utility.InternetChecker OrhonBey.Utility.InternetChecker/<IntertnetController>d__2::<>4__this
	InternetChecker_tCC9585BDD70E9A643C6F2D9257A30428DB3E7758* ___U3CU3E4__this_2;
	// UnityEngine.Events.UnityAction`1<System.Boolean> OrhonBey.Utility.InternetChecker/<IntertnetController>d__2::callback
	UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___callback_3;
	// UnityEngine.Networking.UnityWebRequest OrhonBey.Utility.InternetChecker/<IntertnetController>d__2::<request>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__2_4;
};

// _Game.Controller.RemoteConfigController/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t92B722F9888BA8A0866D9A2A365A79DDF1888EBA  : public RuntimeObject
{
	// Firebase.RemoteConfig.ConfigInfo _Game.Controller.RemoteConfigController/<>c__DisplayClass10_0::info
	ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* ___info_0;
};

// SampleTest/<>c
struct U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485  : public RuntimeObject
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Google.GoogleSignInUser>
struct TaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task>
struct TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11* ___m_task_0;
};

// System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>
struct Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	AuthResult_t5BF95C4AB72884856E83E1580EFAB3355F0F9DAA* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Google.GoogleSignInUser>
struct Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_result_22;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// Firebase.RemoteConfig.ConfigValue
struct ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857 
{
	// System.Byte[] Firebase.RemoteConfig.ConfigValue::<Data>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CDataU3Ek__BackingField_2;
	// Firebase.RemoteConfig.ValueSource Firebase.RemoteConfig.ConfigValue::<Source>k__BackingField
	int32_t ___U3CSourceU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of Firebase.RemoteConfig.ConfigValue
struct ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___U3CDataU3Ek__BackingField_2;
	int32_t ___U3CSourceU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Firebase.RemoteConfig.ConfigValue
struct ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___U3CDataU3Ek__BackingField_2;
	int32_t ___U3CSourceU3Ek__BackingField_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TextureSheetAnimationModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIVertex
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3_7;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.ParticleSystem/Particle
struct Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D 
{
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_ParentRandomSeed
	uint32_t ___m_ParentRandomSeed_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_12;
	// System.Int32 UnityEngine.ParticleSystem/Particle::m_MeshIndex
	int32_t ___m_MeshIndex_13;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_14;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_15;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_Flags
	uint32_t ___m_Flags_16;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// Firebase.Auth.AuthResult
struct AuthResult_t5BF95C4AB72884856E83E1580EFAB3355F0F9DAA  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.AuthResult::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.AuthResult::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Google.Impl.BaseObject
struct BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::selfHandleRef
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___selfHandleRef_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Firebase.RemoteConfig.ConfigInfo
struct ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.RemoteConfig.ConfigInfo::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.RemoteConfig.ConfigInfo::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.DateTime Firebase.RemoteConfig.ConfigInfo::UnixEpochUtc
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpochUtc_2;
};

// Firebase.Auth.Credential
struct Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.Credential::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.Credential::swigCMemOwn
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

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// Firebase.Auth.UserInfoInterface
struct UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.UserInfoInterface::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.UserInfoInterface::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// AuthenticationCanvasController/<SignInAnonymous>d__5
struct U3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67 
{
	// System.Int32 AuthenticationCanvasController/<SignInAnonymous>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder AuthenticationCanvasController/<SignInAnonymous>d__5::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// AuthenticationCanvasController AuthenticationCanvasController/<SignInAnonymous>d__5::<>4__this
	AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> AuthenticationCanvasController/<SignInAnonymous>d__5::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_3;
};

// AuthenticationCanvasController/<SignInGoogle>d__6
struct U3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0 
{
	// System.Int32 AuthenticationCanvasController/<SignInGoogle>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder AuthenticationCanvasController/<SignInGoogle>d__6::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// AuthenticationCanvasController AuthenticationCanvasController/<SignInGoogle>d__6::<>4__this
	AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> AuthenticationCanvasController/<SignInGoogle>d__6::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_3;
};

// AuthenticationManager/<DeleteAccount>d__20
struct U3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC 
{
	// System.Int32 AuthenticationManager/<DeleteAccount>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder AuthenticationManager/<DeleteAccount>d__20::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// AuthenticationManager AuthenticationManager/<DeleteAccount>d__20::<>4__this
	AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter AuthenticationManager/<DeleteAccount>d__20::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// AuthenticationManager/<SignInAnonymousAsync>d__18
struct U3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650 
{
	// System.Int32 AuthenticationManager/<SignInAnonymousAsync>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> AuthenticationManager/<SignInAnonymousAsync>d__18::<>t__builder
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___U3CU3Et__builder_1;
	// AuthenticationManager AuthenticationManager/<SignInAnonymousAsync>d__18::<>4__this
	AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* ___U3CU3E4__this_2;
	// AuthenticationManager/<>c__DisplayClass18_0 AuthenticationManager/<SignInAnonymousAsync>d__18::<>8__1
	U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD* ___U3CU3E8__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter AuthenticationManager/<SignInAnonymousAsync>d__18::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
};

// AuthenticationManager/<SignInGoogleAsync>d__19
struct U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E 
{
	// System.Int32 AuthenticationManager/<SignInGoogleAsync>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> AuthenticationManager/<SignInGoogleAsync>d__19::<>t__builder
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___U3CU3Et__builder_1;
	// AuthenticationManager AuthenticationManager/<SignInGoogleAsync>d__19::<>4__this
	AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* ___U3CU3E4__this_2;
	// AuthenticationManager/<>c__DisplayClass19_0 AuthenticationManager/<SignInGoogleAsync>d__19::<>8__1
	U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* ___U3CU3E8__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Google.GoogleSignInUser> AuthenticationManager/<SignInGoogleAsync>d__19::<>u__1
	TaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9 ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task> AuthenticationManager/<SignInGoogleAsync>d__19::<>u__2
	TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 ___U3CU3Eu__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter AuthenticationManager/<SignInGoogleAsync>d__19::<>u__3
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__3_6;
};

// Google.GoogleSignIn/SignInException
struct SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A  : public Exception_t
{
	// Google.GoogleSignInStatusCode Google.GoogleSignIn/SignInException::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_18;
};

// OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3
struct U3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046 
{
	// System.Int32 OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3::<>t__builder
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___U3CU3Et__builder_1;
	// System.String OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3::url
	String_t* ___url_2;
	// System.Int32 OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3::timeOut
	int32_t ___timeOut_3;
	// UnityEngine.Networking.UnityWebRequest OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3::<unityWebRequest>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CunityWebRequestU3E5__2_4;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3::<request>5__3
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___U3CrequestU3E5__3_5;
	// System.Runtime.CompilerServices.TaskAwaiter OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_6;
};

// Google.Impl.NativeFuture/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Google.Impl.NativeFuture/<>c__DisplayClass5_0::userPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___userPtr_0;
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>>
struct Action_1_t72AC2BBF8D83C444F55D972584ADE8DF9F42F1E4  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Func`2<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>,System.Threading.Tasks.Task>
struct Func_2_t9BC23F1985BAB2D4C4528E624BEB56D66FA471A1  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// Firebase.Auth.FirebaseUser
struct FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A  : public UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseUser::authProxy
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___authProxy_3;
};

// Google.Impl.GoogleSignInImpl
struct GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349  : public BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Google.Impl.NativeFuture
struct NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F  : public BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// Google.Impl.BaseObject/OutStringMethod
struct OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5  : public MulticastDelegate_t
{
};

// AuthenticationManager/<>c__DisplayClass19_0/<<SignInGoogleAsync>b__0>d
struct U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4 
{
	// System.Int32 AuthenticationManager/<>c__DisplayClass19_0/<<SignInGoogleAsync>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder AuthenticationManager/<>c__DisplayClass19_0/<<SignInGoogleAsync>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> AuthenticationManager/<>c__DisplayClass19_0/<<SignInGoogleAsync>b__0>d::task
	Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* ___task_2;
	// AuthenticationManager/<>c__DisplayClass19_0 AuthenticationManager/<>c__DisplayClass19_0/<<SignInGoogleAsync>b__0>d::<>4__this
	U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* ___U3CU3E4__this_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// OrhonBey.Utility.Singleton`1<AuthenticationManager>
struct Singleton_1_tD959AAC6E60C350E78CA14611700EB448099D222  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// OrhonBey.Utility.Singleton`1<FirebaseManager>
struct Singleton_1_t2934699BF8DEC664311D1DC7E8C5F49044AAAD3B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// OrhonBey.Utility.Singleton`1<GameManager>
struct Singleton_1_tBDDF8490A29F13785F0AB8AF8B258F903924D981  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// OrhonBey.Utility.Singleton`1<_Game.Controller.RemoteConfigController>
struct Singleton_1_tA64608FFE9A349653115A38C5F6AF985D343114C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// _Game.Scripts.CanvasControllerBase
struct CanvasControllerBase_tEF2A4A21096F3E5CAF0A2667F33CC4BC69C5D51F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CanvasGroup _Game.Scripts.CanvasControllerBase::_canvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ____canvasGroup_4;
};

// OrhonBey.Utility.InternetChecker
struct InternetChecker_tCC9585BDD70E9A643C6F2D9257A30428DB3E7758  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String OrhonBey.Utility.InternetChecker::pingUrl
	String_t* ___pingUrl_4;
	// System.Int32 OrhonBey.Utility.InternetChecker::pingTimeOut
	int32_t ___pingTimeOut_5;
};

// LayerLab.FantasyRPG.PanelControlFantasyRPG
struct PanelControlFantasyRPG_t349674BAAAFE9C9EE00F3A74E494E610A2AEFD94  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LayerLab.FantasyRPG.PanelControlFantasyRPG::page
	int32_t ___page_4;
	// System.Boolean LayerLab.FantasyRPG.PanelControlFantasyRPG::isReady
	bool ___isReady_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LayerLab.FantasyRPG.PanelControlFantasyRPG::panels
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___panels_6;
	// TMPro.TextMeshProUGUI LayerLab.FantasyRPG.PanelControlFantasyRPG::textTitle
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textTitle_7;
	// UnityEngine.Transform LayerLab.FantasyRPG.PanelControlFantasyRPG::panelTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___panelTransform_8;
	// UnityEngine.UI.Button LayerLab.FantasyRPG.PanelControlFantasyRPG::buttonPrev
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonPrev_9;
	// UnityEngine.UI.Button LayerLab.FantasyRPG.PanelControlFantasyRPG::buttonNext
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonNext_10;
};

// LayerLab.FantasyRPG.PanelFantasyRPG
struct PanelFantasyRPG_t7FA31F44D0215D76665755F33903BC9C583A34C9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] LayerLab.FantasyRPG.PanelFantasyRPG::otherPanels
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___otherPanels_4;
};

// RewardedPopupController
struct RewardedPopupController_t241F047302CF06AA93D75BEE52918633932F410D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SampleTest
struct SampleTest_tF743B3F78CD8ABAE4CBBDE0A1B53FA8D0160E60B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Google.Impl.SignInHelperObject
struct SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AuthenticationCanvasController
struct AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72  : public CanvasControllerBase_tEF2A4A21096F3E5CAF0A2667F33CC4BC69C5D51F
{
	// UnityEngine.UI.Button AuthenticationCanvasController::_anonymousSingInButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____anonymousSingInButton_6;
	// UnityEngine.UI.Button AuthenticationCanvasController::_googleSingInButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____googleSingInButton_7;
};

// AuthenticationManager
struct AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725  : public Singleton_1_tD959AAC6E60C350E78CA14611700EB448099D222
{
	// System.Boolean AuthenticationManager::<IsInitialized>k__BackingField
	bool ___U3CIsInitializedU3Ek__BackingField_6;
	// System.Boolean AuthenticationManager::<IsSignedIn>k__BackingField
	bool ___U3CIsSignedInU3Ek__BackingField_7;
	// Firebase.Auth.FirebaseAuth AuthenticationManager::_auth
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ____auth_8;
	// Firebase.Auth.FirebaseUser AuthenticationManager::_user
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ____user_9;
	// Google.GoogleSignInConfiguration AuthenticationManager::_googleSignInConfiguration
	GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ____googleSignInConfiguration_10;
};

// FirebaseManager
struct FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA  : public Singleton_1_t2934699BF8DEC664311D1DC7E8C5F49044AAAD3B
{
	// Firebase.FirebaseApp FirebaseManager::<FirebaseApp>k__BackingField
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___U3CFirebaseAppU3Ek__BackingField_5;
	// System.Boolean FirebaseManager::<IsInitialized>k__BackingField
	bool ___U3CIsInitializedU3Ek__BackingField_6;
	// System.Action FirebaseManager::Initialized
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Initialized_7;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public Singleton_1_tBDDF8490A29F13785F0AB8AF8B258F903924D981
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// HomeCanvasController
struct HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC  : public CanvasControllerBase_tEF2A4A21096F3E5CAF0A2667F33CC4BC69C5D51F
{
	// UnityEngine.UI.Button HomeCanvasController::_rewardedCoinButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____rewardedCoinButton_6;
	// TMPro.TextMeshProUGUI HomeCanvasController::_rewardedCoinText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____rewardedCoinText_7;
};

// LoadingCanvasController
struct LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC  : public CanvasControllerBase_tEF2A4A21096F3E5CAF0A2667F33CC4BC69C5D51F
{
};

// _Game.Controller.RemoteConfigController
struct RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D  : public Singleton_1_tA64608FFE9A349653115A38C5F6AF985D343114C
{
	// System.Boolean _Game.Controller.RemoteConfigController::<IsInitialized>k__BackingField
	bool ___U3CIsInitializedU3Ek__BackingField_5;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem
struct UIParticleSystem_t761CD61A1155A6B806D54F7C386AAD16A5A9744F  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.Boolean UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::fixedTime
	bool ___fixedTime_37;
	// System.Boolean UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::use3dRotation
	bool ___use3dRotation_38;
	// UnityEngine.Transform UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____transform_39;
	// UnityEngine.ParticleSystem UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::pSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___pSystem_40;
	// UnityEngine.ParticleSystem/Particle[] UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::particles
	ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___particles_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::_quad
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ____quad_42;
	// UnityEngine.Vector4 UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::imageUV
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___imageUV_43;
	// UnityEngine.ParticleSystem/TextureSheetAnimationModule UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::textureSheetAnimation
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 ___textureSheetAnimation_44;
	// System.Int32 UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::textureSheetAnimationFrames
	int32_t ___textureSheetAnimationFrames_45;
	// UnityEngine.Vector2 UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::textureSheetAnimationFrameSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureSheetAnimationFrameSize_46;
	// UnityEngine.ParticleSystemRenderer UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::pRenderer
	ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* ___pRenderer_47;
	// System.Boolean UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::isInitialised
	bool ___isInitialised_48;
	// UnityEngine.Material UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_49;
	// UnityEngine.Texture UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::currentTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___currentTexture_50;
	// UnityEngine.ParticleSystem/MainModule UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::mainModule
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ___mainModule_51;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// Google.Future`1<Google.GoogleSignInUser>

// Google.Future`1<Google.GoogleSignInUser>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

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

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>

// System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>

// System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// Firebase.RemoteConfig.FirebaseRemoteConfig
struct FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.RemoteConfig.FirebaseRemoteConfig> Firebase.RemoteConfig.FirebaseRemoteConfig::remoteConfigByInstanceKey
	Dictionary_2_tBBB166A980B2A51C109F02C7D497C158597FBAF7* ___remoteConfigByInstanceKey_0;
	// Firebase.RemoteConfig.RemoteConfigUtil/ConfigUpdateDelegate Firebase.RemoteConfig.FirebaseRemoteConfig::configUpdateDelegate
	ConfigUpdateDelegate_tD7EEFA5B2ECAEF1510EB8631A4078A5E9BD319C7* ___configUpdateDelegate_4;
};

// Firebase.RemoteConfig.FirebaseRemoteConfig

// Google.GoogleSignIn
struct GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields
{
	// Google.GoogleSignIn Google.GoogleSignIn::theInstance
	GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* ___theInstance_0;
	// Google.GoogleSignInConfiguration Google.GoogleSignIn::theConfiguration
	GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___theConfiguration_1;
};

// Google.GoogleSignIn

// Google.GoogleSignInConfiguration

// Google.GoogleSignInConfiguration

// Google.GoogleSignInUser

// Google.GoogleSignInUser

// System.Runtime.Serialization.SerializationInfo

// System.Runtime.Serialization.SerializationInfo

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

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

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

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// AuthenticationManager/<>c
struct U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_StaticFields
{
	// AuthenticationManager/<>c AuthenticationManager/<>c::<>9
	U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5* ___U3CU3E9_0;
	// System.Func`1<System.Boolean> AuthenticationManager/<>c::<>9__15_0
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3E9__15_0_1;
	// System.Action`1<System.Threading.Tasks.Task> AuthenticationManager/<>c::<>9__20_0
	Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* ___U3CU3E9__20_0_2;
};

// AuthenticationManager/<>c

// AuthenticationManager/<>c__DisplayClass18_0

// AuthenticationManager/<>c__DisplayClass18_0

// AuthenticationManager/<>c__DisplayClass19_0

// AuthenticationManager/<>c__DisplayClass19_0

// AuthenticationManager/<Start>d__15

// AuthenticationManager/<Start>d__15

// GameManager/<>c
struct U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields
{
	// GameManager/<>c GameManager/<>c::<>9
	U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* ___U3CU3E9_0;
	// System.Func`1<System.Boolean> GameManager/<>c::<>9__1_0
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3E9__1_0_1;
	// System.Func`1<System.Boolean> GameManager/<>c::<>9__1_1
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3E9__1_1_2;
	// System.Func`1<System.Boolean> GameManager/<>c::<>9__1_2
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3E9__1_2_3;
};

// GameManager/<>c

// GameManager/<Start>d__1

// GameManager/<Start>d__1

// OrhonBey.Utility.InternetChecker/<IntertnetController>d__2

// OrhonBey.Utility.InternetChecker/<IntertnetController>d__2

// _Game.Controller.RemoteConfigController/<>c__DisplayClass10_0

// _Game.Controller.RemoteConfigController/<>c__DisplayClass10_0

// SampleTest/<>c
struct U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_StaticFields
{
	// SampleTest/<>c SampleTest/<>c::<>9
	U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485* ___U3CU3E9_0;
	// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> SampleTest/<>c::<>9__0_0
	Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC* ___U3CU3E9__0_0_1;
};

// SampleTest/<>c

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>

// System.Runtime.CompilerServices.TaskAwaiter`1<Google.GoogleSignInUser>

// System.Runtime.CompilerServices.TaskAwaiter`1<Google.GoogleSignInUser>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task>

// System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>

// System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>

// System.Threading.Tasks.Task`1<System.Boolean>

// System.Threading.Tasks.Task`1<System.Boolean>

// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>

// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>

// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>

// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>

// System.Threading.Tasks.Task`1<Google.GoogleSignInUser>

// System.Threading.Tasks.Task`1<Google.GoogleSignInUser>

// System.Threading.Tasks.Task`1<System.Object>

// System.Threading.Tasks.Task`1<System.Object>

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// System.Runtime.CompilerServices.AsyncMethodBuilderCore

// System.Runtime.CompilerServices.AsyncMethodBuilderCore

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// Firebase.RemoteConfig.ConfigValue
struct ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857_StaticFields
{
	// System.Text.RegularExpressions.Regex Firebase.RemoteConfig.ConfigValue::booleanTruePattern
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___booleanTruePattern_0;
	// System.Text.RegularExpressions.Regex Firebase.RemoteConfig.ConfigValue::booleanFalsePattern
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___booleanFalsePattern_1;
};

// Firebase.RemoteConfig.ConfigValue

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// TMPro.MaterialReference

// TMPro.MaterialReference

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// System.Runtime.Serialization.StreamingContext

// System.Runtime.Serialization.StreamingContext

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.UInt32

// System.UInt32

// System.UIntPtr
struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// System.UIntPtr

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitUntil

// UnityEngine.WaitUntil

// UnityEngine.ParticleSystem/MainModule

// UnityEngine.ParticleSystem/MainModule

// UnityEngine.ParticleSystem/MinMaxCurve

// UnityEngine.ParticleSystem/MinMaxCurve

// UnityEngine.ParticleSystem/TextureSheetAnimationModule

// UnityEngine.ParticleSystem/TextureSheetAnimationModule

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// UnityEngine.Networking.CertificateHandler

// UnityEngine.Networking.CertificateHandler

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// System.Runtime.InteropServices.HandleRef

// System.Runtime.InteropServices.HandleRef

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// UnityEngine.UIVertex
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert_10;
};

// UnityEngine.UIVertex

// UnityEngine.Networking.UploadHandler

// UnityEngine.Networking.UploadHandler

// TMPro.VertexGradient

// TMPro.VertexGradient

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_10;
};

// UnityEngine.UI.VertexHelper

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.ParticleSystem/Particle

// UnityEngine.ParticleSystem/Particle

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// System.AggregateException

// System.AggregateException

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// Firebase.Auth.AuthResult

// Firebase.Auth.AuthResult

// Google.Impl.BaseObject
struct BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_StaticFields
{
	// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::nullSelf
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___nullSelf_1;
};

// Google.Impl.BaseObject

// UnityEngine.Component

// UnityEngine.Component

// Firebase.RemoteConfig.ConfigInfo

// Firebase.RemoteConfig.ConfigInfo

// Firebase.Auth.Credential

// Firebase.Auth.Credential

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

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.Shader

// UnityEngine.Shader

// System.SystemException

// System.SystemException

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// Firebase.Auth.UserInfoInterface

// Firebase.Auth.UserInfoInterface

// AuthenticationCanvasController/<SignInAnonymous>d__5

// AuthenticationCanvasController/<SignInAnonymous>d__5

// AuthenticationCanvasController/<SignInGoogle>d__6

// AuthenticationCanvasController/<SignInGoogle>d__6

// AuthenticationManager/<DeleteAccount>d__20

// AuthenticationManager/<DeleteAccount>d__20

// AuthenticationManager/<SignInAnonymousAsync>d__18

// AuthenticationManager/<SignInAnonymousAsync>d__18

// AuthenticationManager/<SignInGoogleAsync>d__19

// AuthenticationManager/<SignInGoogleAsync>d__19

// Google.GoogleSignIn/SignInException

// Google.GoogleSignIn/SignInException

// OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3

// OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3

// Google.Impl.NativeFuture/<>c__DisplayClass5_0

// Google.Impl.NativeFuture/<>c__DisplayClass5_0

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>>

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>>

// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>

// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>

// System.Action`1<System.Threading.Tasks.Task>

// System.Action`1<System.Threading.Tasks.Task>

// System.Func`1<System.Boolean>

// System.Func`1<System.Boolean>

// System.Func`2<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>,System.Threading.Tasks.Task>

// System.Func`2<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>,System.Threading.Tasks.Task>

// UnityEngine.Events.UnityAction`1<System.Boolean>

// UnityEngine.Events.UnityAction`1<System.Boolean>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.EventHandler

// System.EventHandler

// Firebase.Auth.FirebaseUser

// Firebase.Auth.FirebaseUser

// Google.Impl.GoogleSignInImpl

// Google.Impl.GoogleSignInImpl

// System.InvalidOperationException

// System.InvalidOperationException

// Google.Impl.NativeFuture

// Google.Impl.NativeFuture

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// TMPro.WordWrapState

// TMPro.WordWrapState

// Google.Impl.BaseObject/OutStringMethod

// Google.Impl.BaseObject/OutStringMethod

// AuthenticationManager/<>c__DisplayClass19_0/<<SignInGoogleAsync>b__0>d

// AuthenticationManager/<>c__DisplayClass19_0/<<SignInGoogleAsync>b__0>d

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.CanvasGroup

// UnityEngine.CanvasGroup

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.ParticleSystemRenderer

// UnityEngine.ParticleSystemRenderer

// OrhonBey.Utility.Singleton`1<AuthenticationManager>
struct Singleton_1_tD959AAC6E60C350E78CA14611700EB448099D222_StaticFields
{
	// T OrhonBey.Utility.Singleton`1::_instance
	AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* ____instance_4;
};

// OrhonBey.Utility.Singleton`1<AuthenticationManager>

// OrhonBey.Utility.Singleton`1<FirebaseManager>
struct Singleton_1_t2934699BF8DEC664311D1DC7E8C5F49044AAAD3B_StaticFields
{
	// T OrhonBey.Utility.Singleton`1::_instance
	FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* ____instance_4;
};

// OrhonBey.Utility.Singleton`1<FirebaseManager>

// OrhonBey.Utility.Singleton`1<GameManager>
struct Singleton_1_tBDDF8490A29F13785F0AB8AF8B258F903924D981_StaticFields
{
	// T OrhonBey.Utility.Singleton`1::_instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ____instance_4;
};

// OrhonBey.Utility.Singleton`1<GameManager>

// OrhonBey.Utility.Singleton`1<_Game.Controller.RemoteConfigController>
struct Singleton_1_tA64608FFE9A349653115A38C5F6AF985D343114C_StaticFields
{
	// T OrhonBey.Utility.Singleton`1::_instance
	RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* ____instance_4;
};

// OrhonBey.Utility.Singleton`1<_Game.Controller.RemoteConfigController>

// _Game.Scripts.CanvasControllerBase

// _Game.Scripts.CanvasControllerBase

// OrhonBey.Utility.InternetChecker

// OrhonBey.Utility.InternetChecker

// LayerLab.FantasyRPG.PanelControlFantasyRPG

// LayerLab.FantasyRPG.PanelControlFantasyRPG

// LayerLab.FantasyRPG.PanelFantasyRPG

// LayerLab.FantasyRPG.PanelFantasyRPG

// RewardedPopupController

// RewardedPopupController

// SampleTest

// SampleTest

// Google.Impl.SignInHelperObject
struct SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields
{
	// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::instance
	SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* ___instance_4;
};

// Google.Impl.SignInHelperObject

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// AuthenticationCanvasController
struct AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72_StaticFields
{
	// AuthenticationCanvasController AuthenticationCanvasController::Instance
	AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* ___Instance_5;
};

// AuthenticationCanvasController

// AuthenticationManager

// AuthenticationManager

// FirebaseManager

// FirebaseManager

// GameManager

// GameManager

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// HomeCanvasController
struct HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_StaticFields
{
	// HomeCanvasController HomeCanvasController::Instance
	HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC* ___Instance_5;
};

// HomeCanvasController

// LoadingCanvasController
struct LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC_StaticFields
{
	// LoadingCanvasController LoadingCanvasController::Instance
	LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC* ___Instance_5;
};

// LoadingCanvasController

// _Game.Controller.RemoteConfigController

// _Game.Controller.RemoteConfigController

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem

// UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7  : public RuntimeArray
{
	ALIGN_FIELD (8) Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D m_Items[1];

	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F  : public RuntimeArray
{
	ALIGN_FIELD (8) UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 m_Items[1];

	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
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


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32Enum>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m80CB64874F84DB8EBDB9F3F28F5B6710670B1571_gshared (Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* __this, Action_1_tC3BD22662CBF7BCA7CF101E25DD9C3BC0C8058B4* ___0_continuationAction, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Int32Enum>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_1_get_Result_mF8B724FC6FD57DF2078A1F8927214003AAAC6286_gshared (Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<AuthenticationManager/<SignInAnonymousAsync>d__18>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650_mF094A225CB909E768C049409BB8BBA859D15DF50_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<AuthenticationManager/<SignInGoogleAsync>d__19>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mA8D0034D04ED8960AB646ABC4C3A3D454851F495_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<AuthenticationManager/<DeleteAccount>d__20>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC_m3A2DAB6F7DE04F0586A542F03AE3ED459E92D3B8_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void OrhonBey.Utility.Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_m06DDB187BA6DAC7D34981906B8953285C23CC6A4_gshared (Singleton_1_t8352515DC2CCEA7E470D7C75A7C541B726970B05* __this, const RuntimeMethod* method) ;
// T OrhonBey.Utility.Singleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_mB5B07971A1C1683BCC2C25097BBE736EA34FD701_gshared (const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678* ___0_continuationAction, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,AuthenticationManager/<SignInAnonymousAsync>d__18>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650_m90B7097E36D451AD65291564D57AE73A174EBED7_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<AuthenticationManager/<>c__DisplayClass19_0/<<SignInGoogleAsync>b__0>d>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4_mDCC6F031311939D31C1D86F0DB2CC9C952B9844F_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_mA69C039F3F3D08D1CCD6ADE3E9693B6157038ABB_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,AuthenticationManager/<SignInGoogleAsync>d__19>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_m9F82C20D5B64D6FB6143A5615A2B8C35494B7E2B_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Object>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromResult_TisRuntimeObject_m3CB407E4DC5135B06ECAFC88B9C4F06612E4B521_gshared (RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Object>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_1_ContinueWith_TisRuntimeObject_mBAE10B98BE3AB4220C36C1DA465B07919FD7F3DF_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, Func_2_t374ECF90050F953CFA1EB9E9CE02A9C76AC292B2* ___0_continuationFunction, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,AuthenticationManager/<SignInGoogleAsync>d__19>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mFD61D9A88FEC3DDB879F4E6F6A4934183707024A_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,AuthenticationManager/<DeleteAccount>d__20>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC_m01D9798070DEAFAA34AF8D6A80885ED4CA8B1477_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<AuthenticationCanvasController/<SignInAnonymous>d__5>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67_m3029A26ABE314A956F58600F5A9ABA9ED25DC97C_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<AuthenticationCanvasController/<SignInGoogle>d__6>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0_mB07DC17C9F3EC64250AF21AE97B004A70F007B44_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,AuthenticationCanvasController/<SignInAnonymous>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67_m5A0B54432393235F665BE5091E5565E8089E964B_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___0_awaiter, U3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,AuthenticationCanvasController/<SignInGoogle>d__6>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0_m1680CF5666B58020AFBFE0D3697836D57314756A_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___0_awaiter, U3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0* ___1_stateMachine, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<System.Boolean>(System.Threading.Tasks.Task`1<T>,System.Action`1<System.Threading.Tasks.Task`1<T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EFE53110BF57BDA0A8D55A9B5C280C5BC03E957_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___0_task, Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* ___1_continuation, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046_mD56FDF7B669D97020D45AEDF20F7A70BD3B9360C_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_mDDD7C50AEB02B2E86BCA82D46A0B32C9B8A6965B_gshared_inline (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, bool ___0_arg0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046_m0A628626CD2867C0CA4354518A4504E3D8E807F2_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046* ___1_stateMachine, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.Future`1<System.Object>::WaitForResult(System.Threading.Tasks.TaskCompletionSource`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Future_1_WaitForResult_m86C7BBC0D729D1190E2DE445649A1A7280004193_gshared (Future_1_tA71DD05DCEB77C6104765DDB3DA5A4E3484933CF* __this, TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___0_tcs, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void Google.Future`1<System.Object>::.ctor(Google.FutureAPIImpl`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_1__ctor_mFAB04EC0EED034736749BA83776F629ED33AA046_gshared (Future_1_tA71DD05DCEB77C6104765DDB3DA5A4E3484933CF* __this, RuntimeObject* ___0_impl, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus> Firebase.FirebaseApp::CheckAndFixDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* FirebaseApp_CheckAndFixDependenciesAsync_mB21D0BA4D3C2F6C975D72DB0F2CEFF46A4361557 (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4F6B8318AD92B94ABD9C753FFD7CEE0687417DAC (Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.DependencyStatus>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD (Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* __this, Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC* ___0_continuationAction, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF*, Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC*, const RuntimeMethod*))Task_1_ContinueWith_m80CB64874F84DB8EBDB9F3F28F5B6710670B1571_gshared)(__this, ___0_continuationAction, method);
}
// System.Void SampleTest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m98600DCE65A786AD958AD8D62ECA7A1FEAA5CCE7 (U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Firebase.DependencyStatus>::get_Result()
inline int32_t Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA (Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF*, const RuntimeMethod*))Task_1_get_Result_mF8B724FC6FD57DF2078A1F8927214003AAAC6286_gshared)(__this, method);
}
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInConfiguration__ctor_m99891370EEB5D39D4F4492E576B1CB5665532589 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* __this, const RuntimeMethod* method) ;
// System.String AuthenticationManager::get_GoogleWebClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationManager_get_GoogleWebClientId_mB47AF0AF85CDCC55ACC3DD52B3E77E15023C6D0A (const RuntimeMethod* method) ;
// System.Void AuthenticationManager/<Start>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__15__ctor_mD1E15C67B9DB523607BD3E81EFAA3219A79DBFDA (U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* FirebaseAuth_get_DefaultInstance_m86A4E32D8DCDB80079317B58210090F3D3B1711F (const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth::add_StateChanged(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_add_StateChanged_mE4C60B716655FED5F73CED836CBCD6A10578F680 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) ;
// System.Void AuthenticationManager::set_IsInitialized(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationManager_set_IsInitialized_mB3F9B5565F34680D20BF51161CC32DD697A92BAE_inline (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, bool ___0_value, const RuntimeMethod* method) ;
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) ;
// System.Boolean Firebase.Auth.FirebaseUser::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseUser_IsValid_m745FA6B0AF38AF4988B188E019F0621C27DED2DA (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, const RuntimeMethod* method) ;
// System.String Firebase.Auth.FirebaseUser::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0 (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void AuthenticationManager::set_IsSignedIn(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationManager_set_IsSignedIn_m3C696CA8E4E386C66811246A406BC21D62A50B91_inline (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<AuthenticationManager/<SignInAnonymousAsync>d__18>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650_mF094A225CB909E768C049409BB8BBA859D15DF50 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, U3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650_mF094A225CB909E768C049409BB8BBA859D15DF50_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<AuthenticationManager/<SignInGoogleAsync>d__19>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mA8D0034D04ED8960AB646ABC4C3A3D454851F495 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mA8D0034D04ED8960AB646ABC4C3A3D454851F495_gshared)(__this, ___0_stateMachine, method);
}
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<AuthenticationManager/<DeleteAccount>d__20>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC_m3A2DAB6F7DE04F0586A542F03AE3ED459E92D3B8 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC_m3A2DAB6F7DE04F0586A542F03AE3ED459E92D3B8_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Firebase.Auth.FirebaseAuth::remove_StateChanged(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_remove_StateChanged_mEF74B416A0977697BA5F4BB18A654AB4030516D1 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) ;
// System.Void OrhonBey.Utility.Singleton`1<AuthenticationManager>::.ctor()
inline void Singleton_1__ctor_m135DC7697F48846DB67865A3EC3C390C8D039D24 (Singleton_1_tD959AAC6E60C350E78CA14611700EB448099D222* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tD959AAC6E60C350E78CA14611700EB448099D222*, const RuntimeMethod*))Singleton_1__ctor_m06DDB187BA6DAC7D34981906B8953285C23CC6A4_gshared)(__this, method);
}
// System.Void AuthenticationManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m103F3BCBD48183D25C4903E7B8CF342DA8505087 (U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5* __this, const RuntimeMethod* method) ;
// T OrhonBey.Utility.Singleton`1<FirebaseManager>::get_Instance()
inline FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* Singleton_1_get_Instance_m583337DA21A39446D30C6D628BE4E55A7675D85E (const RuntimeMethod* method)
{
	return ((  FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* (*) (const RuntimeMethod*))Singleton_1_get_Instance_mB5B07971A1C1683BCC2C25097BBE736EA34FD701_gshared)(method);
}
// System.Boolean FirebaseManager::get_IsInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FirebaseManager_get_IsInitialized_mDED0DDF70FAF39EEAF4E52AE1684993233172CA4_inline (FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_predicate, const RuntimeMethod* method) ;
// System.Void AuthenticationManager::InitializeFirebase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_InitializeFirebase_mF50AEB583E70CB9A0D055FC180DEACFD83EBA062 (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>::get_Result()
inline AuthResult_t5BF95C4AB72884856E83E1580EFAB3355F0F9DAA* Task_1_get_Result_m08A0DB0CF6E61747C35CAF708B06D54EBAE292AA (Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* __this, const RuntimeMethod* method)
{
	return ((  AuthResult_t5BF95C4AB72884856E83E1580EFAB3355F0F9DAA* (*) (Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// Firebase.Auth.FirebaseUser Firebase.Auth.AuthResult::get_User()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* AuthResult_get_User_mFA7304735A605A3EC6BE192FE7984F9BAA9C2736 (AuthResult_t5BF95C4AB72884856E83E1580EFAB3355F0F9DAA* __this, const RuntimeMethod* method) ;
// System.Void AuthenticationManager/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mD73049EF260E3359976255ABB6960C2D1D129EA2 (U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult> Firebase.Auth.FirebaseAuth::SignInAnonymouslyAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* FirebaseAuth_SignInAnonymouslyAsync_m4E35071B19D8D9284C40DDA2A855C8F2F079C7AD (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m52423E9C9AEAF0BFB18D2247E6A8F2D2896B5C65 (Action_1_t72AC2BBF8D83C444F55D972584ADE8DF9F42F1E4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t72AC2BBF8D83C444F55D972584ADE8DF9F42F1E4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m8B22C71DCB0DB43BD57F17585AAB6B2A24173C75 (Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* __this, Action_1_t72AC2BBF8D83C444F55D972584ADE8DF9F42F1E4* ___0_continuationAction, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5*, Action_1_t72AC2BBF8D83C444F55D972584ADE8DF9F42F1E4*, const RuntimeMethod*))Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared)(__this, ___0_continuationAction, method);
}
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,AuthenticationManager/<SignInAnonymousAsync>d__18>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650_m90B7097E36D451AD65291564D57AE73A174EBED7 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650_m90B7097E36D451AD65291564D57AE73A174EBED7_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared)(__this, ___0_result, method);
}
// System.Void AuthenticationManager/<SignInAnonymousAsync>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInAnonymousAsyncU3Ed__18_MoveNext_mF4E053160AC915EF28FFC4942F269BD57012C728 (U3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared)(__this, ___0_stateMachine, method);
}
// System.Void AuthenticationManager/<SignInAnonymousAsync>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInAnonymousAsyncU3Ed__18_SetStateMachine_mC9A0F2A63208C7B80D8C1F993909A1FDDB594C71 (U3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<AuthenticationManager/<>c__DisplayClass19_0/<<SignInGoogleAsync>b__0>d>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4_mDCC6F031311939D31C1D86F0DB2CC9C952B9844F (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4_mDCC6F031311939D31C1D86F0DB2CC9C952B9844F_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_m3BCD8A3933D86F155005ACEC30431C292BE070CC (TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7*, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_mA69C039F3F3D08D1CCD6ADE3E9693B6157038ABB_gshared)(__this, method);
}
// TResult System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::get_Result()
inline FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* __this, const RuntimeMethod* method)
{
	return ((  FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* (*) (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// TResult System.Threading.Tasks.Task`1<Google.GoogleSignInUser>::get_Result()
inline GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* __this, const RuntimeMethod* method)
{
	return ((  GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* (*) (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.String Google.GoogleSignInUser::get_IdToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_IdToken_m58382F225E3065502A66AFA23F70053153DEA62A_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void AuthenticationManager/<>c__DisplayClass19_0/<<SignInGoogleAsync>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_MoveNext_m5494A48BC23E145A09A1EC36B39562A51F24BC4F (U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void AuthenticationManager/<>c__DisplayClass19_0/<<SignInGoogleAsync>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_SetStateMachine_m474581766500A4C7FAB35E19CAD53B7CA02C7C34 (U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void AuthenticationManager/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m95CE0C0C7CF43859FEA9B21ED4A7E735D23438EB (U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn::set_Configuration(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_set_Configuration_m0009916D90123692747FEC684C93862607011E85 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___0_value, const RuntimeMethod* method) ;
// Google.GoogleSignIn Google.GoogleSignIn::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* GoogleSignIn_get_DefaultInstance_m3A7F48D5EB49BD41DF945D9A54E93BA1C5D382D8 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* GoogleSignIn_SignIn_mAAA8FC28D91B6CBAB324F888FE951EB9EA64E64D (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Google.GoogleSignInUser>::GetAwaiter()
inline TaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9 Task_1_GetAwaiter_m5ACC25F4A7BF31570CB1FE48632BAA6816BA0BB1 (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9 (*) (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Google.GoogleSignInUser>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m884056EC0E150DD925FC8699219160C375C3F0D3 (TaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Google.GoogleSignInUser>,AuthenticationManager/<SignInGoogleAsync>d__19>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_m1DD34E5190D672FC0ADA173F14AC66B2462E9148 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9* ___0_awaiter, U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9*, U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_m9F82C20D5B64D6FB6143A5615A2B8C35494B7E2B_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Google.GoogleSignInUser>::GetResult()
inline GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* TaskAwaiter_1_GetResult_m4EB971FF698452AEB022F44DFAEEC81E362753F2 (TaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9* __this, const RuntimeMethod* method)
{
	return ((  GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* (*) (TaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<Google.GoogleSignInUser>(TResult)
inline Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* Task_FromResult_TisGoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_m69E9F2520C11A445365360C1D4F6D4DFC0663F06 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* (*) (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA*, const RuntimeMethod*))Task_FromResult_TisRuntimeObject_m3CB407E4DC5135B06ECAFC88B9C4F06612E4B521_gshared)(___0_result, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::.ctor()
inline void TaskCompletionSource_1__ctor_m07417FCCF4B1AFC798B6E6689EF51B56E50957A9 (TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// System.Void System.Func`2<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>,System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD72B6952A3DCB08783D964D60885F2D2F9E282DF (Func_2_t9BC23F1985BAB2D4C4528E624BEB56D66FA471A1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9BC23F1985BAB2D4C4528E624BEB56D66FA471A1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<Google.GoogleSignInUser>::ContinueWith<System.Threading.Tasks.Task>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>)
inline Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11* Task_1_ContinueWith_TisTask_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_m4A5CFA40A9A0301D382852656925960E19E23B97 (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* __this, Func_2_t9BC23F1985BAB2D4C4528E624BEB56D66FA471A1* ___0_continuationFunction, const RuntimeMethod* method)
{
	return ((  Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11* (*) (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926*, Func_2_t9BC23F1985BAB2D4C4528E624BEB56D66FA471A1*, const RuntimeMethod*))Task_1_ContinueWith_TisRuntimeObject_mBAE10B98BE3AB4220C36C1DA465B07919FD7F3DF_gshared)(__this, ___0_continuationFunction, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::GetAwaiter()
inline TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 Task_1_GetAwaiter_mB7C249D2A7594DE278EC6A3405675C0E1AF09EE3 (Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 (*) (Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m8EAC0CF6F7399BA0A01909BE1E0A54FD68812148 (TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task>,AuthenticationManager/<SignInGoogleAsync>d__19>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mD15E9A6E04E79BE24EB4E4C2EE69BB0F6282CF40 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7* ___0_awaiter, U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7*, U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_m9F82C20D5B64D6FB6143A5615A2B8C35494B7E2B_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task>::GetResult()
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskAwaiter_1_GetResult_m7FA9C259934C2CF76F8F2AF6045F8B9E258475FC (TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7* __this, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// Firebase.Auth.Credential Firebase.Auth.GoogleAuthProvider::GetCredential(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* GoogleAuthProvider_GetCredential_m908C6090ED39CA7687DF6DC7878728729D137827 (String_t* ___0_idToken, String_t* ___1_accessToken, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithCredentialAsync(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* FirebaseAuth_SignInWithCredentialAsync_m113AA2F02FEE5A28A9D49492AC5F33AA54A55D74 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* ___0_credential, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA1A3987C0999C379F2DE5C4FC11270A1C6B91007 (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m549608C19B9ED5ECA2FD9094527278477B3A2E38 (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* __this, Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* ___0_continuationAction, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B*, Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*, const RuntimeMethod*))Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared)(__this, ___0_continuationAction, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,AuthenticationManager/<SignInGoogleAsync>d__19>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mFD61D9A88FEC3DDB879F4E6F6A4934183707024A (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mFD61D9A88FEC3DDB879F4E6F6A4934183707024A_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void AuthenticationManager/<SignInGoogleAsync>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInGoogleAsyncU3Ed__19_MoveNext_m5DC70A1F89F5B122175BADA2F546E8435B396649 (U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E* __this, const RuntimeMethod* method) ;
// System.Void AuthenticationManager/<SignInGoogleAsync>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInGoogleAsyncU3Ed__19_SetStateMachine_mA7C8489A8E82B6A3D6716527AC209BC303BA65E3 (U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Auth.FirebaseUser::DeleteAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseUser_DeleteAsync_m4512D85F24C18939977A84505D6735DC6E91BE50 (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0 (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_ContinueWith_m4150CBD0F7AC870F40F5E8D84E265B47A642C06C (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* ___0_continuationAction, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,AuthenticationManager/<DeleteAccount>d__20>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC_m01D9798070DEAFAA34AF8D6A80885ED4CA8B1477 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC_m01D9798070DEAFAA34AF8D6A80885ED4CA8B1477_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void AuthenticationManager/<DeleteAccount>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteAccountU3Ed__20_MoveNext_mF03E4D2C33D0303D74B09E4E9008E7B3A330CC79 (U3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void AuthenticationManager/<DeleteAccount>d__20::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteAccountU3Ed__20_SetStateMachine_m1B3D1E12FD27F122D24CDDBE16E4C9654746B8A1 (U3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void _Game.Scripts.CanvasControllerBase::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerBase_Awake_m2915FCE9A958615749588310A2DE96806A6BA726 (CanvasControllerBase_tEF2A4A21096F3E5CAF0A2667F33CC4BC69C5D51F* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<AuthenticationCanvasController/<SignInAnonymous>d__5>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67_m3029A26ABE314A956F58600F5A9ABA9ED25DC97C (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67_m3029A26ABE314A956F58600F5A9ABA9ED25DC97C_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<AuthenticationCanvasController/<SignInGoogle>d__6>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0_mB07DC17C9F3EC64250AF21AE97B004A70F007B44 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0_mB07DC17C9F3EC64250AF21AE97B004A70F007B44_gshared)(__this, ___0_stateMachine, method);
}
// System.Void _Game.Scripts.CanvasControllerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerBase__ctor_m04404B06236AC8147CA3CC25F01C72767E6D03F2 (CanvasControllerBase_tEF2A4A21096F3E5CAF0A2667F33CC4BC69C5D51F* __this, const RuntimeMethod* method) ;
// T OrhonBey.Utility.Singleton`1<AuthenticationManager>::get_Instance()
inline AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* Singleton_1_get_Instance_m758B73EB33323FE7C8E2187BDF0DFA12DCDB2B78 (const RuntimeMethod* method)
{
	return ((  AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* (*) (const RuntimeMethod*))Singleton_1_get_Instance_mB5B07971A1C1683BCC2C25097BBE736EA34FD701_gshared)(method);
}
// System.Threading.Tasks.Task`1<System.Boolean> AuthenticationManager::SignInAnonymousAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AuthenticationManager_SignInAnonymousAsync_mD207360244BE3FD845CF4A8CA44241453F429873 (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
inline TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, const RuntimeMethod*))Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9 (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,AuthenticationCanvasController/<SignInAnonymous>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67_m5A0B54432393235F665BE5091E5565E8089E964B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___0_awaiter, U3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67_m5A0B54432393235F665BE5091E5565E8089E964B_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared)(__this, method);
}
// System.Void AuthenticationCanvasController/<SignInAnonymous>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInAnonymousU3Ed__5_MoveNext_m1D4AE33A3D759AFD6FA98E6BDC0017BBE0E45DA3 (U3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67* __this, const RuntimeMethod* method) ;
// System.Void AuthenticationCanvasController/<SignInAnonymous>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInAnonymousU3Ed__5_SetStateMachine_mC404B55D0ED0C78FC02C2C767024B770DBF3B7AB (U3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Boolean> AuthenticationManager::SignInGoogleAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AuthenticationManager_SignInGoogleAsync_m40226538845DB6D6215E31DAAA635BCDFD7B7A50 (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,AuthenticationCanvasController/<SignInGoogle>d__6>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0_m1680CF5666B58020AFBFE0D3697836D57314756A (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___0_awaiter, U3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0_m1680CF5666B58020AFBFE0D3697836D57314756A_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void AuthenticationCanvasController/<SignInGoogle>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInGoogleU3Ed__6_MoveNext_m6AEAD3ED6521532C3ECDC2D53A992F26C22F993E (U3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0* __this, const RuntimeMethod* method) ;
// System.Void AuthenticationCanvasController/<SignInGoogle>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInGoogleU3Ed__6_SetStateMachine_m8567F0B2CEBCBC04ECA54A48BE1F560E73771805 (U3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void OrhonBey.Utility.Singleton`1<FirebaseManager>::.ctor()
inline void Singleton_1__ctor_m5AD0B3BC1A2C173C3280C7A45684EC8415D4119A (Singleton_1_t2934699BF8DEC664311D1DC7E8C5F49044AAAD3B* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t2934699BF8DEC664311D1DC7E8C5F49044AAAD3B*, const RuntimeMethod*))Singleton_1__ctor_m06DDB187BA6DAC7D34981906B8953285C23CC6A4_gshared)(__this, method);
}
// System.Void FirebaseManager::set_FirebaseApp(Firebase.FirebaseApp)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseManager_set_FirebaseApp_m20062A2FD556B158CA3CDB83379FFBD5144AE97E_inline (FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* __this, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void FirebaseManager::set_IsInitialized(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseManager_set_IsInitialized_m28D7E8A3F852CB451A4FBCBD46A72481362AEA16_inline (FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void _Game.Scripts.CanvasControllerBase::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerBase_Show_mB4421B356CF35B493F28010B47FD585A5F8481B9 (CanvasControllerBase_tEF2A4A21096F3E5CAF0A2667F33CC4BC69C5D51F* __this, const RuntimeMethod* method) ;
// Firebase.RemoteConfig.FirebaseRemoteConfig Firebase.RemoteConfig.FirebaseRemoteConfig::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* FirebaseRemoteConfig_get_DefaultInstance_mE7F726BCB1E35F348E25ABB83ACDAFA1A4AD495C (const RuntimeMethod* method) ;
// System.String _Game.Controller.RemoteConfigController::get_RewardedCoinKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoteConfigController_get_RewardedCoinKey_m5FF4EDFB4CE3029EFDFC8008CDC0BBEDFC8288B9 (const RuntimeMethod* method) ;
// Firebase.RemoteConfig.ConfigValue Firebase.RemoteConfig.FirebaseRemoteConfig::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857 FirebaseRemoteConfig_GetValue_m3FDC4B8924F68E22E5D7478AA0C6D70221D7E974 (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, String_t* ___0_key, const RuntimeMethod* method) ;
// System.Int64 Firebase.RemoteConfig.ConfigValue::get_LongValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ConfigValue_get_LongValue_mFD7777CA6011E70B1A3C570CC9E25D60FA6E5968 (ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857* __this, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// T OrhonBey.Utility.Singleton`1<_Game.Controller.RemoteConfigController>::get_Instance()
inline RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* Singleton_1_get_Instance_m4F793460B18CBC5BDB3BE09ACB921FC450A9BC6D (const RuntimeMethod* method)
{
	return ((  RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* (*) (const RuntimeMethod*))Singleton_1_get_Instance_mB5B07971A1C1683BCC2C25097BBE736EA34FD701_gshared)(method);
}
// System.Void _Game.Controller.RemoteConfigController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigController_Init_mEED293FE74F5781906A145A1CAEC2EBCF3FCD3CB (RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* __this, const RuntimeMethod* method) ;
// System.Void GameManager/<Start>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1__ctor_mCFB58CF11D00E520E8C559CBC9E88F13EB15424A (U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void OrhonBey.Utility.Singleton`1<GameManager>::.ctor()
inline void Singleton_1__ctor_mC9F4E3C6F27207A9DF8367CEB037E317F6139A52 (Singleton_1_tBDDF8490A29F13785F0AB8AF8B258F903924D981* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tBDDF8490A29F13785F0AB8AF8B258F903924D981*, const RuntimeMethod*))Singleton_1__ctor_m06DDB187BA6DAC7D34981906B8953285C23CC6A4_gshared)(__this, method);
}
// System.Void GameManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6A162D1CE45F1D23F65A28A8DE89B3B115054DC7 (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, const RuntimeMethod* method) ;
// System.Boolean _Game.Controller.RemoteConfigController::get_IsInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RemoteConfigController_get_IsInitialized_m3F4840D801BDB9E32F7D61BE49B3D049E3DC4FAB_inline (RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* __this, const RuntimeMethod* method) ;
// System.Boolean AuthenticationManager::get_IsInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AuthenticationManager_get_IsInitialized_mA2FB05A7D3CD12B933DB7E524DFC716818BAE50C_inline (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) ;
// System.Boolean AuthenticationManager::get_IsSignedIn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AuthenticationManager_get_IsSignedIn_mDF8C2D0FAA1E127EF9AC0B5A8336F7FD49635D89_inline (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Threading.Tasks.Task Firebase.RemoteConfig.FirebaseRemoteConfig::SetDefaultsAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseRemoteConfig_SetDefaultsAsync_mD2E78DAD34846827B38B22038811509155EBAF3F (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, RuntimeObject* ___0_defaults, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void FirebaseManager::add_Initialized(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseManager_add_Initialized_m24DC2565C3FBAE54772310AD0C75D9D0F013CF44 (FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task _Game.Controller.RemoteConfigController::FetchDataAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* RemoteConfigController_FetchDataAsync_mA08EB79EE12E954006144F3046E1F262F72526A7 (RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.RemoteConfig.FirebaseRemoteConfig::FetchAsync(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseRemoteConfig_FetchAsync_m2060F6CF9DA839E51C489AD8285EF7C737F48CB4 (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_cacheExpiration, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread(System.Threading.Tasks.Task,System.Action`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_m6BDD5EFACC9A21E8AA0A27D6C6BCCA15C000566C (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* ___1_continuation, const RuntimeMethod* method) ;
// System.Void _Game.Controller.RemoteConfigController/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mC2A7CE0A863778EABBB3297ECA3F7178B157C25E (U3CU3Ec__DisplayClass10_0_t92B722F9888BA8A0866D9A2A365A79DDF1888EBA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// Firebase.RemoteConfig.ConfigInfo Firebase.RemoteConfig.FirebaseRemoteConfig::get_Info()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* FirebaseRemoteConfig_get_Info_m54BE3021C99F11C94F78078DA718C2DF4DDA9AC0 (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, const RuntimeMethod* method) ;
// Firebase.RemoteConfig.LastFetchStatus Firebase.RemoteConfig.ConfigInfo::get_LastFetchStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigInfo_get_LastFetchStatus_mA856815199E2A66B688DEFF65792763DA3AD051A (ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Boolean> Firebase.RemoteConfig.FirebaseRemoteConfig::ActivateAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* FirebaseRemoteConfig_ActivateAsync_m4259BC44EA9439B3BE4E27135121314FC61D5FDB (FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8DB17142BC5CB34C561C3A08FF3390CC83C7D94F (Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<System.Boolean>(System.Threading.Tasks.Task`1<T>,System.Action`1<System.Threading.Tasks.Task`1<T>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EFE53110BF57BDA0A8D55A9B5C280C5BC03E957 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___0_task, Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* ___1_continuation, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856*, const RuntimeMethod*))TaskExtension_ContinueWithOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EFE53110BF57BDA0A8D55A9B5C280C5BC03E957_gshared)(___0_task, ___1_continuation, method);
}
// System.Void _Game.Controller.RemoteConfigController::set_IsInitialized(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RemoteConfigController_set_IsInitialized_m180D3B75A02DB2D433411D1E3ADA4A1E9E6080BC_inline (RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void OrhonBey.Utility.Singleton`1<_Game.Controller.RemoteConfigController>::.ctor()
inline void Singleton_1__ctor_m444839D780B1D3AF09A9CC71E785DCAE8DBCA41C (Singleton_1_tA64608FFE9A349653115A38C5F6AF985D343114C* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tA64608FFE9A349653115A38C5F6AF985D343114C*, const RuntimeMethod*))Singleton_1__ctor_m06DDB187BA6DAC7D34981906B8953285C23CC6A4_gshared)(__this, method);
}
// System.DateTime Firebase.RemoteConfig.ConfigInfo::get_FetchTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ConfigInfo_get_FetchTime_m45BCB5181AEB173BF1ACB1ACD48FC075BE546685 (ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* __this, const RuntimeMethod* method) ;
// System.Void OrhonBey.Utility.InternetChecker/<IntertnetController>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntertnetControllerU3Ed__2__ctor_mD9BDF5BFA2A2772625A54727E6B00B6FE44A62C0 (U3CIntertnetControllerU3Ed__2_tDE762F2EFB8A7214780B1D4ECCE500507C513DDA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046_mD56FDF7B669D97020D45AEDF20F7A70BD3B9360C (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, U3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046_mD56FDF7B669D97020D45AEDF20F7A70BD3B9360C_gshared)(__this, ___0_stateMachine, method);
}
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mBCA80EFFB8AF50480F0093BC8CB34EDB4337A5FB (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
inline void UnityAction_1_Invoke_mDDD7C50AEB02B2E86BCA82D46A0B32C9B8A6965B_inline (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, bool ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, bool, const RuntimeMethod*))UnityAction_1_Invoke_mDDD7C50AEB02B2E86BCA82D46A0B32C9B8A6965B_gshared_inline)(__this, ___0_arg0, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48 (int32_t ___0_millisecondsDelay, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046_m0A628626CD2867C0CA4354518A4504E3D8E807F2 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046_m0A628626CD2867C0CA4354518A4504E3D8E807F2_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUrlPingConnectionU3Ed__3_MoveNext_mD2689449552D61E18883C41C28D13A5468EF09D2 (U3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046* __this, const RuntimeMethod* method) ;
// System.Void OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUrlPingConnectionU3Ed__3_SetStateMachine_m7853FEAA229DD2C79E2C85B08D0742FD37D00430 (U3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void LayerLab.FantasyRPG.PanelControlFantasyRPG::CheckControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlFantasyRPG_CheckControl_m64C69F75929CD8AD0F64CC9FB3E222079FCF7721 (PanelControlFantasyRPG_t349674BAAAFE9C9EE00F3A74E494E610A2AEFD94* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void LayerLab.FantasyRPG.PanelControlFantasyRPG::Click_Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlFantasyRPG_Click_Prev_m1483EC72CC6A65420B3879714252EA3F683D66C2 (PanelControlFantasyRPG_t349674BAAAFE9C9EE00F3A74E494E610A2AEFD94* __this, const RuntimeMethod* method) ;
// System.Void LayerLab.FantasyRPG.PanelControlFantasyRPG::Click_Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlFantasyRPG_Click_Next_mD64716E54983DDD21CF5A9BC4B725E93D6C309C3 (PanelControlFantasyRPG_t349674BAAAFE9C9EE00F3A74E494E610A2AEFD94* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.Void LayerLab.FantasyRPG.PanelControlFantasyRPG::SetArrowActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlFantasyRPG_SetArrowActive_mC6416774CE4A47B870FF8F84D1D1744B5E949763 (PanelControlFantasyRPG_t349674BAAAFE9C9EE00F3A74E494E610A2AEFD94* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/MainModule::get_maxParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_maxParticles_mF9E7A56D7E1A528904BE1A8C0E14F15C3AF0F748 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystemRenderer>()
inline ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Texture2D_get_whiteTexture_m3A243ED388F9EF0EC515015A6E0E50FD261D2FA1 (const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_scalingMode(UnityEngine.ParticleSystemScalingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_scalingMode_m08A4399A0E64E5894509084A42BB528BE16A648D (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/TextureSheetAnimationModule UnityEngine.ParticleSystem::get_textureSheetAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 ParticleSystem_get_textureSheetAnimation_mA35CFDD2E7F70F3AFA88A766359336F36CBA937B (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureSheetAnimationModule_get_enabled_mF860A1A9A5794EA2FC3A5B9652C812981A4F3136 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_numTilesX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_numTilesY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_numTilesY_mA39AD9D6245BE792B776B9834A3E83609266A8C4 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Awake_mDF9D1A4867C8E730C59A7CAE97709CA9B8F3A0F2 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticleSystem_Initialize_m75CE1D7EB74E9A24617E346B45087F91FA400064 (UIParticleSystem_t761CD61A1155A6B806D54F7C386AAD16A5A9744F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_playOnAwake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_playOnAwake_m4FEB55773ED05AB5166314D9883671F4B277762A (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___0_withChildren, int32_t ___1_stopBehavior, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_m0F67158FED60933343574A1BEB68FEB9D5476E3F (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___0_particles, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem/MainModule::get_simulationSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/Particle::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_rotation_mA3A5978F95EDA141FE91C3423DE46DE9B91B49A2 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::GetCurrentColor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Particle_GetCurrentColor_m793DDF1AC5043A8991B6663D965404B1B3855C78 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___0_system, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/Particle::GetCurrentSize(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_GetCurrentSize_m3F7D066BF44CDC3B0E501CA10A06313CD0CCCA64 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___0_system, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemScalingMode UnityEngine.ParticleSystem/MainModule::get_scalingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_scalingMode_m2C235E61B1ABBD31F471DC80EF15EA315EA3F0FA (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/Particle::get_remainingLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/Particle::get_startLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_frameOverTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::get_curveMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* MinMaxCurve_get_curveMin_m2F6041CAA8760D21D39A6204973B411D7109CF00 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::get_curve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* MinMaxCurve_get_curve_mE735424B0F4A9F55699BD82254F159D4226F9661 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_cycleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_cycleCount_m99F3A1F1DFA7947B44B826C6B9C96B268FFE5DC0 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemAnimationType UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_animation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_animation_mB402112DF63C35BB5B34B892D51791ABAED84176 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_rowIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_rowIndex_m72BA6BAAD0F816E11E276B28907119054D8EA03C (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_rotation3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Particle_get_rotation3D_m8BE7C2D25F8E6F44F19690266100723A5DBE64D1 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexQuad(UnityEngine.UIVertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddUIVertexQuad_m6AC21081F2A5A48D22BC3497E527D0A9AB8278B0 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___0_verts, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Simulate_m514E1FCC76A6882650BD237E1D14B43ECAA97643 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, float ___0_t, bool ___1_withChildren, bool ___2_restart, bool ___3_fixedTimeStep, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskableGraphic__ctor_mD2E256F950AAAE0E2445971361B5C54D2066E4C2 (MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m5C137C75DDEBA99BA9B0AC253EB36C075B2E2D8B (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___0_status, String_t* ___1_message, const RuntimeMethod* method) ;
// Google.GoogleSignInConfiguration Google.GoogleSignIn::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414_inline (const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::.ctor(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl__ctor_m28DE8315356ABCB9AB9B96F3D635BF83278D3A3A (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___0_configuration, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn::.ctor(Google.Impl.GoogleSignInImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn__ctor_m43C53EBCEC03FBAA1F634E76365E860595AC4D52 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* ___0_impl, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>::.ctor()
inline void TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84 (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* SignInHelperObject_get_Instance_mB289E4E5785ECA3877128A2D7E42F73DAEAA2C34 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.Future`1<Google.GoogleSignInUser>::WaitForResult(System.Threading.Tasks.TaskCompletionSource`1<T>)
inline RuntimeObject* Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* __this, TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* ___0_tcs, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*, TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*, const RuntimeMethod*))Future_1_WaitForResult_m86C7BBC0D729D1190E2DE445649A1A7280004193_gshared)(__this, ___0_tcs, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>::get_Task()
inline Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_inline (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* (*) (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn/SignInException::set_Status(Google.GoogleSignInStatusCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120 (Exception_t* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___0_wrapper, intptr_t ___1_handle, const RuntimeMethod* method) ;
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.BaseObject/OutStringMethod::Invoke(System.Byte[],System.UIntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method) ;
// System.Boolean System.UIntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_Equals_m7A952F9624311E28A8F6B7D48A27E897F59E7021 (uintptr_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.UInt32 System.UIntPtr::ToUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965 (uintptr_t* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GetPlayerActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GetPlayerActivity_m298AD9D9AC4EEC28D205394CDD330BC02F1DD6A4 (const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Create_m6C8D53A9F11B20CC884FC7E118C5854570096CBF (intptr_t ___0_data, const RuntimeMethod* method) ;
// System.Void Google.Impl.BaseObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, intptr_t ___0_intPtr, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::SelfPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9 (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Configure(System.Runtime.InteropServices.HandleRef,System.Boolean,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String[],System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Configure_mD397232FBA115AC8CFCB48BD84FB961D0F170B9E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, bool ___1_useGameSignIn, String_t* ___2_webClientId, bool ___3_requestAuthCode, bool ___4_forceTokenRefresh, bool ___5_requestEmail, bool ___6_requestIdToken, bool ___7_hidePopups, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___8_additionalScopes, int32_t ___9_scopeCount, String_t* ___10_accountName, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_EnableDebugLogging(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_m21685383DEDE08D27C74A274CA26D3FEEFC033EC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, bool ___1_flag, const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignIn(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignIn_m22D8DE4B14BDAAE661FFEFEF5D9BEFD5830D2175 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) ;
// System.Void Google.Impl.NativeFuture::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void Google.Future`1<Google.GoogleSignInUser>::.ctor(Google.FutureAPIImpl`1<T>)
inline void Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6 (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* __this, RuntimeObject* ___0_impl, const RuntimeMethod* method)
{
	((  void (*) (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*, RuntimeObject*, const RuntimeMethod*))Future_1__ctor_mFAB04EC0EED034736749BA83776F629ED33AA046_gshared)(__this, ___0_impl, method);
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignInSilently(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignInSilently_mB9B6823FC8F062B9FA8B3A954DD2D27CB6F7B062 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Signout(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Signout_mA13B93C574D80B705301DA279CB588434C256DE3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Disconnect(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Disconnect_m00F5736B6446CD99B21D3E58D7A6D2A48A4CA0EB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_DisposeFuture(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_DisposeFuture_m28CC383A504AA5E245927D51463C4C2E53036EF9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) ;
// System.Void Google.Impl.BaseObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject_Dispose_m554F3F996634EC0E8C5C0D2212659D5FDECC582F (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Pending(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Pending_mB2A55106C50985472B9CD2F983F668CE42490435 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Result(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Result_m9495EFE3047E860938A68D98AB665B08D9368BBB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void Google.Impl.NativeFuture/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7497FAB21C83A976EB1558C8B99D253FA6DDF86A (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser__ctor_m0271D1B065D5BF40672070447A0D61EEDB88FF91 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) ;
// System.Void Google.Impl.BaseObject/OutStringMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.String Google.Impl.BaseObject::OutParamsToString(Google.Impl.BaseObject/OutStringMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* ___0_outStringMethod, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_DisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_Email(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_FamilyName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_GivenName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_IdToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_AuthCode(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___0_uriString, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_ImageUrl(System.Uri)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_value, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_UserId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 Google.Impl.GoogleSignInImpl::GoogleSignIn_Status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GoogleSignInImpl_GoogleSignIn_Status_m394770E3C255F4A323BC0BBCB95E17628385BF8C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetDisplayName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetDisplayName_mA10A1F7FCDB0C0509C25C07B4879ED6C8E7AB898 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetEmail(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetEmail_mB5BA2AF3A3B912BC7981CCAF582C4CB0BE794569 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetFamilyName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetFamilyName_m598696E5B17386931EDA83BBB0620473B688B6B6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetGivenName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetGivenName_mFFF0ABA104C06A67D5A8E2412F037E9FEB5EF8C9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetIdToken(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetIdToken_m8E9891422C140811C8FA3BA9366BD82E0D1DD444 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetServerAuthCode(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m7C4FB4471B7287C7F835758C8B6DEACCC423F478 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetImageUrl(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetImageUrl_m96C9B6DB9DA04EA6634C71B9651966DAD62434B4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetUserId(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetUserId_m4DA7FB3CF2B43ABE928AC85A24017202EBB93B43 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Google.Impl.SignInHelperObject>()
inline SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Google.Impl.SignInHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelperObject__ctor_m049CB998CA9E1DA5929BE9CFCEA8C33EE915CDA3 (SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_Create(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_EnableDebugLogging(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GoogleSignIn_Configure(void*, int32_t, char*, int32_t, int32_t, int32_t, int32_t, int32_t, char**, int32_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_SignIn(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_SignInSilently(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_Signout(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_Disconnect(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_DisposeFuture(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GoogleSignIn_Pending(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_Result(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GoogleSignIn_Status(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetServerAuthCode(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetDisplayName(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetEmail(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetFamilyName(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetGivenName(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetIdToken(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetImageUrl(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetUserId(void*, uint8_t*, uintptr_t);
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
// System.Void RewardedPopupController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedPopupController_Start_m6FCBFC5CA3BDCBAF3396790747ED596505667C06 (RewardedPopupController_t241F047302CF06AA93D75BEE52918633932F410D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RewardedPopupController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedPopupController_Update_m1EF9F97EC5C9D12CD8E1F512B46534F232195108 (RewardedPopupController_t241F047302CF06AA93D75BEE52918633932F410D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RewardedPopupController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedPopupController__ctor_m1C1DE7B79FFFEAEC75E0E483A1E591DF82858CFD (RewardedPopupController_t241F047302CF06AA93D75BEE52918633932F410D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SampleTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleTest_Start_mD1B5ED19534589DC9812EE0A5A2127D628310597 (SampleTest_tF743B3F78CD8ABAE4CBBDE0A1B53FA8D0160E60B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__0_0_mCE4166078582E2A49C43EDE27EB2715A9643459C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC* G_B2_0 = NULL;
	Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* G_B2_1 = NULL;
	Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC* G_B1_0 = NULL;
	Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* G_B1_1 = NULL;
	{
		// Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task => {
		//     var dependencyStatus = task.Result;
		//     if (dependencyStatus == Firebase.DependencyStatus.Available) {
		//         // Create and hold a reference to your FirebaseApp,
		//         // where app is a Firebase.FirebaseApp property of your application class.
		//        var app = Firebase.FirebaseApp.DefaultInstance;
		// 
		//         // Set a flag here to indicate whether Firebase is ready to use by your app.
		//     } else {
		//         UnityEngine.Debug.LogError(System.String.Format(
		//             "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
		//         // Firebase Unity SDK is not safe to use here.
		//     }
		// });
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_0;
		L_0 = FirebaseApp_CheckAndFixDependenciesAsync_mB21D0BA4D3C2F6C975D72DB0F2CEFF46A4361557(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_il2cpp_TypeInfo_var);
		Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC* L_1 = ((U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_il2cpp_TypeInfo_var);
		U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485* L_3 = ((U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC* L_4 = (Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC*)il2cpp_codegen_object_new(Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m4F6B8318AD92B94ABD9C753FFD7CEE0687417DAC(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__0_0_mCE4166078582E2A49C43EDE27EB2715A9643459C_RuntimeMethod_var), NULL);
		Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC* L_5 = L_4;
		((U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0024:
	{
		NullCheck(G_B2_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD(G_B2_1, G_B2_0, Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SampleTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleTest_Update_mFBB976A25C188D1E7CB8A48C72B0C2B15E5707B0 (SampleTest_tF743B3F78CD8ABAE4CBBDE0A1B53FA8D0160E60B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SampleTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleTest__ctor_mBBBF10A79401BA5F529E32EBBDFCBDE62C921548 (SampleTest_tF743B3F78CD8ABAE4CBBDE0A1B53FA8D0160E60B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SampleTest/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m37C3605BA041E85CD3FEC92D6BACF619C52176EF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485* L_0 = (U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485*)il2cpp_codegen_object_new(U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m98600DCE65A786AD958AD8D62ECA7A1FEAA5CCE7(L_0, NULL);
		((U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void SampleTest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m98600DCE65A786AD958AD8D62ECA7A1FEAA5CCE7 (U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SampleTest/<>c::<Start>b__0_0(System.Threading.Tasks.Task`1<Firebase.DependencyStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__0_0_mCE4166078582E2A49C43EDE27EB2715A9643459C (U3CU3Ec_tDA2A84BF19F101E60A28F1EF73EAFE3CBC3A2485* __this, Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral674EF683D8B400F1F0F590BCCA13A350C3C1A25F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var dependencyStatus = task.Result;
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_0 = ___0_task;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA(L_0, Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA_RuntimeMethod_var);
		V_0 = L_1;
		// if (dependencyStatus == Firebase.DependencyStatus.Available) {
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// var app = Firebase.FirebaseApp.DefaultInstance;
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_3;
		L_3 = FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0(NULL);
		return;
	}

IL_0011:
	{
		// UnityEngine.Debug.LogError(System.String.Format(
		//     "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(DependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral674EF683D8B400F1F0F590BCCA13A350C3C1A25F, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_7, NULL);
		// });
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
// System.String AuthenticationManager::get_GoogleWebClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationManager_get_GoogleWebClientId_mB47AF0AF85CDCC55ACC3DD52B3E77E15023C6D0A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA86BDCBBC2FA80BCBFDC9E4CF4F7E42C893E13E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string GoogleWebClientId => _googleWebClientId;
		return _stringLiteralA86BDCBBC2FA80BCBFDC9E4CF4F7E42C893E13E3;
	}
}
// System.Boolean AuthenticationManager::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationManager_get_IsInitialized_mA2FB05A7D3CD12B933DB7E524DFC716818BAE50C (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = __this->___U3CIsInitializedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void AuthenticationManager::set_IsInitialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_set_IsInitialized_mB3F9B5565F34680D20BF51161CC32DD697A92BAE (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsInitializedU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean AuthenticationManager::get_IsSignedIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationManager_get_IsSignedIn_mDF8C2D0FAA1E127EF9AC0B5A8336F7FD49635D89 (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSignedIn { get; private set; }
		bool L_0 = __this->___U3CIsSignedInU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void AuthenticationManager::set_IsSignedIn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_set_IsSignedIn_m3C696CA8E4E386C66811246A406BC21D62A50B91 (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsSignedIn { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsSignedInU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void AuthenticationManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_Awake_m7CD671A7A0B81A6519547B0B3C08926636E9BE09 (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _googleSignInConfiguration = new GoogleSignInConfiguration()
		// {
		//     WebClientId = GoogleWebClientId,
		//     RequestIdToken = true
		// };
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)il2cpp_codegen_object_new(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GoogleSignInConfiguration__ctor_m99891370EEB5D39D4F4492E576B1CB5665532589(L_0, NULL);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1 = L_0;
		String_t* L_2;
		L_2 = AuthenticationManager_get_GoogleWebClientId_mB47AF0AF85CDCC55ACC3DD52B3E77E15023C6D0A(NULL);
		NullCheck(L_1);
		L_1->___WebClientId_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___WebClientId_1), (void*)L_2);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_3 = L_1;
		NullCheck(L_3);
		L_3->___RequestIdToken_5 = (bool)1;
		__this->____googleSignInConfiguration_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____googleSignInConfiguration_10), (void*)L_3);
		// }
		return;
	}
}
// System.Collections.IEnumerator AuthenticationManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationManager_Start_m3BAFF8054EFF9446ECAE402EC28FAC72C9B80B3A (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663* L_0 = (U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663*)il2cpp_codegen_object_new(U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__15__ctor_mD1E15C67B9DB523607BD3E81EFAA3219A79DBFDA(L_0, 0, NULL);
		U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void AuthenticationManager::InitializeFirebase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_InitializeFirebase_mF50AEB583E70CB9A0D055FC180DEACFD83EBA062 (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationManager_OnAuthStateChanged_m57FAEA581C137B3B6C7C103F2E1711F6CC4AD1D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _auth = FirebaseAuth.DefaultInstance;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0;
		L_0 = FirebaseAuth_get_DefaultInstance_m86A4E32D8DCDB80079317B58210090F3D3B1711F(NULL);
		__this->____auth_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____auth_8), (void*)L_0);
		// _auth.StateChanged += OnAuthStateChanged;
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_1 = __this->____auth_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_2, __this, (intptr_t)((void*)AuthenticationManager_OnAuthStateChanged_m57FAEA581C137B3B6C7C103F2E1711F6CC4AD1D5_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		FirebaseAuth_add_StateChanged_mE4C60B716655FED5F73CED836CBCD6A10578F680(L_1, L_2, NULL);
		// IsInitialized = true;
		AuthenticationManager_set_IsInitialized_mB3F9B5565F34680D20BF51161CC32DD697A92BAE_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AuthenticationManager::OnAuthStateChanged(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_OnAuthStateChanged_m57FAEA581C137B3B6C7C103F2E1711F6CC4AD1D5 (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral030A90BDC2949D237E808312D95E3C3FC7EF194E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349F52249E4C8D8AB5D64F7A048F8E19AF6B3180);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7308DA6A9AD1E8B5F5BD38AF235BEC86C7D663E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// if (_auth.CurrentUser != null)
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->____auth_8;
		NullCheck(L_0);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_1;
		L_1 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_0, NULL);
		if (!L_1)
		{
			goto IL_00a4;
		}
	}
	{
		// bool signedIn = _user != _auth.CurrentUser && _auth.CurrentUser != null
		//                                            && _auth.CurrentUser.IsValid();
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_2 = __this->____user_9;
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_3 = __this->____auth_8;
		NullCheck(L_3);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_4;
		L_4 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_3, NULL);
		if ((((RuntimeObject*)(FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)L_2) == ((RuntimeObject*)(FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_5 = __this->____auth_8;
		NullCheck(L_5);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_6;
		L_6 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_5, NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_7 = __this->____auth_8;
		NullCheck(L_7);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_8;
		L_8 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_7, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = FirebaseUser_IsValid_m745FA6B0AF38AF4988B188E019F0621C27DED2DA(L_8, NULL);
		G_B5_0 = ((int32_t)(L_9));
		goto IL_0043;
	}

IL_0042:
	{
		G_B5_0 = 0;
	}

IL_0043:
	{
		// if (!signedIn && _user != null)
		int32_t L_10 = G_B5_0;
		G_B6_0 = L_10;
		if (L_10)
		{
			G_B8_0 = L_10;
			goto IL_006f;
		}
	}
	{
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_11 = __this->____user_9;
		G_B7_0 = G_B6_0;
		if (!L_11)
		{
			G_B8_0 = G_B6_0;
			goto IL_006f;
		}
	}
	{
		// Debug.Log("Signed out " + _user.UserId);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_12 = __this->____user_9;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_12, NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral349F52249E4C8D8AB5D64F7A048F8E19AF6B3180, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
		// IsSignedIn = false;
		AuthenticationManager_set_IsSignedIn_m3C696CA8E4E386C66811246A406BC21D62A50B91_inline(__this, (bool)0, NULL);
		G_B8_0 = G_B7_0;
	}

IL_006f:
	{
		// _user = _auth.CurrentUser;
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_15 = __this->____auth_8;
		NullCheck(L_15);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_16;
		L_16 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_15, NULL);
		__this->____user_9 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____user_9), (void*)L_16);
		// if (signedIn)
		if (!G_B8_0)
		{
			goto IL_00b5;
		}
	}
	{
		// Debug.Log("Signed in " + _user.UserId);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_17 = __this->____user_9;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE7308DA6A9AD1E8B5F5BD38AF235BEC86C7D663E, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_19, NULL);
		// IsSignedIn = true;
		AuthenticationManager_set_IsSignedIn_m3C696CA8E4E386C66811246A406BC21D62A50B91_inline(__this, (bool)1, NULL);
		return;
	}

IL_00a4:
	{
		// Debug.Log($"First Login !");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral030A90BDC2949D237E808312D95E3C3FC7EF194E, NULL);
		// IsSignedIn = false;
		AuthenticationManager_set_IsSignedIn_m3C696CA8E4E386C66811246A406BC21D62A50B91_inline(__this, (bool)0, NULL);
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> AuthenticationManager::SignInAnonymousAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AuthenticationManager_SignInAnonymousAsync_mD207360244BE3FD845CF4A8CA44241453F429873 (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650_mF094A225CB909E768C049409BB8BBA859D15DF50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D(AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650_mF094A225CB909E768C049409BB8BBA859D15DF50(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650_mF094A225CB909E768C049409BB8BBA859D15DF50_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(L_2, AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> AuthenticationManager::SignInGoogleAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AuthenticationManager_SignInGoogleAsync_m40226538845DB6D6215E31DAAA635BCDFD7B7A50 (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mA8D0034D04ED8960AB646ABC4C3A3D454851F495_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D(AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mA8D0034D04ED8960AB646ABC4C3A3D454851F495(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mA8D0034D04ED8960AB646ABC4C3A3D454851F495_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(L_2, AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void AuthenticationManager::DeleteAccount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_DeleteAccount_m921AC9FDF496AF99F42082D4B7CD8313CE59DA18 (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC_m3A2DAB6F7DE04F0586A542F03AE3ED459E92D3B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC_m3A2DAB6F7DE04F0586A542F03AE3ED459E92D3B8(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC_m3A2DAB6F7DE04F0586A542F03AE3ED459E92D3B8_RuntimeMethod_var);
		return;
	}
}
// System.Void AuthenticationManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager_OnDestroy_m59EA080F5A3F6F3209B57773776FE2308E9D12CB (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationManager_OnAuthStateChanged_m57FAEA581C137B3B6C7C103F2E1711F6CC4AD1D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _auth.StateChanged -= OnAuthStateChanged;
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->____auth_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_1, __this, (intptr_t)((void*)AuthenticationManager_OnAuthStateChanged_m57FAEA581C137B3B6C7C103F2E1711F6CC4AD1D5_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		FirebaseAuth_remove_StateChanged_mEF74B416A0977697BA5F4BB18A654AB4030516D1(L_0, L_1, NULL);
		// _auth = null;
		__this->____auth_8 = (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____auth_8), (void*)(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF*)NULL);
		// }
		return;
	}
}
// System.Void AuthenticationManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationManager__ctor_m65FAD294B94A823DC9C97B94412E836B513F54AB (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m135DC7697F48846DB67865A3EC3C390C8D039D24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m135DC7697F48846DB67865A3EC3C390C8D039D24(__this, Singleton_1__ctor_m135DC7697F48846DB67865A3EC3C390C8D039D24_RuntimeMethod_var);
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
// System.Void AuthenticationManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAE04CAF9490C55F77D9E5F3E2761C10E62191F49 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5* L_0 = (U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5*)il2cpp_codegen_object_new(U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m103F3BCBD48183D25C4903E7B8CF342DA8505087(L_0, NULL);
		((U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void AuthenticationManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m103F3BCBD48183D25C4903E7B8CF342DA8505087 (U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean AuthenticationManager/<>c::<Start>b__15_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__15_0_m3A68811BD8BD8C7BEA9F51B48D0499D359B1C3ED (U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m583337DA21A39446D30C6D628BE4E55A7675D85E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yield return new WaitUntil(() => FirebaseManager.Instance.IsInitialized);
		FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* L_0;
		L_0 = Singleton_1_get_Instance_m583337DA21A39446D30C6D628BE4E55A7675D85E(Singleton_1_get_Instance_m583337DA21A39446D30C6D628BE4E55A7675D85E_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = FirebaseManager_get_IsInitialized_mDED0DDF70FAF39EEAF4E52AE1684993233172CA4_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void AuthenticationManager/<>c::<DeleteAccount>b__20_0(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CDeleteAccountU3Eb__20_0_m629C7F9F1B049CDCA978F702C29288BCF7FDFF3B (U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1711E4233414ACB1C078B9EC0B830013B9CD905B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF6F52C201014AC06A53A76080873492D1F90B0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB332A448720D3906137EF8781017144CEFBB3F7);
		s_Il2CppMethodInitialized = true;
	}
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	{
		// if (task.IsCanceled)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ___0_task;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("DeleteAsync was canceled.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralAF6F52C201014AC06A53A76080873492D1F90B0C, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (task.IsFaulted)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = ___0_task;
		NullCheck(L_2);
		bool L_3;
		L_3 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_2, NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// Debug.LogError("DeleteAsync encountered an error: " + task.Exception);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = ___0_task;
		NullCheck(L_4);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_5;
		L_5 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_4, NULL);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_6 = L_5;
		G_B4_0 = L_6;
		G_B4_1 = _stringLiteral1711E4233414ACB1C078B9EC0B830013B9CD905B;
		if (L_6)
		{
			G_B5_0 = L_6;
			G_B5_1 = _stringLiteral1711E4233414ACB1C078B9EC0B830013B9CD905B;
			goto IL_002d;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_0032;
	}

IL_002d:
	{
		NullCheck(G_B5_0);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_7;
		G_B6_1 = G_B5_1;
	}

IL_0032:
	{
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B6_1, G_B6_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_8, NULL);
		// return;
		return;
	}

IL_003d:
	{
		// HomeCanvasController.Instance.Hide();
		HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC* L_9 = ((HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_StaticFields*)il2cpp_codegen_static_fields_for(HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_il2cpp_TypeInfo_var))->___Instance_5;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(6 /* System.Void _Game.Scripts.CanvasControllerBase::Hide() */, L_9);
		// AuthenticationCanvasController.Instance.Show();
		AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* L_10 = ((AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72_il2cpp_TypeInfo_var))->___Instance_5;
		NullCheck(L_10);
		VirtualActionInvoker0::Invoke(5 /* System.Void _Game.Scripts.CanvasControllerBase::Show() */, L_10);
		// Debug.Log("User deleted successfully.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDB332A448720D3906137EF8781017144CEFBB3F7, NULL);
		// });
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
// System.Void AuthenticationManager/<Start>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__15__ctor_mD1E15C67B9DB523607BD3E81EFAA3219A79DBFDA (U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AuthenticationManager/<Start>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__15_System_IDisposable_Dispose_mD480F9585756707830EB3DAABE3AC6052A9C6366 (U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AuthenticationManager/<Start>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__15_MoveNext_m2B18E23DC50A5636A696578A68672268CC959B09 (U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__15_0_m3A68811BD8BD8C7BEA9F51B48D0499D359B1C3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* V_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B5_0 = NULL;
	U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663* G_B5_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B4_0 = NULL;
	U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663* G_B4_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(() => FirebaseManager.Instance.IsInitialized);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = ((U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_5 = L_4;
		G_B4_0 = L_5;
		G_B4_1 = __this;
		if (L_5)
		{
			G_B5_0 = L_5;
			G_B5_1 = __this;
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var);
		U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5* L_6 = ((U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_7 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__15_0_m3A68811BD8BD8C7BEA9F51B48D0499D359B1C3ED_RuntimeMethod_var), NULL);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_8 = L_7;
		((U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1), (void*)L_8);
		G_B5_0 = L_8;
		G_B5_1 = G_B4_1;
	}

IL_003e:
	{
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_9 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_9, G_B5_0, NULL);
		NullCheck(G_B5_1);
		G_B5_1->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&G_B5_1->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0051:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// InitializeFirebase();
		AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* L_10 = V_1;
		NullCheck(L_10);
		AuthenticationManager_InitializeFirebase_mF50AEB583E70CB9A0D055FC180DEACFD83EBA062(L_10, NULL);
		// }
		return (bool)0;
	}
}
// System.Object AuthenticationManager/<Start>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB224D0A6CCAD0CFBE4A5601BCB5B12C26F00D03F (U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AuthenticationManager/<Start>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__15_System_Collections_IEnumerator_Reset_mC5676243966FE8985E96D92F6814167FCA4E5407 (U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__15_System_Collections_IEnumerator_Reset_mC5676243966FE8985E96D92F6814167FCA4E5407_RuntimeMethod_var)));
	}
}
// System.Object AuthenticationManager/<Start>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__15_System_Collections_IEnumerator_get_Current_m1452163EA268927EA8242DC3DFD2F468BE8E7C05 (U3CStartU3Ed__15_tA4D7B62CB20850C14A62284255891716267E1663* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void AuthenticationManager/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mD73049EF260E3359976255ABB6960C2D1D129EA2 (U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AuthenticationManager/<>c__DisplayClass18_0::<SignInAnonymousAsync>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.AuthResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CSignInAnonymousAsyncU3Eb__0_m636CB43DC5733B162630E03ECCABD332FA3DE971 (U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD* __this, Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m08A0DB0CF6E61747C35CAF708B06D54EBAE292AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B11FA9B8FB956FD3D9E0103B9C94936F4AA2C52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29FC83044E5E70D958FF8831DA38F40803BE6447);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral668E956168155A1BF58C29AEF5DCBF0107C1583F);
		s_Il2CppMethodInitialized = true;
	}
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	{
		// if (task.IsCanceled)
		Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* L_0 = ___0_task;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("SignInAnonymouslyAsync was canceled.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral668E956168155A1BF58C29AEF5DCBF0107C1583F, NULL);
		return;
	}

IL_0013:
	{
		// else if (task.IsFaulted)
		Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* L_2 = ___0_task;
		NullCheck(L_2);
		bool L_3;
		L_3 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_2, NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// Debug.LogError("SignInAnonymouslyAsync encountered an error: " + task.Exception);
		Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* L_4 = ___0_task;
		NullCheck(L_4);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_5;
		L_5 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_4, NULL);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_6 = L_5;
		G_B4_0 = L_6;
		G_B4_1 = _stringLiteral29FC83044E5E70D958FF8831DA38F40803BE6447;
		if (L_6)
		{
			G_B5_0 = L_6;
			G_B5_1 = _stringLiteral29FC83044E5E70D958FF8831DA38F40803BE6447;
			goto IL_002d;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_0032;
	}

IL_002d:
	{
		NullCheck(G_B5_0);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_7;
		G_B6_1 = G_B5_1;
	}

IL_0032:
	{
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B6_1, G_B6_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_8, NULL);
		return;
	}

IL_003d:
	{
		// var newUser = task.Result.User;
		Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* L_9 = ___0_task;
		NullCheck(L_9);
		AuthResult_t5BF95C4AB72884856E83E1580EFAB3355F0F9DAA* L_10;
		L_10 = Task_1_get_Result_m08A0DB0CF6E61747C35CAF708B06D54EBAE292AA(L_9, Task_1_get_Result_m08A0DB0CF6E61747C35CAF708B06D54EBAE292AA_RuntimeMethod_var);
		NullCheck(L_10);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_11;
		L_11 = AuthResult_get_User_mFA7304735A605A3EC6BE192FE7984F9BAA9C2736(L_10, NULL);
		// Debug.Log($"User signed in successfully");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0B11FA9B8FB956FD3D9E0103B9C94936F4AA2C52, NULL);
		// isResult = true;
		__this->___isResult_0 = (bool)1;
		// });
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
// System.Void AuthenticationManager/<SignInAnonymousAsync>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInAnonymousAsyncU3Ed__18_MoveNext_mF4E053160AC915EF28FFC4942F269BD57012C728 (U3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t72AC2BBF8D83C444F55D972584ADE8DF9F42F1E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650_m90B7097E36D451AD65291564D57AE73A174EBED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m8B22C71DCB0DB43BD57F17585AAB6B2A24173C75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CSignInAnonymousAsyncU3Eb__0_m636CB43DC5733B162630E03ECCABD332FA3DE971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* V_1 = NULL;
	bool V_2 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0078_1;
			}
		}
		{
			U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD* L_3 = (U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			U3CU3Ec__DisplayClass18_0__ctor_mD73049EF260E3359976255ABB6960C2D1D129EA2(L_3, NULL);
			__this->___U3CU3E8__1_3 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)L_3);
			// bool isResult = false;
			U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD* L_4 = __this->___U3CU3E8__1_3;
			NullCheck(L_4);
			L_4->___isResult_0 = (bool)0;
			// await _auth.SignInAnonymouslyAsync().ContinueWith(task =>
			// {
			//     if (task.IsCanceled)
			//     {
			//         Debug.LogError("SignInAnonymouslyAsync was canceled.");
			//     }
			//     else if (task.IsFaulted)
			//     {
			//         Debug.LogError("SignInAnonymouslyAsync encountered an error: " + task.Exception);
			//     }
			//     else
			//     {
			//         var newUser = task.Result.User;
			//         Debug.Log($"User signed in successfully");
			//         isResult = true;
			//     }
			// });
			AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* L_5 = V_1;
			NullCheck(L_5);
			FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_6 = L_5->____auth_8;
			NullCheck(L_6);
			Task_1_tCA26548F28E5D7A2D76F47CF13869465F1F9BCB5* L_7;
			L_7 = FirebaseAuth_SignInAnonymouslyAsync_m4E35071B19D8D9284C40DDA2A855C8F2F079C7AD(L_6, NULL);
			U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD* L_8 = __this->___U3CU3E8__1_3;
			Action_1_t72AC2BBF8D83C444F55D972584ADE8DF9F42F1E4* L_9 = (Action_1_t72AC2BBF8D83C444F55D972584ADE8DF9F42F1E4*)il2cpp_codegen_object_new(Action_1_t72AC2BBF8D83C444F55D972584ADE8DF9F42F1E4_il2cpp_TypeInfo_var);
			NullCheck(L_9);
			Action_1__ctor_m52423E9C9AEAF0BFB18D2247E6A8F2D2896B5C65(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass18_0_U3CSignInAnonymousAsyncU3Eb__0_m636CB43DC5733B162630E03ECCABD332FA3DE971_RuntimeMethod_var), NULL);
			NullCheck(L_7);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_10;
			L_10 = Task_1_ContinueWith_m8B22C71DCB0DB43BD57F17585AAB6B2A24173C75(L_7, L_9, Task_1_ContinueWith_m8B22C71DCB0DB43BD57F17585AAB6B2A24173C75_RuntimeMethod_var);
			NullCheck(L_10);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11;
			L_11 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_10, NULL);
			V_3 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
			if (L_12)
			{
				goto IL_0094_1;
			}
		}
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14 = V_3;
			__this->___U3CU3Eu__1_4 = L_14;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_15 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650_m90B7097E36D451AD65291564D57AE73A174EBED7(L_15, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650_m90B7097E36D451AD65291564D57AE73A174EBED7_RuntimeMethod_var);
			goto IL_00e4;
		}

IL_0078_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_16 = __this->___U3CU3Eu__1_4;
			V_3 = L_16;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_17 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
		}

IL_0094_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
			// return isResult;
			U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD* L_19 = __this->___U3CU3E8__1_3;
			NullCheck(L_19);
			bool L_20 = L_19->___isResult_0;
			V_2 = L_20;
			goto IL_00c9;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a9;
		}
		throw e;
	}

CATCH_00a9:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_3 = (U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)(U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD*)NULL);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_21 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_22 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD(L_21, L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e4;
	}// end catch (depth: 1)

IL_00c9:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_3 = (U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)(U3CU3Ec__DisplayClass18_0_tBCBCBB06B60D75FEBA06561017D02949BF6E72AD*)NULL);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_23 = (&__this->___U3CU3Et__builder_1);
		bool L_24 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046(L_23, L_24, AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
	}

IL_00e4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignInAnonymousAsyncU3Ed__18_MoveNext_mF4E053160AC915EF28FFC4942F269BD57012C728_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650*>(__this + _offset);
	U3CSignInAnonymousAsyncU3Ed__18_MoveNext_mF4E053160AC915EF28FFC4942F269BD57012C728(_thisAdjusted, method);
}
// System.Void AuthenticationManager/<SignInAnonymousAsync>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInAnonymousAsyncU3Ed__18_SetStateMachine_mC9A0F2A63208C7B80D8C1F993909A1FDDB594C71 (U3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignInAnonymousAsyncU3Ed__18_SetStateMachine_mC9A0F2A63208C7B80D8C1F993909A1FDDB594C71_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignInAnonymousAsyncU3Ed__18_tEB6CC1F4C66CF8A4327411E3A579177F0897F650*>(__this + _offset);
	U3CSignInAnonymousAsyncU3Ed__18_SetStateMachine_mC9A0F2A63208C7B80D8C1F993909A1FDDB594C71(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AuthenticationManager/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m95CE0C0C7CF43859FEA9B21ED4A7E735D23438EB (U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task AuthenticationManager/<>c__DisplayClass19_0::<SignInGoogleAsync>b__0(System.Threading.Tasks.Task`1<Google.GoogleSignInUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* U3CU3Ec__DisplayClass19_0_U3CSignInGoogleAsyncU3Eb__0_m22FC0416877CB18ECDBD2EB3AD95FA44709D9371 (U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* __this, Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4_mDCC6F031311939D31C1D86F0DB2CC9C952B9844F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_1 = ___0_task;
		(&V_0)->___task_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___task_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4_mDCC6F031311939D31C1D86F0DB2CC9C952B9844F(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4_mDCC6F031311939D31C1D86F0DB2CC9C952B9844F_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.Void AuthenticationManager/<>c__DisplayClass19_0::<SignInGoogleAsync>b__1(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3CSignInGoogleAsyncU3Eb__1_m52301F6FC790A50CCD09D71ACA7549FFA930E2C1 (U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___0_authTask, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_m3BCD8A3933D86F155005ACEC30431C292BE070CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B1AEE29FBAC288AB359FBE1FD7E9D7039EE986C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A3A118AD8C709A8FB48EEBD256D292036364137);
		s_Il2CppMethodInitialized = true;
	}
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	{
		// if (authTask.IsCanceled)
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_0 = ___0_authTask;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// signInCompleted.SetCanceled();
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_2 = __this->___signInCompleted_1;
		NullCheck(L_2);
		TaskCompletionSource_1_SetCanceled_m3BCD8A3933D86F155005ACEC30431C292BE070CC(L_2, TaskCompletionSource_1_SetCanceled_m3BCD8A3933D86F155005ACEC30431C292BE070CC_RuntimeMethod_var);
		return;
	}

IL_0014:
	{
		// else if (authTask.IsFaulted)
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_3 = ___0_authTask;
		NullCheck(L_3);
		bool L_4;
		L_4 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// Debug.LogError("SignInGoogleAsync---> an error: " + authTask.Exception);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_5 = ___0_authTask;
		NullCheck(L_5);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_6;
		L_6 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_5, NULL);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_7 = L_6;
		G_B4_0 = L_7;
		G_B4_1 = _stringLiteral2B1AEE29FBAC288AB359FBE1FD7E9D7039EE986C;
		if (L_7)
		{
			G_B5_0 = L_7;
			G_B5_1 = _stringLiteral2B1AEE29FBAC288AB359FBE1FD7E9D7039EE986C;
			goto IL_002e;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_0033;
	}

IL_002e:
	{
		NullCheck(G_B5_0);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_8;
		G_B6_1 = G_B5_1;
	}

IL_0033:
	{
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B6_1, G_B6_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_9, NULL);
		return;
	}

IL_003e:
	{
		// FirebaseUser user = (authTask).Result;
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_10 = ___0_authTask;
		NullCheck(L_10);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_11;
		L_11 = Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F(L_10, Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		// Debug.Log($"User google signed in successfully");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7A3A118AD8C709A8FB48EEBD256D292036364137, NULL);
		// result = true;
		__this->___result_2 = (bool)1;
		// });
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
// System.Void AuthenticationManager/<>c__DisplayClass19_0/<<SignInGoogleAsync>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_MoveNext_m5494A48BC23E145A09A1EC36B39562A51F24BC4F (U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89B650612508ACDDB9A0DC2082485AC3F4F0BE31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD750B914CC651C5B635840E7E9CA1DEF82D44260);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* L_0 = __this->___U3CU3E4__this_3;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			// if (task.IsCanceled)
			Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_1 = __this->___task_2;
			NullCheck(L_1);
			bool L_2;
			L_2 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_1, NULL);
			if (!L_2)
			{
				goto IL_0020_1;
			}
		}
		{
			// Debug.LogError("SignInGoogleAsync---> was canceled.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralD750B914CC651C5B635840E7E9CA1DEF82D44260, NULL);
			goto IL_006b_1;
		}

IL_0020_1:
		{
			// else if (task.IsFaulted)
			Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_3 = __this->___task_2;
			NullCheck(L_3);
			bool L_4;
			L_4 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_3, NULL);
			if (!L_4)
			{
				goto IL_0055_1;
			}
		}
		{
			// Debug.LogError("SignInGoogleAsync ---> encountered an error: " + task.Exception);
			Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_5 = __this->___task_2;
			NullCheck(L_5);
			AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_6;
			L_6 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_5, NULL);
			AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_7 = L_6;
			G_B5_0 = L_7;
			G_B5_1 = _stringLiteral89B650612508ACDDB9A0DC2082485AC3F4F0BE31;
			if (L_7)
			{
				G_B6_0 = L_7;
				G_B6_1 = _stringLiteral89B650612508ACDDB9A0DC2082485AC3F4F0BE31;
				goto IL_0044_1;
			}
		}
		{
			G_B7_0 = ((String_t*)(NULL));
			G_B7_1 = G_B5_1;
			goto IL_0049_1;
		}

IL_0044_1:
		{
			NullCheck(G_B6_0);
			String_t* L_8;
			L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
			G_B7_0 = L_8;
			G_B7_1 = G_B6_1;
		}

IL_0049_1:
		{
			String_t* L_9;
			L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B7_1, G_B7_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_9, NULL);
			goto IL_006b_1;
		}

IL_0055_1:
		{
			// idToken = (task).Result.IdToken;
			U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* L_10 = V_0;
			Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_11 = __this->___task_2;
			NullCheck(L_11);
			GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_12;
			L_12 = Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B(L_11, Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B_RuntimeMethod_var);
			NullCheck(L_12);
			String_t* L_13;
			L_13 = GoogleSignInUser_get_IdToken_m58382F225E3065502A66AFA23F70053153DEA62A_inline(L_12, NULL);
			NullCheck(L_10);
			L_10->___idToken_0 = L_13;
			Il2CppCodeGenWriteBarrier((void**)(&L_10->___idToken_0), (void*)L_13);
		}

IL_006b_1:
		{
			goto IL_0084;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006d;
		}
		throw e;
	}

CATCH_006d:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_14 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_15 = V_1;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_14, L_15, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0097;
	}// end catch (depth: 1)

IL_0084:
	{
		// });
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_16 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_16, NULL);
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_MoveNext_m5494A48BC23E145A09A1EC36B39562A51F24BC4F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4*>(__this + _offset);
	U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_MoveNext_m5494A48BC23E145A09A1EC36B39562A51F24BC4F(_thisAdjusted, method);
}
// System.Void AuthenticationManager/<>c__DisplayClass19_0/<<SignInGoogleAsync>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_SetStateMachine_m474581766500A4C7FAB35E19CAD53B7CA02C7C34 (U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_SetStateMachine_m474581766500A4C7FAB35E19CAD53B7CA02C7C34_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_t13C8F1221AFF08EC01D9686105C87E43A52314F4*>(__this + _offset);
	U3CU3CSignInGoogleAsyncU3Eb__0U3Ed_SetStateMachine_m474581766500A4C7FAB35E19CAD53B7CA02C7C34(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AuthenticationManager/<SignInGoogleAsync>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInGoogleAsyncU3Ed__19_MoveNext_m5DC70A1F89F5B122175BADA2F546E8435B396649 (U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mD15E9A6E04E79BE24EB4E4C2EE69BB0F6282CF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_m1DD34E5190D672FC0ADA173F14AC66B2462E9148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mFD61D9A88FEC3DDB879F4E6F6A4934183707024A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t9BC23F1985BAB2D4C4528E624BEB56D66FA471A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleAuthProvider_t646272DD18929729FAEDA1A1F2CAD87CC5DB8D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m4EB971FF698452AEB022F44DFAEEC81E362753F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m7FA9C259934C2CF76F8F2AF6045F8B9E258475FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m884056EC0E150DD925FC8699219160C375C3F0D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m8EAC0CF6F7399BA0A01909BE1E0A54FD68812148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m07417FCCF4B1AFC798B6E6689EF51B56E50957A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_TisTask_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_m4A5CFA40A9A0301D382852656925960E19E23B97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m549608C19B9ED5ECA2FD9094527278477B3A2E38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m5ACC25F4A7BF31570CB1FE48632BAA6816BA0BB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mB7C249D2A7594DE278EC6A3405675C0E1AF09EE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisGoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_m69E9F2520C11A445365360C1D4F6D4DFC0663F06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CSignInGoogleAsyncU3Eb__0_m22FC0416877CB18ECDBD2EB3AD95FA44709D9371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CSignInGoogleAsyncU3Eb__1_m52301F6FC790A50CCD09D71ACA7549FFA930E2C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E041CB71644ABC519EE3E6595E2439D00838528);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* V_1 = NULL;
	bool V_2 = false;
	Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* V_3 = NULL;
	TaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0074_1;
				}
				case 1:
				{
					goto IL_0113_1;
				}
				case 2:
				{
					goto IL_01c5_1;
				}
			}
		}
		{
			U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* L_3 = (U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			U3CU3Ec__DisplayClass19_0__ctor_m95CE0C0C7CF43859FEA9B21ED4A7E735D23438EB(L_3, NULL);
			__this->___U3CU3E8__1_3 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)L_3);
			// GoogleSignIn.Configuration = _googleSignInConfiguration;
			AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* L_4 = V_1;
			NullCheck(L_4);
			GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_5 = L_4->____googleSignInConfiguration_10;
			GoogleSignIn_set_Configuration_m0009916D90123692747FEC684C93862607011E85(L_5, NULL);
			// Task<GoogleSignInUser> googleSignInUser = Task.FromResult(await GoogleSignIn.DefaultInstance.SignIn());
			GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_6;
			L_6 = GoogleSignIn_get_DefaultInstance_m3A7F48D5EB49BD41DF945D9A54E93BA1C5D382D8(NULL);
			NullCheck(L_6);
			Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_7;
			L_7 = GoogleSignIn_SignIn_mAAA8FC28D91B6CBAB324F888FE951EB9EA64E64D(L_6, NULL);
			NullCheck(L_7);
			TaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9 L_8;
			L_8 = Task_1_GetAwaiter_m5ACC25F4A7BF31570CB1FE48632BAA6816BA0BB1(L_7, Task_1_GetAwaiter_m5ACC25F4A7BF31570CB1FE48632BAA6816BA0BB1_RuntimeMethod_var);
			V_4 = L_8;
			bool L_9;
			L_9 = TaskAwaiter_1_get_IsCompleted_m884056EC0E150DD925FC8699219160C375C3F0D3((&V_4), TaskAwaiter_1_get_IsCompleted_m884056EC0E150DD925FC8699219160C375C3F0D3_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0091_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			TaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9 L_11 = V_4;
			__this->___U3CU3Eu__1_4 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_12 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_m1DD34E5190D672FC0ADA173F14AC66B2462E9148(L_12, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_m1DD34E5190D672FC0ADA173F14AC66B2462E9148_RuntimeMethod_var);
			goto IL_023c;
		}

IL_0074_1:
		{
			TaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9 L_13 = __this->___U3CU3Eu__1_4;
			V_4 = L_13;
			TaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9* L_14 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_1_tE0B05D6B23D1443E74C466156B481A59A74ECDB9));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_0091_1:
		{
			GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_16;
			L_16 = TaskAwaiter_1_GetResult_m4EB971FF698452AEB022F44DFAEEC81E362753F2((&V_4), TaskAwaiter_1_GetResult_m4EB971FF698452AEB022F44DFAEEC81E362753F2_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_17;
			L_17 = Task_FromResult_TisGoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_m69E9F2520C11A445365360C1D4F6D4DFC0663F06(L_16, Task_FromResult_TisGoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_m69E9F2520C11A445365360C1D4F6D4DFC0663F06_RuntimeMethod_var);
			// TaskCompletionSource<FirebaseUser> signInCompleted = new TaskCompletionSource<FirebaseUser>();
			U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* L_18 = __this->___U3CU3E8__1_3;
			TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_19 = (TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7*)il2cpp_codegen_object_new(TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7_il2cpp_TypeInfo_var);
			NullCheck(L_19);
			TaskCompletionSource_1__ctor_m07417FCCF4B1AFC798B6E6689EF51B56E50957A9(L_19, TaskCompletionSource_1__ctor_m07417FCCF4B1AFC798B6E6689EF51B56E50957A9_RuntimeMethod_var);
			NullCheck(L_18);
			L_18->___signInCompleted_1 = L_19;
			Il2CppCodeGenWriteBarrier((void**)(&L_18->___signInCompleted_1), (void*)L_19);
			// bool result = false;
			U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* L_20 = __this->___U3CU3E8__1_3;
			NullCheck(L_20);
			L_20->___result_2 = (bool)0;
			// var idToken = string.Empty;
			U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* L_21 = __this->___U3CU3E8__1_3;
			String_t* L_22 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			NullCheck(L_21);
			L_21->___idToken_0 = L_22;
			Il2CppCodeGenWriteBarrier((void**)(&L_21->___idToken_0), (void*)L_22);
			// await googleSignInUser.ContinueWith(async task =>
			// {
			//     if (task.IsCanceled)
			//     {
			//         Debug.LogError("SignInGoogleAsync---> was canceled.");
			//     }
			//     else if (task.IsFaulted)
			//     {
			//         Debug.LogError("SignInGoogleAsync ---> encountered an error: " + task.Exception);
			//     }
			//     else
			//     {
			//         idToken = (task).Result.IdToken;
			//     }
			// });
			U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* L_23 = __this->___U3CU3E8__1_3;
			Func_2_t9BC23F1985BAB2D4C4528E624BEB56D66FA471A1* L_24 = (Func_2_t9BC23F1985BAB2D4C4528E624BEB56D66FA471A1*)il2cpp_codegen_object_new(Func_2_t9BC23F1985BAB2D4C4528E624BEB56D66FA471A1_il2cpp_TypeInfo_var);
			NullCheck(L_24);
			Func_2__ctor_mD72B6952A3DCB08783D964D60885F2D2F9E282DF(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass19_0_U3CSignInGoogleAsyncU3Eb__0_m22FC0416877CB18ECDBD2EB3AD95FA44709D9371_RuntimeMethod_var), NULL);
			NullCheck(L_17);
			Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11* L_25;
			L_25 = Task_1_ContinueWith_TisTask_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_m4A5CFA40A9A0301D382852656925960E19E23B97(L_17, L_24, Task_1_ContinueWith_TisTask_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_m4A5CFA40A9A0301D382852656925960E19E23B97_RuntimeMethod_var);
			NullCheck(L_25);
			TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 L_26;
			L_26 = Task_1_GetAwaiter_mB7C249D2A7594DE278EC6A3405675C0E1AF09EE3(L_25, Task_1_GetAwaiter_mB7C249D2A7594DE278EC6A3405675C0E1AF09EE3_RuntimeMethod_var);
			V_5 = L_26;
			bool L_27;
			L_27 = TaskAwaiter_1_get_IsCompleted_m8EAC0CF6F7399BA0A01909BE1E0A54FD68812148((&V_5), TaskAwaiter_1_get_IsCompleted_m8EAC0CF6F7399BA0A01909BE1E0A54FD68812148_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_0130_1;
			}
		}
		{
			int32_t L_28 = 1;
			V_0 = L_28;
			__this->___U3CU3E1__state_0 = L_28;
			TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 L_29 = V_5;
			__this->___U3CU3Eu__2_5 = L_29;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_30 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mD15E9A6E04E79BE24EB4E4C2EE69BB0F6282CF40(L_30, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mD15E9A6E04E79BE24EB4E4C2EE69BB0F6282CF40_RuntimeMethod_var);
			goto IL_023c;
		}

IL_0113_1:
		{
			TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 L_31 = __this->___U3CU3Eu__2_5;
			V_5 = L_31;
			TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7* L_32 = (&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_32, sizeof(TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7));
			int32_t L_33 = (-1);
			V_0 = L_33;
			__this->___U3CU3E1__state_0 = L_33;
		}

IL_0130_1:
		{
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_34;
			L_34 = TaskAwaiter_1_GetResult_m7FA9C259934C2CF76F8F2AF6045F8B9E258475FC((&V_5), TaskAwaiter_1_GetResult_m7FA9C259934C2CF76F8F2AF6045F8B9E258475FC_RuntimeMethod_var);
			// if (idToken == string.Empty)
			U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* L_35 = __this->___U3CU3E8__1_3;
			NullCheck(L_35);
			String_t* L_36 = L_35->___idToken_0;
			String_t* L_37 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			bool L_38;
			L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, L_37, NULL);
			if (!L_38)
			{
				goto IL_0160_1;
			}
		}
		{
			// return result;
			U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* L_39 = __this->___U3CU3E8__1_3;
			NullCheck(L_39);
			bool L_40 = L_39->___result_2;
			V_2 = L_40;
			goto IL_0221;
		}

IL_0160_1:
		{
			// Credential credential = GoogleAuthProvider.GetCredential(idToken, null);
			U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* L_41 = __this->___U3CU3E8__1_3;
			NullCheck(L_41);
			String_t* L_42 = L_41->___idToken_0;
			il2cpp_codegen_runtime_class_init_inline(GoogleAuthProvider_t646272DD18929729FAEDA1A1F2CAD87CC5DB8D6E_il2cpp_TypeInfo_var);
			Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* L_43;
			L_43 = GoogleAuthProvider_GetCredential_m908C6090ED39CA7687DF6DC7878728729D137827(L_42, (String_t*)NULL, NULL);
			V_3 = L_43;
			// await _auth.SignInWithCredentialAsync(credential).ContinueWith(authTask =>
			// {
			//     if (authTask.IsCanceled)
			//     {
			//         signInCompleted.SetCanceled();
			//     }
			//     else if (authTask.IsFaulted)
			//     {
			//         Debug.LogError("SignInGoogleAsync---> an error: " + authTask.Exception);
			//     }
			//     else
			//     {
			//         FirebaseUser user = (authTask).Result;
			//         Debug.Log($"User google signed in successfully");
			//         result = true;
			//     }
			// });
			AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* L_44 = V_1;
			NullCheck(L_44);
			FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_45 = L_44->____auth_8;
			Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* L_46 = V_3;
			NullCheck(L_45);
			Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_47;
			L_47 = FirebaseAuth_SignInWithCredentialAsync_m113AA2F02FEE5A28A9D49492AC5F33AA54A55D74(L_45, L_46, NULL);
			U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* L_48 = __this->___U3CU3E8__1_3;
			Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_49 = (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*)il2cpp_codegen_object_new(Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
			NullCheck(L_49);
			Action_1__ctor_mA1A3987C0999C379F2DE5C4FC11270A1C6B91007(L_49, L_48, (intptr_t)((void*)U3CU3Ec__DisplayClass19_0_U3CSignInGoogleAsyncU3Eb__1_m52301F6FC790A50CCD09D71ACA7549FFA930E2C1_RuntimeMethod_var), NULL);
			NullCheck(L_47);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_50;
			L_50 = Task_1_ContinueWith_m549608C19B9ED5ECA2FD9094527278477B3A2E38(L_47, L_49, Task_1_ContinueWith_m549608C19B9ED5ECA2FD9094527278477B3A2E38_RuntimeMethod_var);
			NullCheck(L_50);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_51;
			L_51 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_50, NULL);
			V_6 = L_51;
			bool L_52;
			L_52 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_6), NULL);
			if (L_52)
			{
				goto IL_01e2_1;
			}
		}
		{
			int32_t L_53 = 2;
			V_0 = L_53;
			__this->___U3CU3E1__state_0 = L_53;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_54 = V_6;
			__this->___U3CU3Eu__3_6 = L_54;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__3_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_55 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mFD61D9A88FEC3DDB879F4E6F6A4934183707024A(L_55, (&V_6), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E_mFD61D9A88FEC3DDB879F4E6F6A4934183707024A_RuntimeMethod_var);
			goto IL_023c;
		}

IL_01c5_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_56 = __this->___U3CU3Eu__3_6;
			V_6 = L_56;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_57 = (&__this->___U3CU3Eu__3_6);
			il2cpp_codegen_initobj(L_57, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_58 = (-1);
			V_0 = L_58;
			__this->___U3CU3E1__state_0 = L_58;
		}

IL_01e2_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_6), NULL);
			// Debug.Log($"Message ! ??kt?k.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2E041CB71644ABC519EE3E6595E2439D00838528, NULL);
			// return result;
			U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93* L_59 = __this->___U3CU3E8__1_3;
			NullCheck(L_59);
			bool L_60 = L_59->___result_2;
			V_2 = L_60;
			goto IL_0221;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0201;
		}
		throw e;
	}

CATCH_0201:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_3 = (U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)(U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93*)NULL);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_61 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_62 = V_7;
		AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD(L_61, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_023c;
	}// end catch (depth: 1)

IL_0221:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_3 = (U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)(U3CU3Ec__DisplayClass19_0_t5F47662D3C21E0F71E6E5AF18F47D6A430E4CB93*)NULL);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_63 = (&__this->___U3CU3Et__builder_1);
		bool L_64 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046(L_63, L_64, AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
	}

IL_023c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignInGoogleAsyncU3Ed__19_MoveNext_m5DC70A1F89F5B122175BADA2F546E8435B396649_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E*>(__this + _offset);
	U3CSignInGoogleAsyncU3Ed__19_MoveNext_m5DC70A1F89F5B122175BADA2F546E8435B396649(_thisAdjusted, method);
}
// System.Void AuthenticationManager/<SignInGoogleAsync>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInGoogleAsyncU3Ed__19_SetStateMachine_mA7C8489A8E82B6A3D6716527AC209BC303BA65E3 (U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignInGoogleAsyncU3Ed__19_SetStateMachine_mA7C8489A8E82B6A3D6716527AC209BC303BA65E3_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignInGoogleAsyncU3Ed__19_tAD2B1763085D4C8890361EE704D3AF4330B7062E*>(__this + _offset);
	U3CSignInGoogleAsyncU3Ed__19_SetStateMachine_mA7C8489A8E82B6A3D6716527AC209BC303BA65E3(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AuthenticationManager/<DeleteAccount>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteAccountU3Ed__20_MoveNext_mF03E4D2C33D0303D74B09E4E9008E7B3A330CC79 (U3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC_m01D9798070DEAFAA34AF8D6A80885ED4CA8B1477_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDeleteAccountU3Eb__20_0_m629C7F9F1B049CDCA978F702C29288BCF7FDFF3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* V_1 = NULL;
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* V_2 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* G_B5_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B5_1 = NULL;
	Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* G_B4_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B4_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0079_1;
			}
		}
		{
			// FirebaseUser user = _auth.CurrentUser;
			AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* L_3 = V_1;
			NullCheck(L_3);
			FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_4 = L_3->____auth_8;
			NullCheck(L_4);
			FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_5;
			L_5 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_4, NULL);
			V_2 = L_5;
			// if (user != null)
			FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_6 = V_2;
			if (!L_6)
			{
				goto IL_009c_1;
			}
		}
		{
			// await user.DeleteAsync().ContinueWith(task =>
			// {
			//     if (task.IsCanceled)
			//     {
			//         Debug.LogError("DeleteAsync was canceled.");
			//         return;
			//     }
			// 
			//     if (task.IsFaulted)
			//     {
			//         Debug.LogError("DeleteAsync encountered an error: " + task.Exception);
			//         return;
			//     }
			// 
			//     HomeCanvasController.Instance.Hide();
			//     AuthenticationCanvasController.Instance.Show();
			//     Debug.Log("User deleted successfully.");
			// });
			FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_7 = V_2;
			NullCheck(L_7);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
			L_8 = FirebaseUser_DeleteAsync_m4512D85F24C18939977A84505D6735DC6E91BE50(L_7, NULL);
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var);
			Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_9 = ((U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_2;
			Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_10 = L_9;
			G_B4_0 = L_10;
			G_B4_1 = L_8;
			if (L_10)
			{
				G_B5_0 = L_10;
				G_B5_1 = L_8;
				goto IL_0045_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var);
			U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5* L_11 = ((U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_12 = (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*)il2cpp_codegen_object_new(Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
			NullCheck(L_12);
			Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0(L_12, L_11, (intptr_t)((void*)U3CU3Ec_U3CDeleteAccountU3Eb__20_0_m629C7F9F1B049CDCA978F702C29288BCF7FDFF3B_RuntimeMethod_var), NULL);
			Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_13 = L_12;
			((U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_2 = L_13;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t94A124C7EA1658BFA62EC4DA567204636C9F9EE5_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_2), (void*)L_13);
			G_B5_0 = L_13;
			G_B5_1 = G_B4_1;
		}

IL_0045_1:
		{
			NullCheck(G_B5_1);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_14;
			L_14 = Task_ContinueWith_m4150CBD0F7AC870F40F5E8D84E265B47A642C06C(G_B5_1, G_B5_0, NULL);
			NullCheck(L_14);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15;
			L_15 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_14, NULL);
			V_3 = L_15;
			bool L_16;
			L_16 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
			if (L_16)
			{
				goto IL_0095_1;
			}
		}
		{
			int32_t L_17 = 0;
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_18 = V_3;
			__this->___U3CU3Eu__1_3 = L_18;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_19 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC_m01D9798070DEAFAA34AF8D6A80885ED4CA8B1477(L_19, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC_m01D9798070DEAFAA34AF8D6A80885ED4CA8B1477_RuntimeMethod_var);
			goto IL_00ca;
		}

IL_0079_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_20 = __this->___U3CU3Eu__1_3;
			V_3 = L_20;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_21 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_21, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_22 = (-1);
			V_0 = L_22;
			__this->___U3CU3E1__state_0 = L_22;
		}

IL_0095_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
		}

IL_009c_1:
		{
			goto IL_00b7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009e;
		}
		throw e;
	}

CATCH_009e:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_23 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_24 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_23, L_24, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ca;
	}// end catch (depth: 1)

IL_00b7:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_25 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_25, NULL);
	}

IL_00ca:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDeleteAccountU3Ed__20_MoveNext_mF03E4D2C33D0303D74B09E4E9008E7B3A330CC79_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC*>(__this + _offset);
	U3CDeleteAccountU3Ed__20_MoveNext_mF03E4D2C33D0303D74B09E4E9008E7B3A330CC79(_thisAdjusted, method);
}
// System.Void AuthenticationManager/<DeleteAccount>d__20::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteAccountU3Ed__20_SetStateMachine_m1B3D1E12FD27F122D24CDDBE16E4C9654746B8A1 (U3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDeleteAccountU3Ed__20_SetStateMachine_m1B3D1E12FD27F122D24CDDBE16E4C9654746B8A1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDeleteAccountU3Ed__20_t0A195C9D4F198135915824BFB5AEBCD21F4C11BC*>(__this + _offset);
	U3CDeleteAccountU3Ed__20_SetStateMachine_m1B3D1E12FD27F122D24CDDBE16E4C9654746B8A1(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AuthenticationCanvasController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationCanvasController_Awake_m59287D9726008117E99709C81F61AC2ED20E45D0 (AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* L_0 = ((AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72_il2cpp_TypeInfo_var))->___Instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// Instance = this;
		((AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72_il2cpp_TypeInfo_var))->___Instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72_il2cpp_TypeInfo_var))->___Instance_5), (void*)__this);
		goto IL_0020;
	}

IL_0015:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0020:
	{
		// base.Awake();
		CanvasControllerBase_Awake_m2915FCE9A958615749588310A2DE96806A6BA726(__this, NULL);
		// }
		return;
	}
}
// System.Void AuthenticationCanvasController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationCanvasController_Start_m5FC34C091E37432E94B2DA0C9BC293CCAA98DE19 (AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationCanvasController_SignInAnonymous_m5D1AB733C8290F87E3D575F5F5161F0B93CAE394_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationCanvasController_SignInGoogle_mA39136A8E247B64E6D8E85184E7BCC45D7B76C9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _anonymousSingInButton.onClick.AddListener(SignInAnonymous);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____anonymousSingInButton_6;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)AuthenticationCanvasController_SignInAnonymous_m5D1AB733C8290F87E3D575F5F5161F0B93CAE394_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// _googleSingInButton.onClick.AddListener(SignInGoogle);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____googleSingInButton_7;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)AuthenticationCanvasController_SignInGoogle_mA39136A8E247B64E6D8E85184E7BCC45D7B76C9E_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void AuthenticationCanvasController::SignInAnonymous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationCanvasController_SignInAnonymous_m5D1AB733C8290F87E3D575F5F5161F0B93CAE394 (AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67_m3029A26ABE314A956F58600F5A9ABA9ED25DC97C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67_m3029A26ABE314A956F58600F5A9ABA9ED25DC97C(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67_m3029A26ABE314A956F58600F5A9ABA9ED25DC97C_RuntimeMethod_var);
		return;
	}
}
// System.Void AuthenticationCanvasController::SignInGoogle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationCanvasController_SignInGoogle_mA39136A8E247B64E6D8E85184E7BCC45D7B76C9E (AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0_mB07DC17C9F3EC64250AF21AE97B004A70F007B44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0_mB07DC17C9F3EC64250AF21AE97B004A70F007B44(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0_mB07DC17C9F3EC64250AF21AE97B004A70F007B44_RuntimeMethod_var);
		return;
	}
}
// System.Void AuthenticationCanvasController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationCanvasController__ctor_mF52BF78FAC99FE4F893BC4CBF35C8200B5E97028 (AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* __this, const RuntimeMethod* method) 
{
	{
		CanvasControllerBase__ctor_m04404B06236AC8147CA3CC25F01C72767E6D03F2(__this, NULL);
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
// System.Void AuthenticationCanvasController/<SignInAnonymous>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInAnonymousU3Ed__5_MoveNext_m1D4AE33A3D759AFD6FA98E6BDC0017BBE0E45DA3 (U3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67_m5A0B54432393235F665BE5091E5565E8089E964B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m758B73EB33323FE7C8E2187BDF0DFA12DCDB2B78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3648B5804433DF67C739DC6A6EEBD633F059DD4F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* V_1 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004a_1;
			}
		}
		{
			// var signResult = await AuthenticationManager.Instance.SignInAnonymousAsync();
			AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* L_3;
			L_3 = Singleton_1_get_Instance_m758B73EB33323FE7C8E2187BDF0DFA12DCDB2B78(Singleton_1_get_Instance_m758B73EB33323FE7C8E2187BDF0DFA12DCDB2B78_RuntimeMethod_var);
			NullCheck(L_3);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4;
			L_4 = AuthenticationManager_SignInAnonymousAsync_mD207360244BE3FD845CF4A8CA44241453F429873(L_3, NULL);
			NullCheck(L_4);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_5;
			L_5 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_4, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_2 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_2), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0066_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_8 = V_2;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67_m5A0B54432393235F665BE5091E5565E8089E964B(L_9, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67_m5A0B54432393235F665BE5091E5565E8089E964B_RuntimeMethod_var);
			goto IL_00b5;
		}

IL_004a_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_10 = __this->___U3CU3Eu__1_3;
			V_2 = L_10;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_11 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_0066_1:
		{
			bool L_13;
			L_13 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_2), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			// if (signResult)
			if (!L_13)
			{
				goto IL_0089_1;
			}
		}
		{
			// Debug.Log($"Sign In Anonymous !");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3648B5804433DF67C739DC6A6EEBD633F059DD4F, NULL);
			// Hide();
			AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* L_14 = V_1;
			NullCheck(L_14);
			VirtualActionInvoker0::Invoke(6 /* System.Void _Game.Scripts.CanvasControllerBase::Hide() */, L_14);
			// HomeCanvasController.Instance.Show();
			HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC* L_15 = ((HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_StaticFields*)il2cpp_codegen_static_fields_for(HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_il2cpp_TypeInfo_var))->___Instance_5;
			NullCheck(L_15);
			VirtualActionInvoker0::Invoke(5 /* System.Void _Game.Scripts.CanvasControllerBase::Show() */, L_15);
		}

IL_0089_1:
		{
			goto IL_00a2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008b;
		}
		throw e;
	}

CATCH_008b:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_16 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_17 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_16, L_17, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b5;
	}// end catch (depth: 1)

IL_00a2:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_18 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_18, NULL);
	}

IL_00b5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignInAnonymousU3Ed__5_MoveNext_m1D4AE33A3D759AFD6FA98E6BDC0017BBE0E45DA3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67*>(__this + _offset);
	U3CSignInAnonymousU3Ed__5_MoveNext_m1D4AE33A3D759AFD6FA98E6BDC0017BBE0E45DA3(_thisAdjusted, method);
}
// System.Void AuthenticationCanvasController/<SignInAnonymous>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInAnonymousU3Ed__5_SetStateMachine_mC404B55D0ED0C78FC02C2C767024B770DBF3B7AB (U3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignInAnonymousU3Ed__5_SetStateMachine_mC404B55D0ED0C78FC02C2C767024B770DBF3B7AB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignInAnonymousU3Ed__5_t2A90AD0F934B53AF5045B51FBB9D420AC9888E67*>(__this + _offset);
	U3CSignInAnonymousU3Ed__5_SetStateMachine_mC404B55D0ED0C78FC02C2C767024B770DBF3B7AB(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AuthenticationCanvasController/<SignInGoogle>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInGoogleU3Ed__6_MoveNext_m6AEAD3ED6521532C3ECDC2D53A992F26C22F993E (U3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0_m1680CF5666B58020AFBFE0D3697836D57314756A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m758B73EB33323FE7C8E2187BDF0DFA12DCDB2B78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD96F4ECE8F390D6FD974BFA2A25CA2B3007D9E40);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* V_1 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004a_1;
			}
		}
		{
			// var signResult = await AuthenticationManager.Instance.SignInGoogleAsync();
			AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* L_3;
			L_3 = Singleton_1_get_Instance_m758B73EB33323FE7C8E2187BDF0DFA12DCDB2B78(Singleton_1_get_Instance_m758B73EB33323FE7C8E2187BDF0DFA12DCDB2B78_RuntimeMethod_var);
			NullCheck(L_3);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4;
			L_4 = AuthenticationManager_SignInGoogleAsync_m40226538845DB6D6215E31DAAA635BCDFD7B7A50(L_3, NULL);
			NullCheck(L_4);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_5;
			L_5 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_4, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_2 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_2), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0066_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_8 = V_2;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0_m1680CF5666B58020AFBFE0D3697836D57314756A(L_9, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0_m1680CF5666B58020AFBFE0D3697836D57314756A_RuntimeMethod_var);
			goto IL_00b5;
		}

IL_004a_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_10 = __this->___U3CU3Eu__1_3;
			V_2 = L_10;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_11 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_0066_1:
		{
			bool L_13;
			L_13 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_2), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			// if (signResult)
			if (!L_13)
			{
				goto IL_0089_1;
			}
		}
		{
			// Debug.Log($"Sign In Google !");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD96F4ECE8F390D6FD974BFA2A25CA2B3007D9E40, NULL);
			// Hide();
			AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* L_14 = V_1;
			NullCheck(L_14);
			VirtualActionInvoker0::Invoke(6 /* System.Void _Game.Scripts.CanvasControllerBase::Hide() */, L_14);
			// HomeCanvasController.Instance.Show();
			HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC* L_15 = ((HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_StaticFields*)il2cpp_codegen_static_fields_for(HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_il2cpp_TypeInfo_var))->___Instance_5;
			NullCheck(L_15);
			VirtualActionInvoker0::Invoke(5 /* System.Void _Game.Scripts.CanvasControllerBase::Show() */, L_15);
		}

IL_0089_1:
		{
			goto IL_00a2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008b;
		}
		throw e;
	}

CATCH_008b:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_16 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_17 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_16, L_17, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b5;
	}// end catch (depth: 1)

IL_00a2:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_18 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_18, NULL);
	}

IL_00b5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignInGoogleU3Ed__6_MoveNext_m6AEAD3ED6521532C3ECDC2D53A992F26C22F993E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0*>(__this + _offset);
	U3CSignInGoogleU3Ed__6_MoveNext_m6AEAD3ED6521532C3ECDC2D53A992F26C22F993E(_thisAdjusted, method);
}
// System.Void AuthenticationCanvasController/<SignInGoogle>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInGoogleU3Ed__6_SetStateMachine_m8567F0B2CEBCBC04ECA54A48BE1F560E73771805 (U3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignInGoogleU3Ed__6_SetStateMachine_m8567F0B2CEBCBC04ECA54A48BE1F560E73771805_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignInGoogleU3Ed__6_t7608E392D9A6CB5B56640281C91C76F163D4D6D0*>(__this + _offset);
	U3CSignInGoogleU3Ed__6_SetStateMachine_m8567F0B2CEBCBC04ECA54A48BE1F560E73771805(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Firebase.FirebaseApp FirebaseManager::get_FirebaseApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseManager_get_FirebaseApp_m44323017A614D7246C1FEB661330753F0C6CB051 (FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* __this, const RuntimeMethod* method) 
{
	{
		// public FirebaseApp FirebaseApp { get; private set; }
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = __this->___U3CFirebaseAppU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void FirebaseManager::set_FirebaseApp(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseManager_set_FirebaseApp_m20062A2FD556B158CA3CDB83379FFBD5144AE97E (FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* __this, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_value, const RuntimeMethod* method) 
{
	{
		// public FirebaseApp FirebaseApp { get; private set; }
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___0_value;
		__this->___U3CFirebaseAppU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFirebaseAppU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Boolean FirebaseManager::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseManager_get_IsInitialized_mDED0DDF70FAF39EEAF4E52AE1684993233172CA4 (FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = __this->___U3CIsInitializedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void FirebaseManager::set_IsInitialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseManager_set_IsInitialized_m28D7E8A3F852CB451A4FBCBD46A72481362AEA16 (FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsInitializedU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void FirebaseManager::add_Initialized(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseManager_add_Initialized_m24DC2565C3FBAE54772310AD0C75D9D0F013CF44 (FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Initialized_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Initialized_7);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FirebaseManager::remove_Initialized(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseManager_remove_Initialized_mF5DFCCFF59138359D5C708E5A5A1C6BBEF1614CC (FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Initialized_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Initialized_7);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FirebaseManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseManager_Awake_m242DE3BA656C98CBBAE82A124CCF89E544F80D4D (FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseManager_U3CAwakeU3Eb__11_0_m001FB5CEBE7F8452D91AD8863AAFD75D187E1E43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
		// {
		//     var dependencyStatus = task.Result;
		//     if (dependencyStatus == DependencyStatus.Available)
		//     {
		//         FirebaseApp = FirebaseApp.DefaultInstance;
		//         Initialized?.Invoke();
		//         IsInitialized = true;
		//     }
		//     else
		//     {
		//         Debug.LogError($"Could not resolve all Firebase dependencies: {dependencyStatus}");
		//         // Firebase Unity SDK is not safe to use here.
		//     }
		// });
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_0;
		L_0 = FirebaseApp_CheckAndFixDependenciesAsync_mB21D0BA4D3C2F6C975D72DB0F2CEFF46A4361557(NULL);
		Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC* L_1 = (Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC*)il2cpp_codegen_object_new(Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m4F6B8318AD92B94ABD9C753FFD7CEE0687417DAC(L_1, __this, (intptr_t)((void*)FirebaseManager_U3CAwakeU3Eb__11_0_m001FB5CEBE7F8452D91AD8863AAFD75D187E1E43_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD(L_0, L_1, Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FirebaseManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseManager__ctor_m13285F82A840546CBCA973AD17A16F39622BBD34 (FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m5AD0B3BC1A2C173C3280C7A45684EC8415D4119A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m5AD0B3BC1A2C173C3280C7A45684EC8415D4119A(__this, Singleton_1__ctor_m5AD0B3BC1A2C173C3280C7A45684EC8415D4119A_RuntimeMethod_var);
		return;
	}
}
// System.Void FirebaseManager::<Awake>b__11_0(System.Threading.Tasks.Task`1<Firebase.DependencyStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseManager_U3CAwakeU3Eb__11_0_m001FB5CEBE7F8452D91AD8863AAFD75D187E1E43 (FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* __this, Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral674EF683D8B400F1F0F590BCCA13A350C3C1A25F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	{
		// var dependencyStatus = task.Result;
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_0 = ___0_task;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA(L_0, Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA_RuntimeMethod_var);
		V_0 = L_1;
		// if (dependencyStatus == DependencyStatus.Available)
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// FirebaseApp = FirebaseApp.DefaultInstance;
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_3;
		L_3 = FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0(NULL);
		FirebaseManager_set_FirebaseApp_m20062A2FD556B158CA3CDB83379FFBD5144AE97E_inline(__this, L_3, NULL);
		// Initialized?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___Initialized_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0021;
		}
	}
	{
		goto IL_0026;
	}

IL_0021:
	{
		NullCheck(G_B3_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B3_0, NULL);
	}

IL_0026:
	{
		// IsInitialized = true;
		FirebaseManager_set_IsInitialized_m28D7E8A3F852CB451A4FBCBD46A72481362AEA16_inline(__this, (bool)1, NULL);
		return;
	}

IL_002e:
	{
		// Debug.LogError($"Could not resolve all Firebase dependencies: {dependencyStatus}");
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(DependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral674EF683D8B400F1F0F590BCCA13A350C3C1A25F, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_9, NULL);
		// });
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
// System.Void HomeCanvasController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HomeCanvasController_Awake_mA491B548DD3A0093BE0688433CC4C307ED7CA713 (HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC* L_0 = ((HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_StaticFields*)il2cpp_codegen_static_fields_for(HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_il2cpp_TypeInfo_var))->___Instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// Instance = this;
		((HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_StaticFields*)il2cpp_codegen_static_fields_for(HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_il2cpp_TypeInfo_var))->___Instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_StaticFields*)il2cpp_codegen_static_fields_for(HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_il2cpp_TypeInfo_var))->___Instance_5), (void*)__this);
		goto IL_0020;
	}

IL_0015:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0020:
	{
		// base.Awake();
		CanvasControllerBase_Awake_m2915FCE9A958615749588310A2DE96806A6BA726(__this, NULL);
		// }
		return;
	}
}
// System.Void HomeCanvasController::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HomeCanvasController_Show_m41F0F65146767D4D9879007570E86DB84034F38A (HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// base.Show();
		CanvasControllerBase_Show_mB4421B356CF35B493F28010B47FD585A5F8481B9(__this, NULL);
		// var rewardedCoin = FirebaseRemoteConfig.DefaultInstance.GetValue(RemoteConfigController.RewardedCoinKey)
		//     .LongValue;
		il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_0;
		L_0 = FirebaseRemoteConfig_get_DefaultInstance_mE7F726BCB1E35F348E25ABB83ACDAFA1A4AD495C(NULL);
		String_t* L_1;
		L_1 = RemoteConfigController_get_RewardedCoinKey_m5FF4EDFB4CE3029EFDFC8008CDC0BBEDFC8288B9(NULL);
		NullCheck(L_0);
		ConfigValue_tB791F7928CCC2F56D3D765B09F16F9D3FFF17857 L_2;
		L_2 = FirebaseRemoteConfig_GetValue_m3FDC4B8924F68E22E5D7478AA0C6D70221D7E974(L_0, L_1, NULL);
		V_1 = L_2;
		int64_t L_3;
		L_3 = ConfigValue_get_LongValue_mFD7777CA6011E70B1A3C570CC9E25D60FA6E5968((&V_1), NULL);
		V_0 = L_3;
		// _rewardedCoinText.text = rewardedCoin.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->____rewardedCoinText_7;
		String_t* L_5;
		L_5 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_0), NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void HomeCanvasController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HomeCanvasController__ctor_mCB4045D44F21B208ED93F50C717725E7759B4122 (HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC* __this, const RuntimeMethod* method) 
{
	{
		CanvasControllerBase__ctor_m04404B06236AC8147CA3CC25F01C72767E6D03F2(__this, NULL);
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
// System.Void LoadingCanvasController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingCanvasController_Awake_m185F7A6472FFD6F2F378D24791F9553805C9B0E6 (LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC* L_0 = ((LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC_StaticFields*)il2cpp_codegen_static_fields_for(LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC_il2cpp_TypeInfo_var))->___Instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// Instance = this;
		((LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC_StaticFields*)il2cpp_codegen_static_fields_for(LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC_il2cpp_TypeInfo_var))->___Instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC_StaticFields*)il2cpp_codegen_static_fields_for(LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC_il2cpp_TypeInfo_var))->___Instance_5), (void*)__this);
		goto IL_0020;
	}

IL_0015:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0020:
	{
		// base.Awake();
		CanvasControllerBase_Awake_m2915FCE9A958615749588310A2DE96806A6BA726(__this, NULL);
		// }
		return;
	}
}
// System.Void LoadingCanvasController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingCanvasController__ctor_m9C784ABD8BB1E2BA304F5EFD0EE9D258F1292F89 (LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC* __this, const RuntimeMethod* method) 
{
	{
		CanvasControllerBase__ctor_m04404B06236AC8147CA3CC25F01C72767E6D03F2(__this, NULL);
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m4F793460B18CBC5BDB3BE09ACB921FC450A9BC6D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RemoteConfigController.Instance.Init();
		RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* L_0;
		L_0 = Singleton_1_get_Instance_m4F793460B18CBC5BDB3BE09ACB921FC450A9BC6D(Singleton_1_get_Instance_m4F793460B18CBC5BDB3BE09ACB921FC450A9BC6D_RuntimeMethod_var);
		NullCheck(L_0);
		RemoteConfigController_Init_mEED293FE74F5781906A145A1CAEC2EBCF3FCD3CB(L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_Start_m58C27E6CE0D95B2030420051813F7C8699EED8EA (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9* L_0 = (U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9*)il2cpp_codegen_object_new(U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__1__ctor_mCFB58CF11D00E520E8C559CBC9E88F13EB15424A(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_mC9F4E3C6F27207A9DF8367CEB037E317F6139A52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_mC9F4E3C6F27207A9DF8367CEB037E317F6139A52(__this, Singleton_1__ctor_mC9F4E3C6F27207A9DF8367CEB037E317F6139A52_RuntimeMethod_var);
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
// System.Void GameManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9E093D331C270DADD1A4C76D46C227AF4B4AA4D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* L_0 = (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5*)il2cpp_codegen_object_new(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m6A162D1CE45F1D23F65A28A8DE89B3B115054DC7(L_0, NULL);
		((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void GameManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6A162D1CE45F1D23F65A28A8DE89B3B115054DC7 (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean GameManager/<>c::<Start>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__1_0_m1E2E7A1C8C9E2EB3A3ABDE6E243652DF72C9CCF5 (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m583337DA21A39446D30C6D628BE4E55A7675D85E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yield return new WaitUntil(() => FirebaseManager.Instance.IsInitialized);
		FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* L_0;
		L_0 = Singleton_1_get_Instance_m583337DA21A39446D30C6D628BE4E55A7675D85E(Singleton_1_get_Instance_m583337DA21A39446D30C6D628BE4E55A7675D85E_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = FirebaseManager_get_IsInitialized_mDED0DDF70FAF39EEAF4E52AE1684993233172CA4_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean GameManager/<>c::<Start>b__1_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__1_1_m70B32588E040329D27ED6B28A5785BC3D86C23B3 (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m4F793460B18CBC5BDB3BE09ACB921FC450A9BC6D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yield return new WaitUntil(() => RemoteConfigController.Instance.IsInitialized);
		RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* L_0;
		L_0 = Singleton_1_get_Instance_m4F793460B18CBC5BDB3BE09ACB921FC450A9BC6D(Singleton_1_get_Instance_m4F793460B18CBC5BDB3BE09ACB921FC450A9BC6D_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = RemoteConfigController_get_IsInitialized_m3F4840D801BDB9E32F7D61BE49B3D049E3DC4FAB_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean GameManager/<>c::<Start>b__1_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__1_2_m9305585DB9A855582E7FE0702640EDD973528E33 (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m758B73EB33323FE7C8E2187BDF0DFA12DCDB2B78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yield return new WaitUntil(() => AuthenticationManager.Instance.IsInitialized);
		AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* L_0;
		L_0 = Singleton_1_get_Instance_m758B73EB33323FE7C8E2187BDF0DFA12DCDB2B78(Singleton_1_get_Instance_m758B73EB33323FE7C8E2187BDF0DFA12DCDB2B78_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = AuthenticationManager_get_IsInitialized_mA2FB05A7D3CD12B933DB7E524DFC716818BAE50C_inline(L_0, NULL);
		return L_1;
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
// System.Void GameManager/<Start>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1__ctor_mCFB58CF11D00E520E8C559CBC9E88F13EB15424A (U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<Start>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_System_IDisposable_Dispose_m3FD979F2E6653202954FD62CEC105A475DE27475 (U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<Start>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__1_MoveNext_mC646AA33443427D7949EAE0081EC2D20D4C51FDF (U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m758B73EB33323FE7C8E2187BDF0DFA12DCDB2B78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__1_0_m1E2E7A1C8C9E2EB3A3ABDE6E243652DF72C9CCF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__1_1_m70B32588E040329D27ED6B28A5785BC3D86C23B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__1_2_m9305585DB9A855582E7FE0702640EDD973528E33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B4_0 = NULL;
	U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9* G_B4_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B3_0 = NULL;
	U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9* G_B3_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B7_0 = NULL;
	U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9* G_B7_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B6_0 = NULL;
	U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9* G_B6_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B10_0 = NULL;
	U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9* G_B10_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B9_0 = NULL;
	U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9* G_B9_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_009d;
			}
			case 3:
			{
				goto IL_00d7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// LoadingCanvasController.Instance.Show();
		LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC* L_2 = ((LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC_StaticFields*)il2cpp_codegen_static_fields_for(LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC_il2cpp_TypeInfo_var))->___Instance_5;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(5 /* System.Void _Game.Scripts.CanvasControllerBase::Show() */, L_2);
		// yield return new WaitUntil(() => FirebaseManager.Instance.IsInitialized);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_3 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = __this;
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* L_5 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_6 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__1_0_m1E2E7A1C8C9E2EB3A3ABDE6E243652DF72C9CCF5_RuntimeMethod_var), NULL);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_7 = L_6;
		((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_7);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
	}

IL_0050:
	{
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_8 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_8, G_B4_0, NULL);
		NullCheck(G_B4_1);
		G_B4_1->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0063:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(() => RemoteConfigController.Instance.IsInitialized);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_9 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_2;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_10 = L_9;
		G_B6_0 = L_10;
		G_B6_1 = __this;
		if (L_10)
		{
			G_B7_0 = L_10;
			G_B7_1 = __this;
			goto IL_008a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* L_11 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_12 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_12, L_11, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__1_1_m70B32588E040329D27ED6B28A5785BC3D86C23B3_RuntimeMethod_var), NULL);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_13 = L_12;
		((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_2), (void*)L_13);
		G_B7_0 = L_13;
		G_B7_1 = G_B6_1;
	}

IL_008a:
	{
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_14 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_14, G_B7_0, NULL);
		NullCheck(G_B7_1);
		G_B7_1->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&G_B7_1->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_009d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(() => AuthenticationManager.Instance.IsInitialized);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_15 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__1_2_3;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_16 = L_15;
		G_B9_0 = L_16;
		G_B9_1 = __this;
		if (L_16)
		{
			G_B10_0 = L_16;
			G_B10_1 = __this;
			goto IL_00c4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* L_17 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_18 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_18, L_17, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__1_2_m9305585DB9A855582E7FE0702640EDD973528E33_RuntimeMethod_var), NULL);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_19 = L_18;
		((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__1_2_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__1_2_3), (void*)L_19);
		G_B10_0 = L_19;
		G_B10_1 = G_B9_1;
	}

IL_00c4:
	{
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_20 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_20, G_B10_0, NULL);
		NullCheck(G_B10_1);
		G_B10_1->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&G_B10_1->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00d7:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// LoadingCanvasController.Instance.Hide();
		LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC* L_21 = ((LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC_StaticFields*)il2cpp_codegen_static_fields_for(LoadingCanvasController_t6656FB84DF0A395F23780F1A1AC66C68F77B4FFC_il2cpp_TypeInfo_var))->___Instance_5;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(6 /* System.Void _Game.Scripts.CanvasControllerBase::Hide() */, L_21);
		// if (AuthenticationManager.Instance.IsSignedIn)
		AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* L_22;
		L_22 = Singleton_1_get_Instance_m758B73EB33323FE7C8E2187BDF0DFA12DCDB2B78(Singleton_1_get_Instance_m758B73EB33323FE7C8E2187BDF0DFA12DCDB2B78_RuntimeMethod_var);
		NullCheck(L_22);
		bool L_23;
		L_23 = AuthenticationManager_get_IsSignedIn_mDF8C2D0FAA1E127EF9AC0B5A8336F7FD49635D89_inline(L_22, NULL);
		if (!L_23)
		{
			goto IL_0100;
		}
	}
	{
		// HomeCanvasController.Instance.Show();
		HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC* L_24 = ((HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_StaticFields*)il2cpp_codegen_static_fields_for(HomeCanvasController_t804D08F892A15E2486D6E71E9FDE18DFF45145EC_il2cpp_TypeInfo_var))->___Instance_5;
		NullCheck(L_24);
		VirtualActionInvoker0::Invoke(5 /* System.Void _Game.Scripts.CanvasControllerBase::Show() */, L_24);
		goto IL_010a;
	}

IL_0100:
	{
		// AuthenticationCanvasController.Instance.Show();
		AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72* L_25 = ((AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationCanvasController_tF67857FAF87891A26C692C8377795D07C8C4AF72_il2cpp_TypeInfo_var))->___Instance_5;
		NullCheck(L_25);
		VirtualActionInvoker0::Invoke(5 /* System.Void _Game.Scripts.CanvasControllerBase::Show() */, L_25);
	}

IL_010a:
	{
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<Start>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4D1BF77AA5B37F267FF9499E8850A58ABC844208 (U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<Start>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m118AEE091A4DC2FB5E6F88A4275D961953416A4E (U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m118AEE091A4DC2FB5E6F88A4275D961953416A4E_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<Start>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__1_System_Collections_IEnumerator_get_Current_m6111C7D21D65189A0B6C346FC47501AB8FA06E20 (U3CStartU3Ed__1_t73651D30EE93C81CAEF5B1B0B0E99ADA246C24A9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// UnityEngine.CanvasGroup _Game.Scripts.CanvasControllerBase::get_CanvasGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* CanvasControllerBase_get_CanvasGroup_m03E1584275E401004A90E80AEFB6FA9C3A6F8452 (CanvasControllerBase_tEF2A4A21096F3E5CAF0A2667F33CC4BC69C5D51F* __this, const RuntimeMethod* method) 
{
	{
		// get => _canvasGroup;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = __this->____canvasGroup_4;
		return L_0;
	}
}
// System.Void _Game.Scripts.CanvasControllerBase::set_CanvasGroup(UnityEngine.CanvasGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerBase_set_CanvasGroup_mAB160A26E9D5242FC1053E57FE6F5EF1213E150C (CanvasControllerBase_tEF2A4A21096F3E5CAF0A2667F33CC4BC69C5D51F* __this, CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___0_value, const RuntimeMethod* method) 
{
	{
		// protected set => _canvasGroup = value;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = ___0_value;
		__this->____canvasGroup_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____canvasGroup_4), (void*)L_0);
		return;
	}
}
// System.Void _Game.Scripts.CanvasControllerBase::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerBase_Awake_m2915FCE9A958615749588310A2DE96806A6BA726 (CanvasControllerBase_tEF2A4A21096F3E5CAF0A2667F33CC4BC69C5D51F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _canvasGroup = GetComponent<CanvasGroup>();
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0;
		L_0 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(__this, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		__this->____canvasGroup_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____canvasGroup_4), (void*)L_0);
		// Hide();
		VirtualActionInvoker0::Invoke(6 /* System.Void _Game.Scripts.CanvasControllerBase::Hide() */, __this);
		// }
		return;
	}
}
// System.Void _Game.Scripts.CanvasControllerBase::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerBase_Show_mB4421B356CF35B493F28010B47FD585A5F8481B9 (CanvasControllerBase_tEF2A4A21096F3E5CAF0A2667F33CC4BC69C5D51F* __this, const RuntimeMethod* method) 
{
	{
		// _canvasGroup.alpha = 1;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = __this->____canvasGroup_4;
		NullCheck(L_0);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_0, (1.0f), NULL);
		// _canvasGroup.blocksRaycasts = true;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_1 = __this->____canvasGroup_4;
		NullCheck(L_1);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void _Game.Scripts.CanvasControllerBase::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerBase_Hide_m1DD270C58ADF5527A1D71619F2D1AA29930DEEC3 (CanvasControllerBase_tEF2A4A21096F3E5CAF0A2667F33CC4BC69C5D51F* __this, const RuntimeMethod* method) 
{
	{
		// _canvasGroup.alpha = 0;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = __this->____canvasGroup_4;
		NullCheck(L_0);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_0, (0.0f), NULL);
		// _canvasGroup.blocksRaycasts = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_1 = __this->____canvasGroup_4;
		NullCheck(L_1);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void _Game.Scripts.CanvasControllerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerBase__ctor_m04404B06236AC8147CA3CC25F01C72767E6D03F2 (CanvasControllerBase_tEF2A4A21096F3E5CAF0A2667F33CC4BC69C5D51F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean _Game.Controller.RemoteConfigController::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteConfigController_get_IsInitialized_m3F4840D801BDB9E32F7D61BE49B3D049E3DC4FAB (RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = __this->___U3CIsInitializedU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void _Game.Controller.RemoteConfigController::set_IsInitialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigController_set_IsInitialized_m180D3B75A02DB2D433411D1E3ADA4A1E9E6080BC (RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsInitializedU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String _Game.Controller.RemoteConfigController::get_RewardedCoinKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoteConfigController_get_RewardedCoinKey_m5FF4EDFB4CE3029EFDFC8008CDC0BBEDFC8288B9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE24671EEB077DE2F5C7240DA0AE3AD456FD1C7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string RewardedCoinKey => _rewardedCoinKey;
		return _stringLiteralE24671EEB077DE2F5C7240DA0AE3AD456FD1C7D9;
	}
}
// System.Void _Game.Controller.RemoteConfigController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigController_Init_mEED293FE74F5781906A145A1CAEC2EBCF3FCD3CB (RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigController_OnFirebaseInitialized_m0C11A6457C0A9606253412BCE83D61DD9CFE30D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m583337DA21A39446D30C6D628BE4E55A7675D85E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE24671EEB077DE2F5C7240DA0AE3AD456FD1C7D9);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	{
		// Dictionary<string, object> defaults = new Dictionary<string, object>
		// {
		//     { _rewardedCoinKey, 10 }
		// };
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = L_0;
		int32_t L_2 = ((int32_t)10);
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_1);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_1, _stringLiteralE24671EEB077DE2F5C7240DA0AE3AD456FD1C7D9, L_3, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		V_0 = L_1;
		// FirebaseRemoteConfig.DefaultInstance.SetDefaultsAsync(defaults);
		il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_4;
		L_4 = FirebaseRemoteConfig_get_DefaultInstance_mE7F726BCB1E35F348E25ABB83ACDAFA1A4AD495C(NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = V_0;
		NullCheck(L_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = FirebaseRemoteConfig_SetDefaultsAsync_mD2E78DAD34846827B38B22038811509155EBAF3F(L_4, L_5, NULL);
		// FirebaseManager.Instance.Initialized += OnFirebaseInitialized;
		FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* L_7;
		L_7 = Singleton_1_get_Instance_m583337DA21A39446D30C6D628BE4E55A7675D85E(Singleton_1_get_Instance_m583337DA21A39446D30C6D628BE4E55A7675D85E_RuntimeMethod_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, __this, (intptr_t)((void*)RemoteConfigController_OnFirebaseInitialized_m0C11A6457C0A9606253412BCE83D61DD9CFE30D7_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		FirebaseManager_add_Initialized_m24DC2565C3FBAE54772310AD0C75D9D0F013CF44(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void _Game.Controller.RemoteConfigController::OnFirebaseInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigController_OnFirebaseInitialized_m0C11A6457C0A9606253412BCE83D61DD9CFE30D7 (RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* __this, const RuntimeMethod* method) 
{
	{
		// FetchDataAsync();
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0;
		L_0 = RemoteConfigController_FetchDataAsync_mA08EB79EE12E954006144F3046E1F262F72526A7(__this, NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task _Game.Controller.RemoteConfigController::FetchDataAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* RemoteConfigController_FetchDataAsync_mA08EB79EE12E954006144F3046E1F262F72526A7 (RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigController_OnFetchComplete_mA92CACE44672E28538CA66B8F49ACA948077A975_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var fetchTask = FirebaseRemoteConfig.DefaultInstance.FetchAsync(
		//         TimeSpan.Zero);
		il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_0;
		L_0 = FirebaseRemoteConfig_get_DefaultInstance_mE7F726BCB1E35F348E25ABB83ACDAFA1A4AD495C(NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = FirebaseRemoteConfig_FetchAsync_m2060F6CF9DA839E51C489AD8285EF7C737F48CB4(L_0, L_1, NULL);
		// return fetchTask.ContinueWithOnMainThread(OnFetchComplete);
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_3 = (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*)il2cpp_codegen_object_new(Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0(L_3, __this, (intptr_t)((void*)RemoteConfigController_OnFetchComplete_mA92CACE44672E28538CA66B8F49ACA948077A975_RuntimeMethod_var), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = TaskExtension_ContinueWithOnMainThread_m6BDD5EFACC9A21E8AA0A27D6C6BCCA15C000566C(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void _Game.Controller.RemoteConfigController::OnFetchComplete(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigController_OnFetchComplete_mA92CACE44672E28538CA66B8F49ACA948077A975 (RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_fetchTask, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LastFetchStatus_tB4E1A21120C7A536FBA01570333DEA73A000C9A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtension_ContinueWithOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EFE53110BF57BDA0A8D55A9B5C280C5BC03E957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3COnFetchCompleteU3Eb__0_mF9C2BD188739273A18F70318AB14AB66E2C601E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t92B722F9888BA8A0866D9A2A365A79DDF1888EBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45E7A509DBBC65D236BD3C077F664195647ECBC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85BA58034483559E0E25BDDF7C26E31883BFAB55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB315581250E493B92511C294D8A7CB223BEC3ECB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF0480E1D7561EFF9602EDC526AD2ABD27D7C6EE);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_t92B722F9888BA8A0866D9A2A365A79DDF1888EBA* V_0 = NULL;
	FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_t92B722F9888BA8A0866D9A2A365A79DDF1888EBA* L_0 = (U3CU3Ec__DisplayClass10_0_t92B722F9888BA8A0866D9A2A365A79DDF1888EBA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t92B722F9888BA8A0866D9A2A365A79DDF1888EBA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass10_0__ctor_mC2A7CE0A863778EABBB3297ECA3F7178B157C25E(L_0, NULL);
		V_0 = L_0;
		// if (!fetchTask.IsCompleted) {
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1 = ___0_fetchTask;
		NullCheck(L_1);
		bool L_2;
		L_2 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError("Retrieval hasn't finished.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral45E7A509DBBC65D236BD3C077F664195647ECBC9, NULL);
		// return;
		return;
	}

IL_0019:
	{
		// var remoteConfig = FirebaseRemoteConfig.DefaultInstance;
		il2cpp_codegen_runtime_class_init_inline(FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C_il2cpp_TypeInfo_var);
		FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_3;
		L_3 = FirebaseRemoteConfig_get_DefaultInstance_mE7F726BCB1E35F348E25ABB83ACDAFA1A4AD495C(NULL);
		V_1 = L_3;
		// var info = remoteConfig.Info;
		U3CU3Ec__DisplayClass10_0_t92B722F9888BA8A0866D9A2A365A79DDF1888EBA* L_4 = V_0;
		FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_5 = V_1;
		NullCheck(L_5);
		ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* L_6;
		L_6 = FirebaseRemoteConfig_get_Info_m54BE3021C99F11C94F78078DA718C2DF4DDA9AC0(L_5, NULL);
		NullCheck(L_4);
		L_4->___info_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___info_0), (void*)L_6);
		// if(info.LastFetchStatus != LastFetchStatus.Success) {
		U3CU3Ec__DisplayClass10_0_t92B722F9888BA8A0866D9A2A365A79DDF1888EBA* L_7 = V_0;
		NullCheck(L_7);
		ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* L_8 = L_7->___info_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ConfigInfo_get_LastFetchStatus_mA856815199E2A66B688DEFF65792763DA3AD051A(L_8, NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// Debug.LogError($"{nameof(OnFetchComplete)} was unsuccessful\n{nameof(info.LastFetchStatus)}: {info.LastFetchStatus}");
		U3CU3Ec__DisplayClass10_0_t92B722F9888BA8A0866D9A2A365A79DDF1888EBA* L_10 = V_0;
		NullCheck(L_10);
		ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* L_11 = L_10->___info_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ConfigInfo_get_LastFetchStatus_mA856815199E2A66B688DEFF65792763DA3AD051A(L_11, NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(LastFetchStatus_tB4E1A21120C7A536FBA01570333DEA73A000C9A4_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralB315581250E493B92511C294D8A7CB223BEC3ECB, _stringLiteralCF0480E1D7561EFF9602EDC526AD2ABD27D7C6EE, _stringLiteral85BA58034483559E0E25BDDF7C26E31883BFAB55, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_15, NULL);
		// return;
		return;
	}

IL_0062:
	{
		// remoteConfig.ActivateAsync()
		//     .ContinueWithOnMainThread(
		//         task => {
		//             Debug.Log($"Remote data loaded and ready for use. Last fetch time {info.FetchTime}.");
		//         });
		FirebaseRemoteConfig_tEE248ED951626ABDD49B64B81CAEAF341755AF6C* L_16 = V_1;
		NullCheck(L_16);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_17;
		L_17 = FirebaseRemoteConfig_ActivateAsync_m4259BC44EA9439B3BE4E27135121314FC61D5FDB(L_16, NULL);
		U3CU3Ec__DisplayClass10_0_t92B722F9888BA8A0866D9A2A365A79DDF1888EBA* L_18 = V_0;
		Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* L_19 = (Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856*)il2cpp_codegen_object_new(Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_1__ctor_m8DB17142BC5CB34C561C3A08FF3390CC83C7D94F(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3COnFetchCompleteU3Eb__0_mF9C2BD188739273A18F70318AB14AB66E2C601E4_RuntimeMethod_var), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_20;
		L_20 = TaskExtension_ContinueWithOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EFE53110BF57BDA0A8D55A9B5C280C5BC03E957(L_17, L_19, TaskExtension_ContinueWithOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EFE53110BF57BDA0A8D55A9B5C280C5BC03E957_RuntimeMethod_var);
		// IsInitialized = true;
		RemoteConfigController_set_IsInitialized_m180D3B75A02DB2D433411D1E3ADA4A1E9E6080BC_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void _Game.Controller.RemoteConfigController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigController__ctor_m7F03774FB6889D2F3E4E4D24A4706EFE42D8D49A (RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m444839D780B1D3AF09A9CC71E785DCAE8DBCA41C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m444839D780B1D3AF09A9CC71E785DCAE8DBCA41C(__this, Singleton_1__ctor_m444839D780B1D3AF09A9CC71E785DCAE8DBCA41C_RuntimeMethod_var);
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
// System.Void _Game.Controller.RemoteConfigController/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mC2A7CE0A863778EABBB3297ECA3F7178B157C25E (U3CU3Ec__DisplayClass10_0_t92B722F9888BA8A0866D9A2A365A79DDF1888EBA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void _Game.Controller.RemoteConfigController/<>c__DisplayClass10_0::<OnFetchComplete>b__0(System.Threading.Tasks.Task`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3COnFetchCompleteU3Eb__0_mF9C2BD188739273A18F70318AB14AB66E2C601E4 (U3CU3Ec__DisplayClass10_0_t92B722F9888BA8A0866D9A2A365A79DDF1888EBA* __this, Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4D88D83869C6BB3FF0599255C10138ED6518794);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Remote data loaded and ready for use. Last fetch time {info.FetchTime}.");
		ConfigInfo_t0E9E17328266914CF7AAA0A6FFC85A32E4432A39* L_0 = __this->___info_0;
		NullCheck(L_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = ConfigInfo_get_FetchTime_m45BCB5181AEB173BF1ACB1ACD48FC075BE546685(L_0, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = L_1;
		RuntimeObject* L_3 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC4D88D83869C6BB3FF0599255C10138ED6518794, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// });
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
// System.Collections.IEnumerator OrhonBey.Utility.InternetChecker::IntertnetController(UnityEngine.Events.UnityAction`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternetChecker_IntertnetController_mF875590DB63D3FD155A0E2C41DB23D7A72E65717 (InternetChecker_tCC9585BDD70E9A643C6F2D9257A30428DB3E7758* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CIntertnetControllerU3Ed__2_tDE762F2EFB8A7214780B1D4ECCE500507C513DDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIntertnetControllerU3Ed__2_tDE762F2EFB8A7214780B1D4ECCE500507C513DDA* L_0 = (U3CIntertnetControllerU3Ed__2_tDE762F2EFB8A7214780B1D4ECCE500507C513DDA*)il2cpp_codegen_object_new(U3CIntertnetControllerU3Ed__2_tDE762F2EFB8A7214780B1D4ECCE500507C513DDA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CIntertnetControllerU3Ed__2__ctor_mD9BDF5BFA2A2772625A54727E6B00B6FE44A62C0(L_0, 0, NULL);
		U3CIntertnetControllerU3Ed__2_tDE762F2EFB8A7214780B1D4ECCE500507C513DDA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CIntertnetControllerU3Ed__2_tDE762F2EFB8A7214780B1D4ECCE500507C513DDA* L_2 = L_1;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_3 = ___0_callback;
		NullCheck(L_2);
		L_2->___callback_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___callback_3), (void*)L_3);
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> OrhonBey.Utility.InternetChecker::UrlPingConnection(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* InternetChecker_UrlPingConnection_m7A0CBF0A3A7DE273B25ADE7955DB160EA3864BF9 (String_t* ___0_url, int32_t ___1_timeOut, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046_mD56FDF7B669D97020D45AEDF20F7A70BD3B9360C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D(AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		String_t* L_1 = ___0_url;
		(&V_0)->___url_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___url_2), (void*)L_1);
		int32_t L_2 = ___1_timeOut;
		(&V_0)->___timeOut_3 = L_2;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046_mD56FDF7B669D97020D45AEDF20F7A70BD3B9360C(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046_mD56FDF7B669D97020D45AEDF20F7A70BD3B9360C_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(L_4, AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void OrhonBey.Utility.InternetChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternetChecker__ctor_m79777EFABBAF020FCED287D938976D232686DF1D (InternetChecker_tCC9585BDD70E9A643C6F2D9257A30428DB3E7758* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204CF478AC8387BBA4B84CDFE9477B0CB8D33071);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string pingUrl = "http://www.google.com";
		__this->___pingUrl_4 = _stringLiteral204CF478AC8387BBA4B84CDFE9477B0CB8D33071;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pingUrl_4), (void*)_stringLiteral204CF478AC8387BBA4B84CDFE9477B0CB8D33071);
		// public int pingTimeOut = 2;
		__this->___pingTimeOut_5 = 2;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void OrhonBey.Utility.InternetChecker/<IntertnetController>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntertnetControllerU3Ed__2__ctor_mD9BDF5BFA2A2772625A54727E6B00B6FE44A62C0 (U3CIntertnetControllerU3Ed__2_tDE762F2EFB8A7214780B1D4ECCE500507C513DDA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void OrhonBey.Utility.InternetChecker/<IntertnetController>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntertnetControllerU3Ed__2_System_IDisposable_Dispose_m35696F2F8B25E721B2AC9CF7A011443473A122A3 (U3CIntertnetControllerU3Ed__2_tDE762F2EFB8A7214780B1D4ECCE500507C513DDA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean OrhonBey.Utility.InternetChecker/<IntertnetController>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIntertnetControllerU3Ed__2_MoveNext_mE11EAAD20F69228C1BDA5282F2C537A86B45F88A (U3CIntertnetControllerU3Ed__2_tDE762F2EFB8A7214780B1D4ECCE500507C513DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03F5A76E7D3EE29DD40559B8AC04F5304131CF39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD43EC3355588F199F4B3583249329900C65773E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InternetChecker_tCC9585BDD70E9A643C6F2D9257A30428DB3E7758* V_1 = NULL;
	bool V_2 = false;
	UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* G_B8_0 = NULL;
	UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* G_B7_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		InternetChecker_tCC9585BDD70E9A643C6F2D9257A30428DB3E7758* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0065;
			}
			case 2:
			{
				goto IL_00cc;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UnityWebRequest request = new UnityWebRequest(pingUrl);
		InternetChecker_tCC9585BDD70E9A643C6F2D9257A30428DB3E7758* L_3 = V_1;
		NullCheck(L_3);
		String_t* L_4 = L_3->___pingUrl_4;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityWebRequest__ctor_mBCA80EFFB8AF50480F0093BC8CB34EDB4337A5FB(L_5, L_4, NULL);
		__this->___U3CrequestU3E5__2_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_4), (void*)L_5);
		// request.timeout = pingTimeOut;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->___U3CrequestU3E5__2_4;
		InternetChecker_tCC9585BDD70E9A643C6F2D9257A30428DB3E7758* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->___pingTimeOut_5;
		NullCheck(L_6);
		UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618(L_6, L_8, NULL);
		// yield return request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->___U3CrequestU3E5__2_4;
		NullCheck(L_9);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_10;
		L_10 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0065:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var result = false;
		V_2 = (bool)0;
		// if (request.error != null)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = __this->___U3CrequestU3E5__2_4;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_11, NULL);
		if (!L_12)
		{
			goto IL_0099;
		}
	}
	{
		// Debug.Log("Internet connection error: " + request.error);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CrequestU3E5__2_4;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral03F5A76E7D3EE29DD40559B8AC04F5304131CF39, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		// result = false;
		V_2 = (bool)0;
		goto IL_00a5;
	}

IL_0099:
	{
		// Debug.Log("Internet connection successful!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAD43EC3355588F199F4B3583249329900C65773E, NULL);
		// result = true;
		V_2 = (bool)1;
	}

IL_00a5:
	{
		// callback?.Invoke(result);
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_16 = __this->___callback_3;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_17 = L_16;
		G_B7_0 = L_17;
		if (L_17)
		{
			G_B8_0 = L_17;
			goto IL_00b1;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b1:
	{
		bool L_18 = V_2;
		NullCheck(G_B8_0);
		UnityAction_1_Invoke_mDDD7C50AEB02B2E86BCA82D46A0B32C9B8A6965B_inline(G_B8_0, L_18, NULL);
	}

IL_00b7:
	{
		// yield return result;
		bool L_19 = V_2;
		bool L_20 = L_19;
		RuntimeObject* L_21 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_20);
		__this->___U3CU3E2__current_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_21);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00cc:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object OrhonBey.Utility.InternetChecker/<IntertnetController>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIntertnetControllerU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0D56BEDD52DA3377F2458FC7762266CB4CDE5FF5 (U3CIntertnetControllerU3Ed__2_tDE762F2EFB8A7214780B1D4ECCE500507C513DDA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void OrhonBey.Utility.InternetChecker/<IntertnetController>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntertnetControllerU3Ed__2_System_Collections_IEnumerator_Reset_mCB0099EFE715670D76D677083C7E54CFE40B20B4 (U3CIntertnetControllerU3Ed__2_tDE762F2EFB8A7214780B1D4ECCE500507C513DDA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIntertnetControllerU3Ed__2_System_Collections_IEnumerator_Reset_mCB0099EFE715670D76D677083C7E54CFE40B20B4_RuntimeMethod_var)));
	}
}
// System.Object OrhonBey.Utility.InternetChecker/<IntertnetController>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIntertnetControllerU3Ed__2_System_Collections_IEnumerator_get_Current_m0907397FBA72E64B0E32E99DBE147ADD3960491E (U3CIntertnetControllerU3Ed__2_tDE762F2EFB8A7214780B1D4ECCE500507C513DDA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUrlPingConnectionU3Ed__3_MoveNext_mD2689449552D61E18883C41C28D13A5468EF09D2 (U3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046_m0A628626CD2867C0CA4354518A4504E3D8E807F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03F5A76E7D3EE29DD40559B8AC04F5304131CF39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD43EC3355588F199F4B3583249329900C65773E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0078_1;
			}
		}
		{
			// UnityWebRequest unityWebRequest = new UnityWebRequest(url);
			String_t* L_2 = __this->___url_2;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			UnityWebRequest__ctor_mBCA80EFFB8AF50480F0093BC8CB34EDB4337A5FB(L_3, L_2, NULL);
			__this->___U3CunityWebRequestU3E5__2_4 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CunityWebRequestU3E5__2_4), (void*)L_3);
			// unityWebRequest.timeout = timeOut;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = __this->___U3CunityWebRequestU3E5__2_4;
			int32_t L_5 = __this->___timeOut_3;
			NullCheck(L_4);
			UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618(L_4, L_5, NULL);
			// var request = unityWebRequest.SendWebRequest();
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->___U3CunityWebRequestU3E5__2_4;
			NullCheck(L_6);
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_7;
			L_7 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_6, NULL);
			__this->___U3CrequestU3E5__3_5 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__3_5), (void*)L_7);
			goto IL_009b_1;
		}

IL_003f_1:
		{
			// await Task.Delay(100);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
			L_8 = Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48(((int32_t)100), NULL);
			NullCheck(L_8);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9;
			L_9 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_8, NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_10)
			{
				goto IL_0094_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12 = V_2;
			__this->___U3CU3Eu__1_6 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_13 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046_m0A628626CD2867C0CA4354518A4504E3D8E807F2(L_13, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046_m0A628626CD2867C0CA4354518A4504E3D8E807F2_RuntimeMethod_var);
			goto IL_0137;
		}

IL_0078_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14 = __this->___U3CU3Eu__1_6;
			V_2 = L_14;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_15 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_0094_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
		}

IL_009b_1:
		{
			// while (!request.isDone)
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_17 = __this->___U3CrequestU3E5__3_5;
			NullCheck(L_17);
			bool L_18;
			L_18 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_17, NULL);
			if (!L_18)
			{
				goto IL_003f_1;
			}
		}
		{
			// if (unityWebRequest.result == UnityWebRequest.Result.ConnectionError ||
			//     unityWebRequest.result == UnityWebRequest.Result.ProtocolError)
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_19 = __this->___U3CunityWebRequestU3E5__2_4;
			NullCheck(L_19);
			int32_t L_20;
			L_20 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_19, NULL);
			if ((((int32_t)L_20) == ((int32_t)2)))
			{
				goto IL_00c4_1;
			}
		}
		{
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_21 = __this->___U3CunityWebRequestU3E5__2_4;
			NullCheck(L_21);
			int32_t L_22;
			L_22 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_21, NULL);
			if ((!(((uint32_t)L_22) == ((uint32_t)3))))
			{
				goto IL_00e2_1;
			}
		}

IL_00c4_1:
		{
			// Debug.Log("Internet connection error: " + unityWebRequest.error);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_23 = __this->___U3CunityWebRequestU3E5__2_4;
			NullCheck(L_23);
			String_t* L_24;
			L_24 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_23, NULL);
			String_t* L_25;
			L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral03F5A76E7D3EE29DD40559B8AC04F5304131CF39, L_24, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_25, NULL);
			// return false; // ?nternet ba?lant?s? yok
			V_1 = (bool)0;
			goto IL_0115;
		}

IL_00e2_1:
		{
			// Debug.Log("Internet connection successful!");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAD43EC3355588F199F4B3583249329900C65773E, NULL);
			// return true; // ?nternet ba?lant?s? mevcut
			V_1 = (bool)1;
			goto IL_0115;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f0;
		}
		throw e;
	}

CATCH_00f0:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CunityWebRequestU3E5__2_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CunityWebRequestU3E5__2_4), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
		__this->___U3CrequestU3E5__3_5 = (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__3_5), (void*)(UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_26 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_27 = V_3;
		AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD(L_26, L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0137;
	}// end catch (depth: 1)

IL_0115:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CunityWebRequestU3E5__2_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CunityWebRequestU3E5__2_4), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
		__this->___U3CrequestU3E5__3_5 = (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__3_5), (void*)(UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_28 = (&__this->___U3CU3Et__builder_1);
		bool L_29 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046(L_28, L_29, AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
	}

IL_0137:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUrlPingConnectionU3Ed__3_MoveNext_mD2689449552D61E18883C41C28D13A5468EF09D2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046*>(__this + _offset);
	U3CUrlPingConnectionU3Ed__3_MoveNext_mD2689449552D61E18883C41C28D13A5468EF09D2(_thisAdjusted, method);
}
// System.Void OrhonBey.Utility.InternetChecker/<UrlPingConnection>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUrlPingConnectionU3Ed__3_SetStateMachine_m7853FEAA229DD2C79E2C85B08D0742FD37D00430 (U3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUrlPingConnectionU3Ed__3_SetStateMachine_m7853FEAA229DD2C79E2C85B08D0742FD37D00430_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUrlPingConnectionU3Ed__3_t5D79294DFA3A586A5A423BF39DFAF7CE3100A046*>(__this + _offset);
	U3CUrlPingConnectionU3Ed__3_SetStateMachine_m7853FEAA229DD2C79E2C85B08D0742FD37D00430(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LayerLab.FantasyRPG.PanelControlFantasyRPG::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlFantasyRPG_Start_m782DD6A0F3AB581AC2E6A4FC3F30CB0D7077D319 (PanelControlFantasyRPG_t349674BAAAFE9C9EE00F3A74E494E610A2AEFD94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelControlFantasyRPG_Click_Next_mD64716E54983DDD21CF5A9BC4B725E93D6C309C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelControlFantasyRPG_Click_Prev_m1483EC72CC6A65420B3879714252EA3F683D66C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// textTitle = transform.GetComponentInChildren<TextMeshProUGUI>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_0, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		__this->___textTitle_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textTitle_7), (void*)L_1);
		// buttonPrev.onClick.AddListener(Click_Prev);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___buttonPrev_9;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)PanelControlFantasyRPG_Click_Prev_m1483EC72CC6A65420B3879714252EA3F683D66C2_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// buttonNext.onClick.AddListener(Click_Next);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___buttonNext_10;
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_5, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)PanelControlFantasyRPG_Click_Next_mD64716E54983DDD21CF5A9BC4B725E93D6C309C3_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_6, L_7, NULL);
		// foreach (Transform t in panelTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___panelTransform_8;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_8, NULL);
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_11 = V_2;
					if (!L_11)
					{
						goto IL_009a;
					}
				}
				{
					RuntimeObject* L_12 = V_2;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_009a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0080_1;
			}

IL_0057_1:
			{
				// foreach (Transform t in panelTransform)
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_14, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// panels.Add(t.gameObject);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15 = __this->___panels_6;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_1;
				NullCheck(L_16);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
				NullCheck(L_15);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_15, L_17, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
				// t.gameObject.SetActive(false);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_1;
				NullCheck(L_18);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
				L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
				NullCheck(L_19);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
			}

IL_0080_1:
			{
				// foreach (Transform t in panelTransform)
				RuntimeObject* L_20 = V_0;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0057_1;
				}
			}
			{
				goto IL_009b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009b:
	{
		// panels[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = __this->___panels_6;
		int32_t L_23 = __this->___page_4;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_22, L_23, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)1, NULL);
		// isReady = true;
		__this->___isReady_5 = (bool)1;
		// CheckControl();
		PanelControlFantasyRPG_CheckControl_m64C69F75929CD8AD0F64CC9FB3E222079FCF7721(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.FantasyRPG.PanelControlFantasyRPG::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlFantasyRPG_Update_mBE225F0C2A9D5376DBAC332AC3C4C679CE9FBEF6 (PanelControlFantasyRPG_t349674BAAAFE9C9EE00F3A74E494E610A2AEFD94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (panels.Count <= 0 || !isReady) return;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___panels_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		bool L_2 = __this->___isReady_5;
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (panels.Count <= 0 || !isReady) return;
		return;
	}

IL_0017:
	{
		// if (Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)276), NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// Click_Prev();
		PanelControlFantasyRPG_Click_Prev_m1483EC72CC6A65420B3879714252EA3F683D66C2(__this, NULL);
		return;
	}

IL_002a:
	{
		// else if (Input.GetKeyDown(KeyCode.RightArrow))
		bool L_4;
		L_4 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)275), NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// Click_Next();
		PanelControlFantasyRPG_Click_Next_mD64716E54983DDD21CF5A9BC4B725E93D6C309C3(__this, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void LayerLab.FantasyRPG.PanelControlFantasyRPG::Click_Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlFantasyRPG_Click_Prev_m1483EC72CC6A65420B3879714252EA3F683D66C2 (PanelControlFantasyRPG_t349674BAAAFE9C9EE00F3A74E494E610A2AEFD94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (page <= 0 || !isReady) return;
		int32_t L_0 = __this->___page_4;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = __this->___isReady_5;
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		// if (page <= 0 || !isReady) return;
		return;
	}

IL_0012:
	{
		// panels[page].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___panels_6;
		int32_t L_3 = __this->___page_4;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, L_3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// panels[page -= 1].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___panels_6;
		int32_t L_6 = __this->___page_4;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		V_0 = L_7;
		__this->___page_4 = L_7;
		int32_t L_8 = V_0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, L_8, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// textTitle.text = panels[page].name;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___textTitle_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___panels_6;
		int32_t L_12 = __this->___page_4;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_11, L_12, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_14);
		// CheckControl();
		PanelControlFantasyRPG_CheckControl_m64C69F75929CD8AD0F64CC9FB3E222079FCF7721(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.FantasyRPG.PanelControlFantasyRPG::Click_Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlFantasyRPG_Click_Next_mD64716E54983DDD21CF5A9BC4B725E93D6C309C3 (PanelControlFantasyRPG_t349674BAAAFE9C9EE00F3A74E494E610A2AEFD94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (page >= panels.Count - 1) return;
		int32_t L_0 = __this->___page_4;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___panels_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_1, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_0016;
		}
	}
	{
		// if (page >= panels.Count - 1) return;
		return;
	}

IL_0016:
	{
		// panels[page].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___panels_6;
		int32_t L_4 = __this->___page_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, L_4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// panels[page += 1].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___panels_6;
		int32_t L_7 = __this->___page_4;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		V_0 = L_8;
		__this->___page_4 = L_8;
		int32_t L_9 = V_0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, L_9, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// CheckControl();
		PanelControlFantasyRPG_CheckControl_m64C69F75929CD8AD0F64CC9FB3E222079FCF7721(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.FantasyRPG.PanelControlFantasyRPG::SetArrowActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlFantasyRPG_SetArrowActive_mC6416774CE4A47B870FF8F84D1D1744B5E949763 (PanelControlFantasyRPG_t349674BAAAFE9C9EE00F3A74E494E610A2AEFD94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonPrev.gameObject.SetActive(page > 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___buttonPrev_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		int32_t L_2 = __this->___page_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0), NULL);
		// buttonNext.gameObject.SetActive(page < panels.Count - 1);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___buttonNext_10;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		int32_t L_5 = __this->___page_4;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___panels_6;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_6, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1))))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void LayerLab.FantasyRPG.PanelControlFantasyRPG::CheckControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlFantasyRPG_CheckControl_m64C69F75929CD8AD0F64CC9FB3E222079FCF7721 (PanelControlFantasyRPG_t349674BAAAFE9C9EE00F3A74E494E610A2AEFD94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textTitle.text = panels[page].name.Replace("_", " ");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___textTitle_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___panels_6;
		int32_t L_2 = __this->___page_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_1, L_2, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_4, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_5);
		// SetArrowActive();
		PanelControlFantasyRPG_SetArrowActive_mC6416774CE4A47B870FF8F84D1D1744B5E949763(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.FantasyRPG.PanelControlFantasyRPG::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlFantasyRPG__ctor_m6B690DF0DB95497F337700B0B832F39DE8827B00 (PanelControlFantasyRPG_t349674BAAAFE9C9EE00F3A74E494E610A2AEFD94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private List<GameObject> panels = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___panels_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panels_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LayerLab.FantasyRPG.PanelFantasyRPG::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelFantasyRPG_OnEnable_mBE4C4C1B161FA3FEEF9E7F89E9BF239C3D451D03 (PanelFantasyRPG_t7FA31F44D0215D76665755F33903BC9C583A34C9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___otherPanels_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___otherPanels_4;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LayerLab.FantasyRPG.PanelFantasyRPG::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelFantasyRPG_OnDisable_m6BC8191C6525945CDE2FC1E1C47E3FC142DAE152 (PanelFantasyRPG_t7FA31F44D0215D76665755F33903BC9C583A34C9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___otherPanels_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___otherPanels_4;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LayerLab.FantasyRPG.PanelFantasyRPG::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelFantasyRPG__ctor_m9FBAC6EFE184CBD31C1D4EA6078831402166070D (PanelFantasyRPG_t7FA31F44D0215D76665755F33903BC9C583A34C9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.Texture UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* UIParticleSystem_get_mainTexture_m5C7893BE4F8BAD0368516F9D15E43D202193BBF9 (UIParticleSystem_t761CD61A1155A6B806D54F7C386AAD16A5A9744F* __this, const RuntimeMethod* method) 
{
	{
		// return currentTexture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___currentTexture_50;
		return L_0;
	}
}
// System.Boolean UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticleSystem_Initialize_m75CE1D7EB74E9A24617E346B45087F91FA400064 (UIParticleSystem_t761CD61A1155A6B806D54F7C386AAD16A5A9744F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F68598AE98A5313BD184DAEF34A7037F05FC8E8);
		s_Il2CppMethodInitialized = true;
	}
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_1 = NULL;
	{
		// if (_transform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____transform_39;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _transform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->____transform_39 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____transform_39), (void*)L_2);
	}

IL_001a:
	{
		// if (pSystem == null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->___pSystem_40;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_014e;
		}
	}
	{
		// pSystem = GetComponent<ParticleSystem>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5;
		L_5 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(__this, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		__this->___pSystem_40 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pSystem_40), (void*)L_5);
		// if (pSystem == null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6 = __this->___pSystem_40;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// mainModule = pSystem.main;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = __this->___pSystem_40;
		NullCheck(L_8);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_9;
		L_9 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_8, NULL);
		__this->___mainModule_51 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mainModule_51))->___m_ParticleSystem_0), (void*)NULL);
		// if (pSystem.main.maxParticles > 14000)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10 = __this->___pSystem_40;
		NullCheck(L_10);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_11;
		L_11 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_10, NULL);
		V_0 = L_11;
		int32_t L_12;
		L_12 = MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198((&V_0), NULL);
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)14000))))
		{
			goto IL_0082;
		}
	}
	{
		// mainModule.maxParticles = 14000;
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* L_13 = (&__this->___mainModule_51);
		MainModule_set_maxParticles_mF9E7A56D7E1A528904BE1A8C0E14F15C3AF0F748(L_13, ((int32_t)14000), NULL);
	}

IL_0082:
	{
		// pRenderer = pSystem.GetComponent<ParticleSystemRenderer>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_14 = __this->___pSystem_40;
		NullCheck(L_14);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_15;
		L_15 = Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023(L_14, Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023_RuntimeMethod_var);
		__this->___pRenderer_47 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pRenderer_47), (void*)L_15);
		// if (pRenderer != null)
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_16 = __this->___pRenderer_47;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		// pRenderer.enabled = false;
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_18 = __this->___pRenderer_47;
		NullCheck(L_18);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_18, (bool)0, NULL);
	}

IL_00ad:
	{
		// if (material == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19;
		L_19 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00da;
		}
	}
	{
		// var foundShader = Shader.Find("UI Extensions/Particles/Additive");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_21;
		L_21 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral9F68598AE98A5313BD184DAEF34A7037F05FC8E8, NULL);
		V_1 = L_21;
		// if (foundShader)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_22 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_22, NULL);
		if (!L_23)
		{
			goto IL_00da;
		}
	}
	{
		// material = new Material(foundShader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_24 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_25, L_24, NULL);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, __this, L_25);
	}

IL_00da:
	{
		// currentMaterial = material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26;
		L_26 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		__this->___currentMaterial_49 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentMaterial_49), (void*)L_26);
		// if (currentMaterial && currentMaterial.HasProperty("_MainTex"))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___currentMaterial_49;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_27, NULL);
		if (!L_28)
		{
			goto IL_012f;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___currentMaterial_49;
		NullCheck(L_29);
		bool L_30;
		L_30 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_29, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, NULL);
		if (!L_30)
		{
			goto IL_012f;
		}
	}
	{
		// currentTexture = currentMaterial.mainTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___currentMaterial_49;
		NullCheck(L_31);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_32;
		L_32 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_31, NULL);
		__this->___currentTexture_50 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentTexture_50), (void*)L_32);
		// if (currentTexture == null)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_33 = __this->___currentTexture_50;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_33, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_34)
		{
			goto IL_012f;
		}
	}
	{
		// currentTexture = Texture2D.whiteTexture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_35;
		L_35 = Texture2D_get_whiteTexture_m3A243ED388F9EF0EC515015A6E0E50FD261D2FA1(NULL);
		__this->___currentTexture_50 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentTexture_50), (void*)L_35);
	}

IL_012f:
	{
		// material = currentMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = __this->___currentMaterial_49;
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, __this, L_36);
		// mainModule.scalingMode = ParticleSystemScalingMode.Hierarchy;
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* L_37 = (&__this->___mainModule_51);
		MainModule_set_scalingMode_m08A4399A0E64E5894509084A42BB528BE16A648D(L_37, 0, NULL);
		// particles = null;
		__this->___particles_41 = (ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___particles_41), (void*)(ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*)NULL);
	}

IL_014e:
	{
		// if (particles == null)
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_38 = __this->___particles_41;
		if (L_38)
		{
			goto IL_0174;
		}
	}
	{
		// particles = new ParticleSystem.Particle[pSystem.main.maxParticles];
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_39 = __this->___pSystem_40;
		NullCheck(L_39);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_40;
		L_40 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_39, NULL);
		V_0 = L_40;
		int32_t L_41;
		L_41 = MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198((&V_0), NULL);
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_42 = (ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*)(ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*)SZArrayNew(ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var, (uint32_t)L_41);
		__this->___particles_41 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___particles_41), (void*)L_42);
	}

IL_0174:
	{
		// imageUV = new Vector4(0, 0, 1, 1);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_43), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___imageUV_43 = L_43;
		// textureSheetAnimation = pSystem.textureSheetAnimation;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_44 = __this->___pSystem_40;
		NullCheck(L_44);
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_45;
		L_45 = ParticleSystem_get_textureSheetAnimation_mA35CFDD2E7F70F3AFA88A766359336F36CBA937B(L_44, NULL);
		__this->___textureSheetAnimation_44 = L_45;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___textureSheetAnimation_44))->___m_ParticleSystem_0), (void*)NULL);
		// textureSheetAnimationFrames = 0;
		__this->___textureSheetAnimationFrames_45 = 0;
		// textureSheetAnimationFrameSize = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___textureSheetAnimationFrameSize_46 = L_46;
		// if (textureSheetAnimation.enabled)
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_47 = (&__this->___textureSheetAnimation_44);
		bool L_48;
		L_48 = TextureSheetAnimationModule_get_enabled_mF860A1A9A5794EA2FC3A5B9652C812981A4F3136(L_47, NULL);
		if (!L_48)
		{
			goto IL_020f;
		}
	}
	{
		// textureSheetAnimationFrames = textureSheetAnimation.numTilesX * textureSheetAnimation.numTilesY;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_49 = (&__this->___textureSheetAnimation_44);
		int32_t L_50;
		L_50 = TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE(L_49, NULL);
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_51 = (&__this->___textureSheetAnimation_44);
		int32_t L_52;
		L_52 = TextureSheetAnimationModule_get_numTilesY_mA39AD9D6245BE792B776B9834A3E83609266A8C4(L_51, NULL);
		__this->___textureSheetAnimationFrames_45 = ((int32_t)il2cpp_codegen_multiply(L_50, L_52));
		// textureSheetAnimationFrameSize = new Vector2(1f / textureSheetAnimation.numTilesX, 1f / textureSheetAnimation.numTilesY);
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_53 = (&__this->___textureSheetAnimation_44);
		int32_t L_54;
		L_54 = TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE(L_53, NULL);
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_55 = (&__this->___textureSheetAnimation_44);
		int32_t L_56;
		L_56 = TextureSheetAnimationModule_get_numTilesY_mA39AD9D6245BE792B776B9834A3E83609266A8C4(L_55, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_57), ((float)((1.0f)/((float)L_54))), ((float)((1.0f)/((float)L_56))), /*hidden argument*/NULL);
		__this->___textureSheetAnimationFrameSize_46 = L_57;
	}

IL_020f:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_Awake_m199F4245617DA4AF15E914F1FE3E7862FF7FEEE5 (UIParticleSystem_t761CD61A1155A6B806D54F7C386AAD16A5A9744F* __this, const RuntimeMethod* method) 
{
	{
		// base.Awake();
		UIBehaviour_Awake_mDF9D1A4867C8E730C59A7CAE97709CA9B8F3A0F2(__this, NULL);
		// if (!Initialize())
		bool L_0;
		L_0 = UIParticleSystem_Initialize_m75CE1D7EB74E9A24617E346B45087F91FA400064(__this, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::OnPopulateMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_OnPopulateMesh_m3353B0A0D83E78F02079630E31E757BD2E5248CE (UIParticleSystem_t761CD61A1155A6B806D54F7C386AAD16A5A9744F* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___0_vh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_18;
	memset((&V_18), 0, sizeof(V_18));
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_19 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_20;
	memset((&V_20), 0, sizeof(V_20));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_21;
	memset((&V_21), 0, sizeof(V_21));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_22;
	memset((&V_22), 0, sizeof(V_22));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B30_0;
	memset((&G_B30_0), 0, sizeof(G_B30_0));
	{
		// vh.Clear();
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___0_vh;
		NullCheck(L_0);
		VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5(L_0, NULL);
		// if (!gameObject.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_1, NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// if (!isInitialised && !pSystem.main.playOnAwake)
		bool L_3 = __this->___isInitialised_48;
		if (L_3)
		{
			goto IL_0046;
		}
	}
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = __this->___pSystem_40;
		NullCheck(L_4);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_5;
		L_5 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_4, NULL);
		V_4 = L_5;
		bool L_6;
		L_6 = MainModule_get_playOnAwake_m4FEB55773ED05AB5166314D9883671F4B277762A((&V_4), NULL);
		if (L_6)
		{
			goto IL_0046;
		}
	}
	{
		// pSystem.Stop(false, ParticleSystemStopBehavior.StopEmittingAndClear);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_7 = __this->___pSystem_40;
		NullCheck(L_7);
		ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326(L_7, (bool)0, 0, NULL);
		// isInitialised = true;
		__this->___isInitialised_48 = (bool)1;
	}

IL_0046:
	{
		// Vector2 temp = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_0 = L_8;
		// Vector2 corner1 = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_1 = L_9;
		// Vector2 corner2 = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_2 = L_10;
		// int count = pSystem.GetParticles(particles);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_11 = __this->___pSystem_40;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_12 = __this->___particles_41;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = ParticleSystem_GetParticles_m0F67158FED60933343574A1BEB68FEB9D5476E3F(L_11, L_12, NULL);
		V_3 = L_13;
		// for (int i = 0; i < count; ++i)
		V_5 = 0;
		goto IL_07de;
	}

IL_0072:
	{
		// ParticleSystem.Particle particle = particles[i];
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_14 = __this->___particles_41;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_6 = L_17;
		// Vector2 position = (mainModule.simulationSpace == ParticleSystemSimulationSpace.Local ? particle.position : _transform.InverseTransformPoint(particle.position));
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* L_18 = (&__this->___mainModule_51);
		int32_t L_19;
		L_19 = MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC(L_18, NULL);
		if (!L_19)
		{
			goto IL_00a2;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->____transform_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837((&V_6), NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_20, L_21, NULL);
		G_B9_0 = L_22;
		goto IL_00a9;
	}

IL_00a2:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837((&V_6), NULL);
		G_B9_0 = L_23;
	}

IL_00a9:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(G_B9_0, NULL);
		V_7 = L_24;
		// float rotation = -particle.rotation * Mathf.Deg2Rad;
		float L_25;
		L_25 = Particle_get_rotation_mA3A5978F95EDA141FE91C3423DE46DE9B91B49A2((&V_6), NULL);
		V_8 = ((float)il2cpp_codegen_multiply(((-L_25)), (0.0174532924f)));
		// float rotation90 = rotation + Mathf.PI / 2;
		float L_26 = V_8;
		V_9 = ((float)il2cpp_codegen_add(L_26, (1.57079637f)));
		// Color32 color = particle.GetCurrentColor(pSystem);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_27 = __this->___pSystem_40;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_28;
		L_28 = Particle_GetCurrentColor_m793DDF1AC5043A8991B6663D965404B1B3855C78((&V_6), L_27, NULL);
		V_10 = L_28;
		// float size = particle.GetCurrentSize(pSystem) * 0.5f;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_29 = __this->___pSystem_40;
		float L_30;
		L_30 = Particle_GetCurrentSize_m3F7D066BF44CDC3B0E501CA10A06313CD0CCCA64((&V_6), L_29, NULL);
		V_11 = ((float)il2cpp_codegen_multiply(L_30, (0.5f)));
		// if (mainModule.scalingMode == ParticleSystemScalingMode.Shape)
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* L_31 = (&__this->___mainModule_51);
		int32_t L_32;
		L_32 = MainModule_get_scalingMode_m2C235E61B1ABBD31F471DC80EF15EA315EA3F0FA(L_31, NULL);
		if ((!(((uint32_t)L_32) == ((uint32_t)2))))
		{
			goto IL_0110;
		}
	}
	{
		// position /= canvas.scaleFactor;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_7;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_34;
		L_34 = Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419(__this, NULL);
		NullCheck(L_34);
		float L_35;
		L_35 = Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921(L_34, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_33, L_35, NULL);
		V_7 = L_36;
	}

IL_0110:
	{
		// Vector4 particleUV = imageUV;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_37 = __this->___imageUV_43;
		V_12 = L_37;
		// if (textureSheetAnimation.enabled)
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_38 = (&__this->___textureSheetAnimation_44);
		bool L_39;
		L_39 = TextureSheetAnimationModule_get_enabled_mF860A1A9A5794EA2FC3A5B9652C812981A4F3136(L_38, NULL);
		if (!L_39)
		{
			goto IL_0321;
		}
	}
	{
		// float frameProgress = 1 - (particle.remainingLifetime / particle.startLifetime);
		float L_40;
		L_40 = Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9((&V_6), NULL);
		float L_41;
		L_41 = Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664((&V_6), NULL);
		V_13 = ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_40/L_41))));
		// if (textureSheetAnimation.frameOverTime.curveMin != null)
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_42 = (&__this->___textureSheetAnimation_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C(L_42, NULL);
		V_15 = L_43;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_44;
		L_44 = MinMaxCurve_get_curveMin_m2F6041CAA8760D21D39A6204973B411D7109CF00((&V_15), NULL);
		if (!L_44)
		{
			goto IL_018a;
		}
	}
	{
		// frameProgress = textureSheetAnimation.frameOverTime.curveMin.Evaluate(1 - (particle.remainingLifetime / particle.startLifetime));
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_45 = (&__this->___textureSheetAnimation_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C(L_45, NULL);
		V_15 = L_46;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_47;
		L_47 = MinMaxCurve_get_curveMin_m2F6041CAA8760D21D39A6204973B411D7109CF00((&V_15), NULL);
		float L_48;
		L_48 = Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9((&V_6), NULL);
		float L_49;
		L_49 = Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664((&V_6), NULL);
		NullCheck(L_47);
		float L_50;
		L_50 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_47, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_48/L_49)))), NULL);
		V_13 = L_50;
		goto IL_0213;
	}

IL_018a:
	{
		// else if (textureSheetAnimation.frameOverTime.curve != null)
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_51 = (&__this->___textureSheetAnimation_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C(L_51, NULL);
		V_15 = L_52;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = MinMaxCurve_get_curve_mE735424B0F4A9F55699BD82254F159D4226F9661((&V_15), NULL);
		if (!L_53)
		{
			goto IL_01d2;
		}
	}
	{
		// frameProgress = textureSheetAnimation.frameOverTime.curve.Evaluate(1 - (particle.remainingLifetime / particle.startLifetime));
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_54 = (&__this->___textureSheetAnimation_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_55;
		L_55 = TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C(L_54, NULL);
		V_15 = L_55;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_56;
		L_56 = MinMaxCurve_get_curve_mE735424B0F4A9F55699BD82254F159D4226F9661((&V_15), NULL);
		float L_57;
		L_57 = Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9((&V_6), NULL);
		float L_58;
		L_58 = Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664((&V_6), NULL);
		NullCheck(L_56);
		float L_59;
		L_59 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_56, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_57/L_58)))), NULL);
		V_13 = L_59;
		goto IL_0213;
	}

IL_01d2:
	{
		// else if (textureSheetAnimation.frameOverTime.constant > 0)
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_60 = (&__this->___textureSheetAnimation_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_61;
		L_61 = TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C(L_60, NULL);
		V_15 = L_61;
		float L_62;
		L_62 = MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91((&V_15), NULL);
		if ((!(((float)L_62) > ((float)(0.0f)))))
		{
			goto IL_0213;
		}
	}
	{
		// frameProgress = textureSheetAnimation.frameOverTime.constant - (particle.remainingLifetime / particle.startLifetime);
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_63 = (&__this->___textureSheetAnimation_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C(L_63, NULL);
		V_15 = L_64;
		float L_65;
		L_65 = MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91((&V_15), NULL);
		float L_66;
		L_66 = Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9((&V_6), NULL);
		float L_67;
		L_67 = Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664((&V_6), NULL);
		V_13 = ((float)il2cpp_codegen_subtract(L_65, ((float)(L_66/L_67))));
	}

IL_0213:
	{
		// frameProgress = Mathf.Repeat(frameProgress * textureSheetAnimation.cycleCount, 1);
		float L_68 = V_13;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_69 = (&__this->___textureSheetAnimation_44);
		int32_t L_70;
		L_70 = TextureSheetAnimationModule_get_cycleCount_m99F3A1F1DFA7947B44B826C6B9C96B268FFE5DC0(L_69, NULL);
		float L_71;
		L_71 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_multiply(L_68, ((float)L_70))), (1.0f), NULL);
		V_13 = L_71;
		// int frame = 0;
		V_14 = 0;
		// switch (textureSheetAnimation.animation)
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_72 = (&__this->___textureSheetAnimation_44);
		int32_t L_73;
		L_73 = TextureSheetAnimationModule_get_animation_mB402112DF63C35BB5B34B892D51791ABAED84176(L_72, NULL);
		V_17 = L_73;
		int32_t L_74 = V_17;
		if (!L_74)
		{
			goto IL_0249;
		}
	}
	{
		int32_t L_75 = V_17;
		if ((((int32_t)L_75) == ((int32_t)1)))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0292;
	}

IL_0249:
	{
		// frame = Mathf.FloorToInt(frameProgress * textureSheetAnimationFrames);
		float L_76 = V_13;
		int32_t L_77 = __this->___textureSheetAnimationFrames_45;
		int32_t L_78;
		L_78 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)il2cpp_codegen_multiply(L_76, ((float)L_77))), NULL);
		V_14 = L_78;
		// break;
		goto IL_0292;
	}

IL_025c:
	{
		// frame = Mathf.FloorToInt(frameProgress * textureSheetAnimation.numTilesX);
		float L_79 = V_13;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_80 = (&__this->___textureSheetAnimation_44);
		int32_t L_81;
		L_81 = TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE(L_80, NULL);
		int32_t L_82;
		L_82 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)il2cpp_codegen_multiply(L_79, ((float)L_81))), NULL);
		V_14 = L_82;
		// int row = textureSheetAnimation.rowIndex;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_83 = (&__this->___textureSheetAnimation_44);
		int32_t L_84;
		L_84 = TextureSheetAnimationModule_get_rowIndex_m72BA6BAAD0F816E11E276B28907119054D8EA03C(L_83, NULL);
		V_16 = L_84;
		// frame += row * textureSheetAnimation.numTilesX;
		int32_t L_85 = V_14;
		int32_t L_86 = V_16;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_87 = (&__this->___textureSheetAnimation_44);
		int32_t L_88;
		L_88 = TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE(L_87, NULL);
		V_14 = ((int32_t)il2cpp_codegen_add(L_85, ((int32_t)il2cpp_codegen_multiply(L_86, L_88))));
	}

IL_0292:
	{
		// frame %= textureSheetAnimationFrames;
		int32_t L_89 = V_14;
		int32_t L_90 = __this->___textureSheetAnimationFrames_45;
		V_14 = ((int32_t)(L_89%L_90));
		// particleUV.x = (frame % textureSheetAnimation.numTilesX) * textureSheetAnimationFrameSize.x;
		int32_t L_91 = V_14;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_92 = (&__this->___textureSheetAnimation_44);
		int32_t L_93;
		L_93 = TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE(L_92, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_94 = (&__this->___textureSheetAnimationFrameSize_46);
		float L_95 = L_94->___x_0;
		(&V_12)->___x_1 = ((float)il2cpp_codegen_multiply(((float)((int32_t)(L_91%L_93))), L_95));
		// particleUV.y = 1.0f - Mathf.FloorToInt(frame / textureSheetAnimation.numTilesX) * textureSheetAnimationFrameSize.y;
		int32_t L_96 = V_14;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_97 = (&__this->___textureSheetAnimation_44);
		int32_t L_98;
		L_98 = TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE(L_97, NULL);
		int32_t L_99;
		L_99 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)((int32_t)(L_96/L_98))), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_100 = (&__this->___textureSheetAnimationFrameSize_46);
		float L_101 = L_100->___y_1;
		(&V_12)->___y_2 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)L_99), L_101))));
		// particleUV.z = particleUV.x + textureSheetAnimationFrameSize.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_102 = V_12;
		float L_103 = L_102.___x_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_104 = (&__this->___textureSheetAnimationFrameSize_46);
		float L_105 = L_104->___x_0;
		(&V_12)->___z_3 = ((float)il2cpp_codegen_add(L_103, L_105));
		// particleUV.w = particleUV.y + textureSheetAnimationFrameSize.y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_106 = V_12;
		float L_107 = L_106.___y_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_108 = (&__this->___textureSheetAnimationFrameSize_46);
		float L_109 = L_108->___y_1;
		(&V_12)->___w_4 = ((float)il2cpp_codegen_add(L_107, L_109));
	}

IL_0321:
	{
		// temp.x = particleUV.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_110 = V_12;
		float L_111 = L_110.___x_1;
		(&V_0)->___x_0 = L_111;
		// temp.y = particleUV.y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_112 = V_12;
		float L_113 = L_112.___y_2;
		(&V_0)->___y_1 = L_113;
		// _quad[0] = UIVertex.simpleVert;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_114 = __this->____quad_42;
		il2cpp_codegen_runtime_class_init_inline(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_115 = ((UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields*)il2cpp_codegen_static_fields_for(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var))->___simpleVert_10;
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(0), (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207)L_115);
		// _quad[0].color = color;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_116 = __this->____quad_42;
		NullCheck(L_116);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_117 = V_10;
		((L_116)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___color_3 = L_117;
		// _quad[0].uv0 = temp;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_118 = __this->____quad_42;
		NullCheck(L_118);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_119 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_120;
		L_120 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_119, NULL);
		((L_118)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___uv0_4 = L_120;
		// temp.x = particleUV.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_121 = V_12;
		float L_122 = L_121.___x_1;
		(&V_0)->___x_0 = L_122;
		// temp.y = particleUV.w;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_123 = V_12;
		float L_124 = L_123.___w_4;
		(&V_0)->___y_1 = L_124;
		// _quad[1] = UIVertex.simpleVert;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_125 = __this->____quad_42;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_126 = ((UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields*)il2cpp_codegen_static_fields_for(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var))->___simpleVert_10;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(1), (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207)L_126);
		// _quad[1].color = color;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_127 = __this->____quad_42;
		NullCheck(L_127);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_128 = V_10;
		((L_127)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___color_3 = L_128;
		// _quad[1].uv0 = temp;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_129 = __this->____quad_42;
		NullCheck(L_129);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_130 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_131;
		L_131 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_130, NULL);
		((L_129)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___uv0_4 = L_131;
		// temp.x = particleUV.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_132 = V_12;
		float L_133 = L_132.___z_3;
		(&V_0)->___x_0 = L_133;
		// temp.y = particleUV.w;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_134 = V_12;
		float L_135 = L_134.___w_4;
		(&V_0)->___y_1 = L_135;
		// _quad[2] = UIVertex.simpleVert;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_136 = __this->____quad_42;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_137 = ((UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields*)il2cpp_codegen_static_fields_for(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var))->___simpleVert_10;
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(2), (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207)L_137);
		// _quad[2].color = color;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_138 = __this->____quad_42;
		NullCheck(L_138);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_139 = V_10;
		((L_138)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___color_3 = L_139;
		// _quad[2].uv0 = temp;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_140 = __this->____quad_42;
		NullCheck(L_140);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_141 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_142;
		L_142 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_141, NULL);
		((L_140)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___uv0_4 = L_142;
		// temp.x = particleUV.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_143 = V_12;
		float L_144 = L_143.___z_3;
		(&V_0)->___x_0 = L_144;
		// temp.y = particleUV.y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_145 = V_12;
		float L_146 = L_145.___y_2;
		(&V_0)->___y_1 = L_146;
		// _quad[3] = UIVertex.simpleVert;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_147 = __this->____quad_42;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_148 = ((UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields*)il2cpp_codegen_static_fields_for(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var))->___simpleVert_10;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(3), (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207)L_148);
		// _quad[3].color = color;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_149 = __this->____quad_42;
		NullCheck(L_149);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_150 = V_10;
		((L_149)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___color_3 = L_150;
		// _quad[3].uv0 = temp;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_151 = __this->____quad_42;
		NullCheck(L_151);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_152 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_153;
		L_153 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_152, NULL);
		((L_151)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___uv0_4 = L_153;
		// if (rotation == 0)
		float L_154 = V_8;
		if ((!(((float)L_154) == ((float)(0.0f)))))
		{
			goto IL_0596;
		}
	}
	{
		// corner1.x = position.x - size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_155 = V_7;
		float L_156 = L_155.___x_0;
		float L_157 = V_11;
		(&V_1)->___x_0 = ((float)il2cpp_codegen_subtract(L_156, L_157));
		// corner1.y = position.y - size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_158 = V_7;
		float L_159 = L_158.___y_1;
		float L_160 = V_11;
		(&V_1)->___y_1 = ((float)il2cpp_codegen_subtract(L_159, L_160));
		// corner2.x = position.x + size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_161 = V_7;
		float L_162 = L_161.___x_0;
		float L_163 = V_11;
		(&V_2)->___x_0 = ((float)il2cpp_codegen_add(L_162, L_163));
		// corner2.y = position.y + size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_164 = V_7;
		float L_165 = L_164.___y_1;
		float L_166 = V_11;
		(&V_2)->___y_1 = ((float)il2cpp_codegen_add(L_165, L_166));
		// temp.x = corner1.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_167 = V_1;
		float L_168 = L_167.___x_0;
		(&V_0)->___x_0 = L_168;
		// temp.y = corner1.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_169 = V_1;
		float L_170 = L_169.___y_1;
		(&V_0)->___y_1 = L_170;
		// _quad[0].position = temp;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_171 = __this->____quad_42;
		NullCheck(L_171);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_172 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_173;
		L_173 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_172, NULL);
		((L_171)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_0 = L_173;
		// temp.x = corner1.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_174 = V_1;
		float L_175 = L_174.___x_0;
		(&V_0)->___x_0 = L_175;
		// temp.y = corner2.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_176 = V_2;
		float L_177 = L_176.___y_1;
		(&V_0)->___y_1 = L_177;
		// _quad[1].position = temp;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_178 = __this->____quad_42;
		NullCheck(L_178);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_179 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180;
		L_180 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_179, NULL);
		((L_178)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___position_0 = L_180;
		// temp.x = corner2.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_181 = V_2;
		float L_182 = L_181.___x_0;
		(&V_0)->___x_0 = L_182;
		// temp.y = corner2.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_183 = V_2;
		float L_184 = L_183.___y_1;
		(&V_0)->___y_1 = L_184;
		// _quad[2].position = temp;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_185 = __this->____quad_42;
		NullCheck(L_185);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_186 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_187;
		L_187 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_186, NULL);
		((L_185)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___position_0 = L_187;
		// temp.x = corner2.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_188 = V_2;
		float L_189 = L_188.___x_0;
		(&V_0)->___x_0 = L_189;
		// temp.y = corner1.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_190 = V_1;
		float L_191 = L_190.___y_1;
		(&V_0)->___y_1 = L_191;
		// _quad[3].position = temp;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_192 = __this->____quad_42;
		NullCheck(L_192);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_193 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194;
		L_194 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_193, NULL);
		((L_192)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___position_0 = L_194;
		goto IL_07cc;
	}

IL_0596:
	{
		// if (use3dRotation)
		bool L_195 = __this->___use3dRotation_38;
		if (!L_195)
		{
			goto IL_06fc;
		}
	}
	{
		// Vector3 pos3d = (mainModule.simulationSpace == ParticleSystemSimulationSpace.Local ? particle.position : _transform.InverseTransformPoint(particle.position));
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* L_196 = (&__this->___mainModule_51);
		int32_t L_197;
		L_197 = MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC(L_196, NULL);
		if (!L_197)
		{
			goto IL_05c2;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_198 = __this->____transform_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_199;
		L_199 = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837((&V_6), NULL);
		NullCheck(L_198);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_200;
		L_200 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_198, L_199, NULL);
		G_B30_0 = L_200;
		goto IL_05c9;
	}

IL_05c2:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_201;
		L_201 = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837((&V_6), NULL);
		G_B30_0 = L_201;
	}

IL_05c9:
	{
		V_18 = G_B30_0;
		// if (mainModule.scalingMode == ParticleSystemScalingMode.Shape)
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* L_202 = (&__this->___mainModule_51);
		int32_t L_203;
		L_203 = MainModule_get_scalingMode_m2C235E61B1ABBD31F471DC80EF15EA315EA3F0FA(L_202, NULL);
		if ((!(((uint32_t)L_203) == ((uint32_t)2))))
		{
			goto IL_05ed;
		}
	}
	{
		// position /= canvas.scaleFactor;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_204 = V_7;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_205;
		L_205 = Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419(__this, NULL);
		NullCheck(L_205);
		float L_206;
		L_206 = Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921(L_205, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_207;
		L_207 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_204, L_206, NULL);
		V_7 = L_207;
	}

IL_05ed:
	{
		// Vector3[] verts = new Vector3[4]
		// {
		//     new Vector3(-size, -size, 0),
		//     new Vector3(-size, size, 0),
		//     new Vector3(size, size, 0),
		//     new Vector3(size, -size, 0)
		// };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_208 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_209 = L_208;
		float L_210 = V_11;
		float L_211 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_212;
		memset((&L_212), 0, sizeof(L_212));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_212), ((-L_210)), ((-L_211)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_209);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_212);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_213 = L_209;
		float L_214 = V_11;
		float L_215 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_216;
		memset((&L_216), 0, sizeof(L_216));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_216), ((-L_214)), L_215, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_213);
		(L_213)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_216);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_217 = L_213;
		float L_218 = V_11;
		float L_219 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_220;
		memset((&L_220), 0, sizeof(L_220));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_220), L_218, L_219, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_217);
		(L_217)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_220);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_221 = L_217;
		float L_222 = V_11;
		float L_223 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_224;
		memset((&L_224), 0, sizeof(L_224));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_224), L_222, ((-L_223)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_221);
		(L_221)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_224);
		V_19 = L_221;
		// Quaternion particleRotation = Quaternion.Euler(particle.rotation3D);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_225;
		L_225 = Particle_get_rotation3D_m8BE7C2D25F8E6F44F19690266100723A5DBE64D1((&V_6), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_226;
		L_226 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_225, NULL);
		V_20 = L_226;
		// _quad[0].position = pos3d + particleRotation * verts[0];
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_227 = __this->____quad_42;
		NullCheck(L_227);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_228 = V_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_229 = V_20;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_230 = V_19;
		NullCheck(L_230);
		int32_t L_231 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_232 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_231));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_233;
		L_233 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_229, L_232, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_234;
		L_234 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_228, L_233, NULL);
		((L_227)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_0 = L_234;
		// _quad[1].position = pos3d + particleRotation * verts[1];
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_235 = __this->____quad_42;
		NullCheck(L_235);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_236 = V_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_237 = V_20;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_238 = V_19;
		NullCheck(L_238);
		int32_t L_239 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_240 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_241;
		L_241 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_237, L_240, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_242;
		L_242 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_236, L_241, NULL);
		((L_235)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___position_0 = L_242;
		// _quad[2].position = pos3d + particleRotation * verts[2];
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_243 = __this->____quad_42;
		NullCheck(L_243);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_244 = V_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_245 = V_20;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_246 = V_19;
		NullCheck(L_246);
		int32_t L_247 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_248 = (L_246)->GetAt(static_cast<il2cpp_array_size_t>(L_247));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_249;
		L_249 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_245, L_248, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_250;
		L_250 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_244, L_249, NULL);
		((L_243)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___position_0 = L_250;
		// _quad[3].position = pos3d + particleRotation * verts[3];
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_251 = __this->____quad_42;
		NullCheck(L_251);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_252 = V_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_253 = V_20;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_254 = V_19;
		NullCheck(L_254);
		int32_t L_255 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_256 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_255));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_257;
		L_257 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_253, L_256, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_258;
		L_258 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_252, L_257, NULL);
		((L_251)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___position_0 = L_258;
		goto IL_07cc;
	}

IL_06fc:
	{
		// Vector2 right = new Vector2(Mathf.Cos(rotation), Mathf.Sin(rotation)) * size;
		float L_259 = V_8;
		float L_260;
		L_260 = cosf(L_259);
		float L_261 = V_8;
		float L_262;
		L_262 = sinf(L_261);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_263;
		memset((&L_263), 0, sizeof(L_263));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_263), L_260, L_262, /*hidden argument*/NULL);
		float L_264 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_265;
		L_265 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_263, L_264, NULL);
		V_21 = L_265;
		// Vector2 up = new Vector2(Mathf.Cos(rotation90), Mathf.Sin(rotation90)) * size;
		float L_266 = V_9;
		float L_267;
		L_267 = cosf(L_266);
		float L_268 = V_9;
		float L_269;
		L_269 = sinf(L_268);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_270;
		memset((&L_270), 0, sizeof(L_270));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_270), L_267, L_269, /*hidden argument*/NULL);
		float L_271 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_272;
		L_272 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_270, L_271, NULL);
		V_22 = L_272;
		// _quad[0].position = position - right - up;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_273 = __this->____quad_42;
		NullCheck(L_273);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_274 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_275 = V_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_276;
		L_276 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_274, L_275, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_277 = V_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_278;
		L_278 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_276, L_277, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_279;
		L_279 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_278, NULL);
		((L_273)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_0 = L_279;
		// _quad[1].position = position - right + up;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_280 = __this->____quad_42;
		NullCheck(L_280);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_281 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_282 = V_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_283;
		L_283 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_281, L_282, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_284 = V_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_285;
		L_285 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_283, L_284, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_286;
		L_286 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_285, NULL);
		((L_280)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___position_0 = L_286;
		// _quad[2].position = position + right + up;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_287 = __this->____quad_42;
		NullCheck(L_287);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_288 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_289 = V_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_290;
		L_290 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_288, L_289, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_291 = V_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_292;
		L_292 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_290, L_291, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_293;
		L_293 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_292, NULL);
		((L_287)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___position_0 = L_293;
		// _quad[3].position = position + right - up;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_294 = __this->____quad_42;
		NullCheck(L_294);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_295 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_296 = V_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_297;
		L_297 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_295, L_296, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_298 = V_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_299;
		L_299 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_297, L_298, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_300;
		L_300 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_299, NULL);
		((L_294)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___position_0 = L_300;
	}

IL_07cc:
	{
		// vh.AddUIVertexQuad(_quad);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_301 = ___0_vh;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_302 = __this->____quad_42;
		NullCheck(L_301);
		VertexHelper_AddUIVertexQuad_m6AC21081F2A5A48D22BC3497E527D0A9AB8278B0(L_301, L_302, NULL);
		// for (int i = 0; i < count; ++i)
		int32_t L_303 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_303, 1));
	}

IL_07de:
	{
		// for (int i = 0; i < count; ++i)
		int32_t L_304 = V_5;
		int32_t L_305 = V_3;
		if ((((int32_t)L_304) < ((int32_t)L_305)))
		{
			goto IL_0072;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_Update_mAE12936163178D4C9B9FFDAD1BC55738CC12BCA4 (UIParticleSystem_t761CD61A1155A6B806D54F7C386AAD16A5A9744F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!fixedTime && Application.isPlaying)
		bool L_0 = __this->___fixedTime_37;
		if (L_0)
		{
			goto IL_009b;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_1)
		{
			goto IL_009b;
		}
	}
	{
		// pSystem.Simulate(Time.unscaledDeltaTime, false, false, true);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2 = __this->___pSystem_40;
		float L_3;
		L_3 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		NullCheck(L_2);
		ParticleSystem_Simulate_m514E1FCC76A6882650BD237E1D14B43ECAA97643(L_2, L_3, (bool)0, (bool)0, (bool)1, NULL);
		// SetAllDirty();
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, __this);
		// if ((currentMaterial != null && currentTexture != currentMaterial.mainTexture) ||
		//     (material != null && currentMaterial != null && material.shader != currentMaterial.shader))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___currentMaterial_49;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = __this->___currentTexture_50;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___currentMaterial_49;
		NullCheck(L_7);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8;
		L_8 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_008d;
		}
	}

IL_0054:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_009b;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___currentMaterial_49;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_009b;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		NullCheck(L_14);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15;
		L_15 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_14, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___currentMaterial_49;
		NullCheck(L_16);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17;
		L_17 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_009b;
		}
	}

IL_008d:
	{
		// pSystem = null;
		__this->___pSystem_40 = (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pSystem_40), (void*)(ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL);
		// Initialize();
		bool L_19;
		L_19 = UIParticleSystem_Initialize_m75CE1D7EB74E9A24617E346B45087F91FA400064(__this, NULL);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_LateUpdate_mE15EA386E9D8F3D0248A8D2B9CCFE22E5E5AABA0 (UIParticleSystem_t761CD61A1155A6B806D54F7C386AAD16A5A9744F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// SetAllDirty();
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, __this);
		goto IL_00a3;
	}

IL_0012:
	{
		// if (fixedTime)
		bool L_1 = __this->___fixedTime_37;
		if (!L_1)
		{
			goto IL_00a3;
		}
	}
	{
		// pSystem.Simulate(Time.unscaledDeltaTime, false, false, true);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2 = __this->___pSystem_40;
		float L_3;
		L_3 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		NullCheck(L_2);
		ParticleSystem_Simulate_m514E1FCC76A6882650BD237E1D14B43ECAA97643(L_2, L_3, (bool)0, (bool)0, (bool)1, NULL);
		// SetAllDirty();
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, __this);
		// if ((currentMaterial != null && currentTexture != currentMaterial.mainTexture) ||
		//     (material != null && currentMaterial != null && material.shader != currentMaterial.shader))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___currentMaterial_49;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = __this->___currentTexture_50;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___currentMaterial_49;
		NullCheck(L_7);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8;
		L_8 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_0095;
		}
	}

IL_005c:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_00a3;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___currentMaterial_49;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_00a3;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		NullCheck(L_14);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15;
		L_15 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_14, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___currentMaterial_49;
		NullCheck(L_16);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17;
		L_17 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}

IL_0095:
	{
		// pSystem = null;
		__this->___pSystem_40 = (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pSystem_40), (void*)(ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL);
		// Initialize();
		bool L_19;
		L_19 = UIParticleSystem_Initialize_m75CE1D7EB74E9A24617E346B45087F91FA400064(__this, NULL);
	}

IL_00a3:
	{
		// if (material == currentMaterial)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___currentMaterial_49;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_00b7;
		}
	}
	{
		// return;
		return;
	}

IL_00b7:
	{
		// pSystem = null;
		__this->___pSystem_40 = (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pSystem_40), (void*)(ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL);
		// Initialize();
		bool L_23;
		L_23 = UIParticleSystem_Initialize_m75CE1D7EB74E9A24617E346B45087F91FA400064(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_OnDestroy_m3AF598BDF0D5BA48A7553520D25CA9E3D09F3C67 (UIParticleSystem_t761CD61A1155A6B806D54F7C386AAD16A5A9744F* __this, const RuntimeMethod* method) 
{
	{
		// currentMaterial = null;
		__this->___currentMaterial_49 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentMaterial_49), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// currentTexture = null;
		__this->___currentTexture_50 = (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentTexture_50), (void*)(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::StartParticleEmission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_StartParticleEmission_m7947C7CEA5ECC199EFB0C4EE2866D203D55616DD (UIParticleSystem_t761CD61A1155A6B806D54F7C386AAD16A5A9744F* __this, const RuntimeMethod* method) 
{
	{
		// pSystem.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___pSystem_40;
		NullCheck(L_0);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::StopParticleEmission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_StopParticleEmission_m0464663F4AB59E0D181A06A74A1E86999CECB565 (UIParticleSystem_t761CD61A1155A6B806D54F7C386AAD16A5A9744F* __this, const RuntimeMethod* method) 
{
	{
		// pSystem.Stop(false, ParticleSystemStopBehavior.StopEmittingAndClear);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___pSystem_40;
		NullCheck(L_0);
		ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326(L_0, (bool)0, 0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::PauseParticleEmission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_PauseParticleEmission_m1A68825DB27D4F908B0077ED1172AD8DA6206A24 (UIParticleSystem_t761CD61A1155A6B806D54F7C386AAD16A5A9744F* __this, const RuntimeMethod* method) 
{
	{
		// pSystem.Stop(false, ParticleSystemStopBehavior.StopEmitting);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___pSystem_40;
		NullCheck(L_0);
		ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326(L_0, (bool)0, 1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.FantasyRPG.UIParticleSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem__ctor_m0576695CF8FAFFDC4311EE48C7524C3D01DA09AF (UIParticleSystem_t761CD61A1155A6B806D54F7C386AAD16A5A9744F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool fixedTime = true;
		__this->___fixedTime_37 = (bool)1;
		// private UIVertex[] _quad = new UIVertex[4];
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_0 = (UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)(UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)SZArrayNew(UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->____quad_42 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____quad_42), (void*)L_0);
		// private Vector4 imageUV = Vector4.zero;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		__this->___imageUV_43 = L_1;
		MaskableGraphic__ctor_mD2E256F950AAAE0E2445971361B5C54D2066E4C2(__this, NULL);
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
// System.Void Google.GoogleSignIn::set_Configuration(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_set_Configuration_m0009916D90123692747FEC684C93862607011E85 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (theInstance == null || theConfiguration == value || theConfiguration == null) {
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_2 = ___0_value;
		if ((((RuntimeObject*)(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)L_1) == ((RuntimeObject*)(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_3 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_0016:
	{
		// theConfiguration = value;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_4 = ___0_value;
		((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1), (void*)L_4);
		return;
	}

IL_001d:
	{
		// throw new SignInException(GoogleSignInStatusCode.DeveloperError,
		//     "DefaultInstance already created. " +
		//     " Cannot change configuration after creation.");
		SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* L_5 = (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		SignInException__ctor_m5C137C75DDEBA99BA9B0AC253EB36C075B2E2D8B(L_5, 6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD400EB487C20E145E8637C4026A2356D9E546258)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GoogleSignIn_set_Configuration_m0009916D90123692747FEC684C93862607011E85_RuntimeMethod_var)));
	}
}
// Google.GoogleSignInConfiguration Google.GoogleSignIn::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return theConfiguration;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		return L_0;
	}
}
// Google.GoogleSignIn Google.GoogleSignIn::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* GoogleSignIn_get_DefaultInstance_m3A7F48D5EB49BD41DF945D9A54E93BA1C5D382D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (theInstance == null) {
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// theInstance = new GoogleSignIn(new GoogleSignInImpl(Configuration));
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1;
		L_1 = GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414_inline(NULL);
		GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* L_2 = (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349*)il2cpp_codegen_object_new(GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GoogleSignInImpl__ctor_m28DE8315356ABCB9AB9B96F3D635BF83278D3A3A(L_2, L_1, NULL);
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_3 = (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA*)il2cpp_codegen_object_new(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GoogleSignIn__ctor_m43C53EBCEC03FBAA1F634E76365E860595AC4D52(L_3, L_2, NULL);
		((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0), (void*)L_3);
	}

IL_001b:
	{
		// return theInstance;
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_4 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0;
		return L_4;
	}
}
// System.Void Google.GoogleSignIn::.ctor(Google.Impl.GoogleSignInImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn__ctor_m43C53EBCEC03FBAA1F634E76365E860595AC4D52 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* ___0_impl, const RuntimeMethod* method) 
{
	{
		// internal GoogleSignIn(GoogleSignInImpl impl) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.impl = impl;
		GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* L_0 = ___0_impl;
		__this->___impl_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___impl_2), (void*)L_0);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn::EnableDebugLogging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_EnableDebugLogging_m14A29DE697ECC64D8A0A5CBA47278ECAE9D26F29 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// impl.EnableDebugLogging(flag);
		RuntimeObject* L_0 = __this->___impl_2;
		bool L_1 = ___0_flag;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void Google.ISignInImpl::EnableDebugLogging(System.Boolean) */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* GoogleSignIn_SignIn_mAAA8FC28D91B6CBAB324F888FE951EB9EA64E64D (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* V_0 = NULL;
	{
		// var tcs = new TaskCompletionSource<GoogleSignInUser>();
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_0 = (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*)il2cpp_codegen_object_new(TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84(L_0, TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		V_0 = L_0;
		// SignInHelperObject.Instance.StartCoroutine(
		//   impl.SignIn().WaitForResult(tcs));
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_1;
		L_1 = SignInHelperObject_get_Instance_mB289E4E5785ECA3877128A2D7E42F73DAEAA2C34(NULL);
		RuntimeObject* L_2 = __this->___impl_2;
		NullCheck(L_2);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3;
		L_3 = InterfaceFuncInvoker0< Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* >::Invoke(0 /* Google.Future`1<Google.GoogleSignInUser> Google.ISignInImpl::SignIn() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_2);
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C(L_3, L_4, Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_5, NULL);
		// return tcs.Task;
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_7 = V_0;
		NullCheck(L_7);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_8;
		L_8 = TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_inline(L_7, TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignInSilently()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* GoogleSignIn_SignInSilently_mA667E9AAF7FA438217844D0BACC7DF68364DF7AD (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* V_0 = NULL;
	{
		// var tcs = new TaskCompletionSource<GoogleSignInUser>();
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_0 = (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*)il2cpp_codegen_object_new(TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84(L_0, TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		V_0 = L_0;
		// SignInHelperObject.Instance.StartCoroutine(
		//     impl.SignInSilently().WaitForResult(tcs));
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_1;
		L_1 = SignInHelperObject_get_Instance_mB289E4E5785ECA3877128A2D7E42F73DAEAA2C34(NULL);
		RuntimeObject* L_2 = __this->___impl_2;
		NullCheck(L_2);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3;
		L_3 = InterfaceFuncInvoker0< Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* >::Invoke(1 /* Google.Future`1<Google.GoogleSignInUser> Google.ISignInImpl::SignInSilently() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_2);
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C(L_3, L_4, Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_5, NULL);
		// return tcs.Task;
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_7 = V_0;
		NullCheck(L_7);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_8;
		L_8 = TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_inline(L_7, TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void Google.GoogleSignIn::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_SignOut_m1666034382C085A0EE0227035E57E5AD61FE43B6 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theConfiguration = null;
		((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1 = (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1), (void*)(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)NULL);
		// impl.SignOut();
		RuntimeObject* L_0 = __this->___impl_2;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Google.ISignInImpl::SignOut() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_Disconnect_mD97724F96462EC3BB49B29CFDC92888EB5D11D00 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// impl.Disconnect();
		RuntimeObject* L_0 = __this->___impl_2;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Google.ISignInImpl::Disconnect() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_0);
		// }
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
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_mF0A5634485EAF28ED443E3FB31248C2C1B1BE942 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___0_status, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal SignInException(GoogleSignInStatusCode status) {
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// Status = status;
		int32_t L_0 = ___0_status;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m5C137C75DDEBA99BA9B0AC253EB36C075B2E2D8B (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___0_status, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base(message) {
		String_t* L_0 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// Status = status;
		int32_t L_1 = ___0_status;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m84BD804BE5ECAFDF85A48095572AA861C1E9D931 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___0_status, String_t* ___1_message, Exception_t* ___2_innerException, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Exception innerException) : base(message, innerException) {
		String_t* L_0 = ___1_message;
		Exception_t* L_1 = ___2_innerException;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// Status = status;
		int32_t L_2 = ___0_status;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m97D47EE86A6870059BDA9F858818670FBAFA3812 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___0_status, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___2_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base(info, context) {
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___1_info;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___2_context;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120(__this, L_0, L_1, NULL);
		// Status = status;
		int32_t L_2 = ___0_status;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// Google.GoogleSignInStatusCode Google.GoogleSignIn/SignInException::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignInException_get_Status_m2FBF33632A23C771EE5CEB65120E3DFEC8FF5A74 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Google.GoogleSignIn/SignInException::set_Status(Google.GoogleSignInStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		int32_t L_0 = ___0_value;
		__this->___U3CStatusU3Ek__BackingField_18 = L_0;
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
// System.Void Google.GoogleSignInConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInConfiguration__ctor_m99891370EEB5D39D4F4492E576B1CB5665532589 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* __this, const RuntimeMethod* method) 
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
// System.String Google.GoogleSignInUser::get_AuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_AuthCode_m086556E7DADF3850F2A70EC022F5BF9870DAAE34 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CAuthCodeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_AuthCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CAuthCodeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthCodeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_Email()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_Email_mA6E37F96BC90280CBA4D425743426CBE8D515551 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CEmailU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_Email(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CEmailU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEmailU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_IdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_IdToken_m58382F225E3065502A66AFA23F70053153DEA62A (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CIdTokenU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_IdToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CIdTokenU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdTokenU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_DisplayName_mC14CD83AFB1364C729D09692732781672D9CEA9C (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_GivenName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_GivenName_m1955EAFF719827C4118F9B7D2DF30E490F6A6797 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CGivenNameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_GivenName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CGivenNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGivenNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_FamilyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_FamilyName_mB8E944CF7D941E7F823C079410D45071ECE203A7 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CFamilyNameU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_FamilyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CFamilyNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFamilyNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Uri Google.GoogleSignInUser::get_ImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* GoogleSignInUser_get_ImageUrl_m81F36356F02F01B392A614BD17F639499FB5EDA4 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___U3CImageUrlU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_ImageUrl(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___0_value;
		__this->___U3CImageUrlU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CImageUrlU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_UserId_mCBF326EFC373DEF983AB1E87082AF49D81D1082E (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CUserIdU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CUserIdU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIdU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void Google.GoogleSignInUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser__ctor_m0271D1B065D5BF40672070447A0D61EEDB88FF91 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
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
// System.Void Google.Impl.BaseObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, intptr_t ___0_intPtr, const RuntimeMethod* method) 
{
	{
		// public BaseObject(IntPtr intPtr) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// selfHandleRef = new HandleRef(this, intPtr);
		intptr_t L_0 = ___0_intPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_1), __this, L_0, /*hidden argument*/NULL);
		__this->___selfHandleRef_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___selfHandleRef_0))->____wrapper_0), (void*)NULL);
		// }
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::SelfPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9 (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (selfHandleRef.Equals(nullSelf)) {
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_0 = (&__this->___selfHandleRef_0);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1 = ((BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_StaticFields*)il2cpp_codegen_static_fields_for(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var))->___nullSelf_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1;
		RuntimeObject* L_3 = Box(HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var, &L_2);
		Il2CppFakeBox<HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F> L_4(HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var, L_0);
		bool L_5;
		L_5 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), L_3, NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// throw new InvalidOperationException(
		//   "Attempted to use object after it was cleaned up");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6AEB00E2908EDBFDB9EF7E0BC9A94A5D2742E6C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9_RuntimeMethod_var)));
	}

IL_0028:
	{
		// return selfHandleRef;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = __this->___selfHandleRef_0;
		return L_7;
	}
}
// System.Void Google.Impl.BaseObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject_Dispose_m554F3F996634EC0E8C5C0D2212659D5FDECC582F (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selfHandleRef = nullSelf;
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = ((BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_StaticFields*)il2cpp_codegen_static_fields_for(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var))->___nullSelf_1;
		__this->___selfHandleRef_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___selfHandleRef_0))->____wrapper_0), (void*)NULL);
		// }
		return;
	}
}
// System.String Google.Impl.BaseObject::OutParamsToString(Google.Impl.BaseObject/OutStringMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* ___0_outStringMethod, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Exception_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		// UIntPtr requiredSize = outStringMethod(null, UIntPtr.Zero);
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_0 = ___0_outStringMethod;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_1 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		NullCheck(L_0);
		uintptr_t L_2;
		L_2 = OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline(L_0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, L_1, NULL);
		V_0 = L_2;
		// if (requiredSize.Equals(UIntPtr.Zero)) {
		uintptr_t L_3 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		uintptr_t L_4 = L_3;
		RuntimeObject* L_5 = Box(UIntPtr_t_il2cpp_TypeInfo_var, &L_4);
		bool L_6;
		L_6 = UIntPtr_Equals_m7A952F9624311E28A8F6B7D48A27E897F59E7021((&V_0), L_5, NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0022:
	{
		// string str = null;
		V_1 = (String_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		// byte[] array = new byte[requiredSize.ToUInt32()];
		uint32_t L_7;
		L_7 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_0), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_2 = L_8;
		// outStringMethod(array, requiredSize);
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_9 = ___0_outStringMethod;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		uintptr_t L_11 = V_0;
		NullCheck(L_9);
		uintptr_t L_12;
		L_12 = OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline(L_9, L_10, L_11, NULL);
		// str = Encoding.UTF8.GetString(array, 0,
		//         (int)requiredSize.ToUInt32() - 1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_13;
		L_13 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		uint32_t L_15;
		L_15 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_0), NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, 1)));
		V_1 = L_16;
		// } catch (Exception e) {
		goto IL_0077;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Exception)
		{
			// } catch (Exception e) {
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.LogError("Exception creating string from char array: " + e);
			Exception_t* L_17 = V_3;
			Exception_t* L_18 = L_17;
			G_B5_0 = L_18;
			G_B5_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79098B9D29578596CA3BA3FCEDAFB6AF622D9AFD));
			if (L_18)
			{
				G_B6_0 = L_18;
				G_B6_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79098B9D29578596CA3BA3FCEDAFB6AF622D9AFD));
				goto IL_0060;
			}
		}
		{
			G_B7_0 = ((String_t*)(NULL));
			G_B7_1 = G_B5_1;
			goto IL_0065;
		}

IL_0060:
		{
			NullCheck(G_B6_0);
			String_t* L_19;
			L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
			G_B7_0 = L_19;
			G_B7_1 = G_B6_1;
		}

IL_0065:
		{
			String_t* L_20;
			L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B7_1, G_B7_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_20, NULL);
			// str = string.Empty;
			String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
			V_1 = L_21;
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0077;
		}
	}// end catch (depth: 1)

IL_0077:
	{
		// return str;
		String_t* L_22 = V_1;
		return L_22;
	}
}
// System.Void Google.Impl.BaseObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__cctor_m37F36BB0C1EEF39D0197935D9E0A90BAC16FF1FB (const RuntimeMethod* method) 
{
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
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_Multicast(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uintptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* currentDelegate = reinterpret_cast<OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*>(delegatesToInvoke[i]);
		typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_out_bytes, ___1_out_size, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenInst(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method)
{
	NullCheck(___0_out_bytes);
	typedef uintptr_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_out_bytes, ___1_out_size, method);
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStatic(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method)
{
	typedef uintptr_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_out_bytes, ___1_out_size, method);
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStaticInvoker(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< uintptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_out_bytes, ___1_out_size);
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_ClosedStaticInvoker(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< uintptr_t, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_out_bytes, ___1_out_size);
}
IL2CPP_EXTERN_C  uintptr_t DelegatePInvokeWrapper_OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5 (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method)
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uintptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_out_bytes' to native representation
	uint8_t* ____0_out_bytes_marshaled = NULL;
	if (___0_out_bytes != NULL)
	{
		____0_out_bytes_marshaled = reinterpret_cast<uint8_t*>((___0_out_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uintptr_t returnValue = il2cppPInvokeFunc(____0_out_bytes_marshaled, ___1_out_size);

	return returnValue;
}
// System.Void Google.Impl.BaseObject/OutStringMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_Multicast;
}
// System.UIntPtr Google.Impl.BaseObject/OutStringMethod::Invoke(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_out_bytes, ___1_out_size, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Google.Impl.BaseObject/OutStringMethod::BeginInvoke(System.Byte[],System.UIntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OutStringMethod_BeginInvoke_m608A23F502DE02D618CCA39D6D865C7D18CDFDF7 (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_out_bytes;
	__d_args[1] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___1_out_size);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.UIntPtr Google.Impl.BaseObject/OutStringMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_EndInvoke_m1559888E67A55BCBDCFA90C6873D68C33E8AFE2A (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(uintptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Impl.GoogleSignInImpl::.ctor(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl__ctor_m28DE8315356ABCB9AB9B96F3D635BF83278D3A3A (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___0_configuration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	{
		// : base(GoogleSignIn_Create(GetPlayerActivity())) {
		intptr_t L_0;
		L_0 = GoogleSignInImpl_GetPlayerActivity_m298AD9D9AC4EEC28D205394CDD330BC02F1DD6A4(NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Create_m6C8D53A9F11B20CC884FC7E118C5854570096CBF(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A(__this, L_1, NULL);
		// if (configuration != null) {
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_2 = ___0_configuration;
		if (!L_2)
		{
			goto IL_0075;
		}
	}
	{
		// List<string> scopes = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_3;
		// if (configuration.AdditionalScopes != null) {
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_4 = ___0_configuration;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___AdditionalScopes_9;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// scopes.AddRange(configuration.AdditionalScopes);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = V_0;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_7 = ___0_configuration;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___AdditionalScopes_9;
		NullCheck(L_6);
		List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E(L_6, L_8, List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
	}

IL_002d:
	{
		// GoogleSignIn_Configure(SelfPtr(), configuration.UseGameSignIn,
		//              configuration.WebClientId,
		//              configuration.RequestAuthCode,
		//              configuration.ForceTokenRefresh,
		//              configuration.RequestEmail,
		//              configuration.RequestIdToken,
		//              configuration.HidePopups,
		//              scopes.ToArray(),
		//              scopes.Count,
		//              configuration.AccountName);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_9;
		L_9 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_10 = ___0_configuration;
		NullCheck(L_10);
		bool L_11 = L_10->___UseGameSignIn_0;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_12 = ___0_configuration;
		NullCheck(L_12);
		String_t* L_13 = L_12->___WebClientId_1;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_14 = ___0_configuration;
		NullCheck(L_14);
		bool L_15 = L_14->___RequestAuthCode_2;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_16 = ___0_configuration;
		NullCheck(L_16);
		bool L_17 = L_16->___ForceTokenRefresh_3;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_18 = ___0_configuration;
		NullCheck(L_18);
		bool L_19 = L_18->___RequestEmail_4;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_20 = ___0_configuration;
		NullCheck(L_20);
		bool L_21 = L_20->___RequestIdToken_5;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_22 = ___0_configuration;
		NullCheck(L_22);
		bool L_23 = L_22->___HidePopups_7;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = V_0;
		NullCheck(L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25;
		L_25 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_24, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_26, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_28 = ___0_configuration;
		NullCheck(L_28);
		String_t* L_29 = L_28->___AccountName_8;
		bool L_30;
		L_30 = GoogleSignInImpl_GoogleSignIn_Configure_mD397232FBA115AC8CFCB48BD84FB961D0F170B9E(L_9, L_11, L_13, L_15, L_17, L_19, L_21, L_23, L_25, L_27, L_29, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::EnableDebugLogging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_EnableDebugLogging_m527A8F7AAE6B947A8EC6DC25E23E661D2B6E117F (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	{
		// GoogleSignIn_EnableDebugLogging(SelfPtr(), flag);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		bool L_1 = ___0_flag;
		GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_m21685383DEDE08D27C74A274CA26D3FEEFC033EC(L_0, L_1, NULL);
		// }
		return;
	}
}
// Google.Future`1<Google.GoogleSignInUser> Google.Impl.GoogleSignInImpl::SignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* GoogleSignInImpl_SignIn_m859A15256A86DF1873867F49B79B69163EAB9BE8 (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr nativeFuture = GoogleSignIn_SignIn(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_SignIn_m22D8DE4B14BDAAE661FFEFEF5D9BEFD5830D2175(L_0, NULL);
		// return new Future<GoogleSignInUser>(new NativeFuture(nativeFuture));
		NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* L_2 = (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F*)il2cpp_codegen_object_new(NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC(L_2, L_1, NULL);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3 = (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*)il2cpp_codegen_object_new(Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6(L_3, L_2, Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		return L_3;
	}
}
// Google.Future`1<Google.GoogleSignInUser> Google.Impl.GoogleSignInImpl::SignInSilently()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* GoogleSignInImpl_SignInSilently_mE92B6CCBDA838381A21703691FB9C5F461A477F8 (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr nativeFuture = GoogleSignIn_SignInSilently(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_SignInSilently_mB9B6823FC8F062B9FA8B3A954DD2D27CB6F7B062(L_0, NULL);
		// return new Future<GoogleSignInUser>(new NativeFuture(nativeFuture));
		NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* L_2 = (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F*)il2cpp_codegen_object_new(NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC(L_2, L_1, NULL);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3 = (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*)il2cpp_codegen_object_new(Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6(L_3, L_2, Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_SignOut_m88FED0CCBAA20F403B838BAA20FBD5FC5CC2416B (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	{
		// GoogleSignIn_Signout(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInImpl_GoogleSignIn_Signout_mA13B93C574D80B705301DA279CB588434C256DE3(L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_Disconnect_m136F2268A549DA9A13D7BBB198BE4B286380ECA1 (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	{
		// GoogleSignIn_Disconnect(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInImpl_GoogleSignIn_Disconnect_m00F5736B6446CD99B21D3E58D7A6D2A48A4CA0EB(L_0, NULL);
		// }
		return;
	}
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Create_m6C8D53A9F11B20CC884FC7E118C5854570096CBF (intptr_t ___0_data, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Create", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Create)(___0_data);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_data);
	#endif

	return returnValue;
}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_EnableDebugLogging(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_m21685383DEDE08D27C74A274CA26D3FEEFC033EC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, bool ___1_flag, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_EnableDebugLogging", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_EnableDebugLogging)(____0_self_marshaled, static_cast<int32_t>(___1_flag));
	#else
	il2cppPInvokeFunc(____0_self_marshaled, static_cast<int32_t>(___1_flag));
	#endif

}
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Configure(System.Runtime.InteropServices.HandleRef,System.Boolean,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String[],System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Configure_mD397232FBA115AC8CFCB48BD84FB961D0F170B9E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, bool ___1_useGameSignIn, String_t* ___2_webClientId, bool ___3_requestAuthCode, bool ___4_forceTokenRefresh, bool ___5_requestEmail, bool ___6_requestIdToken, bool ___7_hidePopups, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___8_additionalScopes, int32_t ___9_scopeCount, String_t* ___10_accountName, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, char*, int32_t, int32_t, int32_t, int32_t, int32_t, char**, int32_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + 4 + sizeof(char*) + 4 + 4 + 4 + 4 + 4 + sizeof(void*) + sizeof(int32_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Configure", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___2_webClientId' to native representation
	char* ____2_webClientId_marshaled = NULL;
	____2_webClientId_marshaled = il2cpp_codegen_marshal_string(___2_webClientId);

	// Marshaling of parameter '___8_additionalScopes' to native representation
	char** ____8_additionalScopes_marshaled = NULL;
	if (___8_additionalScopes != NULL)
	{
		il2cpp_array_size_t ____8_additionalScopes_Length = (___8_additionalScopes)->max_length;
		____8_additionalScopes_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____8_additionalScopes_Length + 1);
		(____8_additionalScopes_marshaled)[____8_additionalScopes_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____8_additionalScopes_Length); i++)
		{
			(____8_additionalScopes_marshaled)[i] = il2cpp_codegen_marshal_string((___8_additionalScopes)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____8_additionalScopes_marshaled = NULL;
	}

	// Marshaling of parameter '___10_accountName' to native representation
	char* ____10_accountName_marshaled = NULL;
	____10_accountName_marshaled = il2cpp_codegen_marshal_string(___10_accountName);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Configure)(____0_self_marshaled, static_cast<int32_t>(___1_useGameSignIn), ____2_webClientId_marshaled, static_cast<int32_t>(___3_requestAuthCode), static_cast<int32_t>(___4_forceTokenRefresh), static_cast<int32_t>(___5_requestEmail), static_cast<int32_t>(___6_requestIdToken), static_cast<int32_t>(___7_hidePopups), ____8_additionalScopes_marshaled, ___9_scopeCount, ____10_accountName_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, static_cast<int32_t>(___1_useGameSignIn), ____2_webClientId_marshaled, static_cast<int32_t>(___3_requestAuthCode), static_cast<int32_t>(___4_forceTokenRefresh), static_cast<int32_t>(___5_requestEmail), static_cast<int32_t>(___6_requestIdToken), static_cast<int32_t>(___7_hidePopups), ____8_additionalScopes_marshaled, ___9_scopeCount, ____10_accountName_marshaled);
	#endif

	// Marshaling cleanup of parameter '___2_webClientId' native representation
	il2cpp_codegen_marshal_free(____2_webClientId_marshaled);
	____2_webClientId_marshaled = NULL;

	// Marshaling cleanup of parameter '___8_additionalScopes' native representation
	if (____8_additionalScopes_marshaled != NULL)
	{
		const il2cpp_array_size_t ____8_additionalScopes_marshaled_CleanupLoopCount = (___8_additionalScopes != NULL) ? (___8_additionalScopes)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____8_additionalScopes_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____8_additionalScopes_marshaled)[i]);
			(____8_additionalScopes_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____8_additionalScopes_marshaled);
		____8_additionalScopes_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___10_accountName' native representation
	il2cpp_codegen_marshal_free(____10_accountName_marshaled);
	____10_accountName_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignIn(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignIn_m22D8DE4B14BDAAE661FFEFEF5D9BEFD5830D2175 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_SignIn", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_SignIn)(____0_self_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignInSilently(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignInSilently_mB9B6823FC8F062B9FA8B3A954DD2D27CB6F7B062 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_SignInSilently", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_SignInSilently)(____0_self_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled);
	#endif

	return returnValue;
}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Signout(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Signout_mA13B93C574D80B705301DA279CB588434C256DE3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Signout", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_Signout)(____0_self_marshaled);
	#else
	il2cppPInvokeFunc(____0_self_marshaled);
	#endif

}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Disconnect(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Disconnect_m00F5736B6446CD99B21D3E58D7A6D2A48A4CA0EB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Disconnect", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_Disconnect)(____0_self_marshaled);
	#else
	il2cppPInvokeFunc(____0_self_marshaled);
	#endif

}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_DisposeFuture(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_DisposeFuture_m28CC383A504AA5E245927D51463C4C2E53036EF9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_DisposeFuture", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_DisposeFuture)(____0_self_marshaled);
	#else
	il2cppPInvokeFunc(____0_self_marshaled);
	#endif

}
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Pending(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Pending_mB2A55106C50985472B9CD2F983F668CE42490435 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Pending", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Pending)(____0_self_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_self_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Result(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Result_m9495EFE3047E860938A68D98AB665B08D9368BBB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Result", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Result)(____0_self_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled);
	#endif

	return returnValue;
}
// System.Int32 Google.Impl.GoogleSignInImpl::GoogleSignIn_Status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GoogleSignInImpl_GoogleSignIn_Status_m394770E3C255F4A323BC0BBCB95E17628385BF8C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Status", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Status)(____0_self_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_self_marshaled);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetServerAuthCode(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m7C4FB4471B7287C7F835758C8B6DEACCC423F478 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetServerAuthCode", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetServerAuthCode)(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetDisplayName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetDisplayName_mA10A1F7FCDB0C0509C25C07B4879ED6C8E7AB898 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetDisplayName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetDisplayName)(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetEmail(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetEmail_mB5BA2AF3A3B912BC7981CCAF582C4CB0BE794569 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetEmail", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetEmail)(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetFamilyName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetFamilyName_m598696E5B17386931EDA83BBB0620473B688B6B6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetFamilyName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetFamilyName)(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetGivenName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetGivenName_mFFF0ABA104C06A67D5A8E2412F037E9FEB5EF8C9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetGivenName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetGivenName)(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetIdToken(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetIdToken_m8E9891422C140811C8FA3BA9366BD82E0D1DD444 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetIdToken", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetIdToken)(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetImageUrl(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetImageUrl_m96C9B6DB9DA04EA6634C71B9651966DAD62434B4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetImageUrl", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetImageUrl)(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetUserId(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetUserId_m4DA7FB3CF2B43ABE928AC85A24017202EBB93B43 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetUserId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetUserId)(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#endif

	return returnValue;
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GetPlayerActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GetPlayerActivity_m298AD9D9AC4EEC28D205394CDD330BC02F1DD6A4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.AndroidJavaClass jc = new UnityEngine.AndroidJavaClass(
		//   "com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// return jc.GetStatic<UnityEngine.AndroidJavaObject>("currentActivity")
		//          .GetRawObject();
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_1, NULL);
		return L_2;
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
// System.Void Google.Impl.NativeFuture::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal NativeFuture(IntPtr ptr) : base(ptr) {
		intptr_t L_0 = ___0_ptr;
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.Impl.NativeFuture::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFuture_Dispose_m86BBFC01575F8083B39FAEFDD779267FE212C669 (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_DisposeFuture(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInImpl_GoogleSignIn_DisposeFuture_m28CC383A504AA5E245927D51463C4C2E53036EF9(L_0, NULL);
		// base.Dispose();
		BaseObject_Dispose_m554F3F996634EC0E8C5C0D2212659D5FDECC582F(__this, NULL);
		// }
		return;
	}
}
// System.Boolean Google.Impl.NativeFuture::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFuture_get_Pending_mF70898B348D8019990176CA0B7D46936E7EDA741 (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	{
		// return GoogleSignInImpl.GoogleSignIn_Pending(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		bool L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Pending_mB2A55106C50985472B9CD2F983F668CE42490435(L_0, NULL);
		return L_1;
	}
}
// Google.GoogleSignInUser Google.Impl.NativeFuture::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* NativeFuture_get_Result_m9A5DF2B826B14BC6D847C0CB12ACC2F5549B1A2A (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* V_1 = NULL;
	GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// IntPtr ptr = GoogleSignInImpl.GoogleSignIn_Result(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Result_m9495EFE3047E860938A68D98AB665B08D9368BBB(L_0, NULL);
		V_0 = L_1;
		// if (ptr != IntPtr.Zero) {
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_00ff;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_5 = (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		U3CU3Ec__DisplayClass5_0__ctor_m7497FAB21C83A976EB1558C8B99D253FA6DDF86A(L_5, NULL);
		V_1 = L_5;
		// GoogleSignInUser user = new GoogleSignInUser();
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_6 = (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA*)il2cpp_codegen_object_new(GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GoogleSignInUser__ctor_m0271D1B065D5BF40672070447A0D61EEDB88FF91(L_6, NULL);
		V_2 = L_6;
		// HandleRef userPtr = new HandleRef(user, ptr);
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_7 = V_1;
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_8 = V_2;
		intptr_t L_9 = V_0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_10;
		memset((&L_10), 0, sizeof(L_10));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_10), L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->___userPtr_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_7->___userPtr_0))->____wrapper_0), (void*)NULL);
		// user.DisplayName = OutParamsToString((out_string, out_size) =>
		//         GoogleSignInImpl.GoogleSignIn_GetDisplayName(userPtr,
		//                                                      out_string,
		//                                                      out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_11 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_12 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_13 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_13, NULL);
		NullCheck(L_11);
		GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B_inline(L_11, L_14, NULL);
		// user.Email = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetEmail(userPtr, out_string,
		//                                            out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_15 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_16 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_17 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946_RuntimeMethod_var), NULL);
		String_t* L_18;
		L_18 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_17, NULL);
		NullCheck(L_15);
		GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C_inline(L_15, L_18, NULL);
		// user.FamilyName = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetFamilyName(userPtr, out_string,
		//                                                 out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_19 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_20 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_21 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5_RuntimeMethod_var), NULL);
		String_t* L_22;
		L_22 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_21, NULL);
		NullCheck(L_19);
		GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9_inline(L_19, L_22, NULL);
		// user.GivenName = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetGivenName(userPtr, out_string,
		//                                                out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_23 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_24 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_25 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_25, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7_RuntimeMethod_var), NULL);
		String_t* L_26;
		L_26 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_25, NULL);
		NullCheck(L_23);
		GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D_inline(L_23, L_26, NULL);
		// user.IdToken = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetIdToken(userPtr, out_string,
		//                                              out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_27 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_28 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_29 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_29, L_28, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147_RuntimeMethod_var), NULL);
		String_t* L_30;
		L_30 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_29, NULL);
		NullCheck(L_27);
		GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3_inline(L_27, L_30, NULL);
		// user.AuthCode = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetServerAuthCode(userPtr, out_string,
		//                                                     out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_31 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_32 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_33 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_33, L_32, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C_RuntimeMethod_var), NULL);
		String_t* L_34;
		L_34 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_33, NULL);
		NullCheck(L_31);
		GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7_inline(L_31, L_34, NULL);
		// string url = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetImageUrl(userPtr, out_string,
		//                                               out_size));
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_35 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_36 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_36, L_35, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5_RuntimeMethod_var), NULL);
		String_t* L_37;
		L_37 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_36, NULL);
		V_3 = L_37;
		// if (url.Length > 0) {
		String_t* L_38 = V_3;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		// user.ImageUrl = new System.Uri(url);
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_40 = V_2;
		String_t* L_41 = V_3;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_42 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_42, L_41, NULL);
		NullCheck(L_40);
		GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45_inline(L_40, L_42, NULL);
	}

IL_00e6:
	{
		// user.UserId = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetUserId(userPtr, out_string,
		//                                             out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_43 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_44 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_45 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_45, L_44, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		String_t* L_46;
		L_46 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_45, NULL);
		NullCheck(L_43);
		GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270_inline(L_43, L_46, NULL);
		// return user;
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_47 = V_2;
		return L_47;
	}

IL_00ff:
	{
		// return null;
		return (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA*)NULL;
	}
}
// Google.GoogleSignInStatusCode Google.Impl.NativeFuture::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFuture_get_Status_mC727AD36BDCDD64E381FA4991E58694ABA9561F4 (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	{
		// return (GoogleSignInStatusCode)GoogleSignInImpl.GoogleSignIn_Status(
		//   SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		int32_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Status_m394770E3C255F4A323BC0BBCB95E17628385BF8C(L_0, NULL);
		return (int32_t)(L_1);
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
// System.Void Google.Impl.NativeFuture/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7497FAB21C83A976EB1558C8B99D253FA6DDF86A (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__0(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_string, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetDisplayName(userPtr,
		//                                              out_string,
		//                                              out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_out_string;
		uintptr_t L_2 = ___1_out_size;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetDisplayName_mA10A1F7FCDB0C0509C25C07B4879ED6C8E7AB898(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__1(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_string, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetEmail(userPtr, out_string,
		//                                        out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_out_string;
		uintptr_t L_2 = ___1_out_size;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetEmail_mB5BA2AF3A3B912BC7981CCAF582C4CB0BE794569(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__2(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_string, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetFamilyName(userPtr, out_string,
		//                                             out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_out_string;
		uintptr_t L_2 = ___1_out_size;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetFamilyName_m598696E5B17386931EDA83BBB0620473B688B6B6(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__3(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_string, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetGivenName(userPtr, out_string,
		//                                            out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_out_string;
		uintptr_t L_2 = ___1_out_size;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetGivenName_mFFF0ABA104C06A67D5A8E2412F037E9FEB5EF8C9(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__4(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_string, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetIdToken(userPtr, out_string,
		//                                          out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_out_string;
		uintptr_t L_2 = ___1_out_size;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetIdToken_m8E9891422C140811C8FA3BA9366BD82E0D1DD444(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__5(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_string, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetServerAuthCode(userPtr, out_string,
		//                                                 out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_out_string;
		uintptr_t L_2 = ___1_out_size;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m7C4FB4471B7287C7F835758C8B6DEACCC423F478(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__6(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_string, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetImageUrl(userPtr, out_string,
		//                                           out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_out_string;
		uintptr_t L_2 = ___1_out_size;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetImageUrl_m96C9B6DB9DA04EA6634C71B9651966DAD62434B4(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__7(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_string, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetUserId(userPtr, out_string,
		//                                         out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_out_string;
		uintptr_t L_2 = ___1_out_size;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetUserId_m4DA7FB3CF2B43ABE928AC85A24017202EBB93B43(L_0, L_1, L_2, NULL);
		return L_3;
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
// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* SignInHelperObject_get_Instance_mB289E4E5785ECA3877128A2D7E42F73DAEAA2C34 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAFAF1BA7E22CC639E69C44B0308455A786E3D91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying) {
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// GameObject obj = new GameObject("GoogleSignInHelperObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, _stringLiteralDAFAF1BA7E22CC639E69C44B0308455A786E3D91, NULL);
		// DontDestroyOnLoad(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		// instance = obj.AddComponent<SignInHelperObject>();
		NullCheck(L_2);
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_3;
		L_3 = GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF(L_2, GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF_RuntimeMethod_var);
		((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4), (void*)L_3);
		goto IL_002d;
	}

IL_0023:
	{
		// instance = new SignInHelperObject();
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_4 = (SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B*)il2cpp_codegen_object_new(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SignInHelperObject__ctor_m049CB998CA9E1DA5929BE9CFCEA8C33EE915CDA3(L_4, NULL);
		((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4), (void*)L_4);
	}

IL_002d:
	{
		// return instance;
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_5 = ((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4;
		return L_5;
	}
}
// System.Void Google.Impl.SignInHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelperObject__ctor_m049CB998CA9E1DA5929BE9CFCEA8C33EE915CDA3 (SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationManager_set_IsInitialized_mB3F9B5565F34680D20BF51161CC32DD697A92BAE_inline (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsInitializedU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationManager_set_IsSignedIn_m3C696CA8E4E386C66811246A406BC21D62A50B91_inline (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsSignedIn { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsSignedInU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FirebaseManager_get_IsInitialized_mDED0DDF70FAF39EEAF4E52AE1684993233172CA4_inline (FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = __this->___U3CIsInitializedU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_IdToken_m58382F225E3065502A66AFA23F70053153DEA62A_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CIdTokenU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseManager_set_FirebaseApp_m20062A2FD556B158CA3CDB83379FFBD5144AE97E_inline (FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* __this, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_value, const RuntimeMethod* method) 
{
	{
		// public FirebaseApp FirebaseApp { get; private set; }
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___0_value;
		__this->___U3CFirebaseAppU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFirebaseAppU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseManager_set_IsInitialized_m28D7E8A3F852CB451A4FBCBD46A72481362AEA16_inline (FirebaseManager_t881FC27357328319334AD0D1AD55A35C7E12E1AA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsInitializedU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RemoteConfigController_get_IsInitialized_m3F4840D801BDB9E32F7D61BE49B3D049E3DC4FAB_inline (RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = __this->___U3CIsInitializedU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AuthenticationManager_get_IsInitialized_mA2FB05A7D3CD12B933DB7E524DFC716818BAE50C_inline (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = __this->___U3CIsInitializedU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AuthenticationManager_get_IsSignedIn_mDF8C2D0FAA1E127EF9AC0B5A8336F7FD49635D89_inline (AuthenticationManager_tE68651AD973FB3E42B4847E595D7FC9673597725* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSignedIn { get; private set; }
		bool L_0 = __this->___U3CIsSignedInU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RemoteConfigController_set_IsInitialized_m180D3B75A02DB2D433411D1E3ADA4A1E9E6080BC_inline (RemoteConfigController_tC88FFE822E462FD2AAD1B652DD682FB20438905D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsInitializedU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___1_length;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___1_length;
		float L_5 = ___1_length;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), L_1, L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return theConfiguration;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		int32_t L_0 = ___0_value;
		__this->___U3CStatusU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_out_bytes, ___1_out_size, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CEmailU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEmailU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CFamilyNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFamilyNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CGivenNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGivenNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CIdTokenU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdTokenU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CAuthCodeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthCodeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___0_value;
		__this->___U3CImageUrlU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CImageUrlU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CUserIdU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIdU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_mDDD7C50AEB02B2E86BCA82D46A0B32C9B8A6965B_gshared_inline (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, bool ___0_arg0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
