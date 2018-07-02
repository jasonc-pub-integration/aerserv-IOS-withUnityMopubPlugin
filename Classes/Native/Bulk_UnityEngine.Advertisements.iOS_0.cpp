#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.Advertisements.IPlatform
struct IPlatform_t2298261414;
// UnityEngine.Advertisements.iOS.Platform
struct Platform_t1647901813;
// System.Exception
struct Exception_t;
// UnityEngine.Advertisements.UnsupportedPlatform
struct UnsupportedPlatform_t2036049172;
// System.String
struct String_t;
// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct EventHandler_1_t2215985868;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t1004265597;
// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct EventHandler_1_t908338235;
// UnityEngine.Advertisements.MetaData
struct MetaData_t2274729001;
// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t990845000;
// UnityEngine.Advertisements.Advertisement/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t3661298717;
// System.Action`1<UnityEngine.Advertisements.ShowResult>
struct Action_1_t3243021218;
// UnityEngine.Advertisements.Advertisement/<>c__DisplayClass32_1
struct U3CU3Ec__DisplayClass32_1_t3661233181;
// UnityEngine.Advertisements.Advertisement/<>c
struct U3CU3Ec_t3409917408;
// UnityEngine.Advertisements.StartEventArgs
struct StartEventArgs_t4291826435;
// UnityEngine.Advertisements.FinishEventArgs
struct FinishEventArgs_t2984178802;
// UnityEngine.Advertisements.CallbackExecutor
struct CallbackExecutor_t363496179;
// System.Action`1<UnityEngine.Advertisements.CallbackExecutor>
struct Action_1_t535963774;
// System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>
struct Queue_1_t382223268;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Advertisements.ErrorEventArgs
struct ErrorEventArgs_t2253147013;
// System.EventArgs
struct EventArgs_t3591816995;
// UnityEngine.Advertisements.iOS.Platform/unityAdsReady
struct unityAdsReady_t96934738;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError
struct unityAdsDidError_t1993223595;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart
struct unityAdsDidStart_t1058412932;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish
struct unityAdsDidFinish_t3747416149;
// UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingDidInitiatePurchasingCommand
struct unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962;
// UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetProductCatalog
struct unityAdsPurchasingGetProductCatalog_t1122116460;
// UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetPurchasingVersion
struct unityAdsPurchasingGetPurchasingVersion_t1837383580;
// UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingInitialize
struct unityAdsPurchasingInitialize_t3791088414;
// UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t3393166357;
// UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_t2185475464;
// UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t3751559405;
// UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t1022676050;
// UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass32_1
struct U3CU3Ec__DisplayClass32_1_t1022676051;
// UnityEngine.Advertisements.IPurchasingEventSender
struct IPurchasingEventSender_t2368667682;
// System.Delegate
struct Delegate_t1188392813;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Advertisements.ReadyEventArgs
struct ReadyEventArgs_t549087536;
// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>
struct EventHandler_1_t2768214265;
// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>
struct EventHandler_1_t177306446;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// UnityEngine.Advertisements.MiniJSON.Json/Serializer
struct Serializer_t4281185815;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Collections.IList
struct IList_t2094931216;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Action`1<UnityEngine.Advertisements.CallbackExecutor>[]
struct Action_1U5BU5D_t3839123403;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1694351041;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1329213854;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;

extern RuntimeClass* Platform_t1647901813_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* UnsupportedPlatform_t2036049172_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4107934516;
extern const uint32_t Advertisement_GetPlatform_m1793327847_MetadataUsageId;
extern RuntimeClass* Advertisement_t842671397_il2cpp_TypeInfo_var;
extern const uint32_t Advertisement_get_isInitialized_m1911738515_MetadataUsageId;
extern const uint32_t Advertisement_set_isInitialized_m2873932978_MetadataUsageId;
extern RuntimeClass* IPlatform_t2298261414_il2cpp_TypeInfo_var;
extern const uint32_t Advertisement_get_isSupported_m2987402704_MetadataUsageId;
extern const uint32_t Advertisement_get_version_m3014709626_MetadataUsageId;
extern const uint32_t Advertisement_set_isShowing_m3029138671_MetadataUsageId;
extern RuntimeClass* U3CU3Ec_t3409917408_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t2215985868_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t908338235_il2cpp_TypeInfo_var;
extern RuntimeClass* MetaData_t2274729001_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec_U3CInitializeU3Eb__24_0_m1842518973_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m2017948744_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CInitializeU3Eb__24_1_m2316996385_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m3836473258_RuntimeMethod_var;
extern String_t* _stringLiteral2258625258;
extern String_t* _stringLiteral62725243;
extern String_t* _stringLiteral1947076759;
extern String_t* _stringLiteral1902401671;
extern String_t* _stringLiteral4032983950;
extern String_t* _stringLiteral1981792762;
extern const uint32_t Advertisement_Initialize_m2594994727_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Advertisement_IsReady_m3938997821_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__DisplayClass32_0_t3661298717_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass32_1_t3661233181_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass32_1_U3CShowU3Eb__0_m1950449976_RuntimeMethod_var;
extern String_t* _stringLiteral2261821926;
extern String_t* _stringLiteral4028036860;
extern const uint32_t Advertisement_Show_m798506469_MetadataUsageId;
extern const uint32_t Advertisement_SetMetaData_m565371566_MetadataUsageId;
extern const uint32_t Advertisement__cctor_m2476277213_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m2055244828_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3CInitializeU3Eb__24_0_m1842518973_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3CInitializeU3Eb__24_1_m2316996385_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m1246102229_RuntimeMethod_var;
extern const uint32_t U3CU3Ec__DisplayClass32_1_U3CShowU3Eb__0_m1950449976_MetadataUsageId;
extern const RuntimeMethod* Queue_1_Enqueue_m1151361973_RuntimeMethod_var;
extern const uint32_t CallbackExecutor_Post_m1360464972_MetadataUsageId;
extern const RuntimeMethod* Queue_1_Dequeue_m2025295047_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m3838832427_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m3760112611_RuntimeMethod_var;
extern const uint32_t CallbackExecutor_Update_m1768355658_MetadataUsageId;
extern RuntimeClass* Queue_1_t382223268_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Queue_1__ctor_m3415362461_RuntimeMethod_var;
extern const uint32_t CallbackExecutor__ctor_m1195307918_MetadataUsageId;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern const uint32_t ErrorEventArgs__ctor_m3105067562_MetadataUsageId;
extern const uint32_t FinishEventArgs__ctor_m911455770_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__DisplayClass29_0_t3393166357_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t535963774_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass29_0_U3CUnityAdsReadyU3Eb__0_m626247486_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m122859363_RuntimeMethod_var;
extern const uint32_t Platform_UnityAdsReady_m1487611528_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__DisplayClass30_0_t2185475464_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass30_0_U3CUnityAdsDidErrorU3Eb__0_m2218418778_RuntimeMethod_var;
extern const uint32_t Platform_UnityAdsDidError_m2802114104_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__DisplayClass31_0_t3751559405_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3CUnityAdsDidStartU3Eb__0_m301878744_RuntimeMethod_var;
extern const uint32_t Platform_UnityAdsDidStart_m2533573874_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__DisplayClass32_0_t1022676050_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass32_1_t1022676051_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass32_1_U3CUnityAdsDidFinishU3Eb__0_m881700773_RuntimeMethod_var;
extern const uint32_t Platform_UnityAdsDidFinish_m3955608050_MetadataUsageId;
extern RuntimeClass* Purchasing_t1355674289_il2cpp_TypeInfo_var;
extern const uint32_t Platform_UnityAdsDidInitiatePurchasingCommand_m3816664491_MetadataUsageId;
extern const uint32_t Platform_UnityAdsPurchasingGetProductCatalog_m2180521046_MetadataUsageId;
extern const uint32_t Platform_UnityAdsPurchasingGetPurchasingVersion_m618922504_MetadataUsageId;
extern const uint32_t Platform_UnityAdsPurchasingInitialize_m1149165094_MetadataUsageId;
extern const uint32_t Platform_add_OnStart_m3588358312_MetadataUsageId;
extern const uint32_t Platform_remove_OnStart_m4019691916_MetadataUsageId;
extern const uint32_t Platform_add_OnFinish_m3936121804_MetadataUsageId;
extern const uint32_t Platform_remove_OnFinish_m3216092807_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* unityAdsReady_t96934738_il2cpp_TypeInfo_var;
extern RuntimeClass* unityAdsDidError_t1993223595_il2cpp_TypeInfo_var;
extern RuntimeClass* unityAdsDidStart_t1058412932_il2cpp_TypeInfo_var;
extern RuntimeClass* unityAdsDidFinish_t3747416149_il2cpp_TypeInfo_var;
extern RuntimeClass* unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962_il2cpp_TypeInfo_var;
extern RuntimeClass* unityAdsPurchasingGetProductCatalog_t1122116460_il2cpp_TypeInfo_var;
extern RuntimeClass* unityAdsPurchasingGetPurchasingVersion_t1837383580_il2cpp_TypeInfo_var;
extern RuntimeClass* unityAdsPurchasingInitialize_t3791088414_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisCallbackExecutor_t363496179_m374342643_RuntimeMethod_var;
extern const RuntimeMethod* Platform_UnityAdsReady_m1487611528_RuntimeMethod_var;
extern const RuntimeMethod* Platform_UnityAdsDidError_m2802114104_RuntimeMethod_var;
extern const RuntimeMethod* Platform_UnityAdsDidStart_m2533573874_RuntimeMethod_var;
extern const RuntimeMethod* Platform_UnityAdsDidFinish_m3955608050_RuntimeMethod_var;
extern const RuntimeMethod* Platform_UnityAdsDidInitiatePurchasingCommand_m3816664491_RuntimeMethod_var;
extern const RuntimeMethod* Platform_UnityAdsPurchasingGetProductCatalog_m2180521046_RuntimeMethod_var;
extern const RuntimeMethod* Platform_UnityAdsPurchasingGetPurchasingVersion_m618922504_RuntimeMethod_var;
extern const RuntimeMethod* Platform_UnityAdsPurchasingInitialize_m1149165094_RuntimeMethod_var;
extern String_t* _stringLiteral2428876507;
extern const uint32_t Platform__ctor_m334176308_MetadataUsageId;
extern RuntimeClass* ReadyEventArgs_t549087536_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m914743136_RuntimeMethod_var;
extern const uint32_t U3CU3Ec__DisplayClass29_0_U3CUnityAdsReadyU3Eb__0_m626247486_MetadataUsageId;
extern RuntimeClass* ErrorEventArgs_t2253147013_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m112288143_RuntimeMethod_var;
extern const uint32_t U3CU3Ec__DisplayClass30_0_U3CUnityAdsDidErrorU3Eb__0_m2218418778_MetadataUsageId;
extern RuntimeClass* StartEventArgs_t4291826435_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m2488886871_RuntimeMethod_var;
extern const uint32_t U3CU3Ec__DisplayClass31_0_U3CUnityAdsDidStartU3Eb__0_m301878744_MetadataUsageId;
extern RuntimeClass* FinishEventArgs_t2984178802_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m3511014384_RuntimeMethod_var;
extern const uint32_t U3CU3Ec__DisplayClass32_1_U3CUnityAdsDidFinishU3Eb__0_m881700773_MetadataUsageId;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern const uint32_t unityAdsDidError_BeginInvoke_m645501748_MetadataUsageId;
extern const uint32_t unityAdsDidFinish_BeginInvoke_m833542629_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2987621751_RuntimeMethod_var;
extern const uint32_t MetaData__ctor_m3588377154_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t1329213854_il2cpp_TypeInfo_var;
extern const uint32_t MetaData_Set_m623296862_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern const uint32_t Serializer__ctor_m2586747667_MetadataUsageId;
extern RuntimeClass* Serializer_t4281185815_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_Serialize_m960091899_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_t2094931216_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_t1363984059_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1202628576;
extern String_t* _stringLiteral3875954633;
extern String_t* _stringLiteral4002445229;
extern const uint32_t Serializer_SerializeValue_m4143112955_MetadataUsageId;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_SerializeObject_m3183982393_MetadataUsageId;
extern const uint32_t Serializer_SerializeArray_m3789406202_MetadataUsageId;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3450386420;
extern String_t* _stringLiteral3458119668;
extern String_t* _stringLiteral3454580724;
extern String_t* _stringLiteral3454318580;
extern String_t* _stringLiteral3454842868;
extern String_t* _stringLiteral3455629300;
extern String_t* _stringLiteral3455498228;
extern String_t* _stringLiteral3455432692;
extern String_t* _stringLiteral3451303896;
extern const uint32_t Serializer_SerializeString_m3607038265_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614638;
extern const uint32_t Serializer_SerializeOther_m1218368759_MetadataUsageId;
extern const RuntimeType* String_t_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern const uint32_t Purchasing_Initialize_m2991467968_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern const uint32_t Purchasing_InitiatePurchasingCommand_m2709730589_MetadataUsageId;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral1602229408;
extern const uint32_t Purchasing_GetPurchasingCatalog_m716646145_MetadataUsageId;
extern const uint32_t Purchasing_GetPromoVersion_m1709726025_MetadataUsageId;
extern String_t* _stringLiteral2293912210;
extern String_t* _stringLiteral3003557153;
extern String_t* _stringLiteral1902402919;
extern String_t* _stringLiteral2730531857;
extern const uint32_t Purchasing__cctor_m4131186914_MetadataUsageId;
extern const uint32_t ReadyEventArgs__ctor_m4282028464_MetadataUsageId;
extern const uint32_t StartEventArgs__ctor_m3416358600_MetadataUsageId;
extern const uint32_t UnsupportedPlatform_add_OnFinish_m1259096882_MetadataUsageId;
extern const uint32_t UnsupportedPlatform_remove_OnFinish_m2547095395_MetadataUsageId;
extern const uint32_t UnsupportedPlatform_Show_m3910022718_MetadataUsageId;

struct CharU5BU5D_t3528271667;
struct TypeU5BU5D_t3940880105;
struct StringU5BU5D_t1281789340;
struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745542_H
#define U3CMODULEU3E_T692745542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745542 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745542_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef U3CU3EC__DISPLAYCLASS32_1_T3661233181_H
#define U3CU3EC__DISPLAYCLASS32_1_T3661233181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement/<>c__DisplayClass32_1
struct  U3CU3Ec__DisplayClass32_1_t3661233181  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Advertisement/<>c__DisplayClass32_1::finishHandler
	EventHandler_1_t908338235 * ___finishHandler_0;
	// UnityEngine.Advertisements.Advertisement/<>c__DisplayClass32_0 UnityEngine.Advertisements.Advertisement/<>c__DisplayClass32_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass32_0_t3661298717 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_finishHandler_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_1_t3661233181, ___finishHandler_0)); }
	inline EventHandler_1_t908338235 * get_finishHandler_0() const { return ___finishHandler_0; }
	inline EventHandler_1_t908338235 ** get_address_of_finishHandler_0() { return &___finishHandler_0; }
	inline void set_finishHandler_0(EventHandler_1_t908338235 * value)
	{
		___finishHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___finishHandler_0), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_1_t3661233181, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass32_0_t3661298717 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass32_0_t3661298717 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass32_0_t3661298717 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E8__locals1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS32_1_T3661233181_H
#ifndef QUEUE_1_T382223268_H
#define QUEUE_1_T382223268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>
struct  Queue_1_t382223268  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	Action_1U5BU5D_t3839123403* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t382223268, ____array_0)); }
	inline Action_1U5BU5D_t3839123403* get__array_0() const { return ____array_0; }
	inline Action_1U5BU5D_t3839123403** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Action_1U5BU5D_t3839123403* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t382223268, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t382223268, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t382223268, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t382223268, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T382223268_H
#ifndef SERIALIZER_T4281185815_H
#define SERIALIZER_T4281185815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.MiniJSON.Json/Serializer
struct  Serializer_t4281185815  : public RuntimeObject
{
public:
	// System.Text.StringBuilder UnityEngine.Advertisements.MiniJSON.Json/Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t4281185815, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((&___builder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZER_T4281185815_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef PURCHASING_T1355674289_H
#define PURCHASING_T1355674289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Purchasing
struct  Purchasing_t1355674289  : public RuntimeObject
{
public:

public:
};

struct Purchasing_t1355674289_StaticFields
{
public:
	// System.Type UnityEngine.Advertisements.Purchasing::s_PurchasingManagerType
	Type_t * ___s_PurchasingManagerType_0;
	// System.Boolean UnityEngine.Advertisements.Purchasing::s_Initialized
	bool ___s_Initialized_1;
	// System.Reflection.MethodInfo UnityEngine.Advertisements.Purchasing::s_PurchasingInitiatePurchaseMethodInfo
	MethodInfo_t * ___s_PurchasingInitiatePurchaseMethodInfo_2;
	// System.Reflection.MethodInfo UnityEngine.Advertisements.Purchasing::s_PurchasingGetPromoVersionMethodInfo
	MethodInfo_t * ___s_PurchasingGetPromoVersionMethodInfo_3;
	// System.Reflection.MethodInfo UnityEngine.Advertisements.Purchasing::s_PurchasingGetPromoCatalogMethodInfo
	MethodInfo_t * ___s_PurchasingGetPromoCatalogMethodInfo_4;
	// System.String UnityEngine.Advertisements.Purchasing::s_PurchasingManagerClassName
	String_t* ___s_PurchasingManagerClassName_5;
	// System.String UnityEngine.Advertisements.Purchasing::s_PurchasingInitiatePurchaseMethodName
	String_t* ___s_PurchasingInitiatePurchaseMethodName_6;
	// System.String UnityEngine.Advertisements.Purchasing::s_PurchasingGetPromoVersionMethodName
	String_t* ___s_PurchasingGetPromoVersionMethodName_7;
	// System.String UnityEngine.Advertisements.Purchasing::s_PurchasingGetPromoCatalogMethodName
	String_t* ___s_PurchasingGetPromoCatalogMethodName_8;
	// UnityEngine.Advertisements.IPurchasingEventSender UnityEngine.Advertisements.Purchasing::s_Platform
	RuntimeObject* ___s_Platform_9;

public:
	inline static int32_t get_offset_of_s_PurchasingManagerType_0() { return static_cast<int32_t>(offsetof(Purchasing_t1355674289_StaticFields, ___s_PurchasingManagerType_0)); }
	inline Type_t * get_s_PurchasingManagerType_0() const { return ___s_PurchasingManagerType_0; }
	inline Type_t ** get_address_of_s_PurchasingManagerType_0() { return &___s_PurchasingManagerType_0; }
	inline void set_s_PurchasingManagerType_0(Type_t * value)
	{
		___s_PurchasingManagerType_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_PurchasingManagerType_0), value);
	}

	inline static int32_t get_offset_of_s_Initialized_1() { return static_cast<int32_t>(offsetof(Purchasing_t1355674289_StaticFields, ___s_Initialized_1)); }
	inline bool get_s_Initialized_1() const { return ___s_Initialized_1; }
	inline bool* get_address_of_s_Initialized_1() { return &___s_Initialized_1; }
	inline void set_s_Initialized_1(bool value)
	{
		___s_Initialized_1 = value;
	}

	inline static int32_t get_offset_of_s_PurchasingInitiatePurchaseMethodInfo_2() { return static_cast<int32_t>(offsetof(Purchasing_t1355674289_StaticFields, ___s_PurchasingInitiatePurchaseMethodInfo_2)); }
	inline MethodInfo_t * get_s_PurchasingInitiatePurchaseMethodInfo_2() const { return ___s_PurchasingInitiatePurchaseMethodInfo_2; }
	inline MethodInfo_t ** get_address_of_s_PurchasingInitiatePurchaseMethodInfo_2() { return &___s_PurchasingInitiatePurchaseMethodInfo_2; }
	inline void set_s_PurchasingInitiatePurchaseMethodInfo_2(MethodInfo_t * value)
	{
		___s_PurchasingInitiatePurchaseMethodInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_PurchasingInitiatePurchaseMethodInfo_2), value);
	}

	inline static int32_t get_offset_of_s_PurchasingGetPromoVersionMethodInfo_3() { return static_cast<int32_t>(offsetof(Purchasing_t1355674289_StaticFields, ___s_PurchasingGetPromoVersionMethodInfo_3)); }
	inline MethodInfo_t * get_s_PurchasingGetPromoVersionMethodInfo_3() const { return ___s_PurchasingGetPromoVersionMethodInfo_3; }
	inline MethodInfo_t ** get_address_of_s_PurchasingGetPromoVersionMethodInfo_3() { return &___s_PurchasingGetPromoVersionMethodInfo_3; }
	inline void set_s_PurchasingGetPromoVersionMethodInfo_3(MethodInfo_t * value)
	{
		___s_PurchasingGetPromoVersionMethodInfo_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_PurchasingGetPromoVersionMethodInfo_3), value);
	}

	inline static int32_t get_offset_of_s_PurchasingGetPromoCatalogMethodInfo_4() { return static_cast<int32_t>(offsetof(Purchasing_t1355674289_StaticFields, ___s_PurchasingGetPromoCatalogMethodInfo_4)); }
	inline MethodInfo_t * get_s_PurchasingGetPromoCatalogMethodInfo_4() const { return ___s_PurchasingGetPromoCatalogMethodInfo_4; }
	inline MethodInfo_t ** get_address_of_s_PurchasingGetPromoCatalogMethodInfo_4() { return &___s_PurchasingGetPromoCatalogMethodInfo_4; }
	inline void set_s_PurchasingGetPromoCatalogMethodInfo_4(MethodInfo_t * value)
	{
		___s_PurchasingGetPromoCatalogMethodInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_PurchasingGetPromoCatalogMethodInfo_4), value);
	}

	inline static int32_t get_offset_of_s_PurchasingManagerClassName_5() { return static_cast<int32_t>(offsetof(Purchasing_t1355674289_StaticFields, ___s_PurchasingManagerClassName_5)); }
	inline String_t* get_s_PurchasingManagerClassName_5() const { return ___s_PurchasingManagerClassName_5; }
	inline String_t** get_address_of_s_PurchasingManagerClassName_5() { return &___s_PurchasingManagerClassName_5; }
	inline void set_s_PurchasingManagerClassName_5(String_t* value)
	{
		___s_PurchasingManagerClassName_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_PurchasingManagerClassName_5), value);
	}

	inline static int32_t get_offset_of_s_PurchasingInitiatePurchaseMethodName_6() { return static_cast<int32_t>(offsetof(Purchasing_t1355674289_StaticFields, ___s_PurchasingInitiatePurchaseMethodName_6)); }
	inline String_t* get_s_PurchasingInitiatePurchaseMethodName_6() const { return ___s_PurchasingInitiatePurchaseMethodName_6; }
	inline String_t** get_address_of_s_PurchasingInitiatePurchaseMethodName_6() { return &___s_PurchasingInitiatePurchaseMethodName_6; }
	inline void set_s_PurchasingInitiatePurchaseMethodName_6(String_t* value)
	{
		___s_PurchasingInitiatePurchaseMethodName_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_PurchasingInitiatePurchaseMethodName_6), value);
	}

	inline static int32_t get_offset_of_s_PurchasingGetPromoVersionMethodName_7() { return static_cast<int32_t>(offsetof(Purchasing_t1355674289_StaticFields, ___s_PurchasingGetPromoVersionMethodName_7)); }
	inline String_t* get_s_PurchasingGetPromoVersionMethodName_7() const { return ___s_PurchasingGetPromoVersionMethodName_7; }
	inline String_t** get_address_of_s_PurchasingGetPromoVersionMethodName_7() { return &___s_PurchasingGetPromoVersionMethodName_7; }
	inline void set_s_PurchasingGetPromoVersionMethodName_7(String_t* value)
	{
		___s_PurchasingGetPromoVersionMethodName_7 = value;
		Il2CppCodeGenWriteBarrier((&___s_PurchasingGetPromoVersionMethodName_7), value);
	}

	inline static int32_t get_offset_of_s_PurchasingGetPromoCatalogMethodName_8() { return static_cast<int32_t>(offsetof(Purchasing_t1355674289_StaticFields, ___s_PurchasingGetPromoCatalogMethodName_8)); }
	inline String_t* get_s_PurchasingGetPromoCatalogMethodName_8() const { return ___s_PurchasingGetPromoCatalogMethodName_8; }
	inline String_t** get_address_of_s_PurchasingGetPromoCatalogMethodName_8() { return &___s_PurchasingGetPromoCatalogMethodName_8; }
	inline void set_s_PurchasingGetPromoCatalogMethodName_8(String_t* value)
	{
		___s_PurchasingGetPromoCatalogMethodName_8 = value;
		Il2CppCodeGenWriteBarrier((&___s_PurchasingGetPromoCatalogMethodName_8), value);
	}

	inline static int32_t get_offset_of_s_Platform_9() { return static_cast<int32_t>(offsetof(Purchasing_t1355674289_StaticFields, ___s_Platform_9)); }
	inline RuntimeObject* get_s_Platform_9() const { return ___s_Platform_9; }
	inline RuntimeObject** get_address_of_s_Platform_9() { return &___s_Platform_9; }
	inline void set_s_Platform_9(RuntimeObject* value)
	{
		___s_Platform_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_Platform_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PURCHASING_T1355674289_H
#ifndef U3CU3EC__DISPLAYCLASS29_0_T3393166357_H
#define U3CU3EC__DISPLAYCLASS29_0_T3393166357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass29_0
struct  U3CU3Ec__DisplayClass29_0_t3393166357  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs> UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass29_0::handler
	EventHandler_1_t2768214265 * ___handler_0;
	// System.String UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass29_0::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_t3393166357, ___handler_0)); }
	inline EventHandler_1_t2768214265 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t2768214265 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t2768214265 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_t3393166357, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((&___placementId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS29_0_T3393166357_H
#ifndef U3CU3EC__DISPLAYCLASS30_0_T2185475464_H
#define U3CU3EC__DISPLAYCLASS30_0_T2185475464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass30_0
struct  U3CU3Ec__DisplayClass30_0_t2185475464  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs> UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass30_0::handler
	EventHandler_1_t177306446 * ___handler_0;
	// System.Int64 UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass30_0::rawError
	int64_t ___rawError_1;
	// System.String UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass30_0::message
	String_t* ___message_2;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_t2185475464, ___handler_0)); }
	inline EventHandler_1_t177306446 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t177306446 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t177306446 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_rawError_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_t2185475464, ___rawError_1)); }
	inline int64_t get_rawError_1() const { return ___rawError_1; }
	inline int64_t* get_address_of_rawError_1() { return &___rawError_1; }
	inline void set_rawError_1(int64_t value)
	{
		___rawError_1 = value;
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_t2185475464, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS30_0_T2185475464_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef U3CU3EC__DISPLAYCLASS31_0_T3751559405_H
#define U3CU3EC__DISPLAYCLASS31_0_T3751559405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass31_0
struct  U3CU3Ec__DisplayClass31_0_t3751559405  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass31_0::handler
	EventHandler_1_t2215985868 * ___handler_0;
	// System.String UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass31_0::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_t3751559405, ___handler_0)); }
	inline EventHandler_1_t2215985868 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t2215985868 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t2215985868 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_t3751559405, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((&___placementId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS31_0_T3751559405_H
#ifndef U3CU3EC__DISPLAYCLASS32_0_T1022676050_H
#define U3CU3EC__DISPLAYCLASS32_0_T1022676050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass32_0
struct  U3CU3Ec__DisplayClass32_0_t1022676050  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass32_0::handler
	EventHandler_1_t908338235 * ___handler_0;
	// System.String UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass32_0::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_0_t1022676050, ___handler_0)); }
	inline EventHandler_1_t908338235 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t908338235 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t908338235 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_0_t1022676050, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((&___placementId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS32_0_T1022676050_H
#ifndef DICTIONARY_2_T2865362463_H
#define DICTIONARY_2_T2865362463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t2865362463  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2865362463_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1694351041 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1694351041 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1694351041 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1694351041 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2865362463_H
#ifndef JSON_T4236754949_H
#define JSON_T4236754949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.MiniJSON.Json
struct  Json_t4236754949  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSON_T4236754949_H
#ifndef U3CU3EC__DISPLAYCLASS32_0_T3661298717_H
#define U3CU3EC__DISPLAYCLASS32_0_T3661298717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement/<>c__DisplayClass32_0
struct  U3CU3Ec__DisplayClass32_0_t3661298717  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.ShowOptions UnityEngine.Advertisements.Advertisement/<>c__DisplayClass32_0::showOptions
	ShowOptions_t990845000 * ___showOptions_0;

public:
	inline static int32_t get_offset_of_showOptions_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_0_t3661298717, ___showOptions_0)); }
	inline ShowOptions_t990845000 * get_showOptions_0() const { return ___showOptions_0; }
	inline ShowOptions_t990845000 ** get_address_of_showOptions_0() { return &___showOptions_0; }
	inline void set_showOptions_0(ShowOptions_t990845000 * value)
	{
		___showOptions_0 = value;
		Il2CppCodeGenWriteBarrier((&___showOptions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS32_0_T3661298717_H
#ifndef SHOWOPTIONS_T990845000_H
#define SHOWOPTIONS_T990845000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.ShowOptions
struct  ShowOptions_t990845000  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.Advertisements.ShowResult> UnityEngine.Advertisements.ShowOptions::<resultCallback>k__BackingField
	Action_1_t3243021218 * ___U3CresultCallbackU3Ek__BackingField_0;
	// System.String UnityEngine.Advertisements.ShowOptions::<gamerSid>k__BackingField
	String_t* ___U3CgamerSidU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CresultCallbackU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ShowOptions_t990845000, ___U3CresultCallbackU3Ek__BackingField_0)); }
	inline Action_1_t3243021218 * get_U3CresultCallbackU3Ek__BackingField_0() const { return ___U3CresultCallbackU3Ek__BackingField_0; }
	inline Action_1_t3243021218 ** get_address_of_U3CresultCallbackU3Ek__BackingField_0() { return &___U3CresultCallbackU3Ek__BackingField_0; }
	inline void set_U3CresultCallbackU3Ek__BackingField_0(Action_1_t3243021218 * value)
	{
		___U3CresultCallbackU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CresultCallbackU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CgamerSidU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ShowOptions_t990845000, ___U3CgamerSidU3Ek__BackingField_1)); }
	inline String_t* get_U3CgamerSidU3Ek__BackingField_1() const { return ___U3CgamerSidU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CgamerSidU3Ek__BackingField_1() { return &___U3CgamerSidU3Ek__BackingField_1; }
	inline void set_U3CgamerSidU3Ek__BackingField_1(String_t* value)
	{
		___U3CgamerSidU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CgamerSidU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOWOPTIONS_T990845000_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef U3CU3EC_T3409917408_H
#define U3CU3EC_T3409917408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement/<>c
struct  U3CU3Ec_t3409917408  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3409917408_StaticFields
{
public:
	// UnityEngine.Advertisements.Advertisement/<>c UnityEngine.Advertisements.Advertisement/<>c::<>9
	U3CU3Ec_t3409917408 * ___U3CU3E9_0;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Advertisement/<>c::<>9__24_0
	EventHandler_1_t2215985868 * ___U3CU3E9__24_0_1;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Advertisement/<>c::<>9__24_1
	EventHandler_1_t908338235 * ___U3CU3E9__24_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3409917408_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3409917408 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3409917408 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3409917408 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3409917408_StaticFields, ___U3CU3E9__24_0_1)); }
	inline EventHandler_1_t2215985868 * get_U3CU3E9__24_0_1() const { return ___U3CU3E9__24_0_1; }
	inline EventHandler_1_t2215985868 ** get_address_of_U3CU3E9__24_0_1() { return &___U3CU3E9__24_0_1; }
	inline void set_U3CU3E9__24_0_1(EventHandler_1_t2215985868 * value)
	{
		___U3CU3E9__24_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__24_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3409917408_StaticFields, ___U3CU3E9__24_1_2)); }
	inline EventHandler_1_t908338235 * get_U3CU3E9__24_1_2() const { return ___U3CU3E9__24_1_2; }
	inline EventHandler_1_t908338235 ** get_address_of_U3CU3E9__24_1_2() { return &___U3CU3E9__24_1_2; }
	inline void set_U3CU3E9__24_1_2(EventHandler_1_t908338235 * value)
	{
		___U3CU3E9__24_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__24_1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3409917408_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef UNSUPPORTEDPLATFORM_T2036049172_H
#define UNSUPPORTEDPLATFORM_T2036049172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.UnsupportedPlatform
struct  UnsupportedPlatform_t2036049172  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.UnsupportedPlatform::OnFinish
	EventHandler_1_t908338235 * ___OnFinish_0;

public:
	inline static int32_t get_offset_of_OnFinish_0() { return static_cast<int32_t>(offsetof(UnsupportedPlatform_t2036049172, ___OnFinish_0)); }
	inline EventHandler_1_t908338235 * get_OnFinish_0() const { return ___OnFinish_0; }
	inline EventHandler_1_t908338235 ** get_address_of_OnFinish_0() { return &___OnFinish_0; }
	inline void set_OnFinish_0(EventHandler_1_t908338235 * value)
	{
		___OnFinish_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnFinish_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSUPPORTEDPLATFORM_T2036049172_H
#ifndef PLATFORM_T1647901813_H
#define PLATFORM_T1647901813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform
struct  Platform_t1647901813  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs> UnityEngine.Advertisements.iOS.Platform::OnReady
	EventHandler_1_t2768214265 * ___OnReady_2;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.iOS.Platform::OnStart
	EventHandler_1_t2215985868 * ___OnStart_3;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.iOS.Platform::OnFinish
	EventHandler_1_t908338235 * ___OnFinish_4;
	// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs> UnityEngine.Advertisements.iOS.Platform::OnError
	EventHandler_1_t177306446 * ___OnError_5;

public:
	inline static int32_t get_offset_of_OnReady_2() { return static_cast<int32_t>(offsetof(Platform_t1647901813, ___OnReady_2)); }
	inline EventHandler_1_t2768214265 * get_OnReady_2() const { return ___OnReady_2; }
	inline EventHandler_1_t2768214265 ** get_address_of_OnReady_2() { return &___OnReady_2; }
	inline void set_OnReady_2(EventHandler_1_t2768214265 * value)
	{
		___OnReady_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnReady_2), value);
	}

	inline static int32_t get_offset_of_OnStart_3() { return static_cast<int32_t>(offsetof(Platform_t1647901813, ___OnStart_3)); }
	inline EventHandler_1_t2215985868 * get_OnStart_3() const { return ___OnStart_3; }
	inline EventHandler_1_t2215985868 ** get_address_of_OnStart_3() { return &___OnStart_3; }
	inline void set_OnStart_3(EventHandler_1_t2215985868 * value)
	{
		___OnStart_3 = value;
		Il2CppCodeGenWriteBarrier((&___OnStart_3), value);
	}

	inline static int32_t get_offset_of_OnFinish_4() { return static_cast<int32_t>(offsetof(Platform_t1647901813, ___OnFinish_4)); }
	inline EventHandler_1_t908338235 * get_OnFinish_4() const { return ___OnFinish_4; }
	inline EventHandler_1_t908338235 ** get_address_of_OnFinish_4() { return &___OnFinish_4; }
	inline void set_OnFinish_4(EventHandler_1_t908338235 * value)
	{
		___OnFinish_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnFinish_4), value);
	}

	inline static int32_t get_offset_of_OnError_5() { return static_cast<int32_t>(offsetof(Platform_t1647901813, ___OnError_5)); }
	inline EventHandler_1_t177306446 * get_OnError_5() const { return ___OnError_5; }
	inline EventHandler_1_t177306446 ** get_address_of_OnError_5() { return &___OnError_5; }
	inline void set_OnError_5(EventHandler_1_t177306446 * value)
	{
		___OnError_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnError_5), value);
	}
};

struct Platform_t1647901813_StaticFields
{
public:
	// UnityEngine.Advertisements.iOS.Platform UnityEngine.Advertisements.iOS.Platform::s_Instance
	Platform_t1647901813 * ___s_Instance_0;
	// UnityEngine.Advertisements.CallbackExecutor UnityEngine.Advertisements.iOS.Platform::s_CallbackExecutor
	CallbackExecutor_t363496179 * ___s_CallbackExecutor_1;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(Platform_t1647901813_StaticFields, ___s_Instance_0)); }
	inline Platform_t1647901813 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline Platform_t1647901813 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(Platform_t1647901813 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_0), value);
	}

	inline static int32_t get_offset_of_s_CallbackExecutor_1() { return static_cast<int32_t>(offsetof(Platform_t1647901813_StaticFields, ___s_CallbackExecutor_1)); }
	inline CallbackExecutor_t363496179 * get_s_CallbackExecutor_1() const { return ___s_CallbackExecutor_1; }
	inline CallbackExecutor_t363496179 ** get_address_of_s_CallbackExecutor_1() { return &___s_CallbackExecutor_1; }
	inline void set_s_CallbackExecutor_1(CallbackExecutor_t363496179 * value)
	{
		___s_CallbackExecutor_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_CallbackExecutor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORM_T1647901813_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef METADATA_T2274729001_H
#define METADATA_T2274729001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.MetaData
struct  MetaData_t2274729001  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::m_MetaData
	RuntimeObject* ___m_MetaData_0;
	// System.String UnityEngine.Advertisements.MetaData::<category>k__BackingField
	String_t* ___U3CcategoryU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_MetaData_0() { return static_cast<int32_t>(offsetof(MetaData_t2274729001, ___m_MetaData_0)); }
	inline RuntimeObject* get_m_MetaData_0() const { return ___m_MetaData_0; }
	inline RuntimeObject** get_address_of_m_MetaData_0() { return &___m_MetaData_0; }
	inline void set_m_MetaData_0(RuntimeObject* value)
	{
		___m_MetaData_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MetaData_0), value);
	}

	inline static int32_t get_offset_of_U3CcategoryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MetaData_t2274729001, ___U3CcategoryU3Ek__BackingField_1)); }
	inline String_t* get_U3CcategoryU3Ek__BackingField_1() const { return ___U3CcategoryU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CcategoryU3Ek__BackingField_1() { return &___U3CcategoryU3Ek__BackingField_1; }
	inline void set_U3CcategoryU3Ek__BackingField_1(String_t* value)
	{
		___U3CcategoryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcategoryU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METADATA_T2274729001_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef READYEVENTARGS_T549087536_H
#define READYEVENTARGS_T549087536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.ReadyEventArgs
struct  ReadyEventArgs_t549087536  : public EventArgs_t3591816995
{
public:
	// System.String UnityEngine.Advertisements.ReadyEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CplacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReadyEventArgs_t549087536, ___U3CplacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CplacementIdU3Ek__BackingField_1() const { return ___U3CplacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CplacementIdU3Ek__BackingField_1() { return &___U3CplacementIdU3Ek__BackingField_1; }
	inline void set_U3CplacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CplacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CplacementIdU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READYEVENTARGS_T549087536_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef STARTEVENTARGS_T4291826435_H
#define STARTEVENTARGS_T4291826435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.StartEventArgs
struct  StartEventArgs_t4291826435  : public EventArgs_t3591816995
{
public:
	// System.String UnityEngine.Advertisements.StartEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CplacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StartEventArgs_t4291826435, ___U3CplacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CplacementIdU3Ek__BackingField_1() const { return ___U3CplacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CplacementIdU3Ek__BackingField_1() { return &___U3CplacementIdU3Ek__BackingField_1; }
	inline void set_U3CplacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CplacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CplacementIdU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTEVENTARGS_T4291826435_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef ERROREVENTARGS_T2253147013_H
#define ERROREVENTARGS_T2253147013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.ErrorEventArgs
struct  ErrorEventArgs_t2253147013  : public EventArgs_t3591816995
{
public:
	// System.Int64 UnityEngine.Advertisements.ErrorEventArgs::<error>k__BackingField
	int64_t ___U3CerrorU3Ek__BackingField_1;
	// System.String UnityEngine.Advertisements.ErrorEventArgs::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CerrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ErrorEventArgs_t2253147013, ___U3CerrorU3Ek__BackingField_1)); }
	inline int64_t get_U3CerrorU3Ek__BackingField_1() const { return ___U3CerrorU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CerrorU3Ek__BackingField_1() { return &___U3CerrorU3Ek__BackingField_1; }
	inline void set_U3CerrorU3Ek__BackingField_1(int64_t value)
	{
		___U3CerrorU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorEventArgs_t2253147013, ___U3CmessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CmessageU3Ek__BackingField_2() const { return ___U3CmessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CmessageU3Ek__BackingField_2() { return &___U3CmessageU3Ek__BackingField_2; }
	inline void set_U3CmessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CmessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmessageU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROREVENTARGS_T2253147013_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef DEBUGLEVELINTERNAL_T4213999277_H
#define DEBUGLEVELINTERNAL_T4213999277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement/DebugLevelInternal
struct  DebugLevelInternal_t4213999277 
{
public:
	// System.Int32 UnityEngine.Advertisements.Advertisement/DebugLevelInternal::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebugLevelInternal_t4213999277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLEVELINTERNAL_T4213999277_H
#ifndef SHOWRESULT_T3070553623_H
#define SHOWRESULT_T3070553623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.ShowResult
struct  ShowResult_t3070553623 
{
public:
	// System.Int32 UnityEngine.Advertisements.ShowResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ShowResult_t3070553623, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOWRESULT_T3070553623_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef RUNTIMEPLATFORM_T4159857903_H
#define RUNTIMEPLATFORM_T4159857903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t4159857903 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t4159857903, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPLATFORM_T4159857903_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef HIDEFLAGS_T4250555765_H
#define HIDEFLAGS_T4250555765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t4250555765 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t4250555765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T4250555765_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef U3CU3EC__DISPLAYCLASS32_1_T1022676051_H
#define U3CU3EC__DISPLAYCLASS32_1_T1022676051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass32_1
struct  U3CU3Ec__DisplayClass32_1_t1022676051  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass32_1::showResult
	int32_t ___showResult_0;
	// UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass32_0 UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass32_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass32_0_t1022676050 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_showResult_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_1_t1022676051, ___showResult_0)); }
	inline int32_t get_showResult_0() const { return ___showResult_0; }
	inline int32_t* get_address_of_showResult_0() { return &___showResult_0; }
	inline void set_showResult_0(int32_t value)
	{
		___showResult_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_1_t1022676051, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass32_0_t1022676050 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass32_0_t1022676050 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass32_0_t1022676050 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E8__locals1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS32_1_T1022676051_H
#ifndef ADVERTISEMENT_T842671397_H
#define ADVERTISEMENT_T842671397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement
struct  Advertisement_t842671397  : public RuntimeObject
{
public:

public:
};

struct Advertisement_t842671397_StaticFields
{
public:
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_Initialized
	bool ___s_Initialized_0;
	// UnityEngine.Advertisements.IPlatform UnityEngine.Advertisements.Advertisement::s_Platform
	RuntimeObject* ___s_Platform_1;
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_Showing
	bool ___s_Showing_2;
	// UnityEngine.Advertisements.Advertisement/DebugLevelInternal UnityEngine.Advertisements.Advertisement::s_DebugLevel
	int32_t ___s_DebugLevel_3;

public:
	inline static int32_t get_offset_of_s_Initialized_0() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___s_Initialized_0)); }
	inline bool get_s_Initialized_0() const { return ___s_Initialized_0; }
	inline bool* get_address_of_s_Initialized_0() { return &___s_Initialized_0; }
	inline void set_s_Initialized_0(bool value)
	{
		___s_Initialized_0 = value;
	}

	inline static int32_t get_offset_of_s_Platform_1() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___s_Platform_1)); }
	inline RuntimeObject* get_s_Platform_1() const { return ___s_Platform_1; }
	inline RuntimeObject** get_address_of_s_Platform_1() { return &___s_Platform_1; }
	inline void set_s_Platform_1(RuntimeObject* value)
	{
		___s_Platform_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_Platform_1), value);
	}

	inline static int32_t get_offset_of_s_Showing_2() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___s_Showing_2)); }
	inline bool get_s_Showing_2() const { return ___s_Showing_2; }
	inline bool* get_address_of_s_Showing_2() { return &___s_Showing_2; }
	inline void set_s_Showing_2(bool value)
	{
		___s_Showing_2 = value;
	}

	inline static int32_t get_offset_of_s_DebugLevel_3() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___s_DebugLevel_3)); }
	inline int32_t get_s_DebugLevel_3() const { return ___s_DebugLevel_3; }
	inline int32_t* get_address_of_s_DebugLevel_3() { return &___s_DebugLevel_3; }
	inline void set_s_DebugLevel_3(int32_t value)
	{
		___s_DebugLevel_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADVERTISEMENT_T842671397_H
#ifndef FINISHEVENTARGS_T2984178802_H
#define FINISHEVENTARGS_T2984178802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.FinishEventArgs
struct  FinishEventArgs_t2984178802  : public EventArgs_t3591816995
{
public:
	// System.String UnityEngine.Advertisements.FinishEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;
	// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.FinishEventArgs::<showResult>k__BackingField
	int32_t ___U3CshowResultU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CplacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FinishEventArgs_t2984178802, ___U3CplacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CplacementIdU3Ek__BackingField_1() const { return ___U3CplacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CplacementIdU3Ek__BackingField_1() { return &___U3CplacementIdU3Ek__BackingField_1; }
	inline void set_U3CplacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CplacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CplacementIdU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CshowResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FinishEventArgs_t2984178802, ___U3CshowResultU3Ek__BackingField_2)); }
	inline int32_t get_U3CshowResultU3Ek__BackingField_2() const { return ___U3CshowResultU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CshowResultU3Ek__BackingField_2() { return &___U3CshowResultU3Ek__BackingField_2; }
	inline void set_U3CshowResultU3Ek__BackingField_2(int32_t value)
	{
		___U3CshowResultU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINISHEVENTARGS_T2984178802_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef EVENTHANDLER_1_T2215985868_H
#define EVENTHANDLER_1_T2215985868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct  EventHandler_1_t2215985868  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T2215985868_H
#ifndef EVENTHANDLER_1_T908338235_H
#define EVENTHANDLER_1_T908338235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct  EventHandler_1_t908338235  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T908338235_H
#ifndef ACTION_1_T3243021218_H
#define ACTION_1_T3243021218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Advertisements.ShowResult>
struct  Action_1_t3243021218  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3243021218_H
#ifndef ACTION_1_T535963774_H
#define ACTION_1_T535963774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Advertisements.CallbackExecutor>
struct  Action_1_t535963774  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T535963774_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef UNITYADSREADY_T96934738_H
#define UNITYADSREADY_T96934738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/unityAdsReady
struct  unityAdsReady_t96934738  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSREADY_T96934738_H
#ifndef UNITYADSDIDSTART_T1058412932_H
#define UNITYADSDIDSTART_T1058412932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart
struct  unityAdsDidStart_t1058412932  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSDIDSTART_T1058412932_H
#ifndef UNITYADSDIDFINISH_T3747416149_H
#define UNITYADSDIDFINISH_T3747416149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish
struct  unityAdsDidFinish_t3747416149  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSDIDFINISH_T3747416149_H
#ifndef UNITYADSPURCHASINGDIDINITIATEPURCHASINGCOMMAND_T3255493962_H
#define UNITYADSPURCHASINGDIDINITIATEPURCHASINGCOMMAND_T3255493962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingDidInitiatePurchasingCommand
struct  unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSPURCHASINGDIDINITIATEPURCHASINGCOMMAND_T3255493962_H
#ifndef UNITYADSPURCHASINGGETPRODUCTCATALOG_T1122116460_H
#define UNITYADSPURCHASINGGETPRODUCTCATALOG_T1122116460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetProductCatalog
struct  unityAdsPurchasingGetProductCatalog_t1122116460  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSPURCHASINGGETPRODUCTCATALOG_T1122116460_H
#ifndef UNITYADSPURCHASINGGETPURCHASINGVERSION_T1837383580_H
#define UNITYADSPURCHASINGGETPURCHASINGVERSION_T1837383580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetPurchasingVersion
struct  unityAdsPurchasingGetPurchasingVersion_t1837383580  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSPURCHASINGGETPURCHASINGVERSION_T1837383580_H
#ifndef EVENTHANDLER_1_T2768214265_H
#define EVENTHANDLER_1_T2768214265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>
struct  EventHandler_1_t2768214265  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T2768214265_H
#ifndef EVENTHANDLER_1_T177306446_H
#define EVENTHANDLER_1_T177306446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>
struct  EventHandler_1_t177306446  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T177306446_H
#ifndef UNITYADSDIDERROR_T1993223595_H
#define UNITYADSDIDERROR_T1993223595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError
struct  unityAdsDidError_t1993223595  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSDIDERROR_T1993223595_H
#ifndef UNITYADSPURCHASINGINITIALIZE_T3791088414_H
#define UNITYADSPURCHASINGINITIALIZE_T3791088414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingInitialize
struct  unityAdsPurchasingInitialize_t3791088414  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSPURCHASINGINITIALIZE_T3791088414_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CALLBACKEXECUTOR_T363496179_H
#define CALLBACKEXECUTOR_T363496179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.CallbackExecutor
struct  CallbackExecutor_t363496179  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>> UnityEngine.Advertisements.CallbackExecutor::s_Queue
	Queue_1_t382223268 * ___s_Queue_2;

public:
	inline static int32_t get_offset_of_s_Queue_2() { return static_cast<int32_t>(offsetof(CallbackExecutor_t363496179, ___s_Queue_2)); }
	inline Queue_1_t382223268 * get_s_Queue_2() const { return ___s_Queue_2; }
	inline Queue_1_t382223268 ** get_address_of_s_Queue_2() { return &___s_Queue_2; }
	inline void set_s_Queue_2(Queue_1_t382223268 * value)
	{
		___s_Queue_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_Queue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKEXECUTOR_T363496179_H
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void EventHandler_1__ctor_m699822512_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Advertisements.ShowResult>::Invoke(!0)
extern "C"  void Action_1_Invoke_m1246102229_gshared (Action_1_t3243021218 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C"  void Queue_1_Enqueue_m1868480850_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C"  RuntimeObject * Queue_1_Dequeue_m3550993416_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C"  void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C"  int32_t Queue_1_get_Count_m2496300460_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C"  void Queue_1__ctor_m3749217910_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m2695875479_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
extern "C"  void EventHandler_1_Invoke_m4124830036_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Advertisements.iOS.Platform::.ctor()
extern "C"  void Platform__ctor_m334176308 (Platform_t1647901813 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C"  void Debug_LogException_m2207318968 (RuntimeObject * __this /* static, unused */, Exception_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::.ctor()
extern "C"  void UnsupportedPlatform__ctor_m3723506342 (UnsupportedPlatform_t2036049172 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C"  bool Application_get_isEditor_m857789090 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C"  int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
extern "C"  bool Advertisement_get_isInitialized_m1911738515 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::set_isInitialized(System.Boolean)
extern "C"  void Advertisement_set_isInitialized_m2873932978 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>::.ctor(System.Object,System.IntPtr)
#define EventHandler_1__ctor_m2017948744(__this, p0, p1, method) ((  void (*) (EventHandler_1_t2215985868 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method)
// System.Void System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>::.ctor(System.Object,System.IntPtr)
#define EventHandler_1__ctor_m3836473258(__this, p0, p1, method) ((  void (*) (EventHandler_1_t908338235 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
extern "C"  void MetaData__ctor_m3588377154 (MetaData_t2274729001 * __this, String_t* ___category0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
extern "C"  void MetaData_Set_m623296862 (MetaData_t2274729001 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_unityVersion()
extern "C"  String_t* Application_get_unityVersion_m1068543125 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void Advertisement_SetMetaData_m565371566 (RuntimeObject * __this /* static, unused */, MetaData_t2274729001 * ___metaData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.Advertisement::get_version()
extern "C"  String_t* Advertisement_get_version_m3014709626 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement/<>c__DisplayClass32_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass32_0__ctor_m623393639 (U3CU3Ec__DisplayClass32_0_t3661298717 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Action`1<UnityEngine.Advertisements.ShowResult> UnityEngine.Advertisements.ShowOptions::get_resultCallback()
extern "C"  Action_1_t3243021218 * ShowOptions_get_resultCallback_m175972177 (ShowOptions_t990845000 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement/<>c__DisplayClass32_1::.ctor()
extern "C"  void U3CU3Ec__DisplayClass32_1__ctor_m623394728 (U3CU3Ec__DisplayClass32_1_t3661233181 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
extern "C"  String_t* ShowOptions_get_gamerSid_m237075789 (ShowOptions_t990845000 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Advertisements.IPlatform UnityEngine.Advertisements.Advertisement::GetPlatform()
extern "C"  RuntimeObject* Advertisement_GetPlatform_m1793327847 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
extern "C"  bool Debug_get_isDebugBuild_m1389897688 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m3330916935 (U3CU3Ec_t3409917408 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::set_isShowing(System.Boolean)
extern "C"  void Advertisement_set_isShowing_m3029138671 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.FinishEventArgs::get_showResult()
extern "C"  int32_t FinishEventArgs_get_showResult_m1056497682 (FinishEventArgs_t2984178802 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.Advertisements.ShowResult>::Invoke(!0)
#define Action_1_Invoke_m1246102229(__this, p0, method) ((  void (*) (Action_1_t3243021218 *, int32_t, const RuntimeMethod*))Action_1_Invoke_m1246102229_gshared)(__this, p0, method)
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>::Enqueue(!0)
#define Queue_1_Enqueue_m1151361973(__this, p0, method) ((  void (*) (Queue_1_t382223268 *, Action_1_t535963774 *, const RuntimeMethod*))Queue_1_Enqueue_m1868480850_gshared)(__this, p0, method)
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>::Dequeue()
#define Queue_1_Dequeue_m2025295047(__this, method) ((  Action_1_t535963774 * (*) (Queue_1_t382223268 *, const RuntimeMethod*))Queue_1_Dequeue_m3550993416_gshared)(__this, method)
// System.Void System.Action`1<UnityEngine.Advertisements.CallbackExecutor>::Invoke(!0)
#define Action_1_Invoke_m3838832427(__this, p0, method) ((  void (*) (Action_1_t535963774 *, CallbackExecutor_t363496179 *, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>::get_Count()
#define Queue_1_get_Count_m3760112611(__this, method) ((  int32_t (*) (Queue_1_t382223268 *, const RuntimeMethod*))Queue_1_get_Count_m2496300460_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>::.ctor()
#define Queue_1__ctor_m3415362461(__this, method) ((  void (*) (Queue_1_t382223268 *, const RuntimeMethod*))Queue_1__ctor_m3749217910_gshared)(__this, method)
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventArgs::.ctor()
extern "C"  void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_error(System.Int64)
extern "C"  void ErrorEventArgs_set_error_m3356692480 (ErrorEventArgs_t2253147013 * __this, int64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_message(System.String)
extern "C"  void ErrorEventArgs_set_message_m3016908457 (ErrorEventArgs_t2253147013 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.FinishEventArgs::set_placementId(System.String)
extern "C"  void FinishEventArgs_set_placementId_m557930530 (FinishEventArgs_t2984178802 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.FinishEventArgs::set_showResult(UnityEngine.Advertisements.ShowResult)
extern "C"  void FinishEventArgs_set_showResult_m1315340813 (FinishEventArgs_t2984178802 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsReady(System.String)
extern "C"  void Platform_UnityAdsReady_m1487611528 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidError(System.Int64,System.String)
extern "C"  void Platform_UnityAdsDidError_m2802114104 (RuntimeObject * __this /* static, unused */, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidStart(System.String)
extern "C"  void Platform_UnityAdsDidStart_m2533573874 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidFinish(System.String,System.Int64)
extern "C"  void Platform_UnityAdsDidFinish_m3955608050 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, int64_t ___rawShowResult1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidInitiatePurchasingCommand(System.String)
extern "C"  void Platform_UnityAdsDidInitiatePurchasingCommand_m3816664491 (RuntimeObject * __this /* static, unused */, String_t* ___eventString0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsPurchasingGetProductCatalog()
extern "C"  void Platform_UnityAdsPurchasingGetProductCatalog_m2180521046 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsPurchasingGetPurchasingVersion()
extern "C"  void Platform_UnityAdsPurchasingGetPurchasingVersion_m618922504 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsPurchasingInitialize()
extern "C"  void Platform_UnityAdsPurchasingInitialize_m1149165094 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass29_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass29_0__ctor_m331075084 (U3CU3Ec__DisplayClass29_0_t3393166357 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.Advertisements.CallbackExecutor>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m122859363(__this, p0, p1, method) ((  void (*) (Action_1_t535963774 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Advertisements.CallbackExecutor::Post(System.Action`1<UnityEngine.Advertisements.CallbackExecutor>)
extern "C"  void CallbackExecutor_Post_m1360464972 (CallbackExecutor_t363496179 * __this, Action_1_t535963774 * ___action0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass30_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass30_0__ctor_m2755993364 (U3CU3Ec__DisplayClass30_0_t2185475464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass31_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass31_0__ctor_m885137169 (U3CU3Ec__DisplayClass31_0_t3751559405 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass32_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass32_0__ctor_m2617450257 (U3CU3Ec__DisplayClass32_0_t1022676050 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass32_1::.ctor()
extern "C"  void U3CU3Ec__DisplayClass32_1__ctor_m2494045969 (U3CU3Ec__DisplayClass32_1_t1022676051 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Purchasing::InitiatePurchasingCommand(System.String)
extern "C"  bool Purchasing_InitiatePurchasingCommand_m2709730589 (RuntimeObject * __this /* static, unused */, String_t* ___eventString0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m2664721875 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsPurchasingDispatchReturnEvent(System.Int64,System.String)
extern "C"  void Platform_UnityAdsPurchasingDispatchReturnEvent_m1880679472 (RuntimeObject * __this /* static, unused */, int64_t ___eventType0, String_t* ___payload1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.Purchasing::GetPurchasingCatalog()
extern "C"  String_t* Purchasing_GetPurchasingCatalog_m716646145 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.Purchasing::GetPromoVersion()
extern "C"  String_t* Purchasing_GetPromoVersion_m1709726025 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Purchasing::Initialize(UnityEngine.Advertisements.IPurchasingEventSender)
extern "C"  bool Purchasing_Initialize_m2991467968 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___platform0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C"  void Object_set_hideFlags_m1648752846 (Object_t631007953 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.CallbackExecutor>()
#define GameObject_AddComponent_TisCallbackExecutor_t363496179_m374342643(__this, method) ((  CallbackExecutor_t363496179 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m2695875479_gshared)(__this, method)
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsReady__ctor_m2857655779 (unityAdsReady_t96934738 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetReadyCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsReady)
extern "C"  void Platform_UnityAdsSetReadyCallback_m451768802 (RuntimeObject * __this /* static, unused */, unityAdsReady_t96934738 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsDidError__ctor_m351972727 (unityAdsDidError_t1993223595 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetDidErrorCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidError)
extern "C"  void Platform_UnityAdsSetDidErrorCallback_m3205639914 (RuntimeObject * __this /* static, unused */, unityAdsDidError_t1993223595 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsDidStart__ctor_m1859135286 (unityAdsDidStart_t1058412932 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetDidStartCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart)
extern "C"  void Platform_UnityAdsSetDidStartCallback_m3797837678 (RuntimeObject * __this /* static, unused */, unityAdsDidStart_t1058412932 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsDidFinish__ctor_m2943032643 (unityAdsDidFinish_t3747416149 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetDidFinishCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish)
extern "C"  void Platform_UnityAdsSetDidFinishCallback_m386922261 (RuntimeObject * __this /* static, unused */, unityAdsDidFinish_t3747416149 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingDidInitiatePurchasingCommand::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsPurchasingDidInitiatePurchasingCommand__ctor_m1852803892 (unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetDidInitiatePurchasingCommandCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingDidInitiatePurchasingCommand)
extern "C"  void Platform_UnityAdsSetDidInitiatePurchasingCommandCallback_m845104069 (RuntimeObject * __this /* static, unused */, unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetProductCatalog::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsPurchasingGetProductCatalog__ctor_m2451799939 (unityAdsPurchasingGetProductCatalog_t1122116460 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetGetProductCatalogCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetProductCatalog)
extern "C"  void Platform_UnityAdsSetGetProductCatalogCallback_m1834361531 (RuntimeObject * __this /* static, unused */, unityAdsPurchasingGetProductCatalog_t1122116460 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetPurchasingVersion::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsPurchasingGetPurchasingVersion__ctor_m712419234 (unityAdsPurchasingGetPurchasingVersion_t1837383580 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetGetVersionCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetPurchasingVersion)
extern "C"  void Platform_UnityAdsSetGetVersionCallback_m858406520 (RuntimeObject * __this /* static, unused */, unityAdsPurchasingGetPurchasingVersion_t1837383580 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingInitialize::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsPurchasingInitialize__ctor_m3181716181 (unityAdsPurchasingInitialize_t3791088414 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetInitializePurchasingCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingInitialize)
extern "C"  void Platform_UnityAdsSetInitializePurchasingCallback_m3878818099 (RuntimeObject * __this /* static, unused */, unityAdsPurchasingInitialize_t3791088414 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsIsSupported()
extern "C"  bool Platform_UnityAdsIsSupported_m1351285359 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.iOS.Platform::UnityAdsGetVersion()
extern "C"  String_t* Platform_UnityAdsGetVersion_m2243661488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsInitialize(System.String,System.Boolean)
extern "C"  void Platform_UnityAdsInitialize_m282382030 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsIsReady(System.String)
extern "C"  bool Platform_UnityAdsIsReady_m3224219300 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsShow(System.String)
extern "C"  void Platform_UnityAdsShow_m3373951341 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.MetaData::get_category()
extern "C"  String_t* MetaData_get_category_m158841008 (MetaData_t2274729001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.MetaData::ToJSON()
extern "C"  String_t* MetaData_ToJSON_m4054959390 (MetaData_t2274729001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetMetaData(System.String,System.String)
extern "C"  void Platform_UnityAdsSetMetaData_m1790711249 (RuntimeObject * __this /* static, unused */, String_t* ___category0, String_t* ___data1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.ReadyEventArgs::.ctor(System.String)
extern "C"  void ReadyEventArgs__ctor_m4282028464 (ReadyEventArgs_t549087536 * __this, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m914743136(__this, p0, p1, method) ((  void (*) (EventHandler_1_t2768214265 *, RuntimeObject *, ReadyEventArgs_t549087536 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Advertisements.ErrorEventArgs::.ctor(System.Int64,System.String)
extern "C"  void ErrorEventArgs__ctor_m3105067562 (ErrorEventArgs_t2253147013 * __this, int64_t ___error0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m112288143(__this, p0, p1, method) ((  void (*) (EventHandler_1_t177306446 *, RuntimeObject *, ErrorEventArgs_t2253147013 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Advertisements.StartEventArgs::.ctor(System.String)
extern "C"  void StartEventArgs__ctor_m3416358600 (StartEventArgs_t4291826435 * __this, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m2488886871(__this, p0, p1, method) ((  void (*) (EventHandler_1_t2215985868 *, RuntimeObject *, StartEventArgs_t4291826435 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Advertisements.FinishEventArgs::.ctor(System.String,UnityEngine.Advertisements.ShowResult)
extern "C"  void FinishEventArgs__ctor_m911455770 (FinishEventArgs_t2984178802 * __this, String_t* ___placementId0, int32_t ___showResult1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m3511014384(__this, p0, p1, method) ((  void (*) (EventHandler_1_t908338235 *, RuntimeObject *, FinishEventArgs_t2984178802 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::Invoke(System.Int64,System.String)
extern "C"  void unityAdsDidError_Invoke_m111654497 (unityAdsDidError_t1993223595 * __this, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::Invoke(System.String,System.Int64)
extern "C"  void unityAdsDidFinish_Invoke_m2061840980 (unityAdsDidFinish_t3747416149 * __this, String_t* ___placementId0, int64_t ___rawShowResult1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::Invoke(System.String)
extern "C"  void unityAdsDidStart_Invoke_m3187478793 (unityAdsDidStart_t1058412932 * __this, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingDidInitiatePurchasingCommand::Invoke(System.String)
extern "C"  void unityAdsPurchasingDidInitiatePurchasingCommand_Invoke_m804337873 (unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962 * __this, String_t* ___eventString0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetProductCatalog::Invoke()
extern "C"  void unityAdsPurchasingGetProductCatalog_Invoke_m1371376568 (unityAdsPurchasingGetProductCatalog_t1122116460 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetPurchasingVersion::Invoke()
extern "C"  void unityAdsPurchasingGetPurchasingVersion_Invoke_m899296300 (unityAdsPurchasingGetPurchasingVersion_t1837383580 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingInitialize::Invoke()
extern "C"  void unityAdsPurchasingInitialize_Invoke_m846324198 (unityAdsPurchasingInitialize_t3791088414 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::Invoke(System.String)
extern "C"  void unityAdsReady_Invoke_m29849101 (unityAdsReady_t96934738 * __this, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
#define Dictionary_2__ctor_m2987621751(__this, method) ((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
extern "C"  void MetaData_set_category_m4092383434 (MetaData_t2274729001 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.MiniJSON.Json::Serialize(System.Object)
extern "C"  String_t* Json_Serialize_m1959381348 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m960091899 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.MiniJSON.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m2586747667 (Serializer_t4281185815 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m4143112955 (Serializer_t4281185815 * __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m3607038265 (Serializer_t4281185815 * __this, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m3789406202 (Serializer_t4281185815 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m3183982393 (Serializer_t4281185815 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C"  String_t* String_CreateString_m1262864254 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m1218368759 (Serializer_t4281185815 * __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Char)
extern "C"  int32_t Convert_ToInt32_m1876369743 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String)
extern "C"  String_t* Int32_ToString_m372259452 (int32_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Single_ToString_m543431371 (float* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C"  StringBuilder_t * StringBuilder_Append_m1640838743 (StringBuilder_t * __this, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Object)
extern "C"  double Convert_ToDouble_m4025515304 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Double_ToString_m1051753975 (double* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String,System.Boolean)
extern "C"  Type_t * Type_GetType_m3605423543 (RuntimeObject * __this /* static, unused */, String_t* p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
extern "C"  MethodInfo_t * Type_GetMethod_m1479779718 (Type_t * __this, String_t* p0, TypeU5BU5D_t3940880105* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
extern "C"  MethodInfo_t * Type_GetMethod_m2019726356 (Type_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C"  RuntimeObject * MethodBase_Invoke_m1776411915 (MethodBase_t * __this, RuntimeObject * p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.ReadyEventArgs::set_placementId(System.String)
extern "C"  void ReadyEventArgs_set_placementId_m248412853 (ReadyEventArgs_t549087536 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.StartEventArgs::set_placementId(System.String)
extern "C"  void StartEventArgs_set_placementId_m4220717764 (StartEventArgs_t4291826435 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// UnityEngine.Advertisements.IPlatform UnityEngine.Advertisements.Advertisement::GetPlatform()
extern "C"  RuntimeObject* Advertisement_GetPlatform_m1793327847 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_GetPlatform_m1793327847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Platform_t1647901813 * L_0 = (Platform_t1647901813 *)il2cpp_codegen_object_new(Platform_t1647901813_il2cpp_TypeInfo_var);
		Platform__ctor_m334176308(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0008;
		throw e;
	}

CATCH_0008:
	{ // begin catch(System.Exception)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral4107934516, /*hidden argument*/NULL);
		Debug_LogException_m2207318968(NULL /*static, unused*/, ((Exception_t *)__exception_local), /*hidden argument*/NULL);
		UnsupportedPlatform_t2036049172 * L_1 = (UnsupportedPlatform_t2036049172 *)il2cpp_codegen_object_new(UnsupportedPlatform_t2036049172_il2cpp_TypeInfo_var);
		UnsupportedPlatform__ctor_m3723506342(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
extern "C"  bool Advertisement_get_isInitialized_m1911738515 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_isInitialized_m1911738515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Initialized_0();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::set_isInitialized(System.Boolean)
extern "C"  void Advertisement_set_isInitialized_m2873932978 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_set_isInitialized_m2873932978_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Initialized_0(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isSupported()
extern "C"  bool Advertisement_get_isSupported_m2987402704 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_isSupported_m2987402704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Advertisements.IPlatform::get_isSupported() */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_2);
		if (L_3)
		{
			goto IL_0031;
		}
	}

IL_001c:
	{
		int32_t L_4 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)8))))
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		NullCheck(L_5);
		bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Advertisements.IPlatform::get_isSupported() */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_5);
		return L_6;
	}

IL_002f:
	{
		return (bool)0;
	}

IL_0031:
	{
		return (bool)1;
	}
}
// System.String UnityEngine.Advertisements.Advertisement::get_version()
extern "C"  String_t* Advertisement_get_version_m3014709626 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_version_m3014709626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		NullCheck(L_0);
		String_t* L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.Advertisements.IPlatform::get_version() */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::set_isShowing(System.Boolean)
extern "C"  void Advertisement_set_isShowing_m3029138671 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_set_isShowing_m3029138671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Showing_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
extern "C"  void Advertisement_Initialize_m2594994727 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Initialize_m2594994727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	EventHandler_1_t2215985868 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	EventHandler_1_t908338235 * G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	EventHandler_1_t908338235 * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_0 = Advertisement_get_isInitialized_m1911738515(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_00cc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_set_isInitialized_m2873932978(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3409917408_il2cpp_TypeInfo_var);
		EventHandler_1_t2215985868 * L_2 = ((U3CU3Ec_t3409917408_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3409917408_il2cpp_TypeInfo_var))->get_U3CU3E9__24_0_1();
		EventHandler_1_t2215985868 * L_3 = L_2;
		G_B2_0 = L_3;
		G_B2_1 = L_1;
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = L_1;
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3409917408_il2cpp_TypeInfo_var);
		U3CU3Ec_t3409917408 * L_4 = ((U3CU3Ec_t3409917408_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3409917408_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_5 = (intptr_t)U3CU3Ec_U3CInitializeU3Eb__24_0_m1842518973_RuntimeMethod_var;
		EventHandler_1_t2215985868 * L_6 = (EventHandler_1_t2215985868 *)il2cpp_codegen_object_new(EventHandler_1_t2215985868_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m2017948744(L_6, L_4, L_5, /*hidden argument*/EventHandler_1__ctor_m2017948744_RuntimeMethod_var);
		EventHandler_1_t2215985868 * L_7 = L_6;
		((U3CU3Ec_t3409917408_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3409917408_il2cpp_TypeInfo_var))->set_U3CU3E9__24_0_1(L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		InterfaceActionInvoker1< EventHandler_1_t2215985868 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.IPlatform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, G_B3_1, G_B3_0);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3409917408_il2cpp_TypeInfo_var);
		EventHandler_1_t908338235 * L_9 = ((U3CU3Ec_t3409917408_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3409917408_il2cpp_TypeInfo_var))->get_U3CU3E9__24_1_2();
		EventHandler_1_t908338235 * L_10 = L_9;
		G_B4_0 = L_10;
		G_B4_1 = L_8;
		if (L_10)
		{
			G_B5_0 = L_10;
			G_B5_1 = L_8;
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3409917408_il2cpp_TypeInfo_var);
		U3CU3Ec_t3409917408 * L_11 = ((U3CU3Ec_t3409917408_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3409917408_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_12 = (intptr_t)U3CU3Ec_U3CInitializeU3Eb__24_1_m2316996385_RuntimeMethod_var;
		EventHandler_1_t908338235 * L_13 = (EventHandler_1_t908338235 *)il2cpp_codegen_object_new(EventHandler_1_t908338235_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3836473258(L_13, L_11, L_12, /*hidden argument*/EventHandler_1__ctor_m3836473258_RuntimeMethod_var);
		EventHandler_1_t908338235 * L_14 = L_13;
		((U3CU3Ec_t3409917408_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3409917408_il2cpp_TypeInfo_var))->set_U3CU3E9__24_1_2(L_14);
		G_B5_0 = L_14;
		G_B5_1 = G_B4_1;
	}

IL_005d:
	{
		NullCheck(G_B5_1);
		InterfaceActionInvoker1< EventHandler_1_t908338235 * >::Invoke(2 /* System.Void UnityEngine.Advertisements.IPlatform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, G_B5_1, G_B5_0);
		MetaData_t2274729001 * L_15 = (MetaData_t2274729001 *)il2cpp_codegen_object_new(MetaData_t2274729001_il2cpp_TypeInfo_var);
		MetaData__ctor_m3588377154(L_15, _stringLiteral2258625258, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_16 = L_15;
		NullCheck(L_16);
		MetaData_Set_m623296862(L_16, _stringLiteral62725243, _stringLiteral1947076759, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_17 = L_16;
		String_t* L_18 = Application_get_unityVersion_m1068543125(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		MetaData_Set_m623296862(L_17, _stringLiteral1902401671, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_SetMetaData_m565371566(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_19 = (MetaData_t2274729001 *)il2cpp_codegen_object_new(MetaData_t2274729001_il2cpp_TypeInfo_var);
		MetaData__ctor_m3588377154(L_19, _stringLiteral4032983950, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_20 = L_19;
		NullCheck(L_20);
		MetaData_Set_m623296862(L_20, _stringLiteral62725243, _stringLiteral1981792762, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_21 = L_20;
		String_t* L_22 = Advertisement_get_version_m3014709626(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		MetaData_Set_m623296862(L_21, _stringLiteral1902401671, L_22, /*hidden argument*/NULL);
		Advertisement_SetMetaData_m565371566(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		RuntimeObject* L_23 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		String_t* L_24 = ___gameId0;
		bool L_25 = ___testMode1;
		NullCheck(L_23);
		InterfaceActionInvoker2< String_t*, bool >::Invoke(6 /* System.Void UnityEngine.Advertisements.IPlatform::Initialize(System.String,System.Boolean) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_23, L_24, L_25);
	}

IL_00cc:
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
extern "C"  bool Advertisement_IsReady_m3938997821 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_IsReady_m3938997821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		String_t* L_1 = ___placementId0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0010;
		}
	}
	{
		String_t* L_3 = ___placementId0;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0011:
	{
		NullCheck(G_B3_1);
		bool L_4 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(7 /* System.Boolean UnityEngine.Advertisements.IPlatform::IsReady(System.String) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, G_B3_1, G_B3_0);
		return L_4;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions)
extern "C"  void Advertisement_Show_m798506469 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, ShowOptions_t990845000 * ___showOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Show_m798506469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass32_0_t3661298717 * V_0 = NULL;
	U3CU3Ec__DisplayClass32_1_t3661233181 * V_1 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	{
		U3CU3Ec__DisplayClass32_0_t3661298717 * L_0 = (U3CU3Ec__DisplayClass32_0_t3661298717 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass32_0_t3661298717_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass32_0__ctor_m623393639(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass32_0_t3661298717 * L_1 = V_0;
		ShowOptions_t990845000 * L_2 = ___showOptions1;
		NullCheck(L_1);
		L_1->set_showOptions_0(L_2);
		U3CU3Ec__DisplayClass32_0_t3661298717 * L_3 = V_0;
		NullCheck(L_3);
		ShowOptions_t990845000 * L_4 = L_3->get_showOptions_0();
		if (!L_4)
		{
			goto IL_008f;
		}
	}
	{
		U3CU3Ec__DisplayClass32_0_t3661298717 * L_5 = V_0;
		NullCheck(L_5);
		ShowOptions_t990845000 * L_6 = L_5->get_showOptions_0();
		NullCheck(L_6);
		Action_1_t3243021218 * L_7 = ShowOptions_get_resultCallback_m175972177(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		U3CU3Ec__DisplayClass32_1_t3661233181 * L_8 = (U3CU3Ec__DisplayClass32_1_t3661233181 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass32_1_t3661233181_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass32_1__ctor_m623394728(L_8, /*hidden argument*/NULL);
		V_1 = L_8;
		U3CU3Ec__DisplayClass32_1_t3661233181 * L_9 = V_1;
		U3CU3Ec__DisplayClass32_0_t3661298717 * L_10 = V_0;
		NullCheck(L_9);
		L_9->set_CSU24U3CU3E8__locals1_1(L_10);
		U3CU3Ec__DisplayClass32_1_t3661233181 * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_finishHandler_0((EventHandler_1_t908338235 *)NULL);
		U3CU3Ec__DisplayClass32_1_t3661233181 * L_12 = V_1;
		U3CU3Ec__DisplayClass32_1_t3661233181 * L_13 = V_1;
		intptr_t L_14 = (intptr_t)U3CU3Ec__DisplayClass32_1_U3CShowU3Eb__0_m1950449976_RuntimeMethod_var;
		EventHandler_1_t908338235 * L_15 = (EventHandler_1_t908338235 *)il2cpp_codegen_object_new(EventHandler_1_t908338235_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3836473258(L_15, L_13, L_14, /*hidden argument*/EventHandler_1__ctor_m3836473258_RuntimeMethod_var);
		NullCheck(L_12);
		L_12->set_finishHandler_0(L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		U3CU3Ec__DisplayClass32_1_t3661233181 * L_17 = V_1;
		NullCheck(L_17);
		EventHandler_1_t908338235 * L_18 = L_17->get_finishHandler_0();
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_t908338235 * >::Invoke(2 /* System.Void UnityEngine.Advertisements.IPlatform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_16, L_18);
	}

IL_0058:
	{
		U3CU3Ec__DisplayClass32_0_t3661298717 * L_19 = V_0;
		NullCheck(L_19);
		ShowOptions_t990845000 * L_20 = L_19->get_showOptions_0();
		NullCheck(L_20);
		String_t* L_21 = ShowOptions_get_gamerSid_m237075789(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_008f;
		}
	}
	{
		MetaData_t2274729001 * L_23 = (MetaData_t2274729001 *)il2cpp_codegen_object_new(MetaData_t2274729001_il2cpp_TypeInfo_var);
		MetaData__ctor_m3588377154(L_23, _stringLiteral2261821926, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_24 = L_23;
		U3CU3Ec__DisplayClass32_0_t3661298717 * L_25 = V_0;
		NullCheck(L_25);
		ShowOptions_t990845000 * L_26 = L_25->get_showOptions_0();
		NullCheck(L_26);
		String_t* L_27 = ShowOptions_get_gamerSid_m237075789(L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		MetaData_Set_m623296862(L_24, _stringLiteral4028036860, L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_SetMetaData_m565371566(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
	}

IL_008f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_28 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		String_t* L_29 = ___placementId0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		G_B6_0 = L_28;
		if (L_30)
		{
			G_B7_0 = L_28;
			goto IL_009f;
		}
	}
	{
		String_t* L_31 = ___placementId0;
		G_B8_0 = L_31;
		G_B8_1 = G_B6_0;
		goto IL_00a0;
	}

IL_009f:
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B7_0;
	}

IL_00a0:
	{
		NullCheck(G_B8_1);
		InterfaceActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityEngine.Advertisements.IPlatform::Show(System.String) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, G_B8_1, G_B8_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void Advertisement_SetMetaData_m565371566 (RuntimeObject * __this /* static, unused */, MetaData_t2274729001 * ___metaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_SetMetaData_m565371566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		MetaData_t2274729001 * L_1 = ___metaData0;
		NullCheck(L_0);
		InterfaceActionInvoker1< MetaData_t2274729001 * >::Invoke(9 /* System.Void UnityEngine.Advertisements.IPlatform::SetMetaData(UnityEngine.Advertisements.MetaData) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::.cctor()
extern "C"  void Advertisement__cctor_m2476277213 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement__cctor_m2476277213_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = Advertisement_GetPlatform_m1793327847(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Platform_1(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		bool L_1 = Debug_get_isDebugBuild_m1389897688(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 7;
		goto IL_0016;
	}

IL_0014:
	{
		G_B3_0 = ((int32_t)15);
	}

IL_0016:
	{
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_DebugLevel_3(G_B3_0);
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
// System.Void UnityEngine.Advertisements.Advertisement/<>c::.cctor()
extern "C"  void U3CU3Ec__cctor_m2055244828 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m2055244828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3409917408 * L_0 = (U3CU3Ec_t3409917408 *)il2cpp_codegen_object_new(U3CU3Ec_t3409917408_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3330916935(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3409917408_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3409917408_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m3330916935 (U3CU3Ec_t3409917408 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement/<>c::<Initialize>b__24_0(System.Object,UnityEngine.Advertisements.StartEventArgs)
extern "C"  void U3CU3Ec_U3CInitializeU3Eb__24_0_m1842518973 (U3CU3Ec_t3409917408 * __this, RuntimeObject * ___sender0, StartEventArgs_t4291826435 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CInitializeU3Eb__24_0_m1842518973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_set_isShowing_m3029138671(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement/<>c::<Initialize>b__24_1(System.Object,UnityEngine.Advertisements.FinishEventArgs)
extern "C"  void U3CU3Ec_U3CInitializeU3Eb__24_1_m2316996385 (U3CU3Ec_t3409917408 * __this, RuntimeObject * ___sender0, FinishEventArgs_t2984178802 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CInitializeU3Eb__24_1_m2316996385_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_set_isShowing_m3029138671(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Advertisement/<>c__DisplayClass32_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass32_0__ctor_m623393639 (U3CU3Ec__DisplayClass32_0_t3661298717 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Advertisement/<>c__DisplayClass32_1::.ctor()
extern "C"  void U3CU3Ec__DisplayClass32_1__ctor_m623394728 (U3CU3Ec__DisplayClass32_1_t3661233181 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement/<>c__DisplayClass32_1::<Show>b__0(System.Object,UnityEngine.Advertisements.FinishEventArgs)
extern "C"  void U3CU3Ec__DisplayClass32_1_U3CShowU3Eb__0_m1950449976 (U3CU3Ec__DisplayClass32_1_t3661233181 * __this, RuntimeObject * ___sender0, FinishEventArgs_t2984178802 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass32_1_U3CShowU3Eb__0_m1950449976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass32_0_t3661298717 * L_0 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_0);
		ShowOptions_t990845000 * L_1 = L_0->get_showOptions_0();
		NullCheck(L_1);
		Action_1_t3243021218 * L_2 = ShowOptions_get_resultCallback_m175972177(L_1, /*hidden argument*/NULL);
		FinishEventArgs_t2984178802 * L_3 = ___e1;
		NullCheck(L_3);
		int32_t L_4 = FinishEventArgs_get_showResult_m1056497682(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Action_1_Invoke_m1246102229(L_2, L_4, /*hidden argument*/Action_1_Invoke_m1246102229_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		EventHandler_1_t908338235 * L_6 = __this->get_finishHandler_0();
		NullCheck(L_5);
		InterfaceActionInvoker1< EventHandler_1_t908338235 * >::Invoke(3 /* System.Void UnityEngine.Advertisements.IPlatform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_5, L_6);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.CallbackExecutor::Post(System.Action`1<UnityEngine.Advertisements.CallbackExecutor>)
extern "C"  void CallbackExecutor_Post_m1360464972 (CallbackExecutor_t363496179 * __this, Action_1_t535963774 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackExecutor_Post_m1360464972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t382223268 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t382223268 * L_0 = __this->get_s_Queue_2();
		V_0 = L_0;
		Queue_1_t382223268 * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		Queue_1_t382223268 * L_2 = __this->get_s_Queue_2();
		Action_1_t535963774 * L_3 = ___action0;
		NullCheck(L_2);
		Queue_1_Enqueue_m1151361973(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_m1151361973_RuntimeMethod_var);
		IL2CPP_LEAVE(0x22, FINALLY_001b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		Queue_1_t382223268 * L_4 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.CallbackExecutor::Update()
extern "C"  void CallbackExecutor_Update_m1768355658 (CallbackExecutor_t363496179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackExecutor_Update_m1768355658_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t382223268 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t382223268 * L_0 = __this->get_s_Queue_2();
		V_0 = L_0;
		Queue_1_t382223268 * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_000f:
		{
			Queue_1_t382223268 * L_2 = __this->get_s_Queue_2();
			NullCheck(L_2);
			Action_1_t535963774 * L_3 = Queue_1_Dequeue_m2025295047(L_2, /*hidden argument*/Queue_1_Dequeue_m2025295047_RuntimeMethod_var);
			NullCheck(L_3);
			Action_1_Invoke_m3838832427(L_3, __this, /*hidden argument*/Action_1_Invoke_m3838832427_RuntimeMethod_var);
		}

IL_0020:
		{
			Queue_1_t382223268 * L_4 = __this->get_s_Queue_2();
			NullCheck(L_4);
			int32_t L_5 = Queue_1_get_Count_m3760112611(L_4, /*hidden argument*/Queue_1_get_Count_m3760112611_RuntimeMethod_var);
			if ((((int32_t)L_5) > ((int32_t)0)))
			{
				goto IL_000f;
			}
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x37, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Queue_1_t382223268 * L_6 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0037:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.CallbackExecutor::.ctor()
extern "C"  void CallbackExecutor__ctor_m1195307918 (CallbackExecutor_t363496179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackExecutor__ctor_m1195307918_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t382223268 * L_0 = (Queue_1_t382223268 *)il2cpp_codegen_object_new(Queue_1_t382223268_il2cpp_TypeInfo_var);
		Queue_1__ctor_m3415362461(L_0, /*hidden argument*/Queue_1__ctor_m3415362461_RuntimeMethod_var);
		__this->set_s_Queue_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_error(System.Int64)
extern "C"  void ErrorEventArgs_set_error_m3356692480 (ErrorEventArgs_t2253147013 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CerrorU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_message(System.String)
extern "C"  void ErrorEventArgs_set_message_m3016908457 (ErrorEventArgs_t2253147013 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CmessageU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.ErrorEventArgs::.ctor(System.Int64,System.String)
extern "C"  void ErrorEventArgs__ctor_m3105067562 (ErrorEventArgs_t2253147013 * __this, int64_t ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorEventArgs__ctor_m3105067562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		int64_t L_0 = ___error0;
		ErrorEventArgs_set_error_m3356692480(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___message1;
		ErrorEventArgs_set_message_m3016908457(__this, L_1, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.FinishEventArgs::set_placementId(System.String)
extern "C"  void FinishEventArgs_set_placementId_m557930530 (FinishEventArgs_t2984178802 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.FinishEventArgs::get_showResult()
extern "C"  int32_t FinishEventArgs_get_showResult_m1056497682 (FinishEventArgs_t2984178802 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CshowResultU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.FinishEventArgs::set_showResult(UnityEngine.Advertisements.ShowResult)
extern "C"  void FinishEventArgs_set_showResult_m1315340813 (FinishEventArgs_t2984178802 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CshowResultU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.FinishEventArgs::.ctor(System.String,UnityEngine.Advertisements.ShowResult)
extern "C"  void FinishEventArgs__ctor_m911455770 (FinishEventArgs_t2984178802 * __this, String_t* ___placementId0, int32_t ___showResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FinishEventArgs__ctor_m911455770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___placementId0;
		FinishEventArgs_set_placementId_m557930530(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___showResult1;
		FinishEventArgs_set_showResult_m1315340813(__this, L_1, /*hidden argument*/NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsReady_m1487611528(char* ___placementId0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	Platform_UnityAdsReady_m1487611528(NULL, ____placementId0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidError_m2802114104(int64_t ___rawError0, char* ___message1)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___message1' to managed representation
	String_t* ____message1_unmarshaled = NULL;
	____message1_unmarshaled = il2cpp_codegen_marshal_string_result(___message1);

	// Managed method invocation
	Platform_UnityAdsDidError_m2802114104(NULL, ___rawError0, ____message1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidStart_m2533573874(char* ___placementId0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	Platform_UnityAdsDidStart_m2533573874(NULL, ____placementId0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidFinish_m3955608050(char* ___placementId0, int64_t ___rawShowResult1)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	Platform_UnityAdsDidFinish_m3955608050(NULL, ____placementId0_unmarshaled, ___rawShowResult1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidInitiatePurchasingCommand_m3816664491(char* ___eventString0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___eventString0' to managed representation
	String_t* ____eventString0_unmarshaled = NULL;
	____eventString0_unmarshaled = il2cpp_codegen_marshal_string_result(___eventString0);

	// Managed method invocation
	Platform_UnityAdsDidInitiatePurchasingCommand_m3816664491(NULL, ____eventString0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsPurchasingGetProductCatalog_m2180521046()
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	Platform_UnityAdsPurchasingGetProductCatalog_m2180521046(NULL, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsPurchasingGetPurchasingVersion_m618922504()
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	Platform_UnityAdsPurchasingGetPurchasingVersion_m618922504(NULL, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsPurchasingInitialize_m1149165094()
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	Platform_UnityAdsPurchasingInitialize_m1149165094(NULL, NULL);

}
extern "C" void DEFAULT_CALL UnityAdsInitialize(char*, int32_t);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsInitialize(System.String,System.Boolean)
extern "C"  void Platform_UnityAdsInitialize_m282382030 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___gameId0' to native representation
	char* ____gameId0_marshaled = NULL;
	____gameId0_marshaled = il2cpp_codegen_marshal_string(___gameId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsInitialize)(____gameId0_marshaled, static_cast<int32_t>(___testMode1));

	// Marshaling cleanup of parameter '___gameId0' native representation
	il2cpp_codegen_marshal_free(____gameId0_marshaled);
	____gameId0_marshaled = NULL;

}
extern "C" void DEFAULT_CALL UnityAdsPurchasingDispatchReturnEvent(int64_t, char*);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsPurchasingDispatchReturnEvent(System.Int64,System.String)
extern "C"  void Platform_UnityAdsPurchasingDispatchReturnEvent_m1880679472 (RuntimeObject * __this /* static, unused */, int64_t ___eventType0, String_t* ___payload1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int64_t, char*);

	// Marshaling of parameter '___payload1' to native representation
	char* ____payload1_marshaled = NULL;
	____payload1_marshaled = il2cpp_codegen_marshal_string(___payload1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsPurchasingDispatchReturnEvent)(___eventType0, ____payload1_marshaled);

	// Marshaling cleanup of parameter '___payload1' native representation
	il2cpp_codegen_marshal_free(____payload1_marshaled);
	____payload1_marshaled = NULL;

}
extern "C" void DEFAULT_CALL UnityAdsShow(char*);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsShow(System.String)
extern "C"  void Platform_UnityAdsShow_m3373951341 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsShow)(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
extern "C" int32_t DEFAULT_CALL UnityAdsIsSupported();
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsIsSupported()
extern "C"  bool Platform_UnityAdsIsSupported_m1351285359 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsIsSupported)();

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityAdsIsReady(char*);
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsIsReady(System.String)
extern "C"  bool Platform_UnityAdsIsReady_m3224219300 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsIsReady)(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
extern "C" char* DEFAULT_CALL UnityAdsGetVersion();
// System.String UnityEngine.Advertisements.iOS.Platform::UnityAdsGetVersion()
extern "C"  String_t* Platform_UnityAdsGetVersion_m2243661488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsGetVersion)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
extern "C" void DEFAULT_CALL UnityAdsSetMetaData(char*, char*);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetMetaData(System.String,System.String)
extern "C"  void Platform_UnityAdsSetMetaData_m1790711249 (RuntimeObject * __this /* static, unused */, String_t* ___category0, String_t* ___data1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___category0' to native representation
	char* ____category0_marshaled = NULL;
	____category0_marshaled = il2cpp_codegen_marshal_string(___category0);

	// Marshaling of parameter '___data1' to native representation
	char* ____data1_marshaled = NULL;
	____data1_marshaled = il2cpp_codegen_marshal_string(___data1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetMetaData)(____category0_marshaled, ____data1_marshaled);

	// Marshaling cleanup of parameter '___category0' native representation
	il2cpp_codegen_marshal_free(____category0_marshaled);
	____category0_marshaled = NULL;

	// Marshaling cleanup of parameter '___data1' native representation
	il2cpp_codegen_marshal_free(____data1_marshaled);
	____data1_marshaled = NULL;

}
extern "C" void DEFAULT_CALL UnityAdsSetReadyCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetReadyCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsReady)
extern "C"  void Platform_UnityAdsSetReadyCallback_m451768802 (RuntimeObject * __this /* static, unused */, unityAdsReady_t96934738 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetReadyCallback)(____callback0_marshaled);

}
extern "C" void DEFAULT_CALL UnityAdsSetDidErrorCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetDidErrorCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidError)
extern "C"  void Platform_UnityAdsSetDidErrorCallback_m3205639914 (RuntimeObject * __this /* static, unused */, unityAdsDidError_t1993223595 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetDidErrorCallback)(____callback0_marshaled);

}
extern "C" void DEFAULT_CALL UnityAdsSetDidStartCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetDidStartCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart)
extern "C"  void Platform_UnityAdsSetDidStartCallback_m3797837678 (RuntimeObject * __this /* static, unused */, unityAdsDidStart_t1058412932 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetDidStartCallback)(____callback0_marshaled);

}
extern "C" void DEFAULT_CALL UnityAdsSetDidFinishCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetDidFinishCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish)
extern "C"  void Platform_UnityAdsSetDidFinishCallback_m386922261 (RuntimeObject * __this /* static, unused */, unityAdsDidFinish_t3747416149 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetDidFinishCallback)(____callback0_marshaled);

}
extern "C" void DEFAULT_CALL UnityAdsSetDidInitiatePurchasingCommandCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetDidInitiatePurchasingCommandCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingDidInitiatePurchasingCommand)
extern "C"  void Platform_UnityAdsSetDidInitiatePurchasingCommandCallback_m845104069 (RuntimeObject * __this /* static, unused */, unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetDidInitiatePurchasingCommandCallback)(____callback0_marshaled);

}
extern "C" void DEFAULT_CALL UnityAdsSetGetProductCatalogCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetGetProductCatalogCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetProductCatalog)
extern "C"  void Platform_UnityAdsSetGetProductCatalogCallback_m1834361531 (RuntimeObject * __this /* static, unused */, unityAdsPurchasingGetProductCatalog_t1122116460 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetGetProductCatalogCallback)(____callback0_marshaled);

}
extern "C" void DEFAULT_CALL UnityAdsSetGetVersionCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetGetVersionCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetPurchasingVersion)
extern "C"  void Platform_UnityAdsSetGetVersionCallback_m858406520 (RuntimeObject * __this /* static, unused */, unityAdsPurchasingGetPurchasingVersion_t1837383580 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetGetVersionCallback)(____callback0_marshaled);

}
extern "C" void DEFAULT_CALL UnityAdsSetInitializePurchasingCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetInitializePurchasingCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingInitialize)
extern "C"  void Platform_UnityAdsSetInitializePurchasingCallback_m3878818099 (RuntimeObject * __this /* static, unused */, unityAdsPurchasingInitialize_t3791088414 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetInitializePurchasingCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsReady(System.String)
extern "C"  void Platform_UnityAdsReady_m1487611528 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsReady_m1487611528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass29_0_t3393166357 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass29_0_t3393166357 * L_0 = (U3CU3Ec__DisplayClass29_0_t3393166357 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass29_0_t3393166357_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass29_0__ctor_m331075084(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass29_0_t3393166357 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3CU3Ec__DisplayClass29_0_t3393166357 * L_3 = V_0;
		Platform_t1647901813 * L_4 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		NullCheck(L_4);
		EventHandler_1_t2768214265 * L_5 = L_4->get_OnReady_2();
		NullCheck(L_3);
		L_3->set_handler_0(L_5);
		U3CU3Ec__DisplayClass29_0_t3393166357 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t2768214265 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		CallbackExecutor_t363496179 * L_8 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_CallbackExecutor_1();
		U3CU3Ec__DisplayClass29_0_t3393166357 * L_9 = V_0;
		intptr_t L_10 = (intptr_t)U3CU3Ec__DisplayClass29_0_U3CUnityAdsReadyU3Eb__0_m626247486_RuntimeMethod_var;
		Action_1_t535963774 * L_11 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m122859363(L_11, L_9, L_10, /*hidden argument*/Action_1__ctor_m122859363_RuntimeMethod_var);
		NullCheck(L_8);
		CallbackExecutor_Post_m1360464972(L_8, L_11, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidError(System.Int64,System.String)
extern "C"  void Platform_UnityAdsDidError_m2802114104 (RuntimeObject * __this /* static, unused */, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsDidError_m2802114104_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass30_0_t2185475464 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass30_0_t2185475464 * L_0 = (U3CU3Ec__DisplayClass30_0_t2185475464 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass30_0_t2185475464_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass30_0__ctor_m2755993364(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass30_0_t2185475464 * L_1 = V_0;
		int64_t L_2 = ___rawError0;
		NullCheck(L_1);
		L_1->set_rawError_1(L_2);
		U3CU3Ec__DisplayClass30_0_t2185475464 * L_3 = V_0;
		String_t* L_4 = ___message1;
		NullCheck(L_3);
		L_3->set_message_2(L_4);
		U3CU3Ec__DisplayClass30_0_t2185475464 * L_5 = V_0;
		Platform_t1647901813 * L_6 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		NullCheck(L_6);
		EventHandler_1_t177306446 * L_7 = L_6->get_OnError_5();
		NullCheck(L_5);
		L_5->set_handler_0(L_7);
		U3CU3Ec__DisplayClass30_0_t2185475464 * L_8 = V_0;
		NullCheck(L_8);
		EventHandler_1_t177306446 * L_9 = L_8->get_handler_0();
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		CallbackExecutor_t363496179 * L_10 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_CallbackExecutor_1();
		U3CU3Ec__DisplayClass30_0_t2185475464 * L_11 = V_0;
		intptr_t L_12 = (intptr_t)U3CU3Ec__DisplayClass30_0_U3CUnityAdsDidErrorU3Eb__0_m2218418778_RuntimeMethod_var;
		Action_1_t535963774 * L_13 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m122859363(L_13, L_11, L_12, /*hidden argument*/Action_1__ctor_m122859363_RuntimeMethod_var);
		NullCheck(L_10);
		CallbackExecutor_Post_m1360464972(L_10, L_13, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidStart(System.String)
extern "C"  void Platform_UnityAdsDidStart_m2533573874 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsDidStart_m2533573874_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass31_0_t3751559405 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass31_0_t3751559405 * L_0 = (U3CU3Ec__DisplayClass31_0_t3751559405 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass31_0_t3751559405_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass31_0__ctor_m885137169(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass31_0_t3751559405 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3CU3Ec__DisplayClass31_0_t3751559405 * L_3 = V_0;
		Platform_t1647901813 * L_4 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		NullCheck(L_4);
		EventHandler_1_t2215985868 * L_5 = L_4->get_OnStart_3();
		NullCheck(L_3);
		L_3->set_handler_0(L_5);
		U3CU3Ec__DisplayClass31_0_t3751559405 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t2215985868 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		CallbackExecutor_t363496179 * L_8 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_CallbackExecutor_1();
		U3CU3Ec__DisplayClass31_0_t3751559405 * L_9 = V_0;
		intptr_t L_10 = (intptr_t)U3CU3Ec__DisplayClass31_0_U3CUnityAdsDidStartU3Eb__0_m301878744_RuntimeMethod_var;
		Action_1_t535963774 * L_11 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m122859363(L_11, L_9, L_10, /*hidden argument*/Action_1__ctor_m122859363_RuntimeMethod_var);
		NullCheck(L_8);
		CallbackExecutor_Post_m1360464972(L_8, L_11, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidFinish(System.String,System.Int64)
extern "C"  void Platform_UnityAdsDidFinish_m3955608050 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, int64_t ___rawShowResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsDidFinish_m3955608050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass32_0_t1022676050 * V_0 = NULL;
	U3CU3Ec__DisplayClass32_1_t1022676051 * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass32_0_t1022676050 * L_0 = (U3CU3Ec__DisplayClass32_0_t1022676050 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass32_0_t1022676050_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass32_0__ctor_m2617450257(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass32_0_t1022676050 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3CU3Ec__DisplayClass32_0_t1022676050 * L_3 = V_0;
		Platform_t1647901813 * L_4 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		NullCheck(L_4);
		EventHandler_1_t908338235 * L_5 = L_4->get_OnFinish_4();
		NullCheck(L_3);
		L_3->set_handler_0(L_5);
		U3CU3Ec__DisplayClass32_0_t1022676050 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t908338235 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		U3CU3Ec__DisplayClass32_1_t1022676051 * L_8 = (U3CU3Ec__DisplayClass32_1_t1022676051 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass32_1_t1022676051_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass32_1__ctor_m2494045969(L_8, /*hidden argument*/NULL);
		V_1 = L_8;
		U3CU3Ec__DisplayClass32_1_t1022676051 * L_9 = V_1;
		U3CU3Ec__DisplayClass32_0_t1022676050 * L_10 = V_0;
		NullCheck(L_9);
		L_9->set_CSU24U3CU3E8__locals1_1(L_10);
		U3CU3Ec__DisplayClass32_1_t1022676051 * L_11 = V_1;
		int64_t L_12 = ___rawShowResult1;
		NullCheck(L_11);
		L_11->set_showResult_0((((int32_t)((int32_t)L_12))));
		CallbackExecutor_t363496179 * L_13 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_CallbackExecutor_1();
		U3CU3Ec__DisplayClass32_1_t1022676051 * L_14 = V_1;
		intptr_t L_15 = (intptr_t)U3CU3Ec__DisplayClass32_1_U3CUnityAdsDidFinishU3Eb__0_m881700773_RuntimeMethod_var;
		Action_1_t535963774 * L_16 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m122859363(L_16, L_14, L_15, /*hidden argument*/Action_1__ctor_m122859363_RuntimeMethod_var);
		NullCheck(L_13);
		CallbackExecutor_Post_m1360464972(L_13, L_16, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidInitiatePurchasingCommand(System.String)
extern "C"  void Platform_UnityAdsDidInitiatePurchasingCommand_m3816664491 (RuntimeObject * __this /* static, unused */, String_t* ___eventString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsDidInitiatePurchasingCommand_m3816664491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		String_t* L_0 = ___eventString0;
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t1355674289_il2cpp_TypeInfo_var);
		bool L_1 = Purchasing_InitiatePurchasingCommand_m2709730589(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2 = Boolean_ToString_m2664721875((bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		Platform_UnityAdsPurchasingDispatchReturnEvent_m1880679472(NULL /*static, unused*/, (((int64_t)((int64_t)0))), L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsPurchasingGetProductCatalog()
extern "C"  void Platform_UnityAdsPurchasingGetProductCatalog_m2180521046 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsPurchasingGetProductCatalog_m2180521046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t1355674289_il2cpp_TypeInfo_var);
		String_t* L_0 = Purchasing_GetPurchasingCatalog_m716646145(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		Platform_UnityAdsPurchasingDispatchReturnEvent_m1880679472(NULL /*static, unused*/, (((int64_t)((int64_t)2))), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsPurchasingGetPurchasingVersion()
extern "C"  void Platform_UnityAdsPurchasingGetPurchasingVersion_m618922504 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsPurchasingGetPurchasingVersion_m618922504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t1355674289_il2cpp_TypeInfo_var);
		String_t* L_0 = Purchasing_GetPromoVersion_m1709726025(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		Platform_UnityAdsPurchasingDispatchReturnEvent_m1880679472(NULL /*static, unused*/, (((int64_t)((int64_t)1))), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsPurchasingInitialize()
extern "C"  void Platform_UnityAdsPurchasingInitialize_m1149165094 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsPurchasingInitialize_m1149165094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		Platform_t1647901813 * L_0 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t1355674289_il2cpp_TypeInfo_var);
		bool L_1 = Purchasing_Initialize_m2991467968(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2 = Boolean_ToString_m2664721875((bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		Platform_UnityAdsPurchasingDispatchReturnEvent_m1880679472(NULL /*static, unused*/, (((int64_t)((int64_t)3))), L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void Platform_add_OnStart_m3588358312 (Platform_t1647901813 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnStart_m3588358312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * V_0 = NULL;
	EventHandler_1_t2215985868 * V_1 = NULL;
	EventHandler_1_t2215985868 * V_2 = NULL;
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_OnStart_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2215985868 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2215985868 * L_2 = V_1;
		EventHandler_1_t2215985868 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t2215985868 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t2215985868_il2cpp_TypeInfo_var));
		EventHandler_1_t2215985868 ** L_5 = __this->get_address_of_OnStart_3();
		EventHandler_1_t2215985868 * L_6 = V_2;
		EventHandler_1_t2215985868 * L_7 = V_1;
		EventHandler_1_t2215985868 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t2215985868 *>((EventHandler_1_t2215985868 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t2215985868 * L_9 = V_0;
		EventHandler_1_t2215985868 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2215985868 *)L_9) == ((RuntimeObject*)(EventHandler_1_t2215985868 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void Platform_remove_OnStart_m4019691916 (Platform_t1647901813 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnStart_m4019691916_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * V_0 = NULL;
	EventHandler_1_t2215985868 * V_1 = NULL;
	EventHandler_1_t2215985868 * V_2 = NULL;
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_OnStart_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2215985868 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2215985868 * L_2 = V_1;
		EventHandler_1_t2215985868 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t2215985868 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t2215985868_il2cpp_TypeInfo_var));
		EventHandler_1_t2215985868 ** L_5 = __this->get_address_of_OnStart_3();
		EventHandler_1_t2215985868 * L_6 = V_2;
		EventHandler_1_t2215985868 * L_7 = V_1;
		EventHandler_1_t2215985868 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t2215985868 *>((EventHandler_1_t2215985868 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t2215985868 * L_9 = V_0;
		EventHandler_1_t2215985868 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2215985868 *)L_9) == ((RuntimeObject*)(EventHandler_1_t2215985868 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Platform_add_OnFinish_m3936121804 (Platform_t1647901813 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnFinish_m3936121804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	EventHandler_1_t908338235 * V_2 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 * L_2 = V_1;
		EventHandler_1_t908338235 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t908338235_il2cpp_TypeInfo_var));
		EventHandler_1_t908338235 ** L_5 = __this->get_address_of_OnFinish_4();
		EventHandler_1_t908338235 * L_6 = V_2;
		EventHandler_1_t908338235 * L_7 = V_1;
		EventHandler_1_t908338235 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>((EventHandler_1_t908338235 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t908338235 * L_9 = V_0;
		EventHandler_1_t908338235 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_9) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Platform_remove_OnFinish_m3216092807 (Platform_t1647901813 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnFinish_m3216092807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	EventHandler_1_t908338235 * V_2 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 * L_2 = V_1;
		EventHandler_1_t908338235 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t908338235_il2cpp_TypeInfo_var));
		EventHandler_1_t908338235 ** L_5 = __this->get_address_of_OnFinish_4();
		EventHandler_1_t908338235 * L_6 = V_2;
		EventHandler_1_t908338235 * L_7 = V_1;
		EventHandler_1_t908338235 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>((EventHandler_1_t908338235 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t908338235 * L_9 = V_0;
		EventHandler_1_t908338235 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_9) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::.ctor()
extern "C"  void Platform__ctor_m334176308 (Platform_t1647901813 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__ctor_m334176308_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->set_s_Instance_0(__this);
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_0, _stringLiteral2428876507, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = L_0;
		NullCheck(L_1);
		Object_set_hideFlags_m1648752846(L_1, ((int32_t)63), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = L_1;
		NullCheck(L_2);
		CallbackExecutor_t363496179 * L_3 = GameObject_AddComponent_TisCallbackExecutor_t363496179_m374342643(L_2, /*hidden argument*/GameObject_AddComponent_TisCallbackExecutor_t363496179_m374342643_RuntimeMethod_var);
		((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->set_s_CallbackExecutor_1(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)Platform_UnityAdsReady_m1487611528_RuntimeMethod_var;
		unityAdsReady_t96934738 * L_5 = (unityAdsReady_t96934738 *)il2cpp_codegen_object_new(unityAdsReady_t96934738_il2cpp_TypeInfo_var);
		unityAdsReady__ctor_m2857655779(L_5, NULL, L_4, /*hidden argument*/NULL);
		Platform_UnityAdsSetReadyCallback_m451768802(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		intptr_t L_6 = (intptr_t)Platform_UnityAdsDidError_m2802114104_RuntimeMethod_var;
		unityAdsDidError_t1993223595 * L_7 = (unityAdsDidError_t1993223595 *)il2cpp_codegen_object_new(unityAdsDidError_t1993223595_il2cpp_TypeInfo_var);
		unityAdsDidError__ctor_m351972727(L_7, NULL, L_6, /*hidden argument*/NULL);
		Platform_UnityAdsSetDidErrorCallback_m3205639914(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		intptr_t L_8 = (intptr_t)Platform_UnityAdsDidStart_m2533573874_RuntimeMethod_var;
		unityAdsDidStart_t1058412932 * L_9 = (unityAdsDidStart_t1058412932 *)il2cpp_codegen_object_new(unityAdsDidStart_t1058412932_il2cpp_TypeInfo_var);
		unityAdsDidStart__ctor_m1859135286(L_9, NULL, L_8, /*hidden argument*/NULL);
		Platform_UnityAdsSetDidStartCallback_m3797837678(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		intptr_t L_10 = (intptr_t)Platform_UnityAdsDidFinish_m3955608050_RuntimeMethod_var;
		unityAdsDidFinish_t3747416149 * L_11 = (unityAdsDidFinish_t3747416149 *)il2cpp_codegen_object_new(unityAdsDidFinish_t3747416149_il2cpp_TypeInfo_var);
		unityAdsDidFinish__ctor_m2943032643(L_11, NULL, L_10, /*hidden argument*/NULL);
		Platform_UnityAdsSetDidFinishCallback_m386922261(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		intptr_t L_12 = (intptr_t)Platform_UnityAdsDidInitiatePurchasingCommand_m3816664491_RuntimeMethod_var;
		unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962 * L_13 = (unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962 *)il2cpp_codegen_object_new(unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962_il2cpp_TypeInfo_var);
		unityAdsPurchasingDidInitiatePurchasingCommand__ctor_m1852803892(L_13, NULL, L_12, /*hidden argument*/NULL);
		Platform_UnityAdsSetDidInitiatePurchasingCommandCallback_m845104069(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		intptr_t L_14 = (intptr_t)Platform_UnityAdsPurchasingGetProductCatalog_m2180521046_RuntimeMethod_var;
		unityAdsPurchasingGetProductCatalog_t1122116460 * L_15 = (unityAdsPurchasingGetProductCatalog_t1122116460 *)il2cpp_codegen_object_new(unityAdsPurchasingGetProductCatalog_t1122116460_il2cpp_TypeInfo_var);
		unityAdsPurchasingGetProductCatalog__ctor_m2451799939(L_15, NULL, L_14, /*hidden argument*/NULL);
		Platform_UnityAdsSetGetProductCatalogCallback_m1834361531(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		intptr_t L_16 = (intptr_t)Platform_UnityAdsPurchasingGetPurchasingVersion_m618922504_RuntimeMethod_var;
		unityAdsPurchasingGetPurchasingVersion_t1837383580 * L_17 = (unityAdsPurchasingGetPurchasingVersion_t1837383580 *)il2cpp_codegen_object_new(unityAdsPurchasingGetPurchasingVersion_t1837383580_il2cpp_TypeInfo_var);
		unityAdsPurchasingGetPurchasingVersion__ctor_m712419234(L_17, NULL, L_16, /*hidden argument*/NULL);
		Platform_UnityAdsSetGetVersionCallback_m858406520(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		intptr_t L_18 = (intptr_t)Platform_UnityAdsPurchasingInitialize_m1149165094_RuntimeMethod_var;
		unityAdsPurchasingInitialize_t3791088414 * L_19 = (unityAdsPurchasingInitialize_t3791088414 *)il2cpp_codegen_object_new(unityAdsPurchasingInitialize_t3791088414_il2cpp_TypeInfo_var);
		unityAdsPurchasingInitialize__ctor_m3181716181(L_19, NULL, L_18, /*hidden argument*/NULL);
		Platform_UnityAdsSetInitializePurchasingCallback_m3878818099(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.iOS.Platform::get_isSupported()
extern "C"  bool Platform_get_isSupported_m3610071283 (Platform_t1647901813 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Platform_UnityAdsIsSupported_m1351285359(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityEngine.Advertisements.iOS.Platform::get_version()
extern "C"  String_t* Platform_get_version_m3854020257 (Platform_t1647901813 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Platform_UnityAdsGetVersion_m2243661488(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::Initialize(System.String,System.Boolean)
extern "C"  void Platform_Initialize_m3310767589 (Platform_t1647901813 * __this, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___gameId0;
		bool L_1 = ___testMode1;
		Platform_UnityAdsInitialize_m282382030(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.iOS.Platform::IsReady(System.String)
extern "C"  bool Platform_IsReady_m1940034296 (Platform_t1647901813 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		bool L_1 = Platform_UnityAdsIsReady_m3224219300(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::Show(System.String)
extern "C"  void Platform_Show_m4129900215 (Platform_t1647901813 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		Platform_UnityAdsShow_m3373951341(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void Platform_SetMetaData_m3387618889 (Platform_t1647901813 * __this, MetaData_t2274729001 * ___metaData0, const RuntimeMethod* method)
{
	{
		MetaData_t2274729001 * L_0 = ___metaData0;
		NullCheck(L_0);
		String_t* L_1 = MetaData_get_category_m158841008(L_0, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_2 = ___metaData0;
		NullCheck(L_2);
		String_t* L_3 = MetaData_ToJSON_m4054959390(L_2, /*hidden argument*/NULL);
		Platform_UnityAdsSetMetaData_m1790711249(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass29_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass29_0__ctor_m331075084 (U3CU3Ec__DisplayClass29_0_t3393166357 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass29_0::<UnityAdsReady>b__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C"  void U3CU3Ec__DisplayClass29_0_U3CUnityAdsReadyU3Eb__0_m626247486 (U3CU3Ec__DisplayClass29_0_t3393166357 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass29_0_U3CUnityAdsReadyU3Eb__0_m626247486_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t2768214265 * L_0 = __this->get_handler_0();
		Platform_t1647901813 * L_1 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		String_t* L_2 = __this->get_placementId_1();
		ReadyEventArgs_t549087536 * L_3 = (ReadyEventArgs_t549087536 *)il2cpp_codegen_object_new(ReadyEventArgs_t549087536_il2cpp_TypeInfo_var);
		ReadyEventArgs__ctor_m4282028464(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		EventHandler_1_Invoke_m914743136(L_0, L_1, L_3, /*hidden argument*/EventHandler_1_Invoke_m914743136_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass30_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass30_0__ctor_m2755993364 (U3CU3Ec__DisplayClass30_0_t2185475464 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass30_0::<UnityAdsDidError>b__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C"  void U3CU3Ec__DisplayClass30_0_U3CUnityAdsDidErrorU3Eb__0_m2218418778 (U3CU3Ec__DisplayClass30_0_t2185475464 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass30_0_U3CUnityAdsDidErrorU3Eb__0_m2218418778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t177306446 * L_0 = __this->get_handler_0();
		Platform_t1647901813 * L_1 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		int64_t L_2 = __this->get_rawError_1();
		String_t* L_3 = __this->get_message_2();
		ErrorEventArgs_t2253147013 * L_4 = (ErrorEventArgs_t2253147013 *)il2cpp_codegen_object_new(ErrorEventArgs_t2253147013_il2cpp_TypeInfo_var);
		ErrorEventArgs__ctor_m3105067562(L_4, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		EventHandler_1_Invoke_m112288143(L_0, L_1, L_4, /*hidden argument*/EventHandler_1_Invoke_m112288143_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass31_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass31_0__ctor_m885137169 (U3CU3Ec__DisplayClass31_0_t3751559405 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass31_0::<UnityAdsDidStart>b__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C"  void U3CU3Ec__DisplayClass31_0_U3CUnityAdsDidStartU3Eb__0_m301878744 (U3CU3Ec__DisplayClass31_0_t3751559405 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass31_0_U3CUnityAdsDidStartU3Eb__0_m301878744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_handler_0();
		Platform_t1647901813 * L_1 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		String_t* L_2 = __this->get_placementId_1();
		StartEventArgs_t4291826435 * L_3 = (StartEventArgs_t4291826435 *)il2cpp_codegen_object_new(StartEventArgs_t4291826435_il2cpp_TypeInfo_var);
		StartEventArgs__ctor_m3416358600(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		EventHandler_1_Invoke_m2488886871(L_0, L_1, L_3, /*hidden argument*/EventHandler_1_Invoke_m2488886871_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass32_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass32_0__ctor_m2617450257 (U3CU3Ec__DisplayClass32_0_t1022676050 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass32_1::.ctor()
extern "C"  void U3CU3Ec__DisplayClass32_1__ctor_m2494045969 (U3CU3Ec__DisplayClass32_1_t1022676051 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform/<>c__DisplayClass32_1::<UnityAdsDidFinish>b__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C"  void U3CU3Ec__DisplayClass32_1_U3CUnityAdsDidFinishU3Eb__0_m881700773 (U3CU3Ec__DisplayClass32_1_t1022676051 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass32_1_U3CUnityAdsDidFinishU3Eb__0_m881700773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass32_0_t1022676050 * L_0 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_0);
		EventHandler_1_t908338235 * L_1 = L_0->get_handler_0();
		Platform_t1647901813 * L_2 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		U3CU3Ec__DisplayClass32_0_t1022676050 * L_3 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_3);
		String_t* L_4 = L_3->get_placementId_1();
		int32_t L_5 = __this->get_showResult_0();
		FinishEventArgs_t2984178802 * L_6 = (FinishEventArgs_t2984178802 *)il2cpp_codegen_object_new(FinishEventArgs_t2984178802_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_m911455770(L_6, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		EventHandler_1_Invoke_m3511014384(L_1, L_2, L_6, /*hidden argument*/EventHandler_1_Invoke_m3511014384_RuntimeMethod_var);
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
extern "C"  void DelegatePInvokeWrapper_unityAdsDidError_t1993223595 (unityAdsDidError_t1993223595 * __this, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int64_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message1' to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Native function invocation
	il2cppPInvokeFunc(___rawError0, ____message1_marshaled);

	// Marshaling cleanup of parameter '___message1' native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsDidError__ctor_m351972727 (unityAdsDidError_t1993223595 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::Invoke(System.Int64,System.String)
extern "C"  void unityAdsDidError_Invoke_m111654497 (unityAdsDidError_t1993223595 * __this, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		unityAdsDidError_Invoke_m111654497((unityAdsDidError_t1993223595 *)__this->get_prev_9(), ___rawError0, ___message1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rawError0, ___message1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rawError0, ___message1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int64_t, String_t* >::Invoke(targetMethod, targetThis, ___rawError0, ___message1);
					else
						GenericVirtActionInvoker2< int64_t, String_t* >::Invoke(targetMethod, targetThis, ___rawError0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rawError0, ___message1);
					else
						VirtActionInvoker2< int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rawError0, ___message1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rawError0, ___message1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::BeginInvoke(System.Int64,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* unityAdsDidError_BeginInvoke_m645501748 (unityAdsDidError_t1993223595 * __this, int64_t ___rawError0, String_t* ___message1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (unityAdsDidError_BeginInvoke_m645501748_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &___rawError0);
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsDidError_EndInvoke_m918371997 (unityAdsDidError_t1993223595 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_unityAdsDidFinish_t3747416149 (unityAdsDidFinish_t3747416149 * __this, String_t* ___placementId0, int64_t ___rawShowResult1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*, int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled, ___rawShowResult1);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsDidFinish__ctor_m2943032643 (unityAdsDidFinish_t3747416149 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::Invoke(System.String,System.Int64)
extern "C"  void unityAdsDidFinish_Invoke_m2061840980 (unityAdsDidFinish_t3747416149 * __this, String_t* ___placementId0, int64_t ___rawShowResult1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		unityAdsDidFinish_Invoke_m2061840980((unityAdsDidFinish_t3747416149 *)__this->get_prev_9(), ___placementId0, ___rawShowResult1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___placementId0, ___rawShowResult1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___placementId0, ___rawShowResult1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, int64_t >::Invoke(targetMethod, targetThis, ___placementId0, ___rawShowResult1);
					else
						GenericVirtActionInvoker2< String_t*, int64_t >::Invoke(targetMethod, targetThis, ___placementId0, ___rawShowResult1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0, ___rawShowResult1);
					else
						VirtActionInvoker2< String_t*, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0, ___rawShowResult1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, ___rawShowResult1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int64_t >::Invoke(targetMethod, ___placementId0, ___rawShowResult1);
					else
						GenericVirtActionInvoker1< int64_t >::Invoke(targetMethod, ___placementId0, ___rawShowResult1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0, ___rawShowResult1);
					else
						VirtActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0, ___rawShowResult1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, ___rawShowResult1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::BeginInvoke(System.String,System.Int64,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* unityAdsDidFinish_BeginInvoke_m833542629 (unityAdsDidFinish_t3747416149 * __this, String_t* ___placementId0, int64_t ___rawShowResult1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (unityAdsDidFinish_BeginInvoke_m833542629_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___placementId0;
	__d_args[1] = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &___rawShowResult1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsDidFinish_EndInvoke_m161246034 (unityAdsDidFinish_t3747416149 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_unityAdsDidStart_t1058412932 (unityAdsDidStart_t1058412932 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsDidStart__ctor_m1859135286 (unityAdsDidStart_t1058412932 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::Invoke(System.String)
extern "C"  void unityAdsDidStart_Invoke_m3187478793 (unityAdsDidStart_t1058412932 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		unityAdsDidStart_Invoke_m3187478793((unityAdsDidStart_t1058412932 *)__this->get_prev_9(), ___placementId0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___placementId0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___placementId0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___placementId0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* unityAdsDidStart_BeginInvoke_m3234237524 (unityAdsDidStart_t1058412932 * __this, String_t* ___placementId0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___placementId0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsDidStart_EndInvoke_m517599324 (unityAdsDidStart_t1058412932 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962 (unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962 * __this, String_t* ___eventString0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___eventString0' to native representation
	char* ____eventString0_marshaled = NULL;
	____eventString0_marshaled = il2cpp_codegen_marshal_string(___eventString0);

	// Native function invocation
	il2cppPInvokeFunc(____eventString0_marshaled);

	// Marshaling cleanup of parameter '___eventString0' native representation
	il2cpp_codegen_marshal_free(____eventString0_marshaled);
	____eventString0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingDidInitiatePurchasingCommand::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsPurchasingDidInitiatePurchasingCommand__ctor_m1852803892 (unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingDidInitiatePurchasingCommand::Invoke(System.String)
extern "C"  void unityAdsPurchasingDidInitiatePurchasingCommand_Invoke_m804337873 (unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962 * __this, String_t* ___eventString0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		unityAdsPurchasingDidInitiatePurchasingCommand_Invoke_m804337873((unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962 *)__this->get_prev_9(), ___eventString0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___eventString0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___eventString0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___eventString0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___eventString0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___eventString0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___eventString0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___eventString0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___eventString0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___eventString0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___eventString0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___eventString0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___eventString0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingDidInitiatePurchasingCommand::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* unityAdsPurchasingDidInitiatePurchasingCommand_BeginInvoke_m2719587204 (unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962 * __this, String_t* ___eventString0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___eventString0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingDidInitiatePurchasingCommand::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsPurchasingDidInitiatePurchasingCommand_EndInvoke_m2483637956 (unityAdsPurchasingDidInitiatePurchasingCommand_t3255493962 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_unityAdsPurchasingGetProductCatalog_t1122116460 (unityAdsPurchasingGetProductCatalog_t1122116460 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetProductCatalog::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsPurchasingGetProductCatalog__ctor_m2451799939 (unityAdsPurchasingGetProductCatalog_t1122116460 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetProductCatalog::Invoke()
extern "C"  void unityAdsPurchasingGetProductCatalog_Invoke_m1371376568 (unityAdsPurchasingGetProductCatalog_t1122116460 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		unityAdsPurchasingGetProductCatalog_Invoke_m1371376568((unityAdsPurchasingGetProductCatalog_t1122116460 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetProductCatalog::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* unityAdsPurchasingGetProductCatalog_BeginInvoke_m3044659099 (unityAdsPurchasingGetProductCatalog_t1122116460 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetProductCatalog::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsPurchasingGetProductCatalog_EndInvoke_m600187654 (unityAdsPurchasingGetProductCatalog_t1122116460 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_unityAdsPurchasingGetPurchasingVersion_t1837383580 (unityAdsPurchasingGetPurchasingVersion_t1837383580 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetPurchasingVersion::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsPurchasingGetPurchasingVersion__ctor_m712419234 (unityAdsPurchasingGetPurchasingVersion_t1837383580 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetPurchasingVersion::Invoke()
extern "C"  void unityAdsPurchasingGetPurchasingVersion_Invoke_m899296300 (unityAdsPurchasingGetPurchasingVersion_t1837383580 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		unityAdsPurchasingGetPurchasingVersion_Invoke_m899296300((unityAdsPurchasingGetPurchasingVersion_t1837383580 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetPurchasingVersion::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* unityAdsPurchasingGetPurchasingVersion_BeginInvoke_m1894950600 (unityAdsPurchasingGetPurchasingVersion_t1837383580 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingGetPurchasingVersion::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsPurchasingGetPurchasingVersion_EndInvoke_m3829089521 (unityAdsPurchasingGetPurchasingVersion_t1837383580 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_unityAdsPurchasingInitialize_t3791088414 (unityAdsPurchasingInitialize_t3791088414 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingInitialize::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsPurchasingInitialize__ctor_m3181716181 (unityAdsPurchasingInitialize_t3791088414 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingInitialize::Invoke()
extern "C"  void unityAdsPurchasingInitialize_Invoke_m846324198 (unityAdsPurchasingInitialize_t3791088414 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		unityAdsPurchasingInitialize_Invoke_m846324198((unityAdsPurchasingInitialize_t3791088414 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingInitialize::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* unityAdsPurchasingInitialize_BeginInvoke_m3320293399 (unityAdsPurchasingInitialize_t3791088414 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsPurchasingInitialize::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsPurchasingInitialize_EndInvoke_m2918748693 (unityAdsPurchasingInitialize_t3791088414 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_unityAdsReady_t96934738 (unityAdsReady_t96934738 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsReady__ctor_m2857655779 (unityAdsReady_t96934738 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::Invoke(System.String)
extern "C"  void unityAdsReady_Invoke_m29849101 (unityAdsReady_t96934738 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		unityAdsReady_Invoke_m29849101((unityAdsReady_t96934738 *)__this->get_prev_9(), ___placementId0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___placementId0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___placementId0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___placementId0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsReady::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* unityAdsReady_BeginInvoke_m1534213290 (unityAdsReady_t96934738 * __this, String_t* ___placementId0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___placementId0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsReady_EndInvoke_m1454507724 (unityAdsReady_t96934738 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Advertisements.MetaData::get_category()
extern "C"  String_t* MetaData_get_category_m158841008 (MetaData_t2274729001 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CcategoryU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
extern "C"  void MetaData_set_category_m4092383434 (MetaData_t2274729001 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CcategoryU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
extern "C"  void MetaData__ctor_m3588377154 (MetaData_t2274729001 * __this, String_t* ___category0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaData__ctor_m3588377154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2987621751(L_0, /*hidden argument*/Dictionary_2__ctor_m2987621751_RuntimeMethod_var);
		__this->set_m_MetaData_0(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___category0;
		MetaData_set_category_m4092383434(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
extern "C"  void MetaData_Set_m623296862 (MetaData_t2274729001 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaData_Set_m623296862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		String_t* L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.String UnityEngine.Advertisements.MetaData::ToJSON()
extern "C"  String_t* MetaData_ToJSON_m4054959390 (MetaData_t2274729001 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		String_t* L_1 = Json_Serialize_m1959381348(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
// System.String UnityEngine.Advertisements.MiniJSON.Json::Serialize(System.Object)
extern "C"  String_t* Json_Serialize_m1959381348 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		String_t* L_1 = Serializer_Serialize_m960091899(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.MiniJSON.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m2586747667 (Serializer_t4281185815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer__ctor_m2586747667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		return;
	}
}
// System.String UnityEngine.Advertisements.MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m960091899 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_Serialize_m960091899_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Serializer_t4281185815 * L_0 = (Serializer_t4281185815 *)il2cpp_codegen_object_new(Serializer_t4281185815_il2cpp_TypeInfo_var);
		Serializer__ctor_m2586747667(L_0, /*hidden argument*/NULL);
		Serializer_t4281185815 * L_1 = L_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m4143112955(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_3 = L_1->get_builder_0();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void UnityEngine.Advertisements.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m4143112955 (Serializer_t4281185815 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeValue_m4143112955_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_Append_m1965104174(L_1, _stringLiteral1202628576, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___value0;
		String_t* L_3 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_4 = V_2;
		Serializer_SerializeString_m3607038265(__this, L_4, /*hidden argument*/NULL);
		return;
	}

IL_0027:
	{
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t * L_6 = __this->get_builder_0();
		RuntimeObject * L_7 = ___value0;
		G_B6_0 = L_6;
		if (((*(bool*)((bool*)UnBox(L_7, Boolean_t97287965_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_6;
			goto IL_0044;
		}
	}
	{
		G_B8_0 = _stringLiteral3875954633;
		G_B8_1 = G_B6_0;
		goto IL_0049;
	}

IL_0044:
	{
		G_B8_0 = _stringLiteral4002445229;
		G_B8_1 = G_B7_0;
	}

IL_0049:
	{
		NullCheck(G_B8_1);
		StringBuilder_Append_m1965104174(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		return;
	}

IL_0050:
	{
		RuntimeObject * L_8 = ___value0;
		RuntimeObject* L_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IList_t2094931216_il2cpp_TypeInfo_var));
		V_0 = L_9;
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeObject* L_10 = V_0;
		Serializer_SerializeArray_m3789406202(__this, L_10, /*hidden argument*/NULL);
		return;
	}

IL_0062:
	{
		RuntimeObject * L_11 = ___value0;
		RuntimeObject* L_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDictionary_t1363984059_il2cpp_TypeInfo_var));
		V_1 = L_12;
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		Serializer_SerializeObject_m3183982393(__this, L_13, /*hidden argument*/NULL);
		return;
	}

IL_0074:
	{
		RuntimeObject * L_14 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Char_t3634460470_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		RuntimeObject * L_15 = ___value0;
		String_t* L_16 = String_CreateString_m1262864254(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_15, Char_t3634460470_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_m3607038265(__this, L_16, /*hidden argument*/NULL);
		return;
	}

IL_008f:
	{
		RuntimeObject * L_17 = ___value0;
		Serializer_SerializeOther_m1218368759(__this, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m3183982393 (Serializer_t4281185815 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeObject_m3183982393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)123), /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_001e:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_0036;
			}
		}

IL_0028:
		{
			StringBuilder_t * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_Append_m2383614642(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0036:
		{
			RuntimeObject * L_8 = V_2;
			NullCheck(L_8);
			String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_SerializeString_m3607038265(__this, L_9, /*hidden argument*/NULL);
			StringBuilder_t * L_10 = __this->get_builder_0();
			NullCheck(L_10);
			StringBuilder_Append_m2383614642(L_10, ((int32_t)58), /*hidden argument*/NULL);
			RuntimeObject* L_11 = ___obj0;
			RuntimeObject * L_12 = V_2;
			NullCheck(L_11);
			RuntimeObject * L_13 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_SerializeValue_m4143112955(__this, L_13, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_005f:
		{
			RuntimeObject* L_14 = V_1;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_001e;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_17 = V_3;
			if (!L_17)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			RuntimeObject* L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_18);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(105)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007a:
	{
		StringBuilder_t * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_Append_m2383614642(L_19, ((int32_t)125), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m3789406202 (Serializer_t4281185815 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeArray_m3789406202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_1 = ___anArray0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0019:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
			V_2 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0031;
			}
		}

IL_0023:
		{
			StringBuilder_t * L_6 = __this->get_builder_0();
			NullCheck(L_6);
			StringBuilder_Append_m2383614642(L_6, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0031:
		{
			RuntimeObject * L_7 = V_2;
			Serializer_SerializeValue_m4143112955(__this, L_7, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_003a:
		{
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0019;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_11 = V_3;
			if (!L_11)
			{
				goto IL_0054;
			}
		}

IL_004e:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_12);
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0055:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m2383614642(L_13, ((int32_t)93), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m3607038265 (Serializer_t4281185815 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeString_m3607038265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		CharU5BU5D_t3528271667* L_2 = String_ToCharArray_m1492846834(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_012d;
	}

IL_001c:
	{
		CharU5BU5D_t3528271667* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_00a7;
			}
			case 3:
			{
				goto IL_00e0;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00ba;
			}
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00e0;
	}

IL_004f:
	{
		StringBuilder_t * L_10 = __this->get_builder_0();
		NullCheck(L_10);
		StringBuilder_Append_m1965104174(L_10, _stringLiteral3450386420, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_0065:
	{
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_Append_m1965104174(L_11, _stringLiteral3458119668, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_007b:
	{
		StringBuilder_t * L_12 = __this->get_builder_0();
		NullCheck(L_12);
		StringBuilder_Append_m1965104174(L_12, _stringLiteral3454580724, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_0091:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m1965104174(L_13, _stringLiteral3454318580, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_00a7:
	{
		StringBuilder_t * L_14 = __this->get_builder_0();
		NullCheck(L_14);
		StringBuilder_Append_m1965104174(L_14, _stringLiteral3454842868, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_00ba:
	{
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_Append_m1965104174(L_15, _stringLiteral3455629300, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_00cd:
	{
		StringBuilder_t * L_16 = __this->get_builder_0();
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, _stringLiteral3455498228, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_00e0:
	{
		Il2CppChar L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_18 = Convert_ToInt32_m1876369743(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)32))))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)126))))
		{
			goto IL_0100;
		}
	}
	{
		StringBuilder_t * L_21 = __this->get_builder_0();
		Il2CppChar L_22 = V_2;
		NullCheck(L_21);
		StringBuilder_Append_m2383614642(L_21, L_22, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_0100:
	{
		StringBuilder_t * L_23 = __this->get_builder_0();
		NullCheck(L_23);
		StringBuilder_Append_m1965104174(L_23, _stringLiteral3455432692, /*hidden argument*/NULL);
		StringBuilder_t * L_24 = __this->get_builder_0();
		String_t* L_25 = Int32_ToString_m372259452((int32_t*)(&V_3), _stringLiteral3451303896, /*hidden argument*/NULL);
		NullCheck(L_24);
		StringBuilder_Append_m1965104174(L_24, L_25, /*hidden argument*/NULL);
	}

IL_0129:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_012d:
	{
		int32_t L_27 = V_1;
		CharU5BU5D_t3528271667* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t * L_29 = __this->get_builder_0();
		NullCheck(L_29);
		StringBuilder_Append_m2383614642(L_29, ((int32_t)34), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m1218368759 (Serializer_t4281185815 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeOther_m1218368759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_002d;
		}
	}
	{
		StringBuilder_t * L_1 = __this->get_builder_0();
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(float*)((float*)UnBox(L_2, Single_t1397266774_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_3 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = Single_ToString_m543431371((float*)(&V_0), _stringLiteral3452614638, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m1965104174(L_1, L_4, /*hidden argument*/NULL);
		return;
	}

IL_002d:
	{
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, SByte_t1669577662_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Byte_t1134296376_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Int16_t2552820387_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_11 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, UInt16_t2177724958_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_12 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_007b;
		}
	}

IL_006d:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		RuntimeObject * L_14 = ___value0;
		NullCheck(L_13);
		StringBuilder_Append_m1640838743(L_13, L_14, /*hidden argument*/NULL);
		return;
	}

IL_007b:
	{
		RuntimeObject * L_15 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject * L_16 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_16, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}

IL_008b:
	{
		StringBuilder_t * L_17 = __this->get_builder_0();
		RuntimeObject * L_18 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_19 = Convert_ToDouble_m4025515304(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_20 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_21 = Double_ToString_m1051753975((double*)(&V_1), _stringLiteral3452614638, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		StringBuilder_Append_m1965104174(L_17, L_21, /*hidden argument*/NULL);
		return;
	}

IL_00b0:
	{
		RuntimeObject * L_22 = ___value0;
		NullCheck(L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		Serializer_SerializeString_m3607038265(__this, L_23, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.Advertisements.Purchasing::Initialize(UnityEngine.Advertisements.IPurchasingEventSender)
extern "C"  bool Purchasing_Initialize_m2991467968 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___platform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Purchasing_Initialize_m2991467968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t1355674289_il2cpp_TypeInfo_var);
		bool L_0 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_Initialized_1();
		if (L_0)
		{
			goto IL_007d;
		}
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t1355674289_il2cpp_TypeInfo_var);
		String_t* L_1 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_PurchasingManagerClassName_5();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m3605423543, L_1, (bool)1, "UnityEngine.Advertisements.iOS, Version=2.0.6687.20642, Culture=neutral, PublicKeyToken=null");
		((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->set_s_PurchasingManagerType_0(L_2);
		Type_t * L_3 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		String_t* L_4 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_PurchasingInitiatePurchaseMethodName_6();
		TypeU5BU5D_t3940880105* L_5 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_7);
		NullCheck(L_3);
		MethodInfo_t * L_8 = Type_GetMethod_m1479779718(L_3, L_4, L_5, /*hidden argument*/NULL);
		((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->set_s_PurchasingInitiatePurchaseMethodInfo_2(L_8);
		Type_t * L_9 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		String_t* L_10 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoVersionMethodName_7();
		NullCheck(L_9);
		MethodInfo_t * L_11 = Type_GetMethod_m2019726356(L_9, L_10, /*hidden argument*/NULL);
		((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->set_s_PurchasingGetPromoVersionMethodInfo_3(L_11);
		Type_t * L_12 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		String_t* L_13 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoCatalogMethodName_8();
		NullCheck(L_12);
		MethodInfo_t * L_14 = Type_GetMethod_m2019726356(L_12, L_13, /*hidden argument*/NULL);
		((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->set_s_PurchasingGetPromoCatalogMethodInfo_4(L_14);
		goto IL_0071;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0068;
		throw e;
	}

CATCH_0068:
	{ // begin catch(System.Exception)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogException_m2207318968(NULL /*static, unused*/, ((Exception_t *)__exception_local), /*hidden argument*/NULL);
		V_0 = (bool)0;
		goto IL_0083;
	} // end catch (depth: 1)

IL_0071:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t1355674289_il2cpp_TypeInfo_var);
		((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->set_s_Initialized_1((bool)1);
		RuntimeObject* L_15 = ___platform0;
		((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->set_s_Platform_9(L_15);
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t1355674289_il2cpp_TypeInfo_var);
		bool L_16 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_Initialized_1();
		return L_16;
	}

IL_0083:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Boolean UnityEngine.Advertisements.Purchasing::InitiatePurchasingCommand(System.String)
extern "C"  bool Purchasing_InitiatePurchasingCommand_m2709730589 (RuntimeObject * __this /* static, unused */, String_t* ___eventString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Purchasing_InitiatePurchasingCommand_m2709730589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t1355674289_il2cpp_TypeInfo_var);
		MethodInfo_t * L_0 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_PurchasingInitiatePurchaseMethodInfo_2();
		if (!L_0)
		{
			goto IL_0033;
		}
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t1355674289_il2cpp_TypeInfo_var);
		MethodInfo_t * L_1 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_PurchasingInitiatePurchaseMethodInfo_2();
		Type_t * L_2 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		StringU5BU5D_t1281789340* L_3 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_4 = ___eventString0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		NullCheck(L_1);
		RuntimeObject * L_5 = MethodBase_Invoke_m1776411915(L_1, L_2, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)L_3, /*hidden argument*/NULL);
		V_0 = ((*(bool*)((bool*)UnBox(L_5, Boolean_t97287965_il2cpp_TypeInfo_var))));
		goto IL_0033;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Exception)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogException_m2207318968(NULL /*static, unused*/, ((Exception_t *)__exception_local), /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_0035;
	} // end catch (depth: 1)

IL_0033:
	{
		bool L_6 = V_0;
		return L_6;
	}

IL_0035:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.String UnityEngine.Advertisements.Purchasing::GetPurchasingCatalog()
extern "C"  String_t* Purchasing_GetPurchasingCatalog_m716646145 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Purchasing_GetPurchasingCatalog_m716646145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		V_0 = _stringLiteral757602046;
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t1355674289_il2cpp_TypeInfo_var);
		MethodInfo_t * L_0 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoCatalogMethodInfo_4();
		if (!L_0)
		{
			goto IL_002c;
		}
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t1355674289_il2cpp_TypeInfo_var);
		MethodInfo_t * L_1 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoCatalogMethodInfo_4();
		Type_t * L_2 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		NullCheck(L_1);
		RuntimeObject * L_3 = MethodBase_Invoke_m1776411915(L_1, L_2, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL, /*hidden argument*/NULL);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		goto IL_002c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0025;
		throw e;
	}

CATCH_0025:
	{ // begin catch(System.Exception)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogException_m2207318968(NULL /*static, unused*/, ((Exception_t *)__exception_local), /*hidden argument*/NULL);
		goto IL_002c;
	} // end catch (depth: 1)

IL_002c:
	{
		String_t* L_4 = V_0;
		String_t* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = _stringLiteral1602229408;
	}

IL_0036:
	{
		return G_B5_0;
	}
}
// System.String UnityEngine.Advertisements.Purchasing::GetPromoVersion()
extern "C"  String_t* Purchasing_GetPromoVersion_m1709726025 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Purchasing_GetPromoVersion_m1709726025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		V_0 = _stringLiteral757602046;
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t1355674289_il2cpp_TypeInfo_var);
		MethodInfo_t * L_0 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoVersionMethodInfo_3();
		if (!L_0)
		{
			goto IL_002c;
		}
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t1355674289_il2cpp_TypeInfo_var);
		MethodInfo_t * L_1 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoVersionMethodInfo_3();
		Type_t * L_2 = ((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		NullCheck(L_1);
		RuntimeObject * L_3 = MethodBase_Invoke_m1776411915(L_1, L_2, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL, /*hidden argument*/NULL);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		goto IL_002c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0025;
		throw e;
	}

CATCH_0025:
	{ // begin catch(System.Exception)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogException_m2207318968(NULL /*static, unused*/, ((Exception_t *)__exception_local), /*hidden argument*/NULL);
		goto IL_002c;
	} // end catch (depth: 1)

IL_002c:
	{
		String_t* L_4 = V_0;
		String_t* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = _stringLiteral1602229408;
	}

IL_0036:
	{
		return G_B5_0;
	}
}
// System.Void UnityEngine.Advertisements.Purchasing::.cctor()
extern "C"  void Purchasing__cctor_m4131186914 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Purchasing__cctor_m4131186914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->set_s_PurchasingManagerClassName_5(_stringLiteral2293912210);
		((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->set_s_PurchasingInitiatePurchaseMethodName_6(_stringLiteral3003557153);
		((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->set_s_PurchasingGetPromoVersionMethodName_7(_stringLiteral1902402919);
		((Purchasing_t1355674289_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t1355674289_il2cpp_TypeInfo_var))->set_s_PurchasingGetPromoCatalogMethodName_8(_stringLiteral2730531857);
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
// System.Void UnityEngine.Advertisements.ReadyEventArgs::set_placementId(System.String)
extern "C"  void ReadyEventArgs_set_placementId_m248412853 (ReadyEventArgs_t549087536 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.ReadyEventArgs::.ctor(System.String)
extern "C"  void ReadyEventArgs__ctor_m4282028464 (ReadyEventArgs_t549087536 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadyEventArgs__ctor_m4282028464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___placementId0;
		ReadyEventArgs_set_placementId_m248412853(__this, L_0, /*hidden argument*/NULL);
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
// System.Action`1<UnityEngine.Advertisements.ShowResult> UnityEngine.Advertisements.ShowOptions::get_resultCallback()
extern "C"  Action_1_t3243021218 * ShowOptions_get_resultCallback_m175972177 (ShowOptions_t990845000 * __this, const RuntimeMethod* method)
{
	{
		Action_1_t3243021218 * L_0 = __this->get_U3CresultCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.ShowOptions::set_resultCallback(System.Action`1<UnityEngine.Advertisements.ShowResult>)
extern "C"  void ShowOptions_set_resultCallback_m563696943 (ShowOptions_t990845000 * __this, Action_1_t3243021218 * ___value0, const RuntimeMethod* method)
{
	{
		Action_1_t3243021218 * L_0 = ___value0;
		__this->set_U3CresultCallbackU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
extern "C"  String_t* ShowOptions_get_gamerSid_m237075789 (ShowOptions_t990845000 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CgamerSidU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.ShowOptions::.ctor()
extern "C"  void ShowOptions__ctor_m2703846873 (ShowOptions_t990845000 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.StartEventArgs::set_placementId(System.String)
extern "C"  void StartEventArgs_set_placementId_m4220717764 (StartEventArgs_t4291826435 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.StartEventArgs::.ctor(System.String)
extern "C"  void StartEventArgs__ctor_m3416358600 (StartEventArgs_t4291826435 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StartEventArgs__ctor_m3416358600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___placementId0;
		StartEventArgs_set_placementId_m4220717764(__this, L_0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void UnsupportedPlatform_add_OnStart_m3916923973 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void UnsupportedPlatform_remove_OnStart_m2602049778 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void UnsupportedPlatform_add_OnFinish_m1259096882 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnsupportedPlatform_add_OnFinish_m1259096882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	EventHandler_1_t908338235 * V_2 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 * L_2 = V_1;
		EventHandler_1_t908338235 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t908338235_il2cpp_TypeInfo_var));
		EventHandler_1_t908338235 ** L_5 = __this->get_address_of_OnFinish_0();
		EventHandler_1_t908338235 * L_6 = V_2;
		EventHandler_1_t908338235 * L_7 = V_1;
		EventHandler_1_t908338235 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>((EventHandler_1_t908338235 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t908338235 * L_9 = V_0;
		EventHandler_1_t908338235 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_9) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void UnsupportedPlatform_remove_OnFinish_m2547095395 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnsupportedPlatform_remove_OnFinish_m2547095395_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	EventHandler_1_t908338235 * V_2 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 * L_2 = V_1;
		EventHandler_1_t908338235 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t908338235_il2cpp_TypeInfo_var));
		EventHandler_1_t908338235 ** L_5 = __this->get_address_of_OnFinish_0();
		EventHandler_1_t908338235 * L_6 = V_2;
		EventHandler_1_t908338235 * L_7 = V_1;
		EventHandler_1_t908338235 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>((EventHandler_1_t908338235 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t908338235 * L_9 = V_0;
		EventHandler_1_t908338235 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_9) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::get_isSupported()
extern "C"  bool UnsupportedPlatform_get_isSupported_m3271074788 (UnsupportedPlatform_t2036049172 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.String UnityEngine.Advertisements.UnsupportedPlatform::get_version()
extern "C"  String_t* UnsupportedPlatform_get_version_m782979009 (UnsupportedPlatform_t2036049172 * __this, const RuntimeMethod* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::Initialize(System.String,System.Boolean)
extern "C"  void UnsupportedPlatform_Initialize_m2845201769 (UnsupportedPlatform_t2036049172 * __this, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::IsReady(System.String)
extern "C"  bool UnsupportedPlatform_IsReady_m1862939425 (UnsupportedPlatform_t2036049172 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::Show(System.String)
extern "C"  void UnsupportedPlatform_Show_m3910022718 (UnsupportedPlatform_t2036049172 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnsupportedPlatform_Show_m3910022718_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_0();
		V_0 = L_0;
		EventHandler_1_t908338235 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_t908338235 * L_2 = V_0;
		String_t* L_3 = ___placementId0;
		FinishEventArgs_t2984178802 * L_4 = (FinishEventArgs_t2984178802 *)il2cpp_codegen_object_new(FinishEventArgs_t2984178802_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_m911455770(L_4, L_3, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_m3511014384(L_2, __this, L_4, /*hidden argument*/EventHandler_1_Invoke_m3511014384_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void UnsupportedPlatform_SetMetaData_m1177914817 (UnsupportedPlatform_t2036049172 * __this, MetaData_t2274729001 * ___metaData0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::.ctor()
extern "C"  void UnsupportedPlatform__ctor_m3723506342 (UnsupportedPlatform_t2036049172 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
