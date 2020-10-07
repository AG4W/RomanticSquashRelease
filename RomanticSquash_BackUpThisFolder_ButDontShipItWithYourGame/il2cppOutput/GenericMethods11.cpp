#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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

// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.AtomicBoolean
struct AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass38_0`1<System.Object,System.Object>
struct U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192;
// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass38_0`1<System.Threading.Tasks.VoidTaskResult,System.Object>
struct U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC;
// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass41_0`2<System.Object,System.Object,System.Object>
struct U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B;
// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass41_0`2<System.Threading.Tasks.VoidTaskResult,System.Object,System.Object>
struct U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF;
// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass41_0`2<System.Threading.Tasks.VoidTaskResult,System.Object,System.Int32>
struct U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D;
// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass44_0`3<System.Int32,System.Object,System.Int32,System.Object>
struct U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74;
// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass44_0`3<System.Object,System.Object,System.Object,System.Object>
struct U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2;
// System.Action`1<System.IAsyncResult>
struct Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.IAsyncResult,System.Int32>
struct Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED;
// System.Func`2<System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>
struct Func_2_t93436DB66248BF735350EEC072257D84453153ED;
// System.Func`2<System.Int32Enum,System.Int32>
struct Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F;
// System.Func`2<System.Int32Enum,System.Boolean>
struct Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E;
// System.Func`2<System.Int32Enum,System.Object>
struct Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Boolean>
struct Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9;
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
struct Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>>
struct Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>>>
struct Func_2_tACAF262312375D7D8F7883E8DA2431DDAF082BFA;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>>
struct Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D;
// System.Func`2<System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>,System.Nullable`1<System.Int32>>
struct Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2;
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Nullable`1<System.Int32>>
struct Func_2_tC6816526F3327CB168F701FED02EB54522A97009;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`3<System.Object,System.IAsyncResult,System.Int32>
struct Func_3_t5C0DDA503F361B889D22FB85D5532AC9B1AE6C69;
// System.Func`3<System.Object,System.IAsyncResult,System.Object>
struct Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC;
// System.Func`3<System.Object,System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>
struct Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354;
// System.Func`4<System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_4_t1FB292635292578289C454E038620354E9A7662D;
// System.Func`5<System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3;
// System.Func`5<System.Object,System.IO.Stream/ReadWriteParameters,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5;
// System.Func`5<System.Object,System.Int32,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_5_t71E6A6C70D6F26AFC91F688843ACAB6E65937AD0;
// System.Func`6<System.Object,System.Int32,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A;
// System.Func`6<System.Object,System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t28FB40D8E33C5846AB04F37C78130A4948569C7C;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct IEnumerable_1_t79EE9024EC37CCCC68DF1B64A8C34AEBC7E65C49;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Int32Enum>
struct IEnumerator_1_tD8D5B0A7736D9FAFB606AC36B0CAD1353B84C3BD;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct IEnumerator_1_t684343E066D49B7FAC4216EA29ACB636DA954229;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<System.Int32>>
struct TaskFactory_1_tC38251ED2F273F12DD35B9D834895E8343290094;
// System.Threading.Tasks.TaskFactory`1<System.ValueTuple`2<System.Int32,System.Int32>>
struct TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>>
struct Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581;
// System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>
struct Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int32>
struct Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int64>
struct Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.IntPtr>
struct Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Object>
struct Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.SByte>
struct Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Single>
struct Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.TimeSpan>
struct Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt16>
struct Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt32>
struct Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt64>
struct Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UIntPtr>
struct Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Object,System.Object>
struct Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Boolean>
struct Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Byte>
struct Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Char>
struct Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.DateTime>
struct Transformer_1_t85017CA131468548211F084ACC574B9CAA055755;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.DateTimeOffset>
struct Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Decimal>
struct Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Double>
struct Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Guid>
struct Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int16>
struct Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int32>
struct Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int64>
struct Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.IntPtr>
struct Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Object>
struct Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.SByte>
struct Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Single>
struct Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.TimeSpan>
struct Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt16>
struct Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt32>
struct Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt64>
struct Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UIntPtr>
struct Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Boolean>
struct Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Byte>
struct Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Char>
struct Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.DateTime>
struct Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.DateTimeOffset>
struct Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Decimal>
struct Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Double>
struct Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Guid>
struct Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int16>
struct Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int32>
struct Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int64>
struct Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.IntPtr>
struct Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Object>
struct Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.SByte>
struct Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Single>
struct Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.TimeSpan>
struct Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt16>
struct Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt32>
struct Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt64>
struct Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UIntPtr>
struct Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Boolean>
struct Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Byte>
struct Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Char>
struct Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.DateTime>
struct Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.DateTimeOffset>
struct Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Decimal>
struct Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Double>
struct Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Guid>
struct Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int16>
struct Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int32>
struct Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int64>
struct Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.IntPtr>
struct Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Object>
struct Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.SByte>
struct Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Single>
struct Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.TimeSpan>
struct Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt16>
struct Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt32>
struct Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt64>
struct Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UIntPtr>
struct Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Boolean>
struct Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Byte>
struct Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Char>
struct Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.DateTime>
struct Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.DateTimeOffset>
struct Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Decimal>
struct Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Double>
struct Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Guid>
struct Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int16>
struct Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int32>
struct Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int64>
struct Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.IntPtr>
struct Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Object>
struct Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.SByte>
struct Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Single>
struct Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.TimeSpan>
struct Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt16>
struct Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt32>
struct Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt64>
struct Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UIntPtr>
struct Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Int32Enum>
struct WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32Enum>
struct WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereListIterator`1<System.Int32Enum>
struct WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B;
// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Object>
struct WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>
struct WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>
struct WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>[]
struct KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral19A591E076465B264D0FAFC4F98833B0673D6092;
IL2CPP_EXTERN_C String_t* _stringLiteral295C1C91484E27E03B860FDA8F1EE84730518E64;
IL2CPP_EXTERN_C String_t* _stringLiteral92BF5D2AB9AD1A68596BC5F92B31A8D6A6C3F5BF;
IL2CPP_EXTERN_C String_t* _stringLiteralA75CF6F408A626E601212712FB539C300D88CDBE;
IL2CPP_EXTERN_C String_t* _stringLiteralA7DEB4E83ED6644FBE7C7276D77CAEE0397BF409;
IL2CPP_EXTERN_C String_t* _stringLiteralC52F77B7D44C96CE5B91F76A3587ACE8C88748FF;
IL2CPP_EXTERN_C const RuntimeMethod* TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisRuntimeObject_mCACCEBEBD0FB241F09975A4FBDFF6E35DEFA2479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD30EF63A4AB123D6024EABB84737DB0499032327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m2B3A46E3FAF52A3A246A8CDD65154BAA7E477364_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_m6CB08325040E77B14E590064C9D8A21A0C1262DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_mDEE88068BA7EAE1407137D6D6F35B52994E1C2D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m5AEB6DDB800286721FD02093457462E80EADE8CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m681649E0926FAB0B829788CD61146021E9300EB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m5C7EBEA544578715D4178889DC1825922ACBC76E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_mBA02015EB4C668DC7E4EB19F11011451DB565069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_TisRuntimeObject_mDE5CD16304F994F11A35F60DD08F76F578F239FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisRuntimeObject_mCACCEBEBD0FB241F09975A4FBDFF6E35DEFA2479_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD30EF63A4AB123D6024EABB84737DB0499032327_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m2B3A46E3FAF52A3A246A8CDD65154BAA7E477364_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_m6CB08325040E77B14E590064C9D8A21A0C1262DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_mDEE88068BA7EAE1407137D6D6F35B52994E1C2D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m5AEB6DDB800286721FD02093457462E80EADE8CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m681649E0926FAB0B829788CD61146021E9300EB5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TaskFactory_1_FromAsyncTrim_TisRuntimeObject_TisReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_m20DDDC71E4D2D8EFED052419784A627AE8641686_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TaskFactory_1_FromAsyncTrim_TisRuntimeObject_TisReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_m5C922B333929EFDD969068043559BD32667E93A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TaskFactory_1_FromAsyncTrim_TisRuntimeObject_TisRuntimeObject_m7288A7165F6A87EBA4E4648BFCB7D8C1D8137F74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m5C7EBEA544578715D4178889DC1825922ACBC76E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m849AA31EC773855DC22DE22FE9E1CDF41764F042_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m886398BE05C4ED256B86DABBB5CDE411B95E33A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_mBA02015EB4C668DC7E4EB19F11011451DB565069_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1_ContinueWith_TisRuntimeObject_mD5CEC6CBA0EB70E1C3D7B04196B46C43703A88EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1_ContinueWith_TisRuntimeObject_mDE5CD16304F994F11A35F60DD08F76F578F239FC_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1;
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32Enum>
struct  List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____items_1)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__items_1() const { return ____items_1; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields, ____emptyArray_5)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_tDEB8E64C292126E69D8045806810D8AE28F4380F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDEB8E64C292126E69D8045806810D8AE28F4380F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDEB8E64C292126E69D8045806810D8AE28F4380F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Int32>
struct  Caster_1_t70C4789E193DDF1EE8FF1EAE7B23AA698374F2BC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t70C4789E193DDF1EE8FF1EAE7B23AA698374F2BC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t70C4789E193DDF1EE8FF1EAE7B23AA698374F2BC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Int64>
struct  Caster_1_tDF3C56EF05C9C323E1699967C09C7B95572DB884  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDF3C56EF05C9C323E1699967C09C7B95572DB884_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDF3C56EF05C9C323E1699967C09C7B95572DB884_StaticFields, ___Instance_0)); }
	inline Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.IntPtr>
struct  Caster_1_tC1BEAAED563F601D1AB34FA885D4DC73B0593A01  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC1BEAAED563F601D1AB34FA885D4DC73B0593A01_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC1BEAAED563F601D1AB34FA885D4DC73B0593A01_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Object>
struct  Caster_1_t9827C62922CE67B63670F7E395C36604B3284B82  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9827C62922CE67B63670F7E395C36604B3284B82_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9827C62922CE67B63670F7E395C36604B3284B82_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.SByte>
struct  Caster_1_tBE68CFB112A68FF8E1439A6D50611D57D2B78929  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tBE68CFB112A68FF8E1439A6D50611D57D2B78929_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tBE68CFB112A68FF8E1439A6D50611D57D2B78929_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Single>
struct  Caster_1_tA96AB66BC3B680A41161A539CA7A0D45E183A207  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA96AB66BC3B680A41161A539CA7A0D45E183A207_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA96AB66BC3B680A41161A539CA7A0D45E183A207_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.TimeSpan>
struct  Caster_1_t12C78E087522A8854105EA56B1656FA396D7D4F4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t12C78E087522A8854105EA56B1656FA396D7D4F4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t12C78E087522A8854105EA56B1656FA396D7D4F4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.UInt16>
struct  Caster_1_tB27660B38359B950168ADEF98D7C792A423A211A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB27660B38359B950168ADEF98D7C792A423A211A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB27660B38359B950168ADEF98D7C792A423A211A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.UInt32>
struct  Caster_1_tD4099ACC173F871B13EFCBBAEF67B0998F1AF043  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD4099ACC173F871B13EFCBBAEF67B0998F1AF043_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD4099ACC173F871B13EFCBBAEF67B0998F1AF043_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.UInt64>
struct  Caster_1_t1E7F2BFA620BFA6B4D131AF0754217C21DC3DC76  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1E7F2BFA620BFA6B4D131AF0754217C21DC3DC76_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1E7F2BFA620BFA6B4D131AF0754217C21DC3DC76_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.UIntPtr>
struct  Caster_1_t8D66EB4609DD0809802358A5F2C34FF083CC9E95  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8D66EB4609DD0809802358A5F2C34FF083CC9E95_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8D66EB4609DD0809802358A5F2C34FF083CC9E95_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Object,System.Object>
struct  Caster_1_tC3972B33B78D374E68B197BFBA0F750AC728CE0B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC3972B33B78D374E68B197BFBA0F750AC728CE0B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC3972B33B78D374E68B197BFBA0F750AC728CE0B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Boolean>
struct  Caster_1_t1BD4C60F02C5F8490B8F0C8D66C1E7AB72398982  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1BD4C60F02C5F8490B8F0C8D66C1E7AB72398982_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1BD4C60F02C5F8490B8F0C8D66C1E7AB72398982_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Byte>
struct  Caster_1_t30A6AB5C2962F37220090F428E0DC77388038379  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t30A6AB5C2962F37220090F428E0DC77388038379_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t30A6AB5C2962F37220090F428E0DC77388038379_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Char>
struct  Caster_1_t1244636E53CA3A25ECCDFA53A0A1579702035790  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1244636E53CA3A25ECCDFA53A0A1579702035790_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1244636E53CA3A25ECCDFA53A0A1579702035790_StaticFields, ___Instance_0)); }
	inline Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t2B74904278820C410C8B5A8D72DE27A24035727C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2B74904278820C410C8B5A8D72DE27A24035727C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2B74904278820C410C8B5A8D72DE27A24035727C_StaticFields, ___Instance_0)); }
	inline Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.DateTime>
struct  Caster_1_t1BF309AADA05A572B2F9CC2F7A68EF99D670AB98  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1BF309AADA05A572B2F9CC2F7A68EF99D670AB98_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t85017CA131468548211F084ACC574B9CAA055755 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1BF309AADA05A572B2F9CC2F7A68EF99D670AB98_StaticFields, ___Instance_0)); }
	inline Transformer_1_t85017CA131468548211F084ACC574B9CAA055755 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t85017CA131468548211F084ACC574B9CAA055755 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t85017CA131468548211F084ACC574B9CAA055755 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.DateTimeOffset>
struct  Caster_1_t58169F4240E4111F7A32AE2FDD77268B70A27DA4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t58169F4240E4111F7A32AE2FDD77268B70A27DA4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t58169F4240E4111F7A32AE2FDD77268B70A27DA4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Decimal>
struct  Caster_1_tB27BEE43CA1315350CE91684999408CB0D8B38CE  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB27BEE43CA1315350CE91684999408CB0D8B38CE_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB27BEE43CA1315350CE91684999408CB0D8B38CE_StaticFields, ___Instance_0)); }
	inline Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t5DF12DEB83CDE47DE415E477930BFFE3C7175F19  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5DF12DEB83CDE47DE415E477930BFFE3C7175F19_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5DF12DEB83CDE47DE415E477930BFFE3C7175F19_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Double>
struct  Caster_1_t0E96099314BC1001361C090363363C27D456FF68  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0E96099314BC1001361C090363363C27D456FF68_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0E96099314BC1001361C090363363C27D456FF68_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Guid>
struct  Caster_1_t5F81299DC5B220B4CA376F3799381DD1B09439D4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5F81299DC5B220B4CA376F3799381DD1B09439D4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5F81299DC5B220B4CA376F3799381DD1B09439D4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Int16>
struct  Caster_1_tE9CD352FE55AC176689697C28A1A977B0C0775A8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE9CD352FE55AC176689697C28A1A977B0C0775A8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE9CD352FE55AC176689697C28A1A977B0C0775A8_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Int32>
struct  Caster_1_t88FF0864B2C503EFAD5ED37705978F3B2582A1A5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t88FF0864B2C503EFAD5ED37705978F3B2582A1A5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t88FF0864B2C503EFAD5ED37705978F3B2582A1A5_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Int64>
struct  Caster_1_t163E755F3C31D895AD0BDE502B676681BDC4DB3B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t163E755F3C31D895AD0BDE502B676681BDC4DB3B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t163E755F3C31D895AD0BDE502B676681BDC4DB3B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.IntPtr>
struct  Caster_1_tF8115F4B0CE80B556961ACB2289616B0DEC331AB  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF8115F4B0CE80B556961ACB2289616B0DEC331AB_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF8115F4B0CE80B556961ACB2289616B0DEC331AB_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Object>
struct  Caster_1_tC4FA729FF9BC09C7B4EC9C2301EA897047768618  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC4FA729FF9BC09C7B4EC9C2301EA897047768618_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC4FA729FF9BC09C7B4EC9C2301EA897047768618_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.SByte>
struct  Caster_1_t7647E71BE8B30B3842204E3EC510510866F46BD9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7647E71BE8B30B3842204E3EC510510866F46BD9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7647E71BE8B30B3842204E3EC510510866F46BD9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Single>
struct  Caster_1_t33D96820C90C18AAB27CE45A2342ACADA8EF20E4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t33D96820C90C18AAB27CE45A2342ACADA8EF20E4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t33D96820C90C18AAB27CE45A2342ACADA8EF20E4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.TimeSpan>
struct  Caster_1_t17ACB9A58115DEA27D4C0D2744F74900E858E353  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t17ACB9A58115DEA27D4C0D2744F74900E858E353_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t17ACB9A58115DEA27D4C0D2744F74900E858E353_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.UInt16>
struct  Caster_1_t870029184001271CD749C94DCA95C7A2C0D1A4FE  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t870029184001271CD749C94DCA95C7A2C0D1A4FE_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t870029184001271CD749C94DCA95C7A2C0D1A4FE_StaticFields, ___Instance_0)); }
	inline Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.UInt32>
struct  Caster_1_tA41091CA45F9A4B6EDB6AC286316274A05D80186  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA41091CA45F9A4B6EDB6AC286316274A05D80186_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA41091CA45F9A4B6EDB6AC286316274A05D80186_StaticFields, ___Instance_0)); }
	inline Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.UInt64>
struct  Caster_1_t60127F9AA9497FABC02BFD54AC24744A8071E56B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t60127F9AA9497FABC02BFD54AC24744A8071E56B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t60127F9AA9497FABC02BFD54AC24744A8071E56B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.UIntPtr>
struct  Caster_1_t740C3B7D2E14D9E73F3F0EFCF14F8BA60FB849A6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t740C3B7D2E14D9E73F3F0EFCF14F8BA60FB849A6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t740C3B7D2E14D9E73F3F0EFCF14F8BA60FB849A6_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Boolean>
struct  Caster_1_t1C9883B28F2C3F274ADC13F46C49C02C54494BD6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1C9883B28F2C3F274ADC13F46C49C02C54494BD6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1C9883B28F2C3F274ADC13F46C49C02C54494BD6_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Byte>
struct  Caster_1_t95C9CBFB005FB2C9D0C0F2A240E797403CBE2F87  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t95C9CBFB005FB2C9D0C0F2A240E797403CBE2F87_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t95C9CBFB005FB2C9D0C0F2A240E797403CBE2F87_StaticFields, ___Instance_0)); }
	inline Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Char>
struct  Caster_1_t9DA610447C49902B9FBFE6DEC227E850F4A80137  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9DA610447C49902B9FBFE6DEC227E850F4A80137_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9DA610447C49902B9FBFE6DEC227E850F4A80137_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_tE598EB10B0A995EFB2D98C6255D19AEB04880A4D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE598EB10B0A995EFB2D98C6255D19AEB04880A4D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE598EB10B0A995EFB2D98C6255D19AEB04880A4D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.DateTime>
struct  Caster_1_t9CD44B9D0BF57F470EA3652BB01215672BE364F6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9CD44B9D0BF57F470EA3652BB01215672BE364F6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9CD44B9D0BF57F470EA3652BB01215672BE364F6_StaticFields, ___Instance_0)); }
	inline Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.DateTimeOffset>
struct  Caster_1_tB519A5C4AF8613C51607CB6DA06B4E509DE94CE1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB519A5C4AF8613C51607CB6DA06B4E509DE94CE1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB519A5C4AF8613C51607CB6DA06B4E509DE94CE1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Decimal>
struct  Caster_1_t97215292B31E6EDD9D0CCF730C574A219DB14FA6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t97215292B31E6EDD9D0CCF730C574A219DB14FA6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t97215292B31E6EDD9D0CCF730C574A219DB14FA6_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t36421096E51C706002F451EE0EF4F2C050E65FDC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t36421096E51C706002F451EE0EF4F2C050E65FDC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t36421096E51C706002F451EE0EF4F2C050E65FDC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Double>
struct  Caster_1_t3758D8A416E0335940152F85A9EF16351B5E50B4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3758D8A416E0335940152F85A9EF16351B5E50B4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3758D8A416E0335940152F85A9EF16351B5E50B4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Guid>
struct  Caster_1_tE7DEB9C1C2CA14F5BAC58EDE3DC45FC7BC5E2D71  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE7DEB9C1C2CA14F5BAC58EDE3DC45FC7BC5E2D71_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE7DEB9C1C2CA14F5BAC58EDE3DC45FC7BC5E2D71_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Int16>
struct  Caster_1_tC5BA8BEE276B2CE5B5971AED6A81D2209E331D5D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC5BA8BEE276B2CE5B5971AED6A81D2209E331D5D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC5BA8BEE276B2CE5B5971AED6A81D2209E331D5D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Int32>
struct  Caster_1_t2A00EDBD48775854B6F07521F9C38B3D985895DD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2A00EDBD48775854B6F07521F9C38B3D985895DD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2A00EDBD48775854B6F07521F9C38B3D985895DD_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Int64>
struct  Caster_1_t001E88A8CE2BFC0E48CBD781528BDB1B5D626B23  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t001E88A8CE2BFC0E48CBD781528BDB1B5D626B23_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t001E88A8CE2BFC0E48CBD781528BDB1B5D626B23_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.IntPtr>
struct  Caster_1_tE61A67E1226C9AAEF271BA0F9697770921AE95AC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE61A67E1226C9AAEF271BA0F9697770921AE95AC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE61A67E1226C9AAEF271BA0F9697770921AE95AC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Object>
struct  Caster_1_t1DF332D98A7CFD921311E400AA7EB85F360716CF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1DF332D98A7CFD921311E400AA7EB85F360716CF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1DF332D98A7CFD921311E400AA7EB85F360716CF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.SByte>
struct  Caster_1_tEB118780DCAADB459CFF6F3503D3155B1FBE042B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEB118780DCAADB459CFF6F3503D3155B1FBE042B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEB118780DCAADB459CFF6F3503D3155B1FBE042B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Single>
struct  Caster_1_t3F36BE5AE6C1F8A32498C9F48EFDCF9C97F77649  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3F36BE5AE6C1F8A32498C9F48EFDCF9C97F77649_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3F36BE5AE6C1F8A32498C9F48EFDCF9C97F77649_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.TimeSpan>
struct  Caster_1_tD718F5C5131976B010CAE236DB97BFF85D813E54  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD718F5C5131976B010CAE236DB97BFF85D813E54_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD718F5C5131976B010CAE236DB97BFF85D813E54_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.UInt16>
struct  Caster_1_tE98A18E634417A96EC0EB7E3F3AEEDDCDE5030DD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE98A18E634417A96EC0EB7E3F3AEEDDCDE5030DD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE98A18E634417A96EC0EB7E3F3AEEDDCDE5030DD_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.UInt32>
struct  Caster_1_tCF9EF4E40F2FC2B2EB7902E1934BE213E69EE065  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCF9EF4E40F2FC2B2EB7902E1934BE213E69EE065_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCF9EF4E40F2FC2B2EB7902E1934BE213E69EE065_StaticFields, ___Instance_0)); }
	inline Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.UInt64>
struct  Caster_1_tDCA4B028D037B066692AE9595936AAD91890E1CF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDCA4B028D037B066692AE9595936AAD91890E1CF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDCA4B028D037B066692AE9595936AAD91890E1CF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.UIntPtr>
struct  Caster_1_t3E7C36D31A48255DAD25B3B2AE6B917F8340B991  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3E7C36D31A48255DAD25B3B2AE6B917F8340B991_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3E7C36D31A48255DAD25B3B2AE6B917F8340B991_StaticFields, ___Instance_0)); }
	inline Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Boolean>
struct  Caster_1_tF2AFB02A87ADE0E7A8A250D34EAFA734BA067304  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF2AFB02A87ADE0E7A8A250D34EAFA734BA067304_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF2AFB02A87ADE0E7A8A250D34EAFA734BA067304_StaticFields, ___Instance_0)); }
	inline Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Byte>
struct  Caster_1_tCE480BD8AB8248F2B6480301D05F0F36C531CDB9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCE480BD8AB8248F2B6480301D05F0F36C531CDB9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCE480BD8AB8248F2B6480301D05F0F36C531CDB9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Char>
struct  Caster_1_tAF055C28617E7BBE97D0A4F6D3BB9DA6AE2FDE51  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAF055C28617E7BBE97D0A4F6D3BB9DA6AE2FDE51_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAF055C28617E7BBE97D0A4F6D3BB9DA6AE2FDE51_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t815F5BE908D188229045CE6394C20260EF7CD34A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t815F5BE908D188229045CE6394C20260EF7CD34A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t815F5BE908D188229045CE6394C20260EF7CD34A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.DateTime>
struct  Caster_1_t901773DD618F4F8D0F11AA64220BDF5B5588A9CB  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t901773DD618F4F8D0F11AA64220BDF5B5588A9CB_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t901773DD618F4F8D0F11AA64220BDF5B5588A9CB_StaticFields, ___Instance_0)); }
	inline Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.DateTimeOffset>
struct  Caster_1_t81822C420408C79A1D831535F2CF93DA5EA48B3A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t81822C420408C79A1D831535F2CF93DA5EA48B3A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t81822C420408C79A1D831535F2CF93DA5EA48B3A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Decimal>
struct  Caster_1_t40AD1A1AF479039B1D54E5F3380B6B0CF2B15644  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t40AD1A1AF479039B1D54E5F3380B6B0CF2B15644_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t40AD1A1AF479039B1D54E5F3380B6B0CF2B15644_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_tA382B961BB6DECA7E9912DE8BCE86A2760D3536C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA382B961BB6DECA7E9912DE8BCE86A2760D3536C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA382B961BB6DECA7E9912DE8BCE86A2760D3536C_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Double>
struct  Caster_1_t6143C0151137A083CB0F6EFBCE486661FD0489FB  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6143C0151137A083CB0F6EFBCE486661FD0489FB_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6143C0151137A083CB0F6EFBCE486661FD0489FB_StaticFields, ___Instance_0)); }
	inline Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Guid>
struct  Caster_1_t05D7391E16AAD38161724DD6C261B74130C36705  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t05D7391E16AAD38161724DD6C261B74130C36705_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t05D7391E16AAD38161724DD6C261B74130C36705_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Int16>
struct  Caster_1_t05E36EAA415EA6B5B1C08B9D4E494A0588524227  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t05E36EAA415EA6B5B1C08B9D4E494A0588524227_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t05E36EAA415EA6B5B1C08B9D4E494A0588524227_StaticFields, ___Instance_0)); }
	inline Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Int32>
struct  Caster_1_t519E78DB0E5DF907F1CB998EE1427A3E8E221BED  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t519E78DB0E5DF907F1CB998EE1427A3E8E221BED_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t519E78DB0E5DF907F1CB998EE1427A3E8E221BED_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Int64>
struct  Caster_1_t4282DB10490A87367535C2292A0292F381AB2D8A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4282DB10490A87367535C2292A0292F381AB2D8A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4282DB10490A87367535C2292A0292F381AB2D8A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.IntPtr>
struct  Caster_1_t69A273B2F262F2B7EF8D384649270F25004CDE21  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t69A273B2F262F2B7EF8D384649270F25004CDE21_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t69A273B2F262F2B7EF8D384649270F25004CDE21_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Object>
struct  Caster_1_t137FB3B1278245F81E87955980453BD358BC9FDD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t137FB3B1278245F81E87955980453BD358BC9FDD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t137FB3B1278245F81E87955980453BD358BC9FDD_StaticFields, ___Instance_0)); }
	inline Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.SByte>
struct  Caster_1_t2FFB438F208B3B129F9605FB1F10B32FCE533406  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2FFB438F208B3B129F9605FB1F10B32FCE533406_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2FFB438F208B3B129F9605FB1F10B32FCE533406_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Single>
struct  Caster_1_t9A112A2C70E550894FAC0C3A124091DCCBDF8012  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9A112A2C70E550894FAC0C3A124091DCCBDF8012_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9A112A2C70E550894FAC0C3A124091DCCBDF8012_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.TimeSpan>
struct  Caster_1_t5D3645B8EC343703DBE9DE7EA90363CD546B667A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5D3645B8EC343703DBE9DE7EA90363CD546B667A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5D3645B8EC343703DBE9DE7EA90363CD546B667A_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.UInt16>
struct  Caster_1_t093C74E154CC3D388C2CB09F38F181A557EFFEBE  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t093C74E154CC3D388C2CB09F38F181A557EFFEBE_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t093C74E154CC3D388C2CB09F38F181A557EFFEBE_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.UInt32>
struct  Caster_1_t5511E837A8586227F074F7E28421C634A073E16A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5511E837A8586227F074F7E28421C634A073E16A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5511E837A8586227F074F7E28421C634A073E16A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.UInt64>
struct  Caster_1_t232EC3F74CC0AC8B7BB52B78D3FF1DD8CB08C472  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t232EC3F74CC0AC8B7BB52B78D3FF1DD8CB08C472_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t232EC3F74CC0AC8B7BB52B78D3FF1DD8CB08C472_StaticFields, ___Instance_0)); }
	inline Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.UIntPtr>
struct  Caster_1_tEDA4AF60F40734E22B03C10431C74F8444BD6EA6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEDA4AF60F40734E22B03C10431C74F8444BD6EA6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEDA4AF60F40734E22B03C10431C74F8444BD6EA6_StaticFields, ___Instance_0)); }
	inline Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Boolean>
struct  Caster_1_t9FE3224C68AEE6C4ABA9C3A09F120EDA52A78A85  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9FE3224C68AEE6C4ABA9C3A09F120EDA52A78A85_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9FE3224C68AEE6C4ABA9C3A09F120EDA52A78A85_StaticFields, ___Instance_0)); }
	inline Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Byte>
struct  Caster_1_tD07A01A4AB8A981E25B1815E0F56DBBA481FB488  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD07A01A4AB8A981E25B1815E0F56DBBA481FB488_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD07A01A4AB8A981E25B1815E0F56DBBA481FB488_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Char>
struct  Caster_1_t23E1BEDEA465B2FE0C4BC88DF482A3A0621245E2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t23E1BEDEA465B2FE0C4BC88DF482A3A0621245E2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t23E1BEDEA465B2FE0C4BC88DF482A3A0621245E2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_tB9CE9C085D67ADB638BA02C0CA3D2578A8DBD1A1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB9CE9C085D67ADB638BA02C0CA3D2578A8DBD1A1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB9CE9C085D67ADB638BA02C0CA3D2578A8DBD1A1_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.DateTime>
struct  Caster_1_t03F1A22DDCFFB6CA1EE3157E94B9A415498F3E45  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t03F1A22DDCFFB6CA1EE3157E94B9A415498F3E45_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t03F1A22DDCFFB6CA1EE3157E94B9A415498F3E45_StaticFields, ___Instance_0)); }
	inline Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.DateTimeOffset>
struct  Caster_1_tD466E195E4E33B18AC090BE8227230DD00254871  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD466E195E4E33B18AC090BE8227230DD00254871_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD466E195E4E33B18AC090BE8227230DD00254871_StaticFields, ___Instance_0)); }
	inline Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Decimal>
struct  Caster_1_t356F1486915070BEE950AE11D1BF52A9C2C0DE20  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t356F1486915070BEE950AE11D1BF52A9C2C0DE20_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t356F1486915070BEE950AE11D1BF52A9C2C0DE20_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t42349D34EA9FAC76F234F2F981A14480957DCAE5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t42349D34EA9FAC76F234F2F981A14480957DCAE5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t42349D34EA9FAC76F234F2F981A14480957DCAE5_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Double>
struct  Caster_1_t204C853C13D273E3449FC5E906E5E6B941CCD600  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t204C853C13D273E3449FC5E906E5E6B941CCD600_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t204C853C13D273E3449FC5E906E5E6B941CCD600_StaticFields, ___Instance_0)); }
	inline Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Guid>
struct  Caster_1_t868D5311D106D9FE55DBB4F56BFA1F80AB361666  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t868D5311D106D9FE55DBB4F56BFA1F80AB361666_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t868D5311D106D9FE55DBB4F56BFA1F80AB361666_StaticFields, ___Instance_0)); }
	inline Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Int16>
struct  Caster_1_tB91A82FA14A4A4E569EB93553EA899B6FBBA7E78  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB91A82FA14A4A4E569EB93553EA899B6FBBA7E78_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB91A82FA14A4A4E569EB93553EA899B6FBBA7E78_StaticFields, ___Instance_0)); }
	inline Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Int32>
struct  Caster_1_tE1DD30AB4029612CD56B09122178FD4DF29CEA5E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE1DD30AB4029612CD56B09122178FD4DF29CEA5E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE1DD30AB4029612CD56B09122178FD4DF29CEA5E_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Int64>
struct  Caster_1_t168FC169D2FD7651A831F26A3AF8F79C89700F84  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t168FC169D2FD7651A831F26A3AF8F79C89700F84_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t168FC169D2FD7651A831F26A3AF8F79C89700F84_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.IntPtr>
struct  Caster_1_t40BE0AF08E046636C00A1A588EB58F2F3377E223  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t40BE0AF08E046636C00A1A588EB58F2F3377E223_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t40BE0AF08E046636C00A1A588EB58F2F3377E223_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Object>
struct  Caster_1_t12DF6952392D0FED624EF47F6DE9D2FB1F8B046D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t12DF6952392D0FED624EF47F6DE9D2FB1F8B046D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t12DF6952392D0FED624EF47F6DE9D2FB1F8B046D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.SByte>
struct  Caster_1_tF4338CF2303C845BF3E79CEBCBE82A0DE79DC6AD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF4338CF2303C845BF3E79CEBCBE82A0DE79DC6AD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF4338CF2303C845BF3E79CEBCBE82A0DE79DC6AD_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Single>
struct  Caster_1_tF67DB938E6F11BBA2F382812E0A292FC1A5C2C0E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF67DB938E6F11BBA2F382812E0A292FC1A5C2C0E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF67DB938E6F11BBA2F382812E0A292FC1A5C2C0E_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.TimeSpan>
struct  Caster_1_t9A297416E25E59EF55DA67381A6AACA321D6402C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9A297416E25E59EF55DA67381A6AACA321D6402C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9A297416E25E59EF55DA67381A6AACA321D6402C_StaticFields, ___Instance_0)); }
	inline Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UInt16>
struct  Caster_1_t0AB03EBEEE4F0D9B08B36FE7BD6A6159AFEEDF12  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0AB03EBEEE4F0D9B08B36FE7BD6A6159AFEEDF12_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0AB03EBEEE4F0D9B08B36FE7BD6A6159AFEEDF12_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UInt32>
struct  Caster_1_t06142C64346ABC2D451ADF4CB9E980C5CA27CD88  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t06142C64346ABC2D451ADF4CB9E980C5CA27CD88_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t06142C64346ABC2D451ADF4CB9E980C5CA27CD88_StaticFields, ___Instance_0)); }
	inline Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UInt64>
struct  Caster_1_t920F9B7FFCFDFB9B9024484E88617329683105F2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t920F9B7FFCFDFB9B9024484E88617329683105F2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t920F9B7FFCFDFB9B9024484E88617329683105F2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UIntPtr>
struct  Caster_1_t59015BBD0A7090C4DD0FEB6C85876BA881B2E1A3  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t59015BBD0A7090C4DD0FEB6C85876BA881B2E1A3_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t59015BBD0A7090C4DD0FEB6C85876BA881B2E1A3_StaticFields, ___Instance_0)); }
	inline Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Int64>
struct  EnumHelper_1_t0BA1977F909FE948AAD5243D1B7C86D1D12A2C81  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t0BA1977F909FE948AAD5243D1B7C86D1D12A2C81_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t0BA1977F909FE948AAD5243D1B7C86D1D12A2C81_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Object>
struct  EnumHelper_1_t9A5A2A5D5D0ABD1D770B359F6C07DD36CC834558  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t9A5A2A5D5D0ABD1D770B359F6C07DD36CC834558_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t9A5A2A5D5D0ABD1D770B359F6C07DD36CC834558_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.SByte>
struct  EnumHelper_1_t1A18AB4B10A79E8CE2267B3FAD22C9B957BBCA3E  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t1A18AB4B10A79E8CE2267B3FAD22C9B957BBCA3E_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t1A18AB4B10A79E8CE2267B3FAD22C9B957BBCA3E_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>
struct  EnumHelper_1_t2D08E12E0A6AD73687A24BCA4D645C9F49D8D946  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t2D08E12E0A6AD73687A24BCA4D645C9F49D8D946_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t2D08E12E0A6AD73687A24BCA4D645C9F49D8D946_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>
struct  EnumHelper_1_tC82FAAF78504152B465669C9102B86D7DCE21244  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_tC82FAAF78504152B465669C9102B86D7DCE21244_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_tC82FAAF78504152B465669C9102B86D7DCE21244_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>
struct  EnumHelper_1_t710CB15BC03192055332903E689AAFD52F3E8852  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t710CB15BC03192055332903E689AAFD52F3E8852_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t710CB15BC03192055332903E689AAFD52F3E8852_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Linq.Enumerable_Iterator`1<System.Int32>
struct  Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable_Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable_Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable_Iterator`1::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable_Iterator`1<System.Object>
struct  Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable_Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable_Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable_Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Versioning.BinaryCompatibility
struct  BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810  : public RuntimeObject
{
public:

public:
};

struct BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields
{
public:
	// System.Boolean System.Runtime.Versioning.BinaryCompatibility::TargetsAtLeast_Desktop_V4_5
	bool ___TargetsAtLeast_Desktop_V4_5_0;
	// System.Boolean System.Runtime.Versioning.BinaryCompatibility::TargetsAtLeast_Desktop_V4_5_1
	bool ___TargetsAtLeast_Desktop_V4_5_1_1;

public:
	inline static int32_t get_offset_of_TargetsAtLeast_Desktop_V4_5_0() { return static_cast<int32_t>(offsetof(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields, ___TargetsAtLeast_Desktop_V4_5_0)); }
	inline bool get_TargetsAtLeast_Desktop_V4_5_0() const { return ___TargetsAtLeast_Desktop_V4_5_0; }
	inline bool* get_address_of_TargetsAtLeast_Desktop_V4_5_0() { return &___TargetsAtLeast_Desktop_V4_5_0; }
	inline void set_TargetsAtLeast_Desktop_V4_5_0(bool value)
	{
		___TargetsAtLeast_Desktop_V4_5_0 = value;
	}

	inline static int32_t get_offset_of_TargetsAtLeast_Desktop_V4_5_1_1() { return static_cast<int32_t>(offsetof(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields, ___TargetsAtLeast_Desktop_V4_5_1_1)); }
	inline bool get_TargetsAtLeast_Desktop_V4_5_1_1() const { return ___TargetsAtLeast_Desktop_V4_5_1_1; }
	inline bool* get_address_of_TargetsAtLeast_Desktop_V4_5_1_1() { return &___TargetsAtLeast_Desktop_V4_5_1_1; }
	inline void set_TargetsAtLeast_Desktop_V4_5_1_1(bool value)
	{
		___TargetsAtLeast_Desktop_V4_5_1_1 = value;
	}
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


// System.Threading.AtomicBoolean
struct  AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E  : public RuntimeObject
{
public:
	// System.Int32 System.Threading.AtomicBoolean::flag
	int32_t ___flag_0;

public:
	inline static int32_t get_offset_of_flag_0() { return static_cast<int32_t>(offsetof(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E, ___flag_0)); }
	inline int32_t get_flag_0() const { return ___flag_0; }
	inline int32_t* get_address_of_flag_0() { return &___flag_0; }
	inline void set_flag_0(int32_t value)
	{
		___flag_0 = value;
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1<System.Object,System.Object>
struct  U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192  : public RuntimeObject
{
public:
	// System.Func`2<System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1::endFunction
	Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * ___endFunction_0;
	// System.Action`1<System.IAsyncResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1::endAction
	Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction_1;
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1::promise
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___promise_2;

public:
	inline static int32_t get_offset_of_endFunction_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192, ___endFunction_0)); }
	inline Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * get_endFunction_0() const { return ___endFunction_0; }
	inline Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED ** get_address_of_endFunction_0() { return &___endFunction_0; }
	inline void set_endFunction_0(Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * value)
	{
		___endFunction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endFunction_0), (void*)value);
	}

	inline static int32_t get_offset_of_endAction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192, ___endAction_1)); }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * get_endAction_1() const { return ___endAction_1; }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 ** get_address_of_endAction_1() { return &___endAction_1; }
	inline void set_endAction_1(Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * value)
	{
		___endAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endAction_1), (void*)value);
	}

	inline static int32_t get_offset_of_promise_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192, ___promise_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_promise_2() const { return ___promise_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_promise_2() { return &___promise_2; }
	inline void set_promise_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___promise_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promise_2), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1<System.Threading.Tasks.VoidTaskResult,System.Object>
struct  U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC  : public RuntimeObject
{
public:
	// System.Func`2<System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1::endFunction
	Func_2_t93436DB66248BF735350EEC072257D84453153ED * ___endFunction_0;
	// System.Action`1<System.IAsyncResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1::endAction
	Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction_1;
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1::promise
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___promise_2;

public:
	inline static int32_t get_offset_of_endFunction_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC, ___endFunction_0)); }
	inline Func_2_t93436DB66248BF735350EEC072257D84453153ED * get_endFunction_0() const { return ___endFunction_0; }
	inline Func_2_t93436DB66248BF735350EEC072257D84453153ED ** get_address_of_endFunction_0() { return &___endFunction_0; }
	inline void set_endFunction_0(Func_2_t93436DB66248BF735350EEC072257D84453153ED * value)
	{
		___endFunction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endFunction_0), (void*)value);
	}

	inline static int32_t get_offset_of_endAction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC, ___endAction_1)); }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * get_endAction_1() const { return ___endAction_1; }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 ** get_address_of_endAction_1() { return &___endAction_1; }
	inline void set_endAction_1(Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * value)
	{
		___endAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endAction_1), (void*)value);
	}

	inline static int32_t get_offset_of_promise_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC, ___promise_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_promise_2() const { return ___promise_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_promise_2() { return &___promise_2; }
	inline void set_promise_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___promise_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promise_2), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_1`1<System.Object,System.Object>
struct  U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD  : public RuntimeObject
{
public:
	// System.Threading.AtomicBoolean System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_1`1::invoked
	AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * ___invoked_0;
	// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1<TResult,TArg1> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_1`1::CSU24<>8__locals1
	U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_invoked_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD, ___invoked_0)); }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * get_invoked_0() const { return ___invoked_0; }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E ** get_address_of_invoked_0() { return &___invoked_0; }
	inline void set_invoked_0(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * value)
	{
		___invoked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invoked_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_1`1<System.Threading.Tasks.VoidTaskResult,System.Object>
struct  U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B  : public RuntimeObject
{
public:
	// System.Threading.AtomicBoolean System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_1`1::invoked
	AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * ___invoked_0;
	// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1<TResult,TArg1> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_1`1::CSU24<>8__locals1
	U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_invoked_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B, ___invoked_0)); }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * get_invoked_0() const { return ___invoked_0; }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E ** get_address_of_invoked_0() { return &___invoked_0; }
	inline void set_invoked_0(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * value)
	{
		___invoked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invoked_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_0`2<System.Object,System.Object,System.Object>
struct  U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B  : public RuntimeObject
{
public:
	// System.Func`2<System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_0`2::endFunction
	Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * ___endFunction_0;
	// System.Action`1<System.IAsyncResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_0`2::endAction
	Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction_1;
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_0`2::promise
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___promise_2;

public:
	inline static int32_t get_offset_of_endFunction_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B, ___endFunction_0)); }
	inline Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * get_endFunction_0() const { return ___endFunction_0; }
	inline Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED ** get_address_of_endFunction_0() { return &___endFunction_0; }
	inline void set_endFunction_0(Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * value)
	{
		___endFunction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endFunction_0), (void*)value);
	}

	inline static int32_t get_offset_of_endAction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B, ___endAction_1)); }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * get_endAction_1() const { return ___endAction_1; }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 ** get_address_of_endAction_1() { return &___endAction_1; }
	inline void set_endAction_1(Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * value)
	{
		___endAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endAction_1), (void*)value);
	}

	inline static int32_t get_offset_of_promise_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B, ___promise_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_promise_2() const { return ___promise_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_promise_2() { return &___promise_2; }
	inline void set_promise_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___promise_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promise_2), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_0`2<System.Threading.Tasks.VoidTaskResult,System.Object,System.Int32>
struct  U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D  : public RuntimeObject
{
public:
	// System.Func`2<System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_0`2::endFunction
	Func_2_t93436DB66248BF735350EEC072257D84453153ED * ___endFunction_0;
	// System.Action`1<System.IAsyncResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_0`2::endAction
	Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction_1;
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_0`2::promise
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___promise_2;

public:
	inline static int32_t get_offset_of_endFunction_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D, ___endFunction_0)); }
	inline Func_2_t93436DB66248BF735350EEC072257D84453153ED * get_endFunction_0() const { return ___endFunction_0; }
	inline Func_2_t93436DB66248BF735350EEC072257D84453153ED ** get_address_of_endFunction_0() { return &___endFunction_0; }
	inline void set_endFunction_0(Func_2_t93436DB66248BF735350EEC072257D84453153ED * value)
	{
		___endFunction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endFunction_0), (void*)value);
	}

	inline static int32_t get_offset_of_endAction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D, ___endAction_1)); }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * get_endAction_1() const { return ___endAction_1; }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 ** get_address_of_endAction_1() { return &___endAction_1; }
	inline void set_endAction_1(Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * value)
	{
		___endAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endAction_1), (void*)value);
	}

	inline static int32_t get_offset_of_promise_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D, ___promise_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_promise_2() const { return ___promise_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_promise_2() { return &___promise_2; }
	inline void set_promise_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___promise_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promise_2), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_0`2<System.Threading.Tasks.VoidTaskResult,System.Object,System.Object>
struct  U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF  : public RuntimeObject
{
public:
	// System.Func`2<System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_0`2::endFunction
	Func_2_t93436DB66248BF735350EEC072257D84453153ED * ___endFunction_0;
	// System.Action`1<System.IAsyncResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_0`2::endAction
	Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction_1;
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_0`2::promise
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___promise_2;

public:
	inline static int32_t get_offset_of_endFunction_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF, ___endFunction_0)); }
	inline Func_2_t93436DB66248BF735350EEC072257D84453153ED * get_endFunction_0() const { return ___endFunction_0; }
	inline Func_2_t93436DB66248BF735350EEC072257D84453153ED ** get_address_of_endFunction_0() { return &___endFunction_0; }
	inline void set_endFunction_0(Func_2_t93436DB66248BF735350EEC072257D84453153ED * value)
	{
		___endFunction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endFunction_0), (void*)value);
	}

	inline static int32_t get_offset_of_endAction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF, ___endAction_1)); }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * get_endAction_1() const { return ___endAction_1; }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 ** get_address_of_endAction_1() { return &___endAction_1; }
	inline void set_endAction_1(Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * value)
	{
		___endAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endAction_1), (void*)value);
	}

	inline static int32_t get_offset_of_promise_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF, ___promise_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_promise_2() const { return ___promise_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_promise_2() { return &___promise_2; }
	inline void set_promise_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___promise_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promise_2), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_1`2<System.Object,System.Object,System.Object>
struct  U3CU3Ec__DisplayClass41_1_2_t14E1C53A8DFC3E4AAC7C00497B12A5A25F8A9794  : public RuntimeObject
{
public:
	// System.Threading.AtomicBoolean System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_1`2::invoked
	AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * ___invoked_0;
	// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_0`2<TResult,TArg1,TArg2> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_1`2::CSU24<>8__locals1
	U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_invoked_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_1_2_t14E1C53A8DFC3E4AAC7C00497B12A5A25F8A9794, ___invoked_0)); }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * get_invoked_0() const { return ___invoked_0; }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E ** get_address_of_invoked_0() { return &___invoked_0; }
	inline void set_invoked_0(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * value)
	{
		___invoked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invoked_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_1_2_t14E1C53A8DFC3E4AAC7C00497B12A5A25F8A9794, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_1`2<System.Threading.Tasks.VoidTaskResult,System.Object,System.Int32>
struct  U3CU3Ec__DisplayClass41_1_2_t0F4199CEB2152716BBF8EAC4E095B3B2A0A58AAD  : public RuntimeObject
{
public:
	// System.Threading.AtomicBoolean System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_1`2::invoked
	AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * ___invoked_0;
	// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_0`2<TResult,TArg1,TArg2> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_1`2::CSU24<>8__locals1
	U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_invoked_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_1_2_t0F4199CEB2152716BBF8EAC4E095B3B2A0A58AAD, ___invoked_0)); }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * get_invoked_0() const { return ___invoked_0; }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E ** get_address_of_invoked_0() { return &___invoked_0; }
	inline void set_invoked_0(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * value)
	{
		___invoked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invoked_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_1_2_t0F4199CEB2152716BBF8EAC4E095B3B2A0A58AAD, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_1`2<System.Threading.Tasks.VoidTaskResult,System.Object,System.Object>
struct  U3CU3Ec__DisplayClass41_1_2_t93941A8F6A00A31807C0D2F83A0B7BDC4E042E32  : public RuntimeObject
{
public:
	// System.Threading.AtomicBoolean System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_1`2::invoked
	AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * ___invoked_0;
	// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_0`2<TResult,TArg1,TArg2> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass41_1`2::CSU24<>8__locals1
	U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_invoked_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_1_2_t93941A8F6A00A31807C0D2F83A0B7BDC4E042E32, ___invoked_0)); }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * get_invoked_0() const { return ___invoked_0; }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E ** get_address_of_invoked_0() { return &___invoked_0; }
	inline void set_invoked_0(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * value)
	{
		___invoked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invoked_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_1_2_t93941A8F6A00A31807C0D2F83A0B7BDC4E042E32, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass44_0`3<System.Int32,System.Object,System.Int32,System.Object>
struct  U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74  : public RuntimeObject
{
public:
	// System.Func`2<System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass44_0`3::endFunction
	Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892 * ___endFunction_0;
	// System.Action`1<System.IAsyncResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass44_0`3::endAction
	Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction_1;
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass44_0`3::promise
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___promise_2;

public:
	inline static int32_t get_offset_of_endFunction_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74, ___endFunction_0)); }
	inline Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892 * get_endFunction_0() const { return ___endFunction_0; }
	inline Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892 ** get_address_of_endFunction_0() { return &___endFunction_0; }
	inline void set_endFunction_0(Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892 * value)
	{
		___endFunction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endFunction_0), (void*)value);
	}

	inline static int32_t get_offset_of_endAction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74, ___endAction_1)); }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * get_endAction_1() const { return ___endAction_1; }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 ** get_address_of_endAction_1() { return &___endAction_1; }
	inline void set_endAction_1(Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * value)
	{
		___endAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endAction_1), (void*)value);
	}

	inline static int32_t get_offset_of_promise_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74, ___promise_2)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_promise_2() const { return ___promise_2; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_promise_2() { return &___promise_2; }
	inline void set_promise_2(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___promise_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promise_2), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass44_0`3<System.Object,System.Object,System.Object,System.Object>
struct  U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2  : public RuntimeObject
{
public:
	// System.Func`2<System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass44_0`3::endFunction
	Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * ___endFunction_0;
	// System.Action`1<System.IAsyncResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass44_0`3::endAction
	Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction_1;
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass44_0`3::promise
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___promise_2;

public:
	inline static int32_t get_offset_of_endFunction_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2, ___endFunction_0)); }
	inline Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * get_endFunction_0() const { return ___endFunction_0; }
	inline Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED ** get_address_of_endFunction_0() { return &___endFunction_0; }
	inline void set_endFunction_0(Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * value)
	{
		___endFunction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endFunction_0), (void*)value);
	}

	inline static int32_t get_offset_of_endAction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2, ___endAction_1)); }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * get_endAction_1() const { return ___endAction_1; }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 ** get_address_of_endAction_1() { return &___endAction_1; }
	inline void set_endAction_1(Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * value)
	{
		___endAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endAction_1), (void*)value);
	}

	inline static int32_t get_offset_of_promise_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2, ___promise_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_promise_2() const { return ___promise_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_promise_2() { return &___promise_2; }
	inline void set_promise_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___promise_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promise_2), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass44_1`3<System.Int32,System.Object,System.Int32,System.Object>
struct  U3CU3Ec__DisplayClass44_1_3_tE1F045E1C4856A6FC86009DC8BFA6FB6F5B74936  : public RuntimeObject
{
public:
	// System.Threading.AtomicBoolean System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass44_1`3::invoked
	AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * ___invoked_0;
	// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass44_0`3<TResult,TArg1,TArg2,TArg3> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass44_1`3::CSU24<>8__locals1
	U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_invoked_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_1_3_tE1F045E1C4856A6FC86009DC8BFA6FB6F5B74936, ___invoked_0)); }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * get_invoked_0() const { return ___invoked_0; }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E ** get_address_of_invoked_0() { return &___invoked_0; }
	inline void set_invoked_0(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * value)
	{
		___invoked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invoked_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_1_3_tE1F045E1C4856A6FC86009DC8BFA6FB6F5B74936, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass44_1`3<System.Object,System.Object,System.Object,System.Object>
struct  U3CU3Ec__DisplayClass44_1_3_tCD6159A10EFC46E8F276FA977274DA62C82BED9E  : public RuntimeObject
{
public:
	// System.Threading.AtomicBoolean System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass44_1`3::invoked
	AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * ___invoked_0;
	// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass44_0`3<TResult,TArg1,TArg2,TArg3> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass44_1`3::CSU24<>8__locals1
	U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_invoked_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_1_3_tCD6159A10EFC46E8F276FA977274DA62C82BED9E, ___invoked_0)); }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * get_invoked_0() const { return ___invoked_0; }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E ** get_address_of_invoked_0() { return &___invoked_0; }
	inline void set_invoked_0(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * value)
	{
		___invoked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invoked_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_1_3_tCD6159A10EFC46E8F276FA977274DA62C82BED9E, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
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


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Diagnostics.Tracing.EmptyStruct
struct  EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62__padding[1];
	};

public:
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.IO.Stream_ReadWriteParameters
struct  ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47 
{
public:
	// System.Byte[] System.IO.Stream_ReadWriteParameters::Buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Buffer_0;
	// System.Int32 System.IO.Stream_ReadWriteParameters::Offset
	int32_t ___Offset_1;
	// System.Int32 System.IO.Stream_ReadWriteParameters::Count
	int32_t ___Count_2;

public:
	inline static int32_t get_offset_of_Buffer_0() { return static_cast<int32_t>(offsetof(ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47, ___Buffer_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Buffer_0() const { return ___Buffer_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Buffer_0() { return &___Buffer_0; }
	inline void set_Buffer_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_Offset_1() { return static_cast<int32_t>(offsetof(ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47, ___Offset_1)); }
	inline int32_t get_Offset_1() const { return ___Offset_1; }
	inline int32_t* get_address_of_Offset_1() { return &___Offset_1; }
	inline void set_Offset_1(int32_t value)
	{
		___Offset_1 = value;
	}

	inline static int32_t get_offset_of_Count_2() { return static_cast<int32_t>(offsetof(ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47, ___Count_2)); }
	inline int32_t get_Count_2() const { return ___Count_2; }
	inline int32_t* get_address_of_Count_2() { return &___Count_2; }
	inline void set_Count_2(int32_t value)
	{
		___Count_2 = value;
	}
};

// Native definition for P/Invoke marshalling of System.IO.Stream/ReadWriteParameters
struct ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___Buffer_0;
	int32_t ___Offset_1;
	int32_t ___Count_2;
};
// Native definition for COM marshalling of System.IO.Stream/ReadWriteParameters
struct ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___Buffer_0;
	int32_t ___Offset_1;
	int32_t ___Count_2;
};

// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Linq.Enumerable_WhereArrayIterator`1<System.Object>
struct  WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable_WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable_WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable_WhereEnumerableIterator`1<System.Object>
struct  WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct  WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable_WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectArrayIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectArrayIterator`2::selector
	Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * ___selector_5;
	// System.Int32 System.Linq.Enumerable_WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3, ___selector_5)); }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * get_selector_5() const { return ___selector_5; }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct  WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable_WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectArrayIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectArrayIterator`2::selector
	Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector_5;
	// System.Int32 System.Linq.Enumerable_WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC, ___selector_5)); }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Int32Enum,System.Int32>
struct  WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable_WhereSelectArrayIterator`2::source
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectArrayIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectArrayIterator`2::selector
	Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * ___selector_5;
	// System.Int32 System.Linq.Enumerable_WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170, ___source_3)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get_source_3() const { return ___source_3; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170, ___selector_5)); }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Int32Enum,System.Object>
struct  WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable_WhereSelectArrayIterator`2::source
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectArrayIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectArrayIterator`2::selector
	Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector_5;
	// System.Int32 System.Linq.Enumerable_WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153, ___source_3)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get_source_3() const { return ___source_3; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153, ___selector_5)); }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Object,System.Int32>
struct  WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable_WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectArrayIterator`2::selector
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector_5;
	// System.Int32 System.Linq.Enumerable_WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___selector_5)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Object,System.Object>
struct  WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable_WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectArrayIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Int32 System.Linq.Enumerable_WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct  WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B, ___selector_5)); }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * get_selector_5() const { return ___selector_5; }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct  WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E, ___selector_5)); }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Int32Enum,System.Int32>
struct  WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D, ___selector_5)); }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>
struct  WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6, ___selector_5)); }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Object,System.Int32>
struct  WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___selector_5)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct  WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Nullable`1<System.Int32>
struct  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// System.Threading.CancellationToken
struct  CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Threading.Tasks.VoidTaskResult
struct  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004__padding[1];
	};

public:
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};


// System.ValueTuple`2<System.Int32,System.Int32>
struct  ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
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


// System.DateTimeOffset
struct  DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
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

// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Linq.Enumerable_Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable_Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable_Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable_Iterator`1::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366, ___current_2)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_2() const { return ___current_2; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable_WhereListIterator`1<System.Object>
struct  WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable_WhereSelectListIterator`2<System.Object,System.Int32>
struct  WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectListIterator`2::selector
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector_5;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___selector_5)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable_WhereSelectListIterator`2<System.Object,System.Object>
struct  WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectListIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Threading.StackCrawlMark
struct  StackCrawlMark_t2BEE6EC5F8EA322B986CA375A594BBD34B98EBA5 
{
public:
	// System.Int32 System.Threading.StackCrawlMark::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StackCrawlMark_t2BEE6EC5F8EA322B986CA375A594BBD34B98EBA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.AsyncCausalityStatus
struct  AsyncCausalityStatus_tB4918F222DA36F8D1AFD305EEBD3DE3C6FA1631F 
{
public:
	// System.Int32 System.Threading.Tasks.AsyncCausalityStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncCausalityStatus_tB4918F222DA36F8D1AFD305EEBD3DE3C6FA1631F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.CausalityTraceLevel
struct  CausalityTraceLevel_t01DEED18A37C591FB2E53F2ADD89E2145ED8A9CD 
{
public:
	// System.Int32 System.Threading.Tasks.CausalityTraceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CausalityTraceLevel_t01DEED18A37C591FB2E53F2ADD89E2145ED8A9CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.InternalTaskOptions
struct  InternalTaskOptions_tE9869E444962B12AAF216CDE276D379BD57D5EEF 
{
public:
	// System.Int32 System.Threading.Tasks.InternalTaskOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InternalTaskOptions_tE9869E444962B12AAF216CDE276D379BD57D5EEF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskContinuationOptions
struct  TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskCreationOptions
struct  TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTaskSchedulers_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultTaskScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskException_4), (void*)value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskExceptionLockObject_5), (void*)value);
	}
};


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>
struct  KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Int32Enum>
struct  Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___list_0)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_list_0() const { return ___list_0; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Linq.Enumerable_Iterator`1<System.Int32Enum>
struct  Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable_Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable_Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable_Iterator`1::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
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


// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct  TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// System.Threading.Tasks.TaskFactory`1<System.Object>
struct  TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct  TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Int32>
struct  Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>>
struct  Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581, ___m_result_40)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_m_result_40() const { return ___m_result_40; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tC38251ED2F273F12DD35B9D834895E8343290094 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tACAF262312375D7D8F7883E8DA2431DDAF082BFA * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tC38251ED2F273F12DD35B9D834895E8343290094 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tC38251ED2F273F12DD35B9D834895E8343290094 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tC38251ED2F273F12DD35B9D834895E8343290094 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tACAF262312375D7D8F7883E8DA2431DDAF082BFA * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tACAF262312375D7D8F7883E8DA2431DDAF082BFA ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tACAF262312375D7D8F7883E8DA2431DDAF082BFA * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct  Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_40)); }
	inline RuntimeObject * get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct  Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3, ___m_result_40)); }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  get_m_result_40() const { return ___m_result_40; }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>
struct  Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F, ___m_result_40)); }
	inline ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  get_m_result_40() const { return ___m_result_40; }
	inline ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Action`1<System.IAsyncResult>
struct  Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Collections.Generic.List`1_Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90, ___list_0)); }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * get_list_0() const { return ___list_0; }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90, ___current_3)); }
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Int32>
struct  Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Int64>
struct  Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.IntPtr>
struct  Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Object>
struct  Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.SByte>
struct  Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Single>
struct  Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.TimeSpan>
struct  Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.UInt16>
struct  Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.UInt32>
struct  Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.UInt64>
struct  Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.UIntPtr>
struct  Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Object,System.Object>
struct  Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Boolean>
struct  Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Byte>
struct  Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Char>
struct  Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.DateTime>
struct  Transformer_1_t85017CA131468548211F084ACC574B9CAA055755  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.DateTimeOffset>
struct  Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Decimal>
struct  Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Double>
struct  Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Guid>
struct  Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Int16>
struct  Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Int32>
struct  Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Int64>
struct  Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.IntPtr>
struct  Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Object>
struct  Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.SByte>
struct  Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Single>
struct  Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.TimeSpan>
struct  Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.UInt16>
struct  Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.UInt32>
struct  Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.UInt64>
struct  Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.UIntPtr>
struct  Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Boolean>
struct  Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Byte>
struct  Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Char>
struct  Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.DateTime>
struct  Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.DateTimeOffset>
struct  Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Decimal>
struct  Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Double>
struct  Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Guid>
struct  Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Int16>
struct  Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Int32>
struct  Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Int64>
struct  Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.IntPtr>
struct  Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Object>
struct  Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.SByte>
struct  Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Single>
struct  Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.TimeSpan>
struct  Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.UInt16>
struct  Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.UInt32>
struct  Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.UInt64>
struct  Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.UIntPtr>
struct  Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Boolean>
struct  Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Byte>
struct  Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Char>
struct  Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.DateTime>
struct  Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.DateTimeOffset>
struct  Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Decimal>
struct  Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Double>
struct  Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Guid>
struct  Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Int16>
struct  Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Int32>
struct  Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Int64>
struct  Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.IntPtr>
struct  Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Object>
struct  Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.SByte>
struct  Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Single>
struct  Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.TimeSpan>
struct  Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.UInt16>
struct  Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.UInt32>
struct  Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.UInt64>
struct  Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.UIntPtr>
struct  Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Boolean>
struct  Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Byte>
struct  Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Char>
struct  Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.DateTime>
struct  Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.DateTimeOffset>
struct  Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Decimal>
struct  Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Double>
struct  Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Guid>
struct  Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Int16>
struct  Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Int32>
struct  Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Int64>
struct  Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.IntPtr>
struct  Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Object>
struct  Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.SByte>
struct  Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Single>
struct  Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.TimeSpan>
struct  Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UInt16>
struct  Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UInt32>
struct  Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UInt64>
struct  Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UIntPtr>
struct  Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Boolean>
struct  Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct  Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct  Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.IAsyncResult,System.Int32>
struct  Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.IAsyncResult,System.Object>
struct  Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>
struct  Func_2_t93436DB66248BF735350EEC072257D84453153ED  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32Enum,System.Boolean>
struct  Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32Enum,System.Int32>
struct  Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32Enum,System.Object>
struct  Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Int32>
struct  Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct  Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Nullable`1<System.Int32>>
struct  Func_2_tC6816526F3327CB168F701FED02EB54522A97009  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
struct  Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>,System.Nullable`1<System.Int32>>
struct  Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Object,System.IAsyncResult,System.Int32>
struct  Func_3_t5C0DDA503F361B889D22FB85D5532AC9B1AE6C69  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Object,System.IAsyncResult,System.Object>
struct  Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Object,System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>
struct  Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`4<System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct  Func_4_t1FB292635292578289C454E038620354E9A7662D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`5<System.Object,System.IO.Stream_ReadWriteParameters,System.AsyncCallback,System.Object,System.IAsyncResult>
struct  Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`5<System.Object,System.Int32,System.AsyncCallback,System.Object,System.IAsyncResult>
struct  Func_5_t71E6A6C70D6F26AFC91F688843ACAB6E65937AD0  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`5<System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct  Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`6<System.Object,System.Int32,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct  Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`6<System.Object,System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct  Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97  : public MulticastDelegate_t
{
public:

public:
};


// System.Linq.Enumerable_Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable_Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable_Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable_Iterator`1::current
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC, ___current_2)); }
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  get_current_2() const { return ___current_2; }
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___value_1), (void*)NULL);
	}
};


// System.Linq.Enumerable_WhereArrayIterator`1<System.Int32Enum>
struct  WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7  : public Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9
{
public:
	// TSource[] System.Linq.Enumerable_WhereArrayIterator`1::source
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereArrayIterator`1::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Int32 System.Linq.Enumerable_WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7, ___source_3)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get_source_3() const { return ___source_3; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable_WhereEnumerableIterator`1<System.Int32Enum>
struct  WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23  : public Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereEnumerableIterator`1::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable_WhereListIterator`1<System.Int32Enum>
struct  WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B  : public Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereListIterator`1::source
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereListIterator`1::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereListIterator`1::enumerator
	Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B, ___source_3)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_source_3() const { return ___source_3; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B, ___enumerator_5)); }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable_WhereSelectListIterator`2<System.Int32Enum,System.Int32>
struct  WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::source
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectListIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectListIterator`2::selector
	Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * ___selector_5;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::enumerator
	Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB, ___source_3)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_source_3() const { return ___source_3; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB, ___selector_5)); }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB, ___enumerator_6)); }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable_WhereSelectListIterator`2<System.Int32Enum,System.Object>
struct  WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::source
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectListIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectListIterator`2::selector
	Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector_5;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::enumerator
	Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8, ___source_3)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_source_3() const { return ___source_3; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8, ___selector_5)); }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8, ___enumerator_6)); }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Threading.Tasks.ContinuationResultTaskFromResultTask`2<System.Object,System.Nullable`1<System.Int32>>
struct  ContinuationResultTaskFromResultTask_2_t824B34AB5675F06CE6CD82F26E6D26A806FBA67E  : public Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581
{
public:
	// System.Threading.Tasks.Task`1<TAntecedentResult> System.Threading.Tasks.ContinuationResultTaskFromResultTask`2::m_antecedent
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_antecedent_43;

public:
	inline static int32_t get_offset_of_m_antecedent_43() { return static_cast<int32_t>(offsetof(ContinuationResultTaskFromResultTask_2_t824B34AB5675F06CE6CD82F26E6D26A806FBA67E, ___m_antecedent_43)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_antecedent_43() const { return ___m_antecedent_43; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_antecedent_43() { return &___m_antecedent_43; }
	inline void set_m_antecedent_43(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_antecedent_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_antecedent_43), (void*)value);
	}
};


// System.Threading.Tasks.ContinuationResultTaskFromResultTask`2<System.Object,System.Object>
struct  ContinuationResultTaskFromResultTask_2_t04599255F5B221AF375C60B98DCCCA03183073B5  : public Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17
{
public:
	// System.Threading.Tasks.Task`1<TAntecedentResult> System.Threading.Tasks.ContinuationResultTaskFromResultTask`2::m_antecedent
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_antecedent_43;

public:
	inline static int32_t get_offset_of_m_antecedent_43() { return static_cast<int32_t>(offsetof(ContinuationResultTaskFromResultTask_2_t04599255F5B221AF375C60B98DCCCA03183073B5, ___m_antecedent_43)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_antecedent_43() const { return ___m_antecedent_43; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_antecedent_43() { return &___m_antecedent_43; }
	inline void set_m_antecedent_43(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_antecedent_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_antecedent_43), (void*)value);
	}
};


// System.Threading.Tasks.ContinuationResultTaskFromResultTask`2<System.ValueTuple`2<System.Int32,System.Int32>,System.Nullable`1<System.Int32>>
struct  ContinuationResultTaskFromResultTask_2_t978BBB17B79E82EF26D49614633F8F6A1BF4B632  : public Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581
{
public:
	// System.Threading.Tasks.Task`1<TAntecedentResult> System.Threading.Tasks.ContinuationResultTaskFromResultTask`2::m_antecedent
	Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * ___m_antecedent_43;

public:
	inline static int32_t get_offset_of_m_antecedent_43() { return static_cast<int32_t>(offsetof(ContinuationResultTaskFromResultTask_2_t978BBB17B79E82EF26D49614633F8F6A1BF4B632, ___m_antecedent_43)); }
	inline Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * get_m_antecedent_43() const { return ___m_antecedent_43; }
	inline Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F ** get_address_of_m_antecedent_43() { return &___m_antecedent_43; }
	inline void set_m_antecedent_43(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * value)
	{
		___m_antecedent_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_antecedent_43), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1<System.Int32,System.Object>
struct  FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9  : public Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725
{
public:
	// TInstance System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1::m_thisRef
	RuntimeObject * ___m_thisRef_44;
	// System.Func`3<TInstance,System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1::m_endMethod
	Func_3_t5C0DDA503F361B889D22FB85D5532AC9B1AE6C69 * ___m_endMethod_45;

public:
	inline static int32_t get_offset_of_m_thisRef_44() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9, ___m_thisRef_44)); }
	inline RuntimeObject * get_m_thisRef_44() const { return ___m_thisRef_44; }
	inline RuntimeObject ** get_address_of_m_thisRef_44() { return &___m_thisRef_44; }
	inline void set_m_thisRef_44(RuntimeObject * value)
	{
		___m_thisRef_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_thisRef_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_endMethod_45() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9, ___m_endMethod_45)); }
	inline Func_3_t5C0DDA503F361B889D22FB85D5532AC9B1AE6C69 * get_m_endMethod_45() const { return ___m_endMethod_45; }
	inline Func_3_t5C0DDA503F361B889D22FB85D5532AC9B1AE6C69 ** get_address_of_m_endMethod_45() { return &___m_endMethod_45; }
	inline void set_m_endMethod_45(Func_3_t5C0DDA503F361B889D22FB85D5532AC9B1AE6C69 * value)
	{
		___m_endMethod_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_endMethod_45), (void*)value);
	}
};

struct FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9_StaticFields
{
public:
	// System.AsyncCallback System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1::s_completeFromAsyncResult
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___s_completeFromAsyncResult_43;

public:
	inline static int32_t get_offset_of_s_completeFromAsyncResult_43() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9_StaticFields, ___s_completeFromAsyncResult_43)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_s_completeFromAsyncResult_43() const { return ___s_completeFromAsyncResult_43; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_s_completeFromAsyncResult_43() { return &___s_completeFromAsyncResult_43; }
	inline void set_s_completeFromAsyncResult_43(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___s_completeFromAsyncResult_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completeFromAsyncResult_43), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1<System.Object,System.Object>
struct  FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF  : public Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17
{
public:
	// TInstance System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1::m_thisRef
	RuntimeObject * ___m_thisRef_44;
	// System.Func`3<TInstance,System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1::m_endMethod
	Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC * ___m_endMethod_45;

public:
	inline static int32_t get_offset_of_m_thisRef_44() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF, ___m_thisRef_44)); }
	inline RuntimeObject * get_m_thisRef_44() const { return ___m_thisRef_44; }
	inline RuntimeObject ** get_address_of_m_thisRef_44() { return &___m_thisRef_44; }
	inline void set_m_thisRef_44(RuntimeObject * value)
	{
		___m_thisRef_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_thisRef_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_endMethod_45() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF, ___m_endMethod_45)); }
	inline Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC * get_m_endMethod_45() const { return ___m_endMethod_45; }
	inline Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC ** get_address_of_m_endMethod_45() { return &___m_endMethod_45; }
	inline void set_m_endMethod_45(Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC * value)
	{
		___m_endMethod_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_endMethod_45), (void*)value);
	}
};

struct FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF_StaticFields
{
public:
	// System.AsyncCallback System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1::s_completeFromAsyncResult
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___s_completeFromAsyncResult_43;

public:
	inline static int32_t get_offset_of_s_completeFromAsyncResult_43() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF_StaticFields, ___s_completeFromAsyncResult_43)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_s_completeFromAsyncResult_43() const { return ___s_completeFromAsyncResult_43; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_s_completeFromAsyncResult_43() { return &___s_completeFromAsyncResult_43; }
	inline void set_s_completeFromAsyncResult_43(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___s_completeFromAsyncResult_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completeFromAsyncResult_43), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1<System.Threading.Tasks.VoidTaskResult,System.Object>
struct  FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10  : public Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3
{
public:
	// TInstance System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1::m_thisRef
	RuntimeObject * ___m_thisRef_44;
	// System.Func`3<TInstance,System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1::m_endMethod
	Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 * ___m_endMethod_45;

public:
	inline static int32_t get_offset_of_m_thisRef_44() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10, ___m_thisRef_44)); }
	inline RuntimeObject * get_m_thisRef_44() const { return ___m_thisRef_44; }
	inline RuntimeObject ** get_address_of_m_thisRef_44() { return &___m_thisRef_44; }
	inline void set_m_thisRef_44(RuntimeObject * value)
	{
		___m_thisRef_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_thisRef_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_endMethod_45() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10, ___m_endMethod_45)); }
	inline Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 * get_m_endMethod_45() const { return ___m_endMethod_45; }
	inline Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 ** get_address_of_m_endMethod_45() { return &___m_endMethod_45; }
	inline void set_m_endMethod_45(Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 * value)
	{
		___m_endMethod_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_endMethod_45), (void*)value);
	}
};

struct FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10_StaticFields
{
public:
	// System.AsyncCallback System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1::s_completeFromAsyncResult
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___s_completeFromAsyncResult_43;

public:
	inline static int32_t get_offset_of_s_completeFromAsyncResult_43() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10_StaticFields, ___s_completeFromAsyncResult_43)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_s_completeFromAsyncResult_43() const { return ___s_completeFromAsyncResult_43; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_s_completeFromAsyncResult_43() { return &___s_completeFromAsyncResult_43; }
	inline void set_s_completeFromAsyncResult_43(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___s_completeFromAsyncResult_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completeFromAsyncResult_43), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.Linq.Enumerable_WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00  : public Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC
{
public:
	// TSource[] System.Linq.Enumerable_WhereArrayIterator`1::source
	KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereArrayIterator`1::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Int32 System.Linq.Enumerable_WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable_WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3  : public Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereEnumerableIterator`1::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable_WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C  : public Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereListIterator`1::source
	List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereListIterator`1::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereListIterator`1::enumerator
	Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C, ___source_3)); }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * get_source_3() const { return ___source_3; }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C, ___enumerator_5)); }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable_WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct  WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::source
	List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectListIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectListIterator`2::selector
	Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * ___selector_5;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::enumerator
	Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206, ___source_3)); }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * get_source_3() const { return ___source_3; }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206, ___selector_5)); }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * get_selector_5() const { return ___selector_5; }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206, ___enumerator_6)); }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable_WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct  WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::source
	List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectListIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectListIterator`2::selector
	Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector_5;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::enumerator
	Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5, ___source_3)); }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * get_source_3() const { return ___source_3; }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5, ___selector_5)); }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5, ___enumerator_6)); }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>[]
struct KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  m_Items[1];

public:
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
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



// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskFactory::CheckFromAsyncOptions(System.Threading.Tasks.TaskCreationOptions,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_CheckFromAsyncOptions_m057FCAC407F10FB9157BA7D3A38963EAD250B3A8 (int32_t ___creationOptions0, bool ___hasBeginMethod1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.AsyncCausalityTracer::get_LoggingOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15 (const RuntimeMethod* method);
// System.Int32 System.Threading.Tasks.Task::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227 (Delegate_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncCausalityTracer::TraceOperationCreation(System.Threading.Tasks.CausalityTraceLevel,System.Int32,System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void AsyncCausalityTracer_TraceOperationCreation_m3A018DC27992C4559B10283C06CC11513825898A (int32_t ___traceLevel0, int32_t ___taskId1, String_t* ___operationName2, uint64_t ___relatedContext3, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::AddToActiveTasks(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_AddToActiveTasks_m29D7B0C1AD029D86736A92EC7E36BE87209748FD (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, const RuntimeMethod* method);
// System.Void System.Threading.AtomicBoolean::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtomicBoolean__ctor_m70B7B7EDDDEAD330A6C718C65C94223DFAB859D7 (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05 (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Threading.AtomicBoolean::TryRelaxedSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AtomicBoolean_TryRelaxedSet_m8C68BF84E34C9F0FFEC851A81453C0E1586837FD (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncCausalityTracer::TraceOperationCompletion(System.Threading.Tasks.CausalityTraceLevel,System.Int32,System.Threading.Tasks.AsyncCausalityStatus)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void AsyncCausalityTracer_TraceOperationCompletion_m0C6FCD513830A060B436A11137CE4C7B114F26FC (int32_t ___traceLevel0, int32_t ___taskId1, int32_t ___status2, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::RemoveFromActiveTasks(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_RemoveFromActiveTasks_m04918871919D56DC087D50937093E8FA992CAE3F (int32_t ___taskId0, const RuntimeMethod* method);
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * TaskScheduler_get_Current_m9B2B54B9B43FC6E157E04ABE9151F6A0FF124C01 (const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::CreationOptionsFromContinuationOptions(System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskCreationOptions&,System.Threading.Tasks.InternalTaskOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_CreationOptionsFromContinuationOptions_mB5865DC3CF441EE1681B47B49A747344FDD6631D (int32_t ___continuationOptions0, int32_t* ___creationOptions1, int32_t* ___internalOptions2, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::ContinueWithCore(System.Threading.Tasks.Task,System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_ContinueWithCore_m8C75A57E83C02512E15E4ED205F70EA555F16DDB (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___continuationTask0, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___options3, const RuntimeMethod* method);
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m04B9A456D01549992BDB33CE742CF682943DC437_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1 * L_0 = ((Caster_1_t70C4789E193DDF1EE8FF1EAE7B23AA698374F2BC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m0D66A12461CBC9C3C74CB61D1331FA36AC1BE307_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC * L_0 = ((Caster_1_tDF3C56EF05C9C323E1699967C09C7B95572DB884_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisIntPtr_t_mB614C1F3DD7D3D0BB19B7ED33229392502B6F661_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1 * L_0 = ((Caster_1_tC1BEAAED563F601D1AB34FA885D4DC73B0593A01_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisRuntimeObject_m0135BD3FC77B6223FCE0955929BFC6A8623F83FC_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0 * L_0 = ((Caster_1_t9827C62922CE67B63670F7E395C36604B3284B82_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_mAEC424919D7FF23A610AD689137CC2E4EBB2601E_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171 * L_0 = ((Caster_1_tBE68CFB112A68FF8E1439A6D50611D57D2B78929_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB1E90BDDA4926F745B21DE0871A726BC7308C53F_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C * L_0 = ((Caster_1_tA96AB66BC3B680A41161A539CA7A0D45E183A207_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisTimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_m8192CECEAB9DB05D4354D707FF88FCE8C9800159_gshared (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862 * L_0 = ((Caster_1_t12C78E087522A8854105EA56B1656FA396D7D4F4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ___value0;
		NullCheck((Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862 *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862 *)L_0, (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m8AF5181D04F45A3BE92DC37B2CAC1EBDCFBF3636_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383 * L_0 = ((Caster_1_tB27660B38359B950168ADEF98D7C792A423A211A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m4D81BA705A73895E1FDA1CC263946D100415E2C5_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E * L_0 = ((Caster_1_tD4099ACC173F871B13EFCBBAEF67B0998F1AF043_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m60C2279A8101E03B449F13BCE0E4475288B6155F_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48 * L_0 = ((Caster_1_t1E7F2BFA620BFA6B4D131AF0754217C21DC3DC76_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUIntPtr_t_mF137C9F6315B3927905CBACFF07F9EA8CA63714E_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05 * L_0 = ((Caster_1_t8D66EB4609DD0809802358A5F2C34FF083CC9E95_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_mA2E21EEC7983078681333B7D3347C3F83E2E616D_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070 * L_0 = ((Caster_1_tDEB8E64C292126E69D8045806810D8AE28F4380F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_1 = ___value0;
		NullCheck((Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070 *)L_0, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Object>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * EnumHelper_1_Cast_TisRuntimeObject_mF1BB354F76B6D5CC2972B5C756B45AFFBD86FC35_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061 * L_0 = ((Caster_1_tC3972B33B78D374E68B197BFBA0F750AC728CE0B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m723C68A15D9450A8E76EB9DD53F2D195FA73E0E6_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D * L_0 = ((Caster_1_t1BD4C60F02C5F8490B8F0C8D66C1E7AB72398982_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m716490B18241E6B8B6A39197A57BE1194EC2B875_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15 * L_0 = ((Caster_1_t30A6AB5C2962F37220090F428E0DC77388038379_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m2C04D616FE488D97601EEB421FF64B137E930A42_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518 * L_0 = ((Caster_1_t1244636E53CA3A25ECCDFA53A0A1579702035790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_m0630E187D44D29938289D9E486AC76CEC13FC740_gshared (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t85017CA131468548211F084ACC574B9CAA055755 * L_0 = ((Caster_1_t1BF309AADA05A572B2F9CC2F7A68EF99D670AB98_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___value0;
		NullCheck((Transformer_1_t85017CA131468548211F084ACC574B9CAA055755 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t85017CA131468548211F084ACC574B9CAA055755 *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t85017CA131468548211F084ACC574B9CAA055755 *)L_0, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_m891CFFD64622F4CD911A0CE35FA4BD5B2A3F72F2_gshared (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450 * L_0 = ((Caster_1_t58169F4240E4111F7A32AE2FDD77268B70A27DA4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_1 = ___value0;
		NullCheck((Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450 *, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450 *)L_0, (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mBA589D405CF0E2808E5D7B2C3A348109CA23FE94_gshared (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360 * L_0 = ((Caster_1_tB27BEE43CA1315350CE91684999408CB0D8B38CE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___value0;
		NullCheck((Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360 *, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360 *)L_0, (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mA6764AE7FE1F5EBA16C800A24AAB5A9300942CEE_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097 * L_0 = ((Caster_1_t0E96099314BC1001361C090363363C27D456FF68_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisEmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62_m218A603E06B1DA38C89838836D38C31CEFE01FD4_gshared (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746 * L_0 = ((Caster_1_t5DF12DEB83CDE47DE415E477930BFFE3C7175F19_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  L_1 = ___value0;
		NullCheck((Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746 *, EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746 *)L_0, (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisGuid_t_m69CE83B136238800D560D220264134E826E46FDF_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F * L_0 = ((Caster_1_t5F81299DC5B220B4CA376F3799381DD1B09439D4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m6E5E881A4B546E5EADB70CD277184B396762F7E0_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA * L_0 = ((Caster_1_tE9CD352FE55AC176689697C28A1A977B0C0775A8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m248C98C91F53A72EF4EC60A9F552BA97895A3A0E_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80 * L_0 = ((Caster_1_t88FF0864B2C503EFAD5ED37705978F3B2582A1A5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mA676871AF2481FB16FD48F86C6E1698CB0EB314E_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44 * L_0 = ((Caster_1_t163E755F3C31D895AD0BDE502B676681BDC4DB3B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisIntPtr_t_mFE3788C8EE43181397F8671919CF5FC38F8B4D90_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802 * L_0 = ((Caster_1_tF8115F4B0CE80B556961ACB2289616B0DEC331AB_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisRuntimeObject_m5546FFD8F44F7C3BB94F17F6D5C059D6A92AF750_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383 * L_0 = ((Caster_1_tC4FA729FF9BC09C7B4EC9C2301EA897047768618_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m7BCF10F1968AB0EBA7764BCF65A3D2EC064352C0_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF * L_0 = ((Caster_1_t7647E71BE8B30B3842204E3EC510510866F46BD9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m36279A8CF65A0053A5E4ACEE0073CFDEB86B5AE1_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70 * L_0 = ((Caster_1_t33D96820C90C18AAB27CE45A2342ACADA8EF20E4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisTimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_m4EB0EAD8AC0FFA2E62E5F9C07AB90B49F436ACB4_gshared (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D * L_0 = ((Caster_1_t17ACB9A58115DEA27D4C0D2744F74900E858E353_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ___value0;
		NullCheck((Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D *)L_0, (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mB1DBAA55106A989DC9767B2AE1EEFEC78A55FD9D_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D * L_0 = ((Caster_1_t870029184001271CD749C94DCA95C7A2C0D1A4FE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m672C8062F0D0C709BD11332225381A96994A3AD6_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E * L_0 = ((Caster_1_tA41091CA45F9A4B6EDB6AC286316274A05D80186_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m369FE39FA5C5C7741FC446D22C80AB162635F341_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4 * L_0 = ((Caster_1_t60127F9AA9497FABC02BFD54AC24744A8071E56B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUIntPtr_t_m92BC3723419BC694036D4C982B7DF09954196304_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136 * L_0 = ((Caster_1_t740C3B7D2E14D9E73F3F0EFCF14F8BA60FB849A6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m1A2E72FDD3F66ED8A8A673DB8E4C01C1A0566A59_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74 * L_0 = ((Caster_1_t2B74904278820C410C8B5A8D72DE27A24035727C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_1 = ___value0;
		NullCheck((Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74 *)L_0, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mEEA42EF1968DFFE1EC7763EAC46E451C2D73F582_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE * L_0 = ((Caster_1_t1C9883B28F2C3F274ADC13F46C49C02C54494BD6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5FF6D632A37497590B0E7B6E02BD39347048F601_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4 * L_0 = ((Caster_1_t95C9CBFB005FB2C9D0C0F2A240E797403CBE2F87_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m35A52E9768C10001029A9A8AB1550CF2C82C43ED_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111 * L_0 = ((Caster_1_t9DA610447C49902B9FBFE6DEC227E850F4A80137_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_m0A50269606565656924956A0B7396E8669913224_gshared (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947 * L_0 = ((Caster_1_t9CD44B9D0BF57F470EA3652BB01215672BE364F6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___value0;
		NullCheck((Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947 *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947 *)L_0, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_m54DD46874F5439BBE7D7A5CC440B064894A60F16_gshared (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77 * L_0 = ((Caster_1_tB519A5C4AF8613C51607CB6DA06B4E509DE94CE1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_1 = ___value0;
		NullCheck((Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77 *, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77 *)L_0, (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mE19A21D21BD98395F0DF7056C39B77299FB81368_gshared (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63 * L_0 = ((Caster_1_t97215292B31E6EDD9D0CCF730C574A219DB14FA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___value0;
		NullCheck((Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63 *, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63 *)L_0, (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m026F75CB8F56B042FDF4A222BA60EF7FA72DA875_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34 * L_0 = ((Caster_1_t3758D8A416E0335940152F85A9EF16351B5E50B4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisEmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62_mDDD0986C6B9B9F9FAA119BF6DF6299F72046F36D_gshared (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848 * L_0 = ((Caster_1_t36421096E51C706002F451EE0EF4F2C050E65FDC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  L_1 = ___value0;
		NullCheck((Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848 *, EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848 *)L_0, (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisGuid_t_mDA9DD8BA822B0FF4295DE1D9FB942F89AA38BA47_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8 * L_0 = ((Caster_1_tE7DEB9C1C2CA14F5BAC58EDE3DC45FC7BC5E2D71_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m5C55ED2E551392B816C531D44BDF7E79151F0AAA_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A * L_0 = ((Caster_1_tC5BA8BEE276B2CE5B5971AED6A81D2209E331D5D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m33FB1E94DCC9F871CDBD4B70662BC660FA6B4B24_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0 * L_0 = ((Caster_1_t2A00EDBD48775854B6F07521F9C38B3D985895DD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m87A2033A51524AD193C763B7B4F047F823C73B43_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7 * L_0 = ((Caster_1_t001E88A8CE2BFC0E48CBD781528BDB1B5D626B23_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisIntPtr_t_m920944DCC4A628AB10BEBE3A7A10C359B518F678_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840 * L_0 = ((Caster_1_tE61A67E1226C9AAEF271BA0F9697770921AE95AC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisRuntimeObject_mB59A318B4868830486B499A0E9A9EBC55D04B7E8_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06 * L_0 = ((Caster_1_t1DF332D98A7CFD921311E400AA7EB85F360716CF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_mF8CC833A292B6C73489E63BCC5C9BEC11C9DE310_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD * L_0 = ((Caster_1_tEB118780DCAADB459CFF6F3503D3155B1FBE042B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m0471F4FDFBE5815F0EE55CD395290E4787D25D14_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047 * L_0 = ((Caster_1_t3F36BE5AE6C1F8A32498C9F48EFDCF9C97F77649_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisTimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_m3267914BA46BA91D970343C5377C8A16E6DE0213_gshared (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732 * L_0 = ((Caster_1_tD718F5C5131976B010CAE236DB97BFF85D813E54_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ___value0;
		NullCheck((Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732 *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732 *)L_0, (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mDAEFC8A13DA4C1E8CEFC664C8F10C6E28BBB4EC6_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A * L_0 = ((Caster_1_tE98A18E634417A96EC0EB7E3F3AEEDDCDE5030DD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mDE61A055D83BD3AD84776AE0FFA5613E94A5AF82_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543 * L_0 = ((Caster_1_tCF9EF4E40F2FC2B2EB7902E1934BE213E69EE065_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m1164812A40F0FA7C178B7FD1F599CD49E4730E6D_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE * L_0 = ((Caster_1_tDCA4B028D037B066692AE9595936AAD91890E1CF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUIntPtr_t_m34A91CE908B2D7D997B8BE7BE2892D3208B815A1_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449 * L_0 = ((Caster_1_t3E7C36D31A48255DAD25B3B2AE6B917F8340B991_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m036C3CAB1998E7C578EBC23ABD81517B7ADCE139_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45 * L_0 = ((Caster_1_tE598EB10B0A995EFB2D98C6255D19AEB04880A4D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_1 = ___value0;
		NullCheck((Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45 *)L_0, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mA686488EB1CEC989D7B14D7FEA916C30700AAE70_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0 * L_0 = ((Caster_1_tF2AFB02A87ADE0E7A8A250D34EAFA734BA067304_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m398CF03A71EA616F539E58C779F586E2A4785A8B_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B * L_0 = ((Caster_1_tCE480BD8AB8248F2B6480301D05F0F36C531CDB9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA66129BA9A7383CDD15C9F3F51620AE254A4557D_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90 * L_0 = ((Caster_1_tAF055C28617E7BBE97D0A4F6D3BB9DA6AE2FDE51_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_m3D61C02658BB7ABF01730CD28AF88022BEC92208_gshared (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617 * L_0 = ((Caster_1_t901773DD618F4F8D0F11AA64220BDF5B5588A9CB_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___value0;
		NullCheck((Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617 *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617 *)L_0, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_m52E0FCB849B00F0CB904AD6F2B8002AF326AD007_gshared (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C * L_0 = ((Caster_1_t81822C420408C79A1D831535F2CF93DA5EA48B3A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_1 = ___value0;
		NullCheck((Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C *, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C *)L_0, (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mE6462F4574EDF6E28B7DACD3EC583A81DF20FA18_gshared (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E * L_0 = ((Caster_1_t40AD1A1AF479039B1D54E5F3380B6B0CF2B15644_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___value0;
		NullCheck((Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E *, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E *)L_0, (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m0AFF356A45C77B9798B5372003BB2466B5E1EB5B_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37 * L_0 = ((Caster_1_t6143C0151137A083CB0F6EFBCE486661FD0489FB_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisEmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62_m9743682CEC3E125CEE6A960972769361D7FE930E_gshared (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428 * L_0 = ((Caster_1_tA382B961BB6DECA7E9912DE8BCE86A2760D3536C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  L_1 = ___value0;
		NullCheck((Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428 *, EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428 *)L_0, (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisGuid_t_mD71C7E0E904D4F729A529E389BF692E29706D048_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894 * L_0 = ((Caster_1_t05D7391E16AAD38161724DD6C261B74130C36705_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_mFE0DAFB0F0E9AB6ABD7A5E415317C414042DDB15_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E * L_0 = ((Caster_1_t05E36EAA415EA6B5B1C08B9D4E494A0588524227_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC998A0F577B57817825124BB28387130027C2CC2_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F * L_0 = ((Caster_1_t519E78DB0E5DF907F1CB998EE1427A3E8E221BED_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m1D0238357825B1AD550C9C1DBDD46CE1EE3B805B_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4 * L_0 = ((Caster_1_t4282DB10490A87367535C2292A0292F381AB2D8A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisIntPtr_t_m93E84625CC0FB936C2A8263CBCD933315ADDC89F_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895 * L_0 = ((Caster_1_t69A273B2F262F2B7EF8D384649270F25004CDE21_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisRuntimeObject_m5DF73FDFB625B3FDDE0FAA3E08AA7A82476FAE96_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2 * L_0 = ((Caster_1_t137FB3B1278245F81E87955980453BD358BC9FDD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_mD717641100586CF9E09C8C513C7A2C06FE05FCD5_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C * L_0 = ((Caster_1_t2FFB438F208B3B129F9605FB1F10B32FCE533406_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m11BAB43BD9E84FA2C3E63E24BE8801C68E0DAD83_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B * L_0 = ((Caster_1_t9A112A2C70E550894FAC0C3A124091DCCBDF8012_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisTimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_m74C6178CA1354F190097453AB28D2119C6AEFD62_gshared (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302 * L_0 = ((Caster_1_t5D3645B8EC343703DBE9DE7EA90363CD546B667A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ___value0;
		NullCheck((Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302 *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302 *)L_0, (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m94D085B9736D957266DB80B43AA1658CA1F7F483_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B * L_0 = ((Caster_1_t093C74E154CC3D388C2CB09F38F181A557EFFEBE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mBEEDB8C9DC2227D52CF112D0272B75CEA0003DF0_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE * L_0 = ((Caster_1_t5511E837A8586227F074F7E28421C634A073E16A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m973B1C239D56E9B5E06DD022E52B26242C1F4E7E_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79 * L_0 = ((Caster_1_t232EC3F74CC0AC8B7BB52B78D3FF1DD8CB08C472_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUIntPtr_t_mCEDADB5B365CA2C0104D7EA2F0CE498BD7E78BD2_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087 * L_0 = ((Caster_1_tEDA4AF60F40734E22B03C10431C74F8444BD6EA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m3D3425DA3AD77C19937F266690530CEF55B54AC9_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617 * L_0 = ((Caster_1_t815F5BE908D188229045CE6394C20260EF7CD34A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_1 = ___value0;
		NullCheck((Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617 *)L_0, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m2D0DAEAF673DBBC7663181E556CD14A3322C3F9D_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD * L_0 = ((Caster_1_t9FE3224C68AEE6C4ABA9C3A09F120EDA52A78A85_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mEC292A013AF98D9D2BA9C1203C76263EE1FA1672_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200 * L_0 = ((Caster_1_tD07A01A4AB8A981E25B1815E0F56DBBA481FB488_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mAA1E48492DDE9533BDD5DFAE885A85FAD297F015_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2 * L_0 = ((Caster_1_t23E1BEDEA465B2FE0C4BC88DF482A3A0621245E2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_m716333268A5BE70E10A6B8D8804C14CE8ECD6578_gshared (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0 * L_0 = ((Caster_1_t03F1A22DDCFFB6CA1EE3157E94B9A415498F3E45_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___value0;
		NullCheck((Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0 *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0 *)L_0, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_m1D9F209BD3B66AD5CC1544CD31E5767DE9F8858C_gshared (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5 * L_0 = ((Caster_1_tD466E195E4E33B18AC090BE8227230DD00254871_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_1 = ___value0;
		NullCheck((Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5 *, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5 *)L_0, (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_m01D55EB8AFF1FD6D4246BA3C41316978C4B0DA35_gshared (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03 * L_0 = ((Caster_1_t356F1486915070BEE950AE11D1BF52A9C2C0DE20_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___value0;
		NullCheck((Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03 *, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03 *)L_0, (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m4A7F97654D1E670F310238621777BF3A7A7D0956_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF * L_0 = ((Caster_1_t204C853C13D273E3449FC5E906E5E6B941CCD600_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisEmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62_m875E27CF4439D28859E9B6D69834028016E8CC34_gshared (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241 * L_0 = ((Caster_1_t42349D34EA9FAC76F234F2F981A14480957DCAE5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  L_1 = ___value0;
		NullCheck((Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241 *, EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241 *)L_0, (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisGuid_t_m0DE322AAB4218C24F71BA1CC5FC274A83A08315D_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E * L_0 = ((Caster_1_t868D5311D106D9FE55DBB4F56BFA1F80AB361666_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m521CB6E1FBBE029F3484B6D2FDFA4D3E345E83CF_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87 * L_0 = ((Caster_1_tB91A82FA14A4A4E569EB93553EA899B6FBBA7E78_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5803F399300063B8BBE04C85068D81DE0F483F85_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348 * L_0 = ((Caster_1_tE1DD30AB4029612CD56B09122178FD4DF29CEA5E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m258C0D7FA5FA14AB3781EE1C21817896A6F17764_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9 * L_0 = ((Caster_1_t168FC169D2FD7651A831F26A3AF8F79C89700F84_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisIntPtr_t_m0FBCA2E254ACF92C1AF80F2B507A69B313AAC27D_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C * L_0 = ((Caster_1_t40BE0AF08E046636C00A1A588EB58F2F3377E223_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisRuntimeObject_mD0EC4DC725D1E27363C98E68C38184DD6D475C9C_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4 * L_0 = ((Caster_1_t12DF6952392D0FED624EF47F6DE9D2FB1F8B046D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m898262DB9241A6926DEE049C4728D511132B0C12_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909 * L_0 = ((Caster_1_tF4338CF2303C845BF3E79CEBCBE82A0DE79DC6AD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m5B04965319B365F33F33EB1E72A4F6434B290736_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4 * L_0 = ((Caster_1_tF67DB938E6F11BBA2F382812E0A292FC1A5C2C0E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisTimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_m6106F1D8C44FA73CEF921CEE3BFC189E946C6645_gshared (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64 * L_0 = ((Caster_1_t9A297416E25E59EF55DA67381A6AACA321D6402C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ___value0;
		NullCheck((Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64 *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64 *)L_0, (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m5358E01BC4E22423981D62DBF9DCC0A7FB048F4F_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77 * L_0 = ((Caster_1_t0AB03EBEEE4F0D9B08B36FE7BD6A6159AFEEDF12_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAA077A77307C699D3380DEB5CC4BEECBBBEF7E10_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF * L_0 = ((Caster_1_t06142C64346ABC2D451ADF4CB9E980C5CA27CD88_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m69DE990C71B6A7929FC75241269E8049AE2D094D_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551 * L_0 = ((Caster_1_t920F9B7FFCFDFB9B9024484E88617329683105F2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUIntPtr_t_m808B88700355E1CEBBDE3479FD7F9D2C0683C6D6_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1 * L_0 = ((Caster_1_t59015BBD0A7090C4DD0FEB6C85876BA881B2E1A3_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m11C6DEE92CD83EACFD4DB69B58647CC410AA88B8_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7 * L_0 = ((Caster_1_tB9CE9C085D67ADB638BA02C0CA3D2578A8DBD1A1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_1 = ___value0;
		NullCheck((Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7 *)L_0, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Int32>::FromAsync<System.Object,System.Int32,System.Object>(System.Func`6<TArg1,TArg2,TArg3,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,TArg1,TArg2,TArg3,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * TaskFactory_1_FromAsync_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisRuntimeObject_m68DDB2FA939FDA331C355E7E203852BE9878C735_gshared (TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * __this, Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A * ___beginMethod0, Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892 * ___endMethod1, RuntimeObject * ___arg12, int32_t ___arg23, RuntimeObject * ___arg34, RuntimeObject * ___state5, const RuntimeMethod* method)
{
	{
		Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A * L_0 = ___beginMethod0;
		Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892 * L_1 = ___endMethod1;
		RuntimeObject * L_2 = ___arg12;
		int32_t L_3 = ___arg23;
		RuntimeObject * L_4 = ___arg34;
		RuntimeObject * L_5 = ___state5;
		int32_t L_6 = (int32_t)__this->get_m_defaultCreationOptions_2();
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_7 = ((  Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * (*) (Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A *, Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892 *, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *, RuntimeObject *, int32_t, RuntimeObject *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A *)L_0, (Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892 *)L_1, (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)NULL, (RuntimeObject *)L_2, (int32_t)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Int32>::FromAsyncImpl<System.Object,System.Int32,System.Object>(System.Func`6<TArg1,TArg2,TArg3,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Action`1<System.IAsyncResult>,TArg1,TArg2,TArg3,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisRuntimeObject_mCACCEBEBD0FB241F09975A4FBDFF6E35DEFA2479_gshared (Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A * ___beginMethod0, Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892 * ___endFunction1, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction2, RuntimeObject * ___arg13, int32_t ___arg24, RuntimeObject * ___arg35, RuntimeObject * ___state6, int32_t ___creationOptions7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisRuntimeObject_mCACCEBEBD0FB241F09975A4FBDFF6E35DEFA2479_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * V_0 = NULL;
	U3CU3Ec__DisplayClass44_1_3_tE1F045E1C4856A6FC86009DC8BFA6FB6F5B74936 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_0 = (U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 *)L_0;
		U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_1 = V_0;
		Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892 * L_2 = ___endFunction1;
		NullCheck(L_1);
		L_1->set_endFunction_0(L_2);
		U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_3 = V_0;
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_4 = ___endAction2;
		NullCheck(L_3);
		L_3->set_endAction_1(L_4);
		Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A * L_5 = ___beginMethod0;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, (String_t*)_stringLiteralA7DEB4E83ED6644FBE7C7276D77CAEE0397BF409, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisRuntimeObject_mCACCEBEBD0FB241F09975A4FBDFF6E35DEFA2479_RuntimeMethod_var);
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_7 = V_0;
		NullCheck(L_7);
		Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892 * L_8 = (Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892 *)L_7->get_endFunction_0();
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_9 = V_0;
		NullCheck(L_9);
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_10 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_9->get_endAction_1();
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_11 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_11, (String_t*)_stringLiteral92BF5D2AB9AD1A68596BC5F92B31A8D6A6C3F5BF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisRuntimeObject_mCACCEBEBD0FB241F09975A4FBDFF6E35DEFA2479_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_12 = ___creationOptions7;
		TaskFactory_CheckFromAsyncOptions_m057FCAC407F10FB9157BA7D3A38963EAD250B3A8((int32_t)L_12, (bool)1, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_13 = V_0;
		RuntimeObject * L_14 = ___state6;
		int32_t L_15 = ___creationOptions7;
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_16 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((  void (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)(L_16, (RuntimeObject *)L_14, (int32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		NullCheck(L_13);
		L_13->set_promise_2(L_16);
		bool L_17 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0083;
		}
	}
	{
		U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_18 = V_0;
		NullCheck(L_18);
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_19 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_18->get_promise_2();
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19);
		int32_t L_20 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19, /*hidden argument*/NULL);
		Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A * L_21 = ___beginMethod0;
		NullCheck((Delegate_t *)L_21);
		MethodInfo_t * L_22 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_21, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_22);
		String_t* L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B((String_t*)_stringLiteral19A591E076465B264D0FAFC4F98833B0673D6092, (String_t*)L_23, /*hidden argument*/NULL);
		AsyncCausalityTracer_TraceOperationCreation_m3A018DC27992C4559B10283C06CC11513825898A((int32_t)0, (int32_t)L_20, (String_t*)L_24, (uint64_t)(((int64_t)((int64_t)0))), /*hidden argument*/NULL);
	}

IL_0083:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		bool L_25 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_30();
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_26 = V_0;
		NullCheck(L_26);
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_27 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_26->get_promise_2();
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_AddToActiveTasks_m29D7B0C1AD029D86736A92EC7E36BE87209748FD((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_27, /*hidden argument*/NULL);
	}

IL_0096:
	{
	}

IL_0097:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var);
			bool L_28 = ((BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields*)il2cpp_codegen_static_fields_for(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var))->get_TargetsAtLeast_Desktop_V4_5_0();
			if (!L_28)
			{
				goto IL_0112;
			}
		}

IL_009e:
		{
			U3CU3Ec__DisplayClass44_1_3_tE1F045E1C4856A6FC86009DC8BFA6FB6F5B74936 * L_29 = (U3CU3Ec__DisplayClass44_1_3_tE1F045E1C4856A6FC86009DC8BFA6FB6F5B74936 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
			((  void (*) (U3CU3Ec__DisplayClass44_1_3_tE1F045E1C4856A6FC86009DC8BFA6FB6F5B74936 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
			V_1 = (U3CU3Ec__DisplayClass44_1_3_tE1F045E1C4856A6FC86009DC8BFA6FB6F5B74936 *)L_29;
			U3CU3Ec__DisplayClass44_1_3_tE1F045E1C4856A6FC86009DC8BFA6FB6F5B74936 * L_30 = V_1;
			U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_31 = V_0;
			NullCheck(L_30);
			L_30->set_CSU24U3CU3E8__locals1_1(L_31);
			U3CU3Ec__DisplayClass44_1_3_tE1F045E1C4856A6FC86009DC8BFA6FB6F5B74936 * L_32 = V_1;
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_33 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)il2cpp_codegen_object_new(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E_il2cpp_TypeInfo_var);
			AtomicBoolean__ctor_m70B7B7EDDDEAD330A6C718C65C94223DFAB859D7(L_33, /*hidden argument*/NULL);
			NullCheck(L_32);
			L_32->set_invoked_0(L_33);
			Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A * L_34 = ___beginMethod0;
			RuntimeObject * L_35 = ___arg13;
			int32_t L_36 = ___arg24;
			RuntimeObject * L_37 = ___arg35;
			U3CU3Ec__DisplayClass44_1_3_tE1F045E1C4856A6FC86009DC8BFA6FB6F5B74936 * L_38 = V_1;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_39 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_39, (RuntimeObject *)L_38, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)), /*hidden argument*/NULL);
			RuntimeObject * L_40 = ___state6;
			NullCheck((Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A *)L_34);
			RuntimeObject* L_41 = ((  RuntimeObject* (*) (Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A *, RuntimeObject *, int32_t, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A *)L_34, (RuntimeObject *)L_35, (int32_t)L_36, (RuntimeObject *)L_37, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_39, (RuntimeObject *)L_40, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
			V_2 = (RuntimeObject*)L_41;
			RuntimeObject* L_42 = V_2;
			if (!L_42)
			{
				goto IL_012c;
			}
		}

IL_00d3:
		{
			RuntimeObject* L_43 = V_2;
			NullCheck((RuntimeObject*)L_43);
			bool L_44 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
			if (!L_44)
			{
				goto IL_012c;
			}
		}

IL_00db:
		{
			U3CU3Ec__DisplayClass44_1_3_tE1F045E1C4856A6FC86009DC8BFA6FB6F5B74936 * L_45 = V_1;
			NullCheck(L_45);
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_46 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_45->get_invoked_0();
			NullCheck((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_46);
			bool L_47 = AtomicBoolean_TryRelaxedSet_m8C68BF84E34C9F0FFEC851A81453C0E1586837FD((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_46, /*hidden argument*/NULL);
			if (!L_47)
			{
				goto IL_012c;
			}
		}

IL_00e8:
		{
			RuntimeObject* L_48 = V_2;
			U3CU3Ec__DisplayClass44_1_3_tE1F045E1C4856A6FC86009DC8BFA6FB6F5B74936 * L_49 = V_1;
			NullCheck(L_49);
			U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_50 = (U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 *)L_49->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_50);
			Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892 * L_51 = (Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892 *)L_50->get_endFunction_0();
			U3CU3Ec__DisplayClass44_1_3_tE1F045E1C4856A6FC86009DC8BFA6FB6F5B74936 * L_52 = V_1;
			NullCheck(L_52);
			U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_53 = (U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 *)L_52->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_53);
			Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_54 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_53->get_endAction_1();
			U3CU3Ec__DisplayClass44_1_3_tE1F045E1C4856A6FC86009DC8BFA6FB6F5B74936 * L_55 = V_1;
			NullCheck(L_55);
			U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_56 = (U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 *)L_55->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_56);
			Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_57 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_56->get_promise_2();
			((  void (*) (RuntimeObject*, Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892 *, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)((RuntimeObject*)L_48, (Func_2_tA29C2A21AF36FC259BE2841B4D9D20DCE108A892 *)L_51, (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_54, (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_57, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
			goto IL_012c;
		}

IL_0112:
		{
			Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A * L_58 = ___beginMethod0;
			RuntimeObject * L_59 = ___arg13;
			int32_t L_60 = ___arg24;
			RuntimeObject * L_61 = ___arg35;
			U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_62 = V_0;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_63 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_63, (RuntimeObject *)L_62, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)), /*hidden argument*/NULL);
			RuntimeObject * L_64 = ___state6;
			NullCheck((Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A *)L_58);
			((  RuntimeObject* (*) (Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A *, RuntimeObject *, int32_t, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_6_t5CD60E5CD62FB166BB8451CE623772C61CE2809A *)L_58, (RuntimeObject *)L_59, (int32_t)L_60, (RuntimeObject *)L_61, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_63, (RuntimeObject *)L_64, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_012c:
		{
			goto IL_0176;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_012e;
		throw e;
	}

CATCH_012e:
	{ // begin catch(System.Object)
		{
			bool L_65 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
			if (!L_65)
			{
				goto IL_0148;
			}
		}

IL_0136:
		{
			U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_66 = V_0;
			NullCheck(L_66);
			Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_67 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_66->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_67);
			int32_t L_68 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_67, /*hidden argument*/NULL);
			AsyncCausalityTracer_TraceOperationCompletion_m0C6FCD513830A060B436A11137CE4C7B114F26FC((int32_t)0, (int32_t)L_68, (int32_t)3, /*hidden argument*/NULL);
		}

IL_0148:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			bool L_69 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_30();
			if (!L_69)
			{
				goto IL_015f;
			}
		}

IL_014f:
		{
			U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_70 = V_0;
			NullCheck(L_70);
			Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_71 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_70->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_71);
			int32_t L_72 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_71, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_RemoveFromActiveTasks_m04918871919D56DC087D50937093E8FA992CAE3F((int32_t)L_72, /*hidden argument*/NULL);
		}

IL_015f:
		{
			U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_73 = V_0;
			NullCheck(L_73);
			Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_74 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_73->get_promise_2();
			il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
			int32_t L_75 = V_3;
			NullCheck((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_74);
			((  bool (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_74, (int32_t)L_75, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisRuntimeObject_mCACCEBEBD0FB241F09975A4FBDFF6E35DEFA2479_RuntimeMethod_var);
		}
	} // end catch (depth: 1)

IL_0176:
	{
		U3CU3Ec__DisplayClass44_0_3_t3EA314A2AB63BBF675CFC40F9B630F7D7F1C8A74 * L_76 = V_0;
		NullCheck(L_76);
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_77 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_76->get_promise_2();
		return L_77;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Int32>::FromAsyncTrim<System.Object,System.IO.Stream_ReadWriteParameters>(TInstance,TArgs,System.Func`5<TInstance,TArgs,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`3<TInstance,System.IAsyncResult,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * TaskFactory_1_FromAsyncTrim_TisRuntimeObject_TisReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_m20DDDC71E4D2D8EFED052419784A627AE8641686_gshared (RuntimeObject * ___thisRef0, ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47  ___args1, Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5 * ___beginMethod2, Func_3_t5C0DDA503F361B889D22FB85D5532AC9B1AE6C69 * ___endMethod3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncTrim_TisRuntimeObject_TisReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_m20DDDC71E4D2D8EFED052419784A627AE8641686_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___thisRef0;
		Func_3_t5C0DDA503F361B889D22FB85D5532AC9B1AE6C69 * L_1 = ___endMethod3;
		FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9 * L_2 = (FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9 *, RuntimeObject *, Func_3_t5C0DDA503F361B889D22FB85D5532AC9B1AE6C69 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, (RuntimeObject *)L_0, (Func_3_t5C0DDA503F361B889D22FB85D5532AC9B1AE6C69 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9 *)L_2;
		Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5 * L_3 = ___beginMethod2;
		RuntimeObject * L_4 = ___thisRef0;
		ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47  L_5 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_6 = ((FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))->get_s_completeFromAsyncResult_43();
		FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9 * L_7 = V_0;
		NullCheck((Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5 *)L_3);
		RuntimeObject* L_8 = ((  RuntimeObject* (*) (Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5 *, RuntimeObject *, ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47 , AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5 *)L_3, (RuntimeObject *)L_4, (ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47 )L_5, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		V_1 = (RuntimeObject*)L_8;
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck((RuntimeObject*)L_10);
		bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		if (!L_11)
		{
			goto IL_002c;
		}
	}
	{
		FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9 * L_12 = V_0;
		RuntimeObject * L_13 = ___thisRef0;
		Func_3_t5C0DDA503F361B889D22FB85D5532AC9B1AE6C69 * L_14 = ___endMethod3;
		RuntimeObject* L_15 = V_1;
		NullCheck((FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9 *)L_12);
		((  void (*) (FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9 *, RuntimeObject *, Func_3_t5C0DDA503F361B889D22FB85D5532AC9B1AE6C69 *, RuntimeObject*, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9 *)L_12, (RuntimeObject *)L_13, (Func_3_t5C0DDA503F361B889D22FB85D5532AC9B1AE6C69 *)L_14, (RuntimeObject*)L_15, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_002c:
	{
		FromAsyncTrimPromise_1_tDD66C6853C2A796C6A9E9680AB1D51DD8FA75EE9 * L_16 = V_0;
		return L_16;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync<System.Object,System.Object,System.Object>(System.Func`6<TArg1,TArg2,TArg3,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,TArg1,TArg2,TArg3,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskFactory_1_FromAsync_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mFCFE6AA87B9511F5EE81017FD828EF8556BB6DC6_gshared (TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * __this, Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97 * ___beginMethod0, Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * ___endMethod1, RuntimeObject * ___arg12, RuntimeObject * ___arg23, RuntimeObject * ___arg34, RuntimeObject * ___state5, const RuntimeMethod* method)
{
	{
		Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97 * L_0 = ___beginMethod0;
		Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * L_1 = ___endMethod1;
		RuntimeObject * L_2 = ___arg12;
		RuntimeObject * L_3 = ___arg23;
		RuntimeObject * L_4 = ___arg34;
		RuntimeObject * L_5 = ___state5;
		int32_t L_6 = (int32_t)__this->get_m_defaultCreationOptions_2();
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_7 = ((  Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * (*) (Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97 *, Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97 *)L_0, (Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *)L_1, (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)NULL, (RuntimeObject *)L_2, (RuntimeObject *)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsyncImpl<System.Object>(System.Func`4<TArg1,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Action`1<System.IAsyncResult>,TArg1,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m681649E0926FAB0B829788CD61146021E9300EB5_gshared (Func_4_t1FB292635292578289C454E038620354E9A7662D * ___beginMethod0, Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * ___endFunction1, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction2, RuntimeObject * ___arg13, RuntimeObject * ___state4, int32_t ___creationOptions5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m681649E0926FAB0B829788CD61146021E9300EB5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * V_0 = NULL;
	U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_0 = (U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 *)L_0;
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_1 = V_0;
		Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * L_2 = ___endFunction1;
		NullCheck(L_1);
		L_1->set_endFunction_0(L_2);
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_3 = V_0;
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_4 = ___endAction2;
		NullCheck(L_3);
		L_3->set_endAction_1(L_4);
		Func_4_t1FB292635292578289C454E038620354E9A7662D * L_5 = ___beginMethod0;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, (String_t*)_stringLiteralA7DEB4E83ED6644FBE7C7276D77CAEE0397BF409, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m681649E0926FAB0B829788CD61146021E9300EB5_RuntimeMethod_var);
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_7 = V_0;
		NullCheck(L_7);
		Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * L_8 = (Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *)L_7->get_endFunction_0();
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_9 = V_0;
		NullCheck(L_9);
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_10 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_9->get_endAction_1();
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_11 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_11, (String_t*)_stringLiteralC52F77B7D44C96CE5B91F76A3587ACE8C88748FF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m681649E0926FAB0B829788CD61146021E9300EB5_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_12 = ___creationOptions5;
		TaskFactory_CheckFromAsyncOptions_m057FCAC407F10FB9157BA7D3A38963EAD250B3A8((int32_t)L_12, (bool)1, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_13 = V_0;
		RuntimeObject * L_14 = ___state4;
		int32_t L_15 = ___creationOptions5;
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_16 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((  void (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)(L_16, (RuntimeObject *)L_14, (int32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		NullCheck(L_13);
		L_13->set_promise_2(L_16);
		bool L_17 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0083;
		}
	}
	{
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_18 = V_0;
		NullCheck(L_18);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_19 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_18->get_promise_2();
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19);
		int32_t L_20 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19, /*hidden argument*/NULL);
		Func_4_t1FB292635292578289C454E038620354E9A7662D * L_21 = ___beginMethod0;
		NullCheck((Delegate_t *)L_21);
		MethodInfo_t * L_22 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_21, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_22);
		String_t* L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B((String_t*)_stringLiteral19A591E076465B264D0FAFC4F98833B0673D6092, (String_t*)L_23, /*hidden argument*/NULL);
		AsyncCausalityTracer_TraceOperationCreation_m3A018DC27992C4559B10283C06CC11513825898A((int32_t)0, (int32_t)L_20, (String_t*)L_24, (uint64_t)(((int64_t)((int64_t)0))), /*hidden argument*/NULL);
	}

IL_0083:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		bool L_25 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_30();
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_26 = V_0;
		NullCheck(L_26);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_27 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_26->get_promise_2();
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_AddToActiveTasks_m29D7B0C1AD029D86736A92EC7E36BE87209748FD((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_27, /*hidden argument*/NULL);
	}

IL_0096:
	{
	}

IL_0097:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var);
			bool L_28 = ((BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields*)il2cpp_codegen_static_fields_for(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var))->get_TargetsAtLeast_Desktop_V4_5_0();
			if (!L_28)
			{
				goto IL_010e;
			}
		}

IL_009e:
		{
			U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * L_29 = (U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
			((  void (*) (U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
			V_1 = (U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD *)L_29;
			U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * L_30 = V_1;
			U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_31 = V_0;
			NullCheck(L_30);
			L_30->set_CSU24U3CU3E8__locals1_1(L_31);
			U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * L_32 = V_1;
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_33 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)il2cpp_codegen_object_new(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E_il2cpp_TypeInfo_var);
			AtomicBoolean__ctor_m70B7B7EDDDEAD330A6C718C65C94223DFAB859D7(L_33, /*hidden argument*/NULL);
			NullCheck(L_32);
			L_32->set_invoked_0(L_33);
			Func_4_t1FB292635292578289C454E038620354E9A7662D * L_34 = ___beginMethod0;
			RuntimeObject * L_35 = ___arg13;
			U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * L_36 = V_1;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_37 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_37, (RuntimeObject *)L_36, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)), /*hidden argument*/NULL);
			RuntimeObject * L_38 = ___state4;
			NullCheck((Func_4_t1FB292635292578289C454E038620354E9A7662D *)L_34);
			RuntimeObject* L_39 = ((  RuntimeObject* (*) (Func_4_t1FB292635292578289C454E038620354E9A7662D *, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_4_t1FB292635292578289C454E038620354E9A7662D *)L_34, (RuntimeObject *)L_35, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_37, (RuntimeObject *)L_38, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
			V_2 = (RuntimeObject*)L_39;
			RuntimeObject* L_40 = V_2;
			if (!L_40)
			{
				goto IL_0124;
			}
		}

IL_00cf:
		{
			RuntimeObject* L_41 = V_2;
			NullCheck((RuntimeObject*)L_41);
			bool L_42 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
			if (!L_42)
			{
				goto IL_0124;
			}
		}

IL_00d7:
		{
			U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * L_43 = V_1;
			NullCheck(L_43);
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_44 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_43->get_invoked_0();
			NullCheck((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_44);
			bool L_45 = AtomicBoolean_TryRelaxedSet_m8C68BF84E34C9F0FFEC851A81453C0E1586837FD((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_44, /*hidden argument*/NULL);
			if (!L_45)
			{
				goto IL_0124;
			}
		}

IL_00e4:
		{
			RuntimeObject* L_46 = V_2;
			U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * L_47 = V_1;
			NullCheck(L_47);
			U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_48 = (U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 *)L_47->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_48);
			Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * L_49 = (Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *)L_48->get_endFunction_0();
			U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * L_50 = V_1;
			NullCheck(L_50);
			U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_51 = (U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 *)L_50->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_51);
			Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_52 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_51->get_endAction_1();
			U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * L_53 = V_1;
			NullCheck(L_53);
			U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_54 = (U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 *)L_53->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_54);
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_55 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_54->get_promise_2();
			((  void (*) (RuntimeObject*, Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)((RuntimeObject*)L_46, (Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *)L_49, (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_52, (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_55, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
			goto IL_0124;
		}

IL_010e:
		{
			Func_4_t1FB292635292578289C454E038620354E9A7662D * L_56 = ___beginMethod0;
			RuntimeObject * L_57 = ___arg13;
			U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_58 = V_0;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_59 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_59, (RuntimeObject *)L_58, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)), /*hidden argument*/NULL);
			RuntimeObject * L_60 = ___state4;
			NullCheck((Func_4_t1FB292635292578289C454E038620354E9A7662D *)L_56);
			((  RuntimeObject* (*) (Func_4_t1FB292635292578289C454E038620354E9A7662D *, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_4_t1FB292635292578289C454E038620354E9A7662D *)L_56, (RuntimeObject *)L_57, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_59, (RuntimeObject *)L_60, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0124:
		{
			goto IL_016e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0126;
		throw e;
	}

CATCH_0126:
	{ // begin catch(System.Object)
		{
			bool L_61 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
			if (!L_61)
			{
				goto IL_0140;
			}
		}

IL_012e:
		{
			U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_62 = V_0;
			NullCheck(L_62);
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_63 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_62->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_63);
			int32_t L_64 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_63, /*hidden argument*/NULL);
			AsyncCausalityTracer_TraceOperationCompletion_m0C6FCD513830A060B436A11137CE4C7B114F26FC((int32_t)0, (int32_t)L_64, (int32_t)3, /*hidden argument*/NULL);
		}

IL_0140:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			bool L_65 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_30();
			if (!L_65)
			{
				goto IL_0157;
			}
		}

IL_0147:
		{
			U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_66 = V_0;
			NullCheck(L_66);
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_67 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_66->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_67);
			int32_t L_68 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_67, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_RemoveFromActiveTasks_m04918871919D56DC087D50937093E8FA992CAE3F((int32_t)L_68, /*hidden argument*/NULL);
		}

IL_0157:
		{
			U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_69 = V_0;
			NullCheck(L_69);
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_70 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_69->get_promise_2();
			il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
			RuntimeObject * L_71 = V_3;
			NullCheck((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_70);
			((  bool (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_70, (RuntimeObject *)L_71, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m681649E0926FAB0B829788CD61146021E9300EB5_RuntimeMethod_var);
		}
	} // end catch (depth: 1)

IL_016e:
	{
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_72 = V_0;
		NullCheck(L_72);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_73 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_72->get_promise_2();
		return L_73;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsyncImpl<System.Object,System.Object>(System.Func`5<TArg1,TArg2,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Action`1<System.IAsyncResult>,TArg1,TArg2,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_m6CB08325040E77B14E590064C9D8A21A0C1262DD_gshared (Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 * ___beginMethod0, Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * ___endFunction1, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction2, RuntimeObject * ___arg13, RuntimeObject * ___arg24, RuntimeObject * ___state5, int32_t ___creationOptions6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_m6CB08325040E77B14E590064C9D8A21A0C1262DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * V_0 = NULL;
	U3CU3Ec__DisplayClass41_1_2_t14E1C53A8DFC3E4AAC7C00497B12A5A25F8A9794 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_0 = (U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B *)L_0;
		U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_1 = V_0;
		Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * L_2 = ___endFunction1;
		NullCheck(L_1);
		L_1->set_endFunction_0(L_2);
		U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_3 = V_0;
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_4 = ___endAction2;
		NullCheck(L_3);
		L_3->set_endAction_1(L_4);
		Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 * L_5 = ___beginMethod0;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, (String_t*)_stringLiteralA7DEB4E83ED6644FBE7C7276D77CAEE0397BF409, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_m6CB08325040E77B14E590064C9D8A21A0C1262DD_RuntimeMethod_var);
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_7 = V_0;
		NullCheck(L_7);
		Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * L_8 = (Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *)L_7->get_endFunction_0();
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_9 = V_0;
		NullCheck(L_9);
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_10 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_9->get_endAction_1();
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_11 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_11, (String_t*)_stringLiteral92BF5D2AB9AD1A68596BC5F92B31A8D6A6C3F5BF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_m6CB08325040E77B14E590064C9D8A21A0C1262DD_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_12 = ___creationOptions6;
		TaskFactory_CheckFromAsyncOptions_m057FCAC407F10FB9157BA7D3A38963EAD250B3A8((int32_t)L_12, (bool)1, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_13 = V_0;
		RuntimeObject * L_14 = ___state5;
		int32_t L_15 = ___creationOptions6;
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_16 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((  void (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)(L_16, (RuntimeObject *)L_14, (int32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		NullCheck(L_13);
		L_13->set_promise_2(L_16);
		bool L_17 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0083;
		}
	}
	{
		U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_18 = V_0;
		NullCheck(L_18);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_19 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_18->get_promise_2();
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19);
		int32_t L_20 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19, /*hidden argument*/NULL);
		Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 * L_21 = ___beginMethod0;
		NullCheck((Delegate_t *)L_21);
		MethodInfo_t * L_22 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_21, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_22);
		String_t* L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B((String_t*)_stringLiteral19A591E076465B264D0FAFC4F98833B0673D6092, (String_t*)L_23, /*hidden argument*/NULL);
		AsyncCausalityTracer_TraceOperationCreation_m3A018DC27992C4559B10283C06CC11513825898A((int32_t)0, (int32_t)L_20, (String_t*)L_24, (uint64_t)(((int64_t)((int64_t)0))), /*hidden argument*/NULL);
	}

IL_0083:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		bool L_25 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_30();
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_26 = V_0;
		NullCheck(L_26);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_27 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_26->get_promise_2();
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_AddToActiveTasks_m29D7B0C1AD029D86736A92EC7E36BE87209748FD((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_27, /*hidden argument*/NULL);
	}

IL_0096:
	{
	}

IL_0097:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var);
			bool L_28 = ((BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields*)il2cpp_codegen_static_fields_for(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var))->get_TargetsAtLeast_Desktop_V4_5_0();
			if (!L_28)
			{
				goto IL_0110;
			}
		}

IL_009e:
		{
			U3CU3Ec__DisplayClass41_1_2_t14E1C53A8DFC3E4AAC7C00497B12A5A25F8A9794 * L_29 = (U3CU3Ec__DisplayClass41_1_2_t14E1C53A8DFC3E4AAC7C00497B12A5A25F8A9794 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
			((  void (*) (U3CU3Ec__DisplayClass41_1_2_t14E1C53A8DFC3E4AAC7C00497B12A5A25F8A9794 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
			V_1 = (U3CU3Ec__DisplayClass41_1_2_t14E1C53A8DFC3E4AAC7C00497B12A5A25F8A9794 *)L_29;
			U3CU3Ec__DisplayClass41_1_2_t14E1C53A8DFC3E4AAC7C00497B12A5A25F8A9794 * L_30 = V_1;
			U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_31 = V_0;
			NullCheck(L_30);
			L_30->set_CSU24U3CU3E8__locals1_1(L_31);
			U3CU3Ec__DisplayClass41_1_2_t14E1C53A8DFC3E4AAC7C00497B12A5A25F8A9794 * L_32 = V_1;
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_33 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)il2cpp_codegen_object_new(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E_il2cpp_TypeInfo_var);
			AtomicBoolean__ctor_m70B7B7EDDDEAD330A6C718C65C94223DFAB859D7(L_33, /*hidden argument*/NULL);
			NullCheck(L_32);
			L_32->set_invoked_0(L_33);
			Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 * L_34 = ___beginMethod0;
			RuntimeObject * L_35 = ___arg13;
			RuntimeObject * L_36 = ___arg24;
			U3CU3Ec__DisplayClass41_1_2_t14E1C53A8DFC3E4AAC7C00497B12A5A25F8A9794 * L_37 = V_1;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_38 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_38, (RuntimeObject *)L_37, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)), /*hidden argument*/NULL);
			RuntimeObject * L_39 = ___state5;
			NullCheck((Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *)L_34);
			RuntimeObject* L_40 = ((  RuntimeObject* (*) (Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *, RuntimeObject *, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *)L_34, (RuntimeObject *)L_35, (RuntimeObject *)L_36, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_38, (RuntimeObject *)L_39, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
			V_2 = (RuntimeObject*)L_40;
			RuntimeObject* L_41 = V_2;
			if (!L_41)
			{
				goto IL_0128;
			}
		}

IL_00d1:
		{
			RuntimeObject* L_42 = V_2;
			NullCheck((RuntimeObject*)L_42);
			bool L_43 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
			if (!L_43)
			{
				goto IL_0128;
			}
		}

IL_00d9:
		{
			U3CU3Ec__DisplayClass41_1_2_t14E1C53A8DFC3E4AAC7C00497B12A5A25F8A9794 * L_44 = V_1;
			NullCheck(L_44);
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_45 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_44->get_invoked_0();
			NullCheck((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_45);
			bool L_46 = AtomicBoolean_TryRelaxedSet_m8C68BF84E34C9F0FFEC851A81453C0E1586837FD((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_45, /*hidden argument*/NULL);
			if (!L_46)
			{
				goto IL_0128;
			}
		}

IL_00e6:
		{
			RuntimeObject* L_47 = V_2;
			U3CU3Ec__DisplayClass41_1_2_t14E1C53A8DFC3E4AAC7C00497B12A5A25F8A9794 * L_48 = V_1;
			NullCheck(L_48);
			U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_49 = (U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B *)L_48->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_49);
			Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * L_50 = (Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *)L_49->get_endFunction_0();
			U3CU3Ec__DisplayClass41_1_2_t14E1C53A8DFC3E4AAC7C00497B12A5A25F8A9794 * L_51 = V_1;
			NullCheck(L_51);
			U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_52 = (U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B *)L_51->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_52);
			Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_53 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_52->get_endAction_1();
			U3CU3Ec__DisplayClass41_1_2_t14E1C53A8DFC3E4AAC7C00497B12A5A25F8A9794 * L_54 = V_1;
			NullCheck(L_54);
			U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_55 = (U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B *)L_54->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_55);
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_56 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_55->get_promise_2();
			((  void (*) (RuntimeObject*, Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)((RuntimeObject*)L_47, (Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *)L_50, (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_53, (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_56, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
			goto IL_0128;
		}

IL_0110:
		{
			Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 * L_57 = ___beginMethod0;
			RuntimeObject * L_58 = ___arg13;
			RuntimeObject * L_59 = ___arg24;
			U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_60 = V_0;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_61 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_61, (RuntimeObject *)L_60, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)), /*hidden argument*/NULL);
			RuntimeObject * L_62 = ___state5;
			NullCheck((Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *)L_57);
			((  RuntimeObject* (*) (Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *, RuntimeObject *, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *)L_57, (RuntimeObject *)L_58, (RuntimeObject *)L_59, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_61, (RuntimeObject *)L_62, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0128:
		{
			goto IL_0172;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_012a;
		throw e;
	}

CATCH_012a:
	{ // begin catch(System.Object)
		{
			bool L_63 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
			if (!L_63)
			{
				goto IL_0144;
			}
		}

IL_0132:
		{
			U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_64 = V_0;
			NullCheck(L_64);
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_65 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_64->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_65);
			int32_t L_66 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_65, /*hidden argument*/NULL);
			AsyncCausalityTracer_TraceOperationCompletion_m0C6FCD513830A060B436A11137CE4C7B114F26FC((int32_t)0, (int32_t)L_66, (int32_t)3, /*hidden argument*/NULL);
		}

IL_0144:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			bool L_67 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_30();
			if (!L_67)
			{
				goto IL_015b;
			}
		}

IL_014b:
		{
			U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_68 = V_0;
			NullCheck(L_68);
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_69 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_68->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_69);
			int32_t L_70 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_69, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_RemoveFromActiveTasks_m04918871919D56DC087D50937093E8FA992CAE3F((int32_t)L_70, /*hidden argument*/NULL);
		}

IL_015b:
		{
			U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_71 = V_0;
			NullCheck(L_71);
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_72 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_71->get_promise_2();
			il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
			RuntimeObject * L_73 = V_3;
			NullCheck((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_72);
			((  bool (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_72, (RuntimeObject *)L_73, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_m6CB08325040E77B14E590064C9D8A21A0C1262DD_RuntimeMethod_var);
		}
	} // end catch (depth: 1)

IL_0172:
	{
		U3CU3Ec__DisplayClass41_0_2_tAB3453C364769C8E792F106D239754361EF0A93B * L_74 = V_0;
		NullCheck(L_74);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_75 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_74->get_promise_2();
		return L_75;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsyncImpl<System.Object,System.Object,System.Object>(System.Func`6<TArg1,TArg2,TArg3,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Action`1<System.IAsyncResult>,TArg1,TArg2,TArg3,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m2B3A46E3FAF52A3A246A8CDD65154BAA7E477364_gshared (Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97 * ___beginMethod0, Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * ___endFunction1, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction2, RuntimeObject * ___arg13, RuntimeObject * ___arg24, RuntimeObject * ___arg35, RuntimeObject * ___state6, int32_t ___creationOptions7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m2B3A46E3FAF52A3A246A8CDD65154BAA7E477364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * V_0 = NULL;
	U3CU3Ec__DisplayClass44_1_3_tCD6159A10EFC46E8F276FA977274DA62C82BED9E * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_0 = (U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 *)L_0;
		U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_1 = V_0;
		Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * L_2 = ___endFunction1;
		NullCheck(L_1);
		L_1->set_endFunction_0(L_2);
		U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_3 = V_0;
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_4 = ___endAction2;
		NullCheck(L_3);
		L_3->set_endAction_1(L_4);
		Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97 * L_5 = ___beginMethod0;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, (String_t*)_stringLiteralA7DEB4E83ED6644FBE7C7276D77CAEE0397BF409, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m2B3A46E3FAF52A3A246A8CDD65154BAA7E477364_RuntimeMethod_var);
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_7 = V_0;
		NullCheck(L_7);
		Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * L_8 = (Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *)L_7->get_endFunction_0();
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_9 = V_0;
		NullCheck(L_9);
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_10 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_9->get_endAction_1();
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_11 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_11, (String_t*)_stringLiteral92BF5D2AB9AD1A68596BC5F92B31A8D6A6C3F5BF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m2B3A46E3FAF52A3A246A8CDD65154BAA7E477364_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_12 = ___creationOptions7;
		TaskFactory_CheckFromAsyncOptions_m057FCAC407F10FB9157BA7D3A38963EAD250B3A8((int32_t)L_12, (bool)1, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_13 = V_0;
		RuntimeObject * L_14 = ___state6;
		int32_t L_15 = ___creationOptions7;
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_16 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((  void (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)(L_16, (RuntimeObject *)L_14, (int32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		NullCheck(L_13);
		L_13->set_promise_2(L_16);
		bool L_17 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0083;
		}
	}
	{
		U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_18 = V_0;
		NullCheck(L_18);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_19 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_18->get_promise_2();
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19);
		int32_t L_20 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19, /*hidden argument*/NULL);
		Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97 * L_21 = ___beginMethod0;
		NullCheck((Delegate_t *)L_21);
		MethodInfo_t * L_22 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_21, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_22);
		String_t* L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B((String_t*)_stringLiteral19A591E076465B264D0FAFC4F98833B0673D6092, (String_t*)L_23, /*hidden argument*/NULL);
		AsyncCausalityTracer_TraceOperationCreation_m3A018DC27992C4559B10283C06CC11513825898A((int32_t)0, (int32_t)L_20, (String_t*)L_24, (uint64_t)(((int64_t)((int64_t)0))), /*hidden argument*/NULL);
	}

IL_0083:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		bool L_25 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_30();
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_26 = V_0;
		NullCheck(L_26);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_27 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_26->get_promise_2();
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_AddToActiveTasks_m29D7B0C1AD029D86736A92EC7E36BE87209748FD((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_27, /*hidden argument*/NULL);
	}

IL_0096:
	{
	}

IL_0097:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var);
			bool L_28 = ((BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields*)il2cpp_codegen_static_fields_for(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var))->get_TargetsAtLeast_Desktop_V4_5_0();
			if (!L_28)
			{
				goto IL_0112;
			}
		}

IL_009e:
		{
			U3CU3Ec__DisplayClass44_1_3_tCD6159A10EFC46E8F276FA977274DA62C82BED9E * L_29 = (U3CU3Ec__DisplayClass44_1_3_tCD6159A10EFC46E8F276FA977274DA62C82BED9E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
			((  void (*) (U3CU3Ec__DisplayClass44_1_3_tCD6159A10EFC46E8F276FA977274DA62C82BED9E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
			V_1 = (U3CU3Ec__DisplayClass44_1_3_tCD6159A10EFC46E8F276FA977274DA62C82BED9E *)L_29;
			U3CU3Ec__DisplayClass44_1_3_tCD6159A10EFC46E8F276FA977274DA62C82BED9E * L_30 = V_1;
			U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_31 = V_0;
			NullCheck(L_30);
			L_30->set_CSU24U3CU3E8__locals1_1(L_31);
			U3CU3Ec__DisplayClass44_1_3_tCD6159A10EFC46E8F276FA977274DA62C82BED9E * L_32 = V_1;
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_33 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)il2cpp_codegen_object_new(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E_il2cpp_TypeInfo_var);
			AtomicBoolean__ctor_m70B7B7EDDDEAD330A6C718C65C94223DFAB859D7(L_33, /*hidden argument*/NULL);
			NullCheck(L_32);
			L_32->set_invoked_0(L_33);
			Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97 * L_34 = ___beginMethod0;
			RuntimeObject * L_35 = ___arg13;
			RuntimeObject * L_36 = ___arg24;
			RuntimeObject * L_37 = ___arg35;
			U3CU3Ec__DisplayClass44_1_3_tCD6159A10EFC46E8F276FA977274DA62C82BED9E * L_38 = V_1;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_39 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_39, (RuntimeObject *)L_38, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)), /*hidden argument*/NULL);
			RuntimeObject * L_40 = ___state6;
			NullCheck((Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97 *)L_34);
			RuntimeObject* L_41 = ((  RuntimeObject* (*) (Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97 *)L_34, (RuntimeObject *)L_35, (RuntimeObject *)L_36, (RuntimeObject *)L_37, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_39, (RuntimeObject *)L_40, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
			V_2 = (RuntimeObject*)L_41;
			RuntimeObject* L_42 = V_2;
			if (!L_42)
			{
				goto IL_012c;
			}
		}

IL_00d3:
		{
			RuntimeObject* L_43 = V_2;
			NullCheck((RuntimeObject*)L_43);
			bool L_44 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
			if (!L_44)
			{
				goto IL_012c;
			}
		}

IL_00db:
		{
			U3CU3Ec__DisplayClass44_1_3_tCD6159A10EFC46E8F276FA977274DA62C82BED9E * L_45 = V_1;
			NullCheck(L_45);
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_46 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_45->get_invoked_0();
			NullCheck((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_46);
			bool L_47 = AtomicBoolean_TryRelaxedSet_m8C68BF84E34C9F0FFEC851A81453C0E1586837FD((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_46, /*hidden argument*/NULL);
			if (!L_47)
			{
				goto IL_012c;
			}
		}

IL_00e8:
		{
			RuntimeObject* L_48 = V_2;
			U3CU3Ec__DisplayClass44_1_3_tCD6159A10EFC46E8F276FA977274DA62C82BED9E * L_49 = V_1;
			NullCheck(L_49);
			U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_50 = (U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 *)L_49->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_50);
			Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * L_51 = (Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *)L_50->get_endFunction_0();
			U3CU3Ec__DisplayClass44_1_3_tCD6159A10EFC46E8F276FA977274DA62C82BED9E * L_52 = V_1;
			NullCheck(L_52);
			U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_53 = (U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 *)L_52->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_53);
			Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_54 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_53->get_endAction_1();
			U3CU3Ec__DisplayClass44_1_3_tCD6159A10EFC46E8F276FA977274DA62C82BED9E * L_55 = V_1;
			NullCheck(L_55);
			U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_56 = (U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 *)L_55->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_56);
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_57 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_56->get_promise_2();
			((  void (*) (RuntimeObject*, Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)((RuntimeObject*)L_48, (Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *)L_51, (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_54, (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_57, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
			goto IL_012c;
		}

IL_0112:
		{
			Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97 * L_58 = ___beginMethod0;
			RuntimeObject * L_59 = ___arg13;
			RuntimeObject * L_60 = ___arg24;
			RuntimeObject * L_61 = ___arg35;
			U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_62 = V_0;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_63 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_63, (RuntimeObject *)L_62, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)), /*hidden argument*/NULL);
			RuntimeObject * L_64 = ___state6;
			NullCheck((Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97 *)L_58);
			((  RuntimeObject* (*) (Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_6_tB1B84DC2655374CFC4ADDB5AA768451D2C83FB97 *)L_58, (RuntimeObject *)L_59, (RuntimeObject *)L_60, (RuntimeObject *)L_61, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_63, (RuntimeObject *)L_64, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_012c:
		{
			goto IL_0176;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_012e;
		throw e;
	}

CATCH_012e:
	{ // begin catch(System.Object)
		{
			bool L_65 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
			if (!L_65)
			{
				goto IL_0148;
			}
		}

IL_0136:
		{
			U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_66 = V_0;
			NullCheck(L_66);
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_67 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_66->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_67);
			int32_t L_68 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_67, /*hidden argument*/NULL);
			AsyncCausalityTracer_TraceOperationCompletion_m0C6FCD513830A060B436A11137CE4C7B114F26FC((int32_t)0, (int32_t)L_68, (int32_t)3, /*hidden argument*/NULL);
		}

IL_0148:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			bool L_69 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_30();
			if (!L_69)
			{
				goto IL_015f;
			}
		}

IL_014f:
		{
			U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_70 = V_0;
			NullCheck(L_70);
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_71 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_70->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_71);
			int32_t L_72 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_71, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_RemoveFromActiveTasks_m04918871919D56DC087D50937093E8FA992CAE3F((int32_t)L_72, /*hidden argument*/NULL);
		}

IL_015f:
		{
			U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_73 = V_0;
			NullCheck(L_73);
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_74 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_73->get_promise_2();
			il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
			RuntimeObject * L_75 = V_3;
			NullCheck((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_74);
			((  bool (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_74, (RuntimeObject *)L_75, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m2B3A46E3FAF52A3A246A8CDD65154BAA7E477364_RuntimeMethod_var);
		}
	} // end catch (depth: 1)

IL_0176:
	{
		U3CU3Ec__DisplayClass44_0_3_t428BC18E38772BE5D9CFE1A77109A0638ECCD1C2 * L_76 = V_0;
		NullCheck(L_76);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_77 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_76->get_promise_2();
		return L_77;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsyncTrim<System.Object,System.Object>(TInstance,TArgs,System.Func`5<TInstance,TArgs,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`3<TInstance,System.IAsyncResult,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskFactory_1_FromAsyncTrim_TisRuntimeObject_TisRuntimeObject_m7288A7165F6A87EBA4E4648BFCB7D8C1D8137F74_gshared (RuntimeObject * ___thisRef0, RuntimeObject * ___args1, Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 * ___beginMethod2, Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC * ___endMethod3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncTrim_TisRuntimeObject_TisRuntimeObject_m7288A7165F6A87EBA4E4648BFCB7D8C1D8137F74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___thisRef0;
		Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC * L_1 = ___endMethod3;
		FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF * L_2 = (FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF *, RuntimeObject *, Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, (RuntimeObject *)L_0, (Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF *)L_2;
		Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 * L_3 = ___beginMethod2;
		RuntimeObject * L_4 = ___thisRef0;
		RuntimeObject * L_5 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_6 = ((FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))->get_s_completeFromAsyncResult_43();
		FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF * L_7 = V_0;
		NullCheck((Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *)L_3);
		RuntimeObject* L_8 = ((  RuntimeObject* (*) (Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *, RuntimeObject *, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_5, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		V_1 = (RuntimeObject*)L_8;
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck((RuntimeObject*)L_10);
		bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		if (!L_11)
		{
			goto IL_002c;
		}
	}
	{
		FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF * L_12 = V_0;
		RuntimeObject * L_13 = ___thisRef0;
		Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC * L_14 = ___endMethod3;
		RuntimeObject* L_15 = V_1;
		NullCheck((FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF *)L_12);
		((  void (*) (FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF *, RuntimeObject *, Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC *, RuntimeObject*, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF *)L_12, (RuntimeObject *)L_13, (Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC *)L_14, (RuntimeObject*)L_15, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_002c:
	{
		FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF * L_16 = V_0;
		return L_16;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>::FromAsyncImpl<System.Object>(System.Func`4<TArg1,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Action`1<System.IAsyncResult>,TArg1,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m5AEB6DDB800286721FD02093457462E80EADE8CD_gshared (Func_4_t1FB292635292578289C454E038620354E9A7662D * ___beginMethod0, Func_2_t93436DB66248BF735350EEC072257D84453153ED * ___endFunction1, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction2, RuntimeObject * ___arg13, RuntimeObject * ___state4, int32_t ___creationOptions5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m5AEB6DDB800286721FD02093457462E80EADE8CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * V_0 = NULL;
	U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_0 = (U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC *)L_0;
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_1 = V_0;
		Func_2_t93436DB66248BF735350EEC072257D84453153ED * L_2 = ___endFunction1;
		NullCheck(L_1);
		L_1->set_endFunction_0(L_2);
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_3 = V_0;
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_4 = ___endAction2;
		NullCheck(L_3);
		L_3->set_endAction_1(L_4);
		Func_4_t1FB292635292578289C454E038620354E9A7662D * L_5 = ___beginMethod0;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, (String_t*)_stringLiteralA7DEB4E83ED6644FBE7C7276D77CAEE0397BF409, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m5AEB6DDB800286721FD02093457462E80EADE8CD_RuntimeMethod_var);
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_7 = V_0;
		NullCheck(L_7);
		Func_2_t93436DB66248BF735350EEC072257D84453153ED * L_8 = (Func_2_t93436DB66248BF735350EEC072257D84453153ED *)L_7->get_endFunction_0();
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_9 = V_0;
		NullCheck(L_9);
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_10 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_9->get_endAction_1();
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_11 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_11, (String_t*)_stringLiteralC52F77B7D44C96CE5B91F76A3587ACE8C88748FF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m5AEB6DDB800286721FD02093457462E80EADE8CD_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_12 = ___creationOptions5;
		TaskFactory_CheckFromAsyncOptions_m057FCAC407F10FB9157BA7D3A38963EAD250B3A8((int32_t)L_12, (bool)1, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_13 = V_0;
		RuntimeObject * L_14 = ___state4;
		int32_t L_15 = ___creationOptions5;
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_16 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((  void (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)(L_16, (RuntimeObject *)L_14, (int32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		NullCheck(L_13);
		L_13->set_promise_2(L_16);
		bool L_17 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0083;
		}
	}
	{
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_18 = V_0;
		NullCheck(L_18);
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_19 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_18->get_promise_2();
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19);
		int32_t L_20 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19, /*hidden argument*/NULL);
		Func_4_t1FB292635292578289C454E038620354E9A7662D * L_21 = ___beginMethod0;
		NullCheck((Delegate_t *)L_21);
		MethodInfo_t * L_22 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_21, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_22);
		String_t* L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B((String_t*)_stringLiteral19A591E076465B264D0FAFC4F98833B0673D6092, (String_t*)L_23, /*hidden argument*/NULL);
		AsyncCausalityTracer_TraceOperationCreation_m3A018DC27992C4559B10283C06CC11513825898A((int32_t)0, (int32_t)L_20, (String_t*)L_24, (uint64_t)(((int64_t)((int64_t)0))), /*hidden argument*/NULL);
	}

IL_0083:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		bool L_25 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_30();
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_26 = V_0;
		NullCheck(L_26);
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_27 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_26->get_promise_2();
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_AddToActiveTasks_m29D7B0C1AD029D86736A92EC7E36BE87209748FD((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_27, /*hidden argument*/NULL);
	}

IL_0096:
	{
	}

IL_0097:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var);
			bool L_28 = ((BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields*)il2cpp_codegen_static_fields_for(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var))->get_TargetsAtLeast_Desktop_V4_5_0();
			if (!L_28)
			{
				goto IL_010e;
			}
		}

IL_009e:
		{
			U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * L_29 = (U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
			((  void (*) (U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
			V_1 = (U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B *)L_29;
			U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * L_30 = V_1;
			U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_31 = V_0;
			NullCheck(L_30);
			L_30->set_CSU24U3CU3E8__locals1_1(L_31);
			U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * L_32 = V_1;
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_33 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)il2cpp_codegen_object_new(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E_il2cpp_TypeInfo_var);
			AtomicBoolean__ctor_m70B7B7EDDDEAD330A6C718C65C94223DFAB859D7(L_33, /*hidden argument*/NULL);
			NullCheck(L_32);
			L_32->set_invoked_0(L_33);
			Func_4_t1FB292635292578289C454E038620354E9A7662D * L_34 = ___beginMethod0;
			RuntimeObject * L_35 = ___arg13;
			U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * L_36 = V_1;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_37 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_37, (RuntimeObject *)L_36, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)), /*hidden argument*/NULL);
			RuntimeObject * L_38 = ___state4;
			NullCheck((Func_4_t1FB292635292578289C454E038620354E9A7662D *)L_34);
			RuntimeObject* L_39 = ((  RuntimeObject* (*) (Func_4_t1FB292635292578289C454E038620354E9A7662D *, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_4_t1FB292635292578289C454E038620354E9A7662D *)L_34, (RuntimeObject *)L_35, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_37, (RuntimeObject *)L_38, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
			V_2 = (RuntimeObject*)L_39;
			RuntimeObject* L_40 = V_2;
			if (!L_40)
			{
				goto IL_0124;
			}
		}

IL_00cf:
		{
			RuntimeObject* L_41 = V_2;
			NullCheck((RuntimeObject*)L_41);
			bool L_42 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
			if (!L_42)
			{
				goto IL_0124;
			}
		}

IL_00d7:
		{
			U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * L_43 = V_1;
			NullCheck(L_43);
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_44 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_43->get_invoked_0();
			NullCheck((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_44);
			bool L_45 = AtomicBoolean_TryRelaxedSet_m8C68BF84E34C9F0FFEC851A81453C0E1586837FD((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_44, /*hidden argument*/NULL);
			if (!L_45)
			{
				goto IL_0124;
			}
		}

IL_00e4:
		{
			RuntimeObject* L_46 = V_2;
			U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * L_47 = V_1;
			NullCheck(L_47);
			U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_48 = (U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC *)L_47->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_48);
			Func_2_t93436DB66248BF735350EEC072257D84453153ED * L_49 = (Func_2_t93436DB66248BF735350EEC072257D84453153ED *)L_48->get_endFunction_0();
			U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * L_50 = V_1;
			NullCheck(L_50);
			U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_51 = (U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC *)L_50->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_51);
			Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_52 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_51->get_endAction_1();
			U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * L_53 = V_1;
			NullCheck(L_53);
			U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_54 = (U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC *)L_53->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_54);
			Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_55 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_54->get_promise_2();
			((  void (*) (RuntimeObject*, Func_2_t93436DB66248BF735350EEC072257D84453153ED *, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)((RuntimeObject*)L_46, (Func_2_t93436DB66248BF735350EEC072257D84453153ED *)L_49, (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_52, (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_55, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
			goto IL_0124;
		}

IL_010e:
		{
			Func_4_t1FB292635292578289C454E038620354E9A7662D * L_56 = ___beginMethod0;
			RuntimeObject * L_57 = ___arg13;
			U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_58 = V_0;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_59 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_59, (RuntimeObject *)L_58, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)), /*hidden argument*/NULL);
			RuntimeObject * L_60 = ___state4;
			NullCheck((Func_4_t1FB292635292578289C454E038620354E9A7662D *)L_56);
			((  RuntimeObject* (*) (Func_4_t1FB292635292578289C454E038620354E9A7662D *, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_4_t1FB292635292578289C454E038620354E9A7662D *)L_56, (RuntimeObject *)L_57, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_59, (RuntimeObject *)L_60, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0124:
		{
			goto IL_016e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0126;
		throw e;
	}

CATCH_0126:
	{ // begin catch(System.Object)
		{
			bool L_61 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
			if (!L_61)
			{
				goto IL_0140;
			}
		}

IL_012e:
		{
			U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_62 = V_0;
			NullCheck(L_62);
			Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_63 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_62->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_63);
			int32_t L_64 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_63, /*hidden argument*/NULL);
			AsyncCausalityTracer_TraceOperationCompletion_m0C6FCD513830A060B436A11137CE4C7B114F26FC((int32_t)0, (int32_t)L_64, (int32_t)3, /*hidden argument*/NULL);
		}

IL_0140:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			bool L_65 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_30();
			if (!L_65)
			{
				goto IL_0157;
			}
		}

IL_0147:
		{
			U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_66 = V_0;
			NullCheck(L_66);
			Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_67 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_66->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_67);
			int32_t L_68 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_67, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_RemoveFromActiveTasks_m04918871919D56DC087D50937093E8FA992CAE3F((int32_t)L_68, /*hidden argument*/NULL);
		}

IL_0157:
		{
			U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_69 = V_0;
			NullCheck(L_69);
			Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_70 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_69->get_promise_2();
			il2cpp_codegen_initobj((&V_3), sizeof(VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 ));
			VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_71 = V_3;
			NullCheck((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_70);
			((  bool (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_70, (VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 )L_71, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m5AEB6DDB800286721FD02093457462E80EADE8CD_RuntimeMethod_var);
		}
	} // end catch (depth: 1)

IL_016e:
	{
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_72 = V_0;
		NullCheck(L_72);
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_73 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_72->get_promise_2();
		return L_73;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>::FromAsyncImpl<System.Object,System.Object>(System.Func`5<TArg1,TArg2,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Action`1<System.IAsyncResult>,TArg1,TArg2,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_mDEE88068BA7EAE1407137D6D6F35B52994E1C2D5_gshared (Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 * ___beginMethod0, Func_2_t93436DB66248BF735350EEC072257D84453153ED * ___endFunction1, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction2, RuntimeObject * ___arg13, RuntimeObject * ___arg24, RuntimeObject * ___state5, int32_t ___creationOptions6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_mDEE88068BA7EAE1407137D6D6F35B52994E1C2D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * V_0 = NULL;
	U3CU3Ec__DisplayClass41_1_2_t93941A8F6A00A31807C0D2F83A0B7BDC4E042E32 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_0 = (U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF *)L_0;
		U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_1 = V_0;
		Func_2_t93436DB66248BF735350EEC072257D84453153ED * L_2 = ___endFunction1;
		NullCheck(L_1);
		L_1->set_endFunction_0(L_2);
		U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_3 = V_0;
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_4 = ___endAction2;
		NullCheck(L_3);
		L_3->set_endAction_1(L_4);
		Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 * L_5 = ___beginMethod0;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, (String_t*)_stringLiteralA7DEB4E83ED6644FBE7C7276D77CAEE0397BF409, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_mDEE88068BA7EAE1407137D6D6F35B52994E1C2D5_RuntimeMethod_var);
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_7 = V_0;
		NullCheck(L_7);
		Func_2_t93436DB66248BF735350EEC072257D84453153ED * L_8 = (Func_2_t93436DB66248BF735350EEC072257D84453153ED *)L_7->get_endFunction_0();
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_9 = V_0;
		NullCheck(L_9);
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_10 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_9->get_endAction_1();
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_11 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_11, (String_t*)_stringLiteral92BF5D2AB9AD1A68596BC5F92B31A8D6A6C3F5BF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_mDEE88068BA7EAE1407137D6D6F35B52994E1C2D5_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_12 = ___creationOptions6;
		TaskFactory_CheckFromAsyncOptions_m057FCAC407F10FB9157BA7D3A38963EAD250B3A8((int32_t)L_12, (bool)1, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_13 = V_0;
		RuntimeObject * L_14 = ___state5;
		int32_t L_15 = ___creationOptions6;
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_16 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((  void (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)(L_16, (RuntimeObject *)L_14, (int32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		NullCheck(L_13);
		L_13->set_promise_2(L_16);
		bool L_17 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0083;
		}
	}
	{
		U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_18 = V_0;
		NullCheck(L_18);
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_19 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_18->get_promise_2();
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19);
		int32_t L_20 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19, /*hidden argument*/NULL);
		Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 * L_21 = ___beginMethod0;
		NullCheck((Delegate_t *)L_21);
		MethodInfo_t * L_22 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_21, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_22);
		String_t* L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B((String_t*)_stringLiteral19A591E076465B264D0FAFC4F98833B0673D6092, (String_t*)L_23, /*hidden argument*/NULL);
		AsyncCausalityTracer_TraceOperationCreation_m3A018DC27992C4559B10283C06CC11513825898A((int32_t)0, (int32_t)L_20, (String_t*)L_24, (uint64_t)(((int64_t)((int64_t)0))), /*hidden argument*/NULL);
	}

IL_0083:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		bool L_25 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_30();
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_26 = V_0;
		NullCheck(L_26);
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_27 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_26->get_promise_2();
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_AddToActiveTasks_m29D7B0C1AD029D86736A92EC7E36BE87209748FD((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_27, /*hidden argument*/NULL);
	}

IL_0096:
	{
	}

IL_0097:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var);
			bool L_28 = ((BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields*)il2cpp_codegen_static_fields_for(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var))->get_TargetsAtLeast_Desktop_V4_5_0();
			if (!L_28)
			{
				goto IL_0110;
			}
		}

IL_009e:
		{
			U3CU3Ec__DisplayClass41_1_2_t93941A8F6A00A31807C0D2F83A0B7BDC4E042E32 * L_29 = (U3CU3Ec__DisplayClass41_1_2_t93941A8F6A00A31807C0D2F83A0B7BDC4E042E32 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
			((  void (*) (U3CU3Ec__DisplayClass41_1_2_t93941A8F6A00A31807C0D2F83A0B7BDC4E042E32 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
			V_1 = (U3CU3Ec__DisplayClass41_1_2_t93941A8F6A00A31807C0D2F83A0B7BDC4E042E32 *)L_29;
			U3CU3Ec__DisplayClass41_1_2_t93941A8F6A00A31807C0D2F83A0B7BDC4E042E32 * L_30 = V_1;
			U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_31 = V_0;
			NullCheck(L_30);
			L_30->set_CSU24U3CU3E8__locals1_1(L_31);
			U3CU3Ec__DisplayClass41_1_2_t93941A8F6A00A31807C0D2F83A0B7BDC4E042E32 * L_32 = V_1;
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_33 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)il2cpp_codegen_object_new(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E_il2cpp_TypeInfo_var);
			AtomicBoolean__ctor_m70B7B7EDDDEAD330A6C718C65C94223DFAB859D7(L_33, /*hidden argument*/NULL);
			NullCheck(L_32);
			L_32->set_invoked_0(L_33);
			Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 * L_34 = ___beginMethod0;
			RuntimeObject * L_35 = ___arg13;
			RuntimeObject * L_36 = ___arg24;
			U3CU3Ec__DisplayClass41_1_2_t93941A8F6A00A31807C0D2F83A0B7BDC4E042E32 * L_37 = V_1;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_38 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_38, (RuntimeObject *)L_37, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)), /*hidden argument*/NULL);
			RuntimeObject * L_39 = ___state5;
			NullCheck((Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *)L_34);
			RuntimeObject* L_40 = ((  RuntimeObject* (*) (Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *, RuntimeObject *, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *)L_34, (RuntimeObject *)L_35, (RuntimeObject *)L_36, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_38, (RuntimeObject *)L_39, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
			V_2 = (RuntimeObject*)L_40;
			RuntimeObject* L_41 = V_2;
			if (!L_41)
			{
				goto IL_0128;
			}
		}

IL_00d1:
		{
			RuntimeObject* L_42 = V_2;
			NullCheck((RuntimeObject*)L_42);
			bool L_43 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
			if (!L_43)
			{
				goto IL_0128;
			}
		}

IL_00d9:
		{
			U3CU3Ec__DisplayClass41_1_2_t93941A8F6A00A31807C0D2F83A0B7BDC4E042E32 * L_44 = V_1;
			NullCheck(L_44);
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_45 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_44->get_invoked_0();
			NullCheck((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_45);
			bool L_46 = AtomicBoolean_TryRelaxedSet_m8C68BF84E34C9F0FFEC851A81453C0E1586837FD((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_45, /*hidden argument*/NULL);
			if (!L_46)
			{
				goto IL_0128;
			}
		}

IL_00e6:
		{
			RuntimeObject* L_47 = V_2;
			U3CU3Ec__DisplayClass41_1_2_t93941A8F6A00A31807C0D2F83A0B7BDC4E042E32 * L_48 = V_1;
			NullCheck(L_48);
			U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_49 = (U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF *)L_48->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_49);
			Func_2_t93436DB66248BF735350EEC072257D84453153ED * L_50 = (Func_2_t93436DB66248BF735350EEC072257D84453153ED *)L_49->get_endFunction_0();
			U3CU3Ec__DisplayClass41_1_2_t93941A8F6A00A31807C0D2F83A0B7BDC4E042E32 * L_51 = V_1;
			NullCheck(L_51);
			U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_52 = (U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF *)L_51->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_52);
			Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_53 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_52->get_endAction_1();
			U3CU3Ec__DisplayClass41_1_2_t93941A8F6A00A31807C0D2F83A0B7BDC4E042E32 * L_54 = V_1;
			NullCheck(L_54);
			U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_55 = (U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF *)L_54->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_55);
			Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_56 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_55->get_promise_2();
			((  void (*) (RuntimeObject*, Func_2_t93436DB66248BF735350EEC072257D84453153ED *, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)((RuntimeObject*)L_47, (Func_2_t93436DB66248BF735350EEC072257D84453153ED *)L_50, (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_53, (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_56, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
			goto IL_0128;
		}

IL_0110:
		{
			Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 * L_57 = ___beginMethod0;
			RuntimeObject * L_58 = ___arg13;
			RuntimeObject * L_59 = ___arg24;
			U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_60 = V_0;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_61 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_61, (RuntimeObject *)L_60, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)), /*hidden argument*/NULL);
			RuntimeObject * L_62 = ___state5;
			NullCheck((Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *)L_57);
			((  RuntimeObject* (*) (Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *, RuntimeObject *, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *)L_57, (RuntimeObject *)L_58, (RuntimeObject *)L_59, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_61, (RuntimeObject *)L_62, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0128:
		{
			goto IL_0172;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_012a;
		throw e;
	}

CATCH_012a:
	{ // begin catch(System.Object)
		{
			bool L_63 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
			if (!L_63)
			{
				goto IL_0144;
			}
		}

IL_0132:
		{
			U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_64 = V_0;
			NullCheck(L_64);
			Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_65 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_64->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_65);
			int32_t L_66 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_65, /*hidden argument*/NULL);
			AsyncCausalityTracer_TraceOperationCompletion_m0C6FCD513830A060B436A11137CE4C7B114F26FC((int32_t)0, (int32_t)L_66, (int32_t)3, /*hidden argument*/NULL);
		}

IL_0144:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			bool L_67 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_30();
			if (!L_67)
			{
				goto IL_015b;
			}
		}

IL_014b:
		{
			U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_68 = V_0;
			NullCheck(L_68);
			Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_69 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_68->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_69);
			int32_t L_70 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_69, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_RemoveFromActiveTasks_m04918871919D56DC087D50937093E8FA992CAE3F((int32_t)L_70, /*hidden argument*/NULL);
		}

IL_015b:
		{
			U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_71 = V_0;
			NullCheck(L_71);
			Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_72 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_71->get_promise_2();
			il2cpp_codegen_initobj((&V_3), sizeof(VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 ));
			VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_73 = V_3;
			NullCheck((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_72);
			((  bool (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_72, (VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 )L_73, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisRuntimeObject_mDEE88068BA7EAE1407137D6D6F35B52994E1C2D5_RuntimeMethod_var);
		}
	} // end catch (depth: 1)

IL_0172:
	{
		U3CU3Ec__DisplayClass41_0_2_t49A3D348AA627BE53B7F3A490665A1E9745942BF * L_74 = V_0;
		NullCheck(L_74);
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_75 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_74->get_promise_2();
		return L_75;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>::FromAsyncImpl<System.Object,System.Int32>(System.Func`5<TArg1,TArg2,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Action`1<System.IAsyncResult>,TArg1,TArg2,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD30EF63A4AB123D6024EABB84737DB0499032327_gshared (Func_5_t71E6A6C70D6F26AFC91F688843ACAB6E65937AD0 * ___beginMethod0, Func_2_t93436DB66248BF735350EEC072257D84453153ED * ___endFunction1, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction2, RuntimeObject * ___arg13, int32_t ___arg24, RuntimeObject * ___state5, int32_t ___creationOptions6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD30EF63A4AB123D6024EABB84737DB0499032327_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * V_0 = NULL;
	U3CU3Ec__DisplayClass41_1_2_t0F4199CEB2152716BBF8EAC4E095B3B2A0A58AAD * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_0 = (U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D *)L_0;
		U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_1 = V_0;
		Func_2_t93436DB66248BF735350EEC072257D84453153ED * L_2 = ___endFunction1;
		NullCheck(L_1);
		L_1->set_endFunction_0(L_2);
		U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_3 = V_0;
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_4 = ___endAction2;
		NullCheck(L_3);
		L_3->set_endAction_1(L_4);
		Func_5_t71E6A6C70D6F26AFC91F688843ACAB6E65937AD0 * L_5 = ___beginMethod0;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, (String_t*)_stringLiteralA7DEB4E83ED6644FBE7C7276D77CAEE0397BF409, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD30EF63A4AB123D6024EABB84737DB0499032327_RuntimeMethod_var);
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_7 = V_0;
		NullCheck(L_7);
		Func_2_t93436DB66248BF735350EEC072257D84453153ED * L_8 = (Func_2_t93436DB66248BF735350EEC072257D84453153ED *)L_7->get_endFunction_0();
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_9 = V_0;
		NullCheck(L_9);
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_10 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_9->get_endAction_1();
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_11 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_11, (String_t*)_stringLiteral92BF5D2AB9AD1A68596BC5F92B31A8D6A6C3F5BF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD30EF63A4AB123D6024EABB84737DB0499032327_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_12 = ___creationOptions6;
		TaskFactory_CheckFromAsyncOptions_m057FCAC407F10FB9157BA7D3A38963EAD250B3A8((int32_t)L_12, (bool)1, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_13 = V_0;
		RuntimeObject * L_14 = ___state5;
		int32_t L_15 = ___creationOptions6;
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_16 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((  void (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)(L_16, (RuntimeObject *)L_14, (int32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		NullCheck(L_13);
		L_13->set_promise_2(L_16);
		bool L_17 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0083;
		}
	}
	{
		U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_18 = V_0;
		NullCheck(L_18);
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_19 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_18->get_promise_2();
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19);
		int32_t L_20 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19, /*hidden argument*/NULL);
		Func_5_t71E6A6C70D6F26AFC91F688843ACAB6E65937AD0 * L_21 = ___beginMethod0;
		NullCheck((Delegate_t *)L_21);
		MethodInfo_t * L_22 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_21, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_22);
		String_t* L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B((String_t*)_stringLiteral19A591E076465B264D0FAFC4F98833B0673D6092, (String_t*)L_23, /*hidden argument*/NULL);
		AsyncCausalityTracer_TraceOperationCreation_m3A018DC27992C4559B10283C06CC11513825898A((int32_t)0, (int32_t)L_20, (String_t*)L_24, (uint64_t)(((int64_t)((int64_t)0))), /*hidden argument*/NULL);
	}

IL_0083:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		bool L_25 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_30();
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_26 = V_0;
		NullCheck(L_26);
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_27 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_26->get_promise_2();
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_AddToActiveTasks_m29D7B0C1AD029D86736A92EC7E36BE87209748FD((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_27, /*hidden argument*/NULL);
	}

IL_0096:
	{
	}

IL_0097:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var);
			bool L_28 = ((BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields*)il2cpp_codegen_static_fields_for(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var))->get_TargetsAtLeast_Desktop_V4_5_0();
			if (!L_28)
			{
				goto IL_0110;
			}
		}

IL_009e:
		{
			U3CU3Ec__DisplayClass41_1_2_t0F4199CEB2152716BBF8EAC4E095B3B2A0A58AAD * L_29 = (U3CU3Ec__DisplayClass41_1_2_t0F4199CEB2152716BBF8EAC4E095B3B2A0A58AAD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
			((  void (*) (U3CU3Ec__DisplayClass41_1_2_t0F4199CEB2152716BBF8EAC4E095B3B2A0A58AAD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
			V_1 = (U3CU3Ec__DisplayClass41_1_2_t0F4199CEB2152716BBF8EAC4E095B3B2A0A58AAD *)L_29;
			U3CU3Ec__DisplayClass41_1_2_t0F4199CEB2152716BBF8EAC4E095B3B2A0A58AAD * L_30 = V_1;
			U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_31 = V_0;
			NullCheck(L_30);
			L_30->set_CSU24U3CU3E8__locals1_1(L_31);
			U3CU3Ec__DisplayClass41_1_2_t0F4199CEB2152716BBF8EAC4E095B3B2A0A58AAD * L_32 = V_1;
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_33 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)il2cpp_codegen_object_new(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E_il2cpp_TypeInfo_var);
			AtomicBoolean__ctor_m70B7B7EDDDEAD330A6C718C65C94223DFAB859D7(L_33, /*hidden argument*/NULL);
			NullCheck(L_32);
			L_32->set_invoked_0(L_33);
			Func_5_t71E6A6C70D6F26AFC91F688843ACAB6E65937AD0 * L_34 = ___beginMethod0;
			RuntimeObject * L_35 = ___arg13;
			int32_t L_36 = ___arg24;
			U3CU3Ec__DisplayClass41_1_2_t0F4199CEB2152716BBF8EAC4E095B3B2A0A58AAD * L_37 = V_1;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_38 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_38, (RuntimeObject *)L_37, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)), /*hidden argument*/NULL);
			RuntimeObject * L_39 = ___state5;
			NullCheck((Func_5_t71E6A6C70D6F26AFC91F688843ACAB6E65937AD0 *)L_34);
			RuntimeObject* L_40 = ((  RuntimeObject* (*) (Func_5_t71E6A6C70D6F26AFC91F688843ACAB6E65937AD0 *, RuntimeObject *, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_5_t71E6A6C70D6F26AFC91F688843ACAB6E65937AD0 *)L_34, (RuntimeObject *)L_35, (int32_t)L_36, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_38, (RuntimeObject *)L_39, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
			V_2 = (RuntimeObject*)L_40;
			RuntimeObject* L_41 = V_2;
			if (!L_41)
			{
				goto IL_0128;
			}
		}

IL_00d1:
		{
			RuntimeObject* L_42 = V_2;
			NullCheck((RuntimeObject*)L_42);
			bool L_43 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
			if (!L_43)
			{
				goto IL_0128;
			}
		}

IL_00d9:
		{
			U3CU3Ec__DisplayClass41_1_2_t0F4199CEB2152716BBF8EAC4E095B3B2A0A58AAD * L_44 = V_1;
			NullCheck(L_44);
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_45 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_44->get_invoked_0();
			NullCheck((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_45);
			bool L_46 = AtomicBoolean_TryRelaxedSet_m8C68BF84E34C9F0FFEC851A81453C0E1586837FD((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_45, /*hidden argument*/NULL);
			if (!L_46)
			{
				goto IL_0128;
			}
		}

IL_00e6:
		{
			RuntimeObject* L_47 = V_2;
			U3CU3Ec__DisplayClass41_1_2_t0F4199CEB2152716BBF8EAC4E095B3B2A0A58AAD * L_48 = V_1;
			NullCheck(L_48);
			U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_49 = (U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D *)L_48->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_49);
			Func_2_t93436DB66248BF735350EEC072257D84453153ED * L_50 = (Func_2_t93436DB66248BF735350EEC072257D84453153ED *)L_49->get_endFunction_0();
			U3CU3Ec__DisplayClass41_1_2_t0F4199CEB2152716BBF8EAC4E095B3B2A0A58AAD * L_51 = V_1;
			NullCheck(L_51);
			U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_52 = (U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D *)L_51->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_52);
			Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_53 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_52->get_endAction_1();
			U3CU3Ec__DisplayClass41_1_2_t0F4199CEB2152716BBF8EAC4E095B3B2A0A58AAD * L_54 = V_1;
			NullCheck(L_54);
			U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_55 = (U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D *)L_54->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_55);
			Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_56 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_55->get_promise_2();
			((  void (*) (RuntimeObject*, Func_2_t93436DB66248BF735350EEC072257D84453153ED *, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)((RuntimeObject*)L_47, (Func_2_t93436DB66248BF735350EEC072257D84453153ED *)L_50, (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_53, (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_56, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
			goto IL_0128;
		}

IL_0110:
		{
			Func_5_t71E6A6C70D6F26AFC91F688843ACAB6E65937AD0 * L_57 = ___beginMethod0;
			RuntimeObject * L_58 = ___arg13;
			int32_t L_59 = ___arg24;
			U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_60 = V_0;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_61 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_61, (RuntimeObject *)L_60, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)), /*hidden argument*/NULL);
			RuntimeObject * L_62 = ___state5;
			NullCheck((Func_5_t71E6A6C70D6F26AFC91F688843ACAB6E65937AD0 *)L_57);
			((  RuntimeObject* (*) (Func_5_t71E6A6C70D6F26AFC91F688843ACAB6E65937AD0 *, RuntimeObject *, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_5_t71E6A6C70D6F26AFC91F688843ACAB6E65937AD0 *)L_57, (RuntimeObject *)L_58, (int32_t)L_59, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_61, (RuntimeObject *)L_62, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0128:
		{
			goto IL_0172;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_012a;
		throw e;
	}

CATCH_012a:
	{ // begin catch(System.Object)
		{
			bool L_63 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
			if (!L_63)
			{
				goto IL_0144;
			}
		}

IL_0132:
		{
			U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_64 = V_0;
			NullCheck(L_64);
			Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_65 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_64->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_65);
			int32_t L_66 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_65, /*hidden argument*/NULL);
			AsyncCausalityTracer_TraceOperationCompletion_m0C6FCD513830A060B436A11137CE4C7B114F26FC((int32_t)0, (int32_t)L_66, (int32_t)3, /*hidden argument*/NULL);
		}

IL_0144:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			bool L_67 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_30();
			if (!L_67)
			{
				goto IL_015b;
			}
		}

IL_014b:
		{
			U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_68 = V_0;
			NullCheck(L_68);
			Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_69 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_68->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_69);
			int32_t L_70 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_69, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_RemoveFromActiveTasks_m04918871919D56DC087D50937093E8FA992CAE3F((int32_t)L_70, /*hidden argument*/NULL);
		}

IL_015b:
		{
			U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_71 = V_0;
			NullCheck(L_71);
			Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_72 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_71->get_promise_2();
			il2cpp_codegen_initobj((&V_3), sizeof(VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 ));
			VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_73 = V_3;
			NullCheck((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_72);
			((  bool (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_72, (VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 )L_73, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD30EF63A4AB123D6024EABB84737DB0499032327_RuntimeMethod_var);
		}
	} // end catch (depth: 1)

IL_0172:
	{
		U3CU3Ec__DisplayClass41_0_2_t60D77E46483BD005032E8019C1FEB4DE6FAB215D * L_74 = V_0;
		NullCheck(L_74);
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_75 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_74->get_promise_2();
		return L_75;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>::FromAsyncTrim<System.Object,System.IO.Stream_ReadWriteParameters>(TInstance,TArgs,System.Func`5<TInstance,TArgs,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`3<TInstance,System.IAsyncResult,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * TaskFactory_1_FromAsyncTrim_TisRuntimeObject_TisReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_m5C922B333929EFDD969068043559BD32667E93A3_gshared (RuntimeObject * ___thisRef0, ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47  ___args1, Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5 * ___beginMethod2, Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 * ___endMethod3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncTrim_TisRuntimeObject_TisReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_m5C922B333929EFDD969068043559BD32667E93A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___thisRef0;
		Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 * L_1 = ___endMethod3;
		FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 * L_2 = (FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 *, RuntimeObject *, Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, (RuntimeObject *)L_0, (Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 *)L_2;
		Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5 * L_3 = ___beginMethod2;
		RuntimeObject * L_4 = ___thisRef0;
		ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47  L_5 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_6 = ((FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))->get_s_completeFromAsyncResult_43();
		FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 * L_7 = V_0;
		NullCheck((Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5 *)L_3);
		RuntimeObject* L_8 = ((  RuntimeObject* (*) (Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5 *, RuntimeObject *, ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47 , AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5 *)L_3, (RuntimeObject *)L_4, (ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47 )L_5, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		V_1 = (RuntimeObject*)L_8;
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck((RuntimeObject*)L_10);
		bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		if (!L_11)
		{
			goto IL_002c;
		}
	}
	{
		FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 * L_12 = V_0;
		RuntimeObject * L_13 = ___thisRef0;
		Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 * L_14 = ___endMethod3;
		RuntimeObject* L_15 = V_1;
		NullCheck((FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 *)L_12);
		((  void (*) (FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 *, RuntimeObject *, Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 *, RuntimeObject*, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 *)L_12, (RuntimeObject *)L_13, (Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 *)L_14, (RuntimeObject*)L_15, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_002c:
	{
		FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 * L_16 = V_0;
		return L_16;
	}
}
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Object>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>,System.Threading.Tasks.TaskContinuationOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_1_ContinueWith_TisRuntimeObject_mD5CEC6CBA0EB70E1C3D7B04196B46C43703A88EF_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6 * ___continuationFunction0, int32_t ___continuationOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1_ContinueWith_TisRuntimeObject_mD5CEC6CBA0EB70E1C3D7B04196B46C43703A88EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (int32_t)1;
		Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6 * L_0 = ___continuationFunction0;
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_1 = TaskScheduler_get_Current_m9B2B54B9B43FC6E157E04ABE9151F6A0FF124C01(/*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = V_1;
		int32_t L_3 = ___continuationOptions1;
		NullCheck((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_4 = ((  Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6 *, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, (Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6 *)L_0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_1, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_2, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Object>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>,System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.StackCrawlMark&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_1_ContinueWith_TisRuntimeObject_mDE5CD16304F994F11A35F60DD08F76F578F239FC_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6 * ___continuationFunction0, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___continuationOptions3, int32_t* ___stackMark4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1_ContinueWith_TisRuntimeObject_mDE5CD16304F994F11A35F60DD08F76F578F239FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * V_2 = NULL;
	{
		Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6 * L_0 = ___continuationFunction0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)_stringLiteral295C1C91484E27E03B860FDA8F1EE84730518E64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Task_1_ContinueWith_TisRuntimeObject_mDE5CD16304F994F11A35F60DD08F76F578F239FC_RuntimeMethod_var);
	}

IL_000e:
	{
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_2 = ___scheduler1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, (String_t*)_stringLiteralA75CF6F408A626E601212712FB539C300D88CDBE, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Task_1_ContinueWith_TisRuntimeObject_mDE5CD16304F994F11A35F60DD08F76F578F239FC_RuntimeMethod_var);
	}

IL_001c:
	{
		int32_t L_4 = ___continuationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_CreationOptionsFromContinuationOptions_mB5865DC3CF441EE1681B47B49A747344FDD6631D((int32_t)L_4, (int32_t*)(int32_t*)(&V_0), (int32_t*)(int32_t*)(&V_1), /*hidden argument*/NULL);
		Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6 * L_5 = ___continuationFunction0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t* L_8 = ___stackMark4;
		ContinuationResultTaskFromResultTask_2_t04599255F5B221AF375C60B98DCCCA03183073B5 * L_9 = (ContinuationResultTaskFromResultTask_2_t04599255F5B221AF375C60B98DCCCA03183073B5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (ContinuationResultTaskFromResultTask_2_t04599255F5B221AF375C60B98DCCCA03183073B5 *, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, Delegate_t *, RuntimeObject *, int32_t, int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_9, (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, (Delegate_t *)L_5, (RuntimeObject *)NULL, (int32_t)L_6, (int32_t)L_7, (int32_t*)(int32_t*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_9;
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_10 = V_2;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_11 = ___scheduler1;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_12 = ___cancellationToken2;
		int32_t L_13 = ___continuationOptions3;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_ContinueWithCore_m8C75A57E83C02512E15E4ED205F70EA555F16DDB((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_10, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_11, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_12, (int32_t)L_13, /*hidden argument*/NULL);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_14 = V_2;
		return L_14;
	}
}
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>::ContinueWith<System.Nullable`1<System.Int32>>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>,System.Threading.Tasks.TaskContinuationOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m886398BE05C4ED256B86DABBB5CDE411B95E33A4_gshared (Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * __this, Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2 * ___continuationFunction0, int32_t ___continuationOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m886398BE05C4ED256B86DABBB5CDE411B95E33A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (int32_t)1;
		Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2 * L_0 = ___continuationFunction0;
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_1 = TaskScheduler_get_Current_m9B2B54B9B43FC6E157E04ABE9151F6A0FF124C01(/*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = V_1;
		int32_t L_3 = ___continuationOptions1;
		NullCheck((Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F *)__this);
		Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * L_4 = ((  Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * (*) (Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F *, Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2 *, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F *)__this, (Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2 *)L_0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_1, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_2, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>::ContinueWith<System.Nullable`1<System.Int32>>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>,System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.StackCrawlMark&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m5C7EBEA544578715D4178889DC1825922ACBC76E_gshared (Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * __this, Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2 * ___continuationFunction0, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___continuationOptions3, int32_t* ___stackMark4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m5C7EBEA544578715D4178889DC1825922ACBC76E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * V_2 = NULL;
	{
		Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2 * L_0 = ___continuationFunction0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)_stringLiteral295C1C91484E27E03B860FDA8F1EE84730518E64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m5C7EBEA544578715D4178889DC1825922ACBC76E_RuntimeMethod_var);
	}

IL_000e:
	{
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_2 = ___scheduler1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, (String_t*)_stringLiteralA75CF6F408A626E601212712FB539C300D88CDBE, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m5C7EBEA544578715D4178889DC1825922ACBC76E_RuntimeMethod_var);
	}

IL_001c:
	{
		int32_t L_4 = ___continuationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_CreationOptionsFromContinuationOptions_mB5865DC3CF441EE1681B47B49A747344FDD6631D((int32_t)L_4, (int32_t*)(int32_t*)(&V_0), (int32_t*)(int32_t*)(&V_1), /*hidden argument*/NULL);
		Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2 * L_5 = ___continuationFunction0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t* L_8 = ___stackMark4;
		ContinuationResultTaskFromResultTask_2_t978BBB17B79E82EF26D49614633F8F6A1BF4B632 * L_9 = (ContinuationResultTaskFromResultTask_2_t978BBB17B79E82EF26D49614633F8F6A1BF4B632 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (ContinuationResultTaskFromResultTask_2_t978BBB17B79E82EF26D49614633F8F6A1BF4B632 *, Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F *, Delegate_t *, RuntimeObject *, int32_t, int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_9, (Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F *)__this, (Delegate_t *)L_5, (RuntimeObject *)NULL, (int32_t)L_6, (int32_t)L_7, (int32_t*)(int32_t*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 *)L_9;
		Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * L_10 = V_2;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_11 = ___scheduler1;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_12 = ___cancellationToken2;
		int32_t L_13 = ___continuationOptions3;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_ContinueWithCore_m8C75A57E83C02512E15E4ED205F70EA555F16DDB((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_10, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_11, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_12, (int32_t)L_13, /*hidden argument*/NULL);
		Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * L_14 = V_2;
		return L_14;
	}
}
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Nullable`1<System.Int32>>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>,System.Threading.Tasks.TaskContinuationOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m849AA31EC773855DC22DE22FE9E1CDF41764F042_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Func_2_tC6816526F3327CB168F701FED02EB54522A97009 * ___continuationFunction0, int32_t ___continuationOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m849AA31EC773855DC22DE22FE9E1CDF41764F042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (int32_t)1;
		Func_2_tC6816526F3327CB168F701FED02EB54522A97009 * L_0 = ___continuationFunction0;
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_1 = TaskScheduler_get_Current_m9B2B54B9B43FC6E157E04ABE9151F6A0FF124C01(/*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = V_1;
		int32_t L_3 = ___continuationOptions1;
		NullCheck((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this);
		Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * L_4 = ((  Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, Func_2_tC6816526F3327CB168F701FED02EB54522A97009 *, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, (Func_2_tC6816526F3327CB168F701FED02EB54522A97009 *)L_0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_1, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_2, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Nullable`1<System.Int32>>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>,System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.StackCrawlMark&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_mBA02015EB4C668DC7E4EB19F11011451DB565069_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Func_2_tC6816526F3327CB168F701FED02EB54522A97009 * ___continuationFunction0, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___continuationOptions3, int32_t* ___stackMark4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_mBA02015EB4C668DC7E4EB19F11011451DB565069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * V_2 = NULL;
	{
		Func_2_tC6816526F3327CB168F701FED02EB54522A97009 * L_0 = ___continuationFunction0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)_stringLiteral295C1C91484E27E03B860FDA8F1EE84730518E64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_mBA02015EB4C668DC7E4EB19F11011451DB565069_RuntimeMethod_var);
	}

IL_000e:
	{
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_2 = ___scheduler1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, (String_t*)_stringLiteralA75CF6F408A626E601212712FB539C300D88CDBE, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_mBA02015EB4C668DC7E4EB19F11011451DB565069_RuntimeMethod_var);
	}

IL_001c:
	{
		int32_t L_4 = ___continuationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_CreationOptionsFromContinuationOptions_mB5865DC3CF441EE1681B47B49A747344FDD6631D((int32_t)L_4, (int32_t*)(int32_t*)(&V_0), (int32_t*)(int32_t*)(&V_1), /*hidden argument*/NULL);
		Func_2_tC6816526F3327CB168F701FED02EB54522A97009 * L_5 = ___continuationFunction0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t* L_8 = ___stackMark4;
		ContinuationResultTaskFromResultTask_2_t824B34AB5675F06CE6CD82F26E6D26A806FBA67E * L_9 = (ContinuationResultTaskFromResultTask_2_t824B34AB5675F06CE6CD82F26E6D26A806FBA67E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (ContinuationResultTaskFromResultTask_2_t824B34AB5675F06CE6CD82F26E6D26A806FBA67E *, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, Delegate_t *, RuntimeObject *, int32_t, int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_9, (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, (Delegate_t *)L_5, (RuntimeObject *)NULL, (int32_t)L_6, (int32_t)L_7, (int32_t*)(int32_t*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 *)L_9;
		Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * L_10 = V_2;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_11 = ___scheduler1;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_12 = ___cancellationToken2;
		int32_t L_13 = ___continuationOptions3;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_ContinueWithCore_m8C75A57E83C02512E15E4ED205F70EA555F16DDB((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_10, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_11, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_12, (int32_t)L_13, /*hidden argument*/NULL);
		Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * L_14 = V_2;
		return L_14;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereArrayIterator`1<System.Int32Enum>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Select_TisRuntimeObject_m431CCA1E5AE4D1948AFB489EAEBC0B96F130A9AE_gshared (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 * __this, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector0, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = ___selector0;
		WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * L_3 = (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 *, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Select_TisRuntimeObject_m9504CE25C3E0E84756E6B355F52532D2A13D2664_gshared (WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00 * __this, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_0 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = ___selector0;
		WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC * L_3 = (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC *, KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereArrayIterator`1<System.Object>::Select<System.Int32>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEAD253DE8756C809D912F55437F9028D22A7FEAB_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = ___selector0;
		WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * L_3 = (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereArrayIterator`1<System.Object>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Select_TisRuntimeObject_m3F62D1BC0508A986BB7AFE1B34D82A3AE058BAEA_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector0;
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_3 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereEnumerableIterator`1<System.Int32Enum>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Select_TisRuntimeObject_mF0AAA3544D40844741BECC00ED5CC95197B95478_gshared (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 * __this, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = ___selector0;
		WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * L_3 = (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 *, RuntimeObject*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Select_TisRuntimeObject_m0E83EBCE96EE59BF7151CBA18EEEA4A867FD7E1B_gshared (WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3 * __this, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = ___selector0;
		WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E * L_3 = (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E *, RuntimeObject*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereEnumerableIterator`1<System.Object>::Select<System.Int32>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m969BBA421D4D8A9DC634773E03E343F9332361F5_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = ___selector0;
		WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * L_3 = (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereEnumerableIterator`1<System.Object>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Select_TisRuntimeObject_m86824588E74E4D4FF560E2E0EF019C56C083890D_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector0;
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_3 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereListIterator`1<System.Int32Enum>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Select_TisRuntimeObject_m8B716F0ED6E4F0280AEE75C1EB6029B41E176CE8_gshared (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B * __this, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = ___selector0;
		WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * L_3 = (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 *, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Select_TisRuntimeObject_m1F74DB8854E0C990F975D74DFF48F56800EDD5F0_gshared (WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C * __this, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_0 = (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = ___selector0;
		WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 * L_3 = (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 *, List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereListIterator`1<System.Object>::Select<System.Int32>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2A459A3F86259A6D54ECF62DB609EA327C7FEECE_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = ___selector0;
		WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * L_3 = (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereListIterator`1<System.Object>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Select_TisRuntimeObject_m4531C1631D6A7374AE147B6A1A51D157BD6EA395_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector0;
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_3 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Int32Enum,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4A09B750466011E17DD794D74483E0DC23AD168E_gshared (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * L_4 = ((  Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170 * L_5 = (WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170 *, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Int32Enum,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Select_TisRuntimeObject_m919E581FAF37BAD4AB61672D52CAB36464844A3E_gshared (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_4 = ((  Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * L_5 = (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 *, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD160769FEC604D4DF0F55775DFC2C8F4E7E597DE_gshared (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_0 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * L_4 = ((  Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * (*) (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3 * L_5 = (WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3 *, KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Select_TisRuntimeObject_mC5587966AC273F3FF0E11F1A435EA23E91468F39_gshared (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_0 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_4 = ((  Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * (*) (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC * L_5 = (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC *, KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Object,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m11012E067634B3CA80A4AFE1ACB38D3EB66C8072_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_4 = ((  Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * L_5 = (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Object,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Select_TisRuntimeObject_mD506A268CB28E27A66AF4279C67FF2A2FC60480F_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_4 = ((  Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_5 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m9CF022E0F5C40AA6620E2746A758BC9A398B97F1_gshared (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * L_4 = ((  Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D * L_5 = (WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D *, RuntimeObject*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (RuntimeObject*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Select_TisRuntimeObject_mA7E0545CC3F9E46440B7DB4FB397389CBA86DA55_gshared (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_4 = ((  Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * L_5 = (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 *, RuntimeObject*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (RuntimeObject*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m81C03FC59BFE8AD89C567254B9EFC824946CB92A_gshared (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * L_4 = ((  Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * (*) (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B * L_5 = (WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B *, RuntimeObject*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (RuntimeObject*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Select_TisRuntimeObject_m84992DED5112A183AB6266267C1C4BE5F7CBB718_gshared (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_4 = ((  Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * (*) (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E * L_5 = (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E *, RuntimeObject*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (RuntimeObject*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Object,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD57F2888912DADAD5F373D04BB281F73504C38B6_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_4 = ((  Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * L_5 = (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Object,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Select_TisRuntimeObject_m235EF3D30EA338CBBA7505DC21C0A5E844439E3E_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_4 = ((  Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_5 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectListIterator`2<System.Int32Enum,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC1774D2A2D1C9EC6C4D7A0798D202BF4495F5D62_gshared (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * L_4 = ((  Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB * L_5 = (WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB *, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectListIterator`2<System.Int32Enum,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Select_TisRuntimeObject_m5276F00B9A0656D99820C5DD7EBBEF6ADFA26372_gshared (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_4 = ((  Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * L_5 = (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 *, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEC72476AF8A6579198DD18B3E764EE8A1F62C156_gshared (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_0 = (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * L_4 = ((  Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * (*) (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206 * L_5 = (WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206 *, List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Select_TisRuntimeObject_m01711E7FC2BE92C53B4CD71A8486276E50C5E611_gshared (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_0 = (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_4 = ((  Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * (*) (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 * L_5 = (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 *, List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectListIterator`2<System.Object,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m58B06E021784D558536220688D35E8A6D2D95B3F_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_4 = ((  Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * L_5 = (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectListIterator`2<System.Object,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Select_TisRuntimeObject_m57ACB6C6C928322059DE23054FABD1ED74869A58_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_4 = ((  Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_5 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
