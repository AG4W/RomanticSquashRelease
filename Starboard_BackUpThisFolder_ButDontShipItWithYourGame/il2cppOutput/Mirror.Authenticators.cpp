#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Mirror.Authenticators.BasicAuthenticator
struct BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mirror.NetworkIdentity
struct NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Mirror.Authenticators.TimeoutAuthenticator
struct TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01;
// Mirror.UnityEventNetworkConnection
struct UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__10
struct U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F;
// Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage
struct AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776;
// Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage
struct AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00;
// Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__8
struct U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED;
// System.Action`2<Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>
struct Action_2_t4FCD057DEA084BDCF73796A840BCBF443F511B3B;
// System.Action`2<Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>
struct Action_2_tAA25D2C25C17F486D49E922A65351E74A5E6A1DA;
// System.Action`2<Mirror.NetworkConnection,System.Object>
struct Action_2_tA28EF8A679D2122A5F5AD0415D583100EF9115A0;
// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate>
struct Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB;
// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>
struct HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB;
// UnityEngine.Events.UnityAction`1<Mirror.NetworkConnection>
struct UnityAction_1_t685B094C929AB3D25EDC9C2314542B4D4EFCA5B3;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityEvent`1<Mirror.NetworkConnection>
struct UnityEvent_1_tDEA1B6C59295A6433F051E9DDC0533D03290C4B4;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.ILogger
struct ILogger_t25627AC5B51863702868D31972297B7D633B4583;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Mirror.MessageBase
struct MessageBase_t01317AB1C42AAD54FF16B5AE93DE52B1247F07EE;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Mirror.NetworkAuthenticator
struct NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF;
// Mirror.NetworkConnection
struct NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311;
// Mirror.NetworkReader
struct NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9;
// Mirror.NetworkWriter
struct NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t4FCD057DEA084BDCF73796A840BCBF443F511B3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tAA25D2C25C17F486D49E922A65351E74A5E6A1DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogFactory_t359C989285E6F62B9F073C5F0F5FA52BAB518DB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t685B094C929AB3D25EDC9C2314542B4D4EFCA5B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral25F2B5660AD9F858DF7E4E7FB77564515F1BB85A;
IL2CPP_EXTERN_C String_t* _stringLiteral3343D6CAD1535DA9B204B8AE2A2076276A66E0A0;
IL2CPP_EXTERN_C String_t* _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890;
IL2CPP_EXTERN_C String_t* _stringLiteralA78258E832AE47617F6E4694836283281DB4B400;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6413F4C1B57BBCDE4356C33871D8839840581A;
IL2CPP_EXTERN_C String_t* _stringLiteralFF8A73F0275FEAAA951E4B262B577DFF18A148E9;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mB3879BD18B01DCF329EC6F1657A3E744F91B9B72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mD416DB1799DB9E0805C6E0074D92287EDF1CC2CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicAuthenticator_OnAuthRequestMessage_m1A9C48BE69F6671C25652DB912BDE6374F776A53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicAuthenticator_OnAuthResponseMessage_m1E2CC71611849A905F3A0FCCF6438497EDBAF6ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkClient_RegisterHandler_TisAuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00_m7F304B5619A0A8EE7E11D79A016A53C66CA90501_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkConnection_Send_TisAuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776_mB02FFC52CDFAF9B456AA46FED28550916AF6E4EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkConnection_Send_TisAuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00_m631A3426C784AEFD8682AEA5B59E7CABADE4C191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkServer_RegisterHandler_TisAuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776_m92B0E43E82BDC94A893455D39188D6780B92986B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeoutAuthenticator_U3CAwakeU3Eb__3_0_m7B1E106DDC30F541623591284FC35672A9067F9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeoutAuthenticator_U3CAwakeU3Eb__3_1_m8EF85EA02F1CEE32EE0A356AD079D63A62319202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBeginAuthenticationU3Ed__8_System_Collections_IEnumerator_Reset_mDD9B4721D709940004DFA72D72C6FCBB8C96DD57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedDisconnectU3Ed__10_System_Collections_IEnumerator_Reset_mE6B769C1A8BDC3FE65428A365D83CA546F53C7C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_mB8D0881BCC62180D8A6C656EFEE41683BA78C847_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB8851C9DCA50537CE8D25F6764A9FADE6480F961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m618B36B283E2DB6AD28CBFDD307D9F834FA6FE6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AuthRequestMessage_Deserialize_mF5974938BF37ADD3ED7F6BD54C59C75ADF94BE4C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AuthRequestMessage_Serialize_m321E1FC839D5C1C9308605951DD0489C2E090544_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AuthResponseMessage_Deserialize_mDBE7A4D782F0F2DFFBDBDB589A0C2EFCF69EA259_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AuthResponseMessage_Serialize_m9F7CBE4F9BE7D9AFE663AF3274525BD277743421_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_DelayedDisconnect_mBCC23E41D1522953B672699D1C4EE51E52C7D409_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnAuthRequestMessage_m1A9C48BE69F6671C25652DB912BDE6374F776A53_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnAuthResponseMessage_m1E2CC71611849A905F3A0FCCF6438497EDBAF6ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnClientAuthenticate_m59558C67D17DF1B1CA346509AB6DD43897C826B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnStartClient_m24A2E359E117DDE83A58BAFB2DBB3DC5CFFBD703_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnStartServer_m961AA4DFA523BFA6C3373EF705546ED3A7814D27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator__cctor_mAC6679CF2B75F8300AE57BA957934C9089E19103_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeoutAuthenticator_Awake_m79C844E9B26BA045DAD194C312CEBCA11A6AA258_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeoutAuthenticator_BeginAuthentication_mE508C72DF9DF550B8E0A4EF0FEC0A269659F958F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeoutAuthenticator_U3CAwakeU3Eb__3_0_m7B1E106DDC30F541623591284FC35672A9067F9D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeoutAuthenticator_U3CAwakeU3Eb__3_1_m8EF85EA02F1CEE32EE0A356AD079D63A62319202_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeoutAuthenticator__cctor_m17383F364ACB88826E8D0C3D22A5FFBDF7300AED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CBeginAuthenticationU3Ed__8_MoveNext_m1CCE4C2CCB0AC34E91CD0C813E71637E0A41DA85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CBeginAuthenticationU3Ed__8_System_Collections_IEnumerator_Reset_mDD9B4721D709940004DFA72D72C6FCBB8C96DD57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDelayedDisconnectU3Ed__10_MoveNext_m068A6EB38E0A100CE7FD4CB581FE91232102AD9B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDelayedDisconnectU3Ed__10_System_Collections_IEnumerator_Reset_mE6B769C1A8BDC3FE65428A365D83CA546F53C7C9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tE71D999FC4810E1412D290032139B743CF6651EC 
{
public:

public:
};


// System.Object


// Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10
struct  U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::waitTime
	float ___waitTime_2;
	// Mirror.NetworkConnection Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::conn
	NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_waitTime_2() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F, ___waitTime_2)); }
	inline float get_waitTime_2() const { return ___waitTime_2; }
	inline float* get_address_of_waitTime_2() { return &___waitTime_2; }
	inline void set_waitTime_2(float value)
	{
		___waitTime_2 = value;
	}

	inline static int32_t get_offset_of_conn_3() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F, ___conn_3)); }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * get_conn_3() const { return ___conn_3; }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 ** get_address_of_conn_3() { return &___conn_3; }
	inline void set_conn_3(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * value)
	{
		___conn_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conn_3), (void*)value);
	}
};


// Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__8
struct  U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.NetworkConnection Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__8::conn
	NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn_2;
	// Mirror.Authenticators.TimeoutAuthenticator Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__8::<>4__this
	TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_conn_2() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED, ___conn_2)); }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * get_conn_2() const { return ___conn_2; }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 ** get_address_of_conn_2() { return &___conn_2; }
	inline void set_conn_2(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * value)
	{
		___conn_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conn_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED, ___U3CU3E4__this_3)); }
	inline TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Mirror.MessageBase
struct  MessageBase_t01317AB1C42AAD54FF16B5AE93DE52B1247F07EE  : public RuntimeObject
{
public:

public:
};


// Mirror.NetworkConnection
struct  NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnection::visList
	HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * ___visList_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate> Mirror.NetworkConnection::messageHandlers
	Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB * ___messageHandlers_3;
	// System.Int32 Mirror.NetworkConnection::connectionId
	int32_t ___connectionId_4;
	// System.Boolean Mirror.NetworkConnection::isAuthenticated
	bool ___isAuthenticated_5;
	// System.Object Mirror.NetworkConnection::authenticationData
	RuntimeObject * ___authenticationData_6;
	// System.Boolean Mirror.NetworkConnection::isReady
	bool ___isReady_7;
	// System.Single Mirror.NetworkConnection::lastMessageTime
	float ___lastMessageTime_8;
	// Mirror.NetworkIdentity Mirror.NetworkConnection::<identity>k__BackingField
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___U3CidentityU3Ek__BackingField_9;
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnection::clientOwnedObjects
	HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * ___clientOwnedObjects_10;
	// System.Boolean Mirror.NetworkConnection::logNetworkMessages
	bool ___logNetworkMessages_11;

public:
	inline static int32_t get_offset_of_visList_2() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___visList_2)); }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * get_visList_2() const { return ___visList_2; }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB ** get_address_of_visList_2() { return &___visList_2; }
	inline void set_visList_2(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * value)
	{
		___visList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visList_2), (void*)value);
	}

	inline static int32_t get_offset_of_messageHandlers_3() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___messageHandlers_3)); }
	inline Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB * get_messageHandlers_3() const { return ___messageHandlers_3; }
	inline Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB ** get_address_of_messageHandlers_3() { return &___messageHandlers_3; }
	inline void set_messageHandlers_3(Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB * value)
	{
		___messageHandlers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageHandlers_3), (void*)value);
	}

	inline static int32_t get_offset_of_connectionId_4() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___connectionId_4)); }
	inline int32_t get_connectionId_4() const { return ___connectionId_4; }
	inline int32_t* get_address_of_connectionId_4() { return &___connectionId_4; }
	inline void set_connectionId_4(int32_t value)
	{
		___connectionId_4 = value;
	}

	inline static int32_t get_offset_of_isAuthenticated_5() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___isAuthenticated_5)); }
	inline bool get_isAuthenticated_5() const { return ___isAuthenticated_5; }
	inline bool* get_address_of_isAuthenticated_5() { return &___isAuthenticated_5; }
	inline void set_isAuthenticated_5(bool value)
	{
		___isAuthenticated_5 = value;
	}

	inline static int32_t get_offset_of_authenticationData_6() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___authenticationData_6)); }
	inline RuntimeObject * get_authenticationData_6() const { return ___authenticationData_6; }
	inline RuntimeObject ** get_address_of_authenticationData_6() { return &___authenticationData_6; }
	inline void set_authenticationData_6(RuntimeObject * value)
	{
		___authenticationData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authenticationData_6), (void*)value);
	}

	inline static int32_t get_offset_of_isReady_7() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___isReady_7)); }
	inline bool get_isReady_7() const { return ___isReady_7; }
	inline bool* get_address_of_isReady_7() { return &___isReady_7; }
	inline void set_isReady_7(bool value)
	{
		___isReady_7 = value;
	}

	inline static int32_t get_offset_of_lastMessageTime_8() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___lastMessageTime_8)); }
	inline float get_lastMessageTime_8() const { return ___lastMessageTime_8; }
	inline float* get_address_of_lastMessageTime_8() { return &___lastMessageTime_8; }
	inline void set_lastMessageTime_8(float value)
	{
		___lastMessageTime_8 = value;
	}

	inline static int32_t get_offset_of_U3CidentityU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___U3CidentityU3Ek__BackingField_9)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_U3CidentityU3Ek__BackingField_9() const { return ___U3CidentityU3Ek__BackingField_9; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_U3CidentityU3Ek__BackingField_9() { return &___U3CidentityU3Ek__BackingField_9; }
	inline void set_U3CidentityU3Ek__BackingField_9(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___U3CidentityU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidentityU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_clientOwnedObjects_10() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___clientOwnedObjects_10)); }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * get_clientOwnedObjects_10() const { return ___clientOwnedObjects_10; }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB ** get_address_of_clientOwnedObjects_10() { return &___clientOwnedObjects_10; }
	inline void set_clientOwnedObjects_10(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * value)
	{
		___clientOwnedObjects_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientOwnedObjects_10), (void*)value);
	}

	inline static int32_t get_offset_of_logNetworkMessages_11() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___logNetworkMessages_11)); }
	inline bool get_logNetworkMessages_11() const { return ___logNetworkMessages_11; }
	inline bool* get_address_of_logNetworkMessages_11() { return &___logNetworkMessages_11; }
	inline void set_logNetworkMessages_11(bool value)
	{
		___logNetworkMessages_11 = value;
	}
};

struct NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.NetworkConnection::logger
	RuntimeObject* ___logger_1;

public:
	inline static int32_t get_offset_of_logger_1() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311_StaticFields, ___logger_1)); }
	inline RuntimeObject* get_logger_1() const { return ___logger_1; }
	inline RuntimeObject** get_address_of_logger_1() { return &___logger_1; }
	inline void set_logger_1(RuntimeObject* value)
	{
		___logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_1), (void*)value);
	}
};


// Mirror.NetworkWriter
struct  NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A  : public RuntimeObject
{
public:
	// System.Byte[] Mirror.NetworkWriter::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_1;
	// System.Int32 Mirror.NetworkWriter::position
	int32_t ___position_2;
	// System.Int32 Mirror.NetworkWriter::length
	int32_t ___length_3;

public:
	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A, ___buffer_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A, ___position_2)); }
	inline int32_t get_position_2() const { return ___position_2; }
	inline int32_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(int32_t value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_length_3() { return static_cast<int32_t>(offsetof(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A, ___length_3)); }
	inline int32_t get_length_3() const { return ___length_3; }
	inline int32_t* get_address_of_length_3() { return &___length_3; }
	inline void set_length_3(int32_t value)
	{
		___length_3 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Mirror.Authenticators.BasicAuthenticator_AuthRequestMessage
struct  AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776  : public MessageBase_t01317AB1C42AAD54FF16B5AE93DE52B1247F07EE
{
public:
	// System.String Mirror.Authenticators.BasicAuthenticator_AuthRequestMessage::authUsername
	String_t* ___authUsername_0;
	// System.String Mirror.Authenticators.BasicAuthenticator_AuthRequestMessage::authPassword
	String_t* ___authPassword_1;

public:
	inline static int32_t get_offset_of_authUsername_0() { return static_cast<int32_t>(offsetof(AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776, ___authUsername_0)); }
	inline String_t* get_authUsername_0() const { return ___authUsername_0; }
	inline String_t** get_address_of_authUsername_0() { return &___authUsername_0; }
	inline void set_authUsername_0(String_t* value)
	{
		___authUsername_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authUsername_0), (void*)value);
	}

	inline static int32_t get_offset_of_authPassword_1() { return static_cast<int32_t>(offsetof(AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776, ___authPassword_1)); }
	inline String_t* get_authPassword_1() const { return ___authPassword_1; }
	inline String_t** get_address_of_authPassword_1() { return &___authPassword_1; }
	inline void set_authPassword_1(String_t* value)
	{
		___authPassword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authPassword_1), (void*)value);
	}
};


// Mirror.Authenticators.BasicAuthenticator_AuthResponseMessage
struct  AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00  : public MessageBase_t01317AB1C42AAD54FF16B5AE93DE52B1247F07EE
{
public:
	// System.Byte Mirror.Authenticators.BasicAuthenticator_AuthResponseMessage::code
	uint8_t ___code_0;
	// System.String Mirror.Authenticators.BasicAuthenticator_AuthResponseMessage::message
	String_t* ___message_1;

public:
	inline static int32_t get_offset_of_code_0() { return static_cast<int32_t>(offsetof(AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00, ___code_0)); }
	inline uint8_t get_code_0() const { return ___code_0; }
	inline uint8_t* get_address_of_code_0() { return &___code_0; }
	inline void set_code_0(uint8_t value)
	{
		___code_0 = value;
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}
};


// System.ArraySegment`1<System.Byte>
struct  ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Events.UnityEvent`1<Mirror.NetworkConnection>
struct  UnityEvent_1_tDEA1B6C59295A6433F051E9DDC0533D03290C4B4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tDEA1B6C59295A6433F051E9DDC0533D03290C4B4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// Mirror.NetworkReader
struct  NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9  : public RuntimeObject
{
public:
	// System.ArraySegment`1<System.Byte> Mirror.NetworkReader::buffer
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___buffer_0;
	// System.Int32 Mirror.NetworkReader::Position
	int32_t ___Position_1;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9, ___buffer_0)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_buffer_0() const { return ___buffer_0; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___buffer_0))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9, ___Position_1)); }
	inline int32_t get_Position_1() const { return ___Position_1; }
	inline int32_t* get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(int32_t value)
	{
		___Position_1 = value;
	}
};


// Mirror.UnityEventNetworkConnection
struct  UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB  : public UnityEvent_1_tDEA1B6C59295A6433F051E9DDC0533D03290C4B4
{
public:

public:
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.LogType
struct  LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Action`2<Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator_AuthRequestMessage>
struct  Action_2_t4FCD057DEA084BDCF73796A840BCBF443F511B3B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator_AuthResponseMessage>
struct  Action_2_tAA25D2C25C17F486D49E922A65351E74A5E6A1DA  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<Mirror.NetworkConnection>
struct  UnityAction_1_t685B094C929AB3D25EDC9C2314542B4D4EFCA5B3  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Mirror.NetworkAuthenticator
struct  NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Mirror.UnityEventNetworkConnection Mirror.NetworkAuthenticator::OnServerAuthenticated
	UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB * ___OnServerAuthenticated_4;
	// Mirror.UnityEventNetworkConnection Mirror.NetworkAuthenticator::OnClientAuthenticated
	UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB * ___OnClientAuthenticated_5;

public:
	inline static int32_t get_offset_of_OnServerAuthenticated_4() { return static_cast<int32_t>(offsetof(NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF, ___OnServerAuthenticated_4)); }
	inline UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB * get_OnServerAuthenticated_4() const { return ___OnServerAuthenticated_4; }
	inline UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB ** get_address_of_OnServerAuthenticated_4() { return &___OnServerAuthenticated_4; }
	inline void set_OnServerAuthenticated_4(UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB * value)
	{
		___OnServerAuthenticated_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerAuthenticated_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientAuthenticated_5() { return static_cast<int32_t>(offsetof(NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF, ___OnClientAuthenticated_5)); }
	inline UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB * get_OnClientAuthenticated_5() const { return ___OnClientAuthenticated_5; }
	inline UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB ** get_address_of_OnClientAuthenticated_5() { return &___OnClientAuthenticated_5; }
	inline void set_OnClientAuthenticated_5(UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB * value)
	{
		___OnClientAuthenticated_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientAuthenticated_5), (void*)value);
	}
};


// Mirror.Authenticators.BasicAuthenticator
struct  BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309  : public NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF
{
public:
	// System.String Mirror.Authenticators.BasicAuthenticator::username
	String_t* ___username_7;
	// System.String Mirror.Authenticators.BasicAuthenticator::password
	String_t* ___password_8;

public:
	inline static int32_t get_offset_of_username_7() { return static_cast<int32_t>(offsetof(BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309, ___username_7)); }
	inline String_t* get_username_7() const { return ___username_7; }
	inline String_t** get_address_of_username_7() { return &___username_7; }
	inline void set_username_7(String_t* value)
	{
		___username_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___username_7), (void*)value);
	}

	inline static int32_t get_offset_of_password_8() { return static_cast<int32_t>(offsetof(BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309, ___password_8)); }
	inline String_t* get_password_8() const { return ___password_8; }
	inline String_t** get_address_of_password_8() { return &___password_8; }
	inline void set_password_8(String_t* value)
	{
		___password_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___password_8), (void*)value);
	}
};

struct BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.Authenticators.BasicAuthenticator::logger
	RuntimeObject* ___logger_6;

public:
	inline static int32_t get_offset_of_logger_6() { return static_cast<int32_t>(offsetof(BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_StaticFields, ___logger_6)); }
	inline RuntimeObject* get_logger_6() const { return ___logger_6; }
	inline RuntimeObject** get_address_of_logger_6() { return &___logger_6; }
	inline void set_logger_6(RuntimeObject* value)
	{
		___logger_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_6), (void*)value);
	}
};


// Mirror.Authenticators.TimeoutAuthenticator
struct  TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01  : public NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF
{
public:
	// Mirror.NetworkAuthenticator Mirror.Authenticators.TimeoutAuthenticator::authenticator
	NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * ___authenticator_7;
	// System.Single Mirror.Authenticators.TimeoutAuthenticator::timeout
	float ___timeout_8;

public:
	inline static int32_t get_offset_of_authenticator_7() { return static_cast<int32_t>(offsetof(TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01, ___authenticator_7)); }
	inline NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * get_authenticator_7() const { return ___authenticator_7; }
	inline NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF ** get_address_of_authenticator_7() { return &___authenticator_7; }
	inline void set_authenticator_7(NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * value)
	{
		___authenticator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authenticator_7), (void*)value);
	}

	inline static int32_t get_offset_of_timeout_8() { return static_cast<int32_t>(offsetof(TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01, ___timeout_8)); }
	inline float get_timeout_8() const { return ___timeout_8; }
	inline float* get_address_of_timeout_8() { return &___timeout_8; }
	inline void set_timeout_8(float value)
	{
		___timeout_8 = value;
	}
};

struct TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.Authenticators.TimeoutAuthenticator::logger
	RuntimeObject* ___logger_6;

public:
	inline static int32_t get_offset_of_logger_6() { return static_cast<int32_t>(offsetof(TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_StaticFields, ___logger_6)); }
	inline RuntimeObject* get_logger_6() const { return ___logger_6; }
	inline RuntimeObject** get_address_of_logger_6() { return &___logger_6; }
	inline void set_logger_6(RuntimeObject* value)
	{
		___logger_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mirror.NetworkServer::RegisterHandler<System.Object>(System.Action`2<Mirror.NetworkConnection,!!0>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_RegisterHandler_TisRuntimeObject_m87676C2BF35942F8EF74F8FCDD790C669CC305B1_gshared (Action_2_tA28EF8A679D2122A5F5AD0415D583100EF9115A0 * ___handler0, bool ___requireAuthentication1, const RuntimeMethod* method);
// System.Void Mirror.NetworkClient::RegisterHandler<System.Object>(System.Action`2<Mirror.NetworkConnection,!!0>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkClient_RegisterHandler_TisRuntimeObject_m4C3B55113D1402939E2766B4570B9108FF51F5E8_gshared (Action_2_tA28EF8A679D2122A5F5AD0415D583100EF9115A0 * ___handler0, bool ___requireAuthentication1, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkConnection::Send<System.Object>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkConnection_Send_TisRuntimeObject_m9689B7C00B9CC5C7BDF5615A905FA3039B92B4B5_gshared (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * __this, RuntimeObject * ___msg0, int32_t ___channelId1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);

// System.Void System.Action`2<Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mB3879BD18B01DCF329EC6F1657A3E744F91B9B72 (Action_2_t4FCD057DEA084BDCF73796A840BCBF443F511B3B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4FCD057DEA084BDCF73796A840BCBF443F511B3B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Mirror.NetworkServer::RegisterHandler<Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>(System.Action`2<Mirror.NetworkConnection,!!0>,System.Boolean)
inline void NetworkServer_RegisterHandler_TisAuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776_m92B0E43E82BDC94A893455D39188D6780B92986B (Action_2_t4FCD057DEA084BDCF73796A840BCBF443F511B3B * ___handler0, bool ___requireAuthentication1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4FCD057DEA084BDCF73796A840BCBF443F511B3B *, bool, const RuntimeMethod*))NetworkServer_RegisterHandler_TisRuntimeObject_m87676C2BF35942F8EF74F8FCDD790C669CC305B1_gshared)(___handler0, ___requireAuthentication1, method);
}
// System.Void System.Action`2<Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mD416DB1799DB9E0805C6E0074D92287EDF1CC2CC (Action_2_tAA25D2C25C17F486D49E922A65351E74A5E6A1DA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tAA25D2C25C17F486D49E922A65351E74A5E6A1DA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Mirror.NetworkClient::RegisterHandler<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>(System.Action`2<Mirror.NetworkConnection,!!0>,System.Boolean)
inline void NetworkClient_RegisterHandler_TisAuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00_m7F304B5619A0A8EE7E11D79A016A53C66CA90501 (Action_2_tAA25D2C25C17F486D49E922A65351E74A5E6A1DA * ___handler0, bool ___requireAuthentication1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tAA25D2C25C17F486D49E922A65351E74A5E6A1DA *, bool, const RuntimeMethod*))NetworkClient_RegisterHandler_TisRuntimeObject_m4C3B55113D1402939E2766B4570B9108FF51F5E8_gshared)(___handler0, ___requireAuthentication1, method);
}
// System.Void Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthRequestMessage__ctor_m5F13A7C2C4486FEF1A89B2003C49593D57AF7B76 (AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkConnection::Send<Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>(!!0,System.Int32)
inline bool NetworkConnection_Send_TisAuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776_mB02FFC52CDFAF9B456AA46FED28550916AF6E4EB (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * __this, AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 * ___msg0, int32_t ___channelId1, const RuntimeMethod* method)
{
	return ((  bool (*) (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 *, int32_t, const RuntimeMethod*))NetworkConnection_Send_TisRuntimeObject_m9689B7C00B9CC5C7BDF5615A905FA3039B92B4B5_gshared)(__this, ___msg0, ___channelId1, method);
}
// System.Boolean Mirror.ILoggerExtensions::LogEnabled(UnityEngine.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILoggerExtensions_LogEnabled_m2FBC19416D6F64AA30164AA26A5D985B9C607E2B (RuntimeObject* ___logger0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthResponseMessage__ctor_m7660AC4C42258FDE84F712E8C98D15A853E02568 (AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkConnection::Send<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>(!!0,System.Int32)
inline bool NetworkConnection_Send_TisAuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00_m631A3426C784AEFD8682AEA5B59E7CABADE4C191 (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * __this, AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * ___msg0, int32_t ___channelId1, const RuntimeMethod* method)
{
	return ((  bool (*) (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 *, int32_t, const RuntimeMethod*))NetworkConnection_Send_TisRuntimeObject_m9689B7C00B9CC5C7BDF5615A905FA3039B92B4B5_gshared)(__this, ___msg0, ___channelId1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.NetworkConnection>::Invoke(!0)
inline void UnityEvent_1_Invoke_m618B36B283E2DB6AD28CBFDD307D9F834FA6FE6F (UnityEvent_1_tDEA1B6C59295A6433F051E9DDC0533D03290C4B4 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDEA1B6C59295A6433F051E9DDC0533D03290C4B4 *, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, const RuntimeMethod*))UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared)(__this, ___arg00, method);
}
// System.Collections.IEnumerator Mirror.Authenticators.BasicAuthenticator::DelayedDisconnect(Mirror.NetworkConnection,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BasicAuthenticator_DelayedDisconnect_mBCC23E41D1522953B672699D1C4EE51E52C7D409 (BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, float ___waitTime1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDisconnectU3Ed__10__ctor_m6299CB9147435AF1E9935046F47389169DFB417A (U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Mirror.NetworkAuthenticator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAuthenticator__ctor_m1EFE9D58997FA1E95FE79D6196AEBDE5CEC414E5 (NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.ILogger Mirror.LogFactory::GetLogger(System.Type,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogFactory_GetLogger_m1325F510684C0DEA3C16231F1D8EE10E9A55D5AC (Type_t * ___type0, int32_t ___defaultLogLevel1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Mirror.NetworkConnection>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mB8D0881BCC62180D8A6C656EFEE41683BA78C847 (UnityAction_1_t685B094C929AB3D25EDC9C2314542B4D4EFCA5B3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t685B094C929AB3D25EDC9C2314542B4D4EFCA5B3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.NetworkConnection>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mB8851C9DCA50537CE8D25F6764A9FADE6480F961 (UnityEvent_1_tDEA1B6C59295A6433F051E9DDC0533D03290C4B4 * __this, UnityAction_1_t685B094C929AB3D25EDC9C2314542B4D4EFCA5B3 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDEA1B6C59295A6433F051E9DDC0533D03290C4B4 *, UnityAction_1_t685B094C929AB3D25EDC9C2314542B4D4EFCA5B3 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// System.Collections.IEnumerator Mirror.Authenticators.TimeoutAuthenticator::BeginAuthentication(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeoutAuthenticator_BeginAuthentication_mE508C72DF9DF550B8E0A4EF0FEC0A269659F958F (TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, const RuntimeMethod* method);
// System.Void Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBeginAuthenticationU3Ed__8__ctor_mF82A685896AB829F0137DABB59C6730D7D5DDA55 (U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Mirror.MessageBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageBase__ctor_mDC9103481D5807FBF080F7D92B051ED5F642D916 (MessageBase_t01317AB1C42AAD54FF16B5AE93DE52B1247F07EE * __this, const RuntimeMethod* method);
// System.Void Mirror.MessageBase::Serialize(Mirror.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageBase_Serialize_m8E90590039280EE7EBA1A97D327DB02A2BB5D3A1 (MessageBase_t01317AB1C42AAD54FF16B5AE93DE52B1247F07EE * __this, NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteString(Mirror.NetworkWriter,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteString_m31C762A5BBACB77129E085AB7D7A9AEEB9ACA95F (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, String_t* ___value1, const RuntimeMethod* method);
// System.Void Mirror.MessageBase::Deserialize(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageBase_Deserialize_m62E25B8BBA1466111E1A2E65F971BB9CC63A2C09 (MessageBase_t01317AB1C42AAD54FF16B5AE93DE52B1247F07EE * __this, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.String Mirror.NetworkReaderExtensions::ReadString(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkReaderExtensions_ReadString_mA74E4612F529683A4AEEDB55C369CDEA32D222CC (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteByte(Mirror.NetworkWriter,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteByte_mFFEFC20C5AB176841BBBE10C1E4A866EAF369B96 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint8_t ___value1, const RuntimeMethod* method);
// System.Byte Mirror.NetworkReaderExtensions::ReadByte(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetworkReaderExtensions_ReadByte_m86E3D12D2C1E2C447A4C2F20B808117DAA69571C (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___time0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
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
// System.Void Mirror.Authenticators.BasicAuthenticator::OnStartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnStartServer_m961AA4DFA523BFA6C3373EF705546ED3A7814D27 (BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnStartServer_m961AA4DFA523BFA6C3373EF705546ED3A7814D27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkServer.RegisterHandler<AuthRequestMessage>(OnAuthRequestMessage, false);
		Action_2_t4FCD057DEA084BDCF73796A840BCBF443F511B3B * L_0 = (Action_2_t4FCD057DEA084BDCF73796A840BCBF443F511B3B *)il2cpp_codegen_object_new(Action_2_t4FCD057DEA084BDCF73796A840BCBF443F511B3B_il2cpp_TypeInfo_var);
		Action_2__ctor_mB3879BD18B01DCF329EC6F1657A3E744F91B9B72(L_0, __this, (intptr_t)((intptr_t)BasicAuthenticator_OnAuthRequestMessage_m1A9C48BE69F6671C25652DB912BDE6374F776A53_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mB3879BD18B01DCF329EC6F1657A3E744F91B9B72_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		NetworkServer_RegisterHandler_TisAuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776_m92B0E43E82BDC94A893455D39188D6780B92986B(L_0, (bool)0, /*hidden argument*/NetworkServer_RegisterHandler_TisAuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776_m92B0E43E82BDC94A893455D39188D6780B92986B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnStartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnStartClient_m24A2E359E117DDE83A58BAFB2DBB3DC5CFFBD703 (BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnStartClient_m24A2E359E117DDE83A58BAFB2DBB3DC5CFFBD703_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkClient.RegisterHandler<AuthResponseMessage>(OnAuthResponseMessage, false);
		Action_2_tAA25D2C25C17F486D49E922A65351E74A5E6A1DA * L_0 = (Action_2_tAA25D2C25C17F486D49E922A65351E74A5E6A1DA *)il2cpp_codegen_object_new(Action_2_tAA25D2C25C17F486D49E922A65351E74A5E6A1DA_il2cpp_TypeInfo_var);
		Action_2__ctor_mD416DB1799DB9E0805C6E0074D92287EDF1CC2CC(L_0, __this, (intptr_t)((intptr_t)BasicAuthenticator_OnAuthResponseMessage_m1E2CC71611849A905F3A0FCCF6438497EDBAF6ED_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mD416DB1799DB9E0805C6E0074D92287EDF1CC2CC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		NetworkClient_RegisterHandler_TisAuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00_m7F304B5619A0A8EE7E11D79A016A53C66CA90501(L_0, (bool)0, /*hidden argument*/NetworkClient_RegisterHandler_TisAuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00_m7F304B5619A0A8EE7E11D79A016A53C66CA90501_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnServerAuthenticate(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnServerAuthenticate_m7567485C9298592A51CCB5D9680821EDF81EE605 (BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnClientAuthenticate(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnClientAuthenticate_m59558C67D17DF1B1CA346509AB6DD43897C826B6 (BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnClientAuthenticate_m59558C67D17DF1B1CA346509AB6DD43897C826B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 * V_0 = NULL;
	{
		// AuthRequestMessage authRequestMessage = new AuthRequestMessage
		// {
		//     authUsername = username,
		//     authPassword = password
		// };
		AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 * L_0 = (AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 *)il2cpp_codegen_object_new(AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776_il2cpp_TypeInfo_var);
		AuthRequestMessage__ctor_m5F13A7C2C4486FEF1A89B2003C49593D57AF7B76(L_0, /*hidden argument*/NULL);
		AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 * L_1 = L_0;
		String_t* L_2 = __this->get_username_7();
		NullCheck(L_1);
		L_1->set_authUsername_0(L_2);
		AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 * L_3 = L_1;
		String_t* L_4 = __this->get_password_8();
		NullCheck(L_3);
		L_3->set_authPassword_1(L_4);
		V_0 = L_3;
		// conn.Send(authRequestMessage);
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_5 = ___conn0;
		AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 * L_6 = V_0;
		NullCheck(L_5);
		NetworkConnection_Send_TisAuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776_mB02FFC52CDFAF9B456AA46FED28550916AF6E4EB(L_5, L_6, 0, /*hidden argument*/NetworkConnection_Send_TisAuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776_mB02FFC52CDFAF9B456AA46FED28550916AF6E4EB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnAuthRequestMessage(Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator_AuthRequestMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnAuthRequestMessage_m1A9C48BE69F6671C25652DB912BDE6374F776A53 (BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 * ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnAuthRequestMessage_m1A9C48BE69F6671C25652DB912BDE6374F776A53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * V_0 = NULL;
	AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * V_1 = NULL;
	{
		// if (logger.LogEnabled()) logger.LogFormat(LogType.Log, "Authentication Request: {0} {1}", msg.authUsername, msg.authPassword);
		IL2CPP_RUNTIME_CLASS_INIT(BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_StaticFields*)il2cpp_codegen_static_fields_for(BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_il2cpp_TypeInfo_var))->get_logger_6();
		bool L_1 = ILoggerExtensions_LogEnabled_m2FBC19416D6F64AA30164AA26A5D985B9C607E2B(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// if (logger.LogEnabled()) logger.LogFormat(LogType.Log, "Authentication Request: {0} {1}", msg.authUsername, msg.authPassword);
		IL2CPP_RUNTIME_CLASS_INIT(BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_StaticFields*)il2cpp_codegen_static_fields_for(BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_il2cpp_TypeInfo_var))->get_logger_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 * L_5 = ___msg1;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_authUsername_0();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 * L_8 = ___msg1;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_authPassword_1();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		NullCheck(L_2);
		InterfaceActionInvoker3< int32_t, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(10 /* System.Void UnityEngine.ILogger::LogFormat(UnityEngine.LogType,System.String,System.Object[]) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_2, 3, _stringLiteral25F2B5660AD9F858DF7E4E7FB77564515F1BB85A, L_7);
	}

IL_0034:
	{
		// if (msg.authUsername == username && msg.authPassword == password)
		AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 * L_10 = ___msg1;
		NullCheck(L_10);
		String_t* L_11 = L_10->get_authUsername_0();
		String_t* L_12 = __this->get_username_7();
		bool L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 * L_14 = ___msg1;
		NullCheck(L_14);
		String_t* L_15 = L_14->get_authPassword_1();
		String_t* L_16 = __this->get_password_8();
		bool L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		// AuthResponseMessage authResponseMessage = new AuthResponseMessage
		// {
		//     code = 100,
		//     message = "Success"
		// };
		AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * L_18 = (AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 *)il2cpp_codegen_object_new(AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00_il2cpp_TypeInfo_var);
		AuthResponseMessage__ctor_m7660AC4C42258FDE84F712E8C98D15A853E02568(L_18, /*hidden argument*/NULL);
		AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * L_19 = L_18;
		NullCheck(L_19);
		L_19->set_code_0((uint8_t)((int32_t)100));
		AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * L_20 = L_19;
		NullCheck(L_20);
		L_20->set_message_1(_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890);
		V_0 = L_20;
		// conn.Send(authResponseMessage);
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_21 = ___conn0;
		AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * L_22 = V_0;
		NullCheck(L_21);
		NetworkConnection_Send_TisAuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00_m631A3426C784AEFD8682AEA5B59E7CABADE4C191(L_21, L_22, 0, /*hidden argument*/NetworkConnection_Send_TisAuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00_m631A3426C784AEFD8682AEA5B59E7CABADE4C191_RuntimeMethod_var);
		// OnServerAuthenticated.Invoke(conn);
		UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB * L_23 = ((NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF *)__this)->get_OnServerAuthenticated_4();
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_24 = ___conn0;
		NullCheck(L_23);
		UnityEvent_1_Invoke_m618B36B283E2DB6AD28CBFDD307D9F834FA6FE6F(L_23, L_24, /*hidden argument*/UnityEvent_1_Invoke_m618B36B283E2DB6AD28CBFDD307D9F834FA6FE6F_RuntimeMethod_var);
		// }
		return;
	}

IL_0089:
	{
		// AuthResponseMessage authResponseMessage = new AuthResponseMessage
		// {
		//     code = 200,
		//     message = "Invalid Credentials"
		// };
		AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * L_25 = (AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 *)il2cpp_codegen_object_new(AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00_il2cpp_TypeInfo_var);
		AuthResponseMessage__ctor_m7660AC4C42258FDE84F712E8C98D15A853E02568(L_25, /*hidden argument*/NULL);
		AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * L_26 = L_25;
		NullCheck(L_26);
		L_26->set_code_0((uint8_t)((int32_t)200));
		AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * L_27 = L_26;
		NullCheck(L_27);
		L_27->set_message_1(_stringLiteralFC6413F4C1B57BBCDE4356C33871D8839840581A);
		V_1 = L_27;
		// conn.Send(authResponseMessage);
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_28 = ___conn0;
		AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * L_29 = V_1;
		NullCheck(L_28);
		NetworkConnection_Send_TisAuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00_m631A3426C784AEFD8682AEA5B59E7CABADE4C191(L_28, L_29, 0, /*hidden argument*/NetworkConnection_Send_TisAuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00_m631A3426C784AEFD8682AEA5B59E7CABADE4C191_RuntimeMethod_var);
		// conn.isAuthenticated = false;
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_30 = ___conn0;
		NullCheck(L_30);
		L_30->set_isAuthenticated_5((bool)0);
		// StartCoroutine(DelayedDisconnect(conn, 1));
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_31 = ___conn0;
		RuntimeObject* L_32 = BasicAuthenticator_DelayedDisconnect_mBCC23E41D1522953B672699D1C4EE51E52C7D409(__this, L_31, (1.0f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_32, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Mirror.Authenticators.BasicAuthenticator::DelayedDisconnect(Mirror.NetworkConnection,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BasicAuthenticator_DelayedDisconnect_mBCC23E41D1522953B672699D1C4EE51E52C7D409 (BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, float ___waitTime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_DelayedDisconnect_mBCC23E41D1522953B672699D1C4EE51E52C7D409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F * L_0 = (U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F *)il2cpp_codegen_object_new(U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F_il2cpp_TypeInfo_var);
		U3CDelayedDisconnectU3Ed__10__ctor_m6299CB9147435AF1E9935046F47389169DFB417A(L_0, 0, /*hidden argument*/NULL);
		U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F * L_1 = L_0;
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_2 = ___conn0;
		NullCheck(L_1);
		L_1->set_conn_3(L_2);
		U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F * L_3 = L_1;
		float L_4 = ___waitTime1;
		NullCheck(L_3);
		L_3->set_waitTime_2(L_4);
		return L_3;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnAuthResponseMessage(Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator_AuthResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnAuthResponseMessage_m1E2CC71611849A905F3A0FCCF6438497EDBAF6ED (BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnAuthResponseMessage_m1E2CC71611849A905F3A0FCCF6438497EDBAF6ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (msg.code == 100)
		AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * L_0 = ___msg1;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_code_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_0042;
		}
	}
	{
		// if (logger.LogEnabled()) logger.LogFormat(LogType.Log, "Authentication Response: {0}", msg.message);
		IL2CPP_RUNTIME_CLASS_INIT(BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_StaticFields*)il2cpp_codegen_static_fields_for(BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_il2cpp_TypeInfo_var))->get_logger_6();
		bool L_3 = ILoggerExtensions_LogEnabled_m2FBC19416D6F64AA30164AA26A5D985B9C607E2B(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// if (logger.LogEnabled()) logger.LogFormat(LogType.Log, "Authentication Response: {0}", msg.message);
		IL2CPP_RUNTIME_CLASS_INIT(BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_StaticFields*)il2cpp_codegen_static_fields_for(BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_il2cpp_TypeInfo_var))->get_logger_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * L_7 = ___msg1;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_message_1();
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(L_4);
		InterfaceActionInvoker3< int32_t, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(10 /* System.Void UnityEngine.ILogger::LogFormat(UnityEngine.LogType,System.String,System.Object[]) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_4, 3, _stringLiteralA78258E832AE47617F6E4694836283281DB4B400, L_6);
	}

IL_0035:
	{
		// OnClientAuthenticated.Invoke(conn);
		UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB * L_9 = ((NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF *)__this)->get_OnClientAuthenticated_5();
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_10 = ___conn0;
		NullCheck(L_9);
		UnityEvent_1_Invoke_m618B36B283E2DB6AD28CBFDD307D9F834FA6FE6F(L_9, L_10, /*hidden argument*/UnityEvent_1_Invoke_m618B36B283E2DB6AD28CBFDD307D9F834FA6FE6F_RuntimeMethod_var);
		// }
		return;
	}

IL_0042:
	{
		// logger.LogFormat(LogType.Error, "Authentication Response: {0}", msg.message);
		IL2CPP_RUNTIME_CLASS_INIT(BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_il2cpp_TypeInfo_var);
		RuntimeObject* L_11 = ((BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_StaticFields*)il2cpp_codegen_static_fields_for(BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_il2cpp_TypeInfo_var))->get_logger_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
		AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * L_14 = ___msg1;
		NullCheck(L_14);
		String_t* L_15 = L_14->get_message_1();
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
		NullCheck(L_11);
		InterfaceActionInvoker3< int32_t, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(10 /* System.Void UnityEngine.ILogger::LogFormat(UnityEngine.LogType,System.String,System.Object[]) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_11, 0, _stringLiteralA78258E832AE47617F6E4694836283281DB4B400, L_13);
		// conn.isAuthenticated = false;
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_16 = ___conn0;
		NullCheck(L_16);
		L_16->set_isAuthenticated_5((bool)0);
		// conn.Disconnect();
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_17 = ___conn0;
		NullCheck(L_17);
		VirtActionInvoker0::Invoke(7 /* System.Void Mirror.NetworkConnection::Disconnect() */, L_17);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator__ctor_m16BA2D3BFDA573274622DDE2CF23A254F9E3AF97 (BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309 * __this, const RuntimeMethod* method)
{
	{
		NetworkAuthenticator__ctor_m1EFE9D58997FA1E95FE79D6196AEBDE5CEC414E5(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator__cctor_mAC6679CF2B75F8300AE57BA957934C9089E19103 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator__cctor_mAC6679CF2B75F8300AE57BA957934C9089E19103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly ILogger logger = LogFactory.GetLogger(typeof(BasicAuthenticator));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogFactory_t359C989285E6F62B9F073C5F0F5FA52BAB518DB6_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = LogFactory_GetLogger_m1325F510684C0DEA3C16231F1D8EE10E9A55D5AC(L_1, 2, /*hidden argument*/NULL);
		((BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_StaticFields*)il2cpp_codegen_static_fields_for(BasicAuthenticator_t0D3D92782F1E574906D00856791D051327A2E309_il2cpp_TypeInfo_var))->set_logger_6(L_2);
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
// System.Void Mirror.Authenticators.TimeoutAuthenticator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_Awake_m79C844E9B26BA045DAD194C312CEBCA11A6AA258 (TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeoutAuthenticator_Awake_m79C844E9B26BA045DAD194C312CEBCA11A6AA258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// authenticator.OnClientAuthenticated.AddListener(connection => OnClientAuthenticated.Invoke(connection));
		NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * L_0 = __this->get_authenticator_7();
		NullCheck(L_0);
		UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB * L_1 = L_0->get_OnClientAuthenticated_5();
		UnityAction_1_t685B094C929AB3D25EDC9C2314542B4D4EFCA5B3 * L_2 = (UnityAction_1_t685B094C929AB3D25EDC9C2314542B4D4EFCA5B3 *)il2cpp_codegen_object_new(UnityAction_1_t685B094C929AB3D25EDC9C2314542B4D4EFCA5B3_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mB8D0881BCC62180D8A6C656EFEE41683BA78C847(L_2, __this, (intptr_t)((intptr_t)TimeoutAuthenticator_U3CAwakeU3Eb__3_0_m7B1E106DDC30F541623591284FC35672A9067F9D_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mB8D0881BCC62180D8A6C656EFEE41683BA78C847_RuntimeMethod_var);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mB8851C9DCA50537CE8D25F6764A9FADE6480F961(L_1, L_2, /*hidden argument*/UnityEvent_1_AddListener_mB8851C9DCA50537CE8D25F6764A9FADE6480F961_RuntimeMethod_var);
		// authenticator.OnServerAuthenticated.AddListener(connection => OnServerAuthenticated.Invoke(connection));
		NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * L_3 = __this->get_authenticator_7();
		NullCheck(L_3);
		UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB * L_4 = L_3->get_OnServerAuthenticated_4();
		UnityAction_1_t685B094C929AB3D25EDC9C2314542B4D4EFCA5B3 * L_5 = (UnityAction_1_t685B094C929AB3D25EDC9C2314542B4D4EFCA5B3 *)il2cpp_codegen_object_new(UnityAction_1_t685B094C929AB3D25EDC9C2314542B4D4EFCA5B3_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mB8D0881BCC62180D8A6C656EFEE41683BA78C847(L_5, __this, (intptr_t)((intptr_t)TimeoutAuthenticator_U3CAwakeU3Eb__3_1_m8EF85EA02F1CEE32EE0A356AD079D63A62319202_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mB8D0881BCC62180D8A6C656EFEE41683BA78C847_RuntimeMethod_var);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mB8851C9DCA50537CE8D25F6764A9FADE6480F961(L_4, L_5, /*hidden argument*/UnityEvent_1_AddListener_mB8851C9DCA50537CE8D25F6764A9FADE6480F961_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::OnStartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_OnStartClient_m18B4ECE686F4DFE0DB710C4D3BD347260EE1FAD6 (TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * __this, const RuntimeMethod* method)
{
	{
		// authenticator.OnStartClient();
		NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * L_0 = __this->get_authenticator_7();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void Mirror.NetworkAuthenticator::OnStartClient() */, L_0);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::OnStartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_OnStartServer_mC129D9B19B76C2733D7C48A9E76ED42C4BD3B1F3 (TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * __this, const RuntimeMethod* method)
{
	{
		// authenticator.OnStartServer();
		NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * L_0 = __this->get_authenticator_7();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void Mirror.NetworkAuthenticator::OnStartServer() */, L_0);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::OnClientAuthenticate(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_OnClientAuthenticate_m3852CAFB005B84C2DD322E4B59FA7CF43CC2CE8B (TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, const RuntimeMethod* method)
{
	{
		// authenticator.OnClientAuthenticate(conn);
		NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * L_0 = __this->get_authenticator_7();
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_1 = ___conn0;
		NullCheck(L_0);
		VirtActionInvoker1< NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * >::Invoke(7 /* System.Void Mirror.NetworkAuthenticator::OnClientAuthenticate(Mirror.NetworkConnection) */, L_0, L_1);
		// if (timeout > 0)
		float L_2 = __this->get_timeout_8();
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// StartCoroutine(BeginAuthentication(conn));
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_3 = ___conn0;
		RuntimeObject* L_4 = TimeoutAuthenticator_BeginAuthentication_mE508C72DF9DF550B8E0A4EF0FEC0A269659F958F(__this, L_3, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::OnServerAuthenticate(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_OnServerAuthenticate_m831772504D5B85CE1343F69D67C10BAA4F74B840 (TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, const RuntimeMethod* method)
{
	{
		// authenticator.OnServerAuthenticate(conn);
		NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * L_0 = __this->get_authenticator_7();
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_1 = ___conn0;
		NullCheck(L_0);
		VirtActionInvoker1< NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * >::Invoke(5 /* System.Void Mirror.NetworkAuthenticator::OnServerAuthenticate(Mirror.NetworkConnection) */, L_0, L_1);
		// if (timeout > 0)
		float L_2 = __this->get_timeout_8();
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// StartCoroutine(BeginAuthentication(conn));
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_3 = ___conn0;
		RuntimeObject* L_4 = TimeoutAuthenticator_BeginAuthentication_mE508C72DF9DF550B8E0A4EF0FEC0A269659F958F(__this, L_3, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Mirror.Authenticators.TimeoutAuthenticator::BeginAuthentication(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeoutAuthenticator_BeginAuthentication_mE508C72DF9DF550B8E0A4EF0FEC0A269659F958F (TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeoutAuthenticator_BeginAuthentication_mE508C72DF9DF550B8E0A4EF0FEC0A269659F958F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED * L_0 = (U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED *)il2cpp_codegen_object_new(U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED_il2cpp_TypeInfo_var);
		U3CBeginAuthenticationU3Ed__8__ctor_mF82A685896AB829F0137DABB59C6730D7D5DDA55(L_0, 0, /*hidden argument*/NULL);
		U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED * L_2 = L_1;
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_3 = ___conn0;
		NullCheck(L_2);
		L_2->set_conn_2(L_3);
		return L_2;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator__ctor_mBC62D61ADC32BBBE1B7E28809C14332FDA9CCBC6 (TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * __this, const RuntimeMethod* method)
{
	{
		// public float timeout = 60;
		__this->set_timeout_8((60.0f));
		NetworkAuthenticator__ctor_m1EFE9D58997FA1E95FE79D6196AEBDE5CEC414E5(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator__cctor_m17383F364ACB88826E8D0C3D22A5FFBDF7300AED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeoutAuthenticator__cctor_m17383F364ACB88826E8D0C3D22A5FFBDF7300AED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly ILogger logger = LogFactory.GetLogger(typeof(TimeoutAuthenticator));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogFactory_t359C989285E6F62B9F073C5F0F5FA52BAB518DB6_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = LogFactory_GetLogger_m1325F510684C0DEA3C16231F1D8EE10E9A55D5AC(L_1, 2, /*hidden argument*/NULL);
		((TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_StaticFields*)il2cpp_codegen_static_fields_for(TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_il2cpp_TypeInfo_var))->set_logger_6(L_2);
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::<Awake>b__3_0(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_U3CAwakeU3Eb__3_0_m7B1E106DDC30F541623591284FC35672A9067F9D (TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___connection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeoutAuthenticator_U3CAwakeU3Eb__3_0_m7B1E106DDC30F541623591284FC35672A9067F9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// authenticator.OnClientAuthenticated.AddListener(connection => OnClientAuthenticated.Invoke(connection));
		UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB * L_0 = ((NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF *)__this)->get_OnClientAuthenticated_5();
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_1 = ___connection0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m618B36B283E2DB6AD28CBFDD307D9F834FA6FE6F(L_0, L_1, /*hidden argument*/UnityEvent_1_Invoke_m618B36B283E2DB6AD28CBFDD307D9F834FA6FE6F_RuntimeMethod_var);
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::<Awake>b__3_1(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_U3CAwakeU3Eb__3_1_m8EF85EA02F1CEE32EE0A356AD079D63A62319202 (TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___connection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeoutAuthenticator_U3CAwakeU3Eb__3_1_m8EF85EA02F1CEE32EE0A356AD079D63A62319202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// authenticator.OnServerAuthenticated.AddListener(connection => OnServerAuthenticated.Invoke(connection));
		UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB * L_0 = ((NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF *)__this)->get_OnServerAuthenticated_4();
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_1 = ___connection0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m618B36B283E2DB6AD28CBFDD307D9F834FA6FE6F(L_0, L_1, /*hidden argument*/UnityEvent_1_Invoke_m618B36B283E2DB6AD28CBFDD307D9F834FA6FE6F_RuntimeMethod_var);
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
// System.Void Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDisconnectU3Ed__10__ctor_m6299CB9147435AF1E9935046F47389169DFB417A (U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDisconnectU3Ed__10_System_IDisposable_Dispose_mBA46FD544045AC4D31C3C26080E33B246068078B (U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedDisconnectU3Ed__10_MoveNext_m068A6EB38E0A100CE7FD4CB581FE91232102AD9B (U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayedDisconnectU3Ed__10_MoveNext_m068A6EB38E0A100CE7FD4CB581FE91232102AD9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(waitTime);
		float L_3 = __this->get_waitTime_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// conn.Disconnect();
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_5 = __this->get_conn_3();
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(7 /* System.Void Mirror.NetworkConnection::Disconnect() */, L_5);
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedDisconnectU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6D55420E1C4C7986891CEF8D17E0617DA6D65AEB (U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDisconnectU3Ed__10_System_Collections_IEnumerator_Reset_mE6B769C1A8BDC3FE65428A365D83CA546F53C7C9 (U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayedDisconnectU3Ed__10_System_Collections_IEnumerator_Reset_mE6B769C1A8BDC3FE65428A365D83CA546F53C7C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CDelayedDisconnectU3Ed__10_System_Collections_IEnumerator_Reset_mE6B769C1A8BDC3FE65428A365D83CA546F53C7C9_RuntimeMethod_var);
	}
}
// System.Object Mirror.Authenticators.BasicAuthenticator_<DelayedDisconnect>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedDisconnectU3Ed__10_System_Collections_IEnumerator_get_Current_m414986C1B65EE5AEF44CAA12815C0EA97BDA935F (U3CDelayedDisconnectU3Ed__10_tE72CE6118E0767233FB5F6F0083D4B178395945F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Authenticators.BasicAuthenticator_AuthRequestMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthRequestMessage__ctor_m5F13A7C2C4486FEF1A89B2003C49593D57AF7B76 (AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_mDC9103481D5807FBF080F7D92B051ED5F642D916(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator_AuthRequestMessage::Serialize(Mirror.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthRequestMessage_Serialize_m321E1FC839D5C1C9308605951DD0489C2E090544 (AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 * __this, NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthRequestMessage_Serialize_m321E1FC839D5C1C9308605951DD0489C2E090544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		MessageBase_Serialize_m8E90590039280EE7EBA1A97D327DB02A2BB5D3A1(__this, L_0, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_1 = ___writer0;
		String_t* L_2 = __this->get_authUsername_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteString_m31C762A5BBACB77129E085AB7D7A9AEEB9ACA95F(L_1, L_2, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		String_t* L_4 = __this->get_authPassword_1();
		NetworkWriterExtensions_WriteString_m31C762A5BBACB77129E085AB7D7A9AEEB9ACA95F(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator_AuthRequestMessage::Deserialize(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthRequestMessage_Deserialize_mF5974938BF37ADD3ED7F6BD54C59C75ADF94BE4C (AuthRequestMessage_tEC038AE7A0DA76DBBF6E91676D5D31D6AC0B1776 * __this, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthRequestMessage_Deserialize_mF5974938BF37ADD3ED7F6BD54C59C75ADF94BE4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		MessageBase_Deserialize_m62E25B8BBA1466111E1A2E65F971BB9CC63A2C09(__this, L_0, /*hidden argument*/NULL);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_1 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		String_t* L_2 = NetworkReaderExtensions_ReadString_mA74E4612F529683A4AEEDB55C369CDEA32D222CC(L_1, /*hidden argument*/NULL);
		__this->set_authUsername_0(L_2);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_3 = ___reader0;
		String_t* L_4 = NetworkReaderExtensions_ReadString_mA74E4612F529683A4AEEDB55C369CDEA32D222CC(L_3, /*hidden argument*/NULL);
		__this->set_authPassword_1(L_4);
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
// System.Void Mirror.Authenticators.BasicAuthenticator_AuthResponseMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthResponseMessage__ctor_m7660AC4C42258FDE84F712E8C98D15A853E02568 (AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * __this, const RuntimeMethod* method)
{
	{
		MessageBase__ctor_mDC9103481D5807FBF080F7D92B051ED5F642D916(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator_AuthResponseMessage::Serialize(Mirror.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthResponseMessage_Serialize_m9F7CBE4F9BE7D9AFE663AF3274525BD277743421 (AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * __this, NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthResponseMessage_Serialize_m9F7CBE4F9BE7D9AFE663AF3274525BD277743421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		MessageBase_Serialize_m8E90590039280EE7EBA1A97D327DB02A2BB5D3A1(__this, L_0, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_1 = ___writer0;
		uint8_t L_2 = __this->get_code_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteByte_mFFEFC20C5AB176841BBBE10C1E4A866EAF369B96(L_1, L_2, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		String_t* L_4 = __this->get_message_1();
		NetworkWriterExtensions_WriteString_m31C762A5BBACB77129E085AB7D7A9AEEB9ACA95F(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator_AuthResponseMessage::Deserialize(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthResponseMessage_Deserialize_mDBE7A4D782F0F2DFFBDBDB589A0C2EFCF69EA259 (AuthResponseMessage_tAB2A4012F8D29C41FEE093148E31470EFD93FA00 * __this, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthResponseMessage_Deserialize_mDBE7A4D782F0F2DFFBDBDB589A0C2EFCF69EA259_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		MessageBase_Deserialize_m62E25B8BBA1466111E1A2E65F971BB9CC63A2C09(__this, L_0, /*hidden argument*/NULL);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_1 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		uint8_t L_2 = NetworkReaderExtensions_ReadByte_m86E3D12D2C1E2C447A4C2F20B808117DAA69571C(L_1, /*hidden argument*/NULL);
		__this->set_code_0(L_2);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_3 = ___reader0;
		String_t* L_4 = NetworkReaderExtensions_ReadString_mA74E4612F529683A4AEEDB55C369CDEA32D222CC(L_3, /*hidden argument*/NULL);
		__this->set_message_1(L_4);
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
// System.Void Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBeginAuthenticationU3Ed__8__ctor_mF82A685896AB829F0137DABB59C6730D7D5DDA55 (U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBeginAuthenticationU3Ed__8_System_IDisposable_Dispose_m47C381A779685D9AA8AF5B4958C38ED057845991 (U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBeginAuthenticationU3Ed__8_MoveNext_m1CCE4C2CCB0AC34E91CD0C813E71637E0A41DA85 (U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBeginAuthenticationU3Ed__8_MoveNext_m1CCE4C2CCB0AC34E91CD0C813E71637E0A41DA85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * L_1 = __this->get_U3CU3E4__this_3();
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
			goto IL_0069;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (logger.LogEnabled()) logger.Log($"Authentication countdown started {conn} {timeout}");
		IL2CPP_RUNTIME_CLASS_INIT(TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_StaticFields*)il2cpp_codegen_static_fields_for(TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_il2cpp_TypeInfo_var))->get_logger_6();
		bool L_5 = ILoggerExtensions_LogEnabled_m2FBC19416D6F64AA30164AA26A5D985B9C607E2B(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// if (logger.LogEnabled()) logger.Log($"Authentication countdown started {conn} {timeout}");
		IL2CPP_RUNTIME_CLASS_INIT(TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_StaticFields*)il2cpp_codegen_static_fields_for(TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_il2cpp_TypeInfo_var))->get_logger_6();
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_7 = __this->get_conn_2();
		TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->get_timeout_8();
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral3343D6CAD1535DA9B204B8AE2A2076276A66E0A0, L_7, L_11, /*hidden argument*/NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(8 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_6, L_12);
	}

IL_004f:
	{
		// yield return new WaitForSecondsRealtime(timeout);
		TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01 * L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->get_timeout_8();
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_15 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_15, L_14, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0069:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!conn.isAuthenticated)
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_16 = __this->get_conn_2();
		NullCheck(L_16);
		bool L_17 = L_16->get_isAuthenticated_5();
		if (L_17)
		{
			goto IL_00ae;
		}
	}
	{
		// if (logger.LogEnabled()) logger.Log($"Authentication Timeout {conn}");
		IL2CPP_RUNTIME_CLASS_INIT(TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_il2cpp_TypeInfo_var);
		RuntimeObject* L_18 = ((TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_StaticFields*)il2cpp_codegen_static_fields_for(TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_il2cpp_TypeInfo_var))->get_logger_6();
		bool L_19 = ILoggerExtensions_LogEnabled_m2FBC19416D6F64AA30164AA26A5D985B9C607E2B(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00a3;
		}
	}
	{
		// if (logger.LogEnabled()) logger.Log($"Authentication Timeout {conn}");
		IL2CPP_RUNTIME_CLASS_INIT(TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_il2cpp_TypeInfo_var);
		RuntimeObject* L_20 = ((TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_StaticFields*)il2cpp_codegen_static_fields_for(TimeoutAuthenticator_t4121A00090A58004E6AC7E4921EC0686CCA77D01_il2cpp_TypeInfo_var))->get_logger_6();
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_21 = __this->get_conn_2();
		String_t* L_22 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralFF8A73F0275FEAAA951E4B262B577DFF18A148E9, L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(8 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_20, L_22);
	}

IL_00a3:
	{
		// conn.Disconnect();
		NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * L_23 = __this->get_conn_2();
		NullCheck(L_23);
		VirtActionInvoker0::Invoke(7 /* System.Void Mirror.NetworkConnection::Disconnect() */, L_23);
	}

IL_00ae:
	{
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBeginAuthenticationU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAFF86DF4A16219F9F07EA5535BEB5643B549D3CD (U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBeginAuthenticationU3Ed__8_System_Collections_IEnumerator_Reset_mDD9B4721D709940004DFA72D72C6FCBB8C96DD57 (U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBeginAuthenticationU3Ed__8_System_Collections_IEnumerator_Reset_mDD9B4721D709940004DFA72D72C6FCBB8C96DD57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CBeginAuthenticationU3Ed__8_System_Collections_IEnumerator_Reset_mDD9B4721D709940004DFA72D72C6FCBB8C96DD57_RuntimeMethod_var);
	}
}
// System.Object Mirror.Authenticators.TimeoutAuthenticator_<BeginAuthentication>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBeginAuthenticationU3Ed__8_System_Collections_IEnumerator_get_Current_m4348F933A986BA51D7BE5A6EF3A4E421DE2CB24E (U3CBeginAuthenticationU3Ed__8_tA5D89796CBD224BFB1354496E543C3512378E2ED * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
