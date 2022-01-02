#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_tF8C4D80E9ABE5DEF9B0B015084B50E6254AF38DF;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_tB5B524F252E61F9F981E7DCFE7BF1DD9FB091912;
// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct IDictionary_2_t9761D347AC3B18ED56235F4DC19AAEABDBA24999;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>
struct IDictionary_2_tA588E2706486D2684BC3838206FB78D186494AE9;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>
struct IDictionary_2_t623535C46CA93A32D4CB129B70AA83444D2C16D3;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_tB9957995D5365C5A080D244D63E4B77B6C4D363D;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_tF18CA5AA122FDD12A1A3DEDDEC417CC451BE7354;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct IDictionary_2_tB210817492F7AD2864794BE4AD9C7C02FAC77AD1;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>
struct IDictionary_2_t59EBFC051059879E073F57A713D7AE6421FF6555;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>
struct IDictionary_2_tB4EFFF53133FC3E3B245FDCF18E295FD95BF0C47;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>
struct IDictionary_2_tA410C7E9A5971358353E685798CE4FDCA34D37F2;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_t71D7E5B167A4E3A34ED0D8C54CF750CDBEB60596;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IList_1_t94D9B6D6A4B79697DCD67227A5530A5299015D7C;
// System.Collections.Generic.IList`1<LitJson.JsonData>
struct IList_1_tAB2ED6D3845E48DA44BD334D2BB3784C437EF21E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct KeyCollection_t961F340F8ACCBED42AD893036649507AA35258E2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32[]>
struct KeyCollection_t5077047791109DBE7A0587AB82F2C95BE65B70F7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,LitJson.JsonData>
struct KeyCollection_t1F5F0F5E3065C92AB567997E1364FD9221FA0058;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct KeyCollection_t31860CB948BF24344F012DDD40B1344BA3F2338E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct KeyCollection_t517DF26B1080C1A37F4B75CC8152DA5E3B56604A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ArrayMetadata>
struct KeyCollection_tBE0E9A14BF7BF866F9C88D07F5E6ED76C01C70DE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ExporterFunc>
struct KeyCollection_tA32DA44E597E90FA8F6D4750B4C7CB2CCD1B2657;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ImporterFunc>
struct KeyCollection_t8EC2F5C5EFAEC76BA560022B25D1D9B5317D6641;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ObjectMetadata>
struct KeyCollection_t9883A582E52503AFF80317A569B43BB5CD5ACABE;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B;
// System.Collections.Generic.List`1<LitJson.JsonData>
struct List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct ValueCollection_t9F3A6CE2D590F3B64841D5D4E02A4D128DF764CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32[]>
struct ValueCollection_t741C0DBC2C72DD3AE5DB73E04049022DE427EACA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,LitJson.JsonData>
struct ValueCollection_tF910603D6D65941919F446A3E28825AB2BFCE618;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct ValueCollection_t03DA58E38A18DBF3B0C7E36F1A75393E3B678536;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct ValueCollection_tF719704AD19B2364DF3F2FCB23ECA41674B3C8A2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ArrayMetadata>
struct ValueCollection_t7853AD74D5A0CD9D1D0A24D58EE5F8A4FC4EB03B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ExporterFunc>
struct ValueCollection_tE4F7AB63DD176422AEF94232F2707856063F20AA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>
struct ValueCollection_t9E246696B6CE4A74FB42A57A58C5EDFF4A078760;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ObjectMetadata>
struct ValueCollection_tA1FD5B9FB2E07AF8EDDF9E26B01CEFCCB44AFDDD;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>[]
struct EntryU5BU5D_tC05AA8F32DFF4C2C547ED680592E1D40011178A8;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32[]>[]
struct EntryU5BU5D_t4599023B1EC79584CD812F5998440BACF3085B58;
// System.Collections.Generic.Dictionary`2/Entry<System.String,LitJson.JsonData>[]
struct EntryU5BU5D_t0FCA162D02B265CB1AC7170F84E9B69388BAAA59;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>[]
struct EntryU5BU5D_tF2D8040FE29FD49C39FB0C00BC98BA13391A9985;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>[]
struct EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>[]
struct EntryU5BU5D_tDBA7574D9D380CDE6ED50487CE8AD927D4B4F900;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ArrayMetadata>[]
struct EntryU5BU5D_t86C12E12708BF341D6BC4355AC45E1298157C99B;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ExporterFunc>[]
struct EntryU5BU5D_t18B8EC22B7B43635C56E078144B71A716C09514F;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ImporterFunc>[]
struct EntryU5BU5D_t8956D7D969FFE0CF1841A198A3B30CE974590EE0;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ObjectMetadata>[]
struct EntryU5BU5D_t40ED169931B2C8F8A28DDB79E5D57C33007325C9;
// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>[]
struct KeyValuePair_2U5BU5D_tCFDC030D819D4FE39DEF69D30C1035EA334FCEF8;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// LitJson.JsonData[]
struct JsonDataU5BU5D_t139675E3A0EC9290491744A44085F26AC67E9E1F;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Globalization.TokenHashValue[]
struct TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// LitJson.WriterContext[]
struct WriterContextU5BU5D_t1C90899BD834DD0EE382E7BA9D557F05AEEFDFF8;
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB;
// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// LitJson.ExporterFunc
struct ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D;
// LitJson.FsmContext
struct FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t8A89A8564EADF5FFB8494092DFED7D7C063F1501;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// LitJson.IJsonWrapper
struct IJsonWrapper_tAF8FE684DA45754CAF52744B179F03B42536F310;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// LitJson.ImporterFunc
struct ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// LitJson.JsonData
struct JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638;
// LitJson.JsonException
struct JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD;
// LitJson.JsonReader
struct JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0;
// LitJson.JsonWriter
struct JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328;
// LitJson.Lexer
struct Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895;
// System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// LitJson.WrapperFactory
struct WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5;
// LitJson.WriterContext
struct WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169;
// LitJson.Lexer/StateHandler
struct StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t1A81EF2682DCC2A7A50BF71C11DA88D9DE06E95E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t15C4AE6FA28CC96AF7D1E9949947C8A7AA64B92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t76532162803D4EE7D7266D2A01D85170EB72FE34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t9761D347AC3B18ED56235F4DC19AAEABDBA24999_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tA588E2706486D2684BC3838206FB78D186494AE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tB4EFFF53133FC3E3B245FDCF18E295FD95BF0C47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tB9957995D5365C5A080D244D63E4B77B6C4D363D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t2CE64BF50FBF77752588C3BAC7BF7B57F748837D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t71D7E5B167A4E3A34ED0D8C54CF750CDBEB60596_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IJsonWrapper_tAF8FE684DA45754CAF52744B179F03B42536F310_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t94D9B6D6A4B79697DCD67227A5530A5299015D7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tAB2ED6D3845E48DA44BD334D2BB3784C437EF21E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOrderedDictionary_tDF6229DEC2DA4F759A019863EF5B5CDF4ECBCDF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParserToken_t252EB88B78C715CDB69BAB1C572F4F8B115F4BDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D0_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D1_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D2_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D3_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D4_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D5_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D6_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D7_7_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D8_8_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D9_9_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2DA_10_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2DB_11_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2DC_12_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral057118C49B28F31FA4955B194753088DDCD94999;
IL2CPP_EXTERN_C String_t* _stringLiteral1D59E6177FAE880C9EF94663465FEEDCD97D999F;
IL2CPP_EXTERN_C String_t* _stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04;
IL2CPP_EXTERN_C String_t* _stringLiteral5149D2AD92135C0DFA7131CADBFCC669275E96B5;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral6BAB8F53EE6BDD0369569E27A174F474EA370914;
IL2CPP_EXTERN_C String_t* _stringLiteral6DEED36FFF14869BC9ABC87FCC45B3DA6985BEEC;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7B6EE056E549534162451A09C7F0AFAC372DBD06;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral82A13B351F60D442B29C59FEDF02FF7E52C04163;
IL2CPP_EXTERN_C String_t* _stringLiteral84BE6DF7F5E86A94476E7ED44C8A9ACA10E6236A;
IL2CPP_EXTERN_C String_t* _stringLiteral8515553A5B3BDCBB0920E96A5FD0FC34F11C2713;
IL2CPP_EXTERN_C String_t* _stringLiteral8E284AA45C643AAA8D3553AA7AB6A1C3BC3E32D1;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC63496F78F80F09E4841EF5CD0DA8DAF7028FB4B;
IL2CPP_EXTERN_C String_t* _stringLiteralCDA723AA4DBB226A906416AA9BF1C2D4CEC53C89;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE7535349ADB76DD55B08451D311FC3CF06A19C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDCAF96AFD9825EC0819F85E3953F28B330B45CC3;
IL2CPP_EXTERN_C String_t* _stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0042AB3E1A64BB363620361BBE7585680D722E16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0E046849653A31D6AB3C1466A7721435C44DE38E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1EB30357056C3276229C8E3B3DAD5ED1FF97DF16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2EBF1ECBC92F80383944B79DCCDA176099E0BF78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5AC1BD903FD9178D233A4D3884068C7F775F3026_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m847855B1828C20D7C0FFCA651C0FBA2023A3754C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m84ABEBF9BDC358A171BD8EC1C3264D9261C72EC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB463BFA2B5186F7E4AD72B2E2447F2FEA179FD49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEDC07215238F2D6559389577FFD9A3F3FE3E726A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureCollection_m0DED282A624FBDB45CB4E479D719D96F9AD9EEBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureDictionary_m2ED9C6615DF697504CEFE79CE10B7CE6DD18CE85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureList_m05DA339C2A253269235F854A434172393FC9764B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IDictionary_set_Item_mCD2D9BC3940147B664D6394FA4F62D4A1BF4F39C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData__ctor_mD516AF324F9FCAEEC106B79C826C68C9D961F95C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__1_m78FECA6DE17A128DD3EB95F0FFFDC1B4DB760272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__2_m059CF8D5A6AC3F67AE7C1B9DC8400E475E556067_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__3_mC8B2C06C76599947A2EC274E935139A001003BE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__4_m567345F89A974CE9981644D39EAF13E43C37AEF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__5_m25C31319960036B038199C9CFD0D4947437E750E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__6_mC8AC6B19C55CD340FAA36BE63006DCC0D3338996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__7_m22E97A2F2EFB34701598E7DCFD621B5FDA91C52B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__8_m1091F51A3C1CFBAEF0DC0F4281664F4C40EE3BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__9_m59EE388391286467AD09C72F5A55C452D9F103D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__10_m045363AB8189314A74B147A9FC610C7114C0ED2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__11_mBF242A2BD6D887DB79D1893AF0455D904E9C70F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__12_mC2BFA48C517D1097B6ACB296968A7CA6AA7F134D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__13_m3EC23BBC9D1CD7DEC535F71C5D65D15368149E4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__14_mA3ED35F2D29FBE3774434A898AB2058031A454BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__15_m0248C256953846D7EEB5FDDAB829B4EB985310F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__A_m583917D27DD29E26D38EE451649E993FC62AD94E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__B_mD92F95F233AA32B30543CB20D20902FC983696B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__C_mF2E5C723A04777A67BD4C357B53BA1EE7FE66648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__D_mC670D536C026F0450EC837BBA806394A9E3EF182_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__E_mA8E8CDE96125B82ACFACD6E55D5A92A8FD02C9B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__F_m1A10A80EF7EF042EE66C7DCF7553BD8EA20037EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CToObjectU3Em__18_m7397CB8E727C20B80986BAADB146E809BF96213F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader_Read_m4F676359E5B9EA9BACAC8D46F1DDE66F32D00D89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader__ctor_m62E49CBC81810BCA0E583DC53016CF51564A0440_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_DoValidation_m406505C0D4C6809B043854A33E1D74981D4A281A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m646EE77B8D1CD9170B658722619FE6C6DBB6D867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m3C46D4EC0CED1FF3059866EA1197FA24A55EE2A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m8DF21BDD7A90B0DC9E4429B89228DA6FD4EDB7EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_NextToken_m9B5E8395C93306F40AEFEE4D9FC1BF6E247D2467_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State10_mD7C3CA14735374EBFFA7CE841D426621AFE84E06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State11_m6FE899F8886F72C5182F353D66FFDE045A161C2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State12_m062185A7E9BCB0573B11051685A83EBB89C9CE7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State13_m9E537B36446C0A2A01BBEEC392A9A9F78B116349_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State14_m40E897879B025DE053DD6E2A8E339F2A8FD4C3C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State15_mCB34A64C58D8C8585CFB33AE5EFBBEE3EE44C4C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State16_m5859BCC8B00750F0A33551E610E1F42878181160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State17_mC2C5E68538BC59CF3E0E6C8EC47A46AA6AFA5372_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State18_m54EB044D2D0CCE02812F5787188305E215BB277D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State19_m1898DD750D852E8138B3969E3A5D4E8770888A8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State1_mB10A6F5CADC62380CDF137B7A7C8BF7B80589F23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State20_mF527A5BA692B265653D87E99C7984A2377B0715E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State21_mCA8D0CA1884918738E3128DCB932FC83A11560E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State22_mAEB6B27B5854648089D58AC7FA7C5E5295F72C31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State23_m45378548EB0DA0B9093316B92A64139AF3926A71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State24_m1A2856DF9783F9DCF51AA447629BF3D3208DA718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State25_m12AA50C14A9CDDB703EBED52E5B6D3BE61D204AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State26_mE2A419A4B83E522F0408A0D3F8E77B19DE0FDDD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State27_mD1414E32908CC21BB2415F8C602D9D01DC653C37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State28_m9B05ADB98CACE71E75F06D70077146FAAE5B4091_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State2_m18FC22404C21D2E39D6CE90463594278F77780C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State3_m1DB27A31AC5E633C880C4CD962B01E699BC49761_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State4_m438D8333EE904D537CF21B43411C61D96E1824B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State5_mA0771BFBEFB4772B338FCF414619F548B44DCD0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State6_mDCB628F9AA8E32F3E442A0E802EFED290DA594FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State7_mD3C331A2E7D7D1F82B7B854BF92423FEE90ED748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State8_mBE12342F86DA75CDCCE0166B71A08AD21012081B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State9_mC1A44112FC8D34C52AAA153F3540010AE5112EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m016B76900A58A6AB2F64BB35FBF164F793B94BCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m734D27A51E6DC966092BB55127D0EF80065606AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_m65385AD770CB3137B6B0638B1C8B3F135A5E277D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m975CA51F3A72228535A3AE9FE726481EF9E0B76C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m20B7A8C855D99C3C974DE7CC3C0D2F16180F5C6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m2BFB8A6E6330A831A42600B14EF2BBFE384ABE1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF62D5142DE39FB44DB6EC0769C9C54C9C5A7E374 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC05AA8F32DFF4C2C547ED680592E1D40011178A8* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t961F340F8ACCBED42AD893036649507AA35258E2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9F3A6CE2D590F3B64841D5D4E02A4D128DF764CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___entries_1)); }
	inline EntryU5BU5D_tC05AA8F32DFF4C2C547ED680592E1D40011178A8* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC05AA8F32DFF4C2C547ED680592E1D40011178A8** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC05AA8F32DFF4C2C547ED680592E1D40011178A8* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___keys_7)); }
	inline KeyCollection_t961F340F8ACCBED42AD893036649507AA35258E2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t961F340F8ACCBED42AD893036649507AA35258E2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t961F340F8ACCBED42AD893036649507AA35258E2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___values_8)); }
	inline ValueCollection_t9F3A6CE2D590F3B64841D5D4E02A4D128DF764CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9F3A6CE2D590F3B64841D5D4E02A4D128DF764CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9F3A6CE2D590F3B64841D5D4E02A4D128DF764CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4599023B1EC79584CD812F5998440BACF3085B58* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t5077047791109DBE7A0587AB82F2C95BE65B70F7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t741C0DBC2C72DD3AE5DB73E04049022DE427EACA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___entries_1)); }
	inline EntryU5BU5D_t4599023B1EC79584CD812F5998440BACF3085B58* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4599023B1EC79584CD812F5998440BACF3085B58** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4599023B1EC79584CD812F5998440BACF3085B58* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___keys_7)); }
	inline KeyCollection_t5077047791109DBE7A0587AB82F2C95BE65B70F7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5077047791109DBE7A0587AB82F2C95BE65B70F7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5077047791109DBE7A0587AB82F2C95BE65B70F7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___values_8)); }
	inline ValueCollection_t741C0DBC2C72DD3AE5DB73E04049022DE427EACA * get_values_8() const { return ___values_8; }
	inline ValueCollection_t741C0DBC2C72DD3AE5DB73E04049022DE427EACA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t741C0DBC2C72DD3AE5DB73E04049022DE427EACA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0FCA162D02B265CB1AC7170F84E9B69388BAAA59* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1F5F0F5E3065C92AB567997E1364FD9221FA0058 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF910603D6D65941919F446A3E28825AB2BFCE618 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147, ___entries_1)); }
	inline EntryU5BU5D_t0FCA162D02B265CB1AC7170F84E9B69388BAAA59* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0FCA162D02B265CB1AC7170F84E9B69388BAAA59** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0FCA162D02B265CB1AC7170F84E9B69388BAAA59* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147, ___keys_7)); }
	inline KeyCollection_t1F5F0F5E3065C92AB567997E1364FD9221FA0058 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1F5F0F5E3065C92AB567997E1364FD9221FA0058 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1F5F0F5E3065C92AB567997E1364FD9221FA0058 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147, ___values_8)); }
	inline ValueCollection_tF910603D6D65941919F446A3E28825AB2BFCE618 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF910603D6D65941919F446A3E28825AB2BFCE618 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF910603D6D65941919F446A3E28825AB2BFCE618 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF2D8040FE29FD49C39FB0C00BC98BA13391A9985* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t31860CB948BF24344F012DDD40B1344BA3F2338E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t03DA58E38A18DBF3B0C7E36F1A75393E3B678536 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7, ___entries_1)); }
	inline EntryU5BU5D_tF2D8040FE29FD49C39FB0C00BC98BA13391A9985* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF2D8040FE29FD49C39FB0C00BC98BA13391A9985** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF2D8040FE29FD49C39FB0C00BC98BA13391A9985* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7, ___keys_7)); }
	inline KeyCollection_t31860CB948BF24344F012DDD40B1344BA3F2338E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t31860CB948BF24344F012DDD40B1344BA3F2338E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t31860CB948BF24344F012DDD40B1344BA3F2338E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7, ___values_8)); }
	inline ValueCollection_t03DA58E38A18DBF3B0C7E36F1A75393E3B678536 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t03DA58E38A18DBF3B0C7E36F1A75393E3B678536 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t03DA58E38A18DBF3B0C7E36F1A75393E3B678536 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___entries_1)); }
	inline EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___keys_7)); }
	inline KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___values_8)); }
	inline ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDBA7574D9D380CDE6ED50487CE8AD927D4B4F900* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t517DF26B1080C1A37F4B75CC8152DA5E3B56604A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF719704AD19B2364DF3F2FCB23ECA41674B3C8A2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF, ___entries_1)); }
	inline EntryU5BU5D_tDBA7574D9D380CDE6ED50487CE8AD927D4B4F900* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDBA7574D9D380CDE6ED50487CE8AD927D4B4F900** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDBA7574D9D380CDE6ED50487CE8AD927D4B4F900* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF, ___keys_7)); }
	inline KeyCollection_t517DF26B1080C1A37F4B75CC8152DA5E3B56604A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t517DF26B1080C1A37F4B75CC8152DA5E3B56604A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t517DF26B1080C1A37F4B75CC8152DA5E3B56604A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF, ___values_8)); }
	inline ValueCollection_tF719704AD19B2364DF3F2FCB23ECA41674B3C8A2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF719704AD19B2364DF3F2FCB23ECA41674B3C8A2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF719704AD19B2364DF3F2FCB23ECA41674B3C8A2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t86C12E12708BF341D6BC4355AC45E1298157C99B* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tBE0E9A14BF7BF866F9C88D07F5E6ED76C01C70DE * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7853AD74D5A0CD9D1D0A24D58EE5F8A4FC4EB03B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85, ___entries_1)); }
	inline EntryU5BU5D_t86C12E12708BF341D6BC4355AC45E1298157C99B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t86C12E12708BF341D6BC4355AC45E1298157C99B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t86C12E12708BF341D6BC4355AC45E1298157C99B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85, ___keys_7)); }
	inline KeyCollection_tBE0E9A14BF7BF866F9C88D07F5E6ED76C01C70DE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBE0E9A14BF7BF866F9C88D07F5E6ED76C01C70DE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBE0E9A14BF7BF866F9C88D07F5E6ED76C01C70DE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85, ___values_8)); }
	inline ValueCollection_t7853AD74D5A0CD9D1D0A24D58EE5F8A4FC4EB03B * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7853AD74D5A0CD9D1D0A24D58EE5F8A4FC4EB03B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7853AD74D5A0CD9D1D0A24D58EE5F8A4FC4EB03B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t18B8EC22B7B43635C56E078144B71A716C09514F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA32DA44E597E90FA8F6D4750B4C7CB2CCD1B2657 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE4F7AB63DD176422AEF94232F2707856063F20AA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275, ___entries_1)); }
	inline EntryU5BU5D_t18B8EC22B7B43635C56E078144B71A716C09514F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t18B8EC22B7B43635C56E078144B71A716C09514F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t18B8EC22B7B43635C56E078144B71A716C09514F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275, ___keys_7)); }
	inline KeyCollection_tA32DA44E597E90FA8F6D4750B4C7CB2CCD1B2657 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA32DA44E597E90FA8F6D4750B4C7CB2CCD1B2657 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA32DA44E597E90FA8F6D4750B4C7CB2CCD1B2657 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275, ___values_8)); }
	inline ValueCollection_tE4F7AB63DD176422AEF94232F2707856063F20AA * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE4F7AB63DD176422AEF94232F2707856063F20AA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE4F7AB63DD176422AEF94232F2707856063F20AA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8956D7D969FFE0CF1841A198A3B30CE974590EE0* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8EC2F5C5EFAEC76BA560022B25D1D9B5317D6641 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9E246696B6CE4A74FB42A57A58C5EDFF4A078760 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67, ___entries_1)); }
	inline EntryU5BU5D_t8956D7D969FFE0CF1841A198A3B30CE974590EE0* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8956D7D969FFE0CF1841A198A3B30CE974590EE0** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8956D7D969FFE0CF1841A198A3B30CE974590EE0* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67, ___keys_7)); }
	inline KeyCollection_t8EC2F5C5EFAEC76BA560022B25D1D9B5317D6641 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8EC2F5C5EFAEC76BA560022B25D1D9B5317D6641 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8EC2F5C5EFAEC76BA560022B25D1D9B5317D6641 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67, ___values_8)); }
	inline ValueCollection_t9E246696B6CE4A74FB42A57A58C5EDFF4A078760 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9E246696B6CE4A74FB42A57A58C5EDFF4A078760 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9E246696B6CE4A74FB42A57A58C5EDFF4A078760 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t40ED169931B2C8F8A28DDB79E5D57C33007325C9* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9883A582E52503AFF80317A569B43BB5CD5ACABE * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA1FD5B9FB2E07AF8EDDF9E26B01CEFCCB44AFDDD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428, ___entries_1)); }
	inline EntryU5BU5D_t40ED169931B2C8F8A28DDB79E5D57C33007325C9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t40ED169931B2C8F8A28DDB79E5D57C33007325C9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t40ED169931B2C8F8A28DDB79E5D57C33007325C9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428, ___keys_7)); }
	inline KeyCollection_t9883A582E52503AFF80317A569B43BB5CD5ACABE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9883A582E52503AFF80317A569B43BB5CD5ACABE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9883A582E52503AFF80317A569B43BB5CD5ACABE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428, ___values_8)); }
	inline ValueCollection_tA1FD5B9FB2E07AF8EDDF9E26B01CEFCCB44AFDDD * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA1FD5B9FB2E07AF8EDDF9E26B01CEFCCB44AFDDD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA1FD5B9FB2E07AF8EDDF9E26B01CEFCCB44AFDDD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tCFDC030D819D4FE39DEF69D30C1035EA334FCEF8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tCFDC030D819D4FE39DEF69D30C1035EA334FCEF8* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tCFDC030D819D4FE39DEF69D30C1035EA334FCEF8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tCFDC030D819D4FE39DEF69D30C1035EA334FCEF8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tCFDC030D819D4FE39DEF69D30C1035EA334FCEF8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tCFDC030D819D4FE39DEF69D30C1035EA334FCEF8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tCFDC030D819D4FE39DEF69D30C1035EA334FCEF8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tCFDC030D819D4FE39DEF69D30C1035EA334FCEF8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<LitJson.JsonData>
struct List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JsonDataU5BU5D_t139675E3A0EC9290491744A44085F26AC67E9E1F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89, ____items_1)); }
	inline JsonDataU5BU5D_t139675E3A0EC9290491744A44085F26AC67E9E1F* get__items_1() const { return ____items_1; }
	inline JsonDataU5BU5D_t139675E3A0EC9290491744A44085F26AC67E9E1F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JsonDataU5BU5D_t139675E3A0EC9290491744A44085F26AC67E9E1F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JsonDataU5BU5D_t139675E3A0EC9290491744A44085F26AC67E9E1F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89_StaticFields, ____emptyArray_5)); }
	inline JsonDataU5BU5D_t139675E3A0EC9290491744A44085F26AC67E9E1F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JsonDataU5BU5D_t139675E3A0EC9290491744A44085F26AC67E9E1F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JsonDataU5BU5D_t139675E3A0EC9290491744A44085F26AC67E9E1F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55, ____array_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__array_0() const { return ____array_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	WriterContextU5BU5D_t1C90899BD834DD0EE382E7BA9D557F05AEEFDFF8* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E, ____array_0)); }
	inline WriterContextU5BU5D_t1C90899BD834DD0EE382E7BA9D557F05AEEFDFF8* get__array_0() const { return ____array_0; }
	inline WriterContextU5BU5D_t1C90899BD834DD0EE382E7BA9D557F05AEEFDFF8** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(WriterContextU5BU5D_t1C90899BD834DD0EE382E7BA9D557F05AEEFDFF8* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// LitJson.FsmContext
struct FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F  : public RuntimeObject
{
public:
	// System.Boolean LitJson.FsmContext::Return
	bool ___Return_0;
	// System.Int32 LitJson.FsmContext::NextState
	int32_t ___NextState_1;
	// LitJson.Lexer LitJson.FsmContext::L
	Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * ___L_2;
	// System.Int32 LitJson.FsmContext::StateStack
	int32_t ___StateStack_3;

public:
	inline static int32_t get_offset_of_Return_0() { return static_cast<int32_t>(offsetof(FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F, ___Return_0)); }
	inline bool get_Return_0() const { return ___Return_0; }
	inline bool* get_address_of_Return_0() { return &___Return_0; }
	inline void set_Return_0(bool value)
	{
		___Return_0 = value;
	}

	inline static int32_t get_offset_of_NextState_1() { return static_cast<int32_t>(offsetof(FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F, ___NextState_1)); }
	inline int32_t get_NextState_1() const { return ___NextState_1; }
	inline int32_t* get_address_of_NextState_1() { return &___NextState_1; }
	inline void set_NextState_1(int32_t value)
	{
		___NextState_1 = value;
	}

	inline static int32_t get_offset_of_L_2() { return static_cast<int32_t>(offsetof(FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F, ___L_2)); }
	inline Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * get_L_2() const { return ___L_2; }
	inline Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 ** get_address_of_L_2() { return &___L_2; }
	inline void set_L_2(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * value)
	{
		___L_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___L_2), (void*)value);
	}

	inline static int32_t get_offset_of_StateStack_3() { return static_cast<int32_t>(offsetof(FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F, ___StateStack_3)); }
	inline int32_t get_StateStack_3() const { return ___StateStack_3; }
	inline int32_t* get_address_of_StateStack_3() { return &___StateStack_3; }
	inline void set_StateStack_3(int32_t value)
	{
		___StateStack_3 = value;
	}
};


// LitJson.JsonMapper
struct JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2  : public RuntimeObject
{
public:

public:
};

struct JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields
{
public:
	// System.Int32 LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth_0;
	// System.IFormatProvider LitJson.JsonMapper::datetime_format
	RuntimeObject* ___datetime_format_1;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::base_exporters_table
	RuntimeObject* ___base_exporters_table_2;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::custom_exporters_table
	RuntimeObject* ___custom_exporters_table_3;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::base_importers_table
	RuntimeObject* ___base_importers_table_4;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::custom_importers_table
	RuntimeObject* ___custom_importers_table_5;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata> LitJson.JsonMapper::array_metadata
	RuntimeObject* ___array_metadata_6;
	// System.Object LitJson.JsonMapper::array_metadata_lock
	RuntimeObject * ___array_metadata_lock_7;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> LitJson.JsonMapper::conv_ops
	RuntimeObject* ___conv_ops_8;
	// System.Object LitJson.JsonMapper::conv_ops_lock
	RuntimeObject * ___conv_ops_lock_9;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata> LitJson.JsonMapper::object_metadata
	RuntimeObject* ___object_metadata_10;
	// System.Object LitJson.JsonMapper::object_metadata_lock
	RuntimeObject * ___object_metadata_lock_11;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>> LitJson.JsonMapper::type_properties
	RuntimeObject* ___type_properties_12;
	// System.Object LitJson.JsonMapper::type_properties_lock
	RuntimeObject * ___type_properties_lock_13;
	// LitJson.JsonWriter LitJson.JsonMapper::static_writer
	JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * ___static_writer_14;
	// System.Object LitJson.JsonMapper::static_writer_lock
	RuntimeObject * ___static_writer_lock_15;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache1
	ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * ___U3CU3Ef__amU24cache1_16;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache2
	ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * ___U3CU3Ef__amU24cache2_17;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache3
	ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * ___U3CU3Ef__amU24cache3_18;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache4
	ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * ___U3CU3Ef__amU24cache4_19;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache5
	ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * ___U3CU3Ef__amU24cache5_20;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache6
	ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * ___U3CU3Ef__amU24cache6_21;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache7
	ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * ___U3CU3Ef__amU24cache7_22;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache8
	ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * ___U3CU3Ef__amU24cache8_23;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache9
	ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * ___U3CU3Ef__amU24cache9_24;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheA
	ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * ___U3CU3Ef__amU24cacheA_25;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheB
	ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * ___U3CU3Ef__amU24cacheB_26;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheC
	ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * ___U3CU3Ef__amU24cacheC_27;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheD
	ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * ___U3CU3Ef__amU24cacheD_28;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheE
	ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * ___U3CU3Ef__amU24cacheE_29;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheF
	ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * ___U3CU3Ef__amU24cacheF_30;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache10
	ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * ___U3CU3Ef__amU24cache10_31;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache11
	ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * ___U3CU3Ef__amU24cache11_32;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache12
	ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * ___U3CU3Ef__amU24cache12_33;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache13
	ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * ___U3CU3Ef__amU24cache13_34;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache14
	ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * ___U3CU3Ef__amU24cache14_35;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache15
	ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * ___U3CU3Ef__amU24cache15_36;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache18
	WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * ___U3CU3Ef__amU24cache18_37;

public:
	inline static int32_t get_offset_of_max_nesting_depth_0() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___max_nesting_depth_0)); }
	inline int32_t get_max_nesting_depth_0() const { return ___max_nesting_depth_0; }
	inline int32_t* get_address_of_max_nesting_depth_0() { return &___max_nesting_depth_0; }
	inline void set_max_nesting_depth_0(int32_t value)
	{
		___max_nesting_depth_0 = value;
	}

	inline static int32_t get_offset_of_datetime_format_1() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___datetime_format_1)); }
	inline RuntimeObject* get_datetime_format_1() const { return ___datetime_format_1; }
	inline RuntimeObject** get_address_of_datetime_format_1() { return &___datetime_format_1; }
	inline void set_datetime_format_1(RuntimeObject* value)
	{
		___datetime_format_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___datetime_format_1), (void*)value);
	}

	inline static int32_t get_offset_of_base_exporters_table_2() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___base_exporters_table_2)); }
	inline RuntimeObject* get_base_exporters_table_2() const { return ___base_exporters_table_2; }
	inline RuntimeObject** get_address_of_base_exporters_table_2() { return &___base_exporters_table_2; }
	inline void set_base_exporters_table_2(RuntimeObject* value)
	{
		___base_exporters_table_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_exporters_table_2), (void*)value);
	}

	inline static int32_t get_offset_of_custom_exporters_table_3() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___custom_exporters_table_3)); }
	inline RuntimeObject* get_custom_exporters_table_3() const { return ___custom_exporters_table_3; }
	inline RuntimeObject** get_address_of_custom_exporters_table_3() { return &___custom_exporters_table_3; }
	inline void set_custom_exporters_table_3(RuntimeObject* value)
	{
		___custom_exporters_table_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___custom_exporters_table_3), (void*)value);
	}

	inline static int32_t get_offset_of_base_importers_table_4() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___base_importers_table_4)); }
	inline RuntimeObject* get_base_importers_table_4() const { return ___base_importers_table_4; }
	inline RuntimeObject** get_address_of_base_importers_table_4() { return &___base_importers_table_4; }
	inline void set_base_importers_table_4(RuntimeObject* value)
	{
		___base_importers_table_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_importers_table_4), (void*)value);
	}

	inline static int32_t get_offset_of_custom_importers_table_5() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___custom_importers_table_5)); }
	inline RuntimeObject* get_custom_importers_table_5() const { return ___custom_importers_table_5; }
	inline RuntimeObject** get_address_of_custom_importers_table_5() { return &___custom_importers_table_5; }
	inline void set_custom_importers_table_5(RuntimeObject* value)
	{
		___custom_importers_table_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___custom_importers_table_5), (void*)value);
	}

	inline static int32_t get_offset_of_array_metadata_6() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___array_metadata_6)); }
	inline RuntimeObject* get_array_metadata_6() const { return ___array_metadata_6; }
	inline RuntimeObject** get_address_of_array_metadata_6() { return &___array_metadata_6; }
	inline void set_array_metadata_6(RuntimeObject* value)
	{
		___array_metadata_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_metadata_6), (void*)value);
	}

	inline static int32_t get_offset_of_array_metadata_lock_7() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___array_metadata_lock_7)); }
	inline RuntimeObject * get_array_metadata_lock_7() const { return ___array_metadata_lock_7; }
	inline RuntimeObject ** get_address_of_array_metadata_lock_7() { return &___array_metadata_lock_7; }
	inline void set_array_metadata_lock_7(RuntimeObject * value)
	{
		___array_metadata_lock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_metadata_lock_7), (void*)value);
	}

	inline static int32_t get_offset_of_conv_ops_8() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___conv_ops_8)); }
	inline RuntimeObject* get_conv_ops_8() const { return ___conv_ops_8; }
	inline RuntimeObject** get_address_of_conv_ops_8() { return &___conv_ops_8; }
	inline void set_conv_ops_8(RuntimeObject* value)
	{
		___conv_ops_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conv_ops_8), (void*)value);
	}

	inline static int32_t get_offset_of_conv_ops_lock_9() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___conv_ops_lock_9)); }
	inline RuntimeObject * get_conv_ops_lock_9() const { return ___conv_ops_lock_9; }
	inline RuntimeObject ** get_address_of_conv_ops_lock_9() { return &___conv_ops_lock_9; }
	inline void set_conv_ops_lock_9(RuntimeObject * value)
	{
		___conv_ops_lock_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conv_ops_lock_9), (void*)value);
	}

	inline static int32_t get_offset_of_object_metadata_10() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___object_metadata_10)); }
	inline RuntimeObject* get_object_metadata_10() const { return ___object_metadata_10; }
	inline RuntimeObject** get_address_of_object_metadata_10() { return &___object_metadata_10; }
	inline void set_object_metadata_10(RuntimeObject* value)
	{
		___object_metadata_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_metadata_10), (void*)value);
	}

	inline static int32_t get_offset_of_object_metadata_lock_11() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___object_metadata_lock_11)); }
	inline RuntimeObject * get_object_metadata_lock_11() const { return ___object_metadata_lock_11; }
	inline RuntimeObject ** get_address_of_object_metadata_lock_11() { return &___object_metadata_lock_11; }
	inline void set_object_metadata_lock_11(RuntimeObject * value)
	{
		___object_metadata_lock_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_metadata_lock_11), (void*)value);
	}

	inline static int32_t get_offset_of_type_properties_12() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___type_properties_12)); }
	inline RuntimeObject* get_type_properties_12() const { return ___type_properties_12; }
	inline RuntimeObject** get_address_of_type_properties_12() { return &___type_properties_12; }
	inline void set_type_properties_12(RuntimeObject* value)
	{
		___type_properties_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_properties_12), (void*)value);
	}

	inline static int32_t get_offset_of_type_properties_lock_13() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___type_properties_lock_13)); }
	inline RuntimeObject * get_type_properties_lock_13() const { return ___type_properties_lock_13; }
	inline RuntimeObject ** get_address_of_type_properties_lock_13() { return &___type_properties_lock_13; }
	inline void set_type_properties_lock_13(RuntimeObject * value)
	{
		___type_properties_lock_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_properties_lock_13), (void*)value);
	}

	inline static int32_t get_offset_of_static_writer_14() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___static_writer_14)); }
	inline JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * get_static_writer_14() const { return ___static_writer_14; }
	inline JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 ** get_address_of_static_writer_14() { return &___static_writer_14; }
	inline void set_static_writer_14(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * value)
	{
		___static_writer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_writer_14), (void*)value);
	}

	inline static int32_t get_offset_of_static_writer_lock_15() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___static_writer_lock_15)); }
	inline RuntimeObject * get_static_writer_lock_15() const { return ___static_writer_lock_15; }
	inline RuntimeObject ** get_address_of_static_writer_lock_15() { return &___static_writer_lock_15; }
	inline void set_static_writer_lock_15(RuntimeObject * value)
	{
		___static_writer_lock_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_writer_lock_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_16() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cache1_16)); }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * get_U3CU3Ef__amU24cache1_16() const { return ___U3CU3Ef__amU24cache1_16; }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D ** get_address_of_U3CU3Ef__amU24cache1_16() { return &___U3CU3Ef__amU24cache1_16; }
	inline void set_U3CU3Ef__amU24cache1_16(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * value)
	{
		___U3CU3Ef__amU24cache1_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_17() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cache2_17)); }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * get_U3CU3Ef__amU24cache2_17() const { return ___U3CU3Ef__amU24cache2_17; }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D ** get_address_of_U3CU3Ef__amU24cache2_17() { return &___U3CU3Ef__amU24cache2_17; }
	inline void set_U3CU3Ef__amU24cache2_17(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * value)
	{
		___U3CU3Ef__amU24cache2_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache2_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_18() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cache3_18)); }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * get_U3CU3Ef__amU24cache3_18() const { return ___U3CU3Ef__amU24cache3_18; }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D ** get_address_of_U3CU3Ef__amU24cache3_18() { return &___U3CU3Ef__amU24cache3_18; }
	inline void set_U3CU3Ef__amU24cache3_18(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * value)
	{
		___U3CU3Ef__amU24cache3_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache3_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_19() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cache4_19)); }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * get_U3CU3Ef__amU24cache4_19() const { return ___U3CU3Ef__amU24cache4_19; }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D ** get_address_of_U3CU3Ef__amU24cache4_19() { return &___U3CU3Ef__amU24cache4_19; }
	inline void set_U3CU3Ef__amU24cache4_19(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * value)
	{
		___U3CU3Ef__amU24cache4_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache4_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_20() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cache5_20)); }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * get_U3CU3Ef__amU24cache5_20() const { return ___U3CU3Ef__amU24cache5_20; }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D ** get_address_of_U3CU3Ef__amU24cache5_20() { return &___U3CU3Ef__amU24cache5_20; }
	inline void set_U3CU3Ef__amU24cache5_20(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * value)
	{
		___U3CU3Ef__amU24cache5_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache5_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_21() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cache6_21)); }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * get_U3CU3Ef__amU24cache6_21() const { return ___U3CU3Ef__amU24cache6_21; }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D ** get_address_of_U3CU3Ef__amU24cache6_21() { return &___U3CU3Ef__amU24cache6_21; }
	inline void set_U3CU3Ef__amU24cache6_21(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * value)
	{
		___U3CU3Ef__amU24cache6_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache6_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_22() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cache7_22)); }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * get_U3CU3Ef__amU24cache7_22() const { return ___U3CU3Ef__amU24cache7_22; }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D ** get_address_of_U3CU3Ef__amU24cache7_22() { return &___U3CU3Ef__amU24cache7_22; }
	inline void set_U3CU3Ef__amU24cache7_22(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * value)
	{
		___U3CU3Ef__amU24cache7_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache7_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_23() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cache8_23)); }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * get_U3CU3Ef__amU24cache8_23() const { return ___U3CU3Ef__amU24cache8_23; }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D ** get_address_of_U3CU3Ef__amU24cache8_23() { return &___U3CU3Ef__amU24cache8_23; }
	inline void set_U3CU3Ef__amU24cache8_23(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * value)
	{
		___U3CU3Ef__amU24cache8_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache8_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_24() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cache9_24)); }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * get_U3CU3Ef__amU24cache9_24() const { return ___U3CU3Ef__amU24cache9_24; }
	inline ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D ** get_address_of_U3CU3Ef__amU24cache9_24() { return &___U3CU3Ef__amU24cache9_24; }
	inline void set_U3CU3Ef__amU24cache9_24(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * value)
	{
		___U3CU3Ef__amU24cache9_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache9_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_25() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cacheA_25)); }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * get_U3CU3Ef__amU24cacheA_25() const { return ___U3CU3Ef__amU24cacheA_25; }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA ** get_address_of_U3CU3Ef__amU24cacheA_25() { return &___U3CU3Ef__amU24cacheA_25; }
	inline void set_U3CU3Ef__amU24cacheA_25(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * value)
	{
		___U3CU3Ef__amU24cacheA_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cacheA_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_26() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cacheB_26)); }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * get_U3CU3Ef__amU24cacheB_26() const { return ___U3CU3Ef__amU24cacheB_26; }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA ** get_address_of_U3CU3Ef__amU24cacheB_26() { return &___U3CU3Ef__amU24cacheB_26; }
	inline void set_U3CU3Ef__amU24cacheB_26(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * value)
	{
		___U3CU3Ef__amU24cacheB_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cacheB_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheC_27() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cacheC_27)); }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * get_U3CU3Ef__amU24cacheC_27() const { return ___U3CU3Ef__amU24cacheC_27; }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA ** get_address_of_U3CU3Ef__amU24cacheC_27() { return &___U3CU3Ef__amU24cacheC_27; }
	inline void set_U3CU3Ef__amU24cacheC_27(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * value)
	{
		___U3CU3Ef__amU24cacheC_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cacheC_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheD_28() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cacheD_28)); }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * get_U3CU3Ef__amU24cacheD_28() const { return ___U3CU3Ef__amU24cacheD_28; }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA ** get_address_of_U3CU3Ef__amU24cacheD_28() { return &___U3CU3Ef__amU24cacheD_28; }
	inline void set_U3CU3Ef__amU24cacheD_28(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * value)
	{
		___U3CU3Ef__amU24cacheD_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cacheD_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheE_29() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cacheE_29)); }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * get_U3CU3Ef__amU24cacheE_29() const { return ___U3CU3Ef__amU24cacheE_29; }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA ** get_address_of_U3CU3Ef__amU24cacheE_29() { return &___U3CU3Ef__amU24cacheE_29; }
	inline void set_U3CU3Ef__amU24cacheE_29(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * value)
	{
		___U3CU3Ef__amU24cacheE_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cacheE_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheF_30() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cacheF_30)); }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * get_U3CU3Ef__amU24cacheF_30() const { return ___U3CU3Ef__amU24cacheF_30; }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA ** get_address_of_U3CU3Ef__amU24cacheF_30() { return &___U3CU3Ef__amU24cacheF_30; }
	inline void set_U3CU3Ef__amU24cacheF_30(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * value)
	{
		___U3CU3Ef__amU24cacheF_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cacheF_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache10_31() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cache10_31)); }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * get_U3CU3Ef__amU24cache10_31() const { return ___U3CU3Ef__amU24cache10_31; }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA ** get_address_of_U3CU3Ef__amU24cache10_31() { return &___U3CU3Ef__amU24cache10_31; }
	inline void set_U3CU3Ef__amU24cache10_31(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * value)
	{
		___U3CU3Ef__amU24cache10_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache10_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache11_32() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cache11_32)); }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * get_U3CU3Ef__amU24cache11_32() const { return ___U3CU3Ef__amU24cache11_32; }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA ** get_address_of_U3CU3Ef__amU24cache11_32() { return &___U3CU3Ef__amU24cache11_32; }
	inline void set_U3CU3Ef__amU24cache11_32(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * value)
	{
		___U3CU3Ef__amU24cache11_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache11_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache12_33() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cache12_33)); }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * get_U3CU3Ef__amU24cache12_33() const { return ___U3CU3Ef__amU24cache12_33; }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA ** get_address_of_U3CU3Ef__amU24cache12_33() { return &___U3CU3Ef__amU24cache12_33; }
	inline void set_U3CU3Ef__amU24cache12_33(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * value)
	{
		___U3CU3Ef__amU24cache12_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache12_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache13_34() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cache13_34)); }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * get_U3CU3Ef__amU24cache13_34() const { return ___U3CU3Ef__amU24cache13_34; }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA ** get_address_of_U3CU3Ef__amU24cache13_34() { return &___U3CU3Ef__amU24cache13_34; }
	inline void set_U3CU3Ef__amU24cache13_34(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * value)
	{
		___U3CU3Ef__amU24cache13_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache13_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache14_35() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cache14_35)); }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * get_U3CU3Ef__amU24cache14_35() const { return ___U3CU3Ef__amU24cache14_35; }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA ** get_address_of_U3CU3Ef__amU24cache14_35() { return &___U3CU3Ef__amU24cache14_35; }
	inline void set_U3CU3Ef__amU24cache14_35(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * value)
	{
		___U3CU3Ef__amU24cache14_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache14_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache15_36() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cache15_36)); }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * get_U3CU3Ef__amU24cache15_36() const { return ___U3CU3Ef__amU24cache15_36; }
	inline ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA ** get_address_of_U3CU3Ef__amU24cache15_36() { return &___U3CU3Ef__amU24cache15_36; }
	inline void set_U3CU3Ef__amU24cache15_36(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * value)
	{
		___U3CU3Ef__amU24cache15_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache15_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache18_37() { return static_cast<int32_t>(offsetof(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields, ___U3CU3Ef__amU24cache18_37)); }
	inline WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * get_U3CU3Ef__amU24cache18_37() const { return ___U3CU3Ef__amU24cache18_37; }
	inline WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 ** get_address_of_U3CU3Ef__amU24cache18_37() { return &___U3CU3Ef__amU24cache18_37; }
	inline void set_U3CU3Ef__amU24cache18_37(WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * value)
	{
		___U3CU3Ef__amU24cache18_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache18_37), (void*)value);
	}
};


// LitJson.JsonWriter
struct JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328  : public RuntimeObject
{
public:
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * ___context_1;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E * ___ctx_stack_2;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___hex_seq_4;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t * ___inst_string_builder_7;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer_10;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328, ___context_1)); }
	inline WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * get_context_1() const { return ___context_1; }
	inline WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_1), (void*)value);
	}

	inline static int32_t get_offset_of_ctx_stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328, ___ctx_stack_2)); }
	inline Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E * get_ctx_stack_2() const { return ___ctx_stack_2; }
	inline Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E ** get_address_of_ctx_stack_2() { return &___ctx_stack_2; }
	inline void set_ctx_stack_2(Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E * value)
	{
		___ctx_stack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctx_stack_2), (void*)value);
	}

	inline static int32_t get_offset_of_has_reached_end_3() { return static_cast<int32_t>(offsetof(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328, ___has_reached_end_3)); }
	inline bool get_has_reached_end_3() const { return ___has_reached_end_3; }
	inline bool* get_address_of_has_reached_end_3() { return &___has_reached_end_3; }
	inline void set_has_reached_end_3(bool value)
	{
		___has_reached_end_3 = value;
	}

	inline static int32_t get_offset_of_hex_seq_4() { return static_cast<int32_t>(offsetof(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328, ___hex_seq_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_hex_seq_4() const { return ___hex_seq_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_hex_seq_4() { return &___hex_seq_4; }
	inline void set_hex_seq_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___hex_seq_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hex_seq_4), (void*)value);
	}

	inline static int32_t get_offset_of_indentation_5() { return static_cast<int32_t>(offsetof(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328, ___indentation_5)); }
	inline int32_t get_indentation_5() const { return ___indentation_5; }
	inline int32_t* get_address_of_indentation_5() { return &___indentation_5; }
	inline void set_indentation_5(int32_t value)
	{
		___indentation_5 = value;
	}

	inline static int32_t get_offset_of_indent_value_6() { return static_cast<int32_t>(offsetof(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328, ___indent_value_6)); }
	inline int32_t get_indent_value_6() const { return ___indent_value_6; }
	inline int32_t* get_address_of_indent_value_6() { return &___indent_value_6; }
	inline void set_indent_value_6(int32_t value)
	{
		___indent_value_6 = value;
	}

	inline static int32_t get_offset_of_inst_string_builder_7() { return static_cast<int32_t>(offsetof(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328, ___inst_string_builder_7)); }
	inline StringBuilder_t * get_inst_string_builder_7() const { return ___inst_string_builder_7; }
	inline StringBuilder_t ** get_address_of_inst_string_builder_7() { return &___inst_string_builder_7; }
	inline void set_inst_string_builder_7(StringBuilder_t * value)
	{
		___inst_string_builder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_string_builder_7), (void*)value);
	}

	inline static int32_t get_offset_of_pretty_print_8() { return static_cast<int32_t>(offsetof(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328, ___pretty_print_8)); }
	inline bool get_pretty_print_8() const { return ___pretty_print_8; }
	inline bool* get_address_of_pretty_print_8() { return &___pretty_print_8; }
	inline void set_pretty_print_8(bool value)
	{
		___pretty_print_8 = value;
	}

	inline static int32_t get_offset_of_validate_9() { return static_cast<int32_t>(offsetof(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328, ___validate_9)); }
	inline bool get_validate_9() const { return ___validate_9; }
	inline bool* get_address_of_validate_9() { return &___validate_9; }
	inline void set_validate_9(bool value)
	{
		___validate_9 = value;
	}

	inline static int32_t get_offset_of_writer_10() { return static_cast<int32_t>(offsetof(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328, ___writer_10)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_writer_10() const { return ___writer_10; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_writer_10() { return &___writer_10; }
	inline void set_writer_10(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___writer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_10), (void*)value);
	}
};

struct JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___number_format_0;

public:
	inline static int32_t get_offset_of_number_format_0() { return static_cast<int32_t>(offsetof(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_StaticFields, ___number_format_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_number_format_0() const { return ___number_format_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_number_format_0() { return &___number_format_0; }
	inline void set_number_format_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___number_format_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___number_format_0), (void*)value);
	}
};


// LitJson.Lexer
struct Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9  : public RuntimeObject
{
public:
	// System.Boolean LitJson.Lexer::allow_comments
	bool ___allow_comments_2;
	// System.Boolean LitJson.Lexer::allow_single_quoted_strings
	bool ___allow_single_quoted_strings_3;
	// System.Boolean LitJson.Lexer::end_of_input
	bool ___end_of_input_4;
	// LitJson.FsmContext LitJson.Lexer::fsm_context
	FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___fsm_context_5;
	// System.Int32 LitJson.Lexer::input_buffer
	int32_t ___input_buffer_6;
	// System.Int32 LitJson.Lexer::input_char
	int32_t ___input_char_7;
	// System.IO.TextReader LitJson.Lexer::reader
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___reader_8;
	// System.Int32 LitJson.Lexer::state
	int32_t ___state_9;
	// System.Text.StringBuilder LitJson.Lexer::string_buffer
	StringBuilder_t * ___string_buffer_10;
	// System.String LitJson.Lexer::string_value
	String_t* ___string_value_11;
	// System.Int32 LitJson.Lexer::token
	int32_t ___token_12;
	// System.Int32 LitJson.Lexer::unichar
	int32_t ___unichar_13;

public:
	inline static int32_t get_offset_of_allow_comments_2() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9, ___allow_comments_2)); }
	inline bool get_allow_comments_2() const { return ___allow_comments_2; }
	inline bool* get_address_of_allow_comments_2() { return &___allow_comments_2; }
	inline void set_allow_comments_2(bool value)
	{
		___allow_comments_2 = value;
	}

	inline static int32_t get_offset_of_allow_single_quoted_strings_3() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9, ___allow_single_quoted_strings_3)); }
	inline bool get_allow_single_quoted_strings_3() const { return ___allow_single_quoted_strings_3; }
	inline bool* get_address_of_allow_single_quoted_strings_3() { return &___allow_single_quoted_strings_3; }
	inline void set_allow_single_quoted_strings_3(bool value)
	{
		___allow_single_quoted_strings_3 = value;
	}

	inline static int32_t get_offset_of_end_of_input_4() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9, ___end_of_input_4)); }
	inline bool get_end_of_input_4() const { return ___end_of_input_4; }
	inline bool* get_address_of_end_of_input_4() { return &___end_of_input_4; }
	inline void set_end_of_input_4(bool value)
	{
		___end_of_input_4 = value;
	}

	inline static int32_t get_offset_of_fsm_context_5() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9, ___fsm_context_5)); }
	inline FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * get_fsm_context_5() const { return ___fsm_context_5; }
	inline FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F ** get_address_of_fsm_context_5() { return &___fsm_context_5; }
	inline void set_fsm_context_5(FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * value)
	{
		___fsm_context_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsm_context_5), (void*)value);
	}

	inline static int32_t get_offset_of_input_buffer_6() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9, ___input_buffer_6)); }
	inline int32_t get_input_buffer_6() const { return ___input_buffer_6; }
	inline int32_t* get_address_of_input_buffer_6() { return &___input_buffer_6; }
	inline void set_input_buffer_6(int32_t value)
	{
		___input_buffer_6 = value;
	}

	inline static int32_t get_offset_of_input_char_7() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9, ___input_char_7)); }
	inline int32_t get_input_char_7() const { return ___input_char_7; }
	inline int32_t* get_address_of_input_char_7() { return &___input_char_7; }
	inline void set_input_char_7(int32_t value)
	{
		___input_char_7 = value;
	}

	inline static int32_t get_offset_of_reader_8() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9, ___reader_8)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_reader_8() const { return ___reader_8; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_reader_8() { return &___reader_8; }
	inline void set_reader_8(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___reader_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_8), (void*)value);
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9, ___state_9)); }
	inline int32_t get_state_9() const { return ___state_9; }
	inline int32_t* get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(int32_t value)
	{
		___state_9 = value;
	}

	inline static int32_t get_offset_of_string_buffer_10() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9, ___string_buffer_10)); }
	inline StringBuilder_t * get_string_buffer_10() const { return ___string_buffer_10; }
	inline StringBuilder_t ** get_address_of_string_buffer_10() { return &___string_buffer_10; }
	inline void set_string_buffer_10(StringBuilder_t * value)
	{
		___string_buffer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___string_buffer_10), (void*)value);
	}

	inline static int32_t get_offset_of_string_value_11() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9, ___string_value_11)); }
	inline String_t* get_string_value_11() const { return ___string_value_11; }
	inline String_t** get_address_of_string_value_11() { return &___string_value_11; }
	inline void set_string_value_11(String_t* value)
	{
		___string_value_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___string_value_11), (void*)value);
	}

	inline static int32_t get_offset_of_token_12() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9, ___token_12)); }
	inline int32_t get_token_12() const { return ___token_12; }
	inline int32_t* get_address_of_token_12() { return &___token_12; }
	inline void set_token_12(int32_t value)
	{
		___token_12 = value;
	}

	inline static int32_t get_offset_of_unichar_13() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9, ___unichar_13)); }
	inline int32_t get_unichar_13() const { return ___unichar_13; }
	inline int32_t* get_address_of_unichar_13() { return &___unichar_13; }
	inline void set_unichar_13(int32_t value)
	{
		___unichar_13 = value;
	}
};

struct Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields
{
public:
	// System.Int32[] LitJson.Lexer::fsm_return_table
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___fsm_return_table_0;
	// LitJson.Lexer/StateHandler[] LitJson.Lexer::fsm_handler_table
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* ___fsm_handler_table_1;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache0
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache0_14;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache1
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache1_15;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache2
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache2_16;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache3
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache3_17;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache4
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache4_18;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache5
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache5_19;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache6
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache6_20;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache7
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache7_21;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache8
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache8_22;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache9
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache9_23;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheA
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cacheA_24;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheB
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cacheB_25;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheC
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cacheC_26;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheD
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cacheD_27;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheE
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cacheE_28;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheF
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cacheF_29;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache10
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache10_30;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache11
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache11_31;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache12
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache12_32;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache13
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache13_33;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache14
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache14_34;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache15
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache15_35;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache16
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache16_36;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache17
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache17_37;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache18
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache18_38;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache19
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache19_39;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache1A
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache1A_40;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache1B
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * ___U3CU3Ef__mgU24cache1B_41;

public:
	inline static int32_t get_offset_of_fsm_return_table_0() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___fsm_return_table_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_fsm_return_table_0() const { return ___fsm_return_table_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_fsm_return_table_0() { return &___fsm_return_table_0; }
	inline void set_fsm_return_table_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___fsm_return_table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsm_return_table_0), (void*)value);
	}

	inline static int32_t get_offset_of_fsm_handler_table_1() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___fsm_handler_table_1)); }
	inline StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* get_fsm_handler_table_1() const { return ___fsm_handler_table_1; }
	inline StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB** get_address_of_fsm_handler_table_1() { return &___fsm_handler_table_1; }
	inline void set_fsm_handler_table_1(StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* value)
	{
		___fsm_handler_table_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsm_handler_table_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_14() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache0_14)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache0_14() const { return ___U3CU3Ef__mgU24cache0_14; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache0_14() { return &___U3CU3Ef__mgU24cache0_14; }
	inline void set_U3CU3Ef__mgU24cache0_14(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_15() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache1_15)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache1_15() const { return ___U3CU3Ef__mgU24cache1_15; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache1_15() { return &___U3CU3Ef__mgU24cache1_15; }
	inline void set_U3CU3Ef__mgU24cache1_15(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache1_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_16() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache2_16)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache2_16() const { return ___U3CU3Ef__mgU24cache2_16; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache2_16() { return &___U3CU3Ef__mgU24cache2_16; }
	inline void set_U3CU3Ef__mgU24cache2_16(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache2_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache2_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_17() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache3_17)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache3_17() const { return ___U3CU3Ef__mgU24cache3_17; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache3_17() { return &___U3CU3Ef__mgU24cache3_17; }
	inline void set_U3CU3Ef__mgU24cache3_17(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache3_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache3_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_18() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache4_18)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache4_18() const { return ___U3CU3Ef__mgU24cache4_18; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache4_18() { return &___U3CU3Ef__mgU24cache4_18; }
	inline void set_U3CU3Ef__mgU24cache4_18(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache4_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache4_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_19() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache5_19)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache5_19() const { return ___U3CU3Ef__mgU24cache5_19; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache5_19() { return &___U3CU3Ef__mgU24cache5_19; }
	inline void set_U3CU3Ef__mgU24cache5_19(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache5_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache5_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_20() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache6_20)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache6_20() const { return ___U3CU3Ef__mgU24cache6_20; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache6_20() { return &___U3CU3Ef__mgU24cache6_20; }
	inline void set_U3CU3Ef__mgU24cache6_20(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache6_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache6_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_21() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache7_21)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache7_21() const { return ___U3CU3Ef__mgU24cache7_21; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache7_21() { return &___U3CU3Ef__mgU24cache7_21; }
	inline void set_U3CU3Ef__mgU24cache7_21(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache7_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache7_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_22() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache8_22)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache8_22() const { return ___U3CU3Ef__mgU24cache8_22; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache8_22() { return &___U3CU3Ef__mgU24cache8_22; }
	inline void set_U3CU3Ef__mgU24cache8_22(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache8_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache8_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_23() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache9_23)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache9_23() const { return ___U3CU3Ef__mgU24cache9_23; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache9_23() { return &___U3CU3Ef__mgU24cache9_23; }
	inline void set_U3CU3Ef__mgU24cache9_23(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache9_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache9_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_24() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cacheA_24)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cacheA_24() const { return ___U3CU3Ef__mgU24cacheA_24; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cacheA_24() { return &___U3CU3Ef__mgU24cacheA_24; }
	inline void set_U3CU3Ef__mgU24cacheA_24(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cacheA_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cacheA_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_25() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cacheB_25)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cacheB_25() const { return ___U3CU3Ef__mgU24cacheB_25; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cacheB_25() { return &___U3CU3Ef__mgU24cacheB_25; }
	inline void set_U3CU3Ef__mgU24cacheB_25(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cacheB_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cacheB_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_26() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cacheC_26)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cacheC_26() const { return ___U3CU3Ef__mgU24cacheC_26; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cacheC_26() { return &___U3CU3Ef__mgU24cacheC_26; }
	inline void set_U3CU3Ef__mgU24cacheC_26(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cacheC_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cacheC_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_27() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cacheD_27)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cacheD_27() const { return ___U3CU3Ef__mgU24cacheD_27; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cacheD_27() { return &___U3CU3Ef__mgU24cacheD_27; }
	inline void set_U3CU3Ef__mgU24cacheD_27(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cacheD_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cacheD_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_28() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cacheE_28)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cacheE_28() const { return ___U3CU3Ef__mgU24cacheE_28; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cacheE_28() { return &___U3CU3Ef__mgU24cacheE_28; }
	inline void set_U3CU3Ef__mgU24cacheE_28(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cacheE_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cacheE_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_29() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cacheF_29)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cacheF_29() const { return ___U3CU3Ef__mgU24cacheF_29; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cacheF_29() { return &___U3CU3Ef__mgU24cacheF_29; }
	inline void set_U3CU3Ef__mgU24cacheF_29(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cacheF_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cacheF_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_30() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache10_30)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache10_30() const { return ___U3CU3Ef__mgU24cache10_30; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache10_30() { return &___U3CU3Ef__mgU24cache10_30; }
	inline void set_U3CU3Ef__mgU24cache10_30(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache10_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache10_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache11_31() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache11_31)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache11_31() const { return ___U3CU3Ef__mgU24cache11_31; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache11_31() { return &___U3CU3Ef__mgU24cache11_31; }
	inline void set_U3CU3Ef__mgU24cache11_31(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache11_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache11_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache12_32() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache12_32)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache12_32() const { return ___U3CU3Ef__mgU24cache12_32; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache12_32() { return &___U3CU3Ef__mgU24cache12_32; }
	inline void set_U3CU3Ef__mgU24cache12_32(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache12_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache12_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache13_33() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache13_33)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache13_33() const { return ___U3CU3Ef__mgU24cache13_33; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache13_33() { return &___U3CU3Ef__mgU24cache13_33; }
	inline void set_U3CU3Ef__mgU24cache13_33(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache13_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache13_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache14_34() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache14_34)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache14_34() const { return ___U3CU3Ef__mgU24cache14_34; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache14_34() { return &___U3CU3Ef__mgU24cache14_34; }
	inline void set_U3CU3Ef__mgU24cache14_34(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache14_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache14_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache15_35() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache15_35)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache15_35() const { return ___U3CU3Ef__mgU24cache15_35; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache15_35() { return &___U3CU3Ef__mgU24cache15_35; }
	inline void set_U3CU3Ef__mgU24cache15_35(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache15_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache15_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache16_36() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache16_36)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache16_36() const { return ___U3CU3Ef__mgU24cache16_36; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache16_36() { return &___U3CU3Ef__mgU24cache16_36; }
	inline void set_U3CU3Ef__mgU24cache16_36(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache16_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache16_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache17_37() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache17_37)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache17_37() const { return ___U3CU3Ef__mgU24cache17_37; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache17_37() { return &___U3CU3Ef__mgU24cache17_37; }
	inline void set_U3CU3Ef__mgU24cache17_37(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache17_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache17_37), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache18_38() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache18_38)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache18_38() const { return ___U3CU3Ef__mgU24cache18_38; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache18_38() { return &___U3CU3Ef__mgU24cache18_38; }
	inline void set_U3CU3Ef__mgU24cache18_38(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache18_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache18_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache19_39() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache19_39)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache19_39() const { return ___U3CU3Ef__mgU24cache19_39; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache19_39() { return &___U3CU3Ef__mgU24cache19_39; }
	inline void set_U3CU3Ef__mgU24cache19_39(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache19_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache19_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1A_40() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache1A_40)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache1A_40() const { return ___U3CU3Ef__mgU24cache1A_40; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache1A_40() { return &___U3CU3Ef__mgU24cache1A_40; }
	inline void set_U3CU3Ef__mgU24cache1A_40(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache1A_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1A_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1B_41() { return static_cast<int32_t>(offsetof(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields, ___U3CU3Ef__mgU24cache1B_41)); }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * get_U3CU3Ef__mgU24cache1B_41() const { return ___U3CU3Ef__mgU24cache1B_41; }
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** get_address_of_U3CU3Ef__mgU24cache1B_41() { return &___U3CU3Ef__mgU24cache1B_41; }
	inline void set_U3CU3Ef__mgU24cache1B_41(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		___U3CU3Ef__mgU24cache1B_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1B_41), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.OrderedDictionaryEnumerator::list_enumerator
	RuntimeObject* ___list_enumerator_0;

public:
	inline static int32_t get_offset_of_list_enumerator_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309, ___list_enumerator_0)); }
	inline RuntimeObject* get_list_enumerator_0() const { return ___list_enumerator_0; }
	inline RuntimeObject** get_address_of_list_enumerator_0() { return &___list_enumerator_0; }
	inline void set_list_enumerator_0(RuntimeObject* value)
	{
		___list_enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_enumerator_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// LitJson.WriterContext
struct WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169  : public RuntimeObject
{
public:
	// System.Int32 LitJson.WriterContext::Count
	int32_t ___Count_0;
	// System.Boolean LitJson.WriterContext::InArray
	bool ___InArray_1;
	// System.Boolean LitJson.WriterContext::InObject
	bool ___InObject_2;
	// System.Boolean LitJson.WriterContext::ExpectingValue
	bool ___ExpectingValue_3;

public:
	inline static int32_t get_offset_of_Count_0() { return static_cast<int32_t>(offsetof(WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169, ___Count_0)); }
	inline int32_t get_Count_0() const { return ___Count_0; }
	inline int32_t* get_address_of_Count_0() { return &___Count_0; }
	inline void set_Count_0(int32_t value)
	{
		___Count_0 = value;
	}

	inline static int32_t get_offset_of_InArray_1() { return static_cast<int32_t>(offsetof(WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169, ___InArray_1)); }
	inline bool get_InArray_1() const { return ___InArray_1; }
	inline bool* get_address_of_InArray_1() { return &___InArray_1; }
	inline void set_InArray_1(bool value)
	{
		___InArray_1 = value;
	}

	inline static int32_t get_offset_of_InObject_2() { return static_cast<int32_t>(offsetof(WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169, ___InObject_2)); }
	inline bool get_InObject_2() const { return ___InObject_2; }
	inline bool* get_address_of_InObject_2() { return &___InObject_2; }
	inline void set_InObject_2(bool value)
	{
		___InObject_2 = value;
	}

	inline static int32_t get_offset_of_ExpectingValue_3() { return static_cast<int32_t>(offsetof(WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169, ___ExpectingValue_3)); }
	inline bool get_ExpectingValue_3() const { return ___ExpectingValue_3; }
	inline bool* get_address_of_ExpectingValue_3() { return &___ExpectingValue_3; }
	inline void set_ExpectingValue_3(bool value)
	{
		___ExpectingValue_3 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
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


// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>
struct KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921, ___value_1)); }
	inline JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * get_value_1() const { return ___value_1; }
	inline JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// LitJson.ArrayMetadata
struct ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23 
{
public:
	// System.Type LitJson.ArrayMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ArrayMetadata::is_array
	bool ___is_array_1;
	// System.Boolean LitJson.ArrayMetadata::is_list
	bool ___is_list_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_type_0), (void*)value);
	}

	inline static int32_t get_offset_of_is_array_1() { return static_cast<int32_t>(offsetof(ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23, ___is_array_1)); }
	inline bool get_is_array_1() const { return ___is_array_1; }
	inline bool* get_address_of_is_array_1() { return &___is_array_1; }
	inline void set_is_array_1(bool value)
	{
		___is_array_1 = value;
	}

	inline static int32_t get_offset_of_is_list_2() { return static_cast<int32_t>(offsetof(ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23, ___is_list_2)); }
	inline bool get_is_list_2() const { return ___is_list_2; }
	inline bool* get_address_of_is_list_2() { return &___is_list_2; }
	inline void set_is_list_2(bool value)
	{
		___is_list_2 = value;
	}
};

// Native definition for P/Invoke marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};
// Native definition for COM marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
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
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
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
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
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


// System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
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
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
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
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
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
struct IntPtr_t 
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


// LitJson.ObjectMetadata
struct ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320 
{
public:
	// System.Type LitJson.ObjectMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ObjectMetadata::is_dictionary
	bool ___is_dictionary_1;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::properties
	RuntimeObject* ___properties_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_type_0), (void*)value);
	}

	inline static int32_t get_offset_of_is_dictionary_1() { return static_cast<int32_t>(offsetof(ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320, ___is_dictionary_1)); }
	inline bool get_is_dictionary_1() const { return ___is_dictionary_1; }
	inline bool* get_address_of_is_dictionary_1() { return &___is_dictionary_1; }
	inline void set_is_dictionary_1(bool value)
	{
		___is_dictionary_1 = value;
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320, ___properties_2)); }
	inline RuntimeObject* get_properties_2() const { return ___properties_2; }
	inline RuntimeObject** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(RuntimeObject* value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};
// Native definition for COM marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};

// LitJson.PropertyMetadata
struct PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521 
{
public:
	// System.Reflection.MemberInfo LitJson.PropertyMetadata::Info
	MemberInfo_t * ___Info_0;
	// System.Boolean LitJson.PropertyMetadata::IsField
	bool ___IsField_1;
	// System.Type LitJson.PropertyMetadata::Type
	Type_t * ___Type_2;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521, ___Info_0)); }
	inline MemberInfo_t * get_Info_0() const { return ___Info_0; }
	inline MemberInfo_t ** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(MemberInfo_t * value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_0), (void*)value);
	}

	inline static int32_t get_offset_of_IsField_1() { return static_cast<int32_t>(offsetof(PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521, ___IsField_1)); }
	inline bool get_IsField_1() const { return ___IsField_1; }
	inline bool* get_address_of_IsField_1() { return &___IsField_1; }
	inline void set_IsField_1(bool value)
	{
		___IsField_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521, ___Type_2)); }
	inline Type_t * get_Type_2() const { return ___Type_2; }
	inline Type_t ** get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(Type_t * value)
	{
		___Type_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521_marshaled_pinvoke
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};
// Native definition for COM marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521_marshaled_com
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};

// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
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
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
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
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
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
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
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


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}/$ArrayType=112
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D112_tB6FB7DDDAF8453F2E2869909F5DC45A6F9133093 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D112_tB6FB7DDDAF8453F2E2869909F5DC45A6F9133093__padding[112];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}/$ArrayType=12
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536__padding[12];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}
struct U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6_StaticFields
{
public:
	// <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}/$ArrayType=12 <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}::$field-0
	U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  ___U24fieldU2D0_0;
	// <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}/$ArrayType=12 <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}::$field-1
	U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  ___U24fieldU2D1_1;
	// <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}/$ArrayType=12 <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}::$field-2
	U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  ___U24fieldU2D2_2;
	// <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}/$ArrayType=12 <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}::$field-3
	U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  ___U24fieldU2D3_3;
	// <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}/$ArrayType=12 <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}::$field-4
	U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  ___U24fieldU2D4_4;
	// <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}/$ArrayType=12 <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}::$field-5
	U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  ___U24fieldU2D5_5;
	// <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}/$ArrayType=12 <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}::$field-6
	U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  ___U24fieldU2D6_6;
	// <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}/$ArrayType=12 <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}::$field-7
	U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  ___U24fieldU2D7_7;
	// <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}/$ArrayType=12 <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}::$field-8
	U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  ___U24fieldU2D8_8;
	// <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}/$ArrayType=12 <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}::$field-9
	U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  ___U24fieldU2D9_9;
	// <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}/$ArrayType=12 <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}::$field-A
	U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  ___U24fieldU2DA_10;
	// <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}/$ArrayType=12 <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}::$field-B
	U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  ___U24fieldU2DB_11;
	// <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}/$ArrayType=112 <PrivateImplementationDetails>{d7db51ae-d199-4277-a2a4-4bdb68cd3ac9}::$field-C
	U24ArrayTypeU3D112_tB6FB7DDDAF8453F2E2869909F5DC45A6F9133093  ___U24fieldU2DC_12;

public:
	inline static int32_t get_offset_of_U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6_StaticFields, ___U24fieldU2D0_0)); }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  get_U24fieldU2D0_0() const { return ___U24fieldU2D0_0; }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536 * get_address_of_U24fieldU2D0_0() { return &___U24fieldU2D0_0; }
	inline void set_U24fieldU2D0_0(U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  value)
	{
		___U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6_StaticFields, ___U24fieldU2D1_1)); }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  get_U24fieldU2D1_1() const { return ___U24fieldU2D1_1; }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536 * get_address_of_U24fieldU2D1_1() { return &___U24fieldU2D1_1; }
	inline void set_U24fieldU2D1_1(U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  value)
	{
		___U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6_StaticFields, ___U24fieldU2D2_2)); }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  get_U24fieldU2D2_2() const { return ___U24fieldU2D2_2; }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536 * get_address_of_U24fieldU2D2_2() { return &___U24fieldU2D2_2; }
	inline void set_U24fieldU2D2_2(U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  value)
	{
		___U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6_StaticFields, ___U24fieldU2D3_3)); }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  get_U24fieldU2D3_3() const { return ___U24fieldU2D3_3; }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536 * get_address_of_U24fieldU2D3_3() { return &___U24fieldU2D3_3; }
	inline void set_U24fieldU2D3_3(U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  value)
	{
		___U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6_StaticFields, ___U24fieldU2D4_4)); }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  get_U24fieldU2D4_4() const { return ___U24fieldU2D4_4; }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536 * get_address_of_U24fieldU2D4_4() { return &___U24fieldU2D4_4; }
	inline void set_U24fieldU2D4_4(U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  value)
	{
		___U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6_StaticFields, ___U24fieldU2D5_5)); }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  get_U24fieldU2D5_5() const { return ___U24fieldU2D5_5; }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536 * get_address_of_U24fieldU2D5_5() { return &___U24fieldU2D5_5; }
	inline void set_U24fieldU2D5_5(U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  value)
	{
		___U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6_StaticFields, ___U24fieldU2D6_6)); }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  get_U24fieldU2D6_6() const { return ___U24fieldU2D6_6; }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536 * get_address_of_U24fieldU2D6_6() { return &___U24fieldU2D6_6; }
	inline void set_U24fieldU2D6_6(U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  value)
	{
		___U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D7_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6_StaticFields, ___U24fieldU2D7_7)); }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  get_U24fieldU2D7_7() const { return ___U24fieldU2D7_7; }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536 * get_address_of_U24fieldU2D7_7() { return &___U24fieldU2D7_7; }
	inline void set_U24fieldU2D7_7(U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  value)
	{
		___U24fieldU2D7_7 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D8_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6_StaticFields, ___U24fieldU2D8_8)); }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  get_U24fieldU2D8_8() const { return ___U24fieldU2D8_8; }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536 * get_address_of_U24fieldU2D8_8() { return &___U24fieldU2D8_8; }
	inline void set_U24fieldU2D8_8(U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  value)
	{
		___U24fieldU2D8_8 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D9_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6_StaticFields, ___U24fieldU2D9_9)); }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  get_U24fieldU2D9_9() const { return ___U24fieldU2D9_9; }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536 * get_address_of_U24fieldU2D9_9() { return &___U24fieldU2D9_9; }
	inline void set_U24fieldU2D9_9(U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  value)
	{
		___U24fieldU2D9_9 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DA_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6_StaticFields, ___U24fieldU2DA_10)); }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  get_U24fieldU2DA_10() const { return ___U24fieldU2DA_10; }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536 * get_address_of_U24fieldU2DA_10() { return &___U24fieldU2DA_10; }
	inline void set_U24fieldU2DA_10(U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  value)
	{
		___U24fieldU2DA_10 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DB_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6_StaticFields, ___U24fieldU2DB_11)); }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  get_U24fieldU2DB_11() const { return ___U24fieldU2DB_11; }
	inline U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536 * get_address_of_U24fieldU2DB_11() { return &___U24fieldU2DB_11; }
	inline void set_U24fieldU2DB_11(U24ArrayTypeU3D12_tCEE28D8BC2830D3E39CCED1C00FC3686994CF536  value)
	{
		___U24fieldU2DB_11 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6_StaticFields, ___U24fieldU2DC_12)); }
	inline U24ArrayTypeU3D112_tB6FB7DDDAF8453F2E2869909F5DC45A6F9133093  get_U24fieldU2DC_12() const { return ___U24fieldU2DC_12; }
	inline U24ArrayTypeU3D112_tB6FB7DDDAF8453F2E2869909F5DC45A6F9133093 * get_address_of_U24fieldU2DC_12() { return &___U24fieldU2DC_12; }
	inline void set_U24fieldU2DC_12(U24ArrayTypeU3D112_tB6FB7DDDAF8453F2E2869909F5DC45A6F9133093  value)
	{
		___U24fieldU2DC_12 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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


// LitJson.Condition
struct Condition_tF7C50D11ACD3226C5EA6640F5A7E8566F2C79DE7 
{
public:
	// System.Int32 LitJson.Condition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Condition_tF7C50D11ACD3226C5EA6640F5A7E8566F2C79DE7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.DateTimeFormatFlags
struct DateTimeFormatFlags_tDB584B32BB07C708469EE8DEF8A903A105B4B4B7 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_tDB584B32BB07C708469EE8DEF8A903A105B4B4B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.DateTimeStyles
struct DateTimeStyles_t2E18E2817B83F518AD684A16EB44A96EE6E765D4 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeStyles_t2E18E2817B83F518AD684A16EB44A96EE6E765D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
struct Exception_t  : public RuntimeObject
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

// LitJson.JsonToken
struct JsonToken_tB65658DCEA147322DB595DFA481D06559CA9B11E 
{
public:
	// System.Int32 LitJson.JsonToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonToken_tB65658DCEA147322DB595DFA481D06559CA9B11E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LitJson.JsonType
struct JsonType_tA73AFD5272B7881267978C506533365E8BE32F07 
{
public:
	// System.Int32 LitJson.JsonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonType_tA73AFD5272B7881267978C506533365E8BE32F07, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LitJson.ParserToken
struct ParserToken_t252EB88B78C715CDB69BAB1C572F4F8B115F4BDB 
{
public:
	// System.Int32 LitJson.ParserToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParserToken_t252EB88B78C715CDB69BAB1C572F4F8B115F4BDB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t * ____sb_11;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_12;

public:
	inline static int32_t get_offset_of__sb_11() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____sb_11)); }
	inline StringBuilder_t * get__sb_11() const { return ____sb_11; }
	inline StringBuilder_t ** get_address_of__sb_11() { return &____sb_11; }
	inline void set__sb_11(StringBuilder_t * value)
	{
		____sb_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sb_11), (void*)value);
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}
};


// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90  : public RuntimeObject
{
public:
	// System.Globalization.CultureData System.Globalization.DateTimeFormatInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_1;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_2;
	// System.String System.Globalization.DateTimeFormatInfo::m_langName
	String_t* ___m_langName_3;
	// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::m_compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___m_compareInfo_4;
	// System.Globalization.CultureInfo System.Globalization.DateTimeFormatInfo::m_cultureInfo
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_cultureInfo_5;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_6;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_7;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_8;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_9;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_10;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_11;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateTimeOffsetPattern
	String_t* ___dateTimeOffsetPattern_13;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_17;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_18;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_19;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_20;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___abbreviatedDayNames_21;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_superShortDayNames_22;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___dayNames_23;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___abbreviatedMonthNames_24;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___monthNames_25;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___genitiveMonthNames_26;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_genitiveAbbreviatedMonthNames_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___leapYearMonthNames_28;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_29;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_30;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_31;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_32;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allYearMonthPatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allYearMonthPatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allShortDatePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allLongDatePatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allShortTimePatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allLongTimePatterns_38;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_eraNames_39;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_abbrevEraNames_40;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_abbrevEnglishEraNames_41;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___optionalCalendars_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_44;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_45;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_47;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_48;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_49;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_50;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_dateWords_53;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanPositivePattern
	String_t* ___m_fullTimeSpanPositivePattern_54;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanNegativePattern
	String_t* ___m_fullTimeSpanNegativePattern_55;
	// System.Globalization.TokenHashValue[] System.Globalization.DateTimeFormatInfo::m_dtfiTokenHash
	TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3* ___m_dtfiTokenHash_57;

public:
	inline static int32_t get_offset_of_m_cultureData_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_cultureData_1)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_1() const { return ___m_cultureData_1; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_1() { return &___m_cultureData_1; }
	inline void set_m_cultureData_1(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_name_2)); }
	inline String_t* get_m_name_2() const { return ___m_name_2; }
	inline String_t** get_address_of_m_name_2() { return &___m_name_2; }
	inline void set_m_name_2(String_t* value)
	{
		___m_name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_langName_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_langName_3)); }
	inline String_t* get_m_langName_3() const { return ___m_langName_3; }
	inline String_t** get_address_of_m_langName_3() { return &___m_langName_3; }
	inline void set_m_langName_3(String_t* value)
	{
		___m_langName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_langName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_compareInfo_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_compareInfo_4)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_m_compareInfo_4() const { return ___m_compareInfo_4; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_m_compareInfo_4() { return &___m_compareInfo_4; }
	inline void set_m_compareInfo_4(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___m_compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_compareInfo_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureInfo_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_cultureInfo_5)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_cultureInfo_5() const { return ___m_cultureInfo_5; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_cultureInfo_5() { return &___m_cultureInfo_5; }
	inline void set_m_cultureInfo_5(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_cultureInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of_amDesignator_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___amDesignator_6)); }
	inline String_t* get_amDesignator_6() const { return ___amDesignator_6; }
	inline String_t** get_address_of_amDesignator_6() { return &___amDesignator_6; }
	inline void set_amDesignator_6(String_t* value)
	{
		___amDesignator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___amDesignator_6), (void*)value);
	}

	inline static int32_t get_offset_of_pmDesignator_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___pmDesignator_7)); }
	inline String_t* get_pmDesignator_7() const { return ___pmDesignator_7; }
	inline String_t** get_address_of_pmDesignator_7() { return &___pmDesignator_7; }
	inline void set_pmDesignator_7(String_t* value)
	{
		___pmDesignator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pmDesignator_7), (void*)value);
	}

	inline static int32_t get_offset_of_dateSeparator_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___dateSeparator_8)); }
	inline String_t* get_dateSeparator_8() const { return ___dateSeparator_8; }
	inline String_t** get_address_of_dateSeparator_8() { return &___dateSeparator_8; }
	inline void set_dateSeparator_8(String_t* value)
	{
		___dateSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_generalShortTimePattern_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___generalShortTimePattern_9)); }
	inline String_t* get_generalShortTimePattern_9() const { return ___generalShortTimePattern_9; }
	inline String_t** get_address_of_generalShortTimePattern_9() { return &___generalShortTimePattern_9; }
	inline void set_generalShortTimePattern_9(String_t* value)
	{
		___generalShortTimePattern_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generalShortTimePattern_9), (void*)value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___generalLongTimePattern_10)); }
	inline String_t* get_generalLongTimePattern_10() const { return ___generalLongTimePattern_10; }
	inline String_t** get_address_of_generalLongTimePattern_10() { return &___generalLongTimePattern_10; }
	inline void set_generalLongTimePattern_10(String_t* value)
	{
		___generalLongTimePattern_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generalLongTimePattern_10), (void*)value);
	}

	inline static int32_t get_offset_of_timeSeparator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___timeSeparator_11)); }
	inline String_t* get_timeSeparator_11() const { return ___timeSeparator_11; }
	inline String_t** get_address_of_timeSeparator_11() { return &___timeSeparator_11; }
	inline void set_timeSeparator_11(String_t* value)
	{
		___timeSeparator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeSeparator_11), (void*)value);
	}

	inline static int32_t get_offset_of_monthDayPattern_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___monthDayPattern_12)); }
	inline String_t* get_monthDayPattern_12() const { return ___monthDayPattern_12; }
	inline String_t** get_address_of_monthDayPattern_12() { return &___monthDayPattern_12; }
	inline void set_monthDayPattern_12(String_t* value)
	{
		___monthDayPattern_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthDayPattern_12), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeOffsetPattern_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___dateTimeOffsetPattern_13)); }
	inline String_t* get_dateTimeOffsetPattern_13() const { return ___dateTimeOffsetPattern_13; }
	inline String_t** get_address_of_dateTimeOffsetPattern_13() { return &___dateTimeOffsetPattern_13; }
	inline void set_dateTimeOffsetPattern_13(String_t* value)
	{
		___dateTimeOffsetPattern_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeOffsetPattern_13), (void*)value);
	}

	inline static int32_t get_offset_of_calendar_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___calendar_17)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_17() const { return ___calendar_17; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_17() { return &___calendar_17; }
	inline void set_calendar_17(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_17), (void*)value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___firstDayOfWeek_18)); }
	inline int32_t get_firstDayOfWeek_18() const { return ___firstDayOfWeek_18; }
	inline int32_t* get_address_of_firstDayOfWeek_18() { return &___firstDayOfWeek_18; }
	inline void set_firstDayOfWeek_18(int32_t value)
	{
		___firstDayOfWeek_18 = value;
	}

	inline static int32_t get_offset_of_calendarWeekRule_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___calendarWeekRule_19)); }
	inline int32_t get_calendarWeekRule_19() const { return ___calendarWeekRule_19; }
	inline int32_t* get_address_of_calendarWeekRule_19() { return &___calendarWeekRule_19; }
	inline void set_calendarWeekRule_19(int32_t value)
	{
		___calendarWeekRule_19 = value;
	}

	inline static int32_t get_offset_of_fullDateTimePattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___fullDateTimePattern_20)); }
	inline String_t* get_fullDateTimePattern_20() const { return ___fullDateTimePattern_20; }
	inline String_t** get_address_of_fullDateTimePattern_20() { return &___fullDateTimePattern_20; }
	inline void set_fullDateTimePattern_20(String_t* value)
	{
		___fullDateTimePattern_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullDateTimePattern_20), (void*)value);
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___abbreviatedDayNames_21)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_abbreviatedDayNames_21() const { return ___abbreviatedDayNames_21; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_abbreviatedDayNames_21() { return &___abbreviatedDayNames_21; }
	inline void set_abbreviatedDayNames_21(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___abbreviatedDayNames_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abbreviatedDayNames_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_superShortDayNames_22)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_superShortDayNames_22() const { return ___m_superShortDayNames_22; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_superShortDayNames_22() { return &___m_superShortDayNames_22; }
	inline void set_m_superShortDayNames_22(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_superShortDayNames_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_superShortDayNames_22), (void*)value);
	}

	inline static int32_t get_offset_of_dayNames_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___dayNames_23)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_dayNames_23() const { return ___dayNames_23; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_dayNames_23() { return &___dayNames_23; }
	inline void set_dayNames_23(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___dayNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dayNames_23), (void*)value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___abbreviatedMonthNames_24)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_abbreviatedMonthNames_24() const { return ___abbreviatedMonthNames_24; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_abbreviatedMonthNames_24() { return &___abbreviatedMonthNames_24; }
	inline void set_abbreviatedMonthNames_24(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___abbreviatedMonthNames_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abbreviatedMonthNames_24), (void*)value);
	}

	inline static int32_t get_offset_of_monthNames_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___monthNames_25)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_monthNames_25() const { return ___monthNames_25; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_monthNames_25() { return &___monthNames_25; }
	inline void set_monthNames_25(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___monthNames_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthNames_25), (void*)value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___genitiveMonthNames_26)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_genitiveMonthNames_26() const { return ___genitiveMonthNames_26; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_genitiveMonthNames_26() { return &___genitiveMonthNames_26; }
	inline void set_genitiveMonthNames_26(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___genitiveMonthNames_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___genitiveMonthNames_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_genitiveAbbreviatedMonthNames_27)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_genitiveAbbreviatedMonthNames_27() const { return ___m_genitiveAbbreviatedMonthNames_27; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_genitiveAbbreviatedMonthNames_27() { return &___m_genitiveAbbreviatedMonthNames_27; }
	inline void set_m_genitiveAbbreviatedMonthNames_27(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_genitiveAbbreviatedMonthNames_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_genitiveAbbreviatedMonthNames_27), (void*)value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___leapYearMonthNames_28)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_leapYearMonthNames_28() const { return ___leapYearMonthNames_28; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_leapYearMonthNames_28() { return &___leapYearMonthNames_28; }
	inline void set_leapYearMonthNames_28(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___leapYearMonthNames_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leapYearMonthNames_28), (void*)value);
	}

	inline static int32_t get_offset_of_longDatePattern_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___longDatePattern_29)); }
	inline String_t* get_longDatePattern_29() const { return ___longDatePattern_29; }
	inline String_t** get_address_of_longDatePattern_29() { return &___longDatePattern_29; }
	inline void set_longDatePattern_29(String_t* value)
	{
		___longDatePattern_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longDatePattern_29), (void*)value);
	}

	inline static int32_t get_offset_of_shortDatePattern_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___shortDatePattern_30)); }
	inline String_t* get_shortDatePattern_30() const { return ___shortDatePattern_30; }
	inline String_t** get_address_of_shortDatePattern_30() { return &___shortDatePattern_30; }
	inline void set_shortDatePattern_30(String_t* value)
	{
		___shortDatePattern_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortDatePattern_30), (void*)value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___yearMonthPattern_31)); }
	inline String_t* get_yearMonthPattern_31() const { return ___yearMonthPattern_31; }
	inline String_t** get_address_of_yearMonthPattern_31() { return &___yearMonthPattern_31; }
	inline void set_yearMonthPattern_31(String_t* value)
	{
		___yearMonthPattern_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yearMonthPattern_31), (void*)value);
	}

	inline static int32_t get_offset_of_longTimePattern_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___longTimePattern_32)); }
	inline String_t* get_longTimePattern_32() const { return ___longTimePattern_32; }
	inline String_t** get_address_of_longTimePattern_32() { return &___longTimePattern_32; }
	inline void set_longTimePattern_32(String_t* value)
	{
		___longTimePattern_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longTimePattern_32), (void*)value);
	}

	inline static int32_t get_offset_of_shortTimePattern_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___shortTimePattern_33)); }
	inline String_t* get_shortTimePattern_33() const { return ___shortTimePattern_33; }
	inline String_t** get_address_of_shortTimePattern_33() { return &___shortTimePattern_33; }
	inline void set_shortTimePattern_33(String_t* value)
	{
		___shortTimePattern_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortTimePattern_33), (void*)value);
	}

	inline static int32_t get_offset_of_allYearMonthPatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allYearMonthPatterns_34)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allYearMonthPatterns_34() const { return ___allYearMonthPatterns_34; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allYearMonthPatterns_34() { return &___allYearMonthPatterns_34; }
	inline void set_allYearMonthPatterns_34(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allYearMonthPatterns_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allYearMonthPatterns_34), (void*)value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allShortDatePatterns_35)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allShortDatePatterns_35() const { return ___allShortDatePatterns_35; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allShortDatePatterns_35() { return &___allShortDatePatterns_35; }
	inline void set_allShortDatePatterns_35(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allShortDatePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShortDatePatterns_35), (void*)value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allLongDatePatterns_36)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allLongDatePatterns_36() const { return ___allLongDatePatterns_36; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allLongDatePatterns_36() { return &___allLongDatePatterns_36; }
	inline void set_allLongDatePatterns_36(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allLongDatePatterns_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLongDatePatterns_36), (void*)value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allShortTimePatterns_37)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allShortTimePatterns_37() const { return ___allShortTimePatterns_37; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allShortTimePatterns_37() { return &___allShortTimePatterns_37; }
	inline void set_allShortTimePatterns_37(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allShortTimePatterns_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShortTimePatterns_37), (void*)value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allLongTimePatterns_38)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allLongTimePatterns_38() const { return ___allLongTimePatterns_38; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allLongTimePatterns_38() { return &___allLongTimePatterns_38; }
	inline void set_allLongTimePatterns_38(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allLongTimePatterns_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLongTimePatterns_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_eraNames_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_eraNames_39)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_eraNames_39() const { return ___m_eraNames_39; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_eraNames_39() { return &___m_eraNames_39; }
	inline void set_m_eraNames_39(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_eraNames_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eraNames_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_abbrevEraNames_40)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_abbrevEraNames_40() const { return ___m_abbrevEraNames_40; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_abbrevEraNames_40() { return &___m_abbrevEraNames_40; }
	inline void set_m_abbrevEraNames_40(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_abbrevEraNames_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_abbrevEraNames_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_abbrevEnglishEraNames_41)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_abbrevEnglishEraNames_41() const { return ___m_abbrevEnglishEraNames_41; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_abbrevEnglishEraNames_41() { return &___m_abbrevEnglishEraNames_41; }
	inline void set_m_abbrevEnglishEraNames_41(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_abbrevEnglishEraNames_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_abbrevEnglishEraNames_41), (void*)value);
	}

	inline static int32_t get_offset_of_optionalCalendars_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___optionalCalendars_42)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_optionalCalendars_42() const { return ___optionalCalendars_42; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_optionalCalendars_42() { return &___optionalCalendars_42; }
	inline void set_optionalCalendars_42(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___optionalCalendars_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___optionalCalendars_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_isReadOnly_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_isReadOnly_44)); }
	inline bool get_m_isReadOnly_44() const { return ___m_isReadOnly_44; }
	inline bool* get_address_of_m_isReadOnly_44() { return &___m_isReadOnly_44; }
	inline void set_m_isReadOnly_44(bool value)
	{
		___m_isReadOnly_44 = value;
	}

	inline static int32_t get_offset_of_formatFlags_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___formatFlags_45)); }
	inline int32_t get_formatFlags_45() const { return ___formatFlags_45; }
	inline int32_t* get_address_of_formatFlags_45() { return &___formatFlags_45; }
	inline void set_formatFlags_45(int32_t value)
	{
		___formatFlags_45 = value;
	}

	inline static int32_t get_offset_of_CultureID_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___CultureID_47)); }
	inline int32_t get_CultureID_47() const { return ___CultureID_47; }
	inline int32_t* get_address_of_CultureID_47() { return &___CultureID_47; }
	inline void set_CultureID_47(int32_t value)
	{
		___CultureID_47 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_useUserOverride_48)); }
	inline bool get_m_useUserOverride_48() const { return ___m_useUserOverride_48; }
	inline bool* get_address_of_m_useUserOverride_48() { return &___m_useUserOverride_48; }
	inline void set_m_useUserOverride_48(bool value)
	{
		___m_useUserOverride_48 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___bUseCalendarInfo_49)); }
	inline bool get_bUseCalendarInfo_49() const { return ___bUseCalendarInfo_49; }
	inline bool* get_address_of_bUseCalendarInfo_49() { return &___bUseCalendarInfo_49; }
	inline void set_bUseCalendarInfo_49(bool value)
	{
		___bUseCalendarInfo_49 = value;
	}

	inline static int32_t get_offset_of_nDataItem_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___nDataItem_50)); }
	inline int32_t get_nDataItem_50() const { return ___nDataItem_50; }
	inline int32_t* get_address_of_nDataItem_50() { return &___nDataItem_50; }
	inline void set_nDataItem_50(int32_t value)
	{
		___nDataItem_50 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_isDefaultCalendar_51)); }
	inline bool get_m_isDefaultCalendar_51() const { return ___m_isDefaultCalendar_51; }
	inline bool* get_address_of_m_isDefaultCalendar_51() { return &___m_isDefaultCalendar_51; }
	inline void set_m_isDefaultCalendar_51(bool value)
	{
		___m_isDefaultCalendar_51 = value;
	}

	inline static int32_t get_offset_of_m_dateWords_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_dateWords_53)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_dateWords_53() const { return ___m_dateWords_53; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_dateWords_53() { return &___m_dateWords_53; }
	inline void set_m_dateWords_53(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_dateWords_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dateWords_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanPositivePattern_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_fullTimeSpanPositivePattern_54)); }
	inline String_t* get_m_fullTimeSpanPositivePattern_54() const { return ___m_fullTimeSpanPositivePattern_54; }
	inline String_t** get_address_of_m_fullTimeSpanPositivePattern_54() { return &___m_fullTimeSpanPositivePattern_54; }
	inline void set_m_fullTimeSpanPositivePattern_54(String_t* value)
	{
		___m_fullTimeSpanPositivePattern_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTimeSpanPositivePattern_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanNegativePattern_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_fullTimeSpanNegativePattern_55)); }
	inline String_t* get_m_fullTimeSpanNegativePattern_55() const { return ___m_fullTimeSpanNegativePattern_55; }
	inline String_t** get_address_of_m_fullTimeSpanNegativePattern_55() { return &___m_fullTimeSpanNegativePattern_55; }
	inline void set_m_fullTimeSpanNegativePattern_55(String_t* value)
	{
		___m_fullTimeSpanNegativePattern_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTimeSpanNegativePattern_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_dtfiTokenHash_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_dtfiTokenHash_57)); }
	inline TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3* get_m_dtfiTokenHash_57() const { return ___m_dtfiTokenHash_57; }
	inline TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3** get_address_of_m_dtfiTokenHash_57() { return &___m_dtfiTokenHash_57; }
	inline void set_m_dtfiTokenHash_57(TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3* value)
	{
		___m_dtfiTokenHash_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dtfiTokenHash_57), (void*)value);
	}
};

struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields
{
public:
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::invariantInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___invariantInfo_0;
	// System.Boolean System.Globalization.DateTimeFormatInfo::preferExistingTokens
	bool ___preferExistingTokens_46;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_calendarNativeNames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___s_calendarNativeNames_52;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_jajpDTFI
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___s_jajpDTFI_82;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_zhtwDTFI
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___s_zhtwDTFI_83;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___invariantInfo_0)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_preferExistingTokens_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___preferExistingTokens_46)); }
	inline bool get_preferExistingTokens_46() const { return ___preferExistingTokens_46; }
	inline bool* get_address_of_preferExistingTokens_46() { return &___preferExistingTokens_46; }
	inline void set_preferExistingTokens_46(bool value)
	{
		___preferExistingTokens_46 = value;
	}

	inline static int32_t get_offset_of_s_calendarNativeNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___s_calendarNativeNames_52)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_s_calendarNativeNames_52() const { return ___s_calendarNativeNames_52; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_s_calendarNativeNames_52() { return &___s_calendarNativeNames_52; }
	inline void set_s_calendarNativeNames_52(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___s_calendarNativeNames_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_calendarNativeNames_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_jajpDTFI_82() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___s_jajpDTFI_82)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_s_jajpDTFI_82() const { return ___s_jajpDTFI_82; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_s_jajpDTFI_82() { return &___s_jajpDTFI_82; }
	inline void set_s_jajpDTFI_82(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___s_jajpDTFI_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_jajpDTFI_82), (void*)value);
	}

	inline static int32_t get_offset_of_s_zhtwDTFI_83() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___s_zhtwDTFI_83)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_s_zhtwDTFI_83() const { return ___s_zhtwDTFI_83; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_s_zhtwDTFI_83() { return &___s_zhtwDTFI_83; }
	inline void set_s_zhtwDTFI_83(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___s_zhtwDTFI_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_zhtwDTFI_83), (void*)value);
	}
};


// LitJson.JsonData
struct JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<LitJson.JsonData> LitJson.JsonData::inst_array
	RuntimeObject* ___inst_array_0;
	// System.Boolean LitJson.JsonData::inst_boolean
	bool ___inst_boolean_1;
	// System.Double LitJson.JsonData::inst_double
	double ___inst_double_2;
	// System.Int32 LitJson.JsonData::inst_int
	int32_t ___inst_int_3;
	// System.Int64 LitJson.JsonData::inst_long
	int64_t ___inst_long_4;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData> LitJson.JsonData::inst_object
	RuntimeObject* ___inst_object_5;
	// System.String LitJson.JsonData::inst_string
	String_t* ___inst_string_6;
	// System.String LitJson.JsonData::json
	String_t* ___json_7;
	// LitJson.JsonType LitJson.JsonData::type
	int32_t ___type_8;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.JsonData::object_list
	RuntimeObject* ___object_list_9;

public:
	inline static int32_t get_offset_of_inst_array_0() { return static_cast<int32_t>(offsetof(JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638, ___inst_array_0)); }
	inline RuntimeObject* get_inst_array_0() const { return ___inst_array_0; }
	inline RuntimeObject** get_address_of_inst_array_0() { return &___inst_array_0; }
	inline void set_inst_array_0(RuntimeObject* value)
	{
		___inst_array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_array_0), (void*)value);
	}

	inline static int32_t get_offset_of_inst_boolean_1() { return static_cast<int32_t>(offsetof(JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638, ___inst_boolean_1)); }
	inline bool get_inst_boolean_1() const { return ___inst_boolean_1; }
	inline bool* get_address_of_inst_boolean_1() { return &___inst_boolean_1; }
	inline void set_inst_boolean_1(bool value)
	{
		___inst_boolean_1 = value;
	}

	inline static int32_t get_offset_of_inst_double_2() { return static_cast<int32_t>(offsetof(JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638, ___inst_double_2)); }
	inline double get_inst_double_2() const { return ___inst_double_2; }
	inline double* get_address_of_inst_double_2() { return &___inst_double_2; }
	inline void set_inst_double_2(double value)
	{
		___inst_double_2 = value;
	}

	inline static int32_t get_offset_of_inst_int_3() { return static_cast<int32_t>(offsetof(JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638, ___inst_int_3)); }
	inline int32_t get_inst_int_3() const { return ___inst_int_3; }
	inline int32_t* get_address_of_inst_int_3() { return &___inst_int_3; }
	inline void set_inst_int_3(int32_t value)
	{
		___inst_int_3 = value;
	}

	inline static int32_t get_offset_of_inst_long_4() { return static_cast<int32_t>(offsetof(JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638, ___inst_long_4)); }
	inline int64_t get_inst_long_4() const { return ___inst_long_4; }
	inline int64_t* get_address_of_inst_long_4() { return &___inst_long_4; }
	inline void set_inst_long_4(int64_t value)
	{
		___inst_long_4 = value;
	}

	inline static int32_t get_offset_of_inst_object_5() { return static_cast<int32_t>(offsetof(JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638, ___inst_object_5)); }
	inline RuntimeObject* get_inst_object_5() const { return ___inst_object_5; }
	inline RuntimeObject** get_address_of_inst_object_5() { return &___inst_object_5; }
	inline void set_inst_object_5(RuntimeObject* value)
	{
		___inst_object_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_object_5), (void*)value);
	}

	inline static int32_t get_offset_of_inst_string_6() { return static_cast<int32_t>(offsetof(JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638, ___inst_string_6)); }
	inline String_t* get_inst_string_6() const { return ___inst_string_6; }
	inline String_t** get_address_of_inst_string_6() { return &___inst_string_6; }
	inline void set_inst_string_6(String_t* value)
	{
		___inst_string_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_string_6), (void*)value);
	}

	inline static int32_t get_offset_of_json_7() { return static_cast<int32_t>(offsetof(JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638, ___json_7)); }
	inline String_t* get_json_7() const { return ___json_7; }
	inline String_t** get_address_of_json_7() { return &___json_7; }
	inline void set_json_7(String_t* value)
	{
		___json_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_7), (void*)value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638, ___type_8)); }
	inline int32_t get_type_8() const { return ___type_8; }
	inline int32_t* get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(int32_t value)
	{
		___type_8 = value;
	}

	inline static int32_t get_offset_of_object_list_9() { return static_cast<int32_t>(offsetof(JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638, ___object_list_9)); }
	inline RuntimeObject* get_object_list_9() const { return ___object_list_9; }
	inline RuntimeObject** get_address_of_object_list_9() { return &___object_list_9; }
	inline void set_object_list_9(RuntimeObject* value)
	{
		___object_list_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_list_9), (void*)value);
	}
};


// LitJson.JsonReader
struct JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<System.Int32> LitJson.JsonReader::automaton_stack
	Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * ___automaton_stack_1;
	// System.Int32 LitJson.JsonReader::current_input
	int32_t ___current_input_2;
	// System.Int32 LitJson.JsonReader::current_symbol
	int32_t ___current_symbol_3;
	// System.Boolean LitJson.JsonReader::end_of_json
	bool ___end_of_json_4;
	// System.Boolean LitJson.JsonReader::end_of_input
	bool ___end_of_input_5;
	// LitJson.Lexer LitJson.JsonReader::lexer
	Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * ___lexer_6;
	// System.Boolean LitJson.JsonReader::parser_in_string
	bool ___parser_in_string_7;
	// System.Boolean LitJson.JsonReader::parser_return
	bool ___parser_return_8;
	// System.Boolean LitJson.JsonReader::read_started
	bool ___read_started_9;
	// System.IO.TextReader LitJson.JsonReader::reader
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___reader_10;
	// System.Boolean LitJson.JsonReader::reader_is_owned
	bool ___reader_is_owned_11;
	// System.Boolean LitJson.JsonReader::skip_non_members
	bool ___skip_non_members_12;
	// System.Object LitJson.JsonReader::token_value
	RuntimeObject * ___token_value_13;
	// LitJson.JsonToken LitJson.JsonReader::token
	int32_t ___token_14;

public:
	inline static int32_t get_offset_of_automaton_stack_1() { return static_cast<int32_t>(offsetof(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0, ___automaton_stack_1)); }
	inline Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * get_automaton_stack_1() const { return ___automaton_stack_1; }
	inline Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 ** get_address_of_automaton_stack_1() { return &___automaton_stack_1; }
	inline void set_automaton_stack_1(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * value)
	{
		___automaton_stack_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___automaton_stack_1), (void*)value);
	}

	inline static int32_t get_offset_of_current_input_2() { return static_cast<int32_t>(offsetof(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0, ___current_input_2)); }
	inline int32_t get_current_input_2() const { return ___current_input_2; }
	inline int32_t* get_address_of_current_input_2() { return &___current_input_2; }
	inline void set_current_input_2(int32_t value)
	{
		___current_input_2 = value;
	}

	inline static int32_t get_offset_of_current_symbol_3() { return static_cast<int32_t>(offsetof(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0, ___current_symbol_3)); }
	inline int32_t get_current_symbol_3() const { return ___current_symbol_3; }
	inline int32_t* get_address_of_current_symbol_3() { return &___current_symbol_3; }
	inline void set_current_symbol_3(int32_t value)
	{
		___current_symbol_3 = value;
	}

	inline static int32_t get_offset_of_end_of_json_4() { return static_cast<int32_t>(offsetof(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0, ___end_of_json_4)); }
	inline bool get_end_of_json_4() const { return ___end_of_json_4; }
	inline bool* get_address_of_end_of_json_4() { return &___end_of_json_4; }
	inline void set_end_of_json_4(bool value)
	{
		___end_of_json_4 = value;
	}

	inline static int32_t get_offset_of_end_of_input_5() { return static_cast<int32_t>(offsetof(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0, ___end_of_input_5)); }
	inline bool get_end_of_input_5() const { return ___end_of_input_5; }
	inline bool* get_address_of_end_of_input_5() { return &___end_of_input_5; }
	inline void set_end_of_input_5(bool value)
	{
		___end_of_input_5 = value;
	}

	inline static int32_t get_offset_of_lexer_6() { return static_cast<int32_t>(offsetof(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0, ___lexer_6)); }
	inline Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * get_lexer_6() const { return ___lexer_6; }
	inline Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 ** get_address_of_lexer_6() { return &___lexer_6; }
	inline void set_lexer_6(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * value)
	{
		___lexer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lexer_6), (void*)value);
	}

	inline static int32_t get_offset_of_parser_in_string_7() { return static_cast<int32_t>(offsetof(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0, ___parser_in_string_7)); }
	inline bool get_parser_in_string_7() const { return ___parser_in_string_7; }
	inline bool* get_address_of_parser_in_string_7() { return &___parser_in_string_7; }
	inline void set_parser_in_string_7(bool value)
	{
		___parser_in_string_7 = value;
	}

	inline static int32_t get_offset_of_parser_return_8() { return static_cast<int32_t>(offsetof(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0, ___parser_return_8)); }
	inline bool get_parser_return_8() const { return ___parser_return_8; }
	inline bool* get_address_of_parser_return_8() { return &___parser_return_8; }
	inline void set_parser_return_8(bool value)
	{
		___parser_return_8 = value;
	}

	inline static int32_t get_offset_of_read_started_9() { return static_cast<int32_t>(offsetof(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0, ___read_started_9)); }
	inline bool get_read_started_9() const { return ___read_started_9; }
	inline bool* get_address_of_read_started_9() { return &___read_started_9; }
	inline void set_read_started_9(bool value)
	{
		___read_started_9 = value;
	}

	inline static int32_t get_offset_of_reader_10() { return static_cast<int32_t>(offsetof(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0, ___reader_10)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_reader_10() const { return ___reader_10; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_reader_10() { return &___reader_10; }
	inline void set_reader_10(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___reader_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_10), (void*)value);
	}

	inline static int32_t get_offset_of_reader_is_owned_11() { return static_cast<int32_t>(offsetof(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0, ___reader_is_owned_11)); }
	inline bool get_reader_is_owned_11() const { return ___reader_is_owned_11; }
	inline bool* get_address_of_reader_is_owned_11() { return &___reader_is_owned_11; }
	inline void set_reader_is_owned_11(bool value)
	{
		___reader_is_owned_11 = value;
	}

	inline static int32_t get_offset_of_skip_non_members_12() { return static_cast<int32_t>(offsetof(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0, ___skip_non_members_12)); }
	inline bool get_skip_non_members_12() const { return ___skip_non_members_12; }
	inline bool* get_address_of_skip_non_members_12() { return &___skip_non_members_12; }
	inline void set_skip_non_members_12(bool value)
	{
		___skip_non_members_12 = value;
	}

	inline static int32_t get_offset_of_token_value_13() { return static_cast<int32_t>(offsetof(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0, ___token_value_13)); }
	inline RuntimeObject * get_token_value_13() const { return ___token_value_13; }
	inline RuntimeObject ** get_address_of_token_value_13() { return &___token_value_13; }
	inline void set_token_value_13(RuntimeObject * value)
	{
		___token_value_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___token_value_13), (void*)value);
	}

	inline static int32_t get_offset_of_token_14() { return static_cast<int32_t>(offsetof(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0, ___token_14)); }
	inline int32_t get_token_14() const { return ___token_14; }
	inline int32_t* get_address_of_token_14() { return &___token_14; }
	inline void set_token_14(int32_t value)
	{
		___token_14 = value;
	}
};

struct JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> LitJson.JsonReader::parse_table
	RuntimeObject* ___parse_table_0;

public:
	inline static int32_t get_offset_of_parse_table_0() { return static_cast<int32_t>(offsetof(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_StaticFields, ___parse_table_0)); }
	inline RuntimeObject* get_parse_table_0() const { return ___parse_table_0; }
	inline RuntimeObject** get_address_of_parse_table_0() { return &___parse_table_0; }
	inline void set_parse_table_0(RuntimeObject* value)
	{
		___parse_table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parse_table_0), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
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


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// LitJson.ExporterFunc
struct ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D  : public MulticastDelegate_t
{
public:

public:
};


// LitJson.ImporterFunc
struct ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// LitJson.JsonException
struct JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD  : public ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407
{
public:

public:
};


// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// LitJson.WrapperFactory
struct WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5  : public MulticastDelegate_t
{
public:

public:
};


// LitJson.Lexer/StateHandler
struct StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
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
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * m_Items[1];

public:
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB79E0336FE7A71B9D05923C08B5D152848B6F553_gshared (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m10230E8BD42A0AD307AAED06A430B2221E7C3A75_gshared (Dictionary_2_tF8C4D80E9ABE5DEF9B0B015084B50E6254AF38DF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC1657EA8786A163E08C0DAAB6C0F8883B1BE1309_gshared (Dictionary_2_tB5B524F252E61F9F981E7DCFE7BF1DD9FB091912 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954_gshared (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_gshared (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_m65385AD770CB3137B6B0638B1C8B3F135A5E277D_gshared (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_gshared (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_m975CA51F3A72228535A3AE9FE726481EF9E0B76C_gshared (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 LitJson.JsonData::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_get_Count_m0283A1C762B7B1593BEC79545B275A0507906090 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method);
// System.Collections.IList LitJson.JsonData::EnsureList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureList_m05DA339C2A253269235F854A434172393FC9764B (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method);
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureDictionary_m2ED9C6615DF697504CEFE79CE10B7CE6DD18CE85 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * JsonData_ToJsonData_m7BDC3497CFE14EAA69BDFEE9BD7F6704A507CA6C (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m655B3BD80963335C46A098CE964AD453C5F03A98 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, String_t* ___prop_name0, JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * ___value1, const RuntimeMethod* method);
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m93C5F239939518179824A6762D53FB44D10DA551 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, int32_t ___index0, JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * ___value1, const RuntimeMethod* method);
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureCollection_m0DED282A624FBDB45CB4E479D719D96F9AD9EEBB (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m646EE77B8D1CD9170B658722619FE6C6DBB6D867 (KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 * __this, String_t* ___key0, JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 *, String_t*, JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m3C46D4EC0CED1FF3059866EA1197FA24A55EE2A6_inline (KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::get_Value()
inline JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * KeyValuePair_2_get_Value_m8DF21BDD7A90B0DC9E4429B89228DA6FD4EDB7EF_inline (KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 * __this, const RuntimeMethod* method)
{
	return ((  JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * (*) (KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Int32 LitJson.JsonData::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_Add_mEE0782517E9106FBBC229442D88FD0F80ACBA180 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_m7ED8BFEB079572DE65EBF63E82D39B3CC5B05FC1 (OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309 * __this, RuntimeObject* ___enumerator0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::.ctor()
inline void Dictionary_2__ctor_m5AC1BD903FD9178D233A4D3884068C7F775F3026 (Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::.ctor()
inline void List_1__ctor_m734D27A51E6DC966092BB55127D0EF80065606AB (List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B *, const RuntimeMethod*))List_1__ctor_mB79E0336FE7A71B9D05923C08B5D152848B6F553_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::.ctor()
inline void List_1__ctor_m016B76900A58A6AB2F64BB35FBF164F793B94BCF (List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void LitJson.JsonData::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mD516AF324F9FCAEEC106B79C826C68C9D961F95C (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Boolean System.Int64::Equals(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_Equals_m22F1F9E00328D15F2EF44D9A82F185C9A8D0A697 (int64_t* __this, int64_t ___obj0, const RuntimeMethod* method);
// System.Boolean System.Double::Equals(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B (double* __this, double ___obj0, const RuntimeMethod* method);
// System.Boolean System.Boolean::Equals(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D (bool* __this, bool ___obj0, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D (double* __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861 (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::.ctor()
inline void Dictionary_2__ctor_m847855B1828C20D7C0FFCA651C0FBA2023A3754C (Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85 *, const RuntimeMethod*))Dictionary_2__ctor_m10230E8BD42A0AD307AAED06A430B2221E7C3A75_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::.ctor()
inline void Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762 (Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::.ctor()
inline void Dictionary_2__ctor_m84ABEBF9BDC358A171BD8EC1C3264D9261C72EC1 (Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428 *, const RuntimeMethod*))Dictionary_2__ctor_mC1657EA8786A163E08C0DAAB6C0F8883B1BE1309_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::.ctor()
inline void Dictionary_2__ctor_m1EB30357056C3276229C8E3B3DAD5ED1FF97DF16 (Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m1587492D555AF45E3F28C3FBC3CC0F731E6DF7CE (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, const RuntimeMethod* method);
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * DateTimeFormatInfo_get_InvariantInfo_mF82BD33E66FDFBF82C9E9F58CDA7DDE568401F4B (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::.ctor()
inline void Dictionary_2__ctor_m0E046849653A31D6AB3C1466A7721435C44DE38E (Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::.ctor()
inline void Dictionary_2__ctor_mEDC07215238F2D6559389577FFD9A3F3FE3E726A (Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_mCF2BA649F1FEAB4F371813C6A60AAD7496C2FB98 (const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_mA2C90264A050DBE01D27A9FFCCC367B397227174 (const RuntimeMethod* method);
// System.Boolean LitJson.JsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_Read_m4F676359E5B9EA9BACAC8D46F1DDE66F32D00D89 (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, const RuntimeMethod* method);
// LitJson.JsonToken LitJson.JsonReader::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_m2B10EA1A7092905DF573A861AD4AAA4339CF35E1_inline (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, const RuntimeMethod* method);
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_Invoke_m1F9972AF5C88AD99C3F5E144A46115DD1A520866 (WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * __this, const RuntimeMethod* method);
// System.Object LitJson.JsonReader::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_get_Value_m537D1C8B88323E383A49CC60518C1C1B5D2683B6_inline (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, const RuntimeMethod* method);
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ReadValue_mCD397D87290F5FB6E4BCA0ACA01281CD90F9D875 (WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * ___factory0, JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * ___reader1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc__ctor_m5CC07979B36E516693CDC5E433061B0FE6628CA5 (ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFunc__ctor_mF4474A471B7A7E315F917CBFEE10926DBFB5788A (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_mBD38C80131FE037D944E61BF6A60C6097481E717 (RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * ___importer3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::.ctor()
inline void Dictionary_2__ctor_mB463BFA2B5186F7E4AD72B2E2447F2FEA179FD49 (Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperFactory__ctor_mE5D4DB3B83CC881E6C34F1B0466FE973B9F4EA9E (WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToWrapper_m154CC7F127F8550F8B809F995579750055977AC0 (WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * ___factory0, String_t* ___json1, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mD2272ABAEDF8B80B60CC7A8D9F0C486ED3EB4CA9 (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, String_t* ___json_text0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m16B237FA188F31A702DA81BB98674A35EF58AE55 (uint8_t ___value0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mAFFA3691C0839CE0EA9595BF475BD74AEDF838F7 (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, int32_t ___number0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mE78FB58C17EA12F95381D5C746722C771BD0BFE7 (Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m0ECA23C2A07D2DF7425ADFB25CD50D8CDBE3FA22 (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.DateTime,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mB3626028A47845ACEE96260B096C91EA42D227B7 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m900F19F2E533C68B5B87F65B76ED4195B1804218 (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___number0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mCCBE073FF85D0B92F38BF63334A42DB5BABA66C4 (int8_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m1E275A2122DD929BC92E25F5E0B72355EA6378DE (int16_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mEE9189C38DB7737892F35EAE2FA183E918DC5C70 (uint16_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m7E663B2DD9A15D6F486B6C36A43751CBFC922CA4 (uint32_t ___value0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mA776329A365ACB2122D2863D854C08AA2DE3E9E9 (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, uint64_t ___number0, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_m63C698D88485EB4CAACA12EDFA17B0F894B2A66C (int32_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m4E6CFEBFC620FD3705A52853CDAECC5F6AB5423F (int32_t ___value0, const RuntimeMethod* method);
// System.SByte System.Convert::ToSByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m51258423AD29E21302EF937934744AFEAEAEA1F0 (int32_t ___value0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m541B626F2506C13399245670B33C0387F4C92241 (int32_t ___value0, const RuntimeMethod* method);
// System.UInt16 System.Convert::ToUInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_mD29FE8C80080BE4F1D7FA65A7589B9368150B3DC (int32_t ___value0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mA38C43C03B8030EFE234825FC0D23E8B081089C9 (int32_t ___value0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_m370686073463D041429EEBF663C144744BE79668 (int32_t ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m71955B1BEF239B4ECC8868252DA082A38FD1E125 (int32_t ___value0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Convert_ToDecimal_mD729925F249653EF8DA34909561747DB117A4644 (double ___value0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mD97A8501E8D2A539ADBD77E91629BADE142746E7 (int64_t ___value0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mC70BDA16401A56AA014B84C16035328E533B9AF1 (String_t* ___value0, const RuntimeMethod* method);
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Convert_ToDateTime_m2FA19E10818EF340AF19191C7E01F2632FAF3B2D (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void LitJson.JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m78C4ECE864DF5675D562A0143CDF3B641E338DFB (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::PopulateParseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_PopulateParseTable_m2AFDF6F75C89BA5DA42A39D0160CC8CADAB6EEA0 (const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE (StringReader_t74E352C280EAC22C878867444978741F19E1F895 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m62E49CBC81810BCA0E583DC53016CF51564A0440 (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___reader0, bool ___owned1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
inline void Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954 (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 *, const RuntimeMethod*))Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(!0)
inline void Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3 (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 *, int32_t, const RuntimeMethod*))Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_gshared)(__this, ___item0, method);
}
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_m795FDA09D4F89C9F24D31E898ED6B7AAD847BD1E (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___reader0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor()
inline void Dictionary_2__ctor_m2EBF1ECBC92F80383944B79DCCDA176099E0BF78 (Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddRow_m16509139D9874248C8FF23A708A7ECBB675C5262 (int32_t ___rule0, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11 (int32_t ___row0, int32_t ___col1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___symbols2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>::.ctor()
inline void Dictionary_2__ctor_m0042AB3E1A64BB363620361BBE7585680D722E16 (Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0 (String_t* ___s0, double* ___result1, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method);
// System.Boolean System.UInt64::TryParse(System.String,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_TryParse_m9A4700B9A5FD8F9B5270914DA0DF310A6BD07AE5 (String_t* ___s0, uint64_t* ___result1, const RuntimeMethod* method);
// System.String LitJson.Lexer::get_StringValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_mB6D4DB3D5A1AA3399673E4D55CF827C460BDC401_inline (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessNumber_mE8972C772C3BA44D5828C9F45243631EC46057B1 (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, String_t* ___number0, const RuntimeMethod* method);
// System.Boolean LitJson.Lexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_NextToken_m9B5E8395C93306F40AEFEE4D9FC1BF6E247D2467 (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method);
// System.Boolean LitJson.Lexer::get_EndOfInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_mFEE13AD7088F64BCE07E92583F59D7A583FA3459_inline (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_m398E8956F614004E65B9D3351CEB648F03987645 (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, const RuntimeMethod* method);
// System.Int32 LitJson.Lexer::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_m3CEA90DD0FE332D6E5FEAB49FA3618B41B8B4764_inline (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
inline void Stack_1_Clear_m65385AD770CB3137B6B0638B1C8B3F135A5E277D (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 *, const RuntimeMethod*))Stack_1_Clear_m65385AD770CB3137B6B0638B1C8B3F135A5E277D_gshared)(__this, method);
}
// System.Boolean LitJson.JsonReader::ReadToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_ReadToken_m7088043D61216860365023820E10A38A685A7396 (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32>::Peek()
inline int32_t Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 *, const RuntimeMethod*))Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_gshared)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<System.Int32>::Pop()
inline int32_t Stack_1_Pop_m975CA51F3A72228535A3AE9FE726481EF9E0B76C (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 *, const RuntimeMethod*))Stack_1_Pop_m975CA51F3A72228535A3AE9FE726481EF9E0B76C_gshared)(__this, method);
}
// System.Void LitJson.JsonReader::ProcessSymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessSymbol_mDE8BC3E01C02881C89E7D644281574CBCE3CAB45 (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m071981460543EBEED1E6349E9E01E1ACC35A7638 (JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mBE89028AB5026D03F51C8DE340C5EFB703E16CAB (JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD * __this, int32_t ___token0, Exception_t * ___inner_exception1, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F (const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mCA0BB9FBAEDB78DF47C385E534F1EB38F6334F66 (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_mBB363842B0921D986F899D820BAA9AE0B70D4746 (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::.ctor()
inline void Stack_1__ctor_m2BFB8A6E6330A831A42600B14EF2BBFE384ABE1C (Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E *, const RuntimeMethod*))Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared)(__this, method);
}
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_mC3D32B71F932C8D5BB5E23C09434ADE364EA6ECA (WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Push(!0)
inline void Stack_1_Push_m20B7A8C855D99C3C974DE7CC3C0D2F16180F5C6C (Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E * __this, WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E *, WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m421A40D79076BC303FDBD8B88162711749E0BA2F (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, bool ___add_comma0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_m95C0A4E41B668538D9541D624E755D0F0FC97C05 (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_m90E70BE564328F1E7C1B5345B5E2E294D2E1858E (int32_t ___n0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___hex1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m406505C0D4C6809B043854A33E1D74981D4A281A (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, int32_t ___cond0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m4714D39FD6D7F925D80309013A26CE18F2787622 (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Decimal,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m4365C068739D443C5C6EEB5445AAEE1DBB245A4B (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m608712133E3A607F257620CB270C6758F01CB109 (int32_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_m804FF268AAF3444533F6134E22F31142095D3D0B (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.UInt64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m7DC0B782B61A20E04F624E47FD967D246BB78BD6 (uint64_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void LitJson.Lexer::PopulateFsmTables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_mD49B7D850F9EF1DE8CAE42E7071C0C7334E4A27C (const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void LitJson.FsmContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmContext__ctor_m52236D4A7466168630F026364CA4C0F9A4637BD1 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * __this, const RuntimeMethod* method);
// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC (int32_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean LitJson.Lexer::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method);
// System.Void LitJson.Lexer::UngetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_UngetChar_mE3A03622C15E5E5CFC4CBDB366AF3B0A991A3F5F (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method);
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_mCE995A93C4D6717DB6ADD28E99310B28DF5B98D6 (int32_t ___esc_char0, const RuntimeMethod* method);
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_mE03E46BCC5DDEA643F42888E73FEBA088AE947FD (int32_t ___digit0, const RuntimeMethod* method);
// System.Int32 LitJson.Lexer::NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_mC99507CB61E94C584BDA6B01DB6798080BC5B3AB (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method);
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_Invoke_m4E6E9FE5B338F0B517C51FCCDE9AD9BF3D7A6B2A (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * __this, FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method);
// System.Void LitJson.JsonException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m0654C739AE3716DA887B41E6D3F0A845D17EB3F5 (JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD * __this, int32_t ___c0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Remove_m6ABF9CF3D10160EB52E0768262A9B179F987571E (StringBuilder_t * __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  OrderedDictionaryEnumerator_get_Entry_m4A6491528CE6ED6094B80F67CBE58DB1C33E2737 (OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309 * __this, const RuntimeMethod* method);
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_mF383FECC02E6A6FA003D609E63697A9FC010BCB4 (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23_marshal_pinvoke(const ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23& unmarshaled, ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23_marshal_pinvoke_back(const ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23_marshaled_pinvoke& marshaled, ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23_marshal_pinvoke_cleanup(ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23_marshal_com(const ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23& unmarshaled, ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23_marshal_com_back(const ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23_marshaled_com& marshaled, ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23_marshal_com_cleanup(ArrayMetadata_t41ADF473AB9FD5CD732A13A2A91A39103F240E23_marshaled_com& marshaled)
{
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
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc__ctor_m5CC07979B36E516693CDC5E433061B0FE6628CA5 (ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_m8423F19BFF6991DBD602E588E78462E8F4E83945 (ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * __this, RuntimeObject * ___obj0, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * ___writer1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * >::Invoke(targetMethod, ___obj0, ___writer1);
					else
						GenericVirtActionInvoker1< JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * >::Invoke(targetMethod, ___obj0, ___writer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0, ___writer1);
					else
						VirtActionInvoker1< JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0, ___writer1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___writer1);
					else
						VirtActionInvoker2< RuntimeObject *, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___writer1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExporterFunc_BeginInvoke_m368146748F1D82F4DA5AD545AB67138191111571 (ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * __this, RuntimeObject * ___obj0, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * ___writer1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = ___writer1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_EndInvoke_mE6C56C9417F5FF90DDE0072F315B70E173C13E3C (ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void LitJson.FsmContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmContext__ctor_m52236D4A7466168630F026364CA4C0F9A4637BD1 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFunc__ctor_mF4474A471B7A7E315F917CBFEE10926DBFB5788A (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_Invoke_m7B5C72C0B47EA21D2752C6E9E1A599D546099723 (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___input0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___input0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult LitJson.ImporterFunc::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_BeginInvoke_mFB15BF983AFF7A20B55C8B6DD11075C043CAA17B (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * __this, RuntimeObject * ___input0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Object LitJson.ImporterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_EndInvoke_mA1F4EC520CB287CD0EF2284EA77933A08B0B718C (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 LitJson.JsonData::System.Collections.ICollection.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_ICollection_get_Count_m66454F967505B9D888826593596FA49D8B87F986 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = JsonData_get_Count_m0283A1C762B7B1593BEC79545B275A0507906090(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_get_IsReadOnly_m0FD39BF09C7CBF44A11F46516EEA757DBB9AEBD6 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m05DA339C2A253269235F854A434172393FC9764B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Collections.IList::get_IsReadOnly() */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object LitJson.JsonData::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonData_System_Collections_IDictionary_get_Item_m453F9161BDEB295085F6BD177A72E2B476FDEFAC (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m2ED9C6615DF697504CEFE79CE10B7CE6DD18CE85(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IDictionary_set_Item_mCD2D9BC3940147B664D6394FA4F62D4A1BF4F39C (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___key0;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82A13B351F60D442B29C59FEDF02FF7E52C04163)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_System_Collections_IDictionary_set_Item_mCD2D9BC3940147B664D6394FA4F62D4A1BF4F39C_RuntimeMethod_var)));
	}

IL_0016:
	{
		RuntimeObject * L_2 = ___value1;
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_3;
		L_3 = JsonData_ToJsonData_m7BDC3497CFE14EAA69BDFEE9BD7F6704A507CA6C(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4 = ___key0;
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_5 = V_0;
		JsonData_set_Item_m655B3BD80963335C46A098CE964AD453C5F03A98(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Object LitJson.JsonData::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonData_System_Collections_IList_get_Item_mBBD415EE0687C655058191CB1F3EA1EE44BB2799 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m05DA339C2A253269235F854A434172393FC9764B(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_set_Item_mE6092DFBC9BAFDC29DD73ECAD89D35FDA0B2C461 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m05DA339C2A253269235F854A434172393FC9764B(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value1;
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_2;
		L_2 = JsonData_ToJsonData_m7BDC3497CFE14EAA69BDFEE9BD7F6704A507CA6C(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = ___index0;
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_4 = V_0;
		JsonData_set_Item_m93C5F239939518179824A6762D53FB44D10DA551(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 LitJson.JsonData::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_get_Count_m0283A1C762B7B1593BEC79545B275A0507906090 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_m0DED282A624FBDB45CB4E479D719D96F9AD9EEBB(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// LitJson.JsonData LitJson.JsonData::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * JsonData_get_Item_mB4D829753186F7A12FCFFF9CA34090F5742D9816 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, String_t* ___prop_name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tA588E2706486D2684BC3838206FB78D186494AE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m2ED9C6615DF697504CEFE79CE10B7CE6DD18CE85(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = __this->get_inst_object_5();
		String_t* L_2 = ___prop_name0;
		NullCheck(L_1);
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_3;
		L_3 = InterfaceFuncInvoker1< JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::get_Item(!0) */, IDictionary_2_tA588E2706486D2684BC3838206FB78D186494AE9_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m655B3BD80963335C46A098CE964AD453C5F03A98 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, String_t* ___prop_name0, JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t1A81EF2682DCC2A7A50BF71C11DA88D9DE06E95E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tA588E2706486D2684BC3838206FB78D186494AE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t94D9B6D6A4B79697DCD67227A5530A5299015D7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m646EE77B8D1CD9170B658722619FE6C6DBB6D867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m3C46D4EC0CED1FF3059866EA1197FA24A55EE2A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m2ED9C6615DF697504CEFE79CE10B7CE6DD18CE85(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___prop_name0;
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_2 = ___value1;
		KeyValuePair_2__ctor_m646EE77B8D1CD9170B658722619FE6C6DBB6D867((KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 *)(&V_0), L_1, L_2, /*hidden argument*/KeyValuePair_2__ctor_m646EE77B8D1CD9170B658722619FE6C6DBB6D867_RuntimeMethod_var);
		RuntimeObject* L_3 = __this->get_inst_object_5();
		String_t* L_4 = ___prop_name0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::ContainsKey(!0) */, IDictionary_2_tA588E2706486D2684BC3838206FB78D186494AE9_il2cpp_TypeInfo_var, L_3, L_4);
		if (!L_5)
		{
			goto IL_0073;
		}
	}
	{
		V_1 = 0;
		goto IL_005d;
	}

IL_0028:
	{
		RuntimeObject* L_6 = __this->get_object_list_9();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  L_8;
		L_8 = InterfaceFuncInvoker1< KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t94D9B6D6A4B79697DCD67227A5530A5299015D7C_il2cpp_TypeInfo_var, L_6, L_7);
		V_2 = L_8;
		String_t* L_9;
		L_9 = KeyValuePair_2_get_Key_m3C46D4EC0CED1FF3059866EA1197FA24A55EE2A6_inline((KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m3C46D4EC0CED1FF3059866EA1197FA24A55EE2A6_RuntimeMethod_var);
		String_t* L_10 = ___prop_name0;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject* L_12 = __this->get_object_list_9();
		int32_t L_13 = V_1;
		KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  L_14 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,!0) */, IList_1_t94D9B6D6A4B79697DCD67227A5530A5299015D7C_il2cpp_TypeInfo_var, L_12, L_13, L_14);
		goto IL_006e;
	}

IL_0059:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_005d:
	{
		int32_t L_16 = V_1;
		RuntimeObject* L_17 = __this->get_object_list_9();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Count() */, ICollection_1_t1A81EF2682DCC2A7A50BF71C11DA88D9DE06E95E_il2cpp_TypeInfo_var, L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0028;
		}
	}

IL_006e:
	{
		goto IL_007f;
	}

IL_0073:
	{
		RuntimeObject* L_19 = __this->get_object_list_9();
		KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  L_20 = V_0;
		NullCheck(L_19);
		InterfaceActionInvoker1< KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Add(!0) */, ICollection_1_t1A81EF2682DCC2A7A50BF71C11DA88D9DE06E95E_il2cpp_TypeInfo_var, L_19, L_20);
	}

IL_007f:
	{
		RuntimeObject* L_21 = __this->get_inst_object_5();
		String_t* L_22 = ___prop_name0;
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_23 = ___value1;
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(!0,!1) */, IDictionary_2_tA588E2706486D2684BC3838206FB78D186494AE9_il2cpp_TypeInfo_var, L_21, L_22, L_23);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// LitJson.JsonData LitJson.JsonData::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * JsonData_get_Item_m173D681D0B2410CEFCBA50C7AD87575D9E14DCB0 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t94D9B6D6A4B79697DCD67227A5530A5299015D7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tAB2ED6D3845E48DA44BD334D2BB3784C437EF21E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m8DF21BDD7A90B0DC9E4429B89228DA6FD4EDB7EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_m0DED282A624FBDB45CB4E479D719D96F9AD9EEBB(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_type_8();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_inst_array_0();
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_4;
		L_4 = InterfaceFuncInvoker1< JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<LitJson.JsonData>::get_Item(System.Int32) */, IList_1_tAB2ED6D3845E48DA44BD334D2BB3784C437EF21E_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}

IL_0020:
	{
		RuntimeObject* L_5 = __this->get_object_list_9();
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  L_7;
		L_7 = InterfaceFuncInvoker1< KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t94D9B6D6A4B79697DCD67227A5530A5299015D7C_il2cpp_TypeInfo_var, L_5, L_6);
		V_0 = L_7;
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_8;
		L_8 = KeyValuePair_2_get_Value_m8DF21BDD7A90B0DC9E4429B89228DA6FD4EDB7EF_inline((KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m8DF21BDD7A90B0DC9E4429B89228DA6FD4EDB7EF_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m93C5F239939518179824A6762D53FB44D10DA551 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, int32_t ___index0, JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tA588E2706486D2684BC3838206FB78D186494AE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t94D9B6D6A4B79697DCD67227A5530A5299015D7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tAB2ED6D3845E48DA44BD334D2BB3784C437EF21E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m646EE77B8D1CD9170B658722619FE6C6DBB6D867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m3C46D4EC0CED1FF3059866EA1197FA24A55EE2A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_m0DED282A624FBDB45CB4E479D719D96F9AD9EEBB(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_type_8();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_inst_array_0();
		int32_t L_3 = ___index0;
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_4 = ___value1;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<LitJson.JsonData>::set_Item(System.Int32,!0) */, IList_1_tAB2ED6D3845E48DA44BD334D2BB3784C437EF21E_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		goto IL_0061;
	}

IL_0025:
	{
		RuntimeObject* L_5 = __this->get_object_list_9();
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  L_7;
		L_7 = InterfaceFuncInvoker1< KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t94D9B6D6A4B79697DCD67227A5530A5299015D7C_il2cpp_TypeInfo_var, L_5, L_6);
		V_0 = L_7;
		String_t* L_8;
		L_8 = KeyValuePair_2_get_Key_m3C46D4EC0CED1FF3059866EA1197FA24A55EE2A6_inline((KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m3C46D4EC0CED1FF3059866EA1197FA24A55EE2A6_RuntimeMethod_var);
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_9 = ___value1;
		KeyValuePair_2__ctor_m646EE77B8D1CD9170B658722619FE6C6DBB6D867((KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 *)(&V_1), L_8, L_9, /*hidden argument*/KeyValuePair_2__ctor_m646EE77B8D1CD9170B658722619FE6C6DBB6D867_RuntimeMethod_var);
		RuntimeObject* L_10 = __this->get_object_list_9();
		int32_t L_11 = ___index0;
		KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  L_12 = V_1;
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,!0) */, IList_1_t94D9B6D6A4B79697DCD67227A5530A5299015D7C_il2cpp_TypeInfo_var, L_10, L_11, L_12);
		RuntimeObject* L_13 = __this->get_inst_object_5();
		String_t* L_14;
		L_14 = KeyValuePair_2_get_Key_m3C46D4EC0CED1FF3059866EA1197FA24A55EE2A6_inline((KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m3C46D4EC0CED1FF3059866EA1197FA24A55EE2A6_RuntimeMethod_var);
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_15 = ___value1;
		NullCheck(L_13);
		InterfaceActionInvoker2< String_t*, JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(!0,!1) */, IDictionary_2_tA588E2706486D2684BC3838206FB78D186494AE9_il2cpp_TypeInfo_var, L_13, L_14, L_15);
	}

IL_0061:
	{
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m78C4ECE864DF5675D562A0143CDF3B641E338DFB (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mD516AF324F9FCAEEC106B79C826C68C9D961F95C (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		__this->set_type_8(7);
		RuntimeObject * L_1 = ___obj0;
		__this->set_inst_boolean_1(((*(bool*)((bool*)UnBox(L_1, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		return;
	}

IL_0025:
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_0044;
		}
	}
	{
		__this->set_type_8(6);
		RuntimeObject * L_3 = ___obj0;
		__this->set_inst_double_2(((*(double*)((double*)UnBox(L_3, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))));
		return;
	}

IL_0044:
	{
		RuntimeObject * L_4 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_0063;
		}
	}
	{
		__this->set_type_8(4);
		RuntimeObject * L_5 = ___obj0;
		__this->set_inst_int_3(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		return;
	}

IL_0063:
	{
		RuntimeObject * L_6 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		__this->set_type_8(5);
		RuntimeObject * L_7 = ___obj0;
		__this->set_inst_long_4(((*(int64_t*)((int64_t*)UnBox(L_7, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))));
		return;
	}

IL_0082:
	{
		RuntimeObject * L_8 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_00a1;
		}
	}
	{
		__this->set_type_8(3);
		RuntimeObject * L_9 = ___obj0;
		__this->set_inst_string_6(((String_t*)CastclassSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_00a1:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDCAF96AFD9825EC0819F85E3953F28B330B45CC3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData__ctor_mD516AF324F9FCAEEC106B79C826C68C9D961F95C_RuntimeMethod_var)));
	}
}
// System.Void LitJson.JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_ICollection_CopyTo_m235069CBE7C5092AA958CE69091D7522977F28EA (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_m0DED282A624FBDB45CB4E479D719D96F9AD9EEBB(__this, /*hidden argument*/NULL);
		RuntimeArray * L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeArray *, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IDictionary_Contains_m65589B8679F59227CE1228BE340B6A3C1C194695 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m2ED9C6615DF697504CEFE79CE10B7CE6DD18CE85(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(2 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IDictionary_GetEnumerator_mD5E0D08B1675946E5C0C1ABB6437F23E097A6A67 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOrderedDictionary_tDF6229DEC2DA4F759A019863EF5B5CDF4ECBCDF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IDictionaryEnumerator System.Collections.Specialized.IOrderedDictionary::GetEnumerator() */, IOrderedDictionary_tDF6229DEC2DA4F759A019863EF5B5CDF4ECBCDF8_il2cpp_TypeInfo_var, __this);
		return L_0;
	}
}
// System.Collections.IEnumerator LitJson.JsonData::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IEnumerable_GetEnumerator_m5E80C62532DDA764D8A173728FFB49A6C2B25626 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_m0DED282A624FBDB45CB4E479D719D96F9AD9EEBB(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetBoolean(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetBoolean_m4DD82EBF6A5BE3899DAD8806DCF90A9D2B664DDD (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, bool ___val0, const RuntimeMethod* method)
{
	{
		__this->set_type_8(7);
		bool L_0 = ___val0;
		__this->set_inst_boolean_1(L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetDouble_m9A4CE41CD06DBC7B30C1ED828DF1421B8D7CE336 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, double ___val0, const RuntimeMethod* method)
{
	{
		__this->set_type_8(6);
		double L_0 = ___val0;
		__this->set_inst_double_2(L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetInt_m02CE2F84EB6B8BFB979948FBA7CCD638637B5068 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, int32_t ___val0, const RuntimeMethod* method)
{
	{
		__this->set_type_8(4);
		int32_t L_0 = ___val0;
		__this->set_inst_int_3(L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetLong_m831BF4785F58A01DEB26CF49F3F02ED43673FCDD (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, int64_t ___val0, const RuntimeMethod* method)
{
	{
		__this->set_type_8(5);
		int64_t L_0 = ___val0;
		__this->set_inst_long_4(L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetString_m34FDC3B643C7FA28FFB9EE2517D1A422285F4292 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, String_t* ___val0, const RuntimeMethod* method)
{
	{
		__this->set_type_8(3);
		String_t* L_0 = ___val0;
		__this->set_inst_string_6(L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_IList_Add_m39A16AFAEDB4E8ECC0FE6FB1A397E3505A5C21AA (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		int32_t L_1;
		L_1 = JsonData_Add_mEE0782517E9106FBBC229442D88FD0F80ACBA180(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Clear_mA9FE423E7541925C1153ABEEF908C907E6A4A157 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m05DA339C2A253269235F854A434172393FC9764B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void System.Collections.IList::Clear() */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_Contains_mF50E91414E9CFB90561FC54AC9F8E3B6EE753D49 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m05DA339C2A253269235F854A434172393FC9764B(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(3 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.IList.IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_IList_IndexOf_m175E52276BFEC764B5D807330D33CB2C82EF04F4 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m05DA339C2A253269235F854A434172393FC9764B(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.IList::IndexOf(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Insert_m563A4EF5A2E0E667F7BA00F23A7C5972C6BF4960 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m05DA339C2A253269235F854A434172393FC9764B(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(7 /* System.Void System.Collections.IList::Insert(System.Int32,System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Remove_m68EAB36E126AAC68FDE714B83E463332336E7FD9 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m05DA339C2A253269235F854A434172393FC9764B(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(8 /* System.Void System.Collections.IList::Remove(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_RemoveAt_m2702F0D9A0C8F535EF4AA385C5DD0A4B2CC19C3D (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m05DA339C2A253269235F854A434172393FC9764B(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(9 /* System.Void System.Collections.IList::RemoveAt(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_mFB631887B0547DD1AD7BF8A3CEEB57B776DAF554 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2CE64BF50FBF77752588C3BAC7BF7B57F748837D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m2ED9C6615DF697504CEFE79CE10B7CE6DD18CE85(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = __this->get_object_list_9();
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::GetEnumerator() */, IEnumerable_1_t2CE64BF50FBF77752588C3BAC7BF7B57F748837D_il2cpp_TypeInfo_var, L_1);
		OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309 * L_3 = (OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309 *)il2cpp_codegen_object_new(OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309_il2cpp_TypeInfo_var);
		OrderedDictionaryEnumerator__ctor_m7ED8BFEB079572DE65EBF63E82D39B3CC5B05FC1(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureCollection_m0DED282A624FBDB45CB4E479D719D96F9AD9EEBB (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_array_0();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var));
	}

IL_0018:
	{
		int32_t L_2 = __this->get_type_8();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_inst_object_5();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var));
	}

IL_0030:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5149D2AD92135C0DFA7131CADBFCC669275E96B5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureCollection_m0DED282A624FBDB45CB4E479D719D96F9AD9EEBB_RuntimeMethod_var)));
	}
}
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureDictionary_m2ED9C6615DF697504CEFE79CE10B7CE6DD18CE85 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5AC1BD903FD9178D233A4D3884068C7F775F3026_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m734D27A51E6DC966092BB55127D0EF80065606AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_object_5();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
	}

IL_0018:
	{
		int32_t L_2 = __this->get_type_8();
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6DEED36FFF14869BC9ABC87FCC45B3DA6985BEEC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureDictionary_m2ED9C6615DF697504CEFE79CE10B7CE6DD18CE85_RuntimeMethod_var)));
	}

IL_002e:
	{
		__this->set_type_8(1);
		Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147 * L_4 = (Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147 *)il2cpp_codegen_object_new(Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5AC1BD903FD9178D233A4D3884068C7F775F3026(L_4, /*hidden argument*/Dictionary_2__ctor_m5AC1BD903FD9178D233A4D3884068C7F775F3026_RuntimeMethod_var);
		__this->set_inst_object_5(L_4);
		List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B * L_5 = (List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B *)il2cpp_codegen_object_new(List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B_il2cpp_TypeInfo_var);
		List_1__ctor_m734D27A51E6DC966092BB55127D0EF80065606AB(L_5, /*hidden argument*/List_1__ctor_m734D27A51E6DC966092BB55127D0EF80065606AB_RuntimeMethod_var);
		__this->set_object_list_9(L_5);
		RuntimeObject* L_6 = __this->get_inst_object_5();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
	}
}
// System.Collections.IList LitJson.JsonData::EnsureList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureList_m05DA339C2A253269235F854A434172393FC9764B (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m016B76900A58A6AB2F64BB35FBF164F793B94BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_array_0();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
	}

IL_0018:
	{
		int32_t L_2 = __this->get_type_8();
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6BAB8F53EE6BDD0369569E27A174F474EA370914)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureList_m05DA339C2A253269235F854A434172393FC9764B_RuntimeMethod_var)));
	}

IL_002e:
	{
		__this->set_type_8(2);
		List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89 * L_4 = (List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89 *)il2cpp_codegen_object_new(List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89_il2cpp_TypeInfo_var);
		List_1__ctor_m016B76900A58A6AB2F64BB35FBF164F793B94BCF(L_4, /*hidden argument*/List_1__ctor_m016B76900A58A6AB2F64BB35FBF164F793B94BCF_RuntimeMethod_var);
		__this->set_inst_array_0(L_4);
		RuntimeObject* L_5 = __this->get_inst_array_0();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
	}
}
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * JsonData_ToJsonData_m7BDC3497CFE14EAA69BDFEE9BD7F6704A507CA6C (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 *)NULL;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___obj0;
		if (!((JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 *)IsInstClass((RuntimeObject*)L_1, JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		return ((JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 *)CastclassClass((RuntimeObject*)L_2, JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638_il2cpp_TypeInfo_var));
	}

IL_001a:
	{
		RuntimeObject * L_3 = ___obj0;
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_4 = (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 *)il2cpp_codegen_object_new(JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638_il2cpp_TypeInfo_var);
		JsonData__ctor_mD516AF324F9FCAEEC106B79C826C68C9D961F95C(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 LitJson.JsonData::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_Add_mEE0782517E9106FBBC229442D88FD0F80ACBA180 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_1;
		L_1 = JsonData_ToJsonData_m7BDC3497CFE14EAA69BDFEE9BD7F6704A507CA6C(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		__this->set_json_7((String_t*)NULL);
		RuntimeObject* L_2;
		L_2 = JsonData_EnsureList_m05DA339C2A253269235F854A434172393FC9764B(__this, /*hidden argument*/NULL);
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}
}
// System.Boolean LitJson.JsonData::Equals(LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_Equals_m21C99F8BFBBFB89F97AA950F0A24AEFF52D7458A (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * ___x0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_0 = ___x0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_1 = ___x0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_type_8();
		int32_t L_3 = __this->get_type_8();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		int32_t L_4 = __this->get_type_8();
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_0061;
			}
			case 3:
			{
				goto IL_0073;
			}
			case 4:
			{
				goto IL_0085;
			}
			case 5:
			{
				goto IL_0097;
			}
			case 6:
			{
				goto IL_00a9;
			}
			case 7:
			{
				goto IL_00bb;
			}
		}
	}
	{
		goto IL_00cd;
	}

IL_004d:
	{
		return (bool)1;
	}

IL_004f:
	{
		RuntimeObject* L_6 = __this->get_inst_object_5();
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_7 = ___x0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->get_inst_object_5();
		NullCheck(L_6);
		bool L_9;
		L_9 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_6, L_8);
		return L_9;
	}

IL_0061:
	{
		RuntimeObject* L_10 = __this->get_inst_array_0();
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_11 = ___x0;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->get_inst_array_0();
		NullCheck(L_10);
		bool L_13;
		L_13 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_10, L_12);
		return L_13;
	}

IL_0073:
	{
		String_t* L_14 = __this->get_inst_string_6();
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_15 = ___x0;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_inst_string_6();
		NullCheck(L_14);
		bool L_17;
		L_17 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_14, L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_0085:
	{
		int32_t* L_18 = __this->get_address_of_inst_int_3();
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_19 = ___x0;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_inst_int_3();
		bool L_21;
		L_21 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)L_18, L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_0097:
	{
		int64_t* L_22 = __this->get_address_of_inst_long_4();
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_23 = ___x0;
		NullCheck(L_23);
		int64_t L_24 = L_23->get_inst_long_4();
		bool L_25;
		L_25 = Int64_Equals_m22F1F9E00328D15F2EF44D9A82F185C9A8D0A697((int64_t*)L_22, L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_00a9:
	{
		double* L_26 = __this->get_address_of_inst_double_2();
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_27 = ___x0;
		NullCheck(L_27);
		double L_28 = L_27->get_inst_double_2();
		bool L_29;
		L_29 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)L_26, L_28, /*hidden argument*/NULL);
		return L_29;
	}

IL_00bb:
	{
		bool* L_30 = __this->get_address_of_inst_boolean_1();
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_31 = ___x0;
		NullCheck(L_31);
		bool L_32 = L_31->get_inst_boolean_1();
		bool L_33;
		L_33 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)L_30, L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_00cd:
	{
		return (bool)0;
	}
}
// System.Void LitJson.JsonData::SetJsonType(LitJson.JsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_SetJsonType_m718D710AAE14CBEC4EC83C480F6799A7A4A94C67 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5AC1BD903FD9178D233A4D3884068C7F775F3026_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m016B76900A58A6AB2F64BB35FBF164F793B94BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m734D27A51E6DC966092BB55127D0EF80065606AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_type_8();
		int32_t L_1 = ___type0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		int32_t L_2 = ___type0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0058;
			}
			case 3:
			{
				goto IL_0068;
			}
			case 4:
			{
				goto IL_0074;
			}
			case 5:
			{
				goto IL_0080;
			}
			case 6:
			{
				goto IL_008d;
			}
			case 7:
			{
				goto IL_00a1;
			}
		}
	}
	{
		goto IL_00ad;
	}

IL_0038:
	{
		goto IL_00ad;
	}

IL_003d:
	{
		Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147 * L_3 = (Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147 *)il2cpp_codegen_object_new(Dictionary_2_t3F272FF515D0A9F15D6955C2179316C9393B4147_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5AC1BD903FD9178D233A4D3884068C7F775F3026(L_3, /*hidden argument*/Dictionary_2__ctor_m5AC1BD903FD9178D233A4D3884068C7F775F3026_RuntimeMethod_var);
		__this->set_inst_object_5(L_3);
		List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B * L_4 = (List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B *)il2cpp_codegen_object_new(List_1_t8CB00396A9D886E32C3A1AE447F1CBD37CAB710B_il2cpp_TypeInfo_var);
		List_1__ctor_m734D27A51E6DC966092BB55127D0EF80065606AB(L_4, /*hidden argument*/List_1__ctor_m734D27A51E6DC966092BB55127D0EF80065606AB_RuntimeMethod_var);
		__this->set_object_list_9(L_4);
		goto IL_00ad;
	}

IL_0058:
	{
		List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89 * L_5 = (List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89 *)il2cpp_codegen_object_new(List_1_t955577BDECD5AD3608D6E98C2DF26F9D45A29F89_il2cpp_TypeInfo_var);
		List_1__ctor_m016B76900A58A6AB2F64BB35FBF164F793B94BCF(L_5, /*hidden argument*/List_1__ctor_m016B76900A58A6AB2F64BB35FBF164F793B94BCF_RuntimeMethod_var);
		__this->set_inst_array_0(L_5);
		goto IL_00ad;
	}

IL_0068:
	{
		__this->set_inst_string_6((String_t*)NULL);
		goto IL_00ad;
	}

IL_0074:
	{
		__this->set_inst_int_3(0);
		goto IL_00ad;
	}

IL_0080:
	{
		__this->set_inst_long_4(((int64_t)((int64_t)0)));
		goto IL_00ad;
	}

IL_008d:
	{
		__this->set_inst_double_2((0.0));
		goto IL_00ad;
	}

IL_00a1:
	{
		__this->set_inst_boolean_1((bool)0);
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_6 = ___type0;
		__this->set_type_8(L_6);
		return;
	}
}
// System.String LitJson.JsonData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToString_m49A334A3DF9EDBF01C827A1AF067D412BB8C9C26 (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_type_8();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_007e;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_0084;
			}
			case 3:
			{
				goto IL_005a;
			}
			case 4:
			{
				goto IL_006c;
			}
			case 5:
			{
				goto IL_0048;
			}
			case 6:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_008b;
	}

IL_0030:
	{
		return _stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04;
	}

IL_0036:
	{
		bool* L_2 = __this->get_address_of_inst_boolean_1();
		String_t* L_3;
		L_3 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0048:
	{
		double* L_4 = __this->get_address_of_inst_double_2();
		String_t* L_5;
		L_5 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_005a:
	{
		int32_t* L_6 = __this->get_address_of_inst_int_3();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_006c:
	{
		int64_t* L_8 = __this->get_address_of_inst_long_4();
		String_t* L_9;
		L_9 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_007e:
	{
		return _stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D;
	}

IL_0084:
	{
		String_t* L_10 = __this->get_inst_string_6();
		return L_10;
	}

IL_008b:
	{
		return _stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED;
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
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mBE89028AB5026D03F51C8DE340C5EFB703E16CAB (JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD * __this, int32_t ___token0, Exception_t * ___inner_exception1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserToken_t252EB88B78C715CDB69BAB1C572F4F8B115F4BDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D59E6177FAE880C9EF94663465FEEDCD97D999F);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(ParserToken_t252EB88B78C715CDB69BAB1C572F4F8B115F4BDB_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1D59E6177FAE880C9EF94663465FEEDCD97D999F, L_2, /*hidden argument*/NULL);
		Exception_t * L_4 = ___inner_exception1;
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m0654C739AE3716DA887B41E6D3F0A845D17EB3F5 (JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD * __this, int32_t ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8515553A5B3BDCBB0920E96A5FD0FC34F11C2713);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___c0;
		Il2CppChar L_1 = ((Il2CppChar)((int32_t)((uint16_t)L_0)));
		RuntimeObject * L_2 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral8515553A5B3BDCBB0920E96A5FD0FC34F11C2713, L_2, /*hidden argument*/NULL);
		ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m071981460543EBEED1E6349E9E01E1ACC35A7638 (JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F(__this, L_0, /*hidden argument*/NULL);
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
// System.Void LitJson.JsonMapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper__cctor_m461B4C0E738519EE51BFA7E30BF12AC9FCD0A3AF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0E046849653A31D6AB3C1466A7721435C44DE38E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1EB30357056C3276229C8E3B3DAD5ED1FF97DF16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m847855B1828C20D7C0FFCA651C0FBA2023A3754C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m84ABEBF9BDC358A171BD8EC1C3264D9261C72EC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEDC07215238F2D6559389577FFD9A3F3FE3E726A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_array_metadata_lock_7(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_1, /*hidden argument*/NULL);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_conv_ops_lock_9(L_1);
		RuntimeObject * L_2 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_2, /*hidden argument*/NULL);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_object_metadata_lock_11(L_2);
		RuntimeObject * L_3 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_3, /*hidden argument*/NULL);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_type_properties_lock_13(L_3);
		RuntimeObject * L_4 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_4, /*hidden argument*/NULL);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_static_writer_lock_15(L_4);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_max_nesting_depth_0(((int32_t)100));
		Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85 * L_5 = (Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85 *)il2cpp_codegen_object_new(Dictionary_2_t6D973310578BE864B046FA7750EDE600683BAF85_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m847855B1828C20D7C0FFCA651C0FBA2023A3754C(L_5, /*hidden argument*/Dictionary_2__ctor_m847855B1828C20D7C0FFCA651C0FBA2023A3754C_RuntimeMethod_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_array_metadata_6(L_5);
		Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A * L_6 = (Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A *)il2cpp_codegen_object_new(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762(L_6, /*hidden argument*/Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762_RuntimeMethod_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_conv_ops_8(L_6);
		Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428 * L_7 = (Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428 *)il2cpp_codegen_object_new(Dictionary_2_t7BFD3BA905A15D6AB7632E5860F8D898A9909428_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m84ABEBF9BDC358A171BD8EC1C3264D9261C72EC1(L_7, /*hidden argument*/Dictionary_2__ctor_m84ABEBF9BDC358A171BD8EC1C3264D9261C72EC1_RuntimeMethod_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_object_metadata_10(L_7);
		Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF * L_8 = (Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF *)il2cpp_codegen_object_new(Dictionary_2_t67C326C2B625A43A0E23C63450ED5279E4C130AF_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1EB30357056C3276229C8E3B3DAD5ED1FF97DF16(L_8, /*hidden argument*/Dictionary_2__ctor_m1EB30357056C3276229C8E3B3DAD5ED1FF97DF16_RuntimeMethod_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_type_properties_12(L_8);
		JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * L_9 = (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 *)il2cpp_codegen_object_new(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m1587492D555AF45E3F28C3FBC3CC0F731E6DF7CE(L_9, /*hidden argument*/NULL);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_static_writer_14(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * L_10;
		L_10 = DateTimeFormatInfo_get_InvariantInfo_mF82BD33E66FDFBF82C9E9F58CDA7DDE568401F4B(/*hidden argument*/NULL);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_datetime_format_1(L_10);
		Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275 * L_11 = (Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275 *)il2cpp_codegen_object_new(Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m0E046849653A31D6AB3C1466A7721435C44DE38E(L_11, /*hidden argument*/Dictionary_2__ctor_m0E046849653A31D6AB3C1466A7721435C44DE38E_RuntimeMethod_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_base_exporters_table_2(L_11);
		Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275 * L_12 = (Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275 *)il2cpp_codegen_object_new(Dictionary_2_tF4357B0E81B110EE633DA7D443D609CC9A516275_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m0E046849653A31D6AB3C1466A7721435C44DE38E(L_12, /*hidden argument*/Dictionary_2__ctor_m0E046849653A31D6AB3C1466A7721435C44DE38E_RuntimeMethod_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_custom_exporters_table_3(L_12);
		Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7 * L_13 = (Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7 *)il2cpp_codegen_object_new(Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEDC07215238F2D6559389577FFD9A3F3FE3E726A(L_13, /*hidden argument*/Dictionary_2__ctor_mEDC07215238F2D6559389577FFD9A3F3FE3E726A_RuntimeMethod_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_base_importers_table_4(L_13);
		Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7 * L_14 = (Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7 *)il2cpp_codegen_object_new(Dictionary_2_t8022F8110AE067407208DCBA39073932C51A18D7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEDC07215238F2D6559389577FFD9A3F3FE3E726A(L_14, /*hidden argument*/Dictionary_2__ctor_mEDC07215238F2D6559389577FFD9A3F3FE3E726A_RuntimeMethod_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_custom_importers_table_5(L_14);
		JsonMapper_RegisterBaseExporters_mCF2BA649F1FEAB4F371813C6A60AAD7496C2FB98(/*hidden argument*/NULL);
		JsonMapper_RegisterBaseImporters_mA2C90264A050DBE01D27A9FFCCC367B397227174(/*hidden argument*/NULL);
		return;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ReadValue_mCD397D87290F5FB6E4BCA0ACA01281CD90F9D875 (WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * ___factory0, JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * ___reader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonWrapper_tAF8FE684DA45754CAF52744B179F03B42536F310_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_0 = ___reader1;
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonReader_Read_m4F676359E5B9EA9BACAC8D46F1DDE66F32D00D89(L_0, /*hidden argument*/NULL);
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_2 = ___reader1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = JsonReader_get_Token_m2B10EA1A7092905DF573A861AD4AAA4339CF35E1_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_0020;
		}
	}
	{
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_4 = ___reader1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = JsonReader_get_Token_m2B10EA1A7092905DF573A861AD4AAA4339CF35E1_inline(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0022;
		}
	}

IL_0020:
	{
		return (RuntimeObject*)NULL;
	}

IL_0022:
	{
		WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * L_6 = ___factory0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = WrapperFactory_Invoke_m1F9972AF5C88AD99C3F5E144A46115DD1A520866(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_8 = ___reader1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = JsonReader_get_Token_m2B10EA1A7092905DF573A861AD4AAA4339CF35E1_inline(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_10 = V_0;
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_11 = ___reader1;
		NullCheck(L_11);
		RuntimeObject * L_12;
		L_12 = JsonReader_get_Value_m537D1C8B88323E383A49CC60518C1C1B5D2683B6_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void LitJson.IJsonWrapper::SetString(System.String) */, IJsonWrapper_tAF8FE684DA45754CAF52744B179F03B42536F310_il2cpp_TypeInfo_var, L_10, ((String_t*)CastclassSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_13 = V_0;
		return L_13;
	}

IL_0049:
	{
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_14 = ___reader1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = JsonReader_get_Token_m2B10EA1A7092905DF573A861AD4AAA4339CF35E1_inline(L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_16 = V_0;
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_17 = ___reader1;
		NullCheck(L_17);
		RuntimeObject * L_18;
		L_18 = JsonReader_get_Value_m537D1C8B88323E383A49CC60518C1C1B5D2683B6_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< double >::Invoke(1 /* System.Void LitJson.IJsonWrapper::SetDouble(System.Double) */, IJsonWrapper_tAF8FE684DA45754CAF52744B179F03B42536F310_il2cpp_TypeInfo_var, L_16, ((*(double*)((double*)UnBox(L_18, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_19 = V_0;
		return L_19;
	}

IL_0068:
	{
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_20 = ___reader1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = JsonReader_get_Token_m2B10EA1A7092905DF573A861AD4AAA4339CF35E1_inline(L_20, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)6))))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject* L_22 = V_0;
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_23 = ___reader1;
		NullCheck(L_23);
		RuntimeObject * L_24;
		L_24 = JsonReader_get_Value_m537D1C8B88323E383A49CC60518C1C1B5D2683B6_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void LitJson.IJsonWrapper::SetInt(System.Int32) */, IJsonWrapper_tAF8FE684DA45754CAF52744B179F03B42536F310_il2cpp_TypeInfo_var, L_22, ((*(int32_t*)((int32_t*)UnBox(L_24, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_25 = V_0;
		return L_25;
	}

IL_0087:
	{
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_26 = ___reader1;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = JsonReader_get_Token_m2B10EA1A7092905DF573A861AD4AAA4339CF35E1_inline(L_26, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)7))))
		{
			goto IL_00a6;
		}
	}
	{
		RuntimeObject* L_28 = V_0;
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_29 = ___reader1;
		NullCheck(L_29);
		RuntimeObject * L_30;
		L_30 = JsonReader_get_Value_m537D1C8B88323E383A49CC60518C1C1B5D2683B6_inline(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		InterfaceActionInvoker1< int64_t >::Invoke(4 /* System.Void LitJson.IJsonWrapper::SetLong(System.Int64) */, IJsonWrapper_tAF8FE684DA45754CAF52744B179F03B42536F310_il2cpp_TypeInfo_var, L_28, ((*(int64_t*)((int64_t*)UnBox(L_30, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_31 = V_0;
		return L_31;
	}

IL_00a6:
	{
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_32 = ___reader1;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = JsonReader_get_Token_m2B10EA1A7092905DF573A861AD4AAA4339CF35E1_inline(L_32, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeObject* L_34 = V_0;
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_35 = ___reader1;
		NullCheck(L_35);
		RuntimeObject * L_36;
		L_36 = JsonReader_get_Value_m537D1C8B88323E383A49CC60518C1C1B5D2683B6_inline(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void LitJson.IJsonWrapper::SetBoolean(System.Boolean) */, IJsonWrapper_tAF8FE684DA45754CAF52744B179F03B42536F310_il2cpp_TypeInfo_var, L_34, ((*(bool*)((bool*)UnBox(L_36, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_37 = V_0;
		return L_37;
	}

IL_00c6:
	{
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_38 = ___reader1;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = JsonReader_get_Token_m2B10EA1A7092905DF573A861AD4AAA4339CF35E1_inline(L_38, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)4))))
		{
			goto IL_010a;
		}
	}
	{
		RuntimeObject* L_40 = V_0;
		NullCheck(L_40);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void LitJson.IJsonWrapper::SetJsonType(LitJson.JsonType) */, IJsonWrapper_tAF8FE684DA45754CAF52744B179F03B42536F310_il2cpp_TypeInfo_var, L_40, 2);
	}

IL_00d9:
	{
		WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * L_41 = ___factory0;
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_42 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = JsonMapper_ReadValue_mCD397D87290F5FB6E4BCA0ACA01281CD90F9D875(L_41, L_42, /*hidden argument*/NULL);
		V_1 = L_43;
		RuntimeObject* L_44 = V_1;
		if (L_44)
		{
			goto IL_00f8;
		}
	}
	{
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_45 = ___reader1;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = JsonReader_get_Token_m2B10EA1A7092905DF573A861AD4AAA4339CF35E1_inline(L_45, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_46) == ((uint32_t)5))))
		{
			goto IL_00f8;
		}
	}
	{
		goto IL_0105;
	}

IL_00f8:
	{
		RuntimeObject* L_47 = V_0;
		RuntimeObject* L_48 = V_1;
		NullCheck(L_47);
		int32_t L_49;
		L_49 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_47, L_48);
		goto IL_00d9;
	}

IL_0105:
	{
		goto IL_0154;
	}

IL_010a:
	{
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_50 = ___reader1;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = JsonReader_get_Token_m2B10EA1A7092905DF573A861AD4AAA4339CF35E1_inline(L_50, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_51) == ((uint32_t)1))))
		{
			goto IL_0154;
		}
	}
	{
		RuntimeObject* L_52 = V_0;
		NullCheck(L_52);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void LitJson.IJsonWrapper::SetJsonType(LitJson.JsonType) */, IJsonWrapper_tAF8FE684DA45754CAF52744B179F03B42536F310_il2cpp_TypeInfo_var, L_52, 1);
	}

IL_011d:
	{
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_53 = ___reader1;
		NullCheck(L_53);
		bool L_54;
		L_54 = JsonReader_Read_m4F676359E5B9EA9BACAC8D46F1DDE66F32D00D89(L_53, /*hidden argument*/NULL);
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_55 = ___reader1;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = JsonReader_get_Token_m2B10EA1A7092905DF573A861AD4AAA4339CF35E1_inline(L_55, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_56) == ((uint32_t)3))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0154;
	}

IL_0135:
	{
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_57 = ___reader1;
		NullCheck(L_57);
		RuntimeObject * L_58;
		L_58 = JsonReader_get_Value_m537D1C8B88323E383A49CC60518C1C1B5D2683B6_inline(L_57, /*hidden argument*/NULL);
		V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_58, String_t_il2cpp_TypeInfo_var));
		RuntimeObject* L_59 = V_0;
		String_t* L_60 = V_2;
		WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * L_61 = ___factory0;
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_62 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_63;
		L_63 = JsonMapper_ReadValue_mCD397D87290F5FB6E4BCA0ACA01281CD90F9D875(L_61, L_62, /*hidden argument*/NULL);
		NullCheck(L_59);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_59, L_60, L_63);
		goto IL_011d;
	}

IL_0154:
	{
		RuntimeObject* L_64 = V_0;
		return L_64;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_mCF2BA649F1FEAB4F371813C6A60AAD7496C2FB98 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tB4EFFF53133FC3E3B245FDCF18E295FD95BF0C47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__1_m78FECA6DE17A128DD3EB95F0FFFDC1B4DB760272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__2_m059CF8D5A6AC3F67AE7C1B9DC8400E475E556067_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__3_mC8B2C06C76599947A2EC274E935139A001003BE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__4_m567345F89A974CE9981644D39EAF13E43C37AEF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__5_m25C31319960036B038199C9CFD0D4947437E750E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__6_mC8AC6B19C55CD340FAA36BE63006DCC0D3338996_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__7_m22E97A2F2EFB34701598E7DCFD621B5FDA91C52B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__8_m1091F51A3C1CFBAEF0DC0F4281664F4C40EE3BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__9_m59EE388391286467AD09C72F5A55C452D9F103D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Type_t * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Type_t * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Type_t * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Type_t * G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Type_t * G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Type_t * G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	Type_t * G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	Type_t * G_B10_0 = NULL;
	RuntimeObject* G_B10_1 = NULL;
	Type_t * G_B9_0 = NULL;
	RuntimeObject* G_B9_1 = NULL;
	Type_t * G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	Type_t * G_B11_0 = NULL;
	RuntimeObject* G_B11_1 = NULL;
	Type_t * G_B14_0 = NULL;
	RuntimeObject* G_B14_1 = NULL;
	Type_t * G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	Type_t * G_B16_0 = NULL;
	RuntimeObject* G_B16_1 = NULL;
	Type_t * G_B15_0 = NULL;
	RuntimeObject* G_B15_1 = NULL;
	Type_t * G_B18_0 = NULL;
	RuntimeObject* G_B18_1 = NULL;
	Type_t * G_B17_0 = NULL;
	RuntimeObject* G_B17_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_3 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_16();
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0027;
		}
	}
	{
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_4 = (ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D *)il2cpp_codegen_object_new(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m5CC07979B36E516693CDC5E433061B0FE6628CA5(L_4, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__1_m78FECA6DE17A128DD3EB95F0FFFDC1B4DB760272_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_16(L_4);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_5 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_16();
		NullCheck(G_B2_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tB4EFFF53133FC3E3B245FDCF18E295FD95BF0C47_il2cpp_TypeInfo_var, G_B2_1, G_B2_0, L_5);
		RuntimeObject* L_6 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_9 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache2_17();
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_9)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_0058;
		}
	}
	{
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_10 = (ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D *)il2cpp_codegen_object_new(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m5CC07979B36E516693CDC5E433061B0FE6628CA5(L_10, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__2_m059CF8D5A6AC3F67AE7C1B9DC8400E475E556067_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache2_17(L_10);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_11 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache2_17();
		NullCheck(G_B4_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tB4EFFF53133FC3E3B245FDCF18E295FD95BF0C47_il2cpp_TypeInfo_var, G_B4_1, G_B4_0, L_11);
		RuntimeObject* L_12 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_15 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache3_18();
		G_B5_0 = L_14;
		G_B5_1 = L_12;
		if (L_15)
		{
			G_B6_0 = L_14;
			G_B6_1 = L_12;
			goto IL_0089;
		}
	}
	{
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_16 = (ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D *)il2cpp_codegen_object_new(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m5CC07979B36E516693CDC5E433061B0FE6628CA5(L_16, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__3_mC8B2C06C76599947A2EC274E935139A001003BE5_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache3_18(L_16);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
	}

IL_0089:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_17 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache3_18();
		NullCheck(G_B6_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tB4EFFF53133FC3E3B245FDCF18E295FD95BF0C47_il2cpp_TypeInfo_var, G_B6_1, G_B6_0, L_17);
		RuntimeObject* L_18 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_21 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache4_19();
		G_B7_0 = L_20;
		G_B7_1 = L_18;
		if (L_21)
		{
			G_B8_0 = L_20;
			G_B8_1 = L_18;
			goto IL_00ba;
		}
	}
	{
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_22 = (ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D *)il2cpp_codegen_object_new(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m5CC07979B36E516693CDC5E433061B0FE6628CA5(L_22, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__4_m567345F89A974CE9981644D39EAF13E43C37AEF6_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache4_19(L_22);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
	}

IL_00ba:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_23 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache4_19();
		NullCheck(G_B8_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tB4EFFF53133FC3E3B245FDCF18E295FD95BF0C47_il2cpp_TypeInfo_var, G_B8_1, G_B8_0, L_23);
		RuntimeObject* L_24 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_25, /*hidden argument*/NULL);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_27 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache5_20();
		G_B9_0 = L_26;
		G_B9_1 = L_24;
		if (L_27)
		{
			G_B10_0 = L_26;
			G_B10_1 = L_24;
			goto IL_00eb;
		}
	}
	{
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_28 = (ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D *)il2cpp_codegen_object_new(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m5CC07979B36E516693CDC5E433061B0FE6628CA5(L_28, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__5_m25C31319960036B038199C9CFD0D4947437E750E_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache5_20(L_28);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
	}

IL_00eb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_29 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache5_20();
		NullCheck(G_B10_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tB4EFFF53133FC3E3B245FDCF18E295FD95BF0C47_il2cpp_TypeInfo_var, G_B10_1, G_B10_0, L_29);
		RuntimeObject* L_30 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_31, /*hidden argument*/NULL);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_33 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache6_21();
		G_B11_0 = L_32;
		G_B11_1 = L_30;
		if (L_33)
		{
			G_B12_0 = L_32;
			G_B12_1 = L_30;
			goto IL_011c;
		}
	}
	{
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_34 = (ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D *)il2cpp_codegen_object_new(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m5CC07979B36E516693CDC5E433061B0FE6628CA5(L_34, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__6_mC8AC6B19C55CD340FAA36BE63006DCC0D3338996_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache6_21(L_34);
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
	}

IL_011c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_35 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache6_21();
		NullCheck(G_B12_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tB4EFFF53133FC3E3B245FDCF18E295FD95BF0C47_il2cpp_TypeInfo_var, G_B12_1, G_B12_0, L_35);
		RuntimeObject* L_36 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_37, /*hidden argument*/NULL);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_39 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache7_22();
		G_B13_0 = L_38;
		G_B13_1 = L_36;
		if (L_39)
		{
			G_B14_0 = L_38;
			G_B14_1 = L_36;
			goto IL_014d;
		}
	}
	{
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_40 = (ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D *)il2cpp_codegen_object_new(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m5CC07979B36E516693CDC5E433061B0FE6628CA5(L_40, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__7_m22E97A2F2EFB34701598E7DCFD621B5FDA91C52B_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache7_22(L_40);
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
	}

IL_014d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_41 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache7_22();
		NullCheck(G_B14_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tB4EFFF53133FC3E3B245FDCF18E295FD95BF0C47_il2cpp_TypeInfo_var, G_B14_1, G_B14_0, L_41);
		RuntimeObject* L_42 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_43, /*hidden argument*/NULL);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_45 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache8_23();
		G_B15_0 = L_44;
		G_B15_1 = L_42;
		if (L_45)
		{
			G_B16_0 = L_44;
			G_B16_1 = L_42;
			goto IL_017e;
		}
	}
	{
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_46 = (ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D *)il2cpp_codegen_object_new(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m5CC07979B36E516693CDC5E433061B0FE6628CA5(L_46, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__8_m1091F51A3C1CFBAEF0DC0F4281664F4C40EE3BF2_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache8_23(L_46);
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
	}

IL_017e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_47 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache8_23();
		NullCheck(G_B16_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tB4EFFF53133FC3E3B245FDCF18E295FD95BF0C47_il2cpp_TypeInfo_var, G_B16_1, G_B16_0, L_47);
		RuntimeObject* L_48 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_49, /*hidden argument*/NULL);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_51 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache9_24();
		G_B17_0 = L_50;
		G_B17_1 = L_48;
		if (L_51)
		{
			G_B18_0 = L_50;
			G_B18_1 = L_48;
			goto IL_01af;
		}
	}
	{
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_52 = (ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D *)il2cpp_codegen_object_new(ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m5CC07979B36E516693CDC5E433061B0FE6628CA5(L_52, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__9_m59EE388391286467AD09C72F5A55C452D9F103D8_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache9_24(L_52);
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
	}

IL_01af:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * L_53 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache9_24();
		NullCheck(G_B18_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t4C6735C161C29F4F8D3AAA3A910B6843DE75595D * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tB4EFFF53133FC3E3B245FDCF18E295FD95BF0C47_il2cpp_TypeInfo_var, G_B18_1, G_B18_0, L_53);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_mA2C90264A050DBE01D27A9FFCCC367B397227174 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__10_m045363AB8189314A74B147A9FC610C7114C0ED2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__11_mBF242A2BD6D887DB79D1893AF0455D904E9C70F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__12_mC2BFA48C517D1097B6ACB296968A7CA6AA7F134D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__13_m3EC23BBC9D1CD7DEC535F71C5D65D15368149E4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__14_mA3ED35F2D29FBE3774434A898AB2058031A454BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__15_m0248C256953846D7EEB5FDDAB829B4EB985310F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__A_m583917D27DD29E26D38EE451649E993FC62AD94E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__B_mD92F95F233AA32B30543CB20D20902FC983696B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__C_mF2E5C723A04777A67BD4C357B53BA1EE7FE66648_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__D_mC670D536C026F0450EC837BBA806394A9E3EF182_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__E_mA8E8CDE96125B82ACFACD6E55D5A92A8FD02C9B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__F_m1A10A80EF7EF042EE66C7DCF7553BD8EA20037EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_0 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheA_25();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_1 = (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA *)il2cpp_codegen_object_new(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mF4474A471B7A7E315F917CBFEE10926DBFB5788A(L_1, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__A_m583917D27DD29E26D38EE451649E993FC62AD94E_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cacheA_25(L_1);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_2 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheA_25();
		V_0 = L_2;
		RuntimeObject* L_3 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_8 = V_0;
		JsonMapper_RegisterImporter_mBD38C80131FE037D944E61BF6A60C6097481E717(L_3, L_5, L_7, L_8, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_9 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheB_26();
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_10 = (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA *)il2cpp_codegen_object_new(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mF4474A471B7A7E315F917CBFEE10926DBFB5788A(L_10, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__B_mD92F95F233AA32B30543CB20D20902FC983696B0_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cacheB_26(L_10);
	}

IL_0055:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_11 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheB_26();
		V_0 = L_11;
		RuntimeObject* L_12 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var) };
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_17 = V_0;
		JsonMapper_RegisterImporter_mBD38C80131FE037D944E61BF6A60C6097481E717(L_12, L_14, L_16, L_17, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_18 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheC_27();
		if (L_18)
		{
			goto IL_0092;
		}
	}
	{
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_19 = (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA *)il2cpp_codegen_object_new(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mF4474A471B7A7E315F917CBFEE10926DBFB5788A(L_19, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__C_mF2E5C723A04777A67BD4C357B53BA1EE7FE66648_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cacheC_27(L_19);
	}

IL_0092:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_20 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheC_27();
		V_0 = L_20;
		RuntimeObject* L_21 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_22, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_24 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		Type_t * L_25;
		L_25 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_24, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_26 = V_0;
		JsonMapper_RegisterImporter_mBD38C80131FE037D944E61BF6A60C6097481E717(L_21, L_23, L_25, L_26, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_27 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheD_28();
		if (L_27)
		{
			goto IL_00cf;
		}
	}
	{
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_28 = (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA *)il2cpp_codegen_object_new(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mF4474A471B7A7E315F917CBFEE10926DBFB5788A(L_28, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__D_mC670D536C026F0450EC837BBA806394A9E3EF182_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cacheD_28(L_28);
	}

IL_00cf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_29 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheD_28();
		V_0 = L_29;
		RuntimeObject* L_30 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_31, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_33 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		Type_t * L_34;
		L_34 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_33, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_35 = V_0;
		JsonMapper_RegisterImporter_mBD38C80131FE037D944E61BF6A60C6097481E717(L_30, L_32, L_34, L_35, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_36 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheE_29();
		if (L_36)
		{
			goto IL_010c;
		}
	}
	{
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_37 = (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA *)il2cpp_codegen_object_new(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mF4474A471B7A7E315F917CBFEE10926DBFB5788A(L_37, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__E_mA8E8CDE96125B82ACFACD6E55D5A92A8FD02C9B5_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cacheE_29(L_37);
	}

IL_010c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_38 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheE_29();
		V_0 = L_38;
		RuntimeObject* L_39 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_40 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_41;
		L_41 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_40, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_42 = { reinterpret_cast<intptr_t> (UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var) };
		Type_t * L_43;
		L_43 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_42, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_44 = V_0;
		JsonMapper_RegisterImporter_mBD38C80131FE037D944E61BF6A60C6097481E717(L_39, L_41, L_43, L_44, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_45 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheF_30();
		if (L_45)
		{
			goto IL_0149;
		}
	}
	{
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_46 = (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA *)il2cpp_codegen_object_new(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mF4474A471B7A7E315F917CBFEE10926DBFB5788A(L_46, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__F_m1A10A80EF7EF042EE66C7DCF7553BD8EA20037EA_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cacheF_30(L_46);
	}

IL_0149:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_47 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheF_30();
		V_0 = L_47;
		RuntimeObject* L_48 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_49, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_51 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_52;
		L_52 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_51, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_53 = V_0;
		JsonMapper_RegisterImporter_mBD38C80131FE037D944E61BF6A60C6097481E717(L_48, L_50, L_52, L_53, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_54 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache10_31();
		if (L_54)
		{
			goto IL_0186;
		}
	}
	{
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_55 = (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA *)il2cpp_codegen_object_new(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mF4474A471B7A7E315F917CBFEE10926DBFB5788A(L_55, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__10_m045363AB8189314A74B147A9FC610C7114C0ED2A_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache10_31(L_55);
	}

IL_0186:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_56 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache10_31();
		V_0 = L_56;
		RuntimeObject* L_57 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_58 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_59;
		L_59 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_58, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_60 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_61;
		L_61 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_60, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_62 = V_0;
		JsonMapper_RegisterImporter_mBD38C80131FE037D944E61BF6A60C6097481E717(L_57, L_59, L_61, L_62, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_63 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache11_32();
		if (L_63)
		{
			goto IL_01c3;
		}
	}
	{
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_64 = (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA *)il2cpp_codegen_object_new(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mF4474A471B7A7E315F917CBFEE10926DBFB5788A(L_64, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__11_mBF242A2BD6D887DB79D1893AF0455D904E9C70F0_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache11_32(L_64);
	}

IL_01c3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_65 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache11_32();
		V_0 = L_65;
		RuntimeObject* L_66 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_67 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_68;
		L_68 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_67, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_69 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		Type_t * L_70;
		L_70 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_69, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_71 = V_0;
		JsonMapper_RegisterImporter_mBD38C80131FE037D944E61BF6A60C6097481E717(L_66, L_68, L_70, L_71, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_72 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache12_33();
		if (L_72)
		{
			goto IL_0200;
		}
	}
	{
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_73 = (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA *)il2cpp_codegen_object_new(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mF4474A471B7A7E315F917CBFEE10926DBFB5788A(L_73, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__12_mC2BFA48C517D1097B6ACB296968A7CA6AA7F134D_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache12_33(L_73);
	}

IL_0200:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_74 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache12_33();
		V_0 = L_74;
		RuntimeObject* L_75 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_76 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_77;
		L_77 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_76, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_78 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		Type_t * L_79;
		L_79 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_78, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_80 = V_0;
		JsonMapper_RegisterImporter_mBD38C80131FE037D944E61BF6A60C6097481E717(L_75, L_77, L_79, L_80, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_81 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache13_34();
		if (L_81)
		{
			goto IL_023d;
		}
	}
	{
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_82 = (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA *)il2cpp_codegen_object_new(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mF4474A471B7A7E315F917CBFEE10926DBFB5788A(L_82, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__13_m3EC23BBC9D1CD7DEC535F71C5D65D15368149E4E_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache13_34(L_82);
	}

IL_023d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_83 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache13_34();
		V_0 = L_83;
		RuntimeObject* L_84 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_85 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_86;
		L_86 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_85, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_87 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_88;
		L_88 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_87, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_89 = V_0;
		JsonMapper_RegisterImporter_mBD38C80131FE037D944E61BF6A60C6097481E717(L_84, L_86, L_88, L_89, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_90 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache14_35();
		if (L_90)
		{
			goto IL_027a;
		}
	}
	{
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_91 = (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA *)il2cpp_codegen_object_new(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mF4474A471B7A7E315F917CBFEE10926DBFB5788A(L_91, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__14_mA3ED35F2D29FBE3774434A898AB2058031A454BB_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache14_35(L_91);
	}

IL_027a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_92 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache14_35();
		V_0 = L_92;
		RuntimeObject* L_93 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_94 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_95;
		L_95 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_94, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_96 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		Type_t * L_97;
		L_97 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_96, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_98 = V_0;
		JsonMapper_RegisterImporter_mBD38C80131FE037D944E61BF6A60C6097481E717(L_93, L_95, L_97, L_98, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_99 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache15_36();
		if (L_99)
		{
			goto IL_02b7;
		}
	}
	{
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_100 = (ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA *)il2cpp_codegen_object_new(ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mF4474A471B7A7E315F917CBFEE10926DBFB5788A(L_100, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__15_m0248C256953846D7EEB5FDDAB829B4EB985310F6_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache15_36(L_100);
	}

IL_02b7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_101 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache15_36();
		V_0 = L_101;
		RuntimeObject* L_102 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_103 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_104;
		L_104 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_103, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_105 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		Type_t * L_106;
		L_106 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_105, /*hidden argument*/NULL);
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_107 = V_0;
		JsonMapper_RegisterImporter_mBD38C80131FE037D944E61BF6A60C6097481E717(L_102, L_104, L_106, L_107, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_mBD38C80131FE037D944E61BF6A60C6097481E717 (RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * ___importer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB463BFA2B5186F7E4AD72B2E2447F2FEA179FD49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t76532162803D4EE7D7266D2A01D85170EB72FE34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tB9957995D5365C5A080D244D63E4B77B6C4D363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___table0;
		Type_t * L_1 = ___json_type1;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(!0) */, IDictionary_2_tB9957995D5365C5A080D244D63E4B77B6C4D363D_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_3 = ___table0;
		Type_t * L_4 = ___json_type1;
		Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67 * L_5 = (Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67 *)il2cpp_codegen_object_new(Dictionary_2_t8BE82B7618BFBE15E58DA0FAD70D567F9796DF67_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB463BFA2B5186F7E4AD72B2E2447F2FEA179FD49(L_5, /*hidden argument*/Dictionary_2__ctor_mB463BFA2B5186F7E4AD72B2E2447F2FEA179FD49_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< Type_t *, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Add(!0,!1) */, IDictionary_2_tB9957995D5365C5A080D244D63E4B77B6C4D363D_il2cpp_TypeInfo_var, L_3, L_4, L_5);
	}

IL_0018:
	{
		RuntimeObject* L_6 = ___table0;
		Type_t * L_7 = ___json_type1;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_tB9957995D5365C5A080D244D63E4B77B6C4D363D_il2cpp_TypeInfo_var, L_6, L_7);
		Type_t * L_9 = ___value_type2;
		ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * L_10 = ___importer3;
		NullCheck(L_8);
		InterfaceActionInvoker2< Type_t *, ImporterFunc_t441703C65389D37F76E6D96975B458E69557E8DA * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::set_Item(!0,!1) */, IDictionary_2_t76532162803D4EE7D7266D2A01D85170EB72FE34_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		return;
	}
}
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * JsonMapper_ToObject_mB961FCAE77092808A5C6D1AFC94A27393BBE965C (String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CToObjectU3Em__18_m7397CB8E727C20B80986BAADB146E809BF96213F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * L_0 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache18_37();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * L_1 = (WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 *)il2cpp_codegen_object_new(WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5_il2cpp_TypeInfo_var);
		WrapperFactory__ctor_mE5D4DB3B83CC881E6C34F1B0466FE973B9F4EA9E(L_1, NULL, (intptr_t)((intptr_t)JsonMapper_U3CToObjectU3Em__18_m7397CB8E727C20B80986BAADB146E809BF96213F_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache18_37(L_1);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * L_2 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache18_37();
		String_t* L_3 = ___json0;
		RuntimeObject* L_4;
		L_4 = JsonMapper_ToWrapper_m154CC7F127F8550F8B809F995579750055977AC0(L_2, L_3, /*hidden argument*/NULL);
		return ((JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 *)CastclassClass((RuntimeObject*)L_4, JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638_il2cpp_TypeInfo_var));
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToWrapper_m154CC7F127F8550F8B809F995579750055977AC0 (WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * ___factory0, String_t* ___json1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * V_0 = NULL;
	{
		String_t* L_0 = ___json1;
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_1 = (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 *)il2cpp_codegen_object_new(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_il2cpp_TypeInfo_var);
		JsonReader__ctor_mD2272ABAEDF8B80B60CC7A8D9F0C486ED3EB4CA9(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * L_2 = ___factory0;
		JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = JsonMapper_ReadValue_mCD397D87290F5FB6E4BCA0ACA01281CD90F9D875(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__1(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__1_m78FECA6DE17A128DD3EB95F0FFFDC1B4DB760272 (RuntimeObject * ___obj0, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_m16B237FA188F31A702DA81BB98674A35EF58AE55(((*(uint8_t*)((uint8_t*)UnBox(L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_mAFFA3691C0839CE0EA9595BF475BD74AEDF838F7(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__2(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__2_m059CF8D5A6AC3F67AE7C1B9DC8400E475E556067 (RuntimeObject * ___obj0, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_mE78FB58C17EA12F95381D5C746722C771BD0BFE7(((*(Il2CppChar*)((Il2CppChar*)UnBox(L_1, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m0ECA23C2A07D2DF7425ADFB25CD50D8CDBE3FA22(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__3(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__3_mC8B2C06C76599947A2EC274E935139A001003BE5 (RuntimeObject * ___obj0, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToString_mB3626028A47845ACEE96260B096C91EA42D227B7(((*(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)UnBox(L_1, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))), L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m0ECA23C2A07D2DF7425ADFB25CD50D8CDBE3FA22(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__4(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__4_m567345F89A974CE9981644D39EAF13E43C37AEF6 (RuntimeObject * ___obj0, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m900F19F2E533C68B5B87F65B76ED4195B1804218(L_0, ((*(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)((Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)UnBox(L_1, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__5(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__5_m25C31319960036B038199C9CFD0D4947437E750E (RuntimeObject * ___obj0, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mCCBE073FF85D0B92F38BF63334A42DB5BABA66C4(((*(int8_t*)((int8_t*)UnBox(L_1, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_mAFFA3691C0839CE0EA9595BF475BD74AEDF838F7(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__6(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__6_mC8AC6B19C55CD340FAA36BE63006DCC0D3338996 (RuntimeObject * ___obj0, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_m1E275A2122DD929BC92E25F5E0B72355EA6378DE(((*(int16_t*)((int16_t*)UnBox(L_1, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_mAFFA3691C0839CE0EA9595BF475BD74AEDF838F7(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__7(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__7_m22E97A2F2EFB34701598E7DCFD621B5FDA91C52B (RuntimeObject * ___obj0, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mEE9189C38DB7737892F35EAE2FA183E918DC5C70(((*(uint16_t*)((uint16_t*)UnBox(L_1, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_mAFFA3691C0839CE0EA9595BF475BD74AEDF838F7(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__8(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__8_m1091F51A3C1CFBAEF0DC0F4281664F4C40EE3BF2 (RuntimeObject * ___obj0, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = Convert_ToUInt64_m7E663B2DD9A15D6F486B6C36A43751CBFC922CA4(((*(uint32_t*)((uint32_t*)UnBox(L_1, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_mA776329A365ACB2122D2863D854C08AA2DE3E9E9(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__9(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__9_m59EE388391286467AD09C72F5A55C452D9F103D8 (RuntimeObject * ___obj0, JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_mA776329A365ACB2122D2863D854C08AA2DE3E9E9(L_0, ((*(uint64_t*)((uint64_t*)UnBox(L_1, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__A(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__A_m583917D27DD29E26D38EE451649E993FC62AD94E (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint8_t L_1;
		L_1 = Convert_ToByte_m63C698D88485EB4CAACA12EDFA17B0F894B2A66C(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__B(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__B_mD92F95F233AA32B30543CB20D20902FC983696B0 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = Convert_ToUInt64_m4E6CFEBFC620FD3705A52853CDAECC5F6AB5423F(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__C(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__C_mF2E5C723A04777A67BD4C357B53BA1EE7FE66648 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int8_t L_1;
		L_1 = Convert_ToSByte_m51258423AD29E21302EF937934744AFEAEAEA1F0(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__D(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__D_mC670D536C026F0450EC837BBA806394A9E3EF182 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int16_t L_1;
		L_1 = Convert_ToInt16_m541B626F2506C13399245670B33C0387F4C92241(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__E(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__E_mA8E8CDE96125B82ACFACD6E55D5A92A8FD02C9B5 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint16_t L_1;
		L_1 = Convert_ToUInt16_mD29FE8C80080BE4F1D7FA65A7589B9368150B3DC(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__F(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__F_m1A10A80EF7EF042EE66C7DCF7553BD8EA20037EA (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_mA38C43C03B8030EFE234825FC0D23E8B081089C9(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__10(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__10_m045363AB8189314A74B147A9FC610C7114C0ED2A (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Convert_ToSingle_m370686073463D041429EEBF663C144744BE79668(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__11(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__11_mBF242A2BD6D887DB79D1893AF0455D904E9C70F0 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Convert_ToDouble_m71955B1BEF239B4ECC8868252DA082A38FD1E125(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		double L_2 = L_1;
		RuntimeObject * L_3 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__12(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__12_mC2BFA48C517D1097B6ACB296968A7CA6AA7F134D (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1;
		L_1 = Convert_ToDecimal_mD729925F249653EF8DA34909561747DB117A4644(((*(double*)((double*)UnBox(L_0, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_2 = L_1;
		RuntimeObject * L_3 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__13(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__13_m3EC23BBC9D1CD7DEC535F71C5D65D15368149E4E (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_mD97A8501E8D2A539ADBD77E91629BADE142746E7(((*(int64_t*)((int64_t*)UnBox(L_0, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__14(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__14_mA3ED35F2D29FBE3774434A898AB2058031A454BB (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_1;
		L_1 = Convert_ToChar_mC70BDA16401A56AA014B84C16035328E533B9AF1(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Il2CppChar L_2 = L_1;
		RuntimeObject * L_3 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__15(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__15_m0248C256953846D7EEB5FDDAB829B4EB985310F6 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t93C24D76B40B7688DE37035214021B444FBF7FF2_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_2;
		L_2 = Convert_ToDateTime_m2FA19E10818EF340AF19191C7E01F2632FAF3B2D(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = L_2;
		RuntimeObject * L_4 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__18()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CToObjectU3Em__18_m7397CB8E727C20B80986BAADB146E809BF96213F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_0 = (JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 *)il2cpp_codegen_object_new(JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638_il2cpp_TypeInfo_var);
		JsonData__ctor_m78C4ECE864DF5675D562A0143CDF3B641E338DFB(L_0, /*hidden argument*/NULL);
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
// LitJson.JsonToken LitJson.JsonReader::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_m2B10EA1A7092905DF573A861AD4AAA4339CF35E1 (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_token_14();
		return L_0;
	}
}
// System.Object LitJson.JsonReader::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_get_Value_m537D1C8B88323E383A49CC60518C1C1B5D2683B6 (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_token_value_13();
		return L_0;
	}
}
// System.Void LitJson.JsonReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__cctor_mF86F1F0534B82884EC615BB34CB813C3B9508EC5 (const RuntimeMethod* method)
{
	{
		JsonReader_PopulateParseTable_m2AFDF6F75C89BA5DA42A39D0160CC8CADAB6EEA0(/*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mD2272ABAEDF8B80B60CC7A8D9F0C486ED3EB4CA9 (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, String_t* ___json_text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___json_text0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = (StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)il2cpp_codegen_object_new(StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE(L_1, L_0, /*hidden argument*/NULL);
		JsonReader__ctor_m62E49CBC81810BCA0E583DC53016CF51564A0440(__this, L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m62E49CBC81810BCA0E583DC53016CF51564A0440 (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___reader0, bool ___owned1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_0 = ___reader0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAC83771A00C701043A940F621CC1C765D30D31)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader__ctor_m62E49CBC81810BCA0E583DC53016CF51564A0440_RuntimeMethod_var)));
	}

IL_0017:
	{
		__this->set_parser_in_string_7((bool)0);
		__this->set_parser_return_8((bool)0);
		__this->set_read_started_9((bool)0);
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_2 = (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 *)il2cpp_codegen_object_new(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55_il2cpp_TypeInfo_var);
		Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954(L_2, /*hidden argument*/Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954_RuntimeMethod_var);
		__this->set_automaton_stack_1(L_2);
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_3 = __this->get_automaton_stack_1();
		NullCheck(L_3);
		Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3(L_3, ((int32_t)65553), /*hidden argument*/Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_RuntimeMethod_var);
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_4 = __this->get_automaton_stack_1();
		NullCheck(L_4);
		Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3(L_4, ((int32_t)65543), /*hidden argument*/Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_RuntimeMethod_var);
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_5 = ___reader0;
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_6 = (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 *)il2cpp_codegen_object_new(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		Lexer__ctor_m795FDA09D4F89C9F24D31E898ED6B7AAD847BD1E(L_6, L_5, /*hidden argument*/NULL);
		__this->set_lexer_6(L_6);
		__this->set_end_of_input_5((bool)0);
		__this->set_end_of_json_4((bool)0);
		__this->set_skip_non_members_12((bool)1);
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_7 = ___reader0;
		__this->set_reader_10(L_7);
		bool L_8 = ___owned1;
		__this->set_reader_is_owned_11(L_8);
		return;
	}
}
// System.Void LitJson.JsonReader::PopulateParseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_PopulateParseTable_m2AFDF6F75C89BA5DA42A39D0160CC8CADAB6EEA0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2EBF1ECBC92F80383944B79DCCDA176099E0BF78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D0_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D1_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D2_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D3_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D4_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D5_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D6_6_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D7_7_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D8_8_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D9_9_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2DA_10_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2DB_11_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9 * L_0 = (Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9 *)il2cpp_codegen_object_new(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2EBF1ECBC92F80383944B79DCCDA176099E0BF78(L_0, /*hidden argument*/Dictionary_2__ctor_m2EBF1ECBC92F80383944B79DCCDA176099E0BF78_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_il2cpp_TypeInfo_var);
		((JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_il2cpp_TypeInfo_var))->set_parse_table_0(L_0);
		JsonReader_TableAddRow_m16509139D9874248C8FF23A708A7ECBB675C5262(((int32_t)65548), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)91));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65549));
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65548), ((int32_t)91), L_3, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m16509139D9874248C8FF23A708A7ECBB675C5262(((int32_t)65549), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = L_4;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D0_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_5, L_6, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65549), ((int32_t)34), L_5, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = L_7;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_9 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D1_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_8, L_9, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65549), ((int32_t)91), L_8, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)93));
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65549), ((int32_t)93), L_11, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = L_12;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D2_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65549), ((int32_t)123), L_13, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = L_15;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D3_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_16, L_17, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65549), ((int32_t)65537), L_16, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = L_18;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_20 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D4_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_19, L_20, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65549), ((int32_t)65538), L_19, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = L_21;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_23 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D5_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_22, L_23, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65549), ((int32_t)65539), L_22, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = L_24;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_26 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D6_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_25, L_26, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65549), ((int32_t)65540), L_25, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m16509139D9874248C8FF23A708A7ECBB675C5262(((int32_t)65544), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = L_27;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)123));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = L_28;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65545));
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65544), ((int32_t)123), L_29, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m16509139D9874248C8FF23A708A7ECBB675C5262(((int32_t)65545), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = L_30;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_32 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D7_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_31, L_32, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65545), ((int32_t)34), L_31, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = L_33;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)125));
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65545), ((int32_t)125), L_34, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m16509139D9874248C8FF23A708A7ECBB675C5262(((int32_t)65546), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_36 = L_35;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_37 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D8_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_36, L_37, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65546), ((int32_t)34), L_36, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m16509139D9874248C8FF23A708A7ECBB675C5262(((int32_t)65547), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = L_38;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_40 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2D9_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_39, L_40, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65547), ((int32_t)44), L_39, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_41 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_42 = L_41;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65547), ((int32_t)125), L_42, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m16509139D9874248C8FF23A708A7ECBB675C5262(((int32_t)65552), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44 = L_43;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_45 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2DA_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_44, L_45, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65552), ((int32_t)34), L_44, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m16509139D9874248C8FF23A708A7ECBB675C5262(((int32_t)65543), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_46 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_47 = L_46;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65543), ((int32_t)91), L_47, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_48 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49 = L_48;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65543), ((int32_t)123), L_49, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m16509139D9874248C8FF23A708A7ECBB675C5262(((int32_t)65550), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_50 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_51 = L_50;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65552));
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65550), ((int32_t)34), L_51, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = L_52;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65550), ((int32_t)91), L_53, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_54 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_55 = L_54;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65550), ((int32_t)123), L_55, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_56 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = L_56;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65537));
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65550), ((int32_t)65537), L_57, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_58 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_59 = L_58;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65538));
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65550), ((int32_t)65538), L_59, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_60 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_61 = L_60;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65539));
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65550), ((int32_t)65539), L_61, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_62 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_63 = L_62;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65540));
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65550), ((int32_t)65540), L_63, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m16509139D9874248C8FF23A708A7ECBB675C5262(((int32_t)65551), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_65 = L_64;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_66 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2DB_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_65, L_66, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65551), ((int32_t)44), L_65, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_67 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_68 = L_67;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11(((int32_t)65551), ((int32_t)93), L_68, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddCol_m8F3AF049C9B775BDC581C78F09DE798D610A9E11 (int32_t ___row0, int32_t ___col1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___symbols2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t15C4AE6FA28CC96AF7D1E9949947C8A7AA64B92C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9761D347AC3B18ED56235F4DC19AAEABDBA24999_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_il2cpp_TypeInfo_var))->get_parse_table_0();
		int32_t L_1 = ___row0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(!0) */, IDictionary_2_t9761D347AC3B18ED56235F4DC19AAEABDBA24999_il2cpp_TypeInfo_var, L_0, L_1);
		int32_t L_3 = ___col1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___symbols2;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::Add(!0,!1) */, IDictionary_2_t15C4AE6FA28CC96AF7D1E9949947C8A7AA64B92C_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		return;
	}
}
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddRow_m16509139D9874248C8FF23A708A7ECBB675C5262 (int32_t ___rule0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0042AB3E1A64BB363620361BBE7585680D722E16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9761D347AC3B18ED56235F4DC19AAEABDBA24999_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_il2cpp_TypeInfo_var))->get_parse_table_0();
		int32_t L_1 = ___rule0;
		Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4 * L_2 = (Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4 *)il2cpp_codegen_object_new(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m0042AB3E1A64BB363620361BBE7585680D722E16(L_2, /*hidden argument*/Dictionary_2__ctor_m0042AB3E1A64BB363620361BBE7585680D722E16_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::Add(!0,!1) */, IDictionary_2_t9761D347AC3B18ED56235F4DC19AAEABDBA24999_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessNumber_mE8972C772C3BA44D5828C9F45243631EC46057B1 (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, String_t* ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		String_t* L_0 = ___number0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_0, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_2 = ___number0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_2, ((int32_t)101), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_4 = ___number0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_4, ((int32_t)69), /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_004b;
		}
	}

IL_002a:
	{
		String_t* L_6 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0(L_6, (double*)(&V_0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		__this->set_token_14(8);
		double L_8 = V_0;
		double L_9 = L_8;
		RuntimeObject * L_10 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_9);
		__this->set_token_value_13(L_10);
		return;
	}

IL_004b:
	{
		String_t* L_11 = ___number0;
		bool L_12;
		L_12 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_11, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006c;
		}
	}
	{
		__this->set_token_14(6);
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		__this->set_token_value_13(L_15);
		return;
	}

IL_006c:
	{
		String_t* L_16 = ___number0;
		bool L_17;
		L_17 = Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650(L_16, (int64_t*)(&V_2), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_008d;
		}
	}
	{
		__this->set_token_14(7);
		int64_t L_18 = V_2;
		int64_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_19);
		__this->set_token_value_13(L_20);
		return;
	}

IL_008d:
	{
		String_t* L_21 = ___number0;
		bool L_22;
		L_22 = UInt64_TryParse_m9A4700B9A5FD8F9B5270914DA0DF310A6BD07AE5(L_21, (uint64_t*)(&V_3), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		__this->set_token_14(7);
		uint64_t L_23 = V_3;
		uint64_t L_24 = L_23;
		RuntimeObject * L_25 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_24);
		__this->set_token_value_13(L_25);
		return;
	}

IL_00ae:
	{
		__this->set_token_14(6);
		int32_t L_26 = 0;
		RuntimeObject * L_27 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_26);
		__this->set_token_value_13(L_27);
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessSymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessSymbol_mDE8BC3E01C02881C89E7D644281574CBCE3CAB45 (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0020;
		}
	}
	{
		__this->set_token_14(4);
		__this->set_parser_return_8((bool)1);
		goto IL_01b8;
	}

IL_0020:
	{
		int32_t L_1 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0040;
		}
	}
	{
		__this->set_token_14(5);
		__this->set_parser_return_8((bool)1);
		goto IL_01b8;
	}

IL_0040:
	{
		int32_t L_2 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0060;
		}
	}
	{
		__this->set_token_14(1);
		__this->set_parser_return_8((bool)1);
		goto IL_01b8;
	}

IL_0060:
	{
		int32_t L_3 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0080;
		}
	}
	{
		__this->set_token_14(3);
		__this->set_parser_return_8((bool)1);
		goto IL_01b8;
	}

IL_0080:
	{
		int32_t L_4 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_00ca;
		}
	}
	{
		bool L_5 = __this->get_parser_in_string_7();
		if (!L_5)
		{
			goto IL_00ab;
		}
	}
	{
		__this->set_parser_in_string_7((bool)0);
		__this->set_parser_return_8((bool)1);
		goto IL_00c5;
	}

IL_00ab:
	{
		int32_t L_6 = __this->get_token_14();
		if (L_6)
		{
			goto IL_00be;
		}
	}
	{
		__this->set_token_14(((int32_t)9));
	}

IL_00be:
	{
		__this->set_parser_in_string_7((bool)1);
	}

IL_00c5:
	{
		goto IL_01b8;
	}

IL_00ca:
	{
		int32_t L_7 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)65541)))))
		{
			goto IL_00f0;
		}
	}
	{
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_8 = __this->get_lexer_6();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Lexer_get_StringValue_mB6D4DB3D5A1AA3399673E4D55CF827C460BDC401_inline(L_8, /*hidden argument*/NULL);
		__this->set_token_value_13(L_9);
		goto IL_01b8;
	}

IL_00f0:
	{
		int32_t L_10 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)65539)))))
		{
			goto IL_0120;
		}
	}
	{
		__this->set_token_14(((int32_t)10));
		bool L_11 = ((bool)0);
		RuntimeObject * L_12 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_11);
		__this->set_token_value_13(L_12);
		__this->set_parser_return_8((bool)1);
		goto IL_01b8;
	}

IL_0120:
	{
		int32_t L_13 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)65540)))))
		{
			goto IL_0144;
		}
	}
	{
		__this->set_token_14(((int32_t)11));
		__this->set_parser_return_8((bool)1);
		goto IL_01b8;
	}

IL_0144:
	{
		int32_t L_14 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)65537)))))
		{
			goto IL_0171;
		}
	}
	{
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_15 = __this->get_lexer_6();
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Lexer_get_StringValue_mB6D4DB3D5A1AA3399673E4D55CF827C460BDC401_inline(L_15, /*hidden argument*/NULL);
		JsonReader_ProcessNumber_mE8972C772C3BA44D5828C9F45243631EC46057B1(__this, L_16, /*hidden argument*/NULL);
		__this->set_parser_return_8((bool)1);
		goto IL_01b8;
	}

IL_0171:
	{
		int32_t L_17 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)65546)))))
		{
			goto IL_018d;
		}
	}
	{
		__this->set_token_14(2);
		goto IL_01b8;
	}

IL_018d:
	{
		int32_t L_18 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)65538)))))
		{
			goto IL_01b8;
		}
	}
	{
		__this->set_token_14(((int32_t)10));
		bool L_19 = ((bool)1);
		RuntimeObject * L_20 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_19);
		__this->set_token_value_13(L_20);
		__this->set_parser_return_8((bool)1);
	}

IL_01b8:
	{
		return;
	}
}
// System.Boolean LitJson.JsonReader::ReadToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_ReadToken_m7088043D61216860365023820E10A38A685A7396 (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_end_of_input_5();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = __this->get_lexer_6();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_NextToken_m9B5E8395C93306F40AEFEE4D9FC1BF6E247D2467(L_1, /*hidden argument*/NULL);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_3 = __this->get_lexer_6();
		NullCheck(L_3);
		bool L_4;
		L_4 = Lexer_get_EndOfInput_mFEE13AD7088F64BCE07E92583F59D7A583FA3459_inline(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		JsonReader_Close_m398E8956F614004E65B9D3351CEB648F03987645(__this, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0031:
	{
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_5 = __this->get_lexer_6();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Lexer_get_Token_m3CEA90DD0FE332D6E5FEAB49FA3618B41B8B4764_inline(L_5, /*hidden argument*/NULL);
		__this->set_current_input_2(L_6);
		return (bool)1;
	}
}
// System.Void LitJson.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_m398E8956F614004E65B9D3351CEB648F03987645 (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_end_of_input_5();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->set_end_of_input_5((bool)1);
		__this->set_end_of_json_4((bool)1);
		bool L_1 = __this->get_reader_is_owned_11();
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_2 = __this->get_reader_10();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_2);
	}

IL_0030:
	{
		__this->set_reader_10((TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F *)NULL);
		return;
	}
}
// System.Boolean LitJson.JsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_Read_m4F676359E5B9EA9BACAC8D46F1DDE66F32D00D89 (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t15C4AE6FA28CC96AF7D1E9949947C8A7AA64B92C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9761D347AC3B18ED56235F4DC19AAEABDBA24999_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m65385AD770CB3137B6B0638B1C8B3F135A5E277D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m975CA51F3A72228535A3AE9FE726481EF9E0B76C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 * V_1 = NULL;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		bool L_0 = __this->get_end_of_input_5();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		bool L_1 = __this->get_end_of_json_4();
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		__this->set_end_of_json_4((bool)0);
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_2 = __this->get_automaton_stack_1();
		NullCheck(L_2);
		Stack_1_Clear_m65385AD770CB3137B6B0638B1C8B3F135A5E277D(L_2, /*hidden argument*/Stack_1_Clear_m65385AD770CB3137B6B0638B1C8B3F135A5E277D_RuntimeMethod_var);
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_3 = __this->get_automaton_stack_1();
		NullCheck(L_3);
		Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3(L_3, ((int32_t)65553), /*hidden argument*/Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_RuntimeMethod_var);
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_4 = __this->get_automaton_stack_1();
		NullCheck(L_4);
		Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3(L_4, ((int32_t)65543), /*hidden argument*/Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_RuntimeMethod_var);
	}

IL_004a:
	{
		__this->set_parser_in_string_7((bool)0);
		__this->set_parser_return_8((bool)0);
		__this->set_token_14(0);
		__this->set_token_value_13(NULL);
		bool L_5 = __this->get_read_started_9();
		if (L_5)
		{
			goto IL_0085;
		}
	}
	{
		__this->set_read_started_9((bool)1);
		bool L_6;
		L_6 = JsonReader_ReadToken_m7088043D61216860365023820E10A38A685A7396(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0085:
	{
		bool L_7 = __this->get_parser_return_8();
		if (!L_7)
		{
			goto IL_00ae;
		}
	}
	{
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_8 = __this->get_automaton_stack_1();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B(L_8, /*hidden argument*/Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_RuntimeMethod_var);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)65553)))))
		{
			goto IL_00ac;
		}
	}
	{
		__this->set_end_of_json_4((bool)1);
	}

IL_00ac:
	{
		return (bool)1;
	}

IL_00ae:
	{
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_10 = __this->get_automaton_stack_1();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Stack_1_Pop_m975CA51F3A72228535A3AE9FE726481EF9E0B76C(L_10, /*hidden argument*/Stack_1_Pop_m975CA51F3A72228535A3AE9FE726481EF9E0B76C_RuntimeMethod_var);
		__this->set_current_symbol_3(L_11);
		JsonReader_ProcessSymbol_mDE8BC3E01C02881C89E7D644281574CBCE3CAB45(__this, /*hidden argument*/NULL);
		int32_t L_12 = __this->get_current_symbol_3();
		int32_t L_13 = __this->get_current_input_2();
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0115;
		}
	}
	{
		bool L_14;
		L_14 = JsonReader_ReadToken_m7088043D61216860365023820E10A38A685A7396(__this, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0110;
		}
	}
	{
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_15 = __this->get_automaton_stack_1();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B(L_15, /*hidden argument*/Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_RuntimeMethod_var);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)65553))))
		{
			goto IL_0101;
		}
	}
	{
		JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD * L_17 = (JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD_il2cpp_TypeInfo_var)));
		JsonException__ctor_m071981460543EBEED1E6349E9E01E1ACC35A7638(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B6EE056E549534162451A09C7F0AFAC372DBD06)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Read_m4F676359E5B9EA9BACAC8D46F1DDE66F32D00D89_RuntimeMethod_var)));
	}

IL_0101:
	{
		bool L_18 = __this->get_parser_return_8();
		if (!L_18)
		{
			goto IL_010e;
		}
	}
	{
		return (bool)1;
	}

IL_010e:
	{
		return (bool)0;
	}

IL_0110:
	{
		goto IL_0085;
	}

IL_0115:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_il2cpp_TypeInfo_var);
		RuntimeObject* L_19 = ((JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0_il2cpp_TypeInfo_var))->get_parse_table_0();
		int32_t L_20 = __this->get_current_symbol_3();
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(!0) */, IDictionary_2_t9761D347AC3B18ED56235F4DC19AAEABDBA24999_il2cpp_TypeInfo_var, L_19, L_20);
		int32_t L_22 = __this->get_current_input_2();
		NullCheck(L_21);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23;
		L_23 = InterfaceFuncInvoker1< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::get_Item(!0) */, IDictionary_2_t15C4AE6FA28CC96AF7D1E9949947C8A7AA64B92C_il2cpp_TypeInfo_var, L_21, L_22);
		V_0 = L_23;
		goto IL_0144;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0136;
		}
		throw e;
	}

CATCH_0136:
	{ // begin catch(System.Collections.Generic.KeyNotFoundException)
		V_1 = ((KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 *)IL2CPP_GET_ACTIVE_EXCEPTION(KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 *));
		int32_t L_24 = __this->get_current_input_2();
		KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 * L_25 = V_1;
		JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD * L_26 = (JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD_il2cpp_TypeInfo_var)));
		JsonException__ctor_mBE89028AB5026D03F51C8DE340C5EFB703E16CAB(L_26, L_24, L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Read_m4F676359E5B9EA9BACAC8D46F1DDE66F32D00D89_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0144:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = 0;
		int32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)65554)))))
		{
			goto IL_0156;
		}
	}
	{
		goto IL_0085;
	}

IL_0156:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = V_0;
		NullCheck(L_30);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))), (int32_t)1));
		goto IL_0173;
	}

IL_0161:
	{
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_31 = __this->get_automaton_stack_1();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = V_0;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3(L_31, L_35, /*hidden argument*/Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_RuntimeMethod_var);
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1));
	}

IL_0173:
	{
		int32_t L_37 = V_2;
		if ((((int32_t)L_37) >= ((int32_t)0)))
		{
			goto IL_0161;
		}
	}
	{
		goto IL_0085;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__cctor_m3D3B0765ADD74A14C1ED67E0B04C3D76EED24052 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		((JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_il2cpp_TypeInfo_var))->set_number_format_0(L_0);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m1587492D555AF45E3F28C3FBC3CC0F731E6DF7CE (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_inst_string_builder_7(L_0);
		StringBuilder_t * L_1 = __this->get_inst_string_builder_7();
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_2 = (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 *)il2cpp_codegen_object_new(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		StringWriter__ctor_mCA0BB9FBAEDB78DF47C385E534F1EB38F6334F66(L_2, L_1, /*hidden argument*/NULL);
		__this->set_writer_10(L_2);
		JsonWriter_Init_mBB363842B0921D986F899D820BAA9AE0B70D4746(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m406505C0D4C6809B043854A33E1D74981D4A281A (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, int32_t ___cond0, const RuntimeMethod* method)
{
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_0 = __this->get_context_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_ExpectingValue_3();
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_2 = __this->get_context_1();
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		NullCheck(L_3);
		L_3->set_Count_0(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
	}

IL_0023:
	{
		bool L_5 = __this->get_validate_9();
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		bool L_6 = __this->get_has_reached_end_3();
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD * L_7 = (JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD_il2cpp_TypeInfo_var)));
		JsonException__ctor_m071981460543EBEED1E6349E9E01E1ACC35A7638(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E284AA45C643AAA8D3553AA7AB6A1C3BC3E32D1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m406505C0D4C6809B043854A33E1D74981D4A281A_RuntimeMethod_var)));
	}

IL_0045:
	{
		int32_t L_8 = ___cond0;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0064;
			}
			case 1:
			{
				goto IL_0084;
			}
			case 2:
			{
				goto IL_00b4;
			}
			case 3:
			{
				goto IL_00e4;
			}
			case 4:
			{
				goto IL_0114;
			}
		}
	}
	{
		goto IL_0154;
	}

IL_0064:
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_9 = __this->get_context_1();
		NullCheck(L_9);
		bool L_10 = L_9->get_InArray_1();
		if (L_10)
		{
			goto IL_007f;
		}
	}
	{
		JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD * L_11 = (JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD_il2cpp_TypeInfo_var)));
		JsonException__ctor_m071981460543EBEED1E6349E9E01E1ACC35A7638(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral057118C49B28F31FA4955B194753088DDCD94999)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m406505C0D4C6809B043854A33E1D74981D4A281A_RuntimeMethod_var)));
	}

IL_007f:
	{
		goto IL_0154;
	}

IL_0084:
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_12 = __this->get_context_1();
		NullCheck(L_12);
		bool L_13 = L_12->get_InObject_2();
		if (!L_13)
		{
			goto IL_00a4;
		}
	}
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_14 = __this->get_context_1();
		NullCheck(L_14);
		bool L_15 = L_14->get_ExpectingValue_3();
		if (!L_15)
		{
			goto IL_00af;
		}
	}

IL_00a4:
	{
		JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD * L_16 = (JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD_il2cpp_TypeInfo_var)));
		JsonException__ctor_m071981460543EBEED1E6349E9E01E1ACC35A7638(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEE7535349ADB76DD55B08451D311FC3CF06A19C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m406505C0D4C6809B043854A33E1D74981D4A281A_RuntimeMethod_var)));
	}

IL_00af:
	{
		goto IL_0154;
	}

IL_00b4:
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_17 = __this->get_context_1();
		NullCheck(L_17);
		bool L_18 = L_17->get_InObject_2();
		if (!L_18)
		{
			goto IL_00df;
		}
	}
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_19 = __this->get_context_1();
		NullCheck(L_19);
		bool L_20 = L_19->get_ExpectingValue_3();
		if (L_20)
		{
			goto IL_00df;
		}
	}
	{
		JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD * L_21 = (JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD_il2cpp_TypeInfo_var)));
		JsonException__ctor_m071981460543EBEED1E6349E9E01E1ACC35A7638(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCDA723AA4DBB226A906416AA9BF1C2D4CEC53C89)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m406505C0D4C6809B043854A33E1D74981D4A281A_RuntimeMethod_var)));
	}

IL_00df:
	{
		goto IL_0154;
	}

IL_00e4:
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_22 = __this->get_context_1();
		NullCheck(L_22);
		bool L_23 = L_22->get_InObject_2();
		if (!L_23)
		{
			goto IL_0104;
		}
	}
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_24 = __this->get_context_1();
		NullCheck(L_24);
		bool L_25 = L_24->get_ExpectingValue_3();
		if (!L_25)
		{
			goto IL_010f;
		}
	}

IL_0104:
	{
		JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD * L_26 = (JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD_il2cpp_TypeInfo_var)));
		JsonException__ctor_m071981460543EBEED1E6349E9E01E1ACC35A7638(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84BE6DF7F5E86A94476E7ED44C8A9ACA10E6236A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m406505C0D4C6809B043854A33E1D74981D4A281A_RuntimeMethod_var)));
	}

IL_010f:
	{
		goto IL_0154;
	}

IL_0114:
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_27 = __this->get_context_1();
		NullCheck(L_27);
		bool L_28 = L_27->get_InArray_1();
		if (L_28)
		{
			goto IL_014f;
		}
	}
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_29 = __this->get_context_1();
		NullCheck(L_29);
		bool L_30 = L_29->get_InObject_2();
		if (!L_30)
		{
			goto IL_0144;
		}
	}
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_31 = __this->get_context_1();
		NullCheck(L_31);
		bool L_32 = L_31->get_ExpectingValue_3();
		if (L_32)
		{
			goto IL_014f;
		}
	}

IL_0144:
	{
		JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD * L_33 = (JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD_il2cpp_TypeInfo_var)));
		JsonException__ctor_m071981460543EBEED1E6349E9E01E1ACC35A7638(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC63496F78F80F09E4841EF5CD0DA8DAF7028FB4B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m406505C0D4C6809B043854A33E1D74981D4A281A_RuntimeMethod_var)));
	}

IL_014f:
	{
		goto IL_0154;
	}

IL_0154:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_mBB363842B0921D986F899D820BAA9AE0B70D4746 (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m20B7A8C855D99C3C974DE7CC3C0D2F16180F5C6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m2BFB8A6E6330A831A42600B14EF2BBFE384ABE1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_has_reached_end_3((bool)0);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_hex_seq_4(L_0);
		__this->set_indentation_5(0);
		__this->set_indent_value_6(4);
		__this->set_pretty_print_8((bool)0);
		__this->set_validate_9((bool)1);
		Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E * L_1 = (Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E *)il2cpp_codegen_object_new(Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E_il2cpp_TypeInfo_var);
		Stack_1__ctor_m2BFB8A6E6330A831A42600B14EF2BBFE384ABE1C(L_1, /*hidden argument*/Stack_1__ctor_m2BFB8A6E6330A831A42600B14EF2BBFE384ABE1C_RuntimeMethod_var);
		__this->set_ctx_stack_2(L_1);
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_2 = (WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 *)il2cpp_codegen_object_new(WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169_il2cpp_TypeInfo_var);
		WriterContext__ctor_mC3D32B71F932C8D5BB5E23C09434ADE364EA6ECA(L_2, /*hidden argument*/NULL);
		__this->set_context_1(L_2);
		Stack_1_t2EDBEAAB0B8B17B512F5287EB957A97A0D507D6E * L_3 = __this->get_ctx_stack_2();
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_4 = __this->get_context_1();
		NullCheck(L_3);
		Stack_1_Push_m20B7A8C855D99C3C974DE7CC3C0D2F16180F5C6C(L_3, L_4, /*hidden argument*/Stack_1_Push_m20B7A8C855D99C3C974DE7CC3C0D2F16180F5C6C_RuntimeMethod_var);
		return;
	}
}
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_m90E70BE564328F1E7C1B5345B5E2E294D2E1858E (int32_t ___n0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___hex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_0039;
	}

IL_0007:
	{
		int32_t L_0 = ___n0;
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)((int32_t)16)));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0023;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___hex1;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_3))), (Il2CppChar)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)L_4)))));
		goto IL_0030;
	}

IL_0023:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___hex1;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_6))), (Il2CppChar)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)65), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)10))))))));
	}

IL_0030:
	{
		int32_t L_8 = ___n0;
		___n0 = ((int32_t)((int32_t)L_8>>(int32_t)4));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_m95C0A4E41B668538D9541D624E755D0F0FC97C05 (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0022:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_3 = __this->get_writer_10();
		NullCheck(L_3);
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)32));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_indentation_5();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0022;
		}
	}

IL_003f:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_7 = __this->get_writer_10();
		String_t* L_8 = ___str0;
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m4714D39FD6D7F925D80309013A26CE18F2787622 (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, const RuntimeMethod* method)
{
	{
		JsonWriter_PutNewline_m421A40D79076BC303FDBD8B88162711749E0BA2F(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m421A40D79076BC303FDBD8B88162711749E0BA2F (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, bool ___add_comma0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___add_comma0;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_5 = __this->get_writer_10();
		NullCheck(L_5);
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)44));
	}

IL_0034:
	{
		bool L_6 = __this->get_pretty_print_8();
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_7 = __this->get_context_1();
		NullCheck(L_7);
		bool L_8 = L_7->get_ExpectingValue_3();
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_9 = __this->get_writer_10();
		NullCheck(L_9);
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, ((int32_t)10));
	}

IL_005c:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_m804FF268AAF3444533F6134E22F31142095D3D0B (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		JsonWriter_Put_m95C0A4E41B668538D9541D624E755D0F0FC97C05(__this, L_0, /*hidden argument*/NULL);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_1 = __this->get_writer_10();
		NullCheck(L_1);
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)34));
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_015a;
	}

IL_0026:
	{
		String_t* L_4 = ___str0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)8)))
		{
			case 0:
			{
				goto IL_00db;
			}
			case 1:
			{
				goto IL_008d;
			}
			case 2:
			{
				goto IL_0063;
			}
			case 3:
			{
				goto IL_004e;
			}
			case 4:
			{
				goto IL_00c6;
			}
			case 5:
			{
				goto IL_0078;
			}
		}
	}

IL_004e:
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_00a2;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_00f0;
	}

IL_0063:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_10 = __this->get_writer_10();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_10, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		goto IL_0156;
	}

IL_0078:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_11 = __this->get_writer_10();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		goto IL_0156;
	}

IL_008d:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_12 = __this->get_writer_10();
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		goto IL_0156;
	}

IL_00a2:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_13 = __this->get_writer_10();
		NullCheck(L_13);
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)92));
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_14 = __this->get_writer_10();
		String_t* L_15 = ___str0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Il2CppChar L_17;
		L_17 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_14, L_17);
		goto IL_0156;
	}

IL_00c6:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_18 = __this->get_writer_10();
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_18, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		goto IL_0156;
	}

IL_00db:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_19 = __this->get_writer_10();
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_19, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		goto IL_0156;
	}

IL_00f0:
	{
		String_t* L_20 = ___str0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_20, L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)32))))
		{
			goto IL_0123;
		}
	}
	{
		String_t* L_23 = ___str0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_23, L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_25) > ((int32_t)((int32_t)126))))
		{
			goto IL_0123;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_26 = __this->get_writer_10();
		String_t* L_27 = ___str0;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		Il2CppChar L_29;
		L_29 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_26, L_29);
		goto IL_0156;
	}

IL_0123:
	{
		String_t* L_30 = ___str0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		Il2CppChar L_32;
		L_32 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_30, L_31, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_33 = __this->get_hex_seq_4();
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_il2cpp_TypeInfo_var);
		JsonWriter_IntToHex_m90E70BE564328F1E7C1B5345B5E2E294D2E1858E(L_32, L_33, /*hidden argument*/NULL);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_34 = __this->get_writer_10();
		NullCheck(L_34);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_35 = __this->get_writer_10();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_36 = __this->get_hex_seq_4();
		NullCheck(L_35);
		VirtActionInvoker1< CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char[]) */, L_35, L_36);
	}

IL_0156:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_015a:
	{
		int32_t L_38 = V_1;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0026;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_40 = __this->get_writer_10();
		NullCheck(L_40);
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_40, ((int32_t)34));
		return;
	}
}
// System.String LitJson.JsonWriter::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonWriter_ToString_m17BA836E39C2816FF15F982F58DFB6730B65B714 (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = __this->get_inst_string_builder_7();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_0011:
	{
		StringBuilder_t * L_2 = __this->get_inst_string_builder_7();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m900F19F2E533C68B5B87F65B76ED4195B1804218 (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m406505C0D4C6809B043854A33E1D74981D4A281A(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m4714D39FD6D7F925D80309013A26CE18F2787622(__this, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m4365C068739D443C5C6EEB5445AAEE1DBB245A4B(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m95C0A4E41B668538D9541D624E755D0F0FC97C05(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mAFFA3691C0839CE0EA9595BF475BD74AEDF838F7 (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m406505C0D4C6809B043854A33E1D74981D4A281A(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m4714D39FD6D7F925D80309013A26CE18F2787622(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m608712133E3A607F257620CB270C6758F01CB109(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m95C0A4E41B668538D9541D624E755D0F0FC97C05(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m0ECA23C2A07D2DF7425ADFB25CD50D8CDBE3FA22 (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m406505C0D4C6809B043854A33E1D74981D4A281A(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m4714D39FD6D7F925D80309013A26CE18F2787622(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		JsonWriter_Put_m95C0A4E41B668538D9541D624E755D0F0FC97C05(__this, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		goto IL_002a;
	}

IL_0023:
	{
		String_t* L_1 = ___str0;
		JsonWriter_PutString_m804FF268AAF3444533F6134E22F31142095D3D0B(__this, L_1, /*hidden argument*/NULL);
	}

IL_002a:
	{
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_2 = __this->get_context_1();
		NullCheck(L_2);
		L_2->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mA776329A365ACB2122D2863D854C08AA2DE3E9E9 (JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328 * __this, uint64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m406505C0D4C6809B043854A33E1D74981D4A281A(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m4714D39FD6D7F925D80309013A26CE18F2787622(__this, /*hidden argument*/NULL);
		uint64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tA02A3A4598F7E9D93CFA17619F0008A46AE2A328_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m7DC0B782B61A20E04F624E47FD967D246BB78BD6(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m95C0A4E41B668538D9541D624E755D0F0FC97C05(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
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
// System.Boolean LitJson.Lexer::get_EndOfInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_mFEE13AD7088F64BCE07E92583F59D7A583FA3459 (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_end_of_input_4();
		return L_0;
	}
}
// System.Int32 LitJson.Lexer::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_m3CEA90DD0FE332D6E5FEAB49FA3618B41B8B4764 (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_token_12();
		return L_0;
	}
}
// System.String LitJson.Lexer::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_mB6D4DB3D5A1AA3399673E4D55CF827C460BDC401 (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_string_value_11();
		return L_0;
	}
}
// System.Void LitJson.Lexer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__cctor_mBEA6696B0C85997A6EB6A9552B67F74C2584CEB5 (const RuntimeMethod* method)
{
	{
		Lexer_PopulateFsmTables_mD49B7D850F9EF1DE8CAE42E7071C0C7334E4A27C(/*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_m795FDA09D4F89C9F24D31E898ED6B7AAD847BD1E (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_allow_comments_2((bool)1);
		__this->set_allow_single_quoted_strings_3((bool)1);
		__this->set_input_buffer_6(0);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_0, ((int32_t)128), /*hidden argument*/NULL);
		__this->set_string_buffer_10(L_0);
		__this->set_state_9(1);
		__this->set_end_of_input_4((bool)0);
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_1 = ___reader0;
		__this->set_reader_8(L_1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_2 = (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F *)il2cpp_codegen_object_new(FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F_il2cpp_TypeInfo_var);
		FsmContext__ctor_m52236D4A7466168630F026364CA4C0F9A4637BD1(L_2, /*hidden argument*/NULL);
		__this->set_fsm_context_5(L_2);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = __this->get_fsm_context_5();
		NullCheck(L_3);
		L_3->set_L_2(__this);
		return;
	}
}
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_mE03E46BCC5DDEA643F42888E73FEBA088AE947FD (int32_t ___digit0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___digit0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)65))))
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0050;
			}
			case 4:
			{
				goto IL_0053;
			}
			case 5:
			{
				goto IL_0056;
			}
		}
	}
	{
		int32_t L_1 = ___digit0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)97))))
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0050;
			}
			case 4:
			{
				goto IL_0053;
			}
			case 5:
			{
				goto IL_0056;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0047:
	{
		return ((int32_t)10);
	}

IL_004a:
	{
		return ((int32_t)11);
	}

IL_004d:
	{
		return ((int32_t)12);
	}

IL_0050:
	{
		return ((int32_t)13);
	}

IL_0053:
	{
		return ((int32_t)14);
	}

IL_0056:
	{
		return ((int32_t)15);
	}

IL_0059:
	{
		int32_t L_2 = ___digit0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)48)));
	}
}
// System.Void LitJson.Lexer::PopulateFsmTables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_mD49B7D850F9EF1DE8CAE42E7071C0C7334E4A27C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State10_mD7C3CA14735374EBFFA7CE841D426621AFE84E06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State11_m6FE899F8886F72C5182F353D66FFDE045A161C2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State12_m062185A7E9BCB0573B11051685A83EBB89C9CE7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State13_m9E537B36446C0A2A01BBEEC392A9A9F78B116349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State14_m40E897879B025DE053DD6E2A8E339F2A8FD4C3C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State15_mCB34A64C58D8C8585CFB33AE5EFBBEE3EE44C4C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State16_m5859BCC8B00750F0A33551E610E1F42878181160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State17_mC2C5E68538BC59CF3E0E6C8EC47A46AA6AFA5372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State18_m54EB044D2D0CCE02812F5787188305E215BB277D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State19_m1898DD750D852E8138B3969E3A5D4E8770888A8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State1_mB10A6F5CADC62380CDF137B7A7C8BF7B80589F23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State20_mF527A5BA692B265653D87E99C7984A2377B0715E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State21_mCA8D0CA1884918738E3128DCB932FC83A11560E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State22_mAEB6B27B5854648089D58AC7FA7C5E5295F72C31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State23_m45378548EB0DA0B9093316B92A64139AF3926A71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State24_m1A2856DF9783F9DCF51AA447629BF3D3208DA718_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State25_m12AA50C14A9CDDB703EBED52E5B6D3BE61D204AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State26_mE2A419A4B83E522F0408A0D3F8E77B19DE0FDDD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State27_mD1414E32908CC21BB2415F8C602D9D01DC653C37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State28_m9B05ADB98CACE71E75F06D70077146FAAE5B4091_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State2_m18FC22404C21D2E39D6CE90463594278F77780C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State3_m1DB27A31AC5E633C880C4CD962B01E699BC49761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State4_m438D8333EE904D537CF21B43411C61D96E1824B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State5_mA0771BFBEFB4772B338FCF414619F548B44DCD0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State6_mDCB628F9AA8E32F3E442A0E802EFED290DA594FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State7_mD3C331A2E7D7D1F82B7B854BF92423FEE90ED748_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State8_mBE12342F86DA75CDCCE0166B71A08AD21012081B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State9_mC1A44112FC8D34C52AAA153F3540010AE5112EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2DC_12_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B2_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B1_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B1_2 = NULL;
	int32_t G_B4_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B4_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B3_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B3_2 = NULL;
	int32_t G_B6_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B6_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B6_2 = NULL;
	int32_t G_B5_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B5_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B5_2 = NULL;
	int32_t G_B8_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B8_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B7_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B7_2 = NULL;
	int32_t G_B10_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B10_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B10_2 = NULL;
	int32_t G_B9_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B9_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B9_2 = NULL;
	int32_t G_B12_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B12_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B12_2 = NULL;
	int32_t G_B11_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B11_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B11_2 = NULL;
	int32_t G_B14_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B14_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B14_2 = NULL;
	int32_t G_B13_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B13_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B13_2 = NULL;
	int32_t G_B16_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B16_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B16_2 = NULL;
	int32_t G_B15_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B15_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B15_2 = NULL;
	int32_t G_B18_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B18_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B18_2 = NULL;
	int32_t G_B17_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B17_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B17_2 = NULL;
	int32_t G_B20_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B20_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B20_2 = NULL;
	int32_t G_B19_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B19_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B19_2 = NULL;
	int32_t G_B22_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B22_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B22_2 = NULL;
	int32_t G_B21_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B21_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B21_2 = NULL;
	int32_t G_B24_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B24_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B24_2 = NULL;
	int32_t G_B23_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B23_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B23_2 = NULL;
	int32_t G_B26_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B26_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B26_2 = NULL;
	int32_t G_B25_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B25_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B25_2 = NULL;
	int32_t G_B28_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B28_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B28_2 = NULL;
	int32_t G_B27_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B27_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B27_2 = NULL;
	int32_t G_B30_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B30_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B30_2 = NULL;
	int32_t G_B29_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B29_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B29_2 = NULL;
	int32_t G_B32_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B32_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B32_2 = NULL;
	int32_t G_B31_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B31_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B31_2 = NULL;
	int32_t G_B34_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B34_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B34_2 = NULL;
	int32_t G_B33_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B33_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B33_2 = NULL;
	int32_t G_B36_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B36_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B36_2 = NULL;
	int32_t G_B35_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B35_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B35_2 = NULL;
	int32_t G_B38_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B38_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B38_2 = NULL;
	int32_t G_B37_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B37_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B37_2 = NULL;
	int32_t G_B40_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B40_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B40_2 = NULL;
	int32_t G_B39_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B39_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B39_2 = NULL;
	int32_t G_B42_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B42_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B42_2 = NULL;
	int32_t G_B41_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B41_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B41_2 = NULL;
	int32_t G_B44_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B44_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B44_2 = NULL;
	int32_t G_B43_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B43_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B43_2 = NULL;
	int32_t G_B46_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B46_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B46_2 = NULL;
	int32_t G_B45_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B45_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B45_2 = NULL;
	int32_t G_B48_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B48_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B48_2 = NULL;
	int32_t G_B47_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B47_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B47_2 = NULL;
	int32_t G_B50_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B50_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B50_2 = NULL;
	int32_t G_B49_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B49_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B49_2 = NULL;
	int32_t G_B52_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B52_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B52_2 = NULL;
	int32_t G_B51_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B51_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B51_2 = NULL;
	int32_t G_B54_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B54_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B54_2 = NULL;
	int32_t G_B53_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B53_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B53_2 = NULL;
	int32_t G_B56_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B56_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B56_2 = NULL;
	int32_t G_B55_0 = 0;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B55_1 = NULL;
	StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* G_B55_2 = NULL;
	{
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_0 = (StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB*)(StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB*)SZArrayNew(StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_2 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_14();
		G_B1_0 = 0;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (L_2)
		{
			G_B2_0 = 0;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0021;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_3 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_3, NULL, (intptr_t)((intptr_t)Lexer_State1_mB10A6F5CADC62380CDF137B7A7C8BF7B80589F23_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_14(L_3);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_4 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_14();
		NullCheck(G_B2_1);
		ArrayElementTypeCheck (G_B2_1, L_4);
		(G_B2_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B2_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_4);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_5 = G_B2_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_6 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_15();
		G_B3_0 = 1;
		G_B3_1 = L_5;
		G_B3_2 = L_5;
		if (L_6)
		{
			G_B4_0 = 1;
			G_B4_1 = L_5;
			G_B4_2 = L_5;
			goto IL_0041;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_7 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_7, NULL, (intptr_t)((intptr_t)Lexer_State2_m18FC22404C21D2E39D6CE90463594278F77780C3_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_15(L_7);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_8 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_15();
		NullCheck(G_B4_1);
		ArrayElementTypeCheck (G_B4_1, L_8);
		(G_B4_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_8);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_9 = G_B4_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_10 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_16();
		G_B5_0 = 2;
		G_B5_1 = L_9;
		G_B5_2 = L_9;
		if (L_10)
		{
			G_B6_0 = 2;
			G_B6_1 = L_9;
			G_B6_2 = L_9;
			goto IL_0061;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_11 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_11, NULL, (intptr_t)((intptr_t)Lexer_State3_m1DB27A31AC5E633C880C4CD962B01E699BC49761_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_16(L_11);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0061:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_12 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_16();
		NullCheck(G_B6_1);
		ArrayElementTypeCheck (G_B6_1, L_12);
		(G_B6_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_12);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_13 = G_B6_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_14 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_17();
		G_B7_0 = 3;
		G_B7_1 = L_13;
		G_B7_2 = L_13;
		if (L_14)
		{
			G_B8_0 = 3;
			G_B8_1 = L_13;
			G_B8_2 = L_13;
			goto IL_0081;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_15 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_15, NULL, (intptr_t)((intptr_t)Lexer_State4_m438D8333EE904D537CF21B43411C61D96E1824B1_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache3_17(L_15);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_0081:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_16 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_17();
		NullCheck(G_B8_1);
		ArrayElementTypeCheck (G_B8_1, L_16);
		(G_B8_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_16);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_17 = G_B8_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_18 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache4_18();
		G_B9_0 = 4;
		G_B9_1 = L_17;
		G_B9_2 = L_17;
		if (L_18)
		{
			G_B10_0 = 4;
			G_B10_1 = L_17;
			G_B10_2 = L_17;
			goto IL_00a1;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_19 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_19, NULL, (intptr_t)((intptr_t)Lexer_State5_mA0771BFBEFB4772B338FCF414619F548B44DCD0C_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache4_18(L_19);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}

IL_00a1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_20 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache4_18();
		NullCheck(G_B10_1);
		ArrayElementTypeCheck (G_B10_1, L_20);
		(G_B10_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_20);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_21 = G_B10_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_22 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache5_19();
		G_B11_0 = 5;
		G_B11_1 = L_21;
		G_B11_2 = L_21;
		if (L_22)
		{
			G_B12_0 = 5;
			G_B12_1 = L_21;
			G_B12_2 = L_21;
			goto IL_00c1;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_23 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_23, NULL, (intptr_t)((intptr_t)Lexer_State6_mDCB628F9AA8E32F3E442A0E802EFED290DA594FB_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache5_19(L_23);
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_00c1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_24 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache5_19();
		NullCheck(G_B12_1);
		ArrayElementTypeCheck (G_B12_1, L_24);
		(G_B12_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_24);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_25 = G_B12_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_26 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache6_20();
		G_B13_0 = 6;
		G_B13_1 = L_25;
		G_B13_2 = L_25;
		if (L_26)
		{
			G_B14_0 = 6;
			G_B14_1 = L_25;
			G_B14_2 = L_25;
			goto IL_00e1;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_27 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_27, NULL, (intptr_t)((intptr_t)Lexer_State7_mD3C331A2E7D7D1F82B7B854BF92423FEE90ED748_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache6_20(L_27);
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
	}

IL_00e1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_28 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache6_20();
		NullCheck(G_B14_1);
		ArrayElementTypeCheck (G_B14_1, L_28);
		(G_B14_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B14_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_28);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_29 = G_B14_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_30 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache7_21();
		G_B15_0 = 7;
		G_B15_1 = L_29;
		G_B15_2 = L_29;
		if (L_30)
		{
			G_B16_0 = 7;
			G_B16_1 = L_29;
			G_B16_2 = L_29;
			goto IL_0101;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_31 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_31, NULL, (intptr_t)((intptr_t)Lexer_State8_mBE12342F86DA75CDCCE0166B71A08AD21012081B_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache7_21(L_31);
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
	}

IL_0101:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_32 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache7_21();
		NullCheck(G_B16_1);
		ArrayElementTypeCheck (G_B16_1, L_32);
		(G_B16_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_32);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_33 = G_B16_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_34 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache8_22();
		G_B17_0 = 8;
		G_B17_1 = L_33;
		G_B17_2 = L_33;
		if (L_34)
		{
			G_B18_0 = 8;
			G_B18_1 = L_33;
			G_B18_2 = L_33;
			goto IL_0121;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_35 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_35, NULL, (intptr_t)((intptr_t)Lexer_State9_mC1A44112FC8D34C52AAA153F3540010AE5112EA8_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache8_22(L_35);
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
	}

IL_0121:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_36 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache8_22();
		NullCheck(G_B18_1);
		ArrayElementTypeCheck (G_B18_1, L_36);
		(G_B18_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B18_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_36);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_37 = G_B18_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_38 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache9_23();
		G_B19_0 = ((int32_t)9);
		G_B19_1 = L_37;
		G_B19_2 = L_37;
		if (L_38)
		{
			G_B20_0 = ((int32_t)9);
			G_B20_1 = L_37;
			G_B20_2 = L_37;
			goto IL_0142;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_39 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_39, NULL, (intptr_t)((intptr_t)Lexer_State10_mD7C3CA14735374EBFFA7CE841D426621AFE84E06_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache9_23(L_39);
		G_B20_0 = G_B19_0;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
	}

IL_0142:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_40 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache9_23();
		NullCheck(G_B20_1);
		ArrayElementTypeCheck (G_B20_1, L_40);
		(G_B20_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_40);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_41 = G_B20_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_42 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheA_24();
		G_B21_0 = ((int32_t)10);
		G_B21_1 = L_41;
		G_B21_2 = L_41;
		if (L_42)
		{
			G_B22_0 = ((int32_t)10);
			G_B22_1 = L_41;
			G_B22_2 = L_41;
			goto IL_0163;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_43 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_43, NULL, (intptr_t)((intptr_t)Lexer_State11_m6FE899F8886F72C5182F353D66FFDE045A161C2B_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cacheA_24(L_43);
		G_B22_0 = G_B21_0;
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
	}

IL_0163:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_44 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheA_24();
		NullCheck(G_B22_1);
		ArrayElementTypeCheck (G_B22_1, L_44);
		(G_B22_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B22_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_44);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_45 = G_B22_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_46 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheB_25();
		G_B23_0 = ((int32_t)11);
		G_B23_1 = L_45;
		G_B23_2 = L_45;
		if (L_46)
		{
			G_B24_0 = ((int32_t)11);
			G_B24_1 = L_45;
			G_B24_2 = L_45;
			goto IL_0184;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_47 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_47, NULL, (intptr_t)((intptr_t)Lexer_State12_m062185A7E9BCB0573B11051685A83EBB89C9CE7B_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cacheB_25(L_47);
		G_B24_0 = G_B23_0;
		G_B24_1 = G_B23_1;
		G_B24_2 = G_B23_2;
	}

IL_0184:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_48 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheB_25();
		NullCheck(G_B24_1);
		ArrayElementTypeCheck (G_B24_1, L_48);
		(G_B24_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B24_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_48);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_49 = G_B24_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_50 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheC_26();
		G_B25_0 = ((int32_t)12);
		G_B25_1 = L_49;
		G_B25_2 = L_49;
		if (L_50)
		{
			G_B26_0 = ((int32_t)12);
			G_B26_1 = L_49;
			G_B26_2 = L_49;
			goto IL_01a5;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_51 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_51, NULL, (intptr_t)((intptr_t)Lexer_State13_m9E537B36446C0A2A01BBEEC392A9A9F78B116349_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cacheC_26(L_51);
		G_B26_0 = G_B25_0;
		G_B26_1 = G_B25_1;
		G_B26_2 = G_B25_2;
	}

IL_01a5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_52 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheC_26();
		NullCheck(G_B26_1);
		ArrayElementTypeCheck (G_B26_1, L_52);
		(G_B26_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B26_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_52);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_53 = G_B26_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_54 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheD_27();
		G_B27_0 = ((int32_t)13);
		G_B27_1 = L_53;
		G_B27_2 = L_53;
		if (L_54)
		{
			G_B28_0 = ((int32_t)13);
			G_B28_1 = L_53;
			G_B28_2 = L_53;
			goto IL_01c6;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_55 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_55, NULL, (intptr_t)((intptr_t)Lexer_State14_m40E897879B025DE053DD6E2A8E339F2A8FD4C3C8_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cacheD_27(L_55);
		G_B28_0 = G_B27_0;
		G_B28_1 = G_B27_1;
		G_B28_2 = G_B27_2;
	}

IL_01c6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_56 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheD_27();
		NullCheck(G_B28_1);
		ArrayElementTypeCheck (G_B28_1, L_56);
		(G_B28_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B28_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_56);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_57 = G_B28_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_58 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheE_28();
		G_B29_0 = ((int32_t)14);
		G_B29_1 = L_57;
		G_B29_2 = L_57;
		if (L_58)
		{
			G_B30_0 = ((int32_t)14);
			G_B30_1 = L_57;
			G_B30_2 = L_57;
			goto IL_01e7;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_59 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_59, NULL, (intptr_t)((intptr_t)Lexer_State15_mCB34A64C58D8C8585CFB33AE5EFBBEE3EE44C4C7_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cacheE_28(L_59);
		G_B30_0 = G_B29_0;
		G_B30_1 = G_B29_1;
		G_B30_2 = G_B29_2;
	}

IL_01e7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_60 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheE_28();
		NullCheck(G_B30_1);
		ArrayElementTypeCheck (G_B30_1, L_60);
		(G_B30_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B30_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_60);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_61 = G_B30_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_62 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheF_29();
		G_B31_0 = ((int32_t)15);
		G_B31_1 = L_61;
		G_B31_2 = L_61;
		if (L_62)
		{
			G_B32_0 = ((int32_t)15);
			G_B32_1 = L_61;
			G_B32_2 = L_61;
			goto IL_0208;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_63 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_63, NULL, (intptr_t)((intptr_t)Lexer_State16_m5859BCC8B00750F0A33551E610E1F42878181160_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cacheF_29(L_63);
		G_B32_0 = G_B31_0;
		G_B32_1 = G_B31_1;
		G_B32_2 = G_B31_2;
	}

IL_0208:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_64 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheF_29();
		NullCheck(G_B32_1);
		ArrayElementTypeCheck (G_B32_1, L_64);
		(G_B32_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B32_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_64);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_65 = G_B32_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_66 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache10_30();
		G_B33_0 = ((int32_t)16);
		G_B33_1 = L_65;
		G_B33_2 = L_65;
		if (L_66)
		{
			G_B34_0 = ((int32_t)16);
			G_B34_1 = L_65;
			G_B34_2 = L_65;
			goto IL_0229;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_67 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_67, NULL, (intptr_t)((intptr_t)Lexer_State17_mC2C5E68538BC59CF3E0E6C8EC47A46AA6AFA5372_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache10_30(L_67);
		G_B34_0 = G_B33_0;
		G_B34_1 = G_B33_1;
		G_B34_2 = G_B33_2;
	}

IL_0229:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_68 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache10_30();
		NullCheck(G_B34_1);
		ArrayElementTypeCheck (G_B34_1, L_68);
		(G_B34_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B34_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_68);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_69 = G_B34_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_70 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache11_31();
		G_B35_0 = ((int32_t)17);
		G_B35_1 = L_69;
		G_B35_2 = L_69;
		if (L_70)
		{
			G_B36_0 = ((int32_t)17);
			G_B36_1 = L_69;
			G_B36_2 = L_69;
			goto IL_024a;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_71 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_71, NULL, (intptr_t)((intptr_t)Lexer_State18_m54EB044D2D0CCE02812F5787188305E215BB277D_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache11_31(L_71);
		G_B36_0 = G_B35_0;
		G_B36_1 = G_B35_1;
		G_B36_2 = G_B35_2;
	}

IL_024a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_72 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache11_31();
		NullCheck(G_B36_1);
		ArrayElementTypeCheck (G_B36_1, L_72);
		(G_B36_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B36_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_72);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_73 = G_B36_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_74 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache12_32();
		G_B37_0 = ((int32_t)18);
		G_B37_1 = L_73;
		G_B37_2 = L_73;
		if (L_74)
		{
			G_B38_0 = ((int32_t)18);
			G_B38_1 = L_73;
			G_B38_2 = L_73;
			goto IL_026b;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_75 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_75, NULL, (intptr_t)((intptr_t)Lexer_State19_m1898DD750D852E8138B3969E3A5D4E8770888A8D_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache12_32(L_75);
		G_B38_0 = G_B37_0;
		G_B38_1 = G_B37_1;
		G_B38_2 = G_B37_2;
	}

IL_026b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_76 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache12_32();
		NullCheck(G_B38_1);
		ArrayElementTypeCheck (G_B38_1, L_76);
		(G_B38_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B38_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_76);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_77 = G_B38_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_78 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache13_33();
		G_B39_0 = ((int32_t)19);
		G_B39_1 = L_77;
		G_B39_2 = L_77;
		if (L_78)
		{
			G_B40_0 = ((int32_t)19);
			G_B40_1 = L_77;
			G_B40_2 = L_77;
			goto IL_028c;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_79 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_79, NULL, (intptr_t)((intptr_t)Lexer_State20_mF527A5BA692B265653D87E99C7984A2377B0715E_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache13_33(L_79);
		G_B40_0 = G_B39_0;
		G_B40_1 = G_B39_1;
		G_B40_2 = G_B39_2;
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_80 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache13_33();
		NullCheck(G_B40_1);
		ArrayElementTypeCheck (G_B40_1, L_80);
		(G_B40_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B40_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_80);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_81 = G_B40_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_82 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache14_34();
		G_B41_0 = ((int32_t)20);
		G_B41_1 = L_81;
		G_B41_2 = L_81;
		if (L_82)
		{
			G_B42_0 = ((int32_t)20);
			G_B42_1 = L_81;
			G_B42_2 = L_81;
			goto IL_02ad;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_83 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_83, NULL, (intptr_t)((intptr_t)Lexer_State21_mCA8D0CA1884918738E3128DCB932FC83A11560E1_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache14_34(L_83);
		G_B42_0 = G_B41_0;
		G_B42_1 = G_B41_1;
		G_B42_2 = G_B41_2;
	}

IL_02ad:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_84 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache14_34();
		NullCheck(G_B42_1);
		ArrayElementTypeCheck (G_B42_1, L_84);
		(G_B42_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B42_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_84);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_85 = G_B42_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_86 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache15_35();
		G_B43_0 = ((int32_t)21);
		G_B43_1 = L_85;
		G_B43_2 = L_85;
		if (L_86)
		{
			G_B44_0 = ((int32_t)21);
			G_B44_1 = L_85;
			G_B44_2 = L_85;
			goto IL_02ce;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_87 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_87, NULL, (intptr_t)((intptr_t)Lexer_State22_mAEB6B27B5854648089D58AC7FA7C5E5295F72C31_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache15_35(L_87);
		G_B44_0 = G_B43_0;
		G_B44_1 = G_B43_1;
		G_B44_2 = G_B43_2;
	}

IL_02ce:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_88 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache15_35();
		NullCheck(G_B44_1);
		ArrayElementTypeCheck (G_B44_1, L_88);
		(G_B44_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B44_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_88);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_89 = G_B44_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_90 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache16_36();
		G_B45_0 = ((int32_t)22);
		G_B45_1 = L_89;
		G_B45_2 = L_89;
		if (L_90)
		{
			G_B46_0 = ((int32_t)22);
			G_B46_1 = L_89;
			G_B46_2 = L_89;
			goto IL_02ef;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_91 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_91, NULL, (intptr_t)((intptr_t)Lexer_State23_m45378548EB0DA0B9093316B92A64139AF3926A71_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache16_36(L_91);
		G_B46_0 = G_B45_0;
		G_B46_1 = G_B45_1;
		G_B46_2 = G_B45_2;
	}

IL_02ef:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_92 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache16_36();
		NullCheck(G_B46_1);
		ArrayElementTypeCheck (G_B46_1, L_92);
		(G_B46_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B46_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_92);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_93 = G_B46_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_94 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache17_37();
		G_B47_0 = ((int32_t)23);
		G_B47_1 = L_93;
		G_B47_2 = L_93;
		if (L_94)
		{
			G_B48_0 = ((int32_t)23);
			G_B48_1 = L_93;
			G_B48_2 = L_93;
			goto IL_0310;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_95 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_95, NULL, (intptr_t)((intptr_t)Lexer_State24_m1A2856DF9783F9DCF51AA447629BF3D3208DA718_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache17_37(L_95);
		G_B48_0 = G_B47_0;
		G_B48_1 = G_B47_1;
		G_B48_2 = G_B47_2;
	}

IL_0310:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_96 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache17_37();
		NullCheck(G_B48_1);
		ArrayElementTypeCheck (G_B48_1, L_96);
		(G_B48_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B48_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_96);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_97 = G_B48_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_98 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache18_38();
		G_B49_0 = ((int32_t)24);
		G_B49_1 = L_97;
		G_B49_2 = L_97;
		if (L_98)
		{
			G_B50_0 = ((int32_t)24);
			G_B50_1 = L_97;
			G_B50_2 = L_97;
			goto IL_0331;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_99 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_99, NULL, (intptr_t)((intptr_t)Lexer_State25_m12AA50C14A9CDDB703EBED52E5B6D3BE61D204AC_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache18_38(L_99);
		G_B50_0 = G_B49_0;
		G_B50_1 = G_B49_1;
		G_B50_2 = G_B49_2;
	}

IL_0331:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_100 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache18_38();
		NullCheck(G_B50_1);
		ArrayElementTypeCheck (G_B50_1, L_100);
		(G_B50_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B50_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_100);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_101 = G_B50_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_102 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache19_39();
		G_B51_0 = ((int32_t)25);
		G_B51_1 = L_101;
		G_B51_2 = L_101;
		if (L_102)
		{
			G_B52_0 = ((int32_t)25);
			G_B52_1 = L_101;
			G_B52_2 = L_101;
			goto IL_0352;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_103 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_103, NULL, (intptr_t)((intptr_t)Lexer_State26_mE2A419A4B83E522F0408A0D3F8E77B19DE0FDDD0_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache19_39(L_103);
		G_B52_0 = G_B51_0;
		G_B52_1 = G_B51_1;
		G_B52_2 = G_B51_2;
	}

IL_0352:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_104 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache19_39();
		NullCheck(G_B52_1);
		ArrayElementTypeCheck (G_B52_1, L_104);
		(G_B52_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B52_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_104);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_105 = G_B52_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_106 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1A_40();
		G_B53_0 = ((int32_t)26);
		G_B53_1 = L_105;
		G_B53_2 = L_105;
		if (L_106)
		{
			G_B54_0 = ((int32_t)26);
			G_B54_1 = L_105;
			G_B54_2 = L_105;
			goto IL_0373;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_107 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_107, NULL, (intptr_t)((intptr_t)Lexer_State27_mD1414E32908CC21BB2415F8C602D9D01DC653C37_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1A_40(L_107);
		G_B54_0 = G_B53_0;
		G_B54_1 = G_B53_1;
		G_B54_2 = G_B53_2;
	}

IL_0373:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_108 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1A_40();
		NullCheck(G_B54_1);
		ArrayElementTypeCheck (G_B54_1, L_108);
		(G_B54_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B54_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_108);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_109 = G_B54_2;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_110 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1B_41();
		G_B55_0 = ((int32_t)27);
		G_B55_1 = L_109;
		G_B55_2 = L_109;
		if (L_110)
		{
			G_B56_0 = ((int32_t)27);
			G_B56_1 = L_109;
			G_B56_2 = L_109;
			goto IL_0394;
		}
	}
	{
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_111 = (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)il2cpp_codegen_object_new(StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136_il2cpp_TypeInfo_var);
		StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC(L_111, NULL, (intptr_t)((intptr_t)Lexer_State28_m9B05ADB98CACE71E75F06D70077146FAAE5B4091_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1B_41(L_111);
		G_B56_0 = G_B55_0;
		G_B56_1 = G_B55_1;
		G_B56_2 = G_B55_2;
	}

IL_0394:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_112 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1B_41();
		NullCheck(G_B56_1);
		ArrayElementTypeCheck (G_B56_1, L_112);
		(G_B56_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B56_0), (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 *)L_112);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_fsm_handler_table_1(G_B56_2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_113 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_114 = L_113;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_115 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7Bd7db51aeU2Dd199U2D4277U2Da2a4U2D4bdb68cd3ac9U7D_t013FCB2EE6F6649CFE34FFB5ED1221D2C87724B6____U24fieldU2DC_12_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_114, L_115, /*hidden argument*/NULL);
		((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->set_fsm_return_table_0(L_114);
		return;
	}
}
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_mCE995A93C4D6717DB6ADD28E99310B28DF5B98D6 (int32_t ___esc_char0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___esc_char0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_005f;
			}
			case 1:
			{
				goto IL_0015;
			}
			case 2:
			{
				goto IL_005c;
			}
		}
	}

IL_0015:
	{
		int32_t L_1 = ___esc_char0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)34))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_2 = ___esc_char0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)39))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_3 = ___esc_char0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)47))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = ___esc_char0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_5 = ___esc_char0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)98))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_6 = ___esc_char0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)102))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_7 = ___esc_char0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110))))
		{
			goto IL_0059;
		}
	}
	{
		goto IL_0067;
	}

IL_0052:
	{
		int32_t L_8 = ___esc_char0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_9;
		L_9 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0059:
	{
		return ((int32_t)10);
	}

IL_005c:
	{
		return ((int32_t)9);
	}

IL_005f:
	{
		return ((int32_t)13);
	}

IL_0062:
	{
		return 8;
	}

IL_0064:
	{
		return ((int32_t)12);
	}

IL_0067:
	{
		return ((int32_t)63);
	}
}
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State1_mB10A6F5CADC62380CDF137B7A7C8BF7B80589F23 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_01eb;
	}

IL_0005:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_003b;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_0040;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_input_char_7();
		if ((((int32_t)L_8) > ((int32_t)((int32_t)13))))
		{
			goto IL_0040;
		}
	}

IL_003b:
	{
		goto IL_01eb;
	}

IL_0040:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		if ((((int32_t)L_11) < ((int32_t)((int32_t)49))))
		{
			goto IL_008a;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		if ((((int32_t)L_14) > ((int32_t)((int32_t)57))))
		{
			goto IL_008a;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		StringBuilder_t * L_17 = L_16->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		int32_t L_20 = L_19->get_input_char_7();
		NullCheck(L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_17, ((int32_t)((uint16_t)L_20)), /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->set_NextState_1(3);
		return (bool)1;
	}

IL_008a:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_23 = ___ctx0;
		NullCheck(L_23);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_24 = L_23->get_L_2();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_input_char_7();
		V_0 = L_25;
		int32_t L_26 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_0123;
			}
			case 1:
			{
				goto IL_0133;
			}
			case 2:
			{
				goto IL_00b3;
			}
			case 3:
			{
				goto IL_01cd;
			}
			case 4:
			{
				goto IL_0159;
			}
		}
	}

IL_00b3:
	{
		int32_t L_27 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_0123;
			}
			case 1:
			{
				goto IL_00c8;
			}
			case 2:
			{
				goto IL_0123;
			}
		}
	}

IL_00c8:
	{
		int32_t L_28 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_0123;
			}
			case 1:
			{
				goto IL_00dd;
			}
			case 2:
			{
				goto IL_0123;
			}
		}
	}

IL_00dd:
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)34))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)39))))
		{
			goto IL_019d;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)58))))
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)102))))
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)110))))
		{
			goto IL_0189;
		}
	}
	{
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)116))))
		{
			goto IL_0193;
		}
	}
	{
		goto IL_01e9;
	}

IL_0112:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_35 = ___ctx0;
		NullCheck(L_35);
		L_35->set_NextState_1(((int32_t)19));
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_36 = ___ctx0;
		NullCheck(L_36);
		L_36->set_Return_0((bool)1);
		return (bool)1;
	}

IL_0123:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_37 = ___ctx0;
		NullCheck(L_37);
		L_37->set_NextState_1(1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_38 = ___ctx0;
		NullCheck(L_38);
		L_38->set_Return_0((bool)1);
		return (bool)1;
	}

IL_0133:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_39 = ___ctx0;
		NullCheck(L_39);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_40 = L_39->get_L_2();
		NullCheck(L_40);
		StringBuilder_t * L_41 = L_40->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_42 = ___ctx0;
		NullCheck(L_42);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_43 = L_42->get_L_2();
		NullCheck(L_43);
		int32_t L_44 = L_43->get_input_char_7();
		NullCheck(L_41);
		StringBuilder_t * L_45;
		L_45 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_41, ((int32_t)((uint16_t)L_44)), /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_46 = ___ctx0;
		NullCheck(L_46);
		L_46->set_NextState_1(2);
		return (bool)1;
	}

IL_0159:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_47 = ___ctx0;
		NullCheck(L_47);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_48 = L_47->get_L_2();
		NullCheck(L_48);
		StringBuilder_t * L_49 = L_48->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_50 = ___ctx0;
		NullCheck(L_50);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_51 = L_50->get_L_2();
		NullCheck(L_51);
		int32_t L_52 = L_51->get_input_char_7();
		NullCheck(L_49);
		StringBuilder_t * L_53;
		L_53 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_49, ((int32_t)((uint16_t)L_52)), /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_54 = ___ctx0;
		NullCheck(L_54);
		L_54->set_NextState_1(4);
		return (bool)1;
	}

IL_017f:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_55 = ___ctx0;
		NullCheck(L_55);
		L_55->set_NextState_1(((int32_t)12));
		return (bool)1;
	}

IL_0189:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_56 = ___ctx0;
		NullCheck(L_56);
		L_56->set_NextState_1(((int32_t)16));
		return (bool)1;
	}

IL_0193:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_57 = ___ctx0;
		NullCheck(L_57);
		L_57->set_NextState_1(((int32_t)9));
		return (bool)1;
	}

IL_019d:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_58 = ___ctx0;
		NullCheck(L_58);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_59 = L_58->get_L_2();
		NullCheck(L_59);
		bool L_60 = L_59->get_allow_single_quoted_strings_3();
		if (L_60)
		{
			goto IL_01af;
		}
	}
	{
		return (bool)0;
	}

IL_01af:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_61 = ___ctx0;
		NullCheck(L_61);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_62 = L_61->get_L_2();
		NullCheck(L_62);
		L_62->set_input_char_7(((int32_t)34));
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_63 = ___ctx0;
		NullCheck(L_63);
		L_63->set_NextState_1(((int32_t)23));
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_64 = ___ctx0;
		NullCheck(L_64);
		L_64->set_Return_0((bool)1);
		return (bool)1;
	}

IL_01cd:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_65 = ___ctx0;
		NullCheck(L_65);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_66 = L_65->get_L_2();
		NullCheck(L_66);
		bool L_67 = L_66->get_allow_comments_2();
		if (L_67)
		{
			goto IL_01df;
		}
	}
	{
		return (bool)0;
	}

IL_01df:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_68 = ___ctx0;
		NullCheck(L_68);
		L_68->set_NextState_1(((int32_t)25));
		return (bool)1;
	}

IL_01e9:
	{
		return (bool)0;
	}

IL_01eb:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_69 = ___ctx0;
		NullCheck(L_69);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_70 = L_69->get_L_2();
		NullCheck(L_70);
		bool L_71;
		L_71 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_70, /*hidden argument*/NULL);
		if (L_71)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State2_m18FC22404C21D2E39D6CE90463594278F77780C3 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) < ((int32_t)((int32_t)49))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_input_char_7();
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		StringBuilder_t * L_11 = L_10->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		NullCheck(L_11);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_11, ((int32_t)((uint16_t)L_14)), /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_16 = ___ctx0;
		NullCheck(L_16);
		L_16->set_NextState_1(3);
		return (bool)1;
	}

IL_0056:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_18 = L_17->get_L_2();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_input_char_7();
		V_0 = L_19;
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)48))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0095;
	}

IL_006f:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_21 = ___ctx0;
		NullCheck(L_21);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_22 = L_21->get_L_2();
		NullCheck(L_22);
		StringBuilder_t * L_23 = L_22->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_25 = L_24->get_L_2();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_input_char_7();
		NullCheck(L_23);
		StringBuilder_t * L_27;
		L_27 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_23, ((int32_t)((uint16_t)L_26)), /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_28 = ___ctx0;
		NullCheck(L_28);
		L_28->set_NextState_1(4);
		return (bool)1;
	}

IL_0095:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State3_m1DB27A31AC5E633C880C4CD962B01E699BC49761 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0140;
	}

IL_0005:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		StringBuilder_t * L_8 = L_7->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		NullCheck(L_8);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_8, ((int32_t)((uint16_t)L_11)), /*hidden argument*/NULL);
		goto IL_0140;
	}

IL_004b:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_14 = L_13->get_L_2();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_input_char_7();
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0081;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_17 = L_16->get_L_2();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_input_char_7();
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0091;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_20 = L_19->get_L_2();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_input_char_7();
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_0091;
		}
	}

IL_0081:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->set_Return_0((bool)1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->set_NextState_1(1);
		return (bool)1;
	}

IL_0091:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_25 = L_24->get_L_2();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_input_char_7();
		V_0 = L_26;
		int32_t L_27 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_00d7;
			}
			case 1:
			{
				goto IL_00b2;
			}
			case 2:
			{
				goto IL_00f2;
			}
		}
	}

IL_00b2:
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)69))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)101))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)125))))
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_013e;
	}

IL_00d7:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_32 = ___ctx0;
		NullCheck(L_32);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_33 = L_32->get_L_2();
		NullCheck(L_33);
		Lexer_UngetChar_mE3A03622C15E5E5CFC4CBDB366AF3B0A991A3F5F(L_33, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_34 = ___ctx0;
		NullCheck(L_34);
		L_34->set_Return_0((bool)1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_35 = ___ctx0;
		NullCheck(L_35);
		L_35->set_NextState_1(1);
		return (bool)1;
	}

IL_00f2:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_36 = ___ctx0;
		NullCheck(L_36);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_37 = L_36->get_L_2();
		NullCheck(L_37);
		StringBuilder_t * L_38 = L_37->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_39 = ___ctx0;
		NullCheck(L_39);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_40 = L_39->get_L_2();
		NullCheck(L_40);
		int32_t L_41 = L_40->get_input_char_7();
		NullCheck(L_38);
		StringBuilder_t * L_42;
		L_42 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_38, ((int32_t)((uint16_t)L_41)), /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_43 = ___ctx0;
		NullCheck(L_43);
		L_43->set_NextState_1(5);
		return (bool)1;
	}

IL_0118:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_44 = ___ctx0;
		NullCheck(L_44);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_45 = L_44->get_L_2();
		NullCheck(L_45);
		StringBuilder_t * L_46 = L_45->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_47 = ___ctx0;
		NullCheck(L_47);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_48 = L_47->get_L_2();
		NullCheck(L_48);
		int32_t L_49 = L_48->get_input_char_7();
		NullCheck(L_46);
		StringBuilder_t * L_50;
		L_50 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_46, ((int32_t)((uint16_t)L_49)), /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_51 = ___ctx0;
		NullCheck(L_51);
		L_51->set_NextState_1(7);
		return (bool)1;
	}

IL_013e:
	{
		return (bool)0;
	}

IL_0140:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_52 = ___ctx0;
		NullCheck(L_52);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_53 = L_52->get_L_2();
		NullCheck(L_53);
		bool L_54;
		L_54 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_53, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State4_m438D8333EE904D537CF21B43411C61D96E1824B1 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) == ((int32_t)((int32_t)32))))
		{
			goto IL_0042;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_input_char_7();
		if ((((int32_t)L_8) < ((int32_t)((int32_t)9))))
		{
			goto IL_0052;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		if ((((int32_t)L_11) > ((int32_t)((int32_t)13))))
		{
			goto IL_0052;
		}
	}

IL_0042:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_12 = ___ctx0;
		NullCheck(L_12);
		L_12->set_Return_0((bool)1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_13 = ___ctx0;
		NullCheck(L_13);
		L_13->set_NextState_1(1);
		return (bool)1;
	}

IL_0052:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_input_char_7();
		V_0 = L_16;
		int32_t L_17 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_0098;
			}
			case 1:
			{
				goto IL_0073;
			}
			case 2:
			{
				goto IL_00b3;
			}
		}
	}

IL_0073:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)69))))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)93))))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)101))))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)125))))
		{
			goto IL_0098;
		}
	}
	{
		goto IL_00ff;
	}

IL_0098:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_22 = ___ctx0;
		NullCheck(L_22);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_23 = L_22->get_L_2();
		NullCheck(L_23);
		Lexer_UngetChar_mE3A03622C15E5E5CFC4CBDB366AF3B0A991A3F5F(L_23, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_24 = ___ctx0;
		NullCheck(L_24);
		L_24->set_Return_0((bool)1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_25 = ___ctx0;
		NullCheck(L_25);
		L_25->set_NextState_1(1);
		return (bool)1;
	}

IL_00b3:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_26 = ___ctx0;
		NullCheck(L_26);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_27 = L_26->get_L_2();
		NullCheck(L_27);
		StringBuilder_t * L_28 = L_27->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_29 = ___ctx0;
		NullCheck(L_29);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_30 = L_29->get_L_2();
		NullCheck(L_30);
		int32_t L_31 = L_30->get_input_char_7();
		NullCheck(L_28);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_28, ((int32_t)((uint16_t)L_31)), /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_33 = ___ctx0;
		NullCheck(L_33);
		L_33->set_NextState_1(5);
		return (bool)1;
	}

IL_00d9:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_34 = ___ctx0;
		NullCheck(L_34);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_35 = L_34->get_L_2();
		NullCheck(L_35);
		StringBuilder_t * L_36 = L_35->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_37 = ___ctx0;
		NullCheck(L_37);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_38 = L_37->get_L_2();
		NullCheck(L_38);
		int32_t L_39 = L_38->get_input_char_7();
		NullCheck(L_36);
		StringBuilder_t * L_40;
		L_40 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_36, ((int32_t)((uint16_t)L_39)), /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_41 = ___ctx0;
		NullCheck(L_41);
		L_41->set_NextState_1(7);
		return (bool)1;
	}

IL_00ff:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State5_mA0771BFBEFB4772B338FCF414619F548B44DCD0C (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_input_char_7();
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		StringBuilder_t * L_11 = L_10->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		NullCheck(L_11);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_11, ((int32_t)((uint16_t)L_14)), /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_16 = ___ctx0;
		NullCheck(L_16);
		L_16->set_NextState_1(6);
		return (bool)1;
	}

IL_0056:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State6_mDCB628F9AA8E32F3E442A0E802EFED290DA594FB (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_010d;
	}

IL_0005:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		StringBuilder_t * L_8 = L_7->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		NullCheck(L_8);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_8, ((int32_t)((uint16_t)L_11)), /*hidden argument*/NULL);
		goto IL_010d;
	}

IL_004b:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_14 = L_13->get_L_2();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_input_char_7();
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0081;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_17 = L_16->get_L_2();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_input_char_7();
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0091;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_20 = L_19->get_L_2();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_input_char_7();
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_0091;
		}
	}

IL_0081:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->set_Return_0((bool)1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->set_NextState_1(1);
		return (bool)1;
	}

IL_0091:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_25 = L_24->get_L_2();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_input_char_7();
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)44))))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)69))))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)93))))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)101))))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)125))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_010b;
	}

IL_00ca:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_32 = ___ctx0;
		NullCheck(L_32);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_33 = L_32->get_L_2();
		NullCheck(L_33);
		Lexer_UngetChar_mE3A03622C15E5E5CFC4CBDB366AF3B0A991A3F5F(L_33, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_34 = ___ctx0;
		NullCheck(L_34);
		L_34->set_Return_0((bool)1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_35 = ___ctx0;
		NullCheck(L_35);
		L_35->set_NextState_1(1);
		return (bool)1;
	}

IL_00e5:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_36 = ___ctx0;
		NullCheck(L_36);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_37 = L_36->get_L_2();
		NullCheck(L_37);
		StringBuilder_t * L_38 = L_37->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_39 = ___ctx0;
		NullCheck(L_39);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_40 = L_39->get_L_2();
		NullCheck(L_40);
		int32_t L_41 = L_40->get_input_char_7();
		NullCheck(L_38);
		StringBuilder_t * L_42;
		L_42 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_38, ((int32_t)((uint16_t)L_41)), /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_43 = ___ctx0;
		NullCheck(L_43);
		L_43->set_NextState_1(7);
		return (bool)1;
	}

IL_010b:
	{
		return (bool)0;
	}

IL_010d:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_44 = ___ctx0;
		NullCheck(L_44);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_45 = L_44->get_L_2();
		NullCheck(L_45);
		bool L_46;
		L_46 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_45, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State7_mD3C331A2E7D7D1F82B7B854BF92423FEE90ED748 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_input_char_7();
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		StringBuilder_t * L_11 = L_10->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		NullCheck(L_11);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_11, ((int32_t)((uint16_t)L_14)), /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_16 = ___ctx0;
		NullCheck(L_16);
		L_16->set_NextState_1(8);
		return (bool)1;
	}

IL_0056:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_18 = L_17->get_L_2();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_input_char_7();
		V_0 = L_19;
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)43))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)45))))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_009d;
	}

IL_0077:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_22 = ___ctx0;
		NullCheck(L_22);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_23 = L_22->get_L_2();
		NullCheck(L_23);
		StringBuilder_t * L_24 = L_23->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_25 = ___ctx0;
		NullCheck(L_25);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_26 = L_25->get_L_2();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_input_char_7();
		NullCheck(L_24);
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_24, ((int32_t)((uint16_t)L_27)), /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_29 = ___ctx0;
		NullCheck(L_29);
		L_29->set_NextState_1(8);
		return (bool)1;
	}

IL_009d:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State8_mBE12342F86DA75CDCCE0166B71A08AD21012081B (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_00d7;
	}

IL_0005:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		StringBuilder_t * L_8 = L_7->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		NullCheck(L_8);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_8, ((int32_t)((uint16_t)L_11)), /*hidden argument*/NULL);
		goto IL_00d7;
	}

IL_004b:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_14 = L_13->get_L_2();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_input_char_7();
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0081;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_17 = L_16->get_L_2();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_input_char_7();
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0091;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_20 = L_19->get_L_2();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_input_char_7();
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_0091;
		}
	}

IL_0081:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->set_Return_0((bool)1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->set_NextState_1(1);
		return (bool)1;
	}

IL_0091:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_25 = L_24->get_L_2();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_input_char_7();
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)44))))
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)93))))
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)125))))
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00d5;
	}

IL_00ba:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_30 = ___ctx0;
		NullCheck(L_30);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_31 = L_30->get_L_2();
		NullCheck(L_31);
		Lexer_UngetChar_mE3A03622C15E5E5CFC4CBDB366AF3B0A991A3F5F(L_31, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_32 = ___ctx0;
		NullCheck(L_32);
		L_32->set_Return_0((bool)1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_33 = ___ctx0;
		NullCheck(L_33);
		L_33->set_NextState_1(1);
		return (bool)1;
	}

IL_00d5:
	{
		return (bool)0;
	}

IL_00d7:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_34 = ___ctx0;
		NullCheck(L_34);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_35 = L_34->get_L_2();
		NullCheck(L_35);
		bool L_36;
		L_36 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_35, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State9_mC1A44112FC8D34C52AAA153F3540010AE5112EA8 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)114))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)10));
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State10_mD7C3CA14735374EBFFA7CE841D426621AFE84E06 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)117))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)11));
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State11_m6FE899F8886F72C5182F353D66FFDE045A161C2B (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)101))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_Return_0((bool)1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(1);
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State12_m062185A7E9BCB0573B11051685A83EBB89C9CE7B (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)97))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)13));
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State13_m9E537B36446C0A2A01BBEEC392A9A9F78B116349 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)108))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)14));
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State14_m40E897879B025DE053DD6E2A8E339F2A8FD4C3C8 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)115))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)15));
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State15_mCB34A64C58D8C8585CFB33AE5EFBBEE3EE44C4C7 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)101))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_Return_0((bool)1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(1);
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State16_m5859BCC8B00750F0A33551E610E1F42878181160 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)117))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)17));
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State17_mC2C5E68538BC59CF3E0E6C8EC47A46AA6AFA5372 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)108))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)18));
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State18_m54EB044D2D0CCE02812F5787188305E215BB277D (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)108))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_Return_0((bool)1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(1);
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State19_m1898DD750D852E8138B3969E3A5D4E8770888A8D (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0076;
	}

IL_0005:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)34))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0042;
		}
	}
	{
		goto IL_0054;
	}

IL_0026:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		Lexer_UngetChar_mE3A03622C15E5E5CFC4CBDB366AF3B0A991A3F5F(L_6, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_Return_0((bool)1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(((int32_t)20));
		return (bool)1;
	}

IL_0042:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_StateStack_3(((int32_t)19));
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->set_NextState_1(((int32_t)21));
		return (bool)1;
	}

IL_0054:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		StringBuilder_t * L_13 = L_12->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_input_char_7();
		NullCheck(L_13);
		StringBuilder_t * L_17;
		L_17 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_13, ((int32_t)((uint16_t)L_16)), /*hidden argument*/NULL);
		goto IL_0076;
	}

IL_0076:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		bool L_20;
		L_20 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State20_mF527A5BA692B265653D87E99C7984A2377B0715E (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_Return_0((bool)1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(1);
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State21_mCA8D0CA1884918738E3128DCB932FC83A11560E1 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_0078;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0078;
			}
			case 3:
			{
				goto IL_006e;
			}
		}
	}

IL_0031:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)34))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)39))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)47))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)98))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)102))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)110))))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_00a7;
	}

IL_006e:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_14 = ___ctx0;
		NullCheck(L_14);
		L_14->set_NextState_1(((int32_t)22));
		return (bool)1;
	}

IL_0078:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		StringBuilder_t * L_17 = L_16->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		int32_t L_20 = L_19->get_input_char_7();
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		Il2CppChar L_21;
		L_21 = Lexer_ProcessEscChar_mCE995A93C4D6717DB6ADD28E99310B28DF5B98D6(L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_17, L_21, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_23 = ___ctx0;
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_24 = ___ctx0;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_StateStack_3();
		NullCheck(L_23);
		L_23->set_NextState_1(L_25);
		return (bool)1;
	}

IL_00a7:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State22_mAEB6B27B5854648089D58AC7FA7C5E5295F72C31 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)4096);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		L_1->set_unichar_13(0);
		goto IL_00ef;
	}

IL_0019:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_003d;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0085;
		}
	}

IL_003d:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_input_char_7();
		if ((((int32_t)L_10) < ((int32_t)((int32_t)65))))
		{
			goto IL_0061;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_input_char_7();
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0085;
		}
	}

IL_0061:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_input_char_7();
		if ((((int32_t)L_16) < ((int32_t)((int32_t)97))))
		{
			goto IL_00ed;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_18 = L_17->get_L_2();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_input_char_7();
		if ((((int32_t)L_19) > ((int32_t)((int32_t)102))))
		{
			goto IL_00ed;
		}
	}

IL_0085:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_20 = ___ctx0;
		NullCheck(L_20);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_21 = L_20->get_L_2();
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_unichar_13();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_25 = L_24->get_L_2();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_input_char_7();
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = Lexer_HexValue_mE03E46BCC5DDEA643F42888E73FEBA088AE947FD(L_26, /*hidden argument*/NULL);
		int32_t L_28 = V_1;
		NullCheck(L_22);
		L_22->set_unichar_13(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)L_28)))));
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		int32_t L_30 = V_1;
		V_1 = ((int32_t)((int32_t)L_30/(int32_t)((int32_t)16)));
		int32_t L_31 = V_0;
		if ((!(((uint32_t)L_31) == ((uint32_t)4))))
		{
			goto IL_00e8;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_32 = ___ctx0;
		NullCheck(L_32);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_33 = L_32->get_L_2();
		NullCheck(L_33);
		StringBuilder_t * L_34 = L_33->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_35 = ___ctx0;
		NullCheck(L_35);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_36 = L_35->get_L_2();
		NullCheck(L_36);
		int32_t L_37 = L_36->get_unichar_13();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_38;
		L_38 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_37, /*hidden argument*/NULL);
		NullCheck(L_34);
		StringBuilder_t * L_39;
		L_39 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_34, L_38, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_40 = ___ctx0;
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_41 = ___ctx0;
		NullCheck(L_41);
		int32_t L_42 = L_41->get_StateStack_3();
		NullCheck(L_40);
		L_40->set_NextState_1(L_42);
		return (bool)1;
	}

IL_00e8:
	{
		goto IL_00ef;
	}

IL_00ed:
	{
		return (bool)0;
	}

IL_00ef:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_43 = ___ctx0;
		NullCheck(L_43);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_44 = L_43->get_L_2();
		NullCheck(L_44);
		bool L_45;
		L_45 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State23_m45378548EB0DA0B9093316B92A64139AF3926A71 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0076;
	}

IL_0005:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0042;
		}
	}
	{
		goto IL_0054;
	}

IL_0026:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		Lexer_UngetChar_mE3A03622C15E5E5CFC4CBDB366AF3B0A991A3F5F(L_6, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_Return_0((bool)1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(((int32_t)24));
		return (bool)1;
	}

IL_0042:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_StateStack_3(((int32_t)23));
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->set_NextState_1(((int32_t)21));
		return (bool)1;
	}

IL_0054:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		StringBuilder_t * L_13 = L_12->get_string_buffer_10();
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_input_char_7();
		NullCheck(L_13);
		StringBuilder_t * L_17;
		L_17 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_13, ((int32_t)((uint16_t)L_16)), /*hidden argument*/NULL);
		goto IL_0076;
	}

IL_0076:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		bool L_20;
		L_20 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State24_m1A2856DF9783F9DCF51AA447629BF3D3208DA718 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)39))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0042;
	}

IL_0025:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_7 = ___ctx0;
		NullCheck(L_7);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_8 = L_7->get_L_2();
		NullCheck(L_8);
		L_8->set_input_char_7(((int32_t)34));
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_Return_0((bool)1);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->set_NextState_1(1);
		return (bool)1;
	}

IL_0042:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State25_m12AA50C14A9CDDB703EBED52E5B6D3BE61D204AC (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_1, /*hidden argument*/NULL);
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)42))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)47))))
		{
			goto IL_0037;
		}
	}
	{
		goto IL_0041;
	}

IL_002d:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(((int32_t)27));
		return (bool)1;
	}

IL_0037:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_NextState_1(((int32_t)26));
		return (bool)1;
	}

IL_0041:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State26_mE2A419A4B83E522F0408A0D3F8E77B19DE0FDDD0 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	{
		goto IL_0020;
	}

IL_0005:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0020;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		L_3->set_NextState_1(1);
		return (bool)1;
	}

IL_0020:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_4 = ___ctx0;
		NullCheck(L_4);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_5 = L_4->get_L_2();
		NullCheck(L_5);
		bool L_6;
		L_6 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State27_mD1414E32908CC21BB2415F8C602D9D01DC653C37 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	{
		goto IL_0021;
	}

IL_0005:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0021;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		L_3->set_NextState_1(((int32_t)28));
		return (bool)1;
	}

IL_0021:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_4 = ___ctx0;
		NullCheck(L_4);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_5 = L_4->get_L_2();
		NullCheck(L_5);
		bool L_6;
		L_6 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State28_m9B05ADB98CACE71E75F06D70077146FAAE5B4091 (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	{
		goto IL_0041;
	}

IL_0005:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0041;
	}

IL_001c:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0037;
		}
	}
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(1);
		return (bool)1;
	}

IL_0037:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)27));
		return (bool)1;
	}

IL_0041:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		bool L_10;
		L_10 = Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_GetChar_m97E0437103FFEEB1CED66F408D4203C43921A59A (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Lexer_NextChar_mC99507CB61E94C584BDA6B01DB6798080BC5B3AB(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		V_0 = L_1;
		__this->set_input_char_7(L_1);
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		return (bool)1;
	}

IL_0017:
	{
		__this->set_end_of_input_4((bool)1);
		return (bool)0;
	}
}
// System.Int32 LitJson.Lexer::NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_mC99507CB61E94C584BDA6B01DB6798080BC5B3AB (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_input_buffer_6();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = __this->get_input_buffer_6();
		V_0 = L_1;
		__this->set_input_buffer_6(0);
		int32_t L_2 = V_0;
		return L_2;
	}

IL_001b:
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_3 = __this->get_reader_8();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_3);
		return L_4;
	}
}
// System.Boolean LitJson.Lexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_NextToken_m9B5E8395C93306F40AEFEE4D9FC1BF6E247D2467 (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * V_0 = NULL;
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_0 = __this->get_fsm_context_5();
		NullCheck(L_0);
		L_0->set_Return_0((bool)0);
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		StateHandlerU5BU5D_tA42C866E91767E432833D09BB36EA2EFE6D509DB* L_1 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_fsm_handler_table_1();
		int32_t L_2 = __this->get_state_9();
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * L_5 = V_0;
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_6 = __this->get_fsm_context_5();
		NullCheck(L_5);
		bool L_7;
		L_7 = StateHandler_Invoke_m4E6E9FE5B338F0B517C51FCCDE9AD9BF3D7A6B2A(L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_8 = __this->get_input_char_7();
		JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD * L_9 = (JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t32F0A484591AE93A9E8477E741B066B8CD40A0CD_il2cpp_TypeInfo_var)));
		JsonException__ctor_m0654C739AE3716DA887B41E6D3F0A845D17EB3F5(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Lexer_NextToken_m9B5E8395C93306F40AEFEE4D9FC1BF6E247D2467_RuntimeMethod_var)));
	}

IL_0038:
	{
		bool L_10 = __this->get_end_of_input_4();
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0045:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_11 = __this->get_fsm_context_5();
		NullCheck(L_11);
		bool L_12 = L_11->get_Return_0();
		if (!L_12)
		{
			goto IL_00c1;
		}
	}
	{
		StringBuilder_t * L_13 = __this->get_string_buffer_10();
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		__this->set_string_value_11(L_14);
		StringBuilder_t * L_15 = __this->get_string_buffer_10();
		StringBuilder_t * L_16 = __this->get_string_buffer_10();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Remove_m6ABF9CF3D10160EB52E0768262A9B179F987571E(L_15, 0, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = ((Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9_il2cpp_TypeInfo_var))->get_fsm_return_table_0();
		int32_t L_20 = __this->get_state_9();
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		__this->set_token_12(L_22);
		int32_t L_23 = __this->get_token_12();
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)65542)))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_24 = __this->get_input_char_7();
		__this->set_token_12(L_24);
	}

IL_00ae:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_25 = __this->get_fsm_context_5();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_NextState_1();
		__this->set_state_9(L_26);
		return (bool)1;
	}

IL_00c1:
	{
		FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * L_27 = __this->get_fsm_context_5();
		NullCheck(L_27);
		int32_t L_28 = L_27->get_NextState_1();
		__this->set_state_9(L_28);
		goto IL_000c;
	}
}
// System.Void LitJson.Lexer::UngetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_UngetChar_mE3A03622C15E5E5CFC4CBDB366AF3B0A991A3F5F (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_input_char_7();
		__this->set_input_buffer_6(L_0);
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
// Conversion methods for marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320_marshal_pinvoke(const ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320& unmarshaled, ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320_marshal_pinvoke_back(const ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320_marshaled_pinvoke& marshaled, ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320_marshal_pinvoke_cleanup(ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320_marshal_com(const ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320& unmarshaled, ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320_marshal_com_back(const ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320_marshaled_com& marshaled, ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320_marshal_com_cleanup(ObjectMetadata_tD4A781F50B9640BA53C4603FC80AF9BD2BC2F320_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object LitJson.OrderedDictionaryEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OrderedDictionaryEnumerator_get_Current_m79AE9AA67E8EA7B6A69106895BF4968EF2C56EB5 (OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_0;
		L_0 = OrderedDictionaryEnumerator_get_Entry_m4A6491528CE6ED6094B80F67CBE58DB1C33E2737(__this, /*hidden argument*/NULL);
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_1 = L_0;
		RuntimeObject * L_2 = Box(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  OrderedDictionaryEnumerator_get_Entry_m4A6491528CE6ED6094B80F67CBE58DB1C33E2737 (OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t71D7E5B167A4E3A34ED0D8C54CF750CDBEB60596_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m3C46D4EC0CED1FF3059866EA1197FA24A55EE2A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m8DF21BDD7A90B0DC9E4429B89228DA6FD4EDB7EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t71D7E5B167A4E3A34ED0D8C54CF750CDBEB60596_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Key_m3C46D4EC0CED1FF3059866EA1197FA24A55EE2A6_inline((KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m3C46D4EC0CED1FF3059866EA1197FA24A55EE2A6_RuntimeMethod_var);
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_3;
		L_3 = KeyValuePair_2_get_Value_m8DF21BDD7A90B0DC9E4429B89228DA6FD4EDB7EF_inline((KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m8DF21BDD7A90B0DC9E4429B89228DA6FD4EDB7EF_RuntimeMethod_var);
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_4;
		memset((&L_4), 0, sizeof(L_4));
		DictionaryEntry__ctor_mF383FECC02E6A6FA003D609E63697A9FC010BCB4((&L_4), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OrderedDictionaryEnumerator_get_Key_m9D8D9469DEF1D7E577CA75D76143FC563AC7AB0A (OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t71D7E5B167A4E3A34ED0D8C54CF750CDBEB60596_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m3C46D4EC0CED1FF3059866EA1197FA24A55EE2A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t71D7E5B167A4E3A34ED0D8C54CF750CDBEB60596_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Key_m3C46D4EC0CED1FF3059866EA1197FA24A55EE2A6_inline((KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m3C46D4EC0CED1FF3059866EA1197FA24A55EE2A6_RuntimeMethod_var);
		return L_2;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OrderedDictionaryEnumerator_get_Value_m03CA27C8722A053552C485DD85F094A37271A7B8 (OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t71D7E5B167A4E3A34ED0D8C54CF750CDBEB60596_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m8DF21BDD7A90B0DC9E4429B89228DA6FD4EDB7EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t71D7E5B167A4E3A34ED0D8C54CF750CDBEB60596_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		JsonData_t8C2141CE92C969FF59E31E49F23A392EAB6FF638 * L_2;
		L_2 = KeyValuePair_2_get_Value_m8DF21BDD7A90B0DC9E4429B89228DA6FD4EDB7EF_inline((KeyValuePair_2_tED2B620DC344A991F80E8DDA0442DE1847A9D921 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m8DF21BDD7A90B0DC9E4429B89228DA6FD4EDB7EF_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_m7ED8BFEB079572DE65EBF63E82D39B3CC5B05FC1 (OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309 * __this, RuntimeObject* ___enumerator0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___enumerator0;
		__this->set_list_enumerator_0(L_0);
		return;
	}
}
// System.Boolean LitJson.OrderedDictionaryEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OrderedDictionaryEnumerator_MoveNext_mA5FF0B3BF7912DE614B1E419651ADEA30DDA87BD (OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void LitJson.OrderedDictionaryEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator_Reset_m868B266302182317917775839CDFDDC749E2B4F4 (OrderedDictionaryEnumerator_tCA51F3F03550310AC3F0C38F6F5E4788B1DE6309 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
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
// Conversion methods for marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521_marshal_pinvoke(const PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521& unmarshaled, PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
IL2CPP_EXTERN_C void PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521_marshal_pinvoke_back(const PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521_marshaled_pinvoke& marshaled, PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521_marshal_pinvoke_cleanup(PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521_marshal_com(const PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521& unmarshaled, PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521_marshaled_com& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
IL2CPP_EXTERN_C void PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521_marshal_com_back(const PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521_marshaled_com& marshaled, PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521_marshal_com_cleanup(PropertyMetadata_t4D9570FBF9FFA7DD9AEE07B2F1D256B23C41F521_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperFactory__ctor_mE5D4DB3B83CC881E6C34F1B0466FE973B9F4EA9E (WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_Invoke_m1F9972AF5C88AD99C3F5E144A46115DD1A520866 (WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * __this, const RuntimeMethod* method)
{
	RuntimeObject* result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef RuntimeObject* (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject* (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef RuntimeObject* (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult LitJson.WrapperFactory::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_BeginInvoke_m77A01413B526C1A0DEE61893FF19227ACA32F790 (WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// LitJson.IJsonWrapper LitJson.WrapperFactory::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_EndInvoke_m33BCDFB9DB619F8DAF97115F47FFABE4D5501AA1 (WrapperFactory_t10E0F13D67EB0BC5B4090BDD957BA1242DE1E6F5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_mC3D32B71F932C8D5BB5E23C09434ADE364EA6ECA (WriterContext_t958BD9CD35F257A2E5C41E351007B12A6E566169 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateHandler__ctor_mC1985735EAE444B33AD70D5DF012CCD0EDCE97AC (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_Invoke_m4E6E9FE5B338F0B517C51FCCDE9AD9BF3D7A6B2A (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * __this, FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___ctx0);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___ctx0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___ctx0);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___ctx0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * >::Invoke(targetMethod, targetThis, ___ctx0);
					else
						result = GenericVirtFuncInvoker1< bool, FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * >::Invoke(targetMethod, targetThis, ___ctx0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0);
					else
						result = VirtFuncInvoker1< bool, FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult LitJson.Lexer/StateHandler::BeginInvoke(LitJson.FsmContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateHandler_BeginInvoke_mC846E808DBF1C18AE242961FFC4D4FA1DB039D45 (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * __this, FsmContext_t62B5B8EEAB49E1B501D02819D2E3D34D9BEA916F * ___ctx0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___ctx0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean LitJson.Lexer/StateHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_EndInvoke_m2155DBDDC03774F30B2EFD6652FC0252B674D1DD (StateHandler_t6FC074A01FC56770C7167674E8D40CA001BEE136 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_m2B10EA1A7092905DF573A861AD4AAA4339CF35E1_inline (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_token_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_get_Value_m537D1C8B88323E383A49CC60518C1C1B5D2683B6_inline (JsonReader_tA0D7429F2F0259C79A6CD4A0D666B99C554B97B0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_token_value_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_mB6D4DB3D5A1AA3399673E4D55CF827C460BDC401_inline (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_string_value_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_mFEE13AD7088F64BCE07E92583F59D7A583FA3459_inline (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_end_of_input_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_m3CEA90DD0FE332D6E5FEAB49FA3618B41B8B4764_inline (Lexer_t6CB0C2CD02C0FF8760566DCDBC34ADEA5D3424E9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_token_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
