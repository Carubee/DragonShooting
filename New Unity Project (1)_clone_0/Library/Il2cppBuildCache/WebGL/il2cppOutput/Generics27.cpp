#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Comparer`1<System.Nullable`1<Fusion.Rotation>>
struct Comparer_1_t58CD692E407CA2E87E86974C43189EC85A8A3274;
// System.Collections.Generic.Comparer`1<System.Nullable`1<UnityEngine.Vector3>>
struct Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8;
// System.Collections.Generic.Comparer`1<System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>
struct Comparer_1_t62856919F1778C6A50B33A5FDF93A5472D774C40;
// System.Collections.Generic.Comparer`1<System.Boolean>
struct Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149;
// System.Collections.Generic.Comparer`1<System.Int32>
struct Comparer_1_t3E3093220DB5D33A829C91C1DFDBDE2F42ECEDC7;
// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84;
// System.Collections.Generic.Comparer`1<System.Single>
struct Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<Fusion.Rotation>>
struct EqualityComparer_1_tCB9FDF936B8E9BD91BF7D815187606420718341E;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<UnityEngine.Vector3>>
struct EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC;
// System.Collections.Generic.EqualityComparer`1<System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>
struct EqualityComparer_1_t4D507ED6A994BA8D2E0018587505D68FCC17686D;
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7;
// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274;
// System.Func`2<System.Int32,System.Object>
struct Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_tF437149CAED78D4A68294D431DE692A78F7D67B3;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.WeakReference`1<System.Object>
struct WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>
struct WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>
struct WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>
struct WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITuple_t559B1A91B496A81AAFEE74F54ACD49FE8CDE2215_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IValueTupleInternal_tBB61ABF7EC04FC4668CF806362AC0C76B4E75F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralEBAA23633770B89931ABB5730B524910907A5C7B;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mCEFFEBB8B3C80BB1444574E16481B30223474FA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_5_System_IComparable_CompareTo_mDC7BFF8CE89C0C7EC2700299D02B8A0EF49999E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_m94E3660461F23295198F10CE717AE9378431C778_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_8_System_IComparable_CompareTo_mC2981E36D2482DB9AE0607C12FF5C14A781065BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_8__ctor_mBF9F8FA834360FF339CB7631CBB0D45759F51768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_GetObjectData_m7C63330FAC22CBE86AA1BDE2F34DFDA8B1E41272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_mC76935DFFEF0678A77A4811865B9F4D350D72741_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Comparer`1<System.Nullable`1<Fusion.Rotation>>
struct Comparer_1_t58CD692E407CA2E87E86974C43189EC85A8A3274  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t58CD692E407CA2E87E86974C43189EC85A8A3274_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t58CD692E407CA2E87E86974C43189EC85A8A3274 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_t58CD692E407CA2E87E86974C43189EC85A8A3274_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_t58CD692E407CA2E87E86974C43189EC85A8A3274 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_t58CD692E407CA2E87E86974C43189EC85A8A3274 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_t58CD692E407CA2E87E86974C43189EC85A8A3274 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.Comparer`1<System.Nullable`1<UnityEngine.Vector3>>
struct Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.Comparer`1<System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>
struct Comparer_1_t62856919F1778C6A50B33A5FDF93A5472D774C40  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t62856919F1778C6A50B33A5FDF93A5472D774C40_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t62856919F1778C6A50B33A5FDF93A5472D774C40 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_t62856919F1778C6A50B33A5FDF93A5472D774C40_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_t62856919F1778C6A50B33A5FDF93A5472D774C40 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_t62856919F1778C6A50B33A5FDF93A5472D774C40 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_t62856919F1778C6A50B33A5FDF93A5472D774C40 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.Comparer`1<System.Boolean>
struct Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.Comparer`1<System.Int32>
struct Comparer_1_t3E3093220DB5D33A829C91C1DFDBDE2F42ECEDC7  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t3E3093220DB5D33A829C91C1DFDBDE2F42ECEDC7_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t3E3093220DB5D33A829C91C1DFDBDE2F42ECEDC7 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_t3E3093220DB5D33A829C91C1DFDBDE2F42ECEDC7_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_t3E3093220DB5D33A829C91C1DFDBDE2F42ECEDC7 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_t3E3093220DB5D33A829C91C1DFDBDE2F42ECEDC7 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_t3E3093220DB5D33A829C91C1DFDBDE2F42ECEDC7 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.Comparer`1<System.Single>
struct Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<Fusion.Rotation>>
struct EqualityComparer_1_tCB9FDF936B8E9BD91BF7D815187606420718341E  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tCB9FDF936B8E9BD91BF7D815187606420718341E_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tCB9FDF936B8E9BD91BF7D815187606420718341E * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tCB9FDF936B8E9BD91BF7D815187606420718341E_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tCB9FDF936B8E9BD91BF7D815187606420718341E * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tCB9FDF936B8E9BD91BF7D815187606420718341E ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tCB9FDF936B8E9BD91BF7D815187606420718341E * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<UnityEngine.Vector3>>
struct EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>
struct EqualityComparer_1_t4D507ED6A994BA8D2E0018587505D68FCC17686D  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t4D507ED6A994BA8D2E0018587505D68FCC17686D_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t4D507ED6A994BA8D2E0018587505D68FCC17686D * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t4D507ED6A994BA8D2E0018587505D68FCC17686D_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t4D507ED6A994BA8D2E0018587505D68FCC17686D * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t4D507ED6A994BA8D2E0018587505D68FCC17686D ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t4D507ED6A994BA8D2E0018587505D68FCC17686D * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
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


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
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

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
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

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___list_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_list_0() const { return ___list_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
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


// System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>
struct ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC 
{
public:
	// T1 System.ValueTuple`5::Item1
	float ___Item1_0;
	// T2 System.ValueTuple`5::Item2
	float ___Item2_1;
	// T3 System.ValueTuple`5::Item3
	int32_t ___Item3_2;
	// T4 System.ValueTuple`5::Item4
	int32_t ___Item4_3;
	// T5 System.ValueTuple`5::Item5
	float ___Item5_4;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC, ___Item1_0)); }
	inline float get_Item1_0() const { return ___Item1_0; }
	inline float* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(float value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC, ___Item2_1)); }
	inline float get_Item2_1() const { return ___Item2_1; }
	inline float* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(float value)
	{
		___Item2_1 = value;
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC, ___Item3_2)); }
	inline int32_t get_Item3_2() const { return ___Item3_2; }
	inline int32_t* get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(int32_t value)
	{
		___Item3_2 = value;
	}

	inline static int32_t get_offset_of_Item4_3() { return static_cast<int32_t>(offsetof(ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC, ___Item4_3)); }
	inline int32_t get_Item4_3() const { return ___Item4_3; }
	inline int32_t* get_address_of_Item4_3() { return &___Item4_3; }
	inline void set_Item4_3(int32_t value)
	{
		___Item4_3 = value;
	}

	inline static int32_t get_offset_of_Item5_4() { return static_cast<int32_t>(offsetof(ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC, ___Item5_4)); }
	inline float get_Item5_4() const { return ___Item5_4; }
	inline float* get_address_of_Item5_4() { return &___Item5_4; }
	inline void set_Item5_4(float value)
	{
		___Item5_4 = value;
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
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


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
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


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___source_3)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___selector_5)); }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * get_selector_5() const { return ___selector_5; }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>
struct WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B, ___source_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_source_3() const { return ___source_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B, ___selector_5)); }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
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


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___selector_5)); }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * get_selector_5() const { return ___selector_5; }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>
struct WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E, ___selector_5)); }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
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


// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___list_0)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_list_0() const { return ___list_0; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
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


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.WeakReference`1<System.Object>
struct WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76, ___handle_0)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_handle_0() const { return ___handle_0; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_trackResurrection_1() { return static_cast<int32_t>(offsetof(WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76, ___trackResurrection_1)); }
	inline bool get_trackResurrection_1() const { return ___trackResurrection_1; }
	inline bool* get_address_of_trackResurrection_1() { return &___trackResurrection_1; }
	inline void set_trackResurrection_1(bool value)
	{
		___trackResurrection_1 = value;
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
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


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>
struct WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4, ___source_3)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_source_3() const { return ___source_3; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4, ___selector_5)); }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4, ___enumerator_6)); }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
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

// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Fusion.Rotation/RotationTypes
struct RotationTypes_t455502E0AB6A719D55829AC8900390E08552D86A 
{
public:
	// System.Int32 Fusion.Rotation/RotationTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotationTypes_t455502E0AB6A719D55829AC8900390E08552D86A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>
struct ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D 
{
public:
	// T1 System.ValueTuple`1::Item1
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___Item1_0;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D, ___Item1_0)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_Item1_0() const { return ___Item1_0; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___Item1_0 = value;
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A, ___source_3)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3, ___source_3)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_source_3() const { return ___source_3; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3, ___enumerator_5)); }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___source_3)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_source_3() const { return ___source_3; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___selector_5)); }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * get_selector_5() const { return ___selector_5; }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___enumerator_6)); }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
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

// Fusion.Rotation
struct Rotation_t65F7B244F415374B1CE2F90494FF228725A8C68B 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Fusion.Rotation/RotationTypes Fusion.Rotation::Type
			int32_t ___Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___quaternion_1_OffsetPadding[4];
			// UnityEngine.Quaternion Fusion.Rotation::quaternion
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___quaternion_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___quaternion_1_OffsetPadding_forAlignmentOnly[4];
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___quaternion_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___euler_2_OffsetPadding[4];
			// UnityEngine.Vector3 Fusion.Rotation::euler
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___euler_2_OffsetPadding_forAlignmentOnly[4];
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___x_3_OffsetPadding[4];
			// System.Single Fusion.Rotation::x
			float ___x_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___x_3_OffsetPadding_forAlignmentOnly[4];
			float ___x_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___y_4_OffsetPadding[8];
			// System.Single Fusion.Rotation::y
			float ___y_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___y_4_OffsetPadding_forAlignmentOnly[8];
			float ___y_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___z_5_OffsetPadding[12];
			// System.Single Fusion.Rotation::z
			float ___z_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___z_5_OffsetPadding_forAlignmentOnly[12];
			float ___z_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___w_6_OffsetPadding[16];
			// System.Single Fusion.Rotation::w
			float ___w_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___w_6_OffsetPadding_forAlignmentOnly[16];
			float ___w_6_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(Rotation_t65F7B244F415374B1CE2F90494FF228725A8C68B, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_quaternion_1() { return static_cast<int32_t>(offsetof(Rotation_t65F7B244F415374B1CE2F90494FF228725A8C68B, ___quaternion_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_quaternion_1() const { return ___quaternion_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_quaternion_1() { return &___quaternion_1; }
	inline void set_quaternion_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___quaternion_1 = value;
	}

	inline static int32_t get_offset_of_euler_2() { return static_cast<int32_t>(offsetof(Rotation_t65F7B244F415374B1CE2F90494FF228725A8C68B, ___euler_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_euler_2() const { return ___euler_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_euler_2() { return &___euler_2; }
	inline void set_euler_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___euler_2 = value;
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(Rotation_t65F7B244F415374B1CE2F90494FF228725A8C68B, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(Rotation_t65F7B244F415374B1CE2F90494FF228725A8C68B, ___y_4)); }
	inline float get_y_4() const { return ___y_4; }
	inline float* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(float value)
	{
		___y_4 = value;
	}

	inline static int32_t get_offset_of_z_5() { return static_cast<int32_t>(offsetof(Rotation_t65F7B244F415374B1CE2F90494FF228725A8C68B, ___z_5)); }
	inline float get_z_5() const { return ___z_5; }
	inline float* get_address_of_z_5() { return &___z_5; }
	inline void set_z_5(float value)
	{
		___z_5 = value;
	}

	inline static int32_t get_offset_of_w_6() { return static_cast<int32_t>(offsetof(Rotation_t65F7B244F415374B1CE2F90494FF228725A8C68B, ___w_6)); }
	inline float get_w_6() const { return ___w_6; }
	inline float* get_address_of_w_6() { return &___w_6; }
	inline void set_w_6(float value)
	{
		___w_6 = value;
	}
};


// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Object>
struct Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<Fusion.Rotation>
struct Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 
{
public:
	// T System.Nullable`1::value
	Rotation_t65F7B244F415374B1CE2F90494FF228725A8C68B  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20, ___value_0)); }
	inline Rotation_t65F7B244F415374B1CE2F90494FF228725A8C68B  get_value_0() const { return ___value_0; }
	inline Rotation_t65F7B244F415374B1CE2F90494FF228725A8C68B * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Rotation_t65F7B244F415374B1CE2F90494FF228725A8C68B  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>
struct ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A 
{
public:
	// T1 System.ValueTuple`8::Item1
	bool ___Item1_0;
	// T2 System.ValueTuple`8::Item2
	RuntimeObject * ___Item2_1;
	// T3 System.ValueTuple`8::Item3
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___Item3_2;
	// T4 System.ValueTuple`8::Item4
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  ___Item4_3;
	// T5 System.ValueTuple`8::Item5
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___Item5_4;
	// T6 System.ValueTuple`8::Item6
	bool ___Item6_5;
	// T7 System.ValueTuple`8::Item7
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___Item7_6;
	// TRest System.ValueTuple`8::Rest
	ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  ___Rest_7;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A, ___Item1_0)); }
	inline bool get_Item1_0() const { return ___Item1_0; }
	inline bool* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(bool value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A, ___Item3_2)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_Item3_2() const { return ___Item3_2; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___Item3_2 = value;
	}

	inline static int32_t get_offset_of_Item4_3() { return static_cast<int32_t>(offsetof(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A, ___Item4_3)); }
	inline Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  get_Item4_3() const { return ___Item4_3; }
	inline Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * get_address_of_Item4_3() { return &___Item4_3; }
	inline void set_Item4_3(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  value)
	{
		___Item4_3 = value;
	}

	inline static int32_t get_offset_of_Item5_4() { return static_cast<int32_t>(offsetof(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A, ___Item5_4)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_Item5_4() const { return ___Item5_4; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_Item5_4() { return &___Item5_4; }
	inline void set_Item5_4(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___Item5_4 = value;
	}

	inline static int32_t get_offset_of_Item6_5() { return static_cast<int32_t>(offsetof(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A, ___Item6_5)); }
	inline bool get_Item6_5() const { return ___Item6_5; }
	inline bool* get_address_of_Item6_5() { return &___Item6_5; }
	inline void set_Item6_5(bool value)
	{
		___Item6_5 = value;
	}

	inline static int32_t get_offset_of_Item7_6() { return static_cast<int32_t>(offsetof(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A, ___Item7_6)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_Item7_6() const { return ___Item7_6; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_Item7_6() { return &___Item7_6; }
	inline void set_Item7_6(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___Item7_6 = value;
	}

	inline static int32_t get_offset_of_Rest_7() { return static_cast<int32_t>(offsetof(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A, ___Rest_7)); }
	inline ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  get_Rest_7() const { return ___Rest_7; }
	inline ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D * get_address_of_Rest_7() { return &___Rest_7; }
	inline void set_Rest_7(ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  value)
	{
		___Rest_7 = value;
	}
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  m_Items[1];

public:
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
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


// System.Void System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::.ctor(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m1C98D350F4FC793750080ACB2A1DE65C90CCB6D8_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, float ___item10, float ___item21, int32_t ___item32, int32_t ___item43, float ___item54, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m46BBCA62FD41F629A88E5A4891EB9D850E53691F_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mF6D1EAF390DF5D65698075277B6795D29F664BFA_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_mE4255D9B93AEC0034D59317151E92D6C05D20E25_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m244764A8D9FF0D40B8A87843F667AC3E2B54EF5A_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mDC7BFF8CE89C0C7EC2700299D02B8A0EF49999E8_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mCEFFEBB8B3C80BB1444574E16481B30223474FA1_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_m92E3549280CC636D34BE9A12F2E262E0A3767F09_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m3C5BAC0A2FC95806279FE8405C662E22158177C5_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mED2DBCCEDA865C158E3140927C351607EFEA36F3_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IValueTupleInternal_GetHashCode_m7FA0D9842405E2F3292C72415C25C40791002D9E_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_mC81CEC2E1B31A79BA9EC3B536DD57C58C7A61CD7_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, const RuntimeMethod* method);
// System.String System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.IValueTupleInternal.ToStringEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_System_IValueTupleInternal_ToStringEnd_mEE3AD566745F05A2D6D7AB77116538220093B219_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.Runtime.CompilerServices.ITuple.get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_m8E755EA6CC9C17E5DA8A00316767E5D25D3BA5E9_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::.ctor(T1,T2,T3,T4,T5,T6,T7,TRest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_8__ctor_mBF9F8FA834360FF339CB7631CBB0D45759F51768_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, bool ___item10, RuntimeObject * ___item21, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___item32, Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  ___item43, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___item54, bool ___item65, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___item76, ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  ___rest7, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::Equals(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_Equals_m42835EA79EC2C8B2BD534C29EC935890D792ABE8_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_Equals_m6F6AB1E05ED2EB757E1E4D1C9B40525755103B7F_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_System_Collections_IStructuralEquatable_Equals_m86E9C63660ECF1F653F44A6CAFDA0ECDB0CA7AFB_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::CompareTo(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_CompareTo_mDDD29E3BF5C49180F322948B2EEBF530F376A894_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_IComparable_CompareTo_mC2981E36D2482DB9AE0607C12FF5C14A781065BC_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_m94E3660461F23295198F10CE717AE9378431C778_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_GetHashCode_mE2C7E6E80DE6FC6232B0AAF213E4DC15E6CA6AF4_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_GetHashCodeCore_m6F26C4B1A687F9DEDD61E5C149AF5392654359D2_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_mA20674BDF550C4BA0DB2031127C1A6C51FB52EF2_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_IValueTupleInternal_GetHashCode_m39C0E41776AFAE40A9DE6359D632EF4D129E5A95_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_8_ToString_mC8108B938AEBDD99A9B46B52BD04EE5AB3F04BED_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, const RuntimeMethod* method);
// System.String System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.IValueTupleInternal.ToStringEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_8_System_IValueTupleInternal_ToStringEnd_mAD895AF7D1CB816055348146E670FC199A0680CB_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.Runtime.CompilerServices.ITuple.get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_m337300D67D392B6119F988F11EF152AC04CAE43A_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67_gshared (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);

// System.Void System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::.ctor(T1,T2,T3,T4,T5)
inline void ValueTuple_5__ctor_m1C98D350F4FC793750080ACB2A1DE65C90CCB6D8 (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, float ___item10, float ___item21, int32_t ___item32, int32_t ___item43, float ___item54, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *, float, float, int32_t, int32_t, float, const RuntimeMethod*))ValueTuple_5__ctor_m1C98D350F4FC793750080ACB2A1DE65C90CCB6D8_gshared)(__this, ___item10, ___item21, ___item32, ___item43, ___item54, method);
}
// System.Boolean System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
inline bool ValueTuple_5_Equals_m46BBCA62FD41F629A88E5A4891EB9D850E53691F (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *, ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC , const RuntimeMethod*))ValueTuple_5_Equals_m46BBCA62FD41F629A88E5A4891EB9D850E53691F_gshared)(__this, ___other0, method);
}
// System.Boolean System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::Equals(System.Object)
inline bool ValueTuple_5_Equals_mF6D1EAF390DF5D65698075277B6795D29F664BFA (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5_Equals_mF6D1EAF390DF5D65698075277B6795D29F664BFA_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_mE4255D9B93AEC0034D59317151E92D6C05D20E25 (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_Equals_mE4255D9B93AEC0034D59317151E92D6C05D20E25_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m86ED3134FB107447E738C04EAF8CF4E289AF0E7F (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
inline int32_t ValueTuple_5_CompareTo_m244764A8D9FF0D40B8A87843F667AC3E2B54EF5A (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *, ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC , const RuntimeMethod*))ValueTuple_5_CompareTo_m244764A8D9FF0D40B8A87843F667AC3E2B54EF5A_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_5_System_IComparable_CompareTo_mDC7BFF8CE89C0C7EC2700299D02B8A0EF49999E8 (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5_System_IComparable_CompareTo_mDC7BFF8CE89C0C7EC2700299D02B8A0EF49999E8_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mCEFFEBB8B3C80BB1444574E16481B30223474FA1 (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mCEFFEBB8B3C80BB1444574E16481B30223474FA1_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9 (float* __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_mAA4C35AB87E06C9A197E49DD1A6C0EA3D53D8D9C (int32_t ___h10, int32_t ___h21, int32_t ___h32, int32_t ___h43, int32_t ___h54, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::GetHashCode()
inline int32_t ValueTuple_5_GetHashCode_m92E3549280CC636D34BE9A12F2E262E0A3767F09 (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *, const RuntimeMethod*))ValueTuple_5_GetHashCode_m92E3549280CC636D34BE9A12F2E262E0A3767F09_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_5_GetHashCodeCore_m3C5BAC0A2FC95806279FE8405C662E22158177C5 (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_GetHashCodeCore_m3C5BAC0A2FC95806279FE8405C662E22158177C5_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mED2DBCCEDA865C158E3140927C351607EFEA36F3 (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mED2DBCCEDA865C158E3140927C351607EFEA36F3_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_5_System_IValueTupleInternal_GetHashCode_m7FA0D9842405E2F3292C72415C25C40791002D9E (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_IValueTupleInternal_GetHashCode_m7FA0D9842405E2F3292C72415C25C40791002D9E_gshared)(__this, ___comparer0, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::ToString()
inline String_t* ValueTuple_5_ToString_mC81CEC2E1B31A79BA9EC3B536DD57C58C7A61CD7 (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *, const RuntimeMethod*))ValueTuple_5_ToString_mC81CEC2E1B31A79BA9EC3B536DD57C58C7A61CD7_gshared)(__this, method);
}
// System.String System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.IValueTupleInternal.ToStringEnd()
inline String_t* ValueTuple_5_System_IValueTupleInternal_ToStringEnd_mEE3AD566745F05A2D6D7AB77116538220093B219 (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *, const RuntimeMethod*))ValueTuple_5_System_IValueTupleInternal_ToStringEnd_mEE3AD566745F05A2D6D7AB77116538220093B219_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.Runtime.CompilerServices.ITuple.get_Length()
inline int32_t ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_m8E755EA6CC9C17E5DA8A00316767E5D25D3BA5E9 (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *, const RuntimeMethod*))ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_m8E755EA6CC9C17E5DA8A00316767E5D25D3BA5E9_gshared)(__this, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::.ctor(T1,T2,T3,T4,T5,T6,T7,TRest)
inline void ValueTuple_8__ctor_mBF9F8FA834360FF339CB7631CBB0D45759F51768 (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, bool ___item10, RuntimeObject * ___item21, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___item32, Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  ___item43, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___item54, bool ___item65, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___item76, ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  ___rest7, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *, bool, RuntimeObject *, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 , Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D , const RuntimeMethod*))ValueTuple_8__ctor_mBF9F8FA834360FF339CB7631CBB0D45759F51768_gshared)(__this, ___item10, ___item21, ___item32, ___item43, ___item54, ___item65, ___item76, ___rest7, method);
}
// System.Boolean System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::Equals(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
inline bool ValueTuple_8_Equals_m42835EA79EC2C8B2BD534C29EC935890D792ABE8 (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *, ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A , const RuntimeMethod*))ValueTuple_8_Equals_m42835EA79EC2C8B2BD534C29EC935890D792ABE8_gshared)(__this, ___other0, method);
}
// System.Boolean System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::Equals(System.Object)
inline bool ValueTuple_8_Equals_m6F6AB1E05ED2EB757E1E4D1C9B40525755103B7F (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *, RuntimeObject *, const RuntimeMethod*))ValueTuple_8_Equals_m6F6AB1E05ED2EB757E1E4D1C9B40525755103B7F_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_8_System_Collections_IStructuralEquatable_Equals_m86E9C63660ECF1F653F44A6CAFDA0ECDB0CA7AFB (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_System_Collections_IStructuralEquatable_Equals_m86E9C63660ECF1F653F44A6CAFDA0ECDB0CA7AFB_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::CompareTo(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
inline int32_t ValueTuple_8_CompareTo_mDDD29E3BF5C49180F322948B2EEBF530F376A894 (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *, ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A , const RuntimeMethod*))ValueTuple_8_CompareTo_mDDD29E3BF5C49180F322948B2EEBF530F376A894_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_8_System_IComparable_CompareTo_mC2981E36D2482DB9AE0607C12FF5C14A781065BC (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *, RuntimeObject *, const RuntimeMethod*))ValueTuple_8_System_IComparable_CompareTo_mC2981E36D2482DB9AE0607C12FF5C14A781065BC_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_m94E3660461F23295198F10CE717AE9378431C778 (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_m94E3660461F23295198F10CE717AE9378431C778_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411 (bool* __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m63F8588429ABEC6BEC8CBBE376D253E423D0C712 (int32_t ___h10, int32_t ___h21, int32_t ___h32, int32_t ___h43, int32_t ___h54, int32_t ___h65, int32_t ___h76, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_mBAD65E2DE7D9956285B0F702D39BB9DD16B1CDC8 (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_mDE02E3F98EDFE31BD30745AE679FD155682AF7F4 (int32_t ___h10, int32_t ___h21, int32_t ___h32, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m25F3E4691BDE4DB8F7822BCF15ED161471E73FCB (int32_t ___h10, int32_t ___h21, int32_t ___h32, int32_t ___h43, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_mFE25771F3D9DAC174341680B00534397D988584B (int32_t ___h10, int32_t ___h21, int32_t ___h32, int32_t ___h43, int32_t ___h54, int32_t ___h65, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m2C08727B12DB93AA30896ACF79BB290828F7A85A (int32_t ___h10, int32_t ___h21, int32_t ___h32, int32_t ___h43, int32_t ___h54, int32_t ___h65, int32_t ___h76, int32_t ___h87, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::GetHashCode()
inline int32_t ValueTuple_8_GetHashCode_mE2C7E6E80DE6FC6232B0AAF213E4DC15E6CA6AF4 (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *, const RuntimeMethod*))ValueTuple_8_GetHashCode_mE2C7E6E80DE6FC6232B0AAF213E4DC15E6CA6AF4_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_8_GetHashCodeCore_m6F26C4B1A687F9DEDD61E5C149AF5392654359D2 (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_GetHashCodeCore_m6F26C4B1A687F9DEDD61E5C149AF5392654359D2_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_mA20674BDF550C4BA0DB2031127C1A6C51FB52EF2 (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_mA20674BDF550C4BA0DB2031127C1A6C51FB52EF2_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_8_System_IValueTupleInternal_GetHashCode_m39C0E41776AFAE40A9DE6359D632EF4D129E5A95 (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_System_IValueTupleInternal_GetHashCode_m39C0E41776AFAE40A9DE6359D632EF4D129E5A95_gshared)(__this, ___comparer0, method);
}
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.String System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::ToString()
inline String_t* ValueTuple_8_ToString_mC8108B938AEBDD99A9B46B52BD04EE5AB3F04BED (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *, const RuntimeMethod*))ValueTuple_8_ToString_mC8108B938AEBDD99A9B46B52BD04EE5AB3F04BED_gshared)(__this, method);
}
// System.String System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.IValueTupleInternal.ToStringEnd()
inline String_t* ValueTuple_8_System_IValueTupleInternal_ToStringEnd_mAD895AF7D1CB816055348146E670FC199A0680CB (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *, const RuntimeMethod*))ValueTuple_8_System_IValueTupleInternal_ToStringEnd_mAD895AF7D1CB816055348146E670FC199A0680CB_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.Runtime.CompilerServices.ITuple.get_Length()
inline int32_t ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_m337300D67D392B6119F988F11EF152AC04CAE43A (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *, const RuntimeMethod*))ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_m337300D67D392B6119F988F11EF152AC04CAE43A_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_m51C5BC1D6902ADA3B9C297C1A96DB322A6403201 (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m705ADACFB52D6385DDB6B2525C1979ECBE6D5849 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::set_Target(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_set_Target_mA85979DDB776D29B7B347DC63157BEF51B097098 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  (*) (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *, const RuntimeMethod*))Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
inline bool Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67 (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *, const RuntimeMethod*))Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::.ctor(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m1C98D350F4FC793750080ACB2A1DE65C90CCB6D8_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, float ___item10, float ___item21, int32_t ___item32, int32_t ___item43, float ___item54, const RuntimeMethod* method)
{
	{
		float L_0 = ___item10;
		__this->set_Item1_0(L_0);
		float L_1 = ___item21;
		__this->set_Item2_1(L_1);
		int32_t L_2 = ___item32;
		__this->set_Item3_2(L_2);
		int32_t L_3 = ___item43;
		__this->set_Item4_3(L_3);
		float L_4 = ___item54;
		__this->set_Item5_4(L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_5__ctor_m1C98D350F4FC793750080ACB2A1DE65C90CCB6D8_AdjustorThunk (RuntimeObject * __this, float ___item10, float ___item21, int32_t ___item32, int32_t ___item43, float ___item54, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * _thisAdjusted = reinterpret_cast<ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *>(__this + _offset);
	ValueTuple_5__ctor_m1C98D350F4FC793750080ACB2A1DE65C90CCB6D8(_thisAdjusted, ___item10, ___item21, ___item32, ___item43, ___item54, method);
}
// System.Boolean System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mF6D1EAF390DF5D65698075277B6795D29F664BFA_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTuple_5_Equals_m46BBCA62FD41F629A88E5A4891EB9D850E53691F((ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)(ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)__this, (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC )((*(ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)((ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_mF6D1EAF390DF5D65698075277B6795D29F664BFA_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * _thisAdjusted = reinterpret_cast<ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_mF6D1EAF390DF5D65698075277B6795D29F664BFA(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m46BBCA62FD41F629A88E5A4891EB9D850E53691F_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * L_0;
		L_0 = ((  EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		float L_1 = (float)__this->get_Item1_0();
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_2 = ___other0;
		float L_3 = (float)L_2.get_Item1_0();
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(T,T) */, (EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_0, (float)L_1, (float)L_3);
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * L_5;
		L_5 = ((  EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		float L_6 = (float)__this->get_Item2_1();
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_7 = ___other0;
		float L_8 = (float)L_7.get_Item2_1();
		bool L_9;
		L_9 = VirtFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(T,T) */, (EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_5, (float)L_6, (float)L_8);
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * L_10;
		L_10 = ((  EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11 = (int32_t)__this->get_Item3_2();
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_12 = ___other0;
		int32_t L_13 = (int32_t)L_12.get_Item3_2();
		bool L_14;
		L_14 = VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, (EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 *)L_10, (int32_t)L_11, (int32_t)L_13);
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * L_15;
		L_15 = ((  EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		int32_t L_16 = (int32_t)__this->get_Item4_3();
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_17 = ___other0;
		int32_t L_18 = (int32_t)L_17.get_Item4_3();
		bool L_19;
		L_19 = VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, (EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 *)L_15, (int32_t)L_16, (int32_t)L_18);
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * L_20;
		L_20 = ((  EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		float L_21 = (float)__this->get_Item5_4();
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_22 = ___other0;
		float L_23 = (float)L_22.get_Item5_4();
		bool L_24;
		L_24 = VirtFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(T,T) */, (EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_20, (float)L_21, (float)L_23);
		return (bool)L_24;
	}

IL_0077:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m46BBCA62FD41F629A88E5A4891EB9D850E53691F_AdjustorThunk (RuntimeObject * __this, ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * _thisAdjusted = reinterpret_cast<ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m46BBCA62FD41F629A88E5A4891EB9D850E53691F(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_mE4255D9B93AEC0034D59317151E92D6C05D20E25_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC )((*(ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)((ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		float L_4 = (float)__this->get_Item1_0();
		float L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 17), &L_5);
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_7 = V_0;
		float L_8 = (float)L_7.get_Item1_0();
		float L_9 = L_8;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 17), &L_9);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_6, (RuntimeObject *)L_10);
		if (!L_11)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_12 = ___comparer1;
		float L_13 = (float)__this->get_Item2_1();
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18), &L_14);
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_16 = V_0;
		float L_17 = (float)L_16.get_Item2_1();
		float L_18 = L_17;
		RuntimeObject * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18), &L_18);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_12, (RuntimeObject *)L_15, (RuntimeObject *)L_19);
		if (!L_20)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_21 = ___comparer1;
		int32_t L_22 = (int32_t)__this->get_Item3_2();
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 19), &L_23);
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_25 = V_0;
		int32_t L_26 = (int32_t)L_25.get_Item3_2();
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 19), &L_27);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_21, (RuntimeObject *)L_24, (RuntimeObject *)L_28);
		if (!L_29)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_30 = ___comparer1;
		int32_t L_31 = (int32_t)__this->get_Item4_3();
		int32_t L_32 = L_31;
		RuntimeObject * L_33 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 20), &L_32);
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_34 = V_0;
		int32_t L_35 = (int32_t)L_34.get_Item4_3();
		int32_t L_36 = L_35;
		RuntimeObject * L_37 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 20), &L_36);
		bool L_38;
		L_38 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_30, (RuntimeObject *)L_33, (RuntimeObject *)L_37);
		if (!L_38)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_39 = ___comparer1;
		float L_40 = (float)__this->get_Item5_4();
		float L_41 = L_40;
		RuntimeObject * L_42 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 21), &L_41);
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_43 = V_0;
		float L_44 = (float)L_43.get_Item5_4();
		float L_45 = L_44;
		RuntimeObject * L_46 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 21), &L_45);
		bool L_47;
		L_47 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_39, (RuntimeObject *)L_42, (RuntimeObject *)L_46);
		return (bool)L_47;
	}

IL_00a9:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_mE4255D9B93AEC0034D59317151E92D6C05D20E25_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * _thisAdjusted = reinterpret_cast<ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_Equals_mE4255D9B93AEC0034D59317151E92D6C05D20E25(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mDC7BFF8CE89C0C7EC2700299D02B8A0EF49999E8_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_2 = (*(ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)__this);
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_3 = (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m86ED3134FB107447E738C04EAF8CF4E289AF0E7F((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_5_System_IComparable_CompareTo_mDC7BFF8CE89C0C7EC2700299D02B8A0EF49999E8_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		int32_t L_10;
		L_10 = ValueTuple_5_CompareTo_m244764A8D9FF0D40B8A87843F667AC3E2B54EF5A((ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)(ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)__this, (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC )((*(ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)((ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_IComparable_CompareTo_mDC7BFF8CE89C0C7EC2700299D02B8A0EF49999E8_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * _thisAdjusted = reinterpret_cast<ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_IComparable_CompareTo_mDC7BFF8CE89C0C7EC2700299D02B8A0EF49999E8(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m244764A8D9FF0D40B8A87843F667AC3E2B54EF5A_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD * L_0;
		L_0 = ((  Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		float L_1 = (float)__this->get_Item1_0();
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_2 = ___other0;
		float L_3 = (float)L_2.get_Item1_0();
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, float, float >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Single>::Compare(T,T) */, (Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD *)L_0, (float)L_1, (float)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return (int32_t)L_6;
	}

IL_001c:
	{
		Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD * L_7;
		L_7 = ((  Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		float L_8 = (float)__this->get_Item2_1();
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_9 = ___other0;
		float L_10 = (float)L_9.get_Item2_1();
		int32_t L_11;
		L_11 = VirtFuncInvoker2< int32_t, float, float >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Single>::Compare(T,T) */, (Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD *)L_7, (float)L_8, (float)L_10);
		V_0 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return (int32_t)L_13;
	}

IL_0038:
	{
		Comparer_1_t3E3093220DB5D33A829C91C1DFDBDE2F42ECEDC7 * L_14;
		L_14 = ((  Comparer_1_t3E3093220DB5D33A829C91C1DFDBDE2F42ECEDC7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 29)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		int32_t L_15 = (int32_t)__this->get_Item3_2();
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_16 = ___other0;
		int32_t L_17 = (int32_t)L_16.get_Item3_2();
		int32_t L_18;
		L_18 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::Compare(T,T) */, (Comparer_1_t3E3093220DB5D33A829C91C1DFDBDE2F42ECEDC7 *)L_14, (int32_t)L_15, (int32_t)L_17);
		V_0 = (int32_t)L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return (int32_t)L_20;
	}

IL_0054:
	{
		Comparer_1_t3E3093220DB5D33A829C91C1DFDBDE2F42ECEDC7 * L_21;
		L_21 = ((  Comparer_1_t3E3093220DB5D33A829C91C1DFDBDE2F42ECEDC7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 32)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		int32_t L_22 = (int32_t)__this->get_Item4_3();
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_23 = ___other0;
		int32_t L_24 = (int32_t)L_23.get_Item4_3();
		int32_t L_25;
		L_25 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::Compare(T,T) */, (Comparer_1_t3E3093220DB5D33A829C91C1DFDBDE2F42ECEDC7 *)L_21, (int32_t)L_22, (int32_t)L_24);
		V_0 = (int32_t)L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return (int32_t)L_27;
	}

IL_0070:
	{
		Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD * L_28;
		L_28 = ((  Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		float L_29 = (float)__this->get_Item5_4();
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_30 = ___other0;
		float L_31 = (float)L_30.get_Item5_4();
		int32_t L_32;
		L_32 = VirtFuncInvoker2< int32_t, float, float >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Single>::Compare(T,T) */, (Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD *)L_28, (float)L_29, (float)L_31);
		return (int32_t)L_32;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_CompareTo_m244764A8D9FF0D40B8A87843F667AC3E2B54EF5A_AdjustorThunk (RuntimeObject * __this, ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * _thisAdjusted = reinterpret_cast<ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_CompareTo_m244764A8D9FF0D40B8A87843F667AC3E2B54EF5A(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mCEFFEBB8B3C80BB1444574E16481B30223474FA1_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_2 = (*(ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)__this);
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_3 = (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m86ED3134FB107447E738C04EAF8CF4E289AF0E7F((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mCEFFEBB8B3C80BB1444574E16481B30223474FA1_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		V_0 = (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC )((*(ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)((ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_10 = ___comparer1;
		float L_11 = (float)__this->get_Item1_0();
		float L_12 = L_11;
		RuntimeObject * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 17), &L_12);
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_14 = V_0;
		float L_15 = (float)L_14.get_Item1_0();
		float L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 17), &L_16);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_13, (RuntimeObject *)L_17);
		V_1 = (int32_t)L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_20 = V_1;
		return (int32_t)L_20;
	}

IL_0060:
	{
		RuntimeObject* L_21 = ___comparer1;
		float L_22 = (float)__this->get_Item2_1();
		float L_23 = L_22;
		RuntimeObject * L_24 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18), &L_23);
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_25 = V_0;
		float L_26 = (float)L_25.get_Item2_1();
		float L_27 = L_26;
		RuntimeObject * L_28 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18), &L_27);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_21, (RuntimeObject *)L_24, (RuntimeObject *)L_28);
		V_1 = (int32_t)L_29;
		int32_t L_30 = V_1;
		if (!L_30)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_31 = V_1;
		return (int32_t)L_31;
	}

IL_0082:
	{
		RuntimeObject* L_32 = ___comparer1;
		int32_t L_33 = (int32_t)__this->get_Item3_2();
		int32_t L_34 = L_33;
		RuntimeObject * L_35 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 19), &L_34);
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_36 = V_0;
		int32_t L_37 = (int32_t)L_36.get_Item3_2();
		int32_t L_38 = L_37;
		RuntimeObject * L_39 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 19), &L_38);
		int32_t L_40;
		L_40 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_32, (RuntimeObject *)L_35, (RuntimeObject *)L_39);
		V_1 = (int32_t)L_40;
		int32_t L_41 = V_1;
		if (!L_41)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_42 = V_1;
		return (int32_t)L_42;
	}

IL_00a4:
	{
		RuntimeObject* L_43 = ___comparer1;
		int32_t L_44 = (int32_t)__this->get_Item4_3();
		int32_t L_45 = L_44;
		RuntimeObject * L_46 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 20), &L_45);
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_47 = V_0;
		int32_t L_48 = (int32_t)L_47.get_Item4_3();
		int32_t L_49 = L_48;
		RuntimeObject * L_50 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 20), &L_49);
		int32_t L_51;
		L_51 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_43, (RuntimeObject *)L_46, (RuntimeObject *)L_50);
		V_1 = (int32_t)L_51;
		int32_t L_52 = V_1;
		if (!L_52)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_53 = V_1;
		return (int32_t)L_53;
	}

IL_00c6:
	{
		RuntimeObject* L_54 = ___comparer1;
		float L_55 = (float)__this->get_Item5_4();
		float L_56 = L_55;
		RuntimeObject * L_57 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 21), &L_56);
		ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC  L_58 = V_0;
		float L_59 = (float)L_58.get_Item5_4();
		float L_60 = L_59;
		RuntimeObject * L_61 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 21), &L_60);
		int32_t L_62;
		L_62 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_54, (RuntimeObject *)L_57, (RuntimeObject *)L_61);
		return (int32_t)L_62;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mCEFFEBB8B3C80BB1444574E16481B30223474FA1_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * _thisAdjusted = reinterpret_cast<ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mCEFFEBB8B3C80BB1444574E16481B30223474FA1(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_m92E3549280CC636D34BE9A12F2E262E0A3767F09_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float* G_B3_0 = NULL;
	float* G_B1_0 = NULL;
	float* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	float* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	float* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	float* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	int32_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	int32_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	int32_t* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	int32_t* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	int32_t* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	float* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	float* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B17_3 = 0;
	int32_t G_B17_4 = 0;
	float* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	int32_t G_B18_3 = 0;
	int32_t G_B18_4 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	{
		float* L_0 = (float*)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		G_B3_0 = L_0;
		goto IL_002a;
		G_B1_0 = L_0;
	}
	{
		float L_2 = (*(float*)G_B1_0);
		V_0 = (float)L_2;
		G_B3_0 = (&V_0);
		goto IL_002a;
		G_B2_0 = (&V_0);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		int32_t L_4;
		L_4 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)(float*)G_B3_0, /*hidden argument*/NULL);
		G_B4_0 = L_4;
	}

IL_0035:
	{
		float* L_5 = (float*)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(float));
		G_B7_0 = L_5;
		G_B7_1 = G_B4_0;
		goto IL_005f;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
	}
	{
		float L_7 = (*(float*)G_B5_0);
		V_1 = (float)L_7;
		G_B7_0 = (&V_1);
		G_B7_1 = G_B5_1;
		goto IL_005f;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		int32_t L_9;
		L_9 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)(float*)G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t* L_10 = (int32_t*)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		G_B11_0 = L_10;
		G_B11_1 = G_B8_0;
		G_B11_2 = G_B8_1;
		goto IL_0094;
		G_B9_0 = L_10;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}
	{
		int32_t L_12 = (*(int32_t*)G_B9_0);
		V_2 = (int32_t)L_12;
		G_B11_0 = (&V_2);
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		goto IL_0094;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		int32_t L_14;
		L_14 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(int32_t*)G_B11_0, /*hidden argument*/NULL);
		G_B12_0 = L_14;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		int32_t* L_15 = (int32_t*)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		G_B15_0 = L_15;
		G_B15_1 = G_B12_0;
		G_B15_2 = G_B12_1;
		G_B15_3 = G_B12_2;
		goto IL_00c9;
		G_B13_0 = L_15;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}
	{
		int32_t L_17 = (*(int32_t*)G_B13_0);
		V_3 = (int32_t)L_17;
		G_B15_0 = (&V_3);
		G_B15_1 = G_B13_1;
		G_B15_2 = G_B13_2;
		G_B15_3 = G_B13_3;
		goto IL_00c9;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		int32_t L_19;
		L_19 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(int32_t*)G_B15_0, /*hidden argument*/NULL);
		G_B16_0 = L_19;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		float* L_20 = (float*)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(float));
		G_B19_0 = L_20;
		G_B19_1 = G_B16_0;
		G_B19_2 = G_B16_1;
		G_B19_3 = G_B16_2;
		G_B19_4 = G_B16_3;
		goto IL_0101;
		G_B17_0 = L_20;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
	}
	{
		float L_22 = (*(float*)G_B17_0);
		V_4 = (float)L_22;
		G_B19_0 = (&V_4);
		G_B19_1 = G_B17_1;
		G_B19_2 = G_B17_2;
		G_B19_3 = G_B17_3;
		G_B19_4 = G_B17_4;
		goto IL_0101;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		G_B20_4 = G_B18_4;
		goto IL_010c;
	}

IL_0101:
	{
		int32_t L_24;
		L_24 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)(float*)G_B19_0, /*hidden argument*/NULL);
		G_B20_0 = L_24;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
	}

IL_010c:
	{
		int32_t L_25;
		L_25 = ValueTuple_CombineHashCodes_mAA4C35AB87E06C9A197E49DD1A6C0EA3D53D8D9C((int32_t)G_B20_4, (int32_t)G_B20_3, (int32_t)G_B20_2, (int32_t)G_B20_1, (int32_t)G_B20_0, /*hidden argument*/NULL);
		return (int32_t)L_25;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCode_m92E3549280CC636D34BE9A12F2E262E0A3767F09_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * _thisAdjusted = reinterpret_cast<ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCode_m92E3549280CC636D34BE9A12F2E262E0A3767F09(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mED2DBCCEDA865C158E3140927C351607EFEA36F3_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_5_GetHashCodeCore_m3C5BAC0A2FC95806279FE8405C662E22158177C5((ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)(ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mED2DBCCEDA865C158E3140927C351607EFEA36F3_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * _thisAdjusted = reinterpret_cast<ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mED2DBCCEDA865C158E3140927C351607EFEA36F3(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m3C5BAC0A2FC95806279FE8405C662E22158177C5_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		float L_1 = (float)__this->get_Item1_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 17), &L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_3);
		RuntimeObject* L_5 = ___comparer0;
		float L_6 = (float)__this->get_Item2_1();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18), &L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, (RuntimeObject *)L_8);
		RuntimeObject* L_10 = ___comparer0;
		int32_t L_11 = (int32_t)__this->get_Item3_2();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 19), &L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_13);
		RuntimeObject* L_15 = ___comparer0;
		int32_t L_16 = (int32_t)__this->get_Item4_3();
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 20), &L_17);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_15, (RuntimeObject *)L_18);
		RuntimeObject* L_20 = ___comparer0;
		float L_21 = (float)__this->get_Item5_4();
		float L_22 = L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 21), &L_22);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_20, (RuntimeObject *)L_23);
		int32_t L_25;
		L_25 = ValueTuple_CombineHashCodes_mAA4C35AB87E06C9A197E49DD1A6C0EA3D53D8D9C((int32_t)L_4, (int32_t)L_9, (int32_t)L_14, (int32_t)L_19, (int32_t)L_24, /*hidden argument*/NULL);
		return (int32_t)L_25;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCodeCore_m3C5BAC0A2FC95806279FE8405C662E22158177C5_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * _thisAdjusted = reinterpret_cast<ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCodeCore_m3C5BAC0A2FC95806279FE8405C662E22158177C5(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IValueTupleInternal_GetHashCode_m7FA0D9842405E2F3292C72415C25C40791002D9E_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_5_GetHashCodeCore_m3C5BAC0A2FC95806279FE8405C662E22158177C5((ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)(ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_IValueTupleInternal_GetHashCode_m7FA0D9842405E2F3292C72415C25C40791002D9E_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * _thisAdjusted = reinterpret_cast<ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_IValueTupleInternal_GetHashCode_m7FA0D9842405E2F3292C72415C25C40791002D9E(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.String System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_mC81CEC2E1B31A79BA9EC3B536DD57C58C7A61CD7_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	float* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	float* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	float* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	float* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	float* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	int32_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	int32_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	int32_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	int32_t* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	int32_t* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	int32_t* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	float* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_3 = NULL;
	float* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	float* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_1;
		float* L_3 = (float*)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		G_B3_0 = L_3;
		G_B3_1 = 1;
		G_B3_2 = L_2;
		G_B3_3 = L_2;
		goto IL_003b;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		float L_5 = (*(float*)G_B1_0);
		V_0 = (float)L_5;
		G_B3_0 = (&V_0);
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_003b;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		String_t* L_7;
		L_7 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(float*)G_B3_0, /*hidden argument*/NULL);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		ArrayElementTypeCheck (L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		float* L_10 = (float*)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(float));
		G_B7_0 = L_10;
		G_B7_1 = 3;
		G_B7_2 = L_9;
		G_B7_3 = L_9;
		goto IL_007b;
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
	}
	{
		float L_12 = (*(float*)G_B5_0);
		V_1 = (float)L_12;
		G_B7_0 = (&V_1);
		G_B7_1 = G_B5_1;
		G_B7_2 = G_B5_2;
		G_B7_3 = G_B5_3;
		goto IL_007b;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		String_t* L_14;
		L_14 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(float*)G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		ArrayElementTypeCheck (L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_15;
		int32_t* L_17 = (int32_t*)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		G_B11_0 = L_17;
		G_B11_1 = 5;
		G_B11_2 = L_16;
		G_B11_3 = L_16;
		goto IL_00bb;
		G_B9_0 = L_17;
		G_B9_1 = 5;
		G_B9_2 = L_16;
		G_B9_3 = L_16;
	}
	{
		int32_t L_19 = (*(int32_t*)G_B9_0);
		V_2 = (int32_t)L_19;
		G_B11_0 = (&V_2);
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_00bb;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		String_t* L_21;
		L_21 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(int32_t*)G_B11_0, /*hidden argument*/NULL);
		G_B12_0 = L_21;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B12_3;
		ArrayElementTypeCheck (L_22, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_22;
		int32_t* L_24 = (int32_t*)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		G_B15_0 = L_24;
		G_B15_1 = 7;
		G_B15_2 = L_23;
		G_B15_3 = L_23;
		goto IL_00fb;
		G_B13_0 = L_24;
		G_B13_1 = 7;
		G_B13_2 = L_23;
		G_B13_3 = L_23;
	}
	{
		int32_t L_26 = (*(int32_t*)G_B13_0);
		V_3 = (int32_t)L_26;
		G_B15_0 = (&V_3);
		G_B15_1 = G_B13_1;
		G_B15_2 = G_B13_2;
		G_B15_3 = G_B13_3;
		goto IL_00fb;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		String_t* L_28;
		L_28 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(int32_t*)G_B15_0, /*hidden argument*/NULL);
		G_B16_0 = L_28;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B16_3;
		ArrayElementTypeCheck (L_29, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_29;
		float* L_31 = (float*)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(float));
		G_B19_0 = L_31;
		G_B19_1 = ((int32_t)9);
		G_B19_2 = L_30;
		G_B19_3 = L_30;
		goto IL_013f;
		G_B17_0 = L_31;
		G_B17_1 = ((int32_t)9);
		G_B17_2 = L_30;
		G_B17_3 = L_30;
	}
	{
		float L_33 = (*(float*)G_B17_0);
		V_4 = (float)L_33;
		G_B19_0 = (&V_4);
		G_B19_1 = G_B17_1;
		G_B19_2 = G_B17_2;
		G_B19_3 = G_B17_3;
		goto IL_013f;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_014a;
	}

IL_013f:
	{
		String_t* L_35;
		L_35 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(float*)G_B19_0, /*hidden argument*/NULL);
		G_B20_0 = L_35;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_014a:
	{
		ArrayElementTypeCheck (G_B20_2, G_B20_0);
		(G_B20_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B20_3;
		ArrayElementTypeCheck (L_36, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_37;
		L_37 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_36, /*hidden argument*/NULL);
		return (String_t*)L_37;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_5_ToString_mC81CEC2E1B31A79BA9EC3B536DD57C58C7A61CD7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * _thisAdjusted = reinterpret_cast<ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_5_ToString_mC81CEC2E1B31A79BA9EC3B536DD57C58C7A61CD7(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.IValueTupleInternal.ToStringEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_System_IValueTupleInternal_ToStringEnd_mEE3AD566745F05A2D6D7AB77116538220093B219_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	float* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	float* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	float* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	float* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	float* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	int32_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	int32_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	int32_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	int32_t* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	int32_t* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	int32_t* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	float* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_3 = NULL;
	float* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	float* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		float* L_2 = (float*)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		G_B3_0 = L_2;
		G_B3_1 = 0;
		G_B3_2 = L_1;
		G_B3_3 = L_1;
		goto IL_0033;
		G_B1_0 = L_2;
		G_B1_1 = 0;
		G_B1_2 = L_1;
		G_B1_3 = L_1;
	}
	{
		float L_4 = (*(float*)G_B1_0);
		V_0 = (float)L_4;
		G_B3_0 = (&V_0);
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0033;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_003e;
	}

IL_0033:
	{
		String_t* L_6;
		L_6 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(float*)G_B3_0, /*hidden argument*/NULL);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		ArrayElementTypeCheck (L_7, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_7;
		float* L_9 = (float*)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(float));
		G_B7_0 = L_9;
		G_B7_1 = 2;
		G_B7_2 = L_8;
		G_B7_3 = L_8;
		goto IL_0073;
		G_B5_0 = L_9;
		G_B5_1 = 2;
		G_B5_2 = L_8;
		G_B5_3 = L_8;
	}
	{
		float L_11 = (*(float*)G_B5_0);
		V_1 = (float)L_11;
		G_B7_0 = (&V_1);
		G_B7_1 = G_B5_1;
		G_B7_2 = G_B5_2;
		G_B7_3 = G_B5_3;
		goto IL_0073;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_007e;
	}

IL_0073:
	{
		String_t* L_13;
		L_13 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(float*)G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_13;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_007e:
	{
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		ArrayElementTypeCheck (L_14, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_14;
		int32_t* L_16 = (int32_t*)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		G_B11_0 = L_16;
		G_B11_1 = 4;
		G_B11_2 = L_15;
		G_B11_3 = L_15;
		goto IL_00b3;
		G_B9_0 = L_16;
		G_B9_1 = 4;
		G_B9_2 = L_15;
		G_B9_3 = L_15;
	}
	{
		int32_t L_18 = (*(int32_t*)G_B9_0);
		V_2 = (int32_t)L_18;
		G_B11_0 = (&V_2);
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_00b3;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00be;
	}

IL_00b3:
	{
		String_t* L_20;
		L_20 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(int32_t*)G_B11_0, /*hidden argument*/NULL);
		G_B12_0 = L_20;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00be:
	{
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B12_3;
		ArrayElementTypeCheck (L_21, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_21;
		int32_t* L_23 = (int32_t*)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		G_B15_0 = L_23;
		G_B15_1 = 6;
		G_B15_2 = L_22;
		G_B15_3 = L_22;
		goto IL_00f3;
		G_B13_0 = L_23;
		G_B13_1 = 6;
		G_B13_2 = L_22;
		G_B13_3 = L_22;
	}
	{
		int32_t L_25 = (*(int32_t*)G_B13_0);
		V_3 = (int32_t)L_25;
		G_B15_0 = (&V_3);
		G_B15_1 = G_B13_1;
		G_B15_2 = G_B13_2;
		G_B15_3 = G_B13_3;
		goto IL_00f3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00fe;
	}

IL_00f3:
	{
		String_t* L_27;
		L_27 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(int32_t*)G_B15_0, /*hidden argument*/NULL);
		G_B16_0 = L_27;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00fe:
	{
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B16_3;
		ArrayElementTypeCheck (L_28, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_28;
		float* L_30 = (float*)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(float));
		G_B19_0 = L_30;
		G_B19_1 = 8;
		G_B19_2 = L_29;
		G_B19_3 = L_29;
		goto IL_0136;
		G_B17_0 = L_30;
		G_B17_1 = 8;
		G_B17_2 = L_29;
		G_B17_3 = L_29;
	}
	{
		float L_32 = (*(float*)G_B17_0);
		V_4 = (float)L_32;
		G_B19_0 = (&V_4);
		G_B19_1 = G_B17_1;
		G_B19_2 = G_B17_2;
		G_B19_3 = G_B17_3;
		goto IL_0136;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_0141;
	}

IL_0136:
	{
		String_t* L_34;
		L_34 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(float*)G_B19_0, /*hidden argument*/NULL);
		G_B20_0 = L_34;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_0141:
	{
		ArrayElementTypeCheck (G_B20_2, G_B20_0);
		(G_B20_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B20_3;
		ArrayElementTypeCheck (L_35, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_36;
		L_36 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_35, /*hidden argument*/NULL);
		return (String_t*)L_36;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_5_System_IValueTupleInternal_ToStringEnd_mEE3AD566745F05A2D6D7AB77116538220093B219_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * _thisAdjusted = reinterpret_cast<ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_5_System_IValueTupleInternal_ToStringEnd_mEE3AD566745F05A2D6D7AB77116538220093B219(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::System.Runtime.CompilerServices.ITuple.get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_m8E755EA6CC9C17E5DA8A00316767E5D25D3BA5E9_gshared (ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)5;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_m8E755EA6CC9C17E5DA8A00316767E5D25D3BA5E9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC * _thisAdjusted = reinterpret_cast<ValueTuple_5_tFF26700DCF821F62071AF82379E1EE68A72205CC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_m8E755EA6CC9C17E5DA8A00316767E5D25D3BA5E9(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::.ctor(T1,T2,T3,T4,T5,T6,T7,TRest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_8__ctor_mBF9F8FA834360FF339CB7631CBB0D45759F51768_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, bool ___item10, RuntimeObject * ___item21, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___item32, Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  ___item43, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___item54, bool ___item65, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___item76, ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  ___rest7, const RuntimeMethod* method)
{
	{
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_0 = ___rest7;
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_1 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_1);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEBAA23633770B89931ABB5730B524910907A5C7B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_8__ctor_mBF9F8FA834360FF339CB7631CBB0D45759F51768_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_4 = ___item10;
		__this->set_Item1_0(L_4);
		RuntimeObject * L_5 = ___item21;
		__this->set_Item2_1(L_5);
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_6 = ___item32;
		__this->set_Item3_2(L_6);
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_7 = ___item43;
		__this->set_Item4_3(L_7);
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_8 = ___item54;
		__this->set_Item5_4(L_8);
		bool L_9 = ___item65;
		__this->set_Item6_5(L_9);
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_10 = ___item76;
		__this->set_Item7_6(L_10);
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_11 = ___rest7;
		__this->set_Rest_7(L_11);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_8__ctor_mBF9F8FA834360FF339CB7631CBB0D45759F51768_AdjustorThunk (RuntimeObject * __this, bool ___item10, RuntimeObject * ___item21, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___item32, Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  ___item43, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___item54, bool ___item65, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___item76, ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  ___rest7, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * _thisAdjusted = reinterpret_cast<ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *>(__this + _offset);
	ValueTuple_8__ctor_mBF9F8FA834360FF339CB7631CBB0D45759F51768(_thisAdjusted, ___item10, ___item21, ___item32, ___item43, ___item54, ___item65, ___item76, ___rest7, method);
}
// System.Boolean System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_Equals_m6F6AB1E05ED2EB757E1E4D1C9B40525755103B7F_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTuple_8_Equals_m42835EA79EC2C8B2BD534C29EC935890D792ABE8((ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)__this, (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A )((*(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)((ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (bool)L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_8_Equals_m6F6AB1E05ED2EB757E1E4D1C9B40525755103B7F_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * _thisAdjusted = reinterpret_cast<ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_8_Equals_m6F6AB1E05ED2EB757E1E4D1C9B40525755103B7F(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::Equals(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_Equals_m42835EA79EC2C8B2BD534C29EC935890D792ABE8_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * L_0;
		L_0 = ((  EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_1 = (bool)__this->get_Item1_0();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_2 = ___other0;
		bool L_3 = (bool)L_2.get_Item1_0();
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, (EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 *)L_0, (bool)L_1, (bool)L_3);
		if (!L_4)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_5;
		L_5 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_7 = ___other0;
		RuntimeObject * L_8 = (RuntimeObject *)L_7.get_Item2_1();
		bool L_9;
		L_9 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_8);
		if (!L_9)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC * L_10;
		L_10 = ((  EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_11 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item3_2();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_12 = ___other0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_13 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_12.get_Item3_2();
		bool L_14;
		L_14 = VirtFuncInvoker2< bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Nullable`1<UnityEngine.Vector3>>::Equals(T,T) */, (EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC *)L_10, (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_11, (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_13);
		if (!L_14)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_tCB9FDF936B8E9BD91BF7D815187606420718341E * L_15;
		L_15 = ((  EqualityComparer_1_tCB9FDF936B8E9BD91BF7D815187606420718341E * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_16 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )__this->get_Item4_3();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_17 = ___other0;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_18 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_17.get_Item4_3();
		bool L_19;
		L_19 = VirtFuncInvoker2< bool, Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 , Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Nullable`1<Fusion.Rotation>>::Equals(T,T) */, (EqualityComparer_1_tCB9FDF936B8E9BD91BF7D815187606420718341E *)L_15, (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_16, (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_18);
		if (!L_19)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC * L_20;
		L_20 = ((  EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_21 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item5_4();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_22 = ___other0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_23 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_22.get_Item5_4();
		bool L_24;
		L_24 = VirtFuncInvoker2< bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Nullable`1<UnityEngine.Vector3>>::Equals(T,T) */, (EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC *)L_20, (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_21, (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_23);
		if (!L_24)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * L_25;
		L_25 = ((  EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_26 = (bool)__this->get_Item6_5();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_27 = ___other0;
		bool L_28 = (bool)L_27.get_Item6_5();
		bool L_29;
		L_29 = VirtFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, (EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 *)L_25, (bool)L_26, (bool)L_28);
		if (!L_29)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC * L_30;
		L_30 = ((  EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_31 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item7_6();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_32 = ___other0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_33 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_32.get_Item7_6();
		bool L_34;
		L_34 = VirtFuncInvoker2< bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Nullable`1<UnityEngine.Vector3>>::Equals(T,T) */, (EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC *)L_30, (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_31, (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_33);
		if (!L_34)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_t4D507ED6A994BA8D2E0018587505D68FCC17686D * L_35;
		L_35 = ((  EqualityComparer_1_t4D507ED6A994BA8D2E0018587505D68FCC17686D * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 24)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_36 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )__this->get_Rest_7();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_37 = ___other0;
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_38 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_37.get_Rest_7();
		bool L_39;
		L_39 = VirtFuncInvoker2< bool, ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D , ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::Equals(T,T) */, (EqualityComparer_1_t4D507ED6A994BA8D2E0018587505D68FCC17686D *)L_35, (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_36, (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_38);
		return (bool)L_39;
	}

IL_00c5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_8_Equals_m42835EA79EC2C8B2BD534C29EC935890D792ABE8_AdjustorThunk (RuntimeObject * __this, ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * _thisAdjusted = reinterpret_cast<ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_8_Equals_m42835EA79EC2C8B2BD534C29EC935890D792ABE8(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_System_Collections_IStructuralEquatable_Equals_m86E9C63660ECF1F653F44A6CAFDA0ECDB0CA7AFB_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A )((*(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)((ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))));
		RuntimeObject* L_3 = ___comparer1;
		bool L_4 = (bool)__this->get_Item1_0();
		bool L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 27), &L_5);
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_7 = V_0;
		bool L_8 = (bool)L_7.get_Item1_0();
		bool L_9 = L_8;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 27), &L_9);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_6, (RuntimeObject *)L_10);
		if (!L_11)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_12 = ___comparer1;
		RuntimeObject * L_13 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_14 = V_0;
		RuntimeObject * L_15 = (RuntimeObject *)L_14.get_Item2_1();
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_12, (RuntimeObject *)L_13, (RuntimeObject *)L_15);
		if (!L_16)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_17 = ___comparer1;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_18 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item3_2();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_19 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_19);
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_21 = V_0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_22 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_21.get_Item3_2();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_23 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_22;
		RuntimeObject * L_24 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_23);
		bool L_25;
		L_25 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_20, (RuntimeObject *)L_24);
		if (!L_25)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_26 = ___comparer1;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_27 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )__this->get_Item4_3();
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_28 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_27;
		RuntimeObject * L_29 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_28);
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_30 = V_0;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_31 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_30.get_Item4_3();
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_32 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_31;
		RuntimeObject * L_33 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_32);
		bool L_34;
		L_34 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_26, (RuntimeObject *)L_29, (RuntimeObject *)L_33);
		if (!L_34)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_35 = ___comparer1;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_36 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item5_4();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_37 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_36;
		RuntimeObject * L_38 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_37);
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_39 = V_0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_40 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_39.get_Item5_4();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_41 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_40;
		RuntimeObject * L_42 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_41);
		bool L_43;
		L_43 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_35, (RuntimeObject *)L_38, (RuntimeObject *)L_42);
		if (!L_43)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_44 = ___comparer1;
		bool L_45 = (bool)__this->get_Item6_5();
		bool L_46 = L_45;
		RuntimeObject * L_47 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 32), &L_46);
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_48 = V_0;
		bool L_49 = (bool)L_48.get_Item6_5();
		bool L_50 = L_49;
		RuntimeObject * L_51 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 32), &L_50);
		bool L_52;
		L_52 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_44, (RuntimeObject *)L_47, (RuntimeObject *)L_51);
		if (!L_52)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_53 = ___comparer1;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_54 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item7_6();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_55 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_54;
		RuntimeObject * L_56 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_55);
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_57 = V_0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_58 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_57.get_Item7_6();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_59 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_58;
		RuntimeObject * L_60 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_59);
		bool L_61;
		L_61 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_53, (RuntimeObject *)L_56, (RuntimeObject *)L_60);
		if (!L_61)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_62 = ___comparer1;
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_63 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )__this->get_Rest_7();
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_64 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_63;
		RuntimeObject * L_65 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_64);
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_66 = V_0;
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_67 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_66.get_Rest_7();
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_68 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_67;
		RuntimeObject * L_69 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_68);
		bool L_70;
		L_70 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_62, (RuntimeObject *)L_65, (RuntimeObject *)L_69);
		return (bool)L_70;
	}

IL_010c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_8_System_Collections_IStructuralEquatable_Equals_m86E9C63660ECF1F653F44A6CAFDA0ECDB0CA7AFB_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * _thisAdjusted = reinterpret_cast<ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_8_System_Collections_IStructuralEquatable_Equals_m86E9C63660ECF1F653F44A6CAFDA0ECDB0CA7AFB(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_IComparable_CompareTo_mC2981E36D2482DB9AE0607C12FF5C14A781065BC_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_2 = (*(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)__this);
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_3 = (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m86ED3134FB107447E738C04EAF8CF4E289AF0E7F((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_8_System_IComparable_CompareTo_mC2981E36D2482DB9AE0607C12FF5C14A781065BC_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		int32_t L_10;
		L_10 = ValueTuple_8_CompareTo_mDDD29E3BF5C49180F322948B2EEBF530F376A894((ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)__this, (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A )((*(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)((ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 34));
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_System_IComparable_CompareTo_mC2981E36D2482DB9AE0607C12FF5C14A781065BC_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * _thisAdjusted = reinterpret_cast<ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_System_IComparable_CompareTo_mC2981E36D2482DB9AE0607C12FF5C14A781065BC(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::CompareTo(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_CompareTo_mDDD29E3BF5C49180F322948B2EEBF530F376A894_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * L_0;
		L_0 = ((  Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		bool L_1 = (bool)__this->get_Item1_0();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_2 = ___other0;
		bool L_3 = (bool)L_2.get_Item1_0();
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, bool, bool >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Boolean>::Compare(T,T) */, (Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 *)L_0, (bool)L_1, (bool)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return (int32_t)L_6;
	}

IL_001c:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_7;
		L_7 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 38)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_9 = ___other0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9.get_Item2_1();
		int32_t L_11;
		L_11 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_0 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return (int32_t)L_13;
	}

IL_0038:
	{
		Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8 * L_14;
		L_14 = ((  Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 41)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 41));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_15 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item3_2();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_16 = ___other0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_17 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_16.get_Item3_2();
		int32_t L_18;
		L_18 = VirtFuncInvoker2< int32_t, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Nullable`1<UnityEngine.Vector3>>::Compare(T,T) */, (Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8 *)L_14, (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_15, (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_17);
		V_0 = (int32_t)L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return (int32_t)L_20;
	}

IL_0054:
	{
		Comparer_1_t58CD692E407CA2E87E86974C43189EC85A8A3274 * L_21;
		L_21 = ((  Comparer_1_t58CD692E407CA2E87E86974C43189EC85A8A3274 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 44)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 44));
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_22 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )__this->get_Item4_3();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_23 = ___other0;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_24 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_23.get_Item4_3();
		int32_t L_25;
		L_25 = VirtFuncInvoker2< int32_t, Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 , Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Nullable`1<Fusion.Rotation>>::Compare(T,T) */, (Comparer_1_t58CD692E407CA2E87E86974C43189EC85A8A3274 *)L_21, (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_22, (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_24);
		V_0 = (int32_t)L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return (int32_t)L_27;
	}

IL_0070:
	{
		Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8 * L_28;
		L_28 = ((  Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 47)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 47));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_29 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item5_4();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_30 = ___other0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_31 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_30.get_Item5_4();
		int32_t L_32;
		L_32 = VirtFuncInvoker2< int32_t, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Nullable`1<UnityEngine.Vector3>>::Compare(T,T) */, (Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8 *)L_28, (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_29, (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_31);
		V_0 = (int32_t)L_32;
		int32_t L_33 = V_0;
		if (!L_33)
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_34 = V_0;
		return (int32_t)L_34;
	}

IL_008c:
	{
		Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * L_35;
		L_35 = ((  Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 50)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 50));
		bool L_36 = (bool)__this->get_Item6_5();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_37 = ___other0;
		bool L_38 = (bool)L_37.get_Item6_5();
		int32_t L_39;
		L_39 = VirtFuncInvoker2< int32_t, bool, bool >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Boolean>::Compare(T,T) */, (Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 *)L_35, (bool)L_36, (bool)L_38);
		V_0 = (int32_t)L_39;
		int32_t L_40 = V_0;
		if (!L_40)
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_41 = V_0;
		return (int32_t)L_41;
	}

IL_00a8:
	{
		Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8 * L_42;
		L_42 = ((  Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 53)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 53));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_43 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item7_6();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_44 = ___other0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_45 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_44.get_Item7_6();
		int32_t L_46;
		L_46 = VirtFuncInvoker2< int32_t, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Nullable`1<UnityEngine.Vector3>>::Compare(T,T) */, (Comparer_1_t151DC4CD59063C8DF485677E3987055A542201E8 *)L_42, (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_43, (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_45);
		V_0 = (int32_t)L_46;
		int32_t L_47 = V_0;
		if (!L_47)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_48 = V_0;
		return (int32_t)L_48;
	}

IL_00c4:
	{
		Comparer_1_t62856919F1778C6A50B33A5FDF93A5472D774C40 * L_49;
		L_49 = ((  Comparer_1_t62856919F1778C6A50B33A5FDF93A5472D774C40 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_50 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )__this->get_Rest_7();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_51 = ___other0;
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_52 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_51.get_Rest_7();
		int32_t L_53;
		L_53 = VirtFuncInvoker2< int32_t, ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D , ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::Compare(T,T) */, (Comparer_1_t62856919F1778C6A50B33A5FDF93A5472D774C40 *)L_49, (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_50, (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_52);
		return (int32_t)L_53;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_CompareTo_mDDD29E3BF5C49180F322948B2EEBF530F376A894_AdjustorThunk (RuntimeObject * __this, ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * _thisAdjusted = reinterpret_cast<ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_CompareTo_mDDD29E3BF5C49180F322948B2EEBF530F376A894(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_m94E3660461F23295198F10CE717AE9378431C778_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_2 = (*(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)__this);
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_3 = (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m86ED3134FB107447E738C04EAF8CF4E289AF0E7F((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_m94E3660461F23295198F10CE717AE9378431C778_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		V_0 = (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A )((*(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)((ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))));
		RuntimeObject* L_10 = ___comparer1;
		bool L_11 = (bool)__this->get_Item1_0();
		bool L_12 = L_11;
		RuntimeObject * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 27), &L_12);
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_14 = V_0;
		bool L_15 = (bool)L_14.get_Item1_0();
		bool L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 27), &L_16);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_13, (RuntimeObject *)L_17);
		V_1 = (int32_t)L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_20 = V_1;
		return (int32_t)L_20;
	}

IL_0060:
	{
		RuntimeObject* L_21 = ___comparer1;
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_23 = V_0;
		RuntimeObject * L_24 = (RuntimeObject *)L_23.get_Item2_1();
		int32_t L_25;
		L_25 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		V_1 = (int32_t)L_25;
		int32_t L_26 = V_1;
		if (!L_26)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_27 = V_1;
		return (int32_t)L_27;
	}

IL_0082:
	{
		RuntimeObject* L_28 = ___comparer1;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_29 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item3_2();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_30 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_29;
		RuntimeObject * L_31 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_30);
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_32 = V_0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_33 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_32.get_Item3_2();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_34 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_33;
		RuntimeObject * L_35 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_34);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_28, (RuntimeObject *)L_31, (RuntimeObject *)L_35);
		V_1 = (int32_t)L_36;
		int32_t L_37 = V_1;
		if (!L_37)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_38 = V_1;
		return (int32_t)L_38;
	}

IL_00a4:
	{
		RuntimeObject* L_39 = ___comparer1;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_40 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )__this->get_Item4_3();
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_41 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_40;
		RuntimeObject * L_42 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_41);
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_43 = V_0;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_44 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_43.get_Item4_3();
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_45 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_44;
		RuntimeObject * L_46 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_45);
		int32_t L_47;
		L_47 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_39, (RuntimeObject *)L_42, (RuntimeObject *)L_46);
		V_1 = (int32_t)L_47;
		int32_t L_48 = V_1;
		if (!L_48)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_49 = V_1;
		return (int32_t)L_49;
	}

IL_00c6:
	{
		RuntimeObject* L_50 = ___comparer1;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_51 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item5_4();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_52 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_51;
		RuntimeObject * L_53 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_52);
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_54 = V_0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_55 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_54.get_Item5_4();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_56 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_55;
		RuntimeObject * L_57 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_56);
		int32_t L_58;
		L_58 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_50, (RuntimeObject *)L_53, (RuntimeObject *)L_57);
		V_1 = (int32_t)L_58;
		int32_t L_59 = V_1;
		if (!L_59)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_60 = V_1;
		return (int32_t)L_60;
	}

IL_00e8:
	{
		RuntimeObject* L_61 = ___comparer1;
		bool L_62 = (bool)__this->get_Item6_5();
		bool L_63 = L_62;
		RuntimeObject * L_64 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 32), &L_63);
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_65 = V_0;
		bool L_66 = (bool)L_65.get_Item6_5();
		bool L_67 = L_66;
		RuntimeObject * L_68 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 32), &L_67);
		int32_t L_69;
		L_69 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_61, (RuntimeObject *)L_64, (RuntimeObject *)L_68);
		V_1 = (int32_t)L_69;
		int32_t L_70 = V_1;
		if (!L_70)
		{
			goto IL_010a;
		}
	}
	{
		int32_t L_71 = V_1;
		return (int32_t)L_71;
	}

IL_010a:
	{
		RuntimeObject* L_72 = ___comparer1;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_73 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item7_6();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_74 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_73;
		RuntimeObject * L_75 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_74);
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_76 = V_0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_77 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_76.get_Item7_6();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_78 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_77;
		RuntimeObject * L_79 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_78);
		int32_t L_80;
		L_80 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_72, (RuntimeObject *)L_75, (RuntimeObject *)L_79);
		V_1 = (int32_t)L_80;
		int32_t L_81 = V_1;
		if (!L_81)
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_82 = V_1;
		return (int32_t)L_82;
	}

IL_012c:
	{
		RuntimeObject* L_83 = ___comparer1;
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_84 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )__this->get_Rest_7();
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_85 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_84;
		RuntimeObject * L_86 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_85);
		ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A  L_87 = V_0;
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_88 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_87.get_Rest_7();
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_89 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_88;
		RuntimeObject * L_90 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_89);
		int32_t L_91;
		L_91 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_83, (RuntimeObject *)L_86, (RuntimeObject *)L_90);
		return (int32_t)L_91;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_m94E3660461F23295198F10CE717AE9378431C778_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * _thisAdjusted = reinterpret_cast<ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_m94E3660461F23295198F10CE717AE9378431C778(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_GetHashCode_mE2C7E6E80DE6FC6232B0AAF213E4DC15E6CA6AF4_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITuple_t559B1A91B496A81AAFEE74F54ACD49FE8CDE2215_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	RuntimeObject * V_4 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool* G_B4_0 = NULL;
	bool* G_B2_0 = NULL;
	bool* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	RuntimeObject ** G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B17_3 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	int32_t G_B18_3 = 0;
	int32_t G_B18_4 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	int32_t G_B21_2 = 0;
	int32_t G_B21_3 = 0;
	int32_t G_B21_4 = 0;
	bool* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	int32_t G_B24_2 = 0;
	int32_t G_B24_3 = 0;
	int32_t G_B24_4 = 0;
	int32_t G_B24_5 = 0;
	bool* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	int32_t G_B22_2 = 0;
	int32_t G_B22_3 = 0;
	int32_t G_B22_4 = 0;
	int32_t G_B22_5 = 0;
	bool* G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	int32_t G_B23_2 = 0;
	int32_t G_B23_3 = 0;
	int32_t G_B23_4 = 0;
	int32_t G_B23_5 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B25_1 = 0;
	int32_t G_B25_2 = 0;
	int32_t G_B25_3 = 0;
	int32_t G_B25_4 = 0;
	int32_t G_B25_5 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B28_0 = NULL;
	int32_t G_B28_1 = 0;
	int32_t G_B28_2 = 0;
	int32_t G_B28_3 = 0;
	int32_t G_B28_4 = 0;
	int32_t G_B28_5 = 0;
	int32_t G_B28_6 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B26_0 = NULL;
	int32_t G_B26_1 = 0;
	int32_t G_B26_2 = 0;
	int32_t G_B26_3 = 0;
	int32_t G_B26_4 = 0;
	int32_t G_B26_5 = 0;
	int32_t G_B26_6 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B27_0 = NULL;
	int32_t G_B27_1 = 0;
	int32_t G_B27_2 = 0;
	int32_t G_B27_3 = 0;
	int32_t G_B27_4 = 0;
	int32_t G_B27_5 = 0;
	int32_t G_B27_6 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B29_1 = 0;
	int32_t G_B29_2 = 0;
	int32_t G_B29_3 = 0;
	int32_t G_B29_4 = 0;
	int32_t G_B29_5 = 0;
	int32_t G_B29_6 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B37_0 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B35_0 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B36_0 = NULL;
	int32_t G_B38_0 = 0;
	bool* G_B42_0 = NULL;
	bool* G_B40_0 = NULL;
	bool* G_B41_0 = NULL;
	int32_t G_B43_0 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B46_0 = NULL;
	int32_t G_B46_1 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B44_0 = NULL;
	int32_t G_B44_1 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B45_0 = NULL;
	int32_t G_B45_1 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B47_1 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B51_0 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B49_0 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B50_0 = NULL;
	int32_t G_B52_0 = 0;
	bool* G_B55_0 = NULL;
	int32_t G_B55_1 = 0;
	bool* G_B53_0 = NULL;
	int32_t G_B53_1 = 0;
	bool* G_B54_0 = NULL;
	int32_t G_B54_1 = 0;
	int32_t G_B56_0 = 0;
	int32_t G_B56_1 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B59_0 = NULL;
	int32_t G_B59_1 = 0;
	int32_t G_B59_2 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B57_0 = NULL;
	int32_t G_B57_1 = 0;
	int32_t G_B57_2 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B58_0 = NULL;
	int32_t G_B58_1 = 0;
	int32_t G_B58_2 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B60_1 = 0;
	int32_t G_B60_2 = 0;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B64_0 = NULL;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B62_0 = NULL;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B63_0 = NULL;
	int32_t G_B65_0 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B68_0 = NULL;
	int32_t G_B68_1 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B66_0 = NULL;
	int32_t G_B66_1 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B67_0 = NULL;
	int32_t G_B67_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B69_1 = 0;
	bool* G_B72_0 = NULL;
	int32_t G_B72_1 = 0;
	int32_t G_B72_2 = 0;
	bool* G_B70_0 = NULL;
	int32_t G_B70_1 = 0;
	int32_t G_B70_2 = 0;
	bool* G_B71_0 = NULL;
	int32_t G_B71_1 = 0;
	int32_t G_B71_2 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B73_2 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B76_0 = NULL;
	int32_t G_B76_1 = 0;
	int32_t G_B76_2 = 0;
	int32_t G_B76_3 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B74_0 = NULL;
	int32_t G_B74_1 = 0;
	int32_t G_B74_2 = 0;
	int32_t G_B74_3 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B75_0 = NULL;
	int32_t G_B75_1 = 0;
	int32_t G_B75_2 = 0;
	int32_t G_B75_3 = 0;
	int32_t G_B77_0 = 0;
	int32_t G_B77_1 = 0;
	int32_t G_B77_2 = 0;
	int32_t G_B77_3 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B81_0 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B79_0 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B80_0 = NULL;
	int32_t G_B82_0 = 0;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B85_0 = NULL;
	int32_t G_B85_1 = 0;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B83_0 = NULL;
	int32_t G_B83_1 = 0;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B84_0 = NULL;
	int32_t G_B84_1 = 0;
	int32_t G_B86_0 = 0;
	int32_t G_B86_1 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B89_0 = NULL;
	int32_t G_B89_1 = 0;
	int32_t G_B89_2 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B87_0 = NULL;
	int32_t G_B87_1 = 0;
	int32_t G_B87_2 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B88_0 = NULL;
	int32_t G_B88_1 = 0;
	int32_t G_B88_2 = 0;
	int32_t G_B90_0 = 0;
	int32_t G_B90_1 = 0;
	int32_t G_B90_2 = 0;
	bool* G_B93_0 = NULL;
	int32_t G_B93_1 = 0;
	int32_t G_B93_2 = 0;
	int32_t G_B93_3 = 0;
	bool* G_B91_0 = NULL;
	int32_t G_B91_1 = 0;
	int32_t G_B91_2 = 0;
	int32_t G_B91_3 = 0;
	bool* G_B92_0 = NULL;
	int32_t G_B92_1 = 0;
	int32_t G_B92_2 = 0;
	int32_t G_B92_3 = 0;
	int32_t G_B94_0 = 0;
	int32_t G_B94_1 = 0;
	int32_t G_B94_2 = 0;
	int32_t G_B94_3 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B97_0 = NULL;
	int32_t G_B97_1 = 0;
	int32_t G_B97_2 = 0;
	int32_t G_B97_3 = 0;
	int32_t G_B97_4 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B95_0 = NULL;
	int32_t G_B95_1 = 0;
	int32_t G_B95_2 = 0;
	int32_t G_B95_3 = 0;
	int32_t G_B95_4 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B96_0 = NULL;
	int32_t G_B96_1 = 0;
	int32_t G_B96_2 = 0;
	int32_t G_B96_3 = 0;
	int32_t G_B96_4 = 0;
	int32_t G_B98_0 = 0;
	int32_t G_B98_1 = 0;
	int32_t G_B98_2 = 0;
	int32_t G_B98_3 = 0;
	int32_t G_B98_4 = 0;
	RuntimeObject ** G_B102_0 = NULL;
	RuntimeObject ** G_B100_0 = NULL;
	RuntimeObject ** G_B101_0 = NULL;
	int32_t G_B103_0 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B106_0 = NULL;
	int32_t G_B106_1 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B104_0 = NULL;
	int32_t G_B104_1 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B105_0 = NULL;
	int32_t G_B105_1 = 0;
	int32_t G_B107_0 = 0;
	int32_t G_B107_1 = 0;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B110_0 = NULL;
	int32_t G_B110_1 = 0;
	int32_t G_B110_2 = 0;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B108_0 = NULL;
	int32_t G_B108_1 = 0;
	int32_t G_B108_2 = 0;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B109_0 = NULL;
	int32_t G_B109_1 = 0;
	int32_t G_B109_2 = 0;
	int32_t G_B111_0 = 0;
	int32_t G_B111_1 = 0;
	int32_t G_B111_2 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B114_0 = NULL;
	int32_t G_B114_1 = 0;
	int32_t G_B114_2 = 0;
	int32_t G_B114_3 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B112_0 = NULL;
	int32_t G_B112_1 = 0;
	int32_t G_B112_2 = 0;
	int32_t G_B112_3 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B113_0 = NULL;
	int32_t G_B113_1 = 0;
	int32_t G_B113_2 = 0;
	int32_t G_B113_3 = 0;
	int32_t G_B115_0 = 0;
	int32_t G_B115_1 = 0;
	int32_t G_B115_2 = 0;
	int32_t G_B115_3 = 0;
	bool* G_B118_0 = NULL;
	int32_t G_B118_1 = 0;
	int32_t G_B118_2 = 0;
	int32_t G_B118_3 = 0;
	int32_t G_B118_4 = 0;
	bool* G_B116_0 = NULL;
	int32_t G_B116_1 = 0;
	int32_t G_B116_2 = 0;
	int32_t G_B116_3 = 0;
	int32_t G_B116_4 = 0;
	bool* G_B117_0 = NULL;
	int32_t G_B117_1 = 0;
	int32_t G_B117_2 = 0;
	int32_t G_B117_3 = 0;
	int32_t G_B117_4 = 0;
	int32_t G_B119_0 = 0;
	int32_t G_B119_1 = 0;
	int32_t G_B119_2 = 0;
	int32_t G_B119_3 = 0;
	int32_t G_B119_4 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B122_0 = NULL;
	int32_t G_B122_1 = 0;
	int32_t G_B122_2 = 0;
	int32_t G_B122_3 = 0;
	int32_t G_B122_4 = 0;
	int32_t G_B122_5 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B120_0 = NULL;
	int32_t G_B120_1 = 0;
	int32_t G_B120_2 = 0;
	int32_t G_B120_3 = 0;
	int32_t G_B120_4 = 0;
	int32_t G_B120_5 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B121_0 = NULL;
	int32_t G_B121_1 = 0;
	int32_t G_B121_2 = 0;
	int32_t G_B121_3 = 0;
	int32_t G_B121_4 = 0;
	int32_t G_B121_5 = 0;
	int32_t G_B123_0 = 0;
	int32_t G_B123_1 = 0;
	int32_t G_B123_2 = 0;
	int32_t G_B123_3 = 0;
	int32_t G_B123_4 = 0;
	int32_t G_B123_5 = 0;
	bool* G_B127_0 = NULL;
	bool* G_B125_0 = NULL;
	bool* G_B126_0 = NULL;
	int32_t G_B128_0 = 0;
	RuntimeObject ** G_B131_0 = NULL;
	int32_t G_B131_1 = 0;
	RuntimeObject ** G_B129_0 = NULL;
	int32_t G_B129_1 = 0;
	RuntimeObject ** G_B130_0 = NULL;
	int32_t G_B130_1 = 0;
	int32_t G_B132_0 = 0;
	int32_t G_B132_1 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B135_0 = NULL;
	int32_t G_B135_1 = 0;
	int32_t G_B135_2 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B133_0 = NULL;
	int32_t G_B133_1 = 0;
	int32_t G_B133_2 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B134_0 = NULL;
	int32_t G_B134_1 = 0;
	int32_t G_B134_2 = 0;
	int32_t G_B136_0 = 0;
	int32_t G_B136_1 = 0;
	int32_t G_B136_2 = 0;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B139_0 = NULL;
	int32_t G_B139_1 = 0;
	int32_t G_B139_2 = 0;
	int32_t G_B139_3 = 0;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B137_0 = NULL;
	int32_t G_B137_1 = 0;
	int32_t G_B137_2 = 0;
	int32_t G_B137_3 = 0;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B138_0 = NULL;
	int32_t G_B138_1 = 0;
	int32_t G_B138_2 = 0;
	int32_t G_B138_3 = 0;
	int32_t G_B140_0 = 0;
	int32_t G_B140_1 = 0;
	int32_t G_B140_2 = 0;
	int32_t G_B140_3 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B143_0 = NULL;
	int32_t G_B143_1 = 0;
	int32_t G_B143_2 = 0;
	int32_t G_B143_3 = 0;
	int32_t G_B143_4 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B141_0 = NULL;
	int32_t G_B141_1 = 0;
	int32_t G_B141_2 = 0;
	int32_t G_B141_3 = 0;
	int32_t G_B141_4 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B142_0 = NULL;
	int32_t G_B142_1 = 0;
	int32_t G_B142_2 = 0;
	int32_t G_B142_3 = 0;
	int32_t G_B142_4 = 0;
	int32_t G_B144_0 = 0;
	int32_t G_B144_1 = 0;
	int32_t G_B144_2 = 0;
	int32_t G_B144_3 = 0;
	int32_t G_B144_4 = 0;
	bool* G_B147_0 = NULL;
	int32_t G_B147_1 = 0;
	int32_t G_B147_2 = 0;
	int32_t G_B147_3 = 0;
	int32_t G_B147_4 = 0;
	int32_t G_B147_5 = 0;
	bool* G_B145_0 = NULL;
	int32_t G_B145_1 = 0;
	int32_t G_B145_2 = 0;
	int32_t G_B145_3 = 0;
	int32_t G_B145_4 = 0;
	int32_t G_B145_5 = 0;
	bool* G_B146_0 = NULL;
	int32_t G_B146_1 = 0;
	int32_t G_B146_2 = 0;
	int32_t G_B146_3 = 0;
	int32_t G_B146_4 = 0;
	int32_t G_B146_5 = 0;
	int32_t G_B148_0 = 0;
	int32_t G_B148_1 = 0;
	int32_t G_B148_2 = 0;
	int32_t G_B148_3 = 0;
	int32_t G_B148_4 = 0;
	int32_t G_B148_5 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B151_0 = NULL;
	int32_t G_B151_1 = 0;
	int32_t G_B151_2 = 0;
	int32_t G_B151_3 = 0;
	int32_t G_B151_4 = 0;
	int32_t G_B151_5 = 0;
	int32_t G_B151_6 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B149_0 = NULL;
	int32_t G_B149_1 = 0;
	int32_t G_B149_2 = 0;
	int32_t G_B149_3 = 0;
	int32_t G_B149_4 = 0;
	int32_t G_B149_5 = 0;
	int32_t G_B149_6 = 0;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B150_0 = NULL;
	int32_t G_B150_1 = 0;
	int32_t G_B150_2 = 0;
	int32_t G_B150_3 = 0;
	int32_t G_B150_4 = 0;
	int32_t G_B150_5 = 0;
	int32_t G_B150_6 = 0;
	int32_t G_B152_0 = 0;
	int32_t G_B152_1 = 0;
	int32_t G_B152_2 = 0;
	int32_t G_B152_3 = 0;
	int32_t G_B152_4 = 0;
	int32_t G_B152_5 = 0;
	int32_t G_B152_6 = 0;
	{
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_0 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )__this->get_Rest_7();
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_1 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_1);
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		if (L_3)
		{
			goto IL_01a2;
		}
	}
	{
		bool* L_4 = (bool*)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_3), sizeof(bool));
		G_B4_0 = L_4;
		goto IL_0041;
		G_B2_0 = L_4;
	}
	{
		bool L_6 = (*(bool*)G_B2_0);
		V_3 = (bool)L_6;
		G_B4_0 = (&V_3);
		goto IL_0041;
		G_B3_0 = (&V_3);
	}
	{
		G_B5_0 = 0;
		goto IL_004c;
	}

IL_0041:
	{
		int32_t L_8;
		L_8 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)G_B4_0, /*hidden argument*/NULL);
		G_B5_0 = L_8;
	}

IL_004c:
	{
		RuntimeObject ** L_9 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_10 = V_4;
		G_B6_0 = L_9;
		G_B6_1 = G_B5_0;
		if (L_10)
		{
			G_B8_0 = L_9;
			G_B8_1 = G_B5_0;
			goto IL_0079;
		}
	}
	{
		RuntimeObject * L_11 = (*(RuntimeObject **)G_B6_0);
		V_4 = (RuntimeObject *)L_11;
		RuntimeObject * L_12 = V_4;
		G_B7_0 = (&V_4);
		G_B7_1 = G_B6_1;
		if (L_12)
		{
			G_B8_0 = (&V_4);
			G_B8_1 = G_B6_1;
			goto IL_0079;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_1;
		goto IL_0084;
	}

IL_0079:
	{
		int32_t L_13;
		L_13 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B8_0));
		G_B9_0 = L_13;
		G_B9_1 = G_B8_1;
	}

IL_0084:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_14 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_15 = V_5;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_16 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_16);
		G_B10_0 = L_14;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		if (L_17)
		{
			G_B12_0 = L_14;
			G_B12_1 = G_B9_0;
			G_B12_2 = G_B9_1;
			goto IL_00b1;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_18 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B10_0);
		V_5 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_18;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_19 = V_5;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_20 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_19;
		RuntimeObject * L_21 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_20);
		G_B11_0 = (&V_5);
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		if (L_21)
		{
			G_B12_0 = (&V_5);
			G_B12_1 = G_B10_1;
			G_B12_2 = G_B10_2;
			goto IL_00b1;
		}
	}
	{
		G_B13_0 = 0;
		G_B13_1 = G_B11_1;
		G_B13_2 = G_B11_2;
		goto IL_00bc;
	}

IL_00b1:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_22(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), G_B12_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__183 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_22));
		int32_t L_23;
		L_23 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__183.methodPtr)((RuntimeObject *)(&L_22), /*hidden argument*/il2cpp_virtual_invoke_data__183.method);
		*G_B12_0 = L_22.m_Value;
		G_B13_0 = L_23;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
	}

IL_00bc:
	{
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * L_24 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 ));
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_25 = V_6;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_26 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_25;
		RuntimeObject * L_27 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_26);
		G_B14_0 = L_24;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
		G_B14_3 = G_B13_2;
		if (L_27)
		{
			G_B16_0 = L_24;
			G_B16_1 = G_B13_0;
			G_B16_2 = G_B13_1;
			G_B16_3 = G_B13_2;
			goto IL_00e9;
		}
	}
	{
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_28 = (*(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)G_B14_0);
		V_6 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_28;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_29 = V_6;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_30 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_29;
		RuntimeObject * L_31 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_30);
		G_B15_0 = (&V_6);
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		G_B15_3 = G_B14_3;
		if (L_31)
		{
			G_B16_0 = (&V_6);
			G_B16_1 = G_B14_1;
			G_B16_2 = G_B14_2;
			G_B16_3 = G_B14_3;
			goto IL_00e9;
		}
	}
	{
		G_B17_0 = 0;
		G_B17_1 = G_B15_1;
		G_B17_2 = G_B15_2;
		G_B17_3 = G_B15_3;
		goto IL_00f4;
	}

IL_00e9:
	{
		Il2CppFakeBox<Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 > L_32(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), G_B16_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__239 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_32));
		int32_t L_33;
		L_33 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__239.methodPtr)((RuntimeObject *)(&L_32), /*hidden argument*/il2cpp_virtual_invoke_data__239.method);
		*G_B16_0 = L_32.m_Value;
		G_B17_0 = L_33;
		G_B17_1 = G_B16_1;
		G_B17_2 = G_B16_2;
		G_B17_3 = G_B16_3;
	}

IL_00f4:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_34 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_35 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_36 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_35;
		RuntimeObject * L_37 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_36);
		G_B18_0 = L_34;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
		G_B18_4 = G_B17_3;
		if (L_37)
		{
			G_B20_0 = L_34;
			G_B20_1 = G_B17_0;
			G_B20_2 = G_B17_1;
			G_B20_3 = G_B17_2;
			G_B20_4 = G_B17_3;
			goto IL_0121;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_38 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B18_0);
		V_7 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_38;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_39 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_40 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_39;
		RuntimeObject * L_41 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_40);
		G_B19_0 = (&V_7);
		G_B19_1 = G_B18_1;
		G_B19_2 = G_B18_2;
		G_B19_3 = G_B18_3;
		G_B19_4 = G_B18_4;
		if (L_41)
		{
			G_B20_0 = (&V_7);
			G_B20_1 = G_B18_1;
			G_B20_2 = G_B18_2;
			G_B20_3 = G_B18_3;
			G_B20_4 = G_B18_4;
			goto IL_0121;
		}
	}
	{
		G_B21_0 = 0;
		G_B21_1 = G_B19_1;
		G_B21_2 = G_B19_2;
		G_B21_3 = G_B19_3;
		G_B21_4 = G_B19_4;
		goto IL_012c;
	}

IL_0121:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_42(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), G_B20_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__295 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_42));
		int32_t L_43;
		L_43 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__295.methodPtr)((RuntimeObject *)(&L_42), /*hidden argument*/il2cpp_virtual_invoke_data__295.method);
		*G_B20_0 = L_42.m_Value;
		G_B21_0 = L_43;
		G_B21_1 = G_B20_1;
		G_B21_2 = G_B20_2;
		G_B21_3 = G_B20_3;
		G_B21_4 = G_B20_4;
	}

IL_012c:
	{
		bool* L_44 = (bool*)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_8), sizeof(bool));
		G_B24_0 = L_44;
		G_B24_1 = G_B21_0;
		G_B24_2 = G_B21_1;
		G_B24_3 = G_B21_2;
		G_B24_4 = G_B21_3;
		G_B24_5 = G_B21_4;
		goto IL_0159;
		G_B22_0 = L_44;
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
		G_B22_3 = G_B21_2;
		G_B22_4 = G_B21_3;
		G_B22_5 = G_B21_4;
	}
	{
		bool L_46 = (*(bool*)G_B22_0);
		V_8 = (bool)L_46;
		G_B24_0 = (&V_8);
		G_B24_1 = G_B22_1;
		G_B24_2 = G_B22_2;
		G_B24_3 = G_B22_3;
		G_B24_4 = G_B22_4;
		G_B24_5 = G_B22_5;
		goto IL_0159;
		G_B23_0 = (&V_8);
		G_B23_1 = G_B22_1;
		G_B23_2 = G_B22_2;
		G_B23_3 = G_B22_3;
		G_B23_4 = G_B22_4;
		G_B23_5 = G_B22_5;
	}
	{
		G_B25_0 = 0;
		G_B25_1 = G_B23_1;
		G_B25_2 = G_B23_2;
		G_B25_3 = G_B23_3;
		G_B25_4 = G_B23_4;
		G_B25_5 = G_B23_5;
		goto IL_0164;
	}

IL_0159:
	{
		int32_t L_48;
		L_48 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)G_B24_0, /*hidden argument*/NULL);
		G_B25_0 = L_48;
		G_B25_1 = G_B24_1;
		G_B25_2 = G_B24_2;
		G_B25_3 = G_B24_3;
		G_B25_4 = G_B24_4;
		G_B25_5 = G_B24_5;
	}

IL_0164:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_49 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item7_6();
		il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_50 = V_9;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_51 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_50;
		RuntimeObject * L_52 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_51);
		G_B26_0 = L_49;
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
		G_B26_3 = G_B25_2;
		G_B26_4 = G_B25_3;
		G_B26_5 = G_B25_4;
		G_B26_6 = G_B25_5;
		if (L_52)
		{
			G_B28_0 = L_49;
			G_B28_1 = G_B25_0;
			G_B28_2 = G_B25_1;
			G_B28_3 = G_B25_2;
			G_B28_4 = G_B25_3;
			G_B28_5 = G_B25_4;
			G_B28_6 = G_B25_5;
			goto IL_0191;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_53 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B26_0);
		V_9 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_53;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_54 = V_9;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_55 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_54;
		RuntimeObject * L_56 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_55);
		G_B27_0 = (&V_9);
		G_B27_1 = G_B26_1;
		G_B27_2 = G_B26_2;
		G_B27_3 = G_B26_3;
		G_B27_4 = G_B26_4;
		G_B27_5 = G_B26_5;
		G_B27_6 = G_B26_6;
		if (L_56)
		{
			G_B28_0 = (&V_9);
			G_B28_1 = G_B26_1;
			G_B28_2 = G_B26_2;
			G_B28_3 = G_B26_3;
			G_B28_4 = G_B26_4;
			G_B28_5 = G_B26_5;
			G_B28_6 = G_B26_6;
			goto IL_0191;
		}
	}
	{
		G_B29_0 = 0;
		G_B29_1 = G_B27_1;
		G_B29_2 = G_B27_2;
		G_B29_3 = G_B27_3;
		G_B29_4 = G_B27_4;
		G_B29_5 = G_B27_5;
		G_B29_6 = G_B27_6;
		goto IL_019c;
	}

IL_0191:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_57(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), G_B28_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__407 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_57));
		int32_t L_58;
		L_58 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__407.methodPtr)((RuntimeObject *)(&L_57), /*hidden argument*/il2cpp_virtual_invoke_data__407.method);
		*G_B28_0 = L_57.m_Value;
		G_B29_0 = L_58;
		G_B29_1 = G_B28_1;
		G_B29_2 = G_B28_2;
		G_B29_3 = G_B28_3;
		G_B29_4 = G_B28_4;
		G_B29_5 = G_B28_5;
		G_B29_6 = G_B28_6;
	}

IL_019c:
	{
		int32_t L_59;
		L_59 = ValueTuple_CombineHashCodes_m63F8588429ABEC6BEC8CBBE376D253E423D0C712((int32_t)G_B29_6, (int32_t)G_B29_5, (int32_t)G_B29_4, (int32_t)G_B29_3, (int32_t)G_B29_2, (int32_t)G_B29_1, (int32_t)G_B29_0, /*hidden argument*/NULL);
		return (int32_t)L_59;
	}

IL_01a2:
	{
		RuntimeObject* L_60 = V_0;
		int32_t L_61;
		L_61 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Runtime.CompilerServices.ITuple::get_Length() */, ITuple_t559B1A91B496A81AAFEE74F54ACD49FE8CDE2215_il2cpp_TypeInfo_var, (RuntimeObject*)L_60);
		V_1 = (int32_t)L_61;
		int32_t L_62 = V_1;
		if ((((int32_t)L_62) < ((int32_t)8)))
		{
			goto IL_01b4;
		}
	}
	{
		RuntimeObject* L_63 = V_0;
		int32_t L_64;
		L_64 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_63);
		return (int32_t)L_64;
	}

IL_01b4:
	{
		int32_t L_65 = V_1;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)8, (int32_t)L_65));
		int32_t L_66 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_66, (int32_t)1)))
		{
			case 0:
			{
				goto IL_01e5;
			}
			case 1:
			{
				goto IL_0229;
			}
			case 2:
			{
				goto IL_02a5;
			}
			case 3:
			{
				goto IL_0359;
			}
			case 4:
			{
				goto IL_0445;
			}
			case 5:
			{
				goto IL_0569;
			}
			case 6:
			{
				goto IL_06c5;
			}
			case 7:
			{
				goto IL_06c5;
			}
		}
	}
	{
		goto IL_0856;
	}

IL_01e5:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_67 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item7_6();
		il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_68 = V_9;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_69 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_68;
		RuntimeObject * L_70 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_69);
		G_B35_0 = L_67;
		if (L_70)
		{
			G_B37_0 = L_67;
			goto IL_0212;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_71 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B35_0);
		V_9 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_71;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_72 = V_9;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_73 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_72;
		RuntimeObject * L_74 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_73);
		G_B36_0 = (&V_9);
		if (L_74)
		{
			G_B37_0 = (&V_9);
			goto IL_0212;
		}
	}
	{
		G_B38_0 = 0;
		goto IL_021d;
	}

IL_0212:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_75(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), G_B37_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__536 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_75));
		int32_t L_76;
		L_76 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__536.methodPtr)((RuntimeObject *)(&L_75), /*hidden argument*/il2cpp_virtual_invoke_data__536.method);
		*G_B37_0 = L_75.m_Value;
		G_B38_0 = L_76;
	}

IL_021d:
	{
		RuntimeObject* L_77 = V_0;
		int32_t L_78;
		L_78 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_77);
		int32_t L_79;
		L_79 = ValueTuple_CombineHashCodes_mBAD65E2DE7D9956285B0F702D39BB9DD16B1CDC8((int32_t)G_B38_0, (int32_t)L_78, /*hidden argument*/NULL);
		return (int32_t)L_79;
	}

IL_0229:
	{
		bool* L_80 = (bool*)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_8), sizeof(bool));
		G_B42_0 = L_80;
		goto IL_0256;
		G_B40_0 = L_80;
	}
	{
		bool L_82 = (*(bool*)G_B40_0);
		V_8 = (bool)L_82;
		G_B42_0 = (&V_8);
		goto IL_0256;
		G_B41_0 = (&V_8);
	}
	{
		G_B43_0 = 0;
		goto IL_0261;
	}

IL_0256:
	{
		int32_t L_84;
		L_84 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)G_B42_0, /*hidden argument*/NULL);
		G_B43_0 = L_84;
	}

IL_0261:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_85 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item7_6();
		il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_86 = V_9;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_87 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_86;
		RuntimeObject * L_88 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_87);
		G_B44_0 = L_85;
		G_B44_1 = G_B43_0;
		if (L_88)
		{
			G_B46_0 = L_85;
			G_B46_1 = G_B43_0;
			goto IL_028e;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_89 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B44_0);
		V_9 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_89;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_90 = V_9;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_91 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_90;
		RuntimeObject * L_92 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_91);
		G_B45_0 = (&V_9);
		G_B45_1 = G_B44_1;
		if (L_92)
		{
			G_B46_0 = (&V_9);
			G_B46_1 = G_B44_1;
			goto IL_028e;
		}
	}
	{
		G_B47_0 = 0;
		G_B47_1 = G_B45_1;
		goto IL_0299;
	}

IL_028e:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_93(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), G_B46_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__660 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_93));
		int32_t L_94;
		L_94 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__660.methodPtr)((RuntimeObject *)(&L_93), /*hidden argument*/il2cpp_virtual_invoke_data__660.method);
		*G_B46_0 = L_93.m_Value;
		G_B47_0 = L_94;
		G_B47_1 = G_B46_1;
	}

IL_0299:
	{
		RuntimeObject* L_95 = V_0;
		int32_t L_96;
		L_96 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_95);
		int32_t L_97;
		L_97 = ValueTuple_CombineHashCodes_mDE02E3F98EDFE31BD30745AE679FD155682AF7F4((int32_t)G_B47_1, (int32_t)G_B47_0, (int32_t)L_96, /*hidden argument*/NULL);
		return (int32_t)L_97;
	}

IL_02a5:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_98 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_99 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_100 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_99;
		RuntimeObject * L_101 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_100);
		G_B49_0 = L_98;
		if (L_101)
		{
			G_B51_0 = L_98;
			goto IL_02d2;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_102 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B49_0);
		V_7 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_102;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_103 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_104 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_103;
		RuntimeObject * L_105 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_104);
		G_B50_0 = (&V_7);
		if (L_105)
		{
			G_B51_0 = (&V_7);
			goto IL_02d2;
		}
	}
	{
		G_B52_0 = 0;
		goto IL_02dd;
	}

IL_02d2:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_106(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), G_B51_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__728 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_106));
		int32_t L_107;
		L_107 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__728.methodPtr)((RuntimeObject *)(&L_106), /*hidden argument*/il2cpp_virtual_invoke_data__728.method);
		*G_B51_0 = L_106.m_Value;
		G_B52_0 = L_107;
	}

IL_02dd:
	{
		bool* L_108 = (bool*)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_8), sizeof(bool));
		G_B55_0 = L_108;
		G_B55_1 = G_B52_0;
		goto IL_030a;
		G_B53_0 = L_108;
		G_B53_1 = G_B52_0;
	}
	{
		bool L_110 = (*(bool*)G_B53_0);
		V_8 = (bool)L_110;
		G_B55_0 = (&V_8);
		G_B55_1 = G_B53_1;
		goto IL_030a;
		G_B54_0 = (&V_8);
		G_B54_1 = G_B53_1;
	}
	{
		G_B56_0 = 0;
		G_B56_1 = G_B54_1;
		goto IL_0315;
	}

IL_030a:
	{
		int32_t L_112;
		L_112 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)G_B55_0, /*hidden argument*/NULL);
		G_B56_0 = L_112;
		G_B56_1 = G_B55_1;
	}

IL_0315:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_113 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item7_6();
		il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_114 = V_9;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_115 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_114;
		RuntimeObject * L_116 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_115);
		G_B57_0 = L_113;
		G_B57_1 = G_B56_0;
		G_B57_2 = G_B56_1;
		if (L_116)
		{
			G_B59_0 = L_113;
			G_B59_1 = G_B56_0;
			G_B59_2 = G_B56_1;
			goto IL_0342;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_117 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B57_0);
		V_9 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_117;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_118 = V_9;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_119 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_118;
		RuntimeObject * L_120 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_119);
		G_B58_0 = (&V_9);
		G_B58_1 = G_B57_1;
		G_B58_2 = G_B57_2;
		if (L_120)
		{
			G_B59_0 = (&V_9);
			G_B59_1 = G_B57_1;
			G_B59_2 = G_B57_2;
			goto IL_0342;
		}
	}
	{
		G_B60_0 = 0;
		G_B60_1 = G_B58_1;
		G_B60_2 = G_B58_2;
		goto IL_034d;
	}

IL_0342:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_121(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), G_B59_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__840 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_121));
		int32_t L_122;
		L_122 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__840.methodPtr)((RuntimeObject *)(&L_121), /*hidden argument*/il2cpp_virtual_invoke_data__840.method);
		*G_B59_0 = L_121.m_Value;
		G_B60_0 = L_122;
		G_B60_1 = G_B59_1;
		G_B60_2 = G_B59_2;
	}

IL_034d:
	{
		RuntimeObject* L_123 = V_0;
		int32_t L_124;
		L_124 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_123);
		int32_t L_125;
		L_125 = ValueTuple_CombineHashCodes_m25F3E4691BDE4DB8F7822BCF15ED161471E73FCB((int32_t)G_B60_2, (int32_t)G_B60_1, (int32_t)G_B60_0, (int32_t)L_124, /*hidden argument*/NULL);
		return (int32_t)L_125;
	}

IL_0359:
	{
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * L_126 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 ));
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_127 = V_6;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_128 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_127;
		RuntimeObject * L_129 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_128);
		G_B62_0 = L_126;
		if (L_129)
		{
			G_B64_0 = L_126;
			goto IL_0386;
		}
	}
	{
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_130 = (*(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)G_B62_0);
		V_6 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_130;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_131 = V_6;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_132 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_131;
		RuntimeObject * L_133 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_132);
		G_B63_0 = (&V_6);
		if (L_133)
		{
			G_B64_0 = (&V_6);
			goto IL_0386;
		}
	}
	{
		G_B65_0 = 0;
		goto IL_0391;
	}

IL_0386:
	{
		Il2CppFakeBox<Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 > L_134(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), G_B64_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__908 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_134));
		int32_t L_135;
		L_135 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__908.methodPtr)((RuntimeObject *)(&L_134), /*hidden argument*/il2cpp_virtual_invoke_data__908.method);
		*G_B64_0 = L_134.m_Value;
		G_B65_0 = L_135;
	}

IL_0391:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_136 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_137 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_138 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_137;
		RuntimeObject * L_139 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_138);
		G_B66_0 = L_136;
		G_B66_1 = G_B65_0;
		if (L_139)
		{
			G_B68_0 = L_136;
			G_B68_1 = G_B65_0;
			goto IL_03be;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_140 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B66_0);
		V_7 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_140;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_141 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_142 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_141;
		RuntimeObject * L_143 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_142);
		G_B67_0 = (&V_7);
		G_B67_1 = G_B66_1;
		if (L_143)
		{
			G_B68_0 = (&V_7);
			G_B68_1 = G_B66_1;
			goto IL_03be;
		}
	}
	{
		G_B69_0 = 0;
		G_B69_1 = G_B67_1;
		goto IL_03c9;
	}

IL_03be:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_144(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), G_B68_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__964 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_144));
		int32_t L_145;
		L_145 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__964.methodPtr)((RuntimeObject *)(&L_144), /*hidden argument*/il2cpp_virtual_invoke_data__964.method);
		*G_B68_0 = L_144.m_Value;
		G_B69_0 = L_145;
		G_B69_1 = G_B68_1;
	}

IL_03c9:
	{
		bool* L_146 = (bool*)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_8), sizeof(bool));
		G_B72_0 = L_146;
		G_B72_1 = G_B69_0;
		G_B72_2 = G_B69_1;
		goto IL_03f6;
		G_B70_0 = L_146;
		G_B70_1 = G_B69_0;
		G_B70_2 = G_B69_1;
	}
	{
		bool L_148 = (*(bool*)G_B70_0);
		V_8 = (bool)L_148;
		G_B72_0 = (&V_8);
		G_B72_1 = G_B70_1;
		G_B72_2 = G_B70_2;
		goto IL_03f6;
		G_B71_0 = (&V_8);
		G_B71_1 = G_B70_1;
		G_B71_2 = G_B70_2;
	}
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_1;
		G_B73_2 = G_B71_2;
		goto IL_0401;
	}

IL_03f6:
	{
		int32_t L_150;
		L_150 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)G_B72_0, /*hidden argument*/NULL);
		G_B73_0 = L_150;
		G_B73_1 = G_B72_1;
		G_B73_2 = G_B72_2;
	}

IL_0401:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_151 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item7_6();
		il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_152 = V_9;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_153 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_152;
		RuntimeObject * L_154 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_153);
		G_B74_0 = L_151;
		G_B74_1 = G_B73_0;
		G_B74_2 = G_B73_1;
		G_B74_3 = G_B73_2;
		if (L_154)
		{
			G_B76_0 = L_151;
			G_B76_1 = G_B73_0;
			G_B76_2 = G_B73_1;
			G_B76_3 = G_B73_2;
			goto IL_042e;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_155 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B74_0);
		V_9 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_155;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_156 = V_9;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_157 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_156;
		RuntimeObject * L_158 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_157);
		G_B75_0 = (&V_9);
		G_B75_1 = G_B74_1;
		G_B75_2 = G_B74_2;
		G_B75_3 = G_B74_3;
		if (L_158)
		{
			G_B76_0 = (&V_9);
			G_B76_1 = G_B74_1;
			G_B76_2 = G_B74_2;
			G_B76_3 = G_B74_3;
			goto IL_042e;
		}
	}
	{
		G_B77_0 = 0;
		G_B77_1 = G_B75_1;
		G_B77_2 = G_B75_2;
		G_B77_3 = G_B75_3;
		goto IL_0439;
	}

IL_042e:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_159(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), G_B76_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__1076 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_159));
		int32_t L_160;
		L_160 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__1076.methodPtr)((RuntimeObject *)(&L_159), /*hidden argument*/il2cpp_virtual_invoke_data__1076.method);
		*G_B76_0 = L_159.m_Value;
		G_B77_0 = L_160;
		G_B77_1 = G_B76_1;
		G_B77_2 = G_B76_2;
		G_B77_3 = G_B76_3;
	}

IL_0439:
	{
		RuntimeObject* L_161 = V_0;
		int32_t L_162;
		L_162 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_161);
		int32_t L_163;
		L_163 = ValueTuple_CombineHashCodes_mAA4C35AB87E06C9A197E49DD1A6C0EA3D53D8D9C((int32_t)G_B77_3, (int32_t)G_B77_2, (int32_t)G_B77_1, (int32_t)G_B77_0, (int32_t)L_162, /*hidden argument*/NULL);
		return (int32_t)L_163;
	}

IL_0445:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_164 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_165 = V_5;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_166 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_165;
		RuntimeObject * L_167 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_166);
		G_B79_0 = L_164;
		if (L_167)
		{
			G_B81_0 = L_164;
			goto IL_0472;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_168 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B79_0);
		V_5 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_168;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_169 = V_5;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_170 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_169;
		RuntimeObject * L_171 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_170);
		G_B80_0 = (&V_5);
		if (L_171)
		{
			G_B81_0 = (&V_5);
			goto IL_0472;
		}
	}
	{
		G_B82_0 = 0;
		goto IL_047d;
	}

IL_0472:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_172(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), G_B81_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__1144 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_172));
		int32_t L_173;
		L_173 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__1144.methodPtr)((RuntimeObject *)(&L_172), /*hidden argument*/il2cpp_virtual_invoke_data__1144.method);
		*G_B81_0 = L_172.m_Value;
		G_B82_0 = L_173;
	}

IL_047d:
	{
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * L_174 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 ));
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_175 = V_6;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_176 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_175;
		RuntimeObject * L_177 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_176);
		G_B83_0 = L_174;
		G_B83_1 = G_B82_0;
		if (L_177)
		{
			G_B85_0 = L_174;
			G_B85_1 = G_B82_0;
			goto IL_04aa;
		}
	}
	{
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_178 = (*(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)G_B83_0);
		V_6 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_178;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_179 = V_6;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_180 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_179;
		RuntimeObject * L_181 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_180);
		G_B84_0 = (&V_6);
		G_B84_1 = G_B83_1;
		if (L_181)
		{
			G_B85_0 = (&V_6);
			G_B85_1 = G_B83_1;
			goto IL_04aa;
		}
	}
	{
		G_B86_0 = 0;
		G_B86_1 = G_B84_1;
		goto IL_04b5;
	}

IL_04aa:
	{
		Il2CppFakeBox<Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 > L_182(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), G_B85_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__1200 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_182));
		int32_t L_183;
		L_183 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__1200.methodPtr)((RuntimeObject *)(&L_182), /*hidden argument*/il2cpp_virtual_invoke_data__1200.method);
		*G_B85_0 = L_182.m_Value;
		G_B86_0 = L_183;
		G_B86_1 = G_B85_1;
	}

IL_04b5:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_184 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_185 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_186 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_185;
		RuntimeObject * L_187 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_186);
		G_B87_0 = L_184;
		G_B87_1 = G_B86_0;
		G_B87_2 = G_B86_1;
		if (L_187)
		{
			G_B89_0 = L_184;
			G_B89_1 = G_B86_0;
			G_B89_2 = G_B86_1;
			goto IL_04e2;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_188 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B87_0);
		V_7 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_188;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_189 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_190 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_189;
		RuntimeObject * L_191 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_190);
		G_B88_0 = (&V_7);
		G_B88_1 = G_B87_1;
		G_B88_2 = G_B87_2;
		if (L_191)
		{
			G_B89_0 = (&V_7);
			G_B89_1 = G_B87_1;
			G_B89_2 = G_B87_2;
			goto IL_04e2;
		}
	}
	{
		G_B90_0 = 0;
		G_B90_1 = G_B88_1;
		G_B90_2 = G_B88_2;
		goto IL_04ed;
	}

IL_04e2:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_192(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), G_B89_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__1256 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_192));
		int32_t L_193;
		L_193 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__1256.methodPtr)((RuntimeObject *)(&L_192), /*hidden argument*/il2cpp_virtual_invoke_data__1256.method);
		*G_B89_0 = L_192.m_Value;
		G_B90_0 = L_193;
		G_B90_1 = G_B89_1;
		G_B90_2 = G_B89_2;
	}

IL_04ed:
	{
		bool* L_194 = (bool*)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_8), sizeof(bool));
		G_B93_0 = L_194;
		G_B93_1 = G_B90_0;
		G_B93_2 = G_B90_1;
		G_B93_3 = G_B90_2;
		goto IL_051a;
		G_B91_0 = L_194;
		G_B91_1 = G_B90_0;
		G_B91_2 = G_B90_1;
		G_B91_3 = G_B90_2;
	}
	{
		bool L_196 = (*(bool*)G_B91_0);
		V_8 = (bool)L_196;
		G_B93_0 = (&V_8);
		G_B93_1 = G_B91_1;
		G_B93_2 = G_B91_2;
		G_B93_3 = G_B91_3;
		goto IL_051a;
		G_B92_0 = (&V_8);
		G_B92_1 = G_B91_1;
		G_B92_2 = G_B91_2;
		G_B92_3 = G_B91_3;
	}
	{
		G_B94_0 = 0;
		G_B94_1 = G_B92_1;
		G_B94_2 = G_B92_2;
		G_B94_3 = G_B92_3;
		goto IL_0525;
	}

IL_051a:
	{
		int32_t L_198;
		L_198 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)G_B93_0, /*hidden argument*/NULL);
		G_B94_0 = L_198;
		G_B94_1 = G_B93_1;
		G_B94_2 = G_B93_2;
		G_B94_3 = G_B93_3;
	}

IL_0525:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_199 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item7_6();
		il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_200 = V_9;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_201 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_200;
		RuntimeObject * L_202 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_201);
		G_B95_0 = L_199;
		G_B95_1 = G_B94_0;
		G_B95_2 = G_B94_1;
		G_B95_3 = G_B94_2;
		G_B95_4 = G_B94_3;
		if (L_202)
		{
			G_B97_0 = L_199;
			G_B97_1 = G_B94_0;
			G_B97_2 = G_B94_1;
			G_B97_3 = G_B94_2;
			G_B97_4 = G_B94_3;
			goto IL_0552;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_203 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B95_0);
		V_9 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_203;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_204 = V_9;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_205 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_204;
		RuntimeObject * L_206 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_205);
		G_B96_0 = (&V_9);
		G_B96_1 = G_B95_1;
		G_B96_2 = G_B95_2;
		G_B96_3 = G_B95_3;
		G_B96_4 = G_B95_4;
		if (L_206)
		{
			G_B97_0 = (&V_9);
			G_B97_1 = G_B95_1;
			G_B97_2 = G_B95_2;
			G_B97_3 = G_B95_3;
			G_B97_4 = G_B95_4;
			goto IL_0552;
		}
	}
	{
		G_B98_0 = 0;
		G_B98_1 = G_B96_1;
		G_B98_2 = G_B96_2;
		G_B98_3 = G_B96_3;
		G_B98_4 = G_B96_4;
		goto IL_055d;
	}

IL_0552:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_207(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), G_B97_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__1368 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_207));
		int32_t L_208;
		L_208 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__1368.methodPtr)((RuntimeObject *)(&L_207), /*hidden argument*/il2cpp_virtual_invoke_data__1368.method);
		*G_B97_0 = L_207.m_Value;
		G_B98_0 = L_208;
		G_B98_1 = G_B97_1;
		G_B98_2 = G_B97_2;
		G_B98_3 = G_B97_3;
		G_B98_4 = G_B97_4;
	}

IL_055d:
	{
		RuntimeObject* L_209 = V_0;
		int32_t L_210;
		L_210 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_209);
		int32_t L_211;
		L_211 = ValueTuple_CombineHashCodes_mFE25771F3D9DAC174341680B00534397D988584B((int32_t)G_B98_4, (int32_t)G_B98_3, (int32_t)G_B98_2, (int32_t)G_B98_1, (int32_t)G_B98_0, (int32_t)L_210, /*hidden argument*/NULL);
		return (int32_t)L_211;
	}

IL_0569:
	{
		RuntimeObject ** L_212 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_213 = V_4;
		G_B100_0 = L_212;
		if (L_213)
		{
			G_B102_0 = L_212;
			goto IL_0596;
		}
	}
	{
		RuntimeObject * L_214 = (*(RuntimeObject **)G_B100_0);
		V_4 = (RuntimeObject *)L_214;
		RuntimeObject * L_215 = V_4;
		G_B101_0 = (&V_4);
		if (L_215)
		{
			G_B102_0 = (&V_4);
			goto IL_0596;
		}
	}
	{
		G_B103_0 = 0;
		goto IL_05a1;
	}

IL_0596:
	{
		int32_t L_216;
		L_216 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B102_0));
		G_B103_0 = L_216;
	}

IL_05a1:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_217 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_218 = V_5;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_219 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_218;
		RuntimeObject * L_220 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_219);
		G_B104_0 = L_217;
		G_B104_1 = G_B103_0;
		if (L_220)
		{
			G_B106_0 = L_217;
			G_B106_1 = G_B103_0;
			goto IL_05ce;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_221 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B104_0);
		V_5 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_221;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_222 = V_5;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_223 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_222;
		RuntimeObject * L_224 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_223);
		G_B105_0 = (&V_5);
		G_B105_1 = G_B104_1;
		if (L_224)
		{
			G_B106_0 = (&V_5);
			G_B106_1 = G_B104_1;
			goto IL_05ce;
		}
	}
	{
		G_B107_0 = 0;
		G_B107_1 = G_B105_1;
		goto IL_05d9;
	}

IL_05ce:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_225(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), G_B106_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__1492 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_225));
		int32_t L_226;
		L_226 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__1492.methodPtr)((RuntimeObject *)(&L_225), /*hidden argument*/il2cpp_virtual_invoke_data__1492.method);
		*G_B106_0 = L_225.m_Value;
		G_B107_0 = L_226;
		G_B107_1 = G_B106_1;
	}

IL_05d9:
	{
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * L_227 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 ));
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_228 = V_6;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_229 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_228;
		RuntimeObject * L_230 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_229);
		G_B108_0 = L_227;
		G_B108_1 = G_B107_0;
		G_B108_2 = G_B107_1;
		if (L_230)
		{
			G_B110_0 = L_227;
			G_B110_1 = G_B107_0;
			G_B110_2 = G_B107_1;
			goto IL_0606;
		}
	}
	{
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_231 = (*(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)G_B108_0);
		V_6 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_231;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_232 = V_6;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_233 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_232;
		RuntimeObject * L_234 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_233);
		G_B109_0 = (&V_6);
		G_B109_1 = G_B108_1;
		G_B109_2 = G_B108_2;
		if (L_234)
		{
			G_B110_0 = (&V_6);
			G_B110_1 = G_B108_1;
			G_B110_2 = G_B108_2;
			goto IL_0606;
		}
	}
	{
		G_B111_0 = 0;
		G_B111_1 = G_B109_1;
		G_B111_2 = G_B109_2;
		goto IL_0611;
	}

IL_0606:
	{
		Il2CppFakeBox<Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 > L_235(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), G_B110_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__1548 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_235));
		int32_t L_236;
		L_236 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__1548.methodPtr)((RuntimeObject *)(&L_235), /*hidden argument*/il2cpp_virtual_invoke_data__1548.method);
		*G_B110_0 = L_235.m_Value;
		G_B111_0 = L_236;
		G_B111_1 = G_B110_1;
		G_B111_2 = G_B110_2;
	}

IL_0611:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_237 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_238 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_239 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_238;
		RuntimeObject * L_240 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_239);
		G_B112_0 = L_237;
		G_B112_1 = G_B111_0;
		G_B112_2 = G_B111_1;
		G_B112_3 = G_B111_2;
		if (L_240)
		{
			G_B114_0 = L_237;
			G_B114_1 = G_B111_0;
			G_B114_2 = G_B111_1;
			G_B114_3 = G_B111_2;
			goto IL_063e;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_241 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B112_0);
		V_7 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_241;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_242 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_243 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_242;
		RuntimeObject * L_244 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_243);
		G_B113_0 = (&V_7);
		G_B113_1 = G_B112_1;
		G_B113_2 = G_B112_2;
		G_B113_3 = G_B112_3;
		if (L_244)
		{
			G_B114_0 = (&V_7);
			G_B114_1 = G_B112_1;
			G_B114_2 = G_B112_2;
			G_B114_3 = G_B112_3;
			goto IL_063e;
		}
	}
	{
		G_B115_0 = 0;
		G_B115_1 = G_B113_1;
		G_B115_2 = G_B113_2;
		G_B115_3 = G_B113_3;
		goto IL_0649;
	}

IL_063e:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_245(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), G_B114_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__1604 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_245));
		int32_t L_246;
		L_246 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__1604.methodPtr)((RuntimeObject *)(&L_245), /*hidden argument*/il2cpp_virtual_invoke_data__1604.method);
		*G_B114_0 = L_245.m_Value;
		G_B115_0 = L_246;
		G_B115_1 = G_B114_1;
		G_B115_2 = G_B114_2;
		G_B115_3 = G_B114_3;
	}

IL_0649:
	{
		bool* L_247 = (bool*)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_8), sizeof(bool));
		G_B118_0 = L_247;
		G_B118_1 = G_B115_0;
		G_B118_2 = G_B115_1;
		G_B118_3 = G_B115_2;
		G_B118_4 = G_B115_3;
		goto IL_0676;
		G_B116_0 = L_247;
		G_B116_1 = G_B115_0;
		G_B116_2 = G_B115_1;
		G_B116_3 = G_B115_2;
		G_B116_4 = G_B115_3;
	}
	{
		bool L_249 = (*(bool*)G_B116_0);
		V_8 = (bool)L_249;
		G_B118_0 = (&V_8);
		G_B118_1 = G_B116_1;
		G_B118_2 = G_B116_2;
		G_B118_3 = G_B116_3;
		G_B118_4 = G_B116_4;
		goto IL_0676;
		G_B117_0 = (&V_8);
		G_B117_1 = G_B116_1;
		G_B117_2 = G_B116_2;
		G_B117_3 = G_B116_3;
		G_B117_4 = G_B116_4;
	}
	{
		G_B119_0 = 0;
		G_B119_1 = G_B117_1;
		G_B119_2 = G_B117_2;
		G_B119_3 = G_B117_3;
		G_B119_4 = G_B117_4;
		goto IL_0681;
	}

IL_0676:
	{
		int32_t L_251;
		L_251 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)G_B118_0, /*hidden argument*/NULL);
		G_B119_0 = L_251;
		G_B119_1 = G_B118_1;
		G_B119_2 = G_B118_2;
		G_B119_3 = G_B118_3;
		G_B119_4 = G_B118_4;
	}

IL_0681:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_252 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item7_6();
		il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_253 = V_9;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_254 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_253;
		RuntimeObject * L_255 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_254);
		G_B120_0 = L_252;
		G_B120_1 = G_B119_0;
		G_B120_2 = G_B119_1;
		G_B120_3 = G_B119_2;
		G_B120_4 = G_B119_3;
		G_B120_5 = G_B119_4;
		if (L_255)
		{
			G_B122_0 = L_252;
			G_B122_1 = G_B119_0;
			G_B122_2 = G_B119_1;
			G_B122_3 = G_B119_2;
			G_B122_4 = G_B119_3;
			G_B122_5 = G_B119_4;
			goto IL_06ae;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_256 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B120_0);
		V_9 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_256;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_257 = V_9;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_258 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_257;
		RuntimeObject * L_259 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_258);
		G_B121_0 = (&V_9);
		G_B121_1 = G_B120_1;
		G_B121_2 = G_B120_2;
		G_B121_3 = G_B120_3;
		G_B121_4 = G_B120_4;
		G_B121_5 = G_B120_5;
		if (L_259)
		{
			G_B122_0 = (&V_9);
			G_B122_1 = G_B120_1;
			G_B122_2 = G_B120_2;
			G_B122_3 = G_B120_3;
			G_B122_4 = G_B120_4;
			G_B122_5 = G_B120_5;
			goto IL_06ae;
		}
	}
	{
		G_B123_0 = 0;
		G_B123_1 = G_B121_1;
		G_B123_2 = G_B121_2;
		G_B123_3 = G_B121_3;
		G_B123_4 = G_B121_4;
		G_B123_5 = G_B121_5;
		goto IL_06b9;
	}

IL_06ae:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_260(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), G_B122_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__1716 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_260));
		int32_t L_261;
		L_261 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__1716.methodPtr)((RuntimeObject *)(&L_260), /*hidden argument*/il2cpp_virtual_invoke_data__1716.method);
		*G_B122_0 = L_260.m_Value;
		G_B123_0 = L_261;
		G_B123_1 = G_B122_1;
		G_B123_2 = G_B122_2;
		G_B123_3 = G_B122_3;
		G_B123_4 = G_B122_4;
		G_B123_5 = G_B122_5;
	}

IL_06b9:
	{
		RuntimeObject* L_262 = V_0;
		int32_t L_263;
		L_263 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_262);
		int32_t L_264;
		L_264 = ValueTuple_CombineHashCodes_m63F8588429ABEC6BEC8CBBE376D253E423D0C712((int32_t)G_B123_5, (int32_t)G_B123_4, (int32_t)G_B123_3, (int32_t)G_B123_2, (int32_t)G_B123_1, (int32_t)G_B123_0, (int32_t)L_263, /*hidden argument*/NULL);
		return (int32_t)L_264;
	}

IL_06c5:
	{
		bool* L_265 = (bool*)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_3), sizeof(bool));
		G_B127_0 = L_265;
		goto IL_06ef;
		G_B125_0 = L_265;
	}
	{
		bool L_267 = (*(bool*)G_B125_0);
		V_3 = (bool)L_267;
		G_B127_0 = (&V_3);
		goto IL_06ef;
		G_B126_0 = (&V_3);
	}
	{
		G_B128_0 = 0;
		goto IL_06fa;
	}

IL_06ef:
	{
		int32_t L_269;
		L_269 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)G_B127_0, /*hidden argument*/NULL);
		G_B128_0 = L_269;
	}

IL_06fa:
	{
		RuntimeObject ** L_270 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_271 = V_4;
		G_B129_0 = L_270;
		G_B129_1 = G_B128_0;
		if (L_271)
		{
			G_B131_0 = L_270;
			G_B131_1 = G_B128_0;
			goto IL_0727;
		}
	}
	{
		RuntimeObject * L_272 = (*(RuntimeObject **)G_B129_0);
		V_4 = (RuntimeObject *)L_272;
		RuntimeObject * L_273 = V_4;
		G_B130_0 = (&V_4);
		G_B130_1 = G_B129_1;
		if (L_273)
		{
			G_B131_0 = (&V_4);
			G_B131_1 = G_B129_1;
			goto IL_0727;
		}
	}
	{
		G_B132_0 = 0;
		G_B132_1 = G_B130_1;
		goto IL_0732;
	}

IL_0727:
	{
		int32_t L_274;
		L_274 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B131_0));
		G_B132_0 = L_274;
		G_B132_1 = G_B131_1;
	}

IL_0732:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_275 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_276 = V_5;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_277 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_276;
		RuntimeObject * L_278 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_277);
		G_B133_0 = L_275;
		G_B133_1 = G_B132_0;
		G_B133_2 = G_B132_1;
		if (L_278)
		{
			G_B135_0 = L_275;
			G_B135_1 = G_B132_0;
			G_B135_2 = G_B132_1;
			goto IL_075f;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_279 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B133_0);
		V_5 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_279;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_280 = V_5;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_281 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_280;
		RuntimeObject * L_282 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_281);
		G_B134_0 = (&V_5);
		G_B134_1 = G_B133_1;
		G_B134_2 = G_B133_2;
		if (L_282)
		{
			G_B135_0 = (&V_5);
			G_B135_1 = G_B133_1;
			G_B135_2 = G_B133_2;
			goto IL_075f;
		}
	}
	{
		G_B136_0 = 0;
		G_B136_1 = G_B134_1;
		G_B136_2 = G_B134_2;
		goto IL_076a;
	}

IL_075f:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_283(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), G_B135_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__1893 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_283));
		int32_t L_284;
		L_284 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__1893.methodPtr)((RuntimeObject *)(&L_283), /*hidden argument*/il2cpp_virtual_invoke_data__1893.method);
		*G_B135_0 = L_283.m_Value;
		G_B136_0 = L_284;
		G_B136_1 = G_B135_1;
		G_B136_2 = G_B135_2;
	}

IL_076a:
	{
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * L_285 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 ));
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_286 = V_6;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_287 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_286;
		RuntimeObject * L_288 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_287);
		G_B137_0 = L_285;
		G_B137_1 = G_B136_0;
		G_B137_2 = G_B136_1;
		G_B137_3 = G_B136_2;
		if (L_288)
		{
			G_B139_0 = L_285;
			G_B139_1 = G_B136_0;
			G_B139_2 = G_B136_1;
			G_B139_3 = G_B136_2;
			goto IL_0797;
		}
	}
	{
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_289 = (*(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)G_B137_0);
		V_6 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_289;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_290 = V_6;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_291 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_290;
		RuntimeObject * L_292 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_291);
		G_B138_0 = (&V_6);
		G_B138_1 = G_B137_1;
		G_B138_2 = G_B137_2;
		G_B138_3 = G_B137_3;
		if (L_292)
		{
			G_B139_0 = (&V_6);
			G_B139_1 = G_B137_1;
			G_B139_2 = G_B137_2;
			G_B139_3 = G_B137_3;
			goto IL_0797;
		}
	}
	{
		G_B140_0 = 0;
		G_B140_1 = G_B138_1;
		G_B140_2 = G_B138_2;
		G_B140_3 = G_B138_3;
		goto IL_07a2;
	}

IL_0797:
	{
		Il2CppFakeBox<Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 > L_293(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), G_B139_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__1949 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_293));
		int32_t L_294;
		L_294 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__1949.methodPtr)((RuntimeObject *)(&L_293), /*hidden argument*/il2cpp_virtual_invoke_data__1949.method);
		*G_B139_0 = L_293.m_Value;
		G_B140_0 = L_294;
		G_B140_1 = G_B139_1;
		G_B140_2 = G_B139_2;
		G_B140_3 = G_B139_3;
	}

IL_07a2:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_295 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_296 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_297 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_296;
		RuntimeObject * L_298 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_297);
		G_B141_0 = L_295;
		G_B141_1 = G_B140_0;
		G_B141_2 = G_B140_1;
		G_B141_3 = G_B140_2;
		G_B141_4 = G_B140_3;
		if (L_298)
		{
			G_B143_0 = L_295;
			G_B143_1 = G_B140_0;
			G_B143_2 = G_B140_1;
			G_B143_3 = G_B140_2;
			G_B143_4 = G_B140_3;
			goto IL_07cf;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_299 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B141_0);
		V_7 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_299;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_300 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_301 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_300;
		RuntimeObject * L_302 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_301);
		G_B142_0 = (&V_7);
		G_B142_1 = G_B141_1;
		G_B142_2 = G_B141_2;
		G_B142_3 = G_B141_3;
		G_B142_4 = G_B141_4;
		if (L_302)
		{
			G_B143_0 = (&V_7);
			G_B143_1 = G_B141_1;
			G_B143_2 = G_B141_2;
			G_B143_3 = G_B141_3;
			G_B143_4 = G_B141_4;
			goto IL_07cf;
		}
	}
	{
		G_B144_0 = 0;
		G_B144_1 = G_B142_1;
		G_B144_2 = G_B142_2;
		G_B144_3 = G_B142_3;
		G_B144_4 = G_B142_4;
		goto IL_07da;
	}

IL_07cf:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_303(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), G_B143_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__2005 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_303));
		int32_t L_304;
		L_304 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__2005.methodPtr)((RuntimeObject *)(&L_303), /*hidden argument*/il2cpp_virtual_invoke_data__2005.method);
		*G_B143_0 = L_303.m_Value;
		G_B144_0 = L_304;
		G_B144_1 = G_B143_1;
		G_B144_2 = G_B143_2;
		G_B144_3 = G_B143_3;
		G_B144_4 = G_B143_4;
	}

IL_07da:
	{
		bool* L_305 = (bool*)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_8), sizeof(bool));
		G_B147_0 = L_305;
		G_B147_1 = G_B144_0;
		G_B147_2 = G_B144_1;
		G_B147_3 = G_B144_2;
		G_B147_4 = G_B144_3;
		G_B147_5 = G_B144_4;
		goto IL_0807;
		G_B145_0 = L_305;
		G_B145_1 = G_B144_0;
		G_B145_2 = G_B144_1;
		G_B145_3 = G_B144_2;
		G_B145_4 = G_B144_3;
		G_B145_5 = G_B144_4;
	}
	{
		bool L_307 = (*(bool*)G_B145_0);
		V_8 = (bool)L_307;
		G_B147_0 = (&V_8);
		G_B147_1 = G_B145_1;
		G_B147_2 = G_B145_2;
		G_B147_3 = G_B145_3;
		G_B147_4 = G_B145_4;
		G_B147_5 = G_B145_5;
		goto IL_0807;
		G_B146_0 = (&V_8);
		G_B146_1 = G_B145_1;
		G_B146_2 = G_B145_2;
		G_B146_3 = G_B145_3;
		G_B146_4 = G_B145_4;
		G_B146_5 = G_B145_5;
	}
	{
		G_B148_0 = 0;
		G_B148_1 = G_B146_1;
		G_B148_2 = G_B146_2;
		G_B148_3 = G_B146_3;
		G_B148_4 = G_B146_4;
		G_B148_5 = G_B146_5;
		goto IL_0812;
	}

IL_0807:
	{
		int32_t L_309;
		L_309 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)G_B147_0, /*hidden argument*/NULL);
		G_B148_0 = L_309;
		G_B148_1 = G_B147_1;
		G_B148_2 = G_B147_2;
		G_B148_3 = G_B147_3;
		G_B148_4 = G_B147_4;
		G_B148_5 = G_B147_5;
	}

IL_0812:
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_310 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item7_6();
		il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_311 = V_9;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_312 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_311;
		RuntimeObject * L_313 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_312);
		G_B149_0 = L_310;
		G_B149_1 = G_B148_0;
		G_B149_2 = G_B148_1;
		G_B149_3 = G_B148_2;
		G_B149_4 = G_B148_3;
		G_B149_5 = G_B148_4;
		G_B149_6 = G_B148_5;
		if (L_313)
		{
			G_B151_0 = L_310;
			G_B151_1 = G_B148_0;
			G_B151_2 = G_B148_1;
			G_B151_3 = G_B148_2;
			G_B151_4 = G_B148_3;
			G_B151_5 = G_B148_4;
			G_B151_6 = G_B148_5;
			goto IL_083f;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_314 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B149_0);
		V_9 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_314;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_315 = V_9;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_316 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_315;
		RuntimeObject * L_317 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_316);
		G_B150_0 = (&V_9);
		G_B150_1 = G_B149_1;
		G_B150_2 = G_B149_2;
		G_B150_3 = G_B149_3;
		G_B150_4 = G_B149_4;
		G_B150_5 = G_B149_5;
		G_B150_6 = G_B149_6;
		if (L_317)
		{
			G_B151_0 = (&V_9);
			G_B151_1 = G_B149_1;
			G_B151_2 = G_B149_2;
			G_B151_3 = G_B149_3;
			G_B151_4 = G_B149_4;
			G_B151_5 = G_B149_5;
			G_B151_6 = G_B149_6;
			goto IL_083f;
		}
	}
	{
		G_B152_0 = 0;
		G_B152_1 = G_B150_1;
		G_B152_2 = G_B150_2;
		G_B152_3 = G_B150_3;
		G_B152_4 = G_B150_4;
		G_B152_5 = G_B150_5;
		G_B152_6 = G_B150_6;
		goto IL_084a;
	}

IL_083f:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_318(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), G_B151_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__2117 = il2cpp_codegen_get_virtual_invoke_data(2, (&L_318));
		int32_t L_319;
		L_319 = ((  int32_t (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__2117.methodPtr)((RuntimeObject *)(&L_318), /*hidden argument*/il2cpp_virtual_invoke_data__2117.method);
		*G_B151_0 = L_318.m_Value;
		G_B152_0 = L_319;
		G_B152_1 = G_B151_1;
		G_B152_2 = G_B151_2;
		G_B152_3 = G_B151_3;
		G_B152_4 = G_B151_4;
		G_B152_5 = G_B151_5;
		G_B152_6 = G_B151_6;
	}

IL_084a:
	{
		RuntimeObject* L_320 = V_0;
		int32_t L_321;
		L_321 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_320);
		int32_t L_322;
		L_322 = ValueTuple_CombineHashCodes_m2C08727B12DB93AA30896ACF79BB290828F7A85A((int32_t)G_B152_6, (int32_t)G_B152_5, (int32_t)G_B152_4, (int32_t)G_B152_3, (int32_t)G_B152_2, (int32_t)G_B152_1, (int32_t)G_B152_0, (int32_t)L_321, /*hidden argument*/NULL);
		return (int32_t)L_322;
	}

IL_0856:
	{
		return (int32_t)(-1);
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_GetHashCode_mE2C7E6E80DE6FC6232B0AAF213E4DC15E6CA6AF4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * _thisAdjusted = reinterpret_cast<ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_GetHashCode_mE2C7E6E80DE6FC6232B0AAF213E4DC15E6CA6AF4(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_mA20674BDF550C4BA0DB2031127C1A6C51FB52EF2_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_8_GetHashCodeCore_m6F26C4B1A687F9DEDD61E5C149AF5392654359D2((ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 59));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_mA20674BDF550C4BA0DB2031127C1A6C51FB52EF2_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * _thisAdjusted = reinterpret_cast<ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_mA20674BDF550C4BA0DB2031127C1A6C51FB52EF2(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_GetHashCodeCore_m6F26C4B1A687F9DEDD61E5C149AF5392654359D2_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITuple_t559B1A91B496A81AAFEE74F54ACD49FE8CDE2215_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTupleInternal_tBB61ABF7EC04FC4668CF806362AC0C76B4E75F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_0 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )__this->get_Rest_7();
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_1 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_1);
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		if (L_3)
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject* L_4 = ___comparer0;
		bool L_5 = (bool)__this->get_Item1_0();
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 27), &L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, (RuntimeObject *)L_7);
		RuntimeObject* L_9 = ___comparer0;
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_Item2_1();
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (RuntimeObject *)L_10);
		RuntimeObject* L_12 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_13 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item3_2();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_14 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_13;
		RuntimeObject * L_15 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_14);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_12, (RuntimeObject *)L_15);
		RuntimeObject* L_17 = ___comparer0;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_18 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )__this->get_Item4_3();
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_19 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_19);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_20);
		RuntimeObject* L_22 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_23 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item5_4();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_24 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_23;
		RuntimeObject * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_24);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_22, (RuntimeObject *)L_25);
		RuntimeObject* L_27 = ___comparer0;
		bool L_28 = (bool)__this->get_Item6_5();
		bool L_29 = L_28;
		RuntimeObject * L_30 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 32), &L_29);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_27, (RuntimeObject *)L_30);
		RuntimeObject* L_32 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_33 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item7_6();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_34 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_33;
		RuntimeObject * L_35 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_34);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_32, (RuntimeObject *)L_35);
		int32_t L_37;
		L_37 = ValueTuple_CombineHashCodes_m63F8588429ABEC6BEC8CBBE376D253E423D0C712((int32_t)L_8, (int32_t)L_11, (int32_t)L_16, (int32_t)L_21, (int32_t)L_26, (int32_t)L_31, (int32_t)L_36, /*hidden argument*/NULL);
		return (int32_t)L_37;
	}

IL_0091:
	{
		RuntimeObject* L_38 = V_0;
		int32_t L_39;
		L_39 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Runtime.CompilerServices.ITuple::get_Length() */, ITuple_t559B1A91B496A81AAFEE74F54ACD49FE8CDE2215_il2cpp_TypeInfo_var, (RuntimeObject*)L_38);
		V_1 = (int32_t)L_39;
		int32_t L_40 = V_1;
		if ((((int32_t)L_40) < ((int32_t)8)))
		{
			goto IL_00a4;
		}
	}
	{
		RuntimeObject* L_41 = V_0;
		RuntimeObject* L_42 = ___comparer0;
		int32_t L_43;
		L_43 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IValueTupleInternal::GetHashCode(System.Collections.IEqualityComparer) */, IValueTupleInternal_tBB61ABF7EC04FC4668CF806362AC0C76B4E75F5A_il2cpp_TypeInfo_var, (RuntimeObject*)L_41, (RuntimeObject*)L_42);
		return (int32_t)L_43;
	}

IL_00a4:
	{
		int32_t L_44 = V_1;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)8, (int32_t)L_44));
		int32_t L_45 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00f3;
			}
			case 2:
			{
				goto IL_0122;
			}
			case 3:
			{
				goto IL_0162;
			}
			case 4:
			{
				goto IL_01b3;
			}
			case 5:
			{
				goto IL_0215;
			}
			case 6:
			{
				goto IL_0288;
			}
			case 7:
			{
				goto IL_0288;
			}
		}
	}
	{
		goto IL_030c;
	}

IL_00d5:
	{
		RuntimeObject* L_46 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_47 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item7_6();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_48 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_47;
		RuntimeObject * L_49 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_48);
		int32_t L_50;
		L_50 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_46, (RuntimeObject *)L_49);
		RuntimeObject* L_51 = V_0;
		RuntimeObject* L_52 = ___comparer0;
		int32_t L_53;
		L_53 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IValueTupleInternal::GetHashCode(System.Collections.IEqualityComparer) */, IValueTupleInternal_tBB61ABF7EC04FC4668CF806362AC0C76B4E75F5A_il2cpp_TypeInfo_var, (RuntimeObject*)L_51, (RuntimeObject*)L_52);
		int32_t L_54;
		L_54 = ValueTuple_CombineHashCodes_mBAD65E2DE7D9956285B0F702D39BB9DD16B1CDC8((int32_t)L_50, (int32_t)L_53, /*hidden argument*/NULL);
		return (int32_t)L_54;
	}

IL_00f3:
	{
		RuntimeObject* L_55 = ___comparer0;
		bool L_56 = (bool)__this->get_Item6_5();
		bool L_57 = L_56;
		RuntimeObject * L_58 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 32), &L_57);
		int32_t L_59;
		L_59 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_55, (RuntimeObject *)L_58);
		RuntimeObject* L_60 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_61 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item7_6();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_62 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_61;
		RuntimeObject * L_63 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_62);
		int32_t L_64;
		L_64 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_60, (RuntimeObject *)L_63);
		RuntimeObject* L_65 = V_0;
		RuntimeObject* L_66 = ___comparer0;
		int32_t L_67;
		L_67 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IValueTupleInternal::GetHashCode(System.Collections.IEqualityComparer) */, IValueTupleInternal_tBB61ABF7EC04FC4668CF806362AC0C76B4E75F5A_il2cpp_TypeInfo_var, (RuntimeObject*)L_65, (RuntimeObject*)L_66);
		int32_t L_68;
		L_68 = ValueTuple_CombineHashCodes_mDE02E3F98EDFE31BD30745AE679FD155682AF7F4((int32_t)L_59, (int32_t)L_64, (int32_t)L_67, /*hidden argument*/NULL);
		return (int32_t)L_68;
	}

IL_0122:
	{
		RuntimeObject* L_69 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_70 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item5_4();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_71 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_70;
		RuntimeObject * L_72 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_71);
		int32_t L_73;
		L_73 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_69, (RuntimeObject *)L_72);
		RuntimeObject* L_74 = ___comparer0;
		bool L_75 = (bool)__this->get_Item6_5();
		bool L_76 = L_75;
		RuntimeObject * L_77 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 32), &L_76);
		int32_t L_78;
		L_78 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_74, (RuntimeObject *)L_77);
		RuntimeObject* L_79 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_80 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item7_6();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_81 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_80;
		RuntimeObject * L_82 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_81);
		int32_t L_83;
		L_83 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_79, (RuntimeObject *)L_82);
		RuntimeObject* L_84 = V_0;
		RuntimeObject* L_85 = ___comparer0;
		int32_t L_86;
		L_86 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IValueTupleInternal::GetHashCode(System.Collections.IEqualityComparer) */, IValueTupleInternal_tBB61ABF7EC04FC4668CF806362AC0C76B4E75F5A_il2cpp_TypeInfo_var, (RuntimeObject*)L_84, (RuntimeObject*)L_85);
		int32_t L_87;
		L_87 = ValueTuple_CombineHashCodes_m25F3E4691BDE4DB8F7822BCF15ED161471E73FCB((int32_t)L_73, (int32_t)L_78, (int32_t)L_83, (int32_t)L_86, /*hidden argument*/NULL);
		return (int32_t)L_87;
	}

IL_0162:
	{
		RuntimeObject* L_88 = ___comparer0;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_89 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )__this->get_Item4_3();
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_90 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_89;
		RuntimeObject * L_91 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_90);
		int32_t L_92;
		L_92 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_88, (RuntimeObject *)L_91);
		RuntimeObject* L_93 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_94 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item5_4();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_95 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_94;
		RuntimeObject * L_96 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_95);
		int32_t L_97;
		L_97 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_93, (RuntimeObject *)L_96);
		RuntimeObject* L_98 = ___comparer0;
		bool L_99 = (bool)__this->get_Item6_5();
		bool L_100 = L_99;
		RuntimeObject * L_101 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 32), &L_100);
		int32_t L_102;
		L_102 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_98, (RuntimeObject *)L_101);
		RuntimeObject* L_103 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_104 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item7_6();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_105 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_104;
		RuntimeObject * L_106 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_105);
		int32_t L_107;
		L_107 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_103, (RuntimeObject *)L_106);
		RuntimeObject* L_108 = V_0;
		RuntimeObject* L_109 = ___comparer0;
		int32_t L_110;
		L_110 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IValueTupleInternal::GetHashCode(System.Collections.IEqualityComparer) */, IValueTupleInternal_tBB61ABF7EC04FC4668CF806362AC0C76B4E75F5A_il2cpp_TypeInfo_var, (RuntimeObject*)L_108, (RuntimeObject*)L_109);
		int32_t L_111;
		L_111 = ValueTuple_CombineHashCodes_mAA4C35AB87E06C9A197E49DD1A6C0EA3D53D8D9C((int32_t)L_92, (int32_t)L_97, (int32_t)L_102, (int32_t)L_107, (int32_t)L_110, /*hidden argument*/NULL);
		return (int32_t)L_111;
	}

IL_01b3:
	{
		RuntimeObject* L_112 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_113 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item3_2();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_114 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_113;
		RuntimeObject * L_115 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_114);
		int32_t L_116;
		L_116 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_112, (RuntimeObject *)L_115);
		RuntimeObject* L_117 = ___comparer0;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_118 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )__this->get_Item4_3();
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_119 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_118;
		RuntimeObject * L_120 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_119);
		int32_t L_121;
		L_121 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_117, (RuntimeObject *)L_120);
		RuntimeObject* L_122 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_123 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item5_4();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_124 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_123;
		RuntimeObject * L_125 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_124);
		int32_t L_126;
		L_126 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_122, (RuntimeObject *)L_125);
		RuntimeObject* L_127 = ___comparer0;
		bool L_128 = (bool)__this->get_Item6_5();
		bool L_129 = L_128;
		RuntimeObject * L_130 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 32), &L_129);
		int32_t L_131;
		L_131 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_127, (RuntimeObject *)L_130);
		RuntimeObject* L_132 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_133 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item7_6();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_134 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_133;
		RuntimeObject * L_135 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_134);
		int32_t L_136;
		L_136 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_132, (RuntimeObject *)L_135);
		RuntimeObject* L_137 = V_0;
		RuntimeObject* L_138 = ___comparer0;
		int32_t L_139;
		L_139 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IValueTupleInternal::GetHashCode(System.Collections.IEqualityComparer) */, IValueTupleInternal_tBB61ABF7EC04FC4668CF806362AC0C76B4E75F5A_il2cpp_TypeInfo_var, (RuntimeObject*)L_137, (RuntimeObject*)L_138);
		int32_t L_140;
		L_140 = ValueTuple_CombineHashCodes_mFE25771F3D9DAC174341680B00534397D988584B((int32_t)L_116, (int32_t)L_121, (int32_t)L_126, (int32_t)L_131, (int32_t)L_136, (int32_t)L_139, /*hidden argument*/NULL);
		return (int32_t)L_140;
	}

IL_0215:
	{
		RuntimeObject* L_141 = ___comparer0;
		RuntimeObject * L_142 = (RuntimeObject *)__this->get_Item2_1();
		int32_t L_143;
		L_143 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_141, (RuntimeObject *)L_142);
		RuntimeObject* L_144 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_145 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item3_2();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_146 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_145;
		RuntimeObject * L_147 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_146);
		int32_t L_148;
		L_148 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_144, (RuntimeObject *)L_147);
		RuntimeObject* L_149 = ___comparer0;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_150 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )__this->get_Item4_3();
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_151 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_150;
		RuntimeObject * L_152 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_151);
		int32_t L_153;
		L_153 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_149, (RuntimeObject *)L_152);
		RuntimeObject* L_154 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_155 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item5_4();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_156 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_155;
		RuntimeObject * L_157 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_156);
		int32_t L_158;
		L_158 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_154, (RuntimeObject *)L_157);
		RuntimeObject* L_159 = ___comparer0;
		bool L_160 = (bool)__this->get_Item6_5();
		bool L_161 = L_160;
		RuntimeObject * L_162 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 32), &L_161);
		int32_t L_163;
		L_163 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_159, (RuntimeObject *)L_162);
		RuntimeObject* L_164 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_165 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item7_6();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_166 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_165;
		RuntimeObject * L_167 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_166);
		int32_t L_168;
		L_168 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_164, (RuntimeObject *)L_167);
		RuntimeObject* L_169 = V_0;
		RuntimeObject* L_170 = ___comparer0;
		int32_t L_171;
		L_171 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IValueTupleInternal::GetHashCode(System.Collections.IEqualityComparer) */, IValueTupleInternal_tBB61ABF7EC04FC4668CF806362AC0C76B4E75F5A_il2cpp_TypeInfo_var, (RuntimeObject*)L_169, (RuntimeObject*)L_170);
		int32_t L_172;
		L_172 = ValueTuple_CombineHashCodes_m63F8588429ABEC6BEC8CBBE376D253E423D0C712((int32_t)L_143, (int32_t)L_148, (int32_t)L_153, (int32_t)L_158, (int32_t)L_163, (int32_t)L_168, (int32_t)L_171, /*hidden argument*/NULL);
		return (int32_t)L_172;
	}

IL_0288:
	{
		RuntimeObject* L_173 = ___comparer0;
		bool L_174 = (bool)__this->get_Item1_0();
		bool L_175 = L_174;
		RuntimeObject * L_176 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 27), &L_175);
		int32_t L_177;
		L_177 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_173, (RuntimeObject *)L_176);
		RuntimeObject* L_178 = ___comparer0;
		RuntimeObject * L_179 = (RuntimeObject *)__this->get_Item2_1();
		int32_t L_180;
		L_180 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_178, (RuntimeObject *)L_179);
		RuntimeObject* L_181 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_182 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item3_2();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_183 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_182;
		RuntimeObject * L_184 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_183);
		int32_t L_185;
		L_185 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_181, (RuntimeObject *)L_184);
		RuntimeObject* L_186 = ___comparer0;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_187 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )__this->get_Item4_3();
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_188 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_187;
		RuntimeObject * L_189 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_188);
		int32_t L_190;
		L_190 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_186, (RuntimeObject *)L_189);
		RuntimeObject* L_191 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_192 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item5_4();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_193 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_192;
		RuntimeObject * L_194 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_193);
		int32_t L_195;
		L_195 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_191, (RuntimeObject *)L_194);
		RuntimeObject* L_196 = ___comparer0;
		bool L_197 = (bool)__this->get_Item6_5();
		bool L_198 = L_197;
		RuntimeObject * L_199 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 32), &L_198);
		int32_t L_200;
		L_200 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_196, (RuntimeObject *)L_199);
		RuntimeObject* L_201 = ___comparer0;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_202 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )__this->get_Item7_6();
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_203 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_202;
		RuntimeObject * L_204 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_203);
		int32_t L_205;
		L_205 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_201, (RuntimeObject *)L_204);
		RuntimeObject* L_206 = V_0;
		RuntimeObject* L_207 = ___comparer0;
		int32_t L_208;
		L_208 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IValueTupleInternal::GetHashCode(System.Collections.IEqualityComparer) */, IValueTupleInternal_tBB61ABF7EC04FC4668CF806362AC0C76B4E75F5A_il2cpp_TypeInfo_var, (RuntimeObject*)L_206, (RuntimeObject*)L_207);
		int32_t L_209;
		L_209 = ValueTuple_CombineHashCodes_m2C08727B12DB93AA30896ACF79BB290828F7A85A((int32_t)L_177, (int32_t)L_180, (int32_t)L_185, (int32_t)L_190, (int32_t)L_195, (int32_t)L_200, (int32_t)L_205, (int32_t)L_208, /*hidden argument*/NULL);
		return (int32_t)L_209;
	}

IL_030c:
	{
		return (int32_t)(-1);
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_GetHashCodeCore_m6F26C4B1A687F9DEDD61E5C149AF5392654359D2_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * _thisAdjusted = reinterpret_cast<ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_GetHashCodeCore_m6F26C4B1A687F9DEDD61E5C149AF5392654359D2(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_IValueTupleInternal_GetHashCode_m39C0E41776AFAE40A9DE6359D632EF4D129E5A95_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_8_GetHashCodeCore_m6F26C4B1A687F9DEDD61E5C149AF5392654359D2((ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)(ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 59));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_System_IValueTupleInternal_GetHashCode_m39C0E41776AFAE40A9DE6359D632EF4D129E5A95_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * _thisAdjusted = reinterpret_cast<ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_System_IValueTupleInternal_GetHashCode_m39C0E41776AFAE40A9DE6359D632EF4D129E5A95(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.String System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_8_ToString_mC8108B938AEBDD99A9B46B52BD04EE5AB3F04BED_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTupleInternal_tBB61ABF7EC04FC4668CF806362AC0C76B4E75F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	bool* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	bool* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	RuntimeObject ** G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	String_t* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	String_t* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_3 = NULL;
	String_t* G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_3 = NULL;
	bool* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B24_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B24_3 = NULL;
	bool* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_3 = NULL;
	bool* G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B23_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B23_3 = NULL;
	String_t* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B25_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B25_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B28_0 = NULL;
	int32_t G_B28_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B28_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B28_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B26_0 = NULL;
	int32_t G_B26_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B26_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B26_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B27_0 = NULL;
	int32_t G_B27_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B27_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B27_3 = NULL;
	String_t* G_B29_0 = NULL;
	int32_t G_B29_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B29_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B29_3 = NULL;
	bool* G_B33_0 = NULL;
	int32_t G_B33_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B33_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B33_3 = NULL;
	bool* G_B31_0 = NULL;
	int32_t G_B31_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B31_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B31_3 = NULL;
	bool* G_B32_0 = NULL;
	int32_t G_B32_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B32_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B32_3 = NULL;
	String_t* G_B34_0 = NULL;
	int32_t G_B34_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B34_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B34_3 = NULL;
	RuntimeObject ** G_B37_0 = NULL;
	int32_t G_B37_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B37_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B37_3 = NULL;
	RuntimeObject ** G_B35_0 = NULL;
	int32_t G_B35_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B35_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B35_3 = NULL;
	RuntimeObject ** G_B36_0 = NULL;
	int32_t G_B36_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B36_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B36_3 = NULL;
	String_t* G_B38_0 = NULL;
	int32_t G_B38_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B38_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B38_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B41_0 = NULL;
	int32_t G_B41_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B41_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B41_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B39_0 = NULL;
	int32_t G_B39_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B39_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B39_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B40_0 = NULL;
	int32_t G_B40_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B40_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B40_3 = NULL;
	String_t* G_B42_0 = NULL;
	int32_t G_B42_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B42_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B42_3 = NULL;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B45_0 = NULL;
	int32_t G_B45_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B45_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B45_3 = NULL;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B43_0 = NULL;
	int32_t G_B43_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B43_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B43_3 = NULL;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B44_0 = NULL;
	int32_t G_B44_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B44_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B44_3 = NULL;
	String_t* G_B46_0 = NULL;
	int32_t G_B46_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B46_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B46_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B49_0 = NULL;
	int32_t G_B49_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B49_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B49_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B47_0 = NULL;
	int32_t G_B47_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B47_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B47_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B48_0 = NULL;
	int32_t G_B48_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B48_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B48_3 = NULL;
	String_t* G_B50_0 = NULL;
	int32_t G_B50_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B50_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B50_3 = NULL;
	bool* G_B53_0 = NULL;
	int32_t G_B53_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B53_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B53_3 = NULL;
	bool* G_B51_0 = NULL;
	int32_t G_B51_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B51_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B51_3 = NULL;
	bool* G_B52_0 = NULL;
	int32_t G_B52_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B52_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B52_3 = NULL;
	String_t* G_B54_0 = NULL;
	int32_t G_B54_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B54_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B54_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B57_0 = NULL;
	int32_t G_B57_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B57_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B57_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B55_0 = NULL;
	int32_t G_B55_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B55_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B55_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B56_0 = NULL;
	int32_t G_B56_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B56_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B56_3 = NULL;
	String_t* G_B58_0 = NULL;
	int32_t G_B58_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B58_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B58_3 = NULL;
	{
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_0 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )__this->get_Rest_7();
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_1 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_1);
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		if (L_3)
		{
			goto IL_021c;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_4;
		ArrayElementTypeCheck (L_5, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_5;
		bool* L_7 = (bool*)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		G_B4_0 = L_7;
		G_B4_1 = 1;
		G_B4_2 = L_6;
		G_B4_3 = L_6;
		goto IL_0052;
		G_B2_0 = L_7;
		G_B2_1 = 1;
		G_B2_2 = L_6;
		G_B2_3 = L_6;
	}
	{
		bool L_9 = (*(bool*)G_B2_0);
		V_1 = (bool)L_9;
		G_B4_0 = (&V_1);
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0052;
		G_B3_0 = (&V_1);
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		G_B5_3 = G_B3_3;
		goto IL_005d;
	}

IL_0052:
	{
		String_t* L_11;
		L_11 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(bool*)G_B4_0, /*hidden argument*/NULL);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_005d:
	{
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B5_3;
		ArrayElementTypeCheck (L_12, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_12;
		RuntimeObject ** L_14 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_15 = V_2;
		G_B6_0 = L_14;
		G_B6_1 = 3;
		G_B6_2 = L_13;
		G_B6_3 = L_13;
		if (L_15)
		{
			G_B8_0 = L_14;
			G_B8_1 = 3;
			G_B8_2 = L_13;
			G_B8_3 = L_13;
			goto IL_0092;
		}
	}
	{
		RuntimeObject * L_16 = (*(RuntimeObject **)G_B6_0);
		V_2 = (RuntimeObject *)L_16;
		RuntimeObject * L_17 = V_2;
		G_B7_0 = (&V_2);
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		G_B7_3 = G_B6_3;
		if (L_17)
		{
			G_B8_0 = (&V_2);
			G_B8_1 = G_B6_1;
			G_B8_2 = G_B6_2;
			G_B8_3 = G_B6_3;
			goto IL_0092;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		G_B9_2 = G_B7_2;
		G_B9_3 = G_B7_3;
		goto IL_009d;
	}

IL_0092:
	{
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B8_0));
		G_B9_0 = L_18;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_009d:
	{
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B9_3;
		ArrayElementTypeCheck (L_19, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_19;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_21 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_22 = V_3;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_23 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_22;
		RuntimeObject * L_24 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_23);
		G_B10_0 = L_21;
		G_B10_1 = 5;
		G_B10_2 = L_20;
		G_B10_3 = L_20;
		if (L_24)
		{
			G_B12_0 = L_21;
			G_B12_1 = 5;
			G_B12_2 = L_20;
			G_B12_3 = L_20;
			goto IL_00d2;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_25 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B10_0);
		V_3 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_25;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_26 = V_3;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_27 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_26;
		RuntimeObject * L_28 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_27);
		G_B11_0 = (&V_3);
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
		if (L_28)
		{
			G_B12_0 = (&V_3);
			G_B12_1 = G_B10_1;
			G_B12_2 = G_B10_2;
			G_B12_3 = G_B10_3;
			goto IL_00d2;
		}
	}
	{
		G_B13_0 = ((String_t*)(NULL));
		G_B13_1 = G_B11_1;
		G_B13_2 = G_B11_2;
		G_B13_3 = G_B11_3;
		goto IL_00dd;
	}

IL_00d2:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_29(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), G_B12_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__216 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_29));
		String_t* L_30;
		L_30 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__216.methodPtr)((RuntimeObject *)(&L_29), /*hidden argument*/il2cpp_virtual_invoke_data__216.method);
		*G_B12_0 = L_29.m_Value;
		G_B13_0 = L_30;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
		G_B13_3 = G_B12_3;
	}

IL_00dd:
	{
		ArrayElementTypeCheck (G_B13_2, G_B13_0);
		(G_B13_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B13_1), (String_t*)G_B13_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B13_3;
		ArrayElementTypeCheck (L_31, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_31;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * L_33 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 ));
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_34 = V_4;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_35 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_34;
		RuntimeObject * L_36 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_35);
		G_B14_0 = L_33;
		G_B14_1 = 7;
		G_B14_2 = L_32;
		G_B14_3 = L_32;
		if (L_36)
		{
			G_B16_0 = L_33;
			G_B16_1 = 7;
			G_B16_2 = L_32;
			G_B16_3 = L_32;
			goto IL_0115;
		}
	}
	{
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_37 = (*(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)G_B14_0);
		V_4 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_37;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_38 = V_4;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_39 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_38;
		RuntimeObject * L_40 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_39);
		G_B15_0 = (&V_4);
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		G_B15_3 = G_B14_3;
		if (L_40)
		{
			G_B16_0 = (&V_4);
			G_B16_1 = G_B14_1;
			G_B16_2 = G_B14_2;
			G_B16_3 = G_B14_3;
			goto IL_0115;
		}
	}
	{
		G_B17_0 = ((String_t*)(NULL));
		G_B17_1 = G_B15_1;
		G_B17_2 = G_B15_2;
		G_B17_3 = G_B15_3;
		goto IL_0120;
	}

IL_0115:
	{
		Il2CppFakeBox<Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 > L_41(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), G_B16_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__283 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_41));
		String_t* L_42;
		L_42 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__283.methodPtr)((RuntimeObject *)(&L_41), /*hidden argument*/il2cpp_virtual_invoke_data__283.method);
		*G_B16_0 = L_41.m_Value;
		G_B17_0 = L_42;
		G_B17_1 = G_B16_1;
		G_B17_2 = G_B16_2;
		G_B17_3 = G_B16_3;
	}

IL_0120:
	{
		ArrayElementTypeCheck (G_B17_2, G_B17_0);
		(G_B17_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B17_1), (String_t*)G_B17_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B17_3;
		ArrayElementTypeCheck (L_43, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_44 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_43;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_45 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_46 = V_5;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_47 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_46;
		RuntimeObject * L_48 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_47);
		G_B18_0 = L_45;
		G_B18_1 = ((int32_t)9);
		G_B18_2 = L_44;
		G_B18_3 = L_44;
		if (L_48)
		{
			G_B20_0 = L_45;
			G_B20_1 = ((int32_t)9);
			G_B20_2 = L_44;
			G_B20_3 = L_44;
			goto IL_0159;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_49 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B18_0);
		V_5 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_49;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_50 = V_5;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_51 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_50;
		RuntimeObject * L_52 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_51);
		G_B19_0 = (&V_5);
		G_B19_1 = G_B18_1;
		G_B19_2 = G_B18_2;
		G_B19_3 = G_B18_3;
		if (L_52)
		{
			G_B20_0 = (&V_5);
			G_B20_1 = G_B18_1;
			G_B20_2 = G_B18_2;
			G_B20_3 = G_B18_3;
			goto IL_0159;
		}
	}
	{
		G_B21_0 = ((String_t*)(NULL));
		G_B21_1 = G_B19_1;
		G_B21_2 = G_B19_2;
		G_B21_3 = G_B19_3;
		goto IL_0164;
	}

IL_0159:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_53(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), G_B20_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__351 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_53));
		String_t* L_54;
		L_54 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__351.methodPtr)((RuntimeObject *)(&L_53), /*hidden argument*/il2cpp_virtual_invoke_data__351.method);
		*G_B20_0 = L_53.m_Value;
		G_B21_0 = L_54;
		G_B21_1 = G_B20_1;
		G_B21_2 = G_B20_2;
		G_B21_3 = G_B20_3;
	}

IL_0164:
	{
		ArrayElementTypeCheck (G_B21_2, G_B21_0);
		(G_B21_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B21_1), (String_t*)G_B21_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B21_3;
		ArrayElementTypeCheck (L_55, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_55;
		bool* L_57 = (bool*)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_6), sizeof(bool));
		G_B24_0 = L_57;
		G_B24_1 = ((int32_t)11);
		G_B24_2 = L_56;
		G_B24_3 = L_56;
		goto IL_019e;
		G_B22_0 = L_57;
		G_B22_1 = ((int32_t)11);
		G_B22_2 = L_56;
		G_B22_3 = L_56;
	}
	{
		bool L_59 = (*(bool*)G_B22_0);
		V_6 = (bool)L_59;
		G_B24_0 = (&V_6);
		G_B24_1 = G_B22_1;
		G_B24_2 = G_B22_2;
		G_B24_3 = G_B22_3;
		goto IL_019e;
		G_B23_0 = (&V_6);
		G_B23_1 = G_B22_1;
		G_B23_2 = G_B22_2;
		G_B23_3 = G_B22_3;
	}
	{
		G_B25_0 = ((String_t*)(NULL));
		G_B25_1 = G_B23_1;
		G_B25_2 = G_B23_2;
		G_B25_3 = G_B23_3;
		goto IL_01a9;
	}

IL_019e:
	{
		String_t* L_61;
		L_61 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(bool*)G_B24_0, /*hidden argument*/NULL);
		G_B25_0 = L_61;
		G_B25_1 = G_B24_1;
		G_B25_2 = G_B24_2;
		G_B25_3 = G_B24_3;
	}

IL_01a9:
	{
		ArrayElementTypeCheck (G_B25_2, G_B25_0);
		(G_B25_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B25_1), (String_t*)G_B25_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_62 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B25_3;
		ArrayElementTypeCheck (L_62, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_62;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_64 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item7_6();
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_65 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_66 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_65;
		RuntimeObject * L_67 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_66);
		G_B26_0 = L_64;
		G_B26_1 = ((int32_t)13);
		G_B26_2 = L_63;
		G_B26_3 = L_63;
		if (L_67)
		{
			G_B28_0 = L_64;
			G_B28_1 = ((int32_t)13);
			G_B28_2 = L_63;
			G_B28_3 = L_63;
			goto IL_01e3;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_68 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B26_0);
		V_7 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_68;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_69 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_70 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_69;
		RuntimeObject * L_71 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_70);
		G_B27_0 = (&V_7);
		G_B27_1 = G_B26_1;
		G_B27_2 = G_B26_2;
		G_B27_3 = G_B26_3;
		if (L_71)
		{
			G_B28_0 = (&V_7);
			G_B28_1 = G_B26_1;
			G_B28_2 = G_B26_2;
			G_B28_3 = G_B26_3;
			goto IL_01e3;
		}
	}
	{
		G_B29_0 = ((String_t*)(NULL));
		G_B29_1 = G_B27_1;
		G_B29_2 = G_B27_2;
		G_B29_3 = G_B27_3;
		goto IL_01ee;
	}

IL_01e3:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_72(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), G_B28_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__489 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_72));
		String_t* L_73;
		L_73 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__489.methodPtr)((RuntimeObject *)(&L_72), /*hidden argument*/il2cpp_virtual_invoke_data__489.method);
		*G_B28_0 = L_72.m_Value;
		G_B29_0 = L_73;
		G_B29_1 = G_B28_1;
		G_B29_2 = G_B28_2;
		G_B29_3 = G_B28_3;
	}

IL_01ee:
	{
		ArrayElementTypeCheck (G_B29_2, G_B29_0);
		(G_B29_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B29_1), (String_t*)G_B29_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_74 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B29_3;
		ArrayElementTypeCheck (L_74, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_74)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_75 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_74;
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D * L_76 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D *)__this->get_address_of_Rest_7();
		Il2CppMetadataObject L_77(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__519 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_77));
		String_t* L_78;
		L_78 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__519.methodPtr)((RuntimeObject *)((RuntimeObject*)L_76)-1, /*hidden argument*/il2cpp_virtual_invoke_data__519.method);
		ArrayElementTypeCheck (L_75, L_78);
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_78);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_79 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_75;
		ArrayElementTypeCheck (L_79, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_79)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_80;
		L_80 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_79, /*hidden argument*/NULL);
		return (String_t*)L_80;
	}

IL_021c:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_81 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_82 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_81;
		ArrayElementTypeCheck (L_82, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_82)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_83 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_82;
		bool* L_84 = (bool*)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		G_B33_0 = L_84;
		G_B33_1 = 1;
		G_B33_2 = L_83;
		G_B33_3 = L_83;
		goto IL_0257;
		G_B31_0 = L_84;
		G_B31_1 = 1;
		G_B31_2 = L_83;
		G_B31_3 = L_83;
	}
	{
		bool L_86 = (*(bool*)G_B31_0);
		V_1 = (bool)L_86;
		G_B33_0 = (&V_1);
		G_B33_1 = G_B31_1;
		G_B33_2 = G_B31_2;
		G_B33_3 = G_B31_3;
		goto IL_0257;
		G_B32_0 = (&V_1);
		G_B32_1 = G_B31_1;
		G_B32_2 = G_B31_2;
		G_B32_3 = G_B31_3;
	}
	{
		G_B34_0 = ((String_t*)(NULL));
		G_B34_1 = G_B32_1;
		G_B34_2 = G_B32_2;
		G_B34_3 = G_B32_3;
		goto IL_0262;
	}

IL_0257:
	{
		String_t* L_88;
		L_88 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(bool*)G_B33_0, /*hidden argument*/NULL);
		G_B34_0 = L_88;
		G_B34_1 = G_B33_1;
		G_B34_2 = G_B33_2;
		G_B34_3 = G_B33_3;
	}

IL_0262:
	{
		ArrayElementTypeCheck (G_B34_2, G_B34_0);
		(G_B34_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B34_1), (String_t*)G_B34_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_89 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B34_3;
		ArrayElementTypeCheck (L_89, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_89)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_90 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_89;
		RuntimeObject ** L_91 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_92 = V_2;
		G_B35_0 = L_91;
		G_B35_1 = 3;
		G_B35_2 = L_90;
		G_B35_3 = L_90;
		if (L_92)
		{
			G_B37_0 = L_91;
			G_B37_1 = 3;
			G_B37_2 = L_90;
			G_B37_3 = L_90;
			goto IL_0297;
		}
	}
	{
		RuntimeObject * L_93 = (*(RuntimeObject **)G_B35_0);
		V_2 = (RuntimeObject *)L_93;
		RuntimeObject * L_94 = V_2;
		G_B36_0 = (&V_2);
		G_B36_1 = G_B35_1;
		G_B36_2 = G_B35_2;
		G_B36_3 = G_B35_3;
		if (L_94)
		{
			G_B37_0 = (&V_2);
			G_B37_1 = G_B35_1;
			G_B37_2 = G_B35_2;
			G_B37_3 = G_B35_3;
			goto IL_0297;
		}
	}
	{
		G_B38_0 = ((String_t*)(NULL));
		G_B38_1 = G_B36_1;
		G_B38_2 = G_B36_2;
		G_B38_3 = G_B36_3;
		goto IL_02a2;
	}

IL_0297:
	{
		String_t* L_95;
		L_95 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B37_0));
		G_B38_0 = L_95;
		G_B38_1 = G_B37_1;
		G_B38_2 = G_B37_2;
		G_B38_3 = G_B37_3;
	}

IL_02a2:
	{
		ArrayElementTypeCheck (G_B38_2, G_B38_0);
		(G_B38_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B38_1), (String_t*)G_B38_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_96 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B38_3;
		ArrayElementTypeCheck (L_96, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_96)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_97 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_96;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_98 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_99 = V_3;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_100 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_99;
		RuntimeObject * L_101 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_100);
		G_B39_0 = L_98;
		G_B39_1 = 5;
		G_B39_2 = L_97;
		G_B39_3 = L_97;
		if (L_101)
		{
			G_B41_0 = L_98;
			G_B41_1 = 5;
			G_B41_2 = L_97;
			G_B41_3 = L_97;
			goto IL_02d7;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_102 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B39_0);
		V_3 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_102;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_103 = V_3;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_104 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_103;
		RuntimeObject * L_105 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_104);
		G_B40_0 = (&V_3);
		G_B40_1 = G_B39_1;
		G_B40_2 = G_B39_2;
		G_B40_3 = G_B39_3;
		if (L_105)
		{
			G_B41_0 = (&V_3);
			G_B41_1 = G_B39_1;
			G_B41_2 = G_B39_2;
			G_B41_3 = G_B39_3;
			goto IL_02d7;
		}
	}
	{
		G_B42_0 = ((String_t*)(NULL));
		G_B42_1 = G_B40_1;
		G_B42_2 = G_B40_2;
		G_B42_3 = G_B40_3;
		goto IL_02e2;
	}

IL_02d7:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_106(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), G_B41_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__733 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_106));
		String_t* L_107;
		L_107 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__733.methodPtr)((RuntimeObject *)(&L_106), /*hidden argument*/il2cpp_virtual_invoke_data__733.method);
		*G_B41_0 = L_106.m_Value;
		G_B42_0 = L_107;
		G_B42_1 = G_B41_1;
		G_B42_2 = G_B41_2;
		G_B42_3 = G_B41_3;
	}

IL_02e2:
	{
		ArrayElementTypeCheck (G_B42_2, G_B42_0);
		(G_B42_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B42_1), (String_t*)G_B42_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_108 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B42_3;
		ArrayElementTypeCheck (L_108, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_108)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_109 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_108;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * L_110 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 ));
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_111 = V_4;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_112 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_111;
		RuntimeObject * L_113 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_112);
		G_B43_0 = L_110;
		G_B43_1 = 7;
		G_B43_2 = L_109;
		G_B43_3 = L_109;
		if (L_113)
		{
			G_B45_0 = L_110;
			G_B45_1 = 7;
			G_B45_2 = L_109;
			G_B45_3 = L_109;
			goto IL_031a;
		}
	}
	{
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_114 = (*(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)G_B43_0);
		V_4 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_114;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_115 = V_4;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_116 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_115;
		RuntimeObject * L_117 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_116);
		G_B44_0 = (&V_4);
		G_B44_1 = G_B43_1;
		G_B44_2 = G_B43_2;
		G_B44_3 = G_B43_3;
		if (L_117)
		{
			G_B45_0 = (&V_4);
			G_B45_1 = G_B43_1;
			G_B45_2 = G_B43_2;
			G_B45_3 = G_B43_3;
			goto IL_031a;
		}
	}
	{
		G_B46_0 = ((String_t*)(NULL));
		G_B46_1 = G_B44_1;
		G_B46_2 = G_B44_2;
		G_B46_3 = G_B44_3;
		goto IL_0325;
	}

IL_031a:
	{
		Il2CppFakeBox<Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 > L_118(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), G_B45_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__800 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_118));
		String_t* L_119;
		L_119 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__800.methodPtr)((RuntimeObject *)(&L_118), /*hidden argument*/il2cpp_virtual_invoke_data__800.method);
		*G_B45_0 = L_118.m_Value;
		G_B46_0 = L_119;
		G_B46_1 = G_B45_1;
		G_B46_2 = G_B45_2;
		G_B46_3 = G_B45_3;
	}

IL_0325:
	{
		ArrayElementTypeCheck (G_B46_2, G_B46_0);
		(G_B46_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B46_1), (String_t*)G_B46_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_120 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B46_3;
		ArrayElementTypeCheck (L_120, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_120)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_121 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_120;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_122 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_123 = V_5;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_124 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_123;
		RuntimeObject * L_125 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_124);
		G_B47_0 = L_122;
		G_B47_1 = ((int32_t)9);
		G_B47_2 = L_121;
		G_B47_3 = L_121;
		if (L_125)
		{
			G_B49_0 = L_122;
			G_B49_1 = ((int32_t)9);
			G_B49_2 = L_121;
			G_B49_3 = L_121;
			goto IL_035e;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_126 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B47_0);
		V_5 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_126;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_127 = V_5;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_128 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_127;
		RuntimeObject * L_129 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_128);
		G_B48_0 = (&V_5);
		G_B48_1 = G_B47_1;
		G_B48_2 = G_B47_2;
		G_B48_3 = G_B47_3;
		if (L_129)
		{
			G_B49_0 = (&V_5);
			G_B49_1 = G_B47_1;
			G_B49_2 = G_B47_2;
			G_B49_3 = G_B47_3;
			goto IL_035e;
		}
	}
	{
		G_B50_0 = ((String_t*)(NULL));
		G_B50_1 = G_B48_1;
		G_B50_2 = G_B48_2;
		G_B50_3 = G_B48_3;
		goto IL_0369;
	}

IL_035e:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_130(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), G_B49_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__868 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_130));
		String_t* L_131;
		L_131 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__868.methodPtr)((RuntimeObject *)(&L_130), /*hidden argument*/il2cpp_virtual_invoke_data__868.method);
		*G_B49_0 = L_130.m_Value;
		G_B50_0 = L_131;
		G_B50_1 = G_B49_1;
		G_B50_2 = G_B49_2;
		G_B50_3 = G_B49_3;
	}

IL_0369:
	{
		ArrayElementTypeCheck (G_B50_2, G_B50_0);
		(G_B50_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B50_1), (String_t*)G_B50_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_132 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B50_3;
		ArrayElementTypeCheck (L_132, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_132)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_133 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_132;
		bool* L_134 = (bool*)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_6), sizeof(bool));
		G_B53_0 = L_134;
		G_B53_1 = ((int32_t)11);
		G_B53_2 = L_133;
		G_B53_3 = L_133;
		goto IL_03a3;
		G_B51_0 = L_134;
		G_B51_1 = ((int32_t)11);
		G_B51_2 = L_133;
		G_B51_3 = L_133;
	}
	{
		bool L_136 = (*(bool*)G_B51_0);
		V_6 = (bool)L_136;
		G_B53_0 = (&V_6);
		G_B53_1 = G_B51_1;
		G_B53_2 = G_B51_2;
		G_B53_3 = G_B51_3;
		goto IL_03a3;
		G_B52_0 = (&V_6);
		G_B52_1 = G_B51_1;
		G_B52_2 = G_B51_2;
		G_B52_3 = G_B51_3;
	}
	{
		G_B54_0 = ((String_t*)(NULL));
		G_B54_1 = G_B52_1;
		G_B54_2 = G_B52_2;
		G_B54_3 = G_B52_3;
		goto IL_03ae;
	}

IL_03a3:
	{
		String_t* L_138;
		L_138 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(bool*)G_B53_0, /*hidden argument*/NULL);
		G_B54_0 = L_138;
		G_B54_1 = G_B53_1;
		G_B54_2 = G_B53_2;
		G_B54_3 = G_B53_3;
	}

IL_03ae:
	{
		ArrayElementTypeCheck (G_B54_2, G_B54_0);
		(G_B54_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B54_1), (String_t*)G_B54_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_139 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B54_3;
		ArrayElementTypeCheck (L_139, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_139)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_140 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_139;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_141 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item7_6();
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_142 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_143 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_142;
		RuntimeObject * L_144 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_143);
		G_B55_0 = L_141;
		G_B55_1 = ((int32_t)13);
		G_B55_2 = L_140;
		G_B55_3 = L_140;
		if (L_144)
		{
			G_B57_0 = L_141;
			G_B57_1 = ((int32_t)13);
			G_B57_2 = L_140;
			G_B57_3 = L_140;
			goto IL_03e8;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_145 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B55_0);
		V_7 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_145;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_146 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_147 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_146;
		RuntimeObject * L_148 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_147);
		G_B56_0 = (&V_7);
		G_B56_1 = G_B55_1;
		G_B56_2 = G_B55_2;
		G_B56_3 = G_B55_3;
		if (L_148)
		{
			G_B57_0 = (&V_7);
			G_B57_1 = G_B55_1;
			G_B57_2 = G_B55_2;
			G_B57_3 = G_B55_3;
			goto IL_03e8;
		}
	}
	{
		G_B58_0 = ((String_t*)(NULL));
		G_B58_1 = G_B56_1;
		G_B58_2 = G_B56_2;
		G_B58_3 = G_B56_3;
		goto IL_03f3;
	}

IL_03e8:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_149(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), G_B57_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__1006 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_149));
		String_t* L_150;
		L_150 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__1006.methodPtr)((RuntimeObject *)(&L_149), /*hidden argument*/il2cpp_virtual_invoke_data__1006.method);
		*G_B57_0 = L_149.m_Value;
		G_B58_0 = L_150;
		G_B58_1 = G_B57_1;
		G_B58_2 = G_B57_2;
		G_B58_3 = G_B57_3;
	}

IL_03f3:
	{
		ArrayElementTypeCheck (G_B58_2, G_B58_0);
		(G_B58_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B58_1), (String_t*)G_B58_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_151 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B58_3;
		ArrayElementTypeCheck (L_151, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_151)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_152 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_151;
		RuntimeObject* L_153 = V_0;
		String_t* L_154;
		L_154 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.IValueTupleInternal::ToStringEnd() */, IValueTupleInternal_tBB61ABF7EC04FC4668CF806362AC0C76B4E75F5A_il2cpp_TypeInfo_var, (RuntimeObject*)L_153);
		ArrayElementTypeCheck (L_152, L_154);
		(L_152)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_154);
		String_t* L_155;
		L_155 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_152, /*hidden argument*/NULL);
		return (String_t*)L_155;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_8_ToString_mC8108B938AEBDD99A9B46B52BD04EE5AB3F04BED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * _thisAdjusted = reinterpret_cast<ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_8_ToString_mC8108B938AEBDD99A9B46B52BD04EE5AB3F04BED(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.IValueTupleInternal.ToStringEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_8_System_IValueTupleInternal_ToStringEnd_mAD895AF7D1CB816055348146E670FC199A0680CB_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTupleInternal_tBB61ABF7EC04FC4668CF806362AC0C76B4E75F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	bool* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	bool* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	RuntimeObject ** G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	String_t* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	String_t* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_3 = NULL;
	String_t* G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_3 = NULL;
	bool* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B24_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B24_3 = NULL;
	bool* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_3 = NULL;
	bool* G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B23_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B23_3 = NULL;
	String_t* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B25_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B25_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B28_0 = NULL;
	int32_t G_B28_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B28_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B28_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B26_0 = NULL;
	int32_t G_B26_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B26_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B26_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B27_0 = NULL;
	int32_t G_B27_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B27_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B27_3 = NULL;
	String_t* G_B29_0 = NULL;
	int32_t G_B29_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B29_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B29_3 = NULL;
	bool* G_B33_0 = NULL;
	int32_t G_B33_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B33_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B33_3 = NULL;
	bool* G_B31_0 = NULL;
	int32_t G_B31_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B31_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B31_3 = NULL;
	bool* G_B32_0 = NULL;
	int32_t G_B32_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B32_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B32_3 = NULL;
	String_t* G_B34_0 = NULL;
	int32_t G_B34_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B34_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B34_3 = NULL;
	RuntimeObject ** G_B37_0 = NULL;
	int32_t G_B37_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B37_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B37_3 = NULL;
	RuntimeObject ** G_B35_0 = NULL;
	int32_t G_B35_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B35_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B35_3 = NULL;
	RuntimeObject ** G_B36_0 = NULL;
	int32_t G_B36_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B36_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B36_3 = NULL;
	String_t* G_B38_0 = NULL;
	int32_t G_B38_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B38_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B38_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B41_0 = NULL;
	int32_t G_B41_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B41_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B41_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B39_0 = NULL;
	int32_t G_B39_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B39_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B39_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B40_0 = NULL;
	int32_t G_B40_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B40_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B40_3 = NULL;
	String_t* G_B42_0 = NULL;
	int32_t G_B42_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B42_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B42_3 = NULL;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B45_0 = NULL;
	int32_t G_B45_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B45_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B45_3 = NULL;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B43_0 = NULL;
	int32_t G_B43_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B43_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B43_3 = NULL;
	Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * G_B44_0 = NULL;
	int32_t G_B44_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B44_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B44_3 = NULL;
	String_t* G_B46_0 = NULL;
	int32_t G_B46_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B46_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B46_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B49_0 = NULL;
	int32_t G_B49_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B49_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B49_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B47_0 = NULL;
	int32_t G_B47_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B47_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B47_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B48_0 = NULL;
	int32_t G_B48_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B48_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B48_3 = NULL;
	String_t* G_B50_0 = NULL;
	int32_t G_B50_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B50_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B50_3 = NULL;
	bool* G_B53_0 = NULL;
	int32_t G_B53_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B53_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B53_3 = NULL;
	bool* G_B51_0 = NULL;
	int32_t G_B51_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B51_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B51_3 = NULL;
	bool* G_B52_0 = NULL;
	int32_t G_B52_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B52_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B52_3 = NULL;
	String_t* G_B54_0 = NULL;
	int32_t G_B54_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B54_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B54_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B57_0 = NULL;
	int32_t G_B57_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B57_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B57_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B55_0 = NULL;
	int32_t G_B55_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B55_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B55_3 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * G_B56_0 = NULL;
	int32_t G_B56_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B56_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B56_3 = NULL;
	String_t* G_B58_0 = NULL;
	int32_t G_B58_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B58_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B58_3 = NULL;
	{
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_0 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )__this->get_Rest_7();
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_1 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_1);
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		if (L_3)
		{
			goto IL_0213;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_4;
		bool* L_6 = (bool*)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		G_B4_0 = L_6;
		G_B4_1 = 0;
		G_B4_2 = L_5;
		G_B4_3 = L_5;
		goto IL_004a;
		G_B2_0 = L_6;
		G_B2_1 = 0;
		G_B2_2 = L_5;
		G_B2_3 = L_5;
	}
	{
		bool L_8 = (*(bool*)G_B2_0);
		V_1 = (bool)L_8;
		G_B4_0 = (&V_1);
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_004a;
		G_B3_0 = (&V_1);
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		G_B5_3 = G_B3_3;
		goto IL_0055;
	}

IL_004a:
	{
		String_t* L_10;
		L_10 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(bool*)G_B4_0, /*hidden argument*/NULL);
		G_B5_0 = L_10;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_0055:
	{
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B5_3;
		ArrayElementTypeCheck (L_11, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_11;
		RuntimeObject ** L_13 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_14 = V_2;
		G_B6_0 = L_13;
		G_B6_1 = 2;
		G_B6_2 = L_12;
		G_B6_3 = L_12;
		if (L_14)
		{
			G_B8_0 = L_13;
			G_B8_1 = 2;
			G_B8_2 = L_12;
			G_B8_3 = L_12;
			goto IL_008a;
		}
	}
	{
		RuntimeObject * L_15 = (*(RuntimeObject **)G_B6_0);
		V_2 = (RuntimeObject *)L_15;
		RuntimeObject * L_16 = V_2;
		G_B7_0 = (&V_2);
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		G_B7_3 = G_B6_3;
		if (L_16)
		{
			G_B8_0 = (&V_2);
			G_B8_1 = G_B6_1;
			G_B8_2 = G_B6_2;
			G_B8_3 = G_B6_3;
			goto IL_008a;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		G_B9_2 = G_B7_2;
		G_B9_3 = G_B7_3;
		goto IL_0095;
	}

IL_008a:
	{
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B8_0));
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_0095:
	{
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B9_3;
		ArrayElementTypeCheck (L_18, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_18;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_20 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_21 = V_3;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_22 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_22);
		G_B10_0 = L_20;
		G_B10_1 = 4;
		G_B10_2 = L_19;
		G_B10_3 = L_19;
		if (L_23)
		{
			G_B12_0 = L_20;
			G_B12_1 = 4;
			G_B12_2 = L_19;
			G_B12_3 = L_19;
			goto IL_00ca;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_24 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B10_0);
		V_3 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_24;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_25 = V_3;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_26 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_25;
		RuntimeObject * L_27 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_26);
		G_B11_0 = (&V_3);
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
		if (L_27)
		{
			G_B12_0 = (&V_3);
			G_B12_1 = G_B10_1;
			G_B12_2 = G_B10_2;
			G_B12_3 = G_B10_3;
			goto IL_00ca;
		}
	}
	{
		G_B13_0 = ((String_t*)(NULL));
		G_B13_1 = G_B11_1;
		G_B13_2 = G_B11_2;
		G_B13_3 = G_B11_3;
		goto IL_00d5;
	}

IL_00ca:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_28(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), G_B12_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__208 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_28));
		String_t* L_29;
		L_29 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__208.methodPtr)((RuntimeObject *)(&L_28), /*hidden argument*/il2cpp_virtual_invoke_data__208.method);
		*G_B12_0 = L_28.m_Value;
		G_B13_0 = L_29;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
		G_B13_3 = G_B12_3;
	}

IL_00d5:
	{
		ArrayElementTypeCheck (G_B13_2, G_B13_0);
		(G_B13_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B13_1), (String_t*)G_B13_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B13_3;
		ArrayElementTypeCheck (L_30, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_30;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * L_32 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 ));
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_33 = V_4;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_34 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_33;
		RuntimeObject * L_35 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_34);
		G_B14_0 = L_32;
		G_B14_1 = 6;
		G_B14_2 = L_31;
		G_B14_3 = L_31;
		if (L_35)
		{
			G_B16_0 = L_32;
			G_B16_1 = 6;
			G_B16_2 = L_31;
			G_B16_3 = L_31;
			goto IL_010d;
		}
	}
	{
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_36 = (*(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)G_B14_0);
		V_4 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_36;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_37 = V_4;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_38 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_37;
		RuntimeObject * L_39 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_38);
		G_B15_0 = (&V_4);
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		G_B15_3 = G_B14_3;
		if (L_39)
		{
			G_B16_0 = (&V_4);
			G_B16_1 = G_B14_1;
			G_B16_2 = G_B14_2;
			G_B16_3 = G_B14_3;
			goto IL_010d;
		}
	}
	{
		G_B17_0 = ((String_t*)(NULL));
		G_B17_1 = G_B15_1;
		G_B17_2 = G_B15_2;
		G_B17_3 = G_B15_3;
		goto IL_0118;
	}

IL_010d:
	{
		Il2CppFakeBox<Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 > L_40(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), G_B16_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__275 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_40));
		String_t* L_41;
		L_41 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__275.methodPtr)((RuntimeObject *)(&L_40), /*hidden argument*/il2cpp_virtual_invoke_data__275.method);
		*G_B16_0 = L_40.m_Value;
		G_B17_0 = L_41;
		G_B17_1 = G_B16_1;
		G_B17_2 = G_B16_2;
		G_B17_3 = G_B16_3;
	}

IL_0118:
	{
		ArrayElementTypeCheck (G_B17_2, G_B17_0);
		(G_B17_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B17_1), (String_t*)G_B17_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B17_3;
		ArrayElementTypeCheck (L_42, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_42;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_44 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_45 = V_5;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_46 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_45;
		RuntimeObject * L_47 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_46);
		G_B18_0 = L_44;
		G_B18_1 = 8;
		G_B18_2 = L_43;
		G_B18_3 = L_43;
		if (L_47)
		{
			G_B20_0 = L_44;
			G_B20_1 = 8;
			G_B20_2 = L_43;
			G_B20_3 = L_43;
			goto IL_0150;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_48 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B18_0);
		V_5 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_48;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_49 = V_5;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_50 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_49;
		RuntimeObject * L_51 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_50);
		G_B19_0 = (&V_5);
		G_B19_1 = G_B18_1;
		G_B19_2 = G_B18_2;
		G_B19_3 = G_B18_3;
		if (L_51)
		{
			G_B20_0 = (&V_5);
			G_B20_1 = G_B18_1;
			G_B20_2 = G_B18_2;
			G_B20_3 = G_B18_3;
			goto IL_0150;
		}
	}
	{
		G_B21_0 = ((String_t*)(NULL));
		G_B21_1 = G_B19_1;
		G_B21_2 = G_B19_2;
		G_B21_3 = G_B19_3;
		goto IL_015b;
	}

IL_0150:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_52(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), G_B20_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__342 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_52));
		String_t* L_53;
		L_53 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__342.methodPtr)((RuntimeObject *)(&L_52), /*hidden argument*/il2cpp_virtual_invoke_data__342.method);
		*G_B20_0 = L_52.m_Value;
		G_B21_0 = L_53;
		G_B21_1 = G_B20_1;
		G_B21_2 = G_B20_2;
		G_B21_3 = G_B20_3;
	}

IL_015b:
	{
		ArrayElementTypeCheck (G_B21_2, G_B21_0);
		(G_B21_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B21_1), (String_t*)G_B21_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_54 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B21_3;
		ArrayElementTypeCheck (L_54, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_54;
		bool* L_56 = (bool*)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_6), sizeof(bool));
		G_B24_0 = L_56;
		G_B24_1 = ((int32_t)10);
		G_B24_2 = L_55;
		G_B24_3 = L_55;
		goto IL_0195;
		G_B22_0 = L_56;
		G_B22_1 = ((int32_t)10);
		G_B22_2 = L_55;
		G_B22_3 = L_55;
	}
	{
		bool L_58 = (*(bool*)G_B22_0);
		V_6 = (bool)L_58;
		G_B24_0 = (&V_6);
		G_B24_1 = G_B22_1;
		G_B24_2 = G_B22_2;
		G_B24_3 = G_B22_3;
		goto IL_0195;
		G_B23_0 = (&V_6);
		G_B23_1 = G_B22_1;
		G_B23_2 = G_B22_2;
		G_B23_3 = G_B22_3;
	}
	{
		G_B25_0 = ((String_t*)(NULL));
		G_B25_1 = G_B23_1;
		G_B25_2 = G_B23_2;
		G_B25_3 = G_B23_3;
		goto IL_01a0;
	}

IL_0195:
	{
		String_t* L_60;
		L_60 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(bool*)G_B24_0, /*hidden argument*/NULL);
		G_B25_0 = L_60;
		G_B25_1 = G_B24_1;
		G_B25_2 = G_B24_2;
		G_B25_3 = G_B24_3;
	}

IL_01a0:
	{
		ArrayElementTypeCheck (G_B25_2, G_B25_0);
		(G_B25_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B25_1), (String_t*)G_B25_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B25_3;
		ArrayElementTypeCheck (L_61, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_62 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_61;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_63 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item7_6();
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_64 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_65 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_64;
		RuntimeObject * L_66 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_65);
		G_B26_0 = L_63;
		G_B26_1 = ((int32_t)12);
		G_B26_2 = L_62;
		G_B26_3 = L_62;
		if (L_66)
		{
			G_B28_0 = L_63;
			G_B28_1 = ((int32_t)12);
			G_B28_2 = L_62;
			G_B28_3 = L_62;
			goto IL_01da;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_67 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B26_0);
		V_7 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_67;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_68 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_69 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_68;
		RuntimeObject * L_70 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_69);
		G_B27_0 = (&V_7);
		G_B27_1 = G_B26_1;
		G_B27_2 = G_B26_2;
		G_B27_3 = G_B26_3;
		if (L_70)
		{
			G_B28_0 = (&V_7);
			G_B28_1 = G_B26_1;
			G_B28_2 = G_B26_2;
			G_B28_3 = G_B26_3;
			goto IL_01da;
		}
	}
	{
		G_B29_0 = ((String_t*)(NULL));
		G_B29_1 = G_B27_1;
		G_B29_2 = G_B27_2;
		G_B29_3 = G_B27_3;
		goto IL_01e5;
	}

IL_01da:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_71(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), G_B28_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__480 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_71));
		String_t* L_72;
		L_72 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__480.methodPtr)((RuntimeObject *)(&L_71), /*hidden argument*/il2cpp_virtual_invoke_data__480.method);
		*G_B28_0 = L_71.m_Value;
		G_B29_0 = L_72;
		G_B29_1 = G_B28_1;
		G_B29_2 = G_B28_2;
		G_B29_3 = G_B28_3;
	}

IL_01e5:
	{
		ArrayElementTypeCheck (G_B29_2, G_B29_0);
		(G_B29_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B29_1), (String_t*)G_B29_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_73 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B29_3;
		ArrayElementTypeCheck (L_73, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_73)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_74 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_73;
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D * L_75 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D *)__this->get_address_of_Rest_7();
		Il2CppMetadataObject L_76(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__510 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_76));
		String_t* L_77;
		L_77 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__510.methodPtr)((RuntimeObject *)((RuntimeObject*)L_75)-1, /*hidden argument*/il2cpp_virtual_invoke_data__510.method);
		ArrayElementTypeCheck (L_74, L_77);
		(L_74)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)L_77);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_78 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_74;
		ArrayElementTypeCheck (L_78, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_78)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_79;
		L_79 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_78, /*hidden argument*/NULL);
		return (String_t*)L_79;
	}

IL_0213:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_81 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_80;
		bool* L_82 = (bool*)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		G_B33_0 = L_82;
		G_B33_1 = 0;
		G_B33_2 = L_81;
		G_B33_3 = L_81;
		goto IL_0246;
		G_B31_0 = L_82;
		G_B31_1 = 0;
		G_B31_2 = L_81;
		G_B31_3 = L_81;
	}
	{
		bool L_84 = (*(bool*)G_B31_0);
		V_1 = (bool)L_84;
		G_B33_0 = (&V_1);
		G_B33_1 = G_B31_1;
		G_B33_2 = G_B31_2;
		G_B33_3 = G_B31_3;
		goto IL_0246;
		G_B32_0 = (&V_1);
		G_B32_1 = G_B31_1;
		G_B32_2 = G_B31_2;
		G_B32_3 = G_B31_3;
	}
	{
		G_B34_0 = ((String_t*)(NULL));
		G_B34_1 = G_B32_1;
		G_B34_2 = G_B32_2;
		G_B34_3 = G_B32_3;
		goto IL_0251;
	}

IL_0246:
	{
		String_t* L_86;
		L_86 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(bool*)G_B33_0, /*hidden argument*/NULL);
		G_B34_0 = L_86;
		G_B34_1 = G_B33_1;
		G_B34_2 = G_B33_2;
		G_B34_3 = G_B33_3;
	}

IL_0251:
	{
		ArrayElementTypeCheck (G_B34_2, G_B34_0);
		(G_B34_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B34_1), (String_t*)G_B34_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_87 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B34_3;
		ArrayElementTypeCheck (L_87, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_87)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_88 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_87;
		RuntimeObject ** L_89 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_90 = V_2;
		G_B35_0 = L_89;
		G_B35_1 = 2;
		G_B35_2 = L_88;
		G_B35_3 = L_88;
		if (L_90)
		{
			G_B37_0 = L_89;
			G_B37_1 = 2;
			G_B37_2 = L_88;
			G_B37_3 = L_88;
			goto IL_0286;
		}
	}
	{
		RuntimeObject * L_91 = (*(RuntimeObject **)G_B35_0);
		V_2 = (RuntimeObject *)L_91;
		RuntimeObject * L_92 = V_2;
		G_B36_0 = (&V_2);
		G_B36_1 = G_B35_1;
		G_B36_2 = G_B35_2;
		G_B36_3 = G_B35_3;
		if (L_92)
		{
			G_B37_0 = (&V_2);
			G_B37_1 = G_B35_1;
			G_B37_2 = G_B35_2;
			G_B37_3 = G_B35_3;
			goto IL_0286;
		}
	}
	{
		G_B38_0 = ((String_t*)(NULL));
		G_B38_1 = G_B36_1;
		G_B38_2 = G_B36_2;
		G_B38_3 = G_B36_3;
		goto IL_0291;
	}

IL_0286:
	{
		String_t* L_93;
		L_93 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B37_0));
		G_B38_0 = L_93;
		G_B38_1 = G_B37_1;
		G_B38_2 = G_B37_2;
		G_B38_3 = G_B37_3;
	}

IL_0291:
	{
		ArrayElementTypeCheck (G_B38_2, G_B38_0);
		(G_B38_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B38_1), (String_t*)G_B38_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_94 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B38_3;
		ArrayElementTypeCheck (L_94, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_94)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_95 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_94;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_96 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_97 = V_3;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_98 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_97;
		RuntimeObject * L_99 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_98);
		G_B39_0 = L_96;
		G_B39_1 = 4;
		G_B39_2 = L_95;
		G_B39_3 = L_95;
		if (L_99)
		{
			G_B41_0 = L_96;
			G_B41_1 = 4;
			G_B41_2 = L_95;
			G_B41_3 = L_95;
			goto IL_02c6;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_100 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B39_0);
		V_3 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_100;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_101 = V_3;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_102 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_101;
		RuntimeObject * L_103 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), &L_102);
		G_B40_0 = (&V_3);
		G_B40_1 = G_B39_1;
		G_B40_2 = G_B39_2;
		G_B40_3 = G_B39_3;
		if (L_103)
		{
			G_B41_0 = (&V_3);
			G_B41_1 = G_B39_1;
			G_B41_2 = G_B39_2;
			G_B41_3 = G_B39_3;
			goto IL_02c6;
		}
	}
	{
		G_B42_0 = ((String_t*)(NULL));
		G_B42_1 = G_B40_1;
		G_B42_2 = G_B40_2;
		G_B42_3 = G_B40_3;
		goto IL_02d1;
	}

IL_02c6:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_104(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 29), G_B41_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__716 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_104));
		String_t* L_105;
		L_105 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__716.methodPtr)((RuntimeObject *)(&L_104), /*hidden argument*/il2cpp_virtual_invoke_data__716.method);
		*G_B41_0 = L_104.m_Value;
		G_B42_0 = L_105;
		G_B42_1 = G_B41_1;
		G_B42_2 = G_B41_2;
		G_B42_3 = G_B41_3;
	}

IL_02d1:
	{
		ArrayElementTypeCheck (G_B42_2, G_B42_0);
		(G_B42_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B42_1), (String_t*)G_B42_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_106 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B42_3;
		ArrayElementTypeCheck (L_106, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_106)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_107 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_106;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 * L_108 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 ));
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_109 = V_4;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_110 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_109;
		RuntimeObject * L_111 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_110);
		G_B43_0 = L_108;
		G_B43_1 = 6;
		G_B43_2 = L_107;
		G_B43_3 = L_107;
		if (L_111)
		{
			G_B45_0 = L_108;
			G_B45_1 = 6;
			G_B45_2 = L_107;
			G_B45_3 = L_107;
			goto IL_0309;
		}
	}
	{
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_112 = (*(Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 *)G_B43_0);
		V_4 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_112;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_113 = V_4;
		Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20  L_114 = (Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 )L_113;
		RuntimeObject * L_115 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), &L_114);
		G_B44_0 = (&V_4);
		G_B44_1 = G_B43_1;
		G_B44_2 = G_B43_2;
		G_B44_3 = G_B43_3;
		if (L_115)
		{
			G_B45_0 = (&V_4);
			G_B45_1 = G_B43_1;
			G_B45_2 = G_B43_2;
			G_B45_3 = G_B43_3;
			goto IL_0309;
		}
	}
	{
		G_B46_0 = ((String_t*)(NULL));
		G_B46_1 = G_B44_1;
		G_B46_2 = G_B44_2;
		G_B46_3 = G_B44_3;
		goto IL_0314;
	}

IL_0309:
	{
		Il2CppFakeBox<Nullable_1_t6A774F8463A3CF6921B89016821E3965496F6E20 > L_116(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 30), G_B45_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__783 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_116));
		String_t* L_117;
		L_117 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__783.methodPtr)((RuntimeObject *)(&L_116), /*hidden argument*/il2cpp_virtual_invoke_data__783.method);
		*G_B45_0 = L_116.m_Value;
		G_B46_0 = L_117;
		G_B46_1 = G_B45_1;
		G_B46_2 = G_B45_2;
		G_B46_3 = G_B45_3;
	}

IL_0314:
	{
		ArrayElementTypeCheck (G_B46_2, G_B46_0);
		(G_B46_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B46_1), (String_t*)G_B46_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_118 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B46_3;
		ArrayElementTypeCheck (L_118, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_118)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_119 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_118;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_120 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_121 = V_5;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_122 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_121;
		RuntimeObject * L_123 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_122);
		G_B47_0 = L_120;
		G_B47_1 = 8;
		G_B47_2 = L_119;
		G_B47_3 = L_119;
		if (L_123)
		{
			G_B49_0 = L_120;
			G_B49_1 = 8;
			G_B49_2 = L_119;
			G_B49_3 = L_119;
			goto IL_034c;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_124 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B47_0);
		V_5 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_124;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_125 = V_5;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_126 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_125;
		RuntimeObject * L_127 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), &L_126);
		G_B48_0 = (&V_5);
		G_B48_1 = G_B47_1;
		G_B48_2 = G_B47_2;
		G_B48_3 = G_B47_3;
		if (L_127)
		{
			G_B49_0 = (&V_5);
			G_B49_1 = G_B47_1;
			G_B49_2 = G_B47_2;
			G_B49_3 = G_B47_3;
			goto IL_034c;
		}
	}
	{
		G_B50_0 = ((String_t*)(NULL));
		G_B50_1 = G_B48_1;
		G_B50_2 = G_B48_2;
		G_B50_3 = G_B48_3;
		goto IL_0357;
	}

IL_034c:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_128(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 31), G_B49_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__850 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_128));
		String_t* L_129;
		L_129 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__850.methodPtr)((RuntimeObject *)(&L_128), /*hidden argument*/il2cpp_virtual_invoke_data__850.method);
		*G_B49_0 = L_128.m_Value;
		G_B50_0 = L_129;
		G_B50_1 = G_B49_1;
		G_B50_2 = G_B49_2;
		G_B50_3 = G_B49_3;
	}

IL_0357:
	{
		ArrayElementTypeCheck (G_B50_2, G_B50_0);
		(G_B50_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B50_1), (String_t*)G_B50_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_130 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B50_3;
		ArrayElementTypeCheck (L_130, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_130)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_131 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_130;
		bool* L_132 = (bool*)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_6), sizeof(bool));
		G_B53_0 = L_132;
		G_B53_1 = ((int32_t)10);
		G_B53_2 = L_131;
		G_B53_3 = L_131;
		goto IL_0391;
		G_B51_0 = L_132;
		G_B51_1 = ((int32_t)10);
		G_B51_2 = L_131;
		G_B51_3 = L_131;
	}
	{
		bool L_134 = (*(bool*)G_B51_0);
		V_6 = (bool)L_134;
		G_B53_0 = (&V_6);
		G_B53_1 = G_B51_1;
		G_B53_2 = G_B51_2;
		G_B53_3 = G_B51_3;
		goto IL_0391;
		G_B52_0 = (&V_6);
		G_B52_1 = G_B51_1;
		G_B52_2 = G_B51_2;
		G_B52_3 = G_B51_3;
	}
	{
		G_B54_0 = ((String_t*)(NULL));
		G_B54_1 = G_B52_1;
		G_B54_2 = G_B52_2;
		G_B54_3 = G_B52_3;
		goto IL_039c;
	}

IL_0391:
	{
		String_t* L_136;
		L_136 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(bool*)G_B53_0, /*hidden argument*/NULL);
		G_B54_0 = L_136;
		G_B54_1 = G_B53_1;
		G_B54_2 = G_B53_2;
		G_B54_3 = G_B53_3;
	}

IL_039c:
	{
		ArrayElementTypeCheck (G_B54_2, G_B54_0);
		(G_B54_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B54_1), (String_t*)G_B54_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_137 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B54_3;
		ArrayElementTypeCheck (L_137, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_137)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_138 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_137;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_139 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)__this->get_address_of_Item7_6();
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_140 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_141 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_140;
		RuntimeObject * L_142 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_141);
		G_B55_0 = L_139;
		G_B55_1 = ((int32_t)12);
		G_B55_2 = L_138;
		G_B55_3 = L_138;
		if (L_142)
		{
			G_B57_0 = L_139;
			G_B57_1 = ((int32_t)12);
			G_B57_2 = L_138;
			G_B57_3 = L_138;
			goto IL_03d6;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_143 = (*(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)G_B55_0);
		V_7 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_143;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_144 = V_7;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_145 = (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 )L_144;
		RuntimeObject * L_146 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), &L_145);
		G_B56_0 = (&V_7);
		G_B56_1 = G_B55_1;
		G_B56_2 = G_B55_2;
		G_B56_3 = G_B55_3;
		if (L_146)
		{
			G_B57_0 = (&V_7);
			G_B57_1 = G_B55_1;
			G_B57_2 = G_B55_2;
			G_B57_3 = G_B55_3;
			goto IL_03d6;
		}
	}
	{
		G_B58_0 = ((String_t*)(NULL));
		G_B58_1 = G_B56_1;
		G_B58_2 = G_B56_2;
		G_B58_3 = G_B56_3;
		goto IL_03e1;
	}

IL_03d6:
	{
		Il2CppFakeBox<Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 > L_147(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 33), G_B57_0);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__988 = il2cpp_codegen_get_virtual_invoke_data(3, (&L_147));
		String_t* L_148;
		L_148 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__988.methodPtr)((RuntimeObject *)(&L_147), /*hidden argument*/il2cpp_virtual_invoke_data__988.method);
		*G_B57_0 = L_147.m_Value;
		G_B58_0 = L_148;
		G_B58_1 = G_B57_1;
		G_B58_2 = G_B57_2;
		G_B58_3 = G_B57_3;
	}

IL_03e1:
	{
		ArrayElementTypeCheck (G_B58_2, G_B58_0);
		(G_B58_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B58_1), (String_t*)G_B58_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_149 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B58_3;
		ArrayElementTypeCheck (L_149, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_149)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_150 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_149;
		RuntimeObject* L_151 = V_0;
		String_t* L_152;
		L_152 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.IValueTupleInternal::ToStringEnd() */, IValueTupleInternal_tBB61ABF7EC04FC4668CF806362AC0C76B4E75F5A_il2cpp_TypeInfo_var, (RuntimeObject*)L_151);
		ArrayElementTypeCheck (L_150, L_152);
		(L_150)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)L_152);
		String_t* L_153;
		L_153 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_150, /*hidden argument*/NULL);
		return (String_t*)L_153;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_8_System_IValueTupleInternal_ToStringEnd_mAD895AF7D1CB816055348146E670FC199A0680CB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * _thisAdjusted = reinterpret_cast<ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_8_System_IValueTupleInternal_ToStringEnd_mAD895AF7D1CB816055348146E670FC199A0680CB(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`8<System.Boolean,System.Object,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<Fusion.Rotation>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.ValueTuple`1<System.Nullable`1<UnityEngine.Vector3>>>::System.Runtime.CompilerServices.ITuple.get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_m337300D67D392B6119F988F11EF152AC04CAE43A_gshared (ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITuple_t559B1A91B496A81AAFEE74F54ACD49FE8CDE2215_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_0 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )__this->get_Rest_7();
		ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D  L_1 = (ValueTuple_1_t836F1AA0817C661239CB263D0E5140364194739D )L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_1);
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Runtime.CompilerServices.ITuple::get_Length() */, ITuple_t559B1A91B496A81AAFEE74F54ACD49FE8CDE2215_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		return (int32_t)((int32_t)il2cpp_codegen_add((int32_t)7, (int32_t)L_5));
	}

IL_001d:
	{
		return (int32_t)8;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_m337300D67D392B6119F988F11EF152AC04CAE43A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A * _thisAdjusted = reinterpret_cast<ValueTuple_8_t395C090222FF46C41454440B3714E1A32447936A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_m337300D67D392B6119F988F11EF152AC04CAE43A(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WeakReference`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m26CA3930ADE164EA48E474988EE6B82D26E5F9E9_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___target0;
		((  void (*) (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 *)__this, (RuntimeObject *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_mF2828744686B43E540BF1C0908FA8C14694F666F_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		bool L_0 = ___trackResurrection1;
		__this->set_trackResurrection_1(L_0);
		bool L_1 = ___trackResurrection1;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (int32_t)G_B3_0;
		RuntimeObject * L_2 = ___target0;
		int32_t L_3 = V_0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_4;
		L_4 = GCHandle_Alloc_m51C5BC1D6902ADA3B9C297C1A96DB322A6403201((RuntimeObject *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		__this->set_handle_0(L_4);
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_mC76935DFFEF0678A77A4811865B9F4D350D72741_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WeakReference_1__ctor_mC76935DFFEF0678A77A4811865B9F4D350D72741_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		bool L_3;
		L_3 = SerializationInfo_GetBoolean_m705ADACFB52D6385DDB6B2525C1979ECBE6D5849((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2, (String_t*)_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, /*hidden argument*/NULL);
		__this->set_trackResurrection_1(L_3);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_5, /*hidden argument*/NULL);
		RuntimeObject * L_7;
		L_7 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_4, (String_t*)_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, (Type_t *)L_6, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)L_7;
		bool L_8 = (bool)__this->get_trackResurrection_1();
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 1;
	}

IL_0047:
	{
		V_1 = (int32_t)G_B5_0;
		RuntimeObject * L_9 = V_0;
		int32_t L_10 = V_1;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_11;
		L_11 = GCHandle_Alloc_m51C5BC1D6902ADA3B9C297C1A96DB322A6403201((RuntimeObject *)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		__this->set_handle_0(L_11);
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_GetObjectData_m7C63330FAC22CBE86AA1BDE2F34DFDA8B1E41272_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WeakReference_1_GetObjectData_m7C63330FAC22CBE86AA1BDE2F34DFDA8B1E41272_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		bool L_3 = (bool)__this->get_trackResurrection_1();
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2, (String_t*)_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, (bool)L_3, /*hidden argument*/NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_4 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_7 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		RuntimeObject * L_8;
		L_8 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_7, /*hidden argument*/NULL);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_6, (String_t*)_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, (RuntimeObject *)L_8, /*hidden argument*/NULL);
		return;
	}

IL_0043:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_9 = ___info0;
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_9, (String_t*)_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::SetTarget(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_SetTarget_m506022EEB834BF63D70181A89BFAD90E752DEB5C_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_0 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		RuntimeObject * L_1 = ___target0;
		GCHandle_set_Target_mA85979DDB776D29B7B347DC63157BEF51B097098((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_mA9F884507AABEFCC394D06FEEB7AD14ECEB5CD6B_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject ** ___target0, const RuntimeMethod* method)
{
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_0 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		bool L_1;
		L_1 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject ** L_2 = ___target0;
		il2cpp_codegen_initobj(L_2, sizeof(RuntimeObject *));
		return (bool)0;
	}

IL_0016:
	{
		RuntimeObject ** L_3 = ___target0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_4 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		RuntimeObject * L_5;
		L_5 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_4, /*hidden argument*/NULL);
		*(RuntimeObject **)L_3 = ((RuntimeObject *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)((RuntimeObject *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		RuntimeObject ** L_6 = ___target0;
		RuntimeObject * L_7 = (*(RuntimeObject **)L_6);
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void System.WeakReference`1<System.Object>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_Finalize_mFFF6306032DA8256E4F7D125EF76342E83CD6F68_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_0 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mFA68796C995A71918347DA98D160E26649D6A1FC_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereArrayIterator_1_Clone_mD021B473127C1F6F14F3A65B5532C1680C976944_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * L_2 = (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m863DA6E4F0A213B340E29BED24B21CCF8CF3A8CA_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		int32_t L_3 = L_2;
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_4 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )(L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_6 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_7 = V_0;
		bool L_8;
		L_8 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_6, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_0;
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_11 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mBDA5AE3243C59C98DC1F78407A7C6B939F0ED8E7_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___predicate0;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_3;
		L_3 = ((  Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * L_4 = (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m5358A7C3085BC8A103D9793A6D2FCB7E36A2D2CE_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereArrayIterator_1_Clone_m2CF9FC5638704567A64DC86DD674EB4E6F380F79_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_2 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m37A95072CA5380DE7F2D6B57990507C92F045BB3_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_7 = V_0;
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m294488B1E62E494973DD4880121A17A0C8A08118_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_4 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m707C14212113530906675226212BFB17FB9FFDAD_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereEnumerableIterator_1_Clone_m784C946DD2F2922C39D9D7F0FE127F9B3F6459B3_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * L_2 = (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mE16D9D538B2554CA7720C9950DED49B47FDCD080_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m63AA91504371EFC63212838247EC0751DEB04725_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_1;
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_10 = V_1;
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mBC8A7812EA44E454BCB18F3920133BFD5EF67FA6_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___predicate0;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_3;
		L_3 = ((  Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * L_4 = (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE8BFA73027409E16668838C4664CE7C48F3254DF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereEnumerableIterator_1_Clone_mD8AFDE4531ADC466665EEE89C052BFF645C1BDD6_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_2 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4016C553BF1DF1102C2A7B769244B2DC2EA3E716_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_4 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mFF43A0851AF3E2469A68EEE2A2698FD2CAC6E640_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereListIterator_1_Clone_m543689012B48160EAE9BC7EBCCE4BA0C39AFC412_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * L_2 = (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mF7804B57A97E06FE44F6B6E5ECB860105B14EC3B_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_3 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  L_4;
		L_4 = ((  Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  (*) (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_5 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_1;
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_10 = V_1;
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_11 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m367822A36B7AB1F301F12B849EFD9C456F898239_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___predicate0;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_3;
		L_3 = ((  Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * L_4 = (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m3EB9274A8CE9B71A41BA4B8E9E22D9735713DFA3_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereListIterator_1_Clone_mF7E182440FC39477FC20CA48E0FAB270FED512F4_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_2 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m11D0FD0206FC9B236608A1150FB26790BA09B2E5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_11 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m1AD3C3728A42EA6188BB39667495E67F8A078501_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_4 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m753B845FC177A4500A5809EA02B94FD14C1017E9_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector2, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m6D78D257291467E05FDD35D57F87C1B85FC13CF9_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * L_3 = (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mC8EA524E00550DADCB86D2D527C1BFDEE335EDF6_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		int32_t L_3 = L_2;
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_4 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )(L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_6 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_0;
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_10 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_11 = V_0;
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_10, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_14 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mB95AC53D5283844BEFB7F84CFABBED87446942F4_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m42B6FDAEDB2D48D1090A3E06A3D7F4339CA7DD4D_gshared (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector2, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_mA5824D44B54C8AF514D5683EDE0B1FC5834A69A9_gshared (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B * L_3 = (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B *, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m880029BC140EC15B1231301739BF3F74D63E452B_gshared (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int32_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_6 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_8 = V_0;
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_10 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		int32_t L_11 = V_0;
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m419FD3EEA73CF3A41AA87E1EEB86DC0206657EAE_gshared (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mCB64A76E8C03C791C57D44E38D025D1C6EC7B880_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m4ACA936AD86CEAB027D82949C74DEDD882A800D3_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_3 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mCF08A119CF0CC000264B5B6BA5EC4B40CC9640CC_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_10 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m21B504E9811B348A8694F7C71E07ABCCDE69807B_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m634CE03BF281A9966A650B2BA6ED44AD72E5879F_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector2, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_m82474F2DE866D303C5767C7B58EE3213342A29F0_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * L_3 = (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mAB2AD9EAF60076FC567705357B1A87DCC0FDC6F7_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m9AED0076EB03B4E46908FB05BEB74852F542382E_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_11 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mDF3B69D0756C062EA752AA0B60FA20A65396313F_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m2C6BF870C887594C92C96638C777A6F8D363FBE6_gshared (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * __this, RuntimeObject* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector2, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mFAB909F2F26271F2629A7E2424FC23F8BAF054B6_gshared (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * L_3 = (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m82C0D4A9E151A1DAC0C017CA403BAB5CDED9CFD5_gshared (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m7422C90C467A2D0EF7E7D644EDB241F378A7AECD_gshared (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_8 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_11 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		int32_t L_12 = V_1;
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m4A570F856A4C2CF183E921AA35177C326F8BAF1C_gshared (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m6DFD3E949A8FA5121F520D501B78C17E84EBDFAC_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mD5F17A02281E6D1529D117CFF2E0F8C347D1B13F_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_3 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mAA70577DEF67CEC98FE677984AE2175B7D4E4D00_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m95AEE737A22EFFFE6557F448BF5AFCC6241D0BD7_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m72A38A8170E8B837F5C090642BE08E3845A8EB37_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m530D4471452DA4089C130C0D9FC5910907BF6007_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector2, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m72EFE228727E1A3BF476F5CF995391D549ED4C1E_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * L_3 = (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB979C50B4E1833CA8C6A8394B5503C7FEB4A608A_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_3 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  L_4;
		L_4 = ((  Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  (*) (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_5 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_11 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_14 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mB12D7743450CEE6D221C22755DDB9F022B7E24B1_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA0D61B688D5EE4E84300EA96C87ED9F3E10D5EA9_gshared (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector2, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_mE40F022902D030D86E465678E5DD79B3058FE2CB_gshared (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 * __this, const RuntimeMethod* method)
{
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 * L_3 = (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 *, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mDEB78D7AB98D0FDC13661615FDBC0C01A621E84F_gshared (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_4;
		L_4 = ((  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_5 = (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)__this->get_address_of_enumerator_6();
		int32_t L_6;
		L_6 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_8 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_11 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		int32_t L_12 = V_1;
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_14 = (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m9633A851E09C546940C2D5C7EF8CB7C501784EB3_gshared (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCF313A191371C8CCC2E79D89A3BF21714EFDB20E_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m667BCD94E83BB3A02AF2D66E07B089FA86971342_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_3 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mEE0E8B173345B059100E0736D106FFAE0C2D29CA_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAC87184664F73DD7F3EC4AB4CE2BDE71BE76249D_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
