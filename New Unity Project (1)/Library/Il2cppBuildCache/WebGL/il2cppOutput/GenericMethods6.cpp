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

// System.Action`1<System.Exception>
struct Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Collections.Generic.Dictionary`2<Fusion.Tick,System.Double>
struct Dictionary_2_tF9686A4EAE0F22B7DC2A8602CA7205D138B918DA;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// Fusion.IElementReaderWriter`1<System.Object>
struct IElementReaderWriter_1_tA4DE0C63561F332FBE3A428D640BF88939449F1A;
// System.Collections.Generic.List`1<Fusion.NetworkId>
struct List_1_t978D8CB5C20561D7917E293D7BF6CBD2C0B7AEF9;
// System.Collections.Generic.List`1<Fusion.SimulationPlayer/AOIQuery>
struct List_1_tB8C252BD9775FCD3A335245D8C4C7F3863F85B46;
// System.Collections.Generic.Queue`1<System.ValueTuple`2<Fusion.PlayerRef,System.Boolean>>
struct Queue_1_t88F50430CEFDAD434AC7E3A380D0913F22E8DC2C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Fusion.SimulationConnection[]
struct SimulationConnectionU5BU5D_t947B30F4A31E99DCFC4400968C5AB08A2597CE58;
// Fusion.SimulationInput[]
struct SimulationInputU5BU5D_tB07239ADF436F5DAB1B48F7FF572BD46869D488B;
// Fusion.SimulationPlayer[]
struct SimulationPlayerU5BU5D_tE7313FE6963D2D2DE27F3A2296001ACC2FE9DC52;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Fusion.Allocator
struct Allocator_t5BB67935B9D1F8A8EE46B41321B9B17CB9D22539;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Fusion.Sockets.INetSocket
struct INetSocket_tBCA3601571AFAD73E534D9AE5A60E7F38B7E1225;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// Fusion.LogOptions
struct LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Fusion.Sockets.NetConnection
struct NetConnection_t0CB38050A3F8A4EE2D731CB1098A18A83A61E056;
// Fusion.Sockets.NetPeer
struct NetPeer_t4420DF415F9495FCCAE1E2D9EEEDEE43C2823302;
// Fusion.Sockets.NetPeerGroup
struct NetPeerGroup_t03A68F0759815C44704F61CA0C3EA90F6E92257F;
// Fusion.NetworkBehaviour
struct NetworkBehaviour_t09ED75A5F70FEE7E3CD9483E4D99C1C1FCBB0F27;
// Fusion.NetworkProjectConfig
struct NetworkProjectConfig_t83997B637060BD5E5B74CB8E6681955BCA583F74;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Fusion.SimulationConfig
struct SimulationConfig_tFB5C3B689F3672FFEA5058EFE9D6D30E08705274;
// Fusion.SimulationInput
struct SimulationInput_tEFD9EA3D60B945415503990F45C0DBB19C9235C7;
// Fusion.SimulationInputCollection
struct SimulationInputCollection_t2673AF5E30F35DB4BF7277D7A92A4280C3C77723;
// Fusion.SimulationMessage
struct SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00;
// Fusion.SimulationSnapshot
struct SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Fusion.Log/LegacyLogger
struct LegacyLogger_t7F5262B70C2C475176C5608597EDA127E03E257F;
// Fusion.Simulation/AreaOfInterest
struct AreaOfInterest_t4C219B8713BC38397A833ACBB3DA974E766A95C9;
// Fusion.Simulation/ICallbacks
struct ICallbacks_t53DA5F8212B94669FEEDC90606C8203237C5170C;
// Fusion.Simulation/IDeltaCompressor
struct IDeltaCompressor_t27670DC0B96E307E23D3406309BEF2DA6896C8F2;
// Fusion.Simulation/StateReplicator
struct StateReplicator_tF7D3167B9F3A97DF93EB5E94E5DBEBBA91DA8D69;
// Fusion.Simulation/Statistics
struct Statistics_t5670EBCAD50A6E50FFCF51014921C44EF1CC1F58;
// Fusion.SimulationInput/Buffer
struct Buffer_t60D2BA7C2FA66FCE20303E772B41E8CD6DCE1749;
// Fusion.SimulationInput/Pool
struct Pool_tFDC7CB872A4E8BC561DA76DD57C7BD1EDB8DA91F;
// Fusion.SimulationSnapshot/IHistory
struct IHistory_tC42E64496F2C569C1B14B421E22150A8F7E68E10;
// Fusion.SimulationSnapshot/Interpolator
struct Interpolator_tF7FC72931EAD94B42D9515B6E9FB73E868410B87;
// Fusion.SimulationSnapshot/Pool
struct Pool_t634F023D2C52D13A05553BD25B4AFD63D32A2C67;

IL2CPP_EXTERN_C RuntimeClass* ILogBuilder_tE51E858F52A2324C7776A35BD5DD2DDDAD20269E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


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

// Fusion.Log/LegacyLogger
struct LegacyLogger_t7F5262B70C2C475176C5608597EDA127E03E257F  : public RuntimeObject
{
public:
	// System.Text.StringBuilder Fusion.Log/LegacyLogger::_builder
	StringBuilder_t * ____builder_0;
	// System.Action`1<System.String> Fusion.Log/LegacyLogger::Info
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___Info_1;
	// System.Action`1<System.String> Fusion.Log/LegacyLogger::Warn
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___Warn_2;
	// System.Action`1<System.String> Fusion.Log/LegacyLogger::Error
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___Error_3;
	// System.Action`1<System.Exception> Fusion.Log/LegacyLogger::Exception
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___Exception_4;

public:
	inline static int32_t get_offset_of__builder_0() { return static_cast<int32_t>(offsetof(LegacyLogger_t7F5262B70C2C475176C5608597EDA127E03E257F, ____builder_0)); }
	inline StringBuilder_t * get__builder_0() const { return ____builder_0; }
	inline StringBuilder_t ** get_address_of__builder_0() { return &____builder_0; }
	inline void set__builder_0(StringBuilder_t * value)
	{
		____builder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____builder_0), (void*)value);
	}

	inline static int32_t get_offset_of_Info_1() { return static_cast<int32_t>(offsetof(LegacyLogger_t7F5262B70C2C475176C5608597EDA127E03E257F, ___Info_1)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_Info_1() const { return ___Info_1; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_Info_1() { return &___Info_1; }
	inline void set_Info_1(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___Info_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_1), (void*)value);
	}

	inline static int32_t get_offset_of_Warn_2() { return static_cast<int32_t>(offsetof(LegacyLogger_t7F5262B70C2C475176C5608597EDA127E03E257F, ___Warn_2)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_Warn_2() const { return ___Warn_2; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_Warn_2() { return &___Warn_2; }
	inline void set_Warn_2(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___Warn_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Warn_2), (void*)value);
	}

	inline static int32_t get_offset_of_Error_3() { return static_cast<int32_t>(offsetof(LegacyLogger_t7F5262B70C2C475176C5608597EDA127E03E257F, ___Error_3)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_Error_3() const { return ___Error_3; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_Error_3() { return &___Error_3; }
	inline void set_Error_3(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___Error_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Error_3), (void*)value);
	}

	inline static int32_t get_offset_of_Exception_4() { return static_cast<int32_t>(offsetof(LegacyLogger_t7F5262B70C2C475176C5608597EDA127E03E257F, ___Exception_4)); }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * get_Exception_4() const { return ___Exception_4; }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 ** get_address_of_Exception_4() { return &___Exception_4; }
	inline void set_Exception_4(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * value)
	{
		___Exception_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Exception_4), (void*)value);
	}
};


// Fusion.LogBuilderUtils/CombinedLogBuilder_Value_Ptr`2<System.Object,Fusion.SimulationMessage>
struct CombinedLogBuilder_Value_Ptr_2_tC7DE2C34BACD8021DEB8D3DEE53B8C4A88F50457 
{
public:
	// T0 Fusion.LogBuilderUtils/CombinedLogBuilder_Value_Ptr`2::_builder0
	RuntimeObject * ____builder0_0;
	// T1* Fusion.LogBuilderUtils/CombinedLogBuilder_Value_Ptr`2::_builder1
	SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00 * ____builder1_1;

public:
	inline static int32_t get_offset_of__builder0_0() { return static_cast<int32_t>(offsetof(CombinedLogBuilder_Value_Ptr_2_tC7DE2C34BACD8021DEB8D3DEE53B8C4A88F50457, ____builder0_0)); }
	inline RuntimeObject * get__builder0_0() const { return ____builder0_0; }
	inline RuntimeObject ** get_address_of__builder0_0() { return &____builder0_0; }
	inline void set__builder0_0(RuntimeObject * value)
	{
		____builder0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____builder0_0), (void*)value);
	}

	inline static int32_t get_offset_of__builder1_1() { return static_cast<int32_t>(offsetof(CombinedLogBuilder_Value_Ptr_2_tC7DE2C34BACD8021DEB8D3DEE53B8C4A88F50457, ____builder1_1)); }
	inline SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00 * get__builder1_1() const { return ____builder1_1; }
	inline SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00 ** get_address_of__builder1_1() { return &____builder1_1; }
	inline void set__builder1_1(SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00 * value)
	{
		____builder1_1 = value;
	}
};


// Fusion.NetworkArray`1<System.Object>
struct NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC 
{
public:
	// System.Byte* Fusion.NetworkArray`1::_array
	uint8_t* ____array_0;
	// System.Int32 Fusion.NetworkArray`1::_length
	int32_t ____length_1;
	// Fusion.IElementReaderWriter`1<T> Fusion.NetworkArray`1::_readerWriter
	RuntimeObject* ____readerWriter_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC, ____array_0)); }
	inline uint8_t* get__array_0() const { return ____array_0; }
	inline uint8_t** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(uint8_t* value)
	{
		____array_0 = value;
	}

	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__readerWriter_2() { return static_cast<int32_t>(offsetof(NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC, ____readerWriter_2)); }
	inline RuntimeObject* get__readerWriter_2() const { return ____readerWriter_2; }
	inline RuntimeObject** get_address_of__readerWriter_2() { return &____readerWriter_2; }
	inline void set__readerWriter_2(RuntimeObject* value)
	{
		____readerWriter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____readerWriter_2), (void*)value);
	}
};

struct NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC_StaticFields
{
public:
	// System.Text.StringBuilder Fusion.NetworkArray`1::_stringBuilderCached
	StringBuilder_t * ____stringBuilderCached_3;

public:
	inline static int32_t get_offset_of__stringBuilderCached_3() { return static_cast<int32_t>(offsetof(NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC_StaticFields, ____stringBuilderCached_3)); }
	inline StringBuilder_t * get__stringBuilderCached_3() const { return ____stringBuilderCached_3; }
	inline StringBuilder_t ** get_address_of__stringBuilderCached_3() { return &____stringBuilderCached_3; }
	inline void set__stringBuilderCached_3(StringBuilder_t * value)
	{
		____stringBuilderCached_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stringBuilderCached_3), (void*)value);
	}
};


// Fusion.NetworkDictionary`2<System.Object,System.Object>
struct NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 
{
public:
	// System.Int32* Fusion.NetworkDictionary`2::_data
	int32_t* ____data_5;
	// System.Int32 Fusion.NetworkDictionary`2::_capacity
	int32_t ____capacity_6;
	// System.Int32 Fusion.NetworkDictionary`2::_nxtOffset
	int32_t ____nxtOffset_7;
	// System.Int32 Fusion.NetworkDictionary`2::_keyOffset
	int32_t ____keyOffset_8;
	// System.Int32 Fusion.NetworkDictionary`2::_valOffset
	int32_t ____valOffset_9;
	// System.Int32 Fusion.NetworkDictionary`2::_entryStride
	int32_t ____entryStride_10;
	// System.Int32 Fusion.NetworkDictionary`2::_bucketsOffset
	int32_t ____bucketsOffset_11;
	// System.Int32 Fusion.NetworkDictionary`2::_entriesOffset
	int32_t ____entriesOffset_12;
	// Fusion.IElementReaderWriter`1<K> Fusion.NetworkDictionary`2::_keyReaderWriter
	RuntimeObject* ____keyReaderWriter_13;
	// Fusion.IElementReaderWriter`1<V> Fusion.NetworkDictionary`2::_valReaderWriter
	RuntimeObject* ____valReaderWriter_14;
	// System.Collections.Generic.EqualityComparer`1<K> Fusion.NetworkDictionary`2::_equalityComparer
	EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * ____equalityComparer_15;

public:
	inline static int32_t get_offset_of__data_5() { return static_cast<int32_t>(offsetof(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5, ____data_5)); }
	inline int32_t* get__data_5() const { return ____data_5; }
	inline int32_t** get_address_of__data_5() { return &____data_5; }
	inline void set__data_5(int32_t* value)
	{
		____data_5 = value;
	}

	inline static int32_t get_offset_of__capacity_6() { return static_cast<int32_t>(offsetof(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5, ____capacity_6)); }
	inline int32_t get__capacity_6() const { return ____capacity_6; }
	inline int32_t* get_address_of__capacity_6() { return &____capacity_6; }
	inline void set__capacity_6(int32_t value)
	{
		____capacity_6 = value;
	}

	inline static int32_t get_offset_of__nxtOffset_7() { return static_cast<int32_t>(offsetof(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5, ____nxtOffset_7)); }
	inline int32_t get__nxtOffset_7() const { return ____nxtOffset_7; }
	inline int32_t* get_address_of__nxtOffset_7() { return &____nxtOffset_7; }
	inline void set__nxtOffset_7(int32_t value)
	{
		____nxtOffset_7 = value;
	}

	inline static int32_t get_offset_of__keyOffset_8() { return static_cast<int32_t>(offsetof(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5, ____keyOffset_8)); }
	inline int32_t get__keyOffset_8() const { return ____keyOffset_8; }
	inline int32_t* get_address_of__keyOffset_8() { return &____keyOffset_8; }
	inline void set__keyOffset_8(int32_t value)
	{
		____keyOffset_8 = value;
	}

	inline static int32_t get_offset_of__valOffset_9() { return static_cast<int32_t>(offsetof(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5, ____valOffset_9)); }
	inline int32_t get__valOffset_9() const { return ____valOffset_9; }
	inline int32_t* get_address_of__valOffset_9() { return &____valOffset_9; }
	inline void set__valOffset_9(int32_t value)
	{
		____valOffset_9 = value;
	}

	inline static int32_t get_offset_of__entryStride_10() { return static_cast<int32_t>(offsetof(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5, ____entryStride_10)); }
	inline int32_t get__entryStride_10() const { return ____entryStride_10; }
	inline int32_t* get_address_of__entryStride_10() { return &____entryStride_10; }
	inline void set__entryStride_10(int32_t value)
	{
		____entryStride_10 = value;
	}

	inline static int32_t get_offset_of__bucketsOffset_11() { return static_cast<int32_t>(offsetof(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5, ____bucketsOffset_11)); }
	inline int32_t get__bucketsOffset_11() const { return ____bucketsOffset_11; }
	inline int32_t* get_address_of__bucketsOffset_11() { return &____bucketsOffset_11; }
	inline void set__bucketsOffset_11(int32_t value)
	{
		____bucketsOffset_11 = value;
	}

	inline static int32_t get_offset_of__entriesOffset_12() { return static_cast<int32_t>(offsetof(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5, ____entriesOffset_12)); }
	inline int32_t get__entriesOffset_12() const { return ____entriesOffset_12; }
	inline int32_t* get_address_of__entriesOffset_12() { return &____entriesOffset_12; }
	inline void set__entriesOffset_12(int32_t value)
	{
		____entriesOffset_12 = value;
	}

	inline static int32_t get_offset_of__keyReaderWriter_13() { return static_cast<int32_t>(offsetof(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5, ____keyReaderWriter_13)); }
	inline RuntimeObject* get__keyReaderWriter_13() const { return ____keyReaderWriter_13; }
	inline RuntimeObject** get_address_of__keyReaderWriter_13() { return &____keyReaderWriter_13; }
	inline void set__keyReaderWriter_13(RuntimeObject* value)
	{
		____keyReaderWriter_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyReaderWriter_13), (void*)value);
	}

	inline static int32_t get_offset_of__valReaderWriter_14() { return static_cast<int32_t>(offsetof(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5, ____valReaderWriter_14)); }
	inline RuntimeObject* get__valReaderWriter_14() const { return ____valReaderWriter_14; }
	inline RuntimeObject** get_address_of__valReaderWriter_14() { return &____valReaderWriter_14; }
	inline void set__valReaderWriter_14(RuntimeObject* value)
	{
		____valReaderWriter_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____valReaderWriter_14), (void*)value);
	}

	inline static int32_t get_offset_of__equalityComparer_15() { return static_cast<int32_t>(offsetof(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5, ____equalityComparer_15)); }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * get__equalityComparer_15() const { return ____equalityComparer_15; }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 ** get_address_of__equalityComparer_15() { return &____equalityComparer_15; }
	inline void set__equalityComparer_15(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * value)
	{
		____equalityComparer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_15), (void*)value);
	}
};


// Fusion.NetworkLinkedList`1<System.Object>
struct NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 
{
public:
	// System.Int32* Fusion.NetworkLinkedList`1::_data
	int32_t* ____data_2;
	// System.Int32 Fusion.NetworkLinkedList`1::_stride
	int32_t ____stride_3;
	// System.Int32 Fusion.NetworkLinkedList`1::_capacity
	int32_t ____capacity_4;
	// Fusion.IElementReaderWriter`1<T> Fusion.NetworkLinkedList`1::_rw
	RuntimeObject* ____rw_5;

public:
	inline static int32_t get_offset_of__data_2() { return static_cast<int32_t>(offsetof(NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2, ____data_2)); }
	inline int32_t* get__data_2() const { return ____data_2; }
	inline int32_t** get_address_of__data_2() { return &____data_2; }
	inline void set__data_2(int32_t* value)
	{
		____data_2 = value;
	}

	inline static int32_t get_offset_of__stride_3() { return static_cast<int32_t>(offsetof(NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2, ____stride_3)); }
	inline int32_t get__stride_3() const { return ____stride_3; }
	inline int32_t* get_address_of__stride_3() { return &____stride_3; }
	inline void set__stride_3(int32_t value)
	{
		____stride_3 = value;
	}

	inline static int32_t get_offset_of__capacity_4() { return static_cast<int32_t>(offsetof(NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2, ____capacity_4)); }
	inline int32_t get__capacity_4() const { return ____capacity_4; }
	inline int32_t* get_address_of__capacity_4() { return &____capacity_4; }
	inline void set__capacity_4(int32_t value)
	{
		____capacity_4 = value;
	}

	inline static int32_t get_offset_of__rw_5() { return static_cast<int32_t>(offsetof(NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2, ____rw_5)); }
	inline RuntimeObject* get__rw_5() const { return ____rw_5; }
	inline RuntimeObject** get_address_of__rw_5() { return &____rw_5; }
	inline void set__rw_5(RuntimeObject* value)
	{
		____rw_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rw_5), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Double>
struct Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
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


// Fusion.LogOptions
struct LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA 
{
public:
	// System.Boolean Fusion.LogOptions::UseColorTags
	bool ___UseColorTags_0;
	// System.Func`2<System.Object,System.Int32> Fusion.LogOptions::_getColor
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____getColor_1;

public:
	inline static int32_t get_offset_of_UseColorTags_0() { return static_cast<int32_t>(offsetof(LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA, ___UseColorTags_0)); }
	inline bool get_UseColorTags_0() const { return ___UseColorTags_0; }
	inline bool* get_address_of_UseColorTags_0() { return &___UseColorTags_0; }
	inline void set_UseColorTags_0(bool value)
	{
		___UseColorTags_0 = value;
	}

	inline static int32_t get_offset_of__getColor_1() { return static_cast<int32_t>(offsetof(LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA, ____getColor_1)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__getColor_1() const { return ____getColor_1; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__getColor_1() { return &____getColor_1; }
	inline void set__getColor_1(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____getColor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____getColor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Fusion.LogOptions
struct LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA_marshaled_pinvoke
{
	int32_t ___UseColorTags_0;
	Il2CppMethodPointer ____getColor_1;
};
// Native definition for COM marshalling of Fusion.LogOptions
struct LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA_marshaled_com
{
	int32_t ___UseColorTags_0;
	Il2CppMethodPointer ____getColor_1;
};

// Fusion.PlayerRef
struct PlayerRef_t44D2437F3BB86845A74B2CE59D34F33B5735FA51 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Fusion.PlayerRef::_index
			int32_t ____index_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____index_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(PlayerRef_t44D2437F3BB86845A74B2CE59D34F33B5735FA51, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
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


// Fusion.TickAccumulator
struct TickAccumulator_t0438543B810430A8DB30DD6D40F2127BC4B42392 
{
public:
	// System.Double Fusion.TickAccumulator::_time
	double ____time_0;
	// System.Double Fusion.TickAccumulator::_scale
	double ____scale_1;
	// System.Int32 Fusion.TickAccumulator::_ticks
	int32_t ____ticks_2;
	// System.Boolean Fusion.TickAccumulator::_running
	bool ____running_3;

public:
	inline static int32_t get_offset_of__time_0() { return static_cast<int32_t>(offsetof(TickAccumulator_t0438543B810430A8DB30DD6D40F2127BC4B42392, ____time_0)); }
	inline double get__time_0() const { return ____time_0; }
	inline double* get_address_of__time_0() { return &____time_0; }
	inline void set__time_0(double value)
	{
		____time_0 = value;
	}

	inline static int32_t get_offset_of__scale_1() { return static_cast<int32_t>(offsetof(TickAccumulator_t0438543B810430A8DB30DD6D40F2127BC4B42392, ____scale_1)); }
	inline double get__scale_1() const { return ____scale_1; }
	inline double* get_address_of__scale_1() { return &____scale_1; }
	inline void set__scale_1(double value)
	{
		____scale_1 = value;
	}

	inline static int32_t get_offset_of__ticks_2() { return static_cast<int32_t>(offsetof(TickAccumulator_t0438543B810430A8DB30DD6D40F2127BC4B42392, ____ticks_2)); }
	inline int32_t get__ticks_2() const { return ____ticks_2; }
	inline int32_t* get_address_of__ticks_2() { return &____ticks_2; }
	inline void set__ticks_2(int32_t value)
	{
		____ticks_2 = value;
	}

	inline static int32_t get_offset_of__running_3() { return static_cast<int32_t>(offsetof(TickAccumulator_t0438543B810430A8DB30DD6D40F2127BC4B42392, ____running_3)); }
	inline bool get__running_3() const { return ____running_3; }
	inline bool* get_address_of__running_3() { return &____running_3; }
	inline void set__running_3(bool value)
	{
		____running_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Fusion.TickAccumulator
struct TickAccumulator_t0438543B810430A8DB30DD6D40F2127BC4B42392_marshaled_pinvoke
{
	double ____time_0;
	double ____scale_1;
	int32_t ____ticks_2;
	int32_t ____running_3;
};
// Native definition for COM marshalling of Fusion.TickAccumulator
struct TickAccumulator_t0438543B810430A8DB30DD6D40F2127BC4B42392_marshaled_com
{
	double ____time_0;
	double ____scale_1;
	int32_t ____ticks_2;
	int32_t ____running_3;
};

// Fusion.Timer
struct Timer_tD2FA8DCC6B9BFD4AA222C333F8CD453814A0CDB9 
{
public:
	// System.Int64 Fusion.Timer::_start
	int64_t ____start_0;
	// System.Int64 Fusion.Timer::_elapsed
	int64_t ____elapsed_1;
	// System.Byte Fusion.Timer::_running
	uint8_t ____running_2;

public:
	inline static int32_t get_offset_of__start_0() { return static_cast<int32_t>(offsetof(Timer_tD2FA8DCC6B9BFD4AA222C333F8CD453814A0CDB9, ____start_0)); }
	inline int64_t get__start_0() const { return ____start_0; }
	inline int64_t* get_address_of__start_0() { return &____start_0; }
	inline void set__start_0(int64_t value)
	{
		____start_0 = value;
	}

	inline static int32_t get_offset_of__elapsed_1() { return static_cast<int32_t>(offsetof(Timer_tD2FA8DCC6B9BFD4AA222C333F8CD453814A0CDB9, ____elapsed_1)); }
	inline int64_t get__elapsed_1() const { return ____elapsed_1; }
	inline int64_t* get_address_of__elapsed_1() { return &____elapsed_1; }
	inline void set__elapsed_1(int64_t value)
	{
		____elapsed_1 = value;
	}

	inline static int32_t get_offset_of__running_2() { return static_cast<int32_t>(offsetof(Timer_tD2FA8DCC6B9BFD4AA222C333F8CD453814A0CDB9, ____running_2)); }
	inline uint8_t get__running_2() const { return ____running_2; }
	inline uint8_t* get_address_of__running_2() { return &____running_2; }
	inline void set__running_2(uint8_t value)
	{
		____running_2 = value;
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


// Fusion.Ema/<_wnd>e__FixedBuffer
struct U3C_wndU3Ee__FixedBuffer_t9AB83C0D997B4283994FCE737872E717DA5A2AED 
{
public:
	union
	{
		struct
		{
			// System.Double Fusion.Ema/<_wnd>e__FixedBuffer::FixedElementField
			double ___FixedElementField_0;
		};
		uint8_t U3C_wndU3Ee__FixedBuffer_t9AB83C0D997B4283994FCE737872E717DA5A2AED__padding[512];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3C_wndU3Ee__FixedBuffer_t9AB83C0D997B4283994FCE737872E717DA5A2AED, ___FixedElementField_0)); }
	inline double get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline double* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(double value)
	{
		___FixedElementField_0 = value;
	}
};


// Fusion.Log/DefaultContext
struct DefaultContext_t5C63A5EFF790D2AC6B6E9FB8D5A2F2611A903A36 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DefaultContext_t5C63A5EFF790D2AC6B6E9FB8D5A2F2611A903A36__padding[1];
	};

public:
};


// Fusion.NetworkBehaviour/RawInterpolator
struct RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C 
{
public:
	// System.Int32 Fusion.NetworkBehaviour/RawInterpolator::_offset
	int32_t ____offset_0;
	// Fusion.NetworkBehaviour Fusion.NetworkBehaviour/RawInterpolator::_behaviour
	NetworkBehaviour_t09ED75A5F70FEE7E3CD9483E4D99C1C1FCBB0F27 * ____behaviour_1;

public:
	inline static int32_t get_offset_of__offset_0() { return static_cast<int32_t>(offsetof(RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C, ____offset_0)); }
	inline int32_t get__offset_0() const { return ____offset_0; }
	inline int32_t* get_address_of__offset_0() { return &____offset_0; }
	inline void set__offset_0(int32_t value)
	{
		____offset_0 = value;
	}

	inline static int32_t get_offset_of__behaviour_1() { return static_cast<int32_t>(offsetof(RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C, ____behaviour_1)); }
	inline NetworkBehaviour_t09ED75A5F70FEE7E3CD9483E4D99C1C1FCBB0F27 * get__behaviour_1() const { return ____behaviour_1; }
	inline NetworkBehaviour_t09ED75A5F70FEE7E3CD9483E4D99C1C1FCBB0F27 ** get_address_of__behaviour_1() { return &____behaviour_1; }
	inline void set__behaviour_1(NetworkBehaviour_t09ED75A5F70FEE7E3CD9483E4D99C1C1FCBB0F27 * value)
	{
		____behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____behaviour_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Fusion.NetworkBehaviour/RawInterpolator
struct RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C_marshaled_pinvoke
{
	int32_t ____offset_0;
	NetworkBehaviour_t09ED75A5F70FEE7E3CD9483E4D99C1C1FCBB0F27 * ____behaviour_1;
};
// Native definition for COM marshalling of Fusion.NetworkBehaviour/RawInterpolator
struct RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C_marshaled_com
{
	int32_t ____offset_0;
	NetworkBehaviour_t09ED75A5F70FEE7E3CD9483E4D99C1C1FCBB0F27 * ____behaviour_1;
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

// Fusion.Ema
struct Ema_t0065CCEEAA76F29BD06F69CA65A7A69246E3AA12 
{
public:
	// System.Int32 Fusion.Ema::_cnt
	int32_t ____cnt_1;
	// System.Double Fusion.Ema::_val
	double ____val_2;
	// System.Double Fusion.Ema::_var
	double ____var_3;
	// System.Double Fusion.Ema::_lst
	double ____lst_4;
	// Fusion.Ema/<_wnd>e__FixedBuffer Fusion.Ema::_wnd
	U3C_wndU3Ee__FixedBuffer_t9AB83C0D997B4283994FCE737872E717DA5A2AED  ____wnd_5;

public:
	inline static int32_t get_offset_of__cnt_1() { return static_cast<int32_t>(offsetof(Ema_t0065CCEEAA76F29BD06F69CA65A7A69246E3AA12, ____cnt_1)); }
	inline int32_t get__cnt_1() const { return ____cnt_1; }
	inline int32_t* get_address_of__cnt_1() { return &____cnt_1; }
	inline void set__cnt_1(int32_t value)
	{
		____cnt_1 = value;
	}

	inline static int32_t get_offset_of__val_2() { return static_cast<int32_t>(offsetof(Ema_t0065CCEEAA76F29BD06F69CA65A7A69246E3AA12, ____val_2)); }
	inline double get__val_2() const { return ____val_2; }
	inline double* get_address_of__val_2() { return &____val_2; }
	inline void set__val_2(double value)
	{
		____val_2 = value;
	}

	inline static int32_t get_offset_of__var_3() { return static_cast<int32_t>(offsetof(Ema_t0065CCEEAA76F29BD06F69CA65A7A69246E3AA12, ____var_3)); }
	inline double get__var_3() const { return ____var_3; }
	inline double* get_address_of__var_3() { return &____var_3; }
	inline void set__var_3(double value)
	{
		____var_3 = value;
	}

	inline static int32_t get_offset_of__lst_4() { return static_cast<int32_t>(offsetof(Ema_t0065CCEEAA76F29BD06F69CA65A7A69246E3AA12, ____lst_4)); }
	inline double get__lst_4() const { return ____lst_4; }
	inline double* get_address_of__lst_4() { return &____lst_4; }
	inline void set__lst_4(double value)
	{
		____lst_4 = value;
	}

	inline static int32_t get_offset_of__wnd_5() { return static_cast<int32_t>(offsetof(Ema_t0065CCEEAA76F29BD06F69CA65A7A69246E3AA12, ____wnd_5)); }
	inline U3C_wndU3Ee__FixedBuffer_t9AB83C0D997B4283994FCE737872E717DA5A2AED  get__wnd_5() const { return ____wnd_5; }
	inline U3C_wndU3Ee__FixedBuffer_t9AB83C0D997B4283994FCE737872E717DA5A2AED * get_address_of__wnd_5() { return &____wnd_5; }
	inline void set__wnd_5(U3C_wndU3Ee__FixedBuffer_t9AB83C0D997B4283994FCE737872E717DA5A2AED  value)
	{
		____wnd_5 = value;
	}
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

// Fusion.SimulationMessage
struct SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Fusion.SimulationMessage::Tick
			int32_t ___Tick_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Tick_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Source_14_OffsetPadding[4];
			// Fusion.PlayerRef Fusion.SimulationMessage::Source
			PlayerRef_t44D2437F3BB86845A74B2CE59D34F33B5735FA51  ___Source_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Source_14_OffsetPadding_forAlignmentOnly[4];
			PlayerRef_t44D2437F3BB86845A74B2CE59D34F33B5735FA51  ___Source_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Capacity_15_OffsetPadding[8];
			// System.Int32 Fusion.SimulationMessage::Capacity
			int32_t ___Capacity_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Capacity_15_OffsetPadding_forAlignmentOnly[8];
			int32_t ___Capacity_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Offset_16_OffsetPadding[12];
			// System.Int32 Fusion.SimulationMessage::Offset
			int32_t ___Offset_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Offset_16_OffsetPadding_forAlignmentOnly[12];
			int32_t ___Offset_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___References_17_OffsetPadding[16];
			// System.Int32 Fusion.SimulationMessage::References
			int32_t ___References_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___References_17_OffsetPadding_forAlignmentOnly[16];
			int32_t ___References_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Flags_18_OffsetPadding[20];
			// System.Int32 Fusion.SimulationMessage::Flags
			int32_t ___Flags_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Flags_18_OffsetPadding_forAlignmentOnly[20];
			int32_t ___Flags_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Target_19_OffsetPadding[24];
			// Fusion.PlayerRef Fusion.SimulationMessage::Target
			PlayerRef_t44D2437F3BB86845A74B2CE59D34F33B5735FA51  ___Target_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Target_19_OffsetPadding_forAlignmentOnly[24];
			PlayerRef_t44D2437F3BB86845A74B2CE59D34F33B5735FA51  ___Target_19_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Tick_13() { return static_cast<int32_t>(offsetof(SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00, ___Tick_13)); }
	inline int32_t get_Tick_13() const { return ___Tick_13; }
	inline int32_t* get_address_of_Tick_13() { return &___Tick_13; }
	inline void set_Tick_13(int32_t value)
	{
		___Tick_13 = value;
	}

	inline static int32_t get_offset_of_Source_14() { return static_cast<int32_t>(offsetof(SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00, ___Source_14)); }
	inline PlayerRef_t44D2437F3BB86845A74B2CE59D34F33B5735FA51  get_Source_14() const { return ___Source_14; }
	inline PlayerRef_t44D2437F3BB86845A74B2CE59D34F33B5735FA51 * get_address_of_Source_14() { return &___Source_14; }
	inline void set_Source_14(PlayerRef_t44D2437F3BB86845A74B2CE59D34F33B5735FA51  value)
	{
		___Source_14 = value;
	}

	inline static int32_t get_offset_of_Capacity_15() { return static_cast<int32_t>(offsetof(SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00, ___Capacity_15)); }
	inline int32_t get_Capacity_15() const { return ___Capacity_15; }
	inline int32_t* get_address_of_Capacity_15() { return &___Capacity_15; }
	inline void set_Capacity_15(int32_t value)
	{
		___Capacity_15 = value;
	}

	inline static int32_t get_offset_of_Offset_16() { return static_cast<int32_t>(offsetof(SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00, ___Offset_16)); }
	inline int32_t get_Offset_16() const { return ___Offset_16; }
	inline int32_t* get_address_of_Offset_16() { return &___Offset_16; }
	inline void set_Offset_16(int32_t value)
	{
		___Offset_16 = value;
	}

	inline static int32_t get_offset_of_References_17() { return static_cast<int32_t>(offsetof(SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00, ___References_17)); }
	inline int32_t get_References_17() const { return ___References_17; }
	inline int32_t* get_address_of_References_17() { return &___References_17; }
	inline void set_References_17(int32_t value)
	{
		___References_17 = value;
	}

	inline static int32_t get_offset_of_Flags_18() { return static_cast<int32_t>(offsetof(SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00, ___Flags_18)); }
	inline int32_t get_Flags_18() const { return ___Flags_18; }
	inline int32_t* get_address_of_Flags_18() { return &___Flags_18; }
	inline void set_Flags_18(int32_t value)
	{
		___Flags_18 = value;
	}

	inline static int32_t get_offset_of_Target_19() { return static_cast<int32_t>(offsetof(SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00, ___Target_19)); }
	inline PlayerRef_t44D2437F3BB86845A74B2CE59D34F33B5735FA51  get_Target_19() const { return ___Target_19; }
	inline PlayerRef_t44D2437F3BB86845A74B2CE59D34F33B5735FA51 * get_address_of_Target_19() { return &___Target_19; }
	inline void set_Target_19(PlayerRef_t44D2437F3BB86845A74B2CE59D34F33B5735FA51  value)
	{
		___Target_19 = value;
	}
};


// Fusion.SimulationModes
struct SimulationModes_tF35CE1831131B3B79F3DCD5F26B50E15EC9CE357 
{
public:
	// System.Int32 Fusion.SimulationModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SimulationModes_tF35CE1831131B3B79F3DCD5F26B50E15EC9CE357, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Fusion.SimulationStages
struct SimulationStages_tAC519221FE58FC1B5D400CAFCA2D640CDD7F476C 
{
public:
	// System.Int32 Fusion.SimulationStages::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SimulationStages_tAC519221FE58FC1B5D400CAFCA2D640CDD7F476C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Fusion.Simulation
struct Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571  : public RuntimeObject
{
public:
	// System.Boolean Fusion.Simulation::_isShutdown
	bool ____isShutdown_0;
	// System.Boolean Fusion.Simulation::_isWaitingForShutdown
	bool ____isWaitingForShutdown_1;
	// Fusion.Allocator* Fusion.Simulation::_tempAllocator
	Allocator_t5BB67935B9D1F8A8EE46B41321B9B17CB9D22539 * ____tempAllocator_2;
	// Fusion.Simulation/ICallbacks Fusion.Simulation::_callbacks
	RuntimeObject* ____callbacks_3;
	// Fusion.Simulation/IDeltaCompressor Fusion.Simulation::_deltaCompressor
	RuntimeObject* ____deltaCompressor_4;
	// Fusion.SimulationModes Fusion.Simulation::_mode
	int32_t ____mode_5;
	// Fusion.SimulationStages Fusion.Simulation::_stage
	int32_t ____stage_6;
	// Fusion.SimulationConfig Fusion.Simulation::_config
	SimulationConfig_tFB5C3B689F3672FFEA5058EFE9D6D30E08705274 * ____config_7;
	// Fusion.NetworkProjectConfig Fusion.Simulation::_projectConfig
	NetworkProjectConfig_t83997B637060BD5E5B74CB8E6681955BCA583F74 * ____projectConfig_8;
	// Fusion.SimulationSnapshot/IHistory Fusion.Simulation::_history
	RuntimeObject* ____history_9;
	// Fusion.SimulationSnapshot/Pool Fusion.Simulation::_historyPool
	Pool_t634F023D2C52D13A05553BD25B4AFD63D32A2C67 * ____historyPool_10;
	// Fusion.SimulationSnapshot Fusion.Simulation::_state
	SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * ____state_11;
	// Fusion.SimulationSnapshot Fusion.Simulation::_statePrevious
	SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * ____statePrevious_12;
	// Fusion.SimulationSnapshot Fusion.Simulation::_stateInterestGroups
	SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * ____stateInterestGroups_13;
	// Fusion.SimulationSnapshot Fusion.Simulation::_stateResume
	SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * ____stateResume_14;
	// Fusion.SimulationSnapshot Fusion.Simulation::_interpTo
	SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * ____interpTo_15;
	// Fusion.SimulationSnapshot Fusion.Simulation::_interpFrom
	SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * ____interpFrom_16;
	// System.Single Fusion.Simulation::_interpAlpha
	float ____interpAlpha_17;
	// Fusion.SimulationInput Fusion.Simulation::_inputRoot
	SimulationInput_tEFD9EA3D60B945415503990F45C0DBB19C9235C7 * ____inputRoot_18;
	// Fusion.SimulationInput/Pool Fusion.Simulation::_inputPool
	Pool_tFDC7CB872A4E8BC561DA76DD57C7BD1EDB8DA91F * ____inputPool_19;
	// Fusion.SimulationInputCollection Fusion.Simulation::_inputCollection
	SimulationInputCollection_t2673AF5E30F35DB4BF7277D7A92A4280C3C77723 * ____inputCollection_20;
	// Fusion.Simulation/StateReplicator Fusion.Simulation::_stateReplicator
	StateReplicator_tF7D3167B9F3A97DF93EB5E94E5DBEBBA91DA8D69 * ____stateReplicator_21;
	// Fusion.SimulationConnection[] Fusion.Simulation::_connections
	SimulationConnectionU5BU5D_t947B30F4A31E99DCFC4400968C5AB08A2597CE58* ____connections_22;
	// Fusion.SimulationPlayer[] Fusion.Simulation::_players
	SimulationPlayerU5BU5D_tE7313FE6963D2D2DE27F3A2296001ACC2FE9DC52* ____players_23;
	// Fusion.TickAccumulator Fusion.Simulation::_accumulator
	TickAccumulator_t0438543B810430A8DB30DD6D40F2127BC4B42392  ____accumulator_24;
	// System.Int32 Fusion.Simulation::_stepSize
	int32_t ____stepSize_25;
	// System.Single Fusion.Simulation::_stepDeltaFloat
	float ____stepDeltaFloat_26;
	// System.Double Fusion.Simulation::_stepDeltaDouble
	double ____stepDeltaDouble_27;
	// System.Double Fusion.Simulation::_updateTime
	double ____updateTime_28;
	// System.Double Fusion.Simulation::_updateDelta
	double ____updateDelta_29;
	// Fusion.Ema Fusion.Simulation::_updateDeltaAvg
	Ema_t0065CCEEAA76F29BD06F69CA65A7A69246E3AA12  ____updateDeltaAvg_30;
	// System.Boolean Fusion.Simulation::_isLastTick
	bool ____isLastTick_31;
	// System.Boolean Fusion.Simulation::_isFirstTick
	bool ____isFirstTick_32;
	// System.Boolean Fusion.Simulation::_isResimulation
	bool ____isResimulation_33;
	// System.Boolean Fusion.Simulation::_isResume
	bool ____isResume_34;
	// System.Boolean Fusion.Simulation::_isInTick
	bool ____isInTick_35;
	// System.Nullable`1<System.Boolean> Fusion.Simulation::_isPaused
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ____isPaused_36;
	// Fusion.Simulation/AreaOfInterest* Fusion.Simulation::_aoi
	AreaOfInterest_t4C219B8713BC38397A833ACBB3DA974E766A95C9 * ____aoi_37;
	// System.Collections.Generic.Dictionary`2<Fusion.Tick,System.Double> Fusion.Simulation::_tickUpdateTimes
	Dictionary_2_tF9686A4EAE0F22B7DC2A8602CA7205D138B918DA * ____tickUpdateTimes_38;
	// System.Collections.Generic.List`1<Fusion.NetworkId> Fusion.Simulation::_globalInterestObjects
	List_1_t978D8CB5C20561D7917E293D7BF6CBD2C0B7AEF9 * ____globalInterestObjects_39;
	// Fusion.Sockets.INetSocket Fusion.Simulation::_netSocket
	RuntimeObject* ____netSocket_42;
	// Fusion.Sockets.NetPeer* Fusion.Simulation::_netPeer
	NetPeer_t4420DF415F9495FCCAE1E2D9EEEDEE43C2823302 * ____netPeer_43;
	// Fusion.Sockets.NetPeerGroup* Fusion.Simulation::_netPeerGroup
	NetPeerGroup_t03A68F0759815C44704F61CA0C3EA90F6E92257F * ____netPeerGroup_44;
	// System.Random Fusion.Simulation::_netPeerRng
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ____netPeerRng_45;
	// Fusion.Simulation/Statistics Fusion.Simulation::Stats
	Statistics_t5670EBCAD50A6E50FFCF51014921C44EF1CC1F58 * ___Stats_46;

public:
	inline static int32_t get_offset_of__isShutdown_0() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____isShutdown_0)); }
	inline bool get__isShutdown_0() const { return ____isShutdown_0; }
	inline bool* get_address_of__isShutdown_0() { return &____isShutdown_0; }
	inline void set__isShutdown_0(bool value)
	{
		____isShutdown_0 = value;
	}

	inline static int32_t get_offset_of__isWaitingForShutdown_1() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____isWaitingForShutdown_1)); }
	inline bool get__isWaitingForShutdown_1() const { return ____isWaitingForShutdown_1; }
	inline bool* get_address_of__isWaitingForShutdown_1() { return &____isWaitingForShutdown_1; }
	inline void set__isWaitingForShutdown_1(bool value)
	{
		____isWaitingForShutdown_1 = value;
	}

	inline static int32_t get_offset_of__tempAllocator_2() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____tempAllocator_2)); }
	inline Allocator_t5BB67935B9D1F8A8EE46B41321B9B17CB9D22539 * get__tempAllocator_2() const { return ____tempAllocator_2; }
	inline Allocator_t5BB67935B9D1F8A8EE46B41321B9B17CB9D22539 ** get_address_of__tempAllocator_2() { return &____tempAllocator_2; }
	inline void set__tempAllocator_2(Allocator_t5BB67935B9D1F8A8EE46B41321B9B17CB9D22539 * value)
	{
		____tempAllocator_2 = value;
	}

	inline static int32_t get_offset_of__callbacks_3() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____callbacks_3)); }
	inline RuntimeObject* get__callbacks_3() const { return ____callbacks_3; }
	inline RuntimeObject** get_address_of__callbacks_3() { return &____callbacks_3; }
	inline void set__callbacks_3(RuntimeObject* value)
	{
		____callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of__deltaCompressor_4() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____deltaCompressor_4)); }
	inline RuntimeObject* get__deltaCompressor_4() const { return ____deltaCompressor_4; }
	inline RuntimeObject** get_address_of__deltaCompressor_4() { return &____deltaCompressor_4; }
	inline void set__deltaCompressor_4(RuntimeObject* value)
	{
		____deltaCompressor_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____deltaCompressor_4), (void*)value);
	}

	inline static int32_t get_offset_of__mode_5() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____mode_5)); }
	inline int32_t get__mode_5() const { return ____mode_5; }
	inline int32_t* get_address_of__mode_5() { return &____mode_5; }
	inline void set__mode_5(int32_t value)
	{
		____mode_5 = value;
	}

	inline static int32_t get_offset_of__stage_6() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____stage_6)); }
	inline int32_t get__stage_6() const { return ____stage_6; }
	inline int32_t* get_address_of__stage_6() { return &____stage_6; }
	inline void set__stage_6(int32_t value)
	{
		____stage_6 = value;
	}

	inline static int32_t get_offset_of__config_7() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____config_7)); }
	inline SimulationConfig_tFB5C3B689F3672FFEA5058EFE9D6D30E08705274 * get__config_7() const { return ____config_7; }
	inline SimulationConfig_tFB5C3B689F3672FFEA5058EFE9D6D30E08705274 ** get_address_of__config_7() { return &____config_7; }
	inline void set__config_7(SimulationConfig_tFB5C3B689F3672FFEA5058EFE9D6D30E08705274 * value)
	{
		____config_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____config_7), (void*)value);
	}

	inline static int32_t get_offset_of__projectConfig_8() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____projectConfig_8)); }
	inline NetworkProjectConfig_t83997B637060BD5E5B74CB8E6681955BCA583F74 * get__projectConfig_8() const { return ____projectConfig_8; }
	inline NetworkProjectConfig_t83997B637060BD5E5B74CB8E6681955BCA583F74 ** get_address_of__projectConfig_8() { return &____projectConfig_8; }
	inline void set__projectConfig_8(NetworkProjectConfig_t83997B637060BD5E5B74CB8E6681955BCA583F74 * value)
	{
		____projectConfig_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____projectConfig_8), (void*)value);
	}

	inline static int32_t get_offset_of__history_9() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____history_9)); }
	inline RuntimeObject* get__history_9() const { return ____history_9; }
	inline RuntimeObject** get_address_of__history_9() { return &____history_9; }
	inline void set__history_9(RuntimeObject* value)
	{
		____history_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____history_9), (void*)value);
	}

	inline static int32_t get_offset_of__historyPool_10() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____historyPool_10)); }
	inline Pool_t634F023D2C52D13A05553BD25B4AFD63D32A2C67 * get__historyPool_10() const { return ____historyPool_10; }
	inline Pool_t634F023D2C52D13A05553BD25B4AFD63D32A2C67 ** get_address_of__historyPool_10() { return &____historyPool_10; }
	inline void set__historyPool_10(Pool_t634F023D2C52D13A05553BD25B4AFD63D32A2C67 * value)
	{
		____historyPool_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____historyPool_10), (void*)value);
	}

	inline static int32_t get_offset_of__state_11() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____state_11)); }
	inline SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * get__state_11() const { return ____state_11; }
	inline SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 ** get_address_of__state_11() { return &____state_11; }
	inline void set__state_11(SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * value)
	{
		____state_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____state_11), (void*)value);
	}

	inline static int32_t get_offset_of__statePrevious_12() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____statePrevious_12)); }
	inline SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * get__statePrevious_12() const { return ____statePrevious_12; }
	inline SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 ** get_address_of__statePrevious_12() { return &____statePrevious_12; }
	inline void set__statePrevious_12(SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * value)
	{
		____statePrevious_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____statePrevious_12), (void*)value);
	}

	inline static int32_t get_offset_of__stateInterestGroups_13() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____stateInterestGroups_13)); }
	inline SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * get__stateInterestGroups_13() const { return ____stateInterestGroups_13; }
	inline SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 ** get_address_of__stateInterestGroups_13() { return &____stateInterestGroups_13; }
	inline void set__stateInterestGroups_13(SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * value)
	{
		____stateInterestGroups_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stateInterestGroups_13), (void*)value);
	}

	inline static int32_t get_offset_of__stateResume_14() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____stateResume_14)); }
	inline SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * get__stateResume_14() const { return ____stateResume_14; }
	inline SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 ** get_address_of__stateResume_14() { return &____stateResume_14; }
	inline void set__stateResume_14(SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * value)
	{
		____stateResume_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stateResume_14), (void*)value);
	}

	inline static int32_t get_offset_of__interpTo_15() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____interpTo_15)); }
	inline SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * get__interpTo_15() const { return ____interpTo_15; }
	inline SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 ** get_address_of__interpTo_15() { return &____interpTo_15; }
	inline void set__interpTo_15(SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * value)
	{
		____interpTo_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interpTo_15), (void*)value);
	}

	inline static int32_t get_offset_of__interpFrom_16() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____interpFrom_16)); }
	inline SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * get__interpFrom_16() const { return ____interpFrom_16; }
	inline SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 ** get_address_of__interpFrom_16() { return &____interpFrom_16; }
	inline void set__interpFrom_16(SimulationSnapshot_tCDD8217140A1ADAE93DAD6549FD406D9E4F089D8 * value)
	{
		____interpFrom_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interpFrom_16), (void*)value);
	}

	inline static int32_t get_offset_of__interpAlpha_17() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____interpAlpha_17)); }
	inline float get__interpAlpha_17() const { return ____interpAlpha_17; }
	inline float* get_address_of__interpAlpha_17() { return &____interpAlpha_17; }
	inline void set__interpAlpha_17(float value)
	{
		____interpAlpha_17 = value;
	}

	inline static int32_t get_offset_of__inputRoot_18() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____inputRoot_18)); }
	inline SimulationInput_tEFD9EA3D60B945415503990F45C0DBB19C9235C7 * get__inputRoot_18() const { return ____inputRoot_18; }
	inline SimulationInput_tEFD9EA3D60B945415503990F45C0DBB19C9235C7 ** get_address_of__inputRoot_18() { return &____inputRoot_18; }
	inline void set__inputRoot_18(SimulationInput_tEFD9EA3D60B945415503990F45C0DBB19C9235C7 * value)
	{
		____inputRoot_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____inputRoot_18), (void*)value);
	}

	inline static int32_t get_offset_of__inputPool_19() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____inputPool_19)); }
	inline Pool_tFDC7CB872A4E8BC561DA76DD57C7BD1EDB8DA91F * get__inputPool_19() const { return ____inputPool_19; }
	inline Pool_tFDC7CB872A4E8BC561DA76DD57C7BD1EDB8DA91F ** get_address_of__inputPool_19() { return &____inputPool_19; }
	inline void set__inputPool_19(Pool_tFDC7CB872A4E8BC561DA76DD57C7BD1EDB8DA91F * value)
	{
		____inputPool_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____inputPool_19), (void*)value);
	}

	inline static int32_t get_offset_of__inputCollection_20() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____inputCollection_20)); }
	inline SimulationInputCollection_t2673AF5E30F35DB4BF7277D7A92A4280C3C77723 * get__inputCollection_20() const { return ____inputCollection_20; }
	inline SimulationInputCollection_t2673AF5E30F35DB4BF7277D7A92A4280C3C77723 ** get_address_of__inputCollection_20() { return &____inputCollection_20; }
	inline void set__inputCollection_20(SimulationInputCollection_t2673AF5E30F35DB4BF7277D7A92A4280C3C77723 * value)
	{
		____inputCollection_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____inputCollection_20), (void*)value);
	}

	inline static int32_t get_offset_of__stateReplicator_21() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____stateReplicator_21)); }
	inline StateReplicator_tF7D3167B9F3A97DF93EB5E94E5DBEBBA91DA8D69 * get__stateReplicator_21() const { return ____stateReplicator_21; }
	inline StateReplicator_tF7D3167B9F3A97DF93EB5E94E5DBEBBA91DA8D69 ** get_address_of__stateReplicator_21() { return &____stateReplicator_21; }
	inline void set__stateReplicator_21(StateReplicator_tF7D3167B9F3A97DF93EB5E94E5DBEBBA91DA8D69 * value)
	{
		____stateReplicator_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stateReplicator_21), (void*)value);
	}

	inline static int32_t get_offset_of__connections_22() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____connections_22)); }
	inline SimulationConnectionU5BU5D_t947B30F4A31E99DCFC4400968C5AB08A2597CE58* get__connections_22() const { return ____connections_22; }
	inline SimulationConnectionU5BU5D_t947B30F4A31E99DCFC4400968C5AB08A2597CE58** get_address_of__connections_22() { return &____connections_22; }
	inline void set__connections_22(SimulationConnectionU5BU5D_t947B30F4A31E99DCFC4400968C5AB08A2597CE58* value)
	{
		____connections_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connections_22), (void*)value);
	}

	inline static int32_t get_offset_of__players_23() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____players_23)); }
	inline SimulationPlayerU5BU5D_tE7313FE6963D2D2DE27F3A2296001ACC2FE9DC52* get__players_23() const { return ____players_23; }
	inline SimulationPlayerU5BU5D_tE7313FE6963D2D2DE27F3A2296001ACC2FE9DC52** get_address_of__players_23() { return &____players_23; }
	inline void set__players_23(SimulationPlayerU5BU5D_tE7313FE6963D2D2DE27F3A2296001ACC2FE9DC52* value)
	{
		____players_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____players_23), (void*)value);
	}

	inline static int32_t get_offset_of__accumulator_24() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____accumulator_24)); }
	inline TickAccumulator_t0438543B810430A8DB30DD6D40F2127BC4B42392  get__accumulator_24() const { return ____accumulator_24; }
	inline TickAccumulator_t0438543B810430A8DB30DD6D40F2127BC4B42392 * get_address_of__accumulator_24() { return &____accumulator_24; }
	inline void set__accumulator_24(TickAccumulator_t0438543B810430A8DB30DD6D40F2127BC4B42392  value)
	{
		____accumulator_24 = value;
	}

	inline static int32_t get_offset_of__stepSize_25() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____stepSize_25)); }
	inline int32_t get__stepSize_25() const { return ____stepSize_25; }
	inline int32_t* get_address_of__stepSize_25() { return &____stepSize_25; }
	inline void set__stepSize_25(int32_t value)
	{
		____stepSize_25 = value;
	}

	inline static int32_t get_offset_of__stepDeltaFloat_26() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____stepDeltaFloat_26)); }
	inline float get__stepDeltaFloat_26() const { return ____stepDeltaFloat_26; }
	inline float* get_address_of__stepDeltaFloat_26() { return &____stepDeltaFloat_26; }
	inline void set__stepDeltaFloat_26(float value)
	{
		____stepDeltaFloat_26 = value;
	}

	inline static int32_t get_offset_of__stepDeltaDouble_27() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____stepDeltaDouble_27)); }
	inline double get__stepDeltaDouble_27() const { return ____stepDeltaDouble_27; }
	inline double* get_address_of__stepDeltaDouble_27() { return &____stepDeltaDouble_27; }
	inline void set__stepDeltaDouble_27(double value)
	{
		____stepDeltaDouble_27 = value;
	}

	inline static int32_t get_offset_of__updateTime_28() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____updateTime_28)); }
	inline double get__updateTime_28() const { return ____updateTime_28; }
	inline double* get_address_of__updateTime_28() { return &____updateTime_28; }
	inline void set__updateTime_28(double value)
	{
		____updateTime_28 = value;
	}

	inline static int32_t get_offset_of__updateDelta_29() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____updateDelta_29)); }
	inline double get__updateDelta_29() const { return ____updateDelta_29; }
	inline double* get_address_of__updateDelta_29() { return &____updateDelta_29; }
	inline void set__updateDelta_29(double value)
	{
		____updateDelta_29 = value;
	}

	inline static int32_t get_offset_of__updateDeltaAvg_30() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____updateDeltaAvg_30)); }
	inline Ema_t0065CCEEAA76F29BD06F69CA65A7A69246E3AA12  get__updateDeltaAvg_30() const { return ____updateDeltaAvg_30; }
	inline Ema_t0065CCEEAA76F29BD06F69CA65A7A69246E3AA12 * get_address_of__updateDeltaAvg_30() { return &____updateDeltaAvg_30; }
	inline void set__updateDeltaAvg_30(Ema_t0065CCEEAA76F29BD06F69CA65A7A69246E3AA12  value)
	{
		____updateDeltaAvg_30 = value;
	}

	inline static int32_t get_offset_of__isLastTick_31() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____isLastTick_31)); }
	inline bool get__isLastTick_31() const { return ____isLastTick_31; }
	inline bool* get_address_of__isLastTick_31() { return &____isLastTick_31; }
	inline void set__isLastTick_31(bool value)
	{
		____isLastTick_31 = value;
	}

	inline static int32_t get_offset_of__isFirstTick_32() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____isFirstTick_32)); }
	inline bool get__isFirstTick_32() const { return ____isFirstTick_32; }
	inline bool* get_address_of__isFirstTick_32() { return &____isFirstTick_32; }
	inline void set__isFirstTick_32(bool value)
	{
		____isFirstTick_32 = value;
	}

	inline static int32_t get_offset_of__isResimulation_33() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____isResimulation_33)); }
	inline bool get__isResimulation_33() const { return ____isResimulation_33; }
	inline bool* get_address_of__isResimulation_33() { return &____isResimulation_33; }
	inline void set__isResimulation_33(bool value)
	{
		____isResimulation_33 = value;
	}

	inline static int32_t get_offset_of__isResume_34() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____isResume_34)); }
	inline bool get__isResume_34() const { return ____isResume_34; }
	inline bool* get_address_of__isResume_34() { return &____isResume_34; }
	inline void set__isResume_34(bool value)
	{
		____isResume_34 = value;
	}

	inline static int32_t get_offset_of__isInTick_35() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____isInTick_35)); }
	inline bool get__isInTick_35() const { return ____isInTick_35; }
	inline bool* get_address_of__isInTick_35() { return &____isInTick_35; }
	inline void set__isInTick_35(bool value)
	{
		____isInTick_35 = value;
	}

	inline static int32_t get_offset_of__isPaused_36() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____isPaused_36)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get__isPaused_36() const { return ____isPaused_36; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of__isPaused_36() { return &____isPaused_36; }
	inline void set__isPaused_36(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		____isPaused_36 = value;
	}

	inline static int32_t get_offset_of__aoi_37() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____aoi_37)); }
	inline AreaOfInterest_t4C219B8713BC38397A833ACBB3DA974E766A95C9 * get__aoi_37() const { return ____aoi_37; }
	inline AreaOfInterest_t4C219B8713BC38397A833ACBB3DA974E766A95C9 ** get_address_of__aoi_37() { return &____aoi_37; }
	inline void set__aoi_37(AreaOfInterest_t4C219B8713BC38397A833ACBB3DA974E766A95C9 * value)
	{
		____aoi_37 = value;
	}

	inline static int32_t get_offset_of__tickUpdateTimes_38() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____tickUpdateTimes_38)); }
	inline Dictionary_2_tF9686A4EAE0F22B7DC2A8602CA7205D138B918DA * get__tickUpdateTimes_38() const { return ____tickUpdateTimes_38; }
	inline Dictionary_2_tF9686A4EAE0F22B7DC2A8602CA7205D138B918DA ** get_address_of__tickUpdateTimes_38() { return &____tickUpdateTimes_38; }
	inline void set__tickUpdateTimes_38(Dictionary_2_tF9686A4EAE0F22B7DC2A8602CA7205D138B918DA * value)
	{
		____tickUpdateTimes_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tickUpdateTimes_38), (void*)value);
	}

	inline static int32_t get_offset_of__globalInterestObjects_39() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____globalInterestObjects_39)); }
	inline List_1_t978D8CB5C20561D7917E293D7BF6CBD2C0B7AEF9 * get__globalInterestObjects_39() const { return ____globalInterestObjects_39; }
	inline List_1_t978D8CB5C20561D7917E293D7BF6CBD2C0B7AEF9 ** get_address_of__globalInterestObjects_39() { return &____globalInterestObjects_39; }
	inline void set__globalInterestObjects_39(List_1_t978D8CB5C20561D7917E293D7BF6CBD2C0B7AEF9 * value)
	{
		____globalInterestObjects_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____globalInterestObjects_39), (void*)value);
	}

	inline static int32_t get_offset_of__netSocket_42() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____netSocket_42)); }
	inline RuntimeObject* get__netSocket_42() const { return ____netSocket_42; }
	inline RuntimeObject** get_address_of__netSocket_42() { return &____netSocket_42; }
	inline void set__netSocket_42(RuntimeObject* value)
	{
		____netSocket_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____netSocket_42), (void*)value);
	}

	inline static int32_t get_offset_of__netPeer_43() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____netPeer_43)); }
	inline NetPeer_t4420DF415F9495FCCAE1E2D9EEEDEE43C2823302 * get__netPeer_43() const { return ____netPeer_43; }
	inline NetPeer_t4420DF415F9495FCCAE1E2D9EEEDEE43C2823302 ** get_address_of__netPeer_43() { return &____netPeer_43; }
	inline void set__netPeer_43(NetPeer_t4420DF415F9495FCCAE1E2D9EEEDEE43C2823302 * value)
	{
		____netPeer_43 = value;
	}

	inline static int32_t get_offset_of__netPeerGroup_44() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____netPeerGroup_44)); }
	inline NetPeerGroup_t03A68F0759815C44704F61CA0C3EA90F6E92257F * get__netPeerGroup_44() const { return ____netPeerGroup_44; }
	inline NetPeerGroup_t03A68F0759815C44704F61CA0C3EA90F6E92257F ** get_address_of__netPeerGroup_44() { return &____netPeerGroup_44; }
	inline void set__netPeerGroup_44(NetPeerGroup_t03A68F0759815C44704F61CA0C3EA90F6E92257F * value)
	{
		____netPeerGroup_44 = value;
	}

	inline static int32_t get_offset_of__netPeerRng_45() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ____netPeerRng_45)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get__netPeerRng_45() const { return ____netPeerRng_45; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of__netPeerRng_45() { return &____netPeerRng_45; }
	inline void set__netPeerRng_45(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		____netPeerRng_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____netPeerRng_45), (void*)value);
	}

	inline static int32_t get_offset_of_Stats_46() { return static_cast<int32_t>(offsetof(Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571, ___Stats_46)); }
	inline Statistics_t5670EBCAD50A6E50FFCF51014921C44EF1CC1F58 * get_Stats_46() const { return ___Stats_46; }
	inline Statistics_t5670EBCAD50A6E50FFCF51014921C44EF1CC1F58 ** get_address_of_Stats_46() { return &___Stats_46; }
	inline void set_Stats_46(Statistics_t5670EBCAD50A6E50FFCF51014921C44EF1CC1F58 * value)
	{
		___Stats_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Stats_46), (void*)value);
	}
};


// System.Action`1<System.Exception>
struct Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// Fusion.Simulation/Client
struct Client_tF782E238FC21B86F0B292479E85CF5D2D28D347D  : public Simulation_t6E5CF48ED757B1C1B28F6EED55B79C871C8B6571
{
public:
	// Fusion.PlayerRef Fusion.Simulation/Client::_player
	PlayerRef_t44D2437F3BB86845A74B2CE59D34F33B5735FA51  ____player_47;
	// Fusion.Sockets.NetConnection* Fusion.Simulation/Client::_server
	NetConnection_t0CB38050A3F8A4EE2D731CB1098A18A83A61E056 * ____server_48;
	// System.Boolean Fusion.Simulation/Client::_stateReceived
	bool ____stateReceived_49;
	// System.Boolean Fusion.Simulation/Client::_forceClientPredictionReset
	bool ____forceClientPredictionReset_50;
	// Fusion.SimulationInput/Buffer Fusion.Simulation/Client::_inputBuffer
	Buffer_t60D2BA7C2FA66FCE20303E772B41E8CD6DCE1749 * ____inputBuffer_51;
	// Fusion.SimulationInput[] Fusion.Simulation/Client::_inputArray
	SimulationInputU5BU5D_tB07239ADF436F5DAB1B48F7FF572BD46869D488B* ____inputArray_52;
	// System.Double Fusion.Simulation/Client::_inputOffsetTarget
	double ____inputOffsetTarget_53;
	// System.Double Fusion.Simulation/Client::_inputLastAdjustment
	double ____inputLastAdjustment_54;
	// Fusion.Timer Fusion.Simulation/Client::_inputAdjustClock
	Timer_tD2FA8DCC6B9BFD4AA222C333F8CD453814A0CDB9  ____inputAdjustClock_55;
	// System.Collections.Generic.List`1<Fusion.SimulationPlayer/AOIQuery> Fusion.Simulation/Client::_aoiQueries
	List_1_tB8C252BD9775FCD3A335245D8C4C7F3863F85B46 * ____aoiQueries_56;
	// Fusion.SimulationSnapshot/Interpolator Fusion.Simulation/Client::_interpolator
	Interpolator_tF7FC72931EAD94B42D9515B6E9FB73E868410B87 * ____interpolator_57;
	// System.Collections.Generic.Queue`1<System.ValueTuple`2<Fusion.PlayerRef,System.Boolean>> Fusion.Simulation/Client::_playerJoinedLeftMessages
	Queue_1_t88F50430CEFDAD434AC7E3A380D0913F22E8DC2C * ____playerJoinedLeftMessages_58;

public:
	inline static int32_t get_offset_of__player_47() { return static_cast<int32_t>(offsetof(Client_tF782E238FC21B86F0B292479E85CF5D2D28D347D, ____player_47)); }
	inline PlayerRef_t44D2437F3BB86845A74B2CE59D34F33B5735FA51  get__player_47() const { return ____player_47; }
	inline PlayerRef_t44D2437F3BB86845A74B2CE59D34F33B5735FA51 * get_address_of__player_47() { return &____player_47; }
	inline void set__player_47(PlayerRef_t44D2437F3BB86845A74B2CE59D34F33B5735FA51  value)
	{
		____player_47 = value;
	}

	inline static int32_t get_offset_of__server_48() { return static_cast<int32_t>(offsetof(Client_tF782E238FC21B86F0B292479E85CF5D2D28D347D, ____server_48)); }
	inline NetConnection_t0CB38050A3F8A4EE2D731CB1098A18A83A61E056 * get__server_48() const { return ____server_48; }
	inline NetConnection_t0CB38050A3F8A4EE2D731CB1098A18A83A61E056 ** get_address_of__server_48() { return &____server_48; }
	inline void set__server_48(NetConnection_t0CB38050A3F8A4EE2D731CB1098A18A83A61E056 * value)
	{
		____server_48 = value;
	}

	inline static int32_t get_offset_of__stateReceived_49() { return static_cast<int32_t>(offsetof(Client_tF782E238FC21B86F0B292479E85CF5D2D28D347D, ____stateReceived_49)); }
	inline bool get__stateReceived_49() const { return ____stateReceived_49; }
	inline bool* get_address_of__stateReceived_49() { return &____stateReceived_49; }
	inline void set__stateReceived_49(bool value)
	{
		____stateReceived_49 = value;
	}

	inline static int32_t get_offset_of__forceClientPredictionReset_50() { return static_cast<int32_t>(offsetof(Client_tF782E238FC21B86F0B292479E85CF5D2D28D347D, ____forceClientPredictionReset_50)); }
	inline bool get__forceClientPredictionReset_50() const { return ____forceClientPredictionReset_50; }
	inline bool* get_address_of__forceClientPredictionReset_50() { return &____forceClientPredictionReset_50; }
	inline void set__forceClientPredictionReset_50(bool value)
	{
		____forceClientPredictionReset_50 = value;
	}

	inline static int32_t get_offset_of__inputBuffer_51() { return static_cast<int32_t>(offsetof(Client_tF782E238FC21B86F0B292479E85CF5D2D28D347D, ____inputBuffer_51)); }
	inline Buffer_t60D2BA7C2FA66FCE20303E772B41E8CD6DCE1749 * get__inputBuffer_51() const { return ____inputBuffer_51; }
	inline Buffer_t60D2BA7C2FA66FCE20303E772B41E8CD6DCE1749 ** get_address_of__inputBuffer_51() { return &____inputBuffer_51; }
	inline void set__inputBuffer_51(Buffer_t60D2BA7C2FA66FCE20303E772B41E8CD6DCE1749 * value)
	{
		____inputBuffer_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____inputBuffer_51), (void*)value);
	}

	inline static int32_t get_offset_of__inputArray_52() { return static_cast<int32_t>(offsetof(Client_tF782E238FC21B86F0B292479E85CF5D2D28D347D, ____inputArray_52)); }
	inline SimulationInputU5BU5D_tB07239ADF436F5DAB1B48F7FF572BD46869D488B* get__inputArray_52() const { return ____inputArray_52; }
	inline SimulationInputU5BU5D_tB07239ADF436F5DAB1B48F7FF572BD46869D488B** get_address_of__inputArray_52() { return &____inputArray_52; }
	inline void set__inputArray_52(SimulationInputU5BU5D_tB07239ADF436F5DAB1B48F7FF572BD46869D488B* value)
	{
		____inputArray_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____inputArray_52), (void*)value);
	}

	inline static int32_t get_offset_of__inputOffsetTarget_53() { return static_cast<int32_t>(offsetof(Client_tF782E238FC21B86F0B292479E85CF5D2D28D347D, ____inputOffsetTarget_53)); }
	inline double get__inputOffsetTarget_53() const { return ____inputOffsetTarget_53; }
	inline double* get_address_of__inputOffsetTarget_53() { return &____inputOffsetTarget_53; }
	inline void set__inputOffsetTarget_53(double value)
	{
		____inputOffsetTarget_53 = value;
	}

	inline static int32_t get_offset_of__inputLastAdjustment_54() { return static_cast<int32_t>(offsetof(Client_tF782E238FC21B86F0B292479E85CF5D2D28D347D, ____inputLastAdjustment_54)); }
	inline double get__inputLastAdjustment_54() const { return ____inputLastAdjustment_54; }
	inline double* get_address_of__inputLastAdjustment_54() { return &____inputLastAdjustment_54; }
	inline void set__inputLastAdjustment_54(double value)
	{
		____inputLastAdjustment_54 = value;
	}

	inline static int32_t get_offset_of__inputAdjustClock_55() { return static_cast<int32_t>(offsetof(Client_tF782E238FC21B86F0B292479E85CF5D2D28D347D, ____inputAdjustClock_55)); }
	inline Timer_tD2FA8DCC6B9BFD4AA222C333F8CD453814A0CDB9  get__inputAdjustClock_55() const { return ____inputAdjustClock_55; }
	inline Timer_tD2FA8DCC6B9BFD4AA222C333F8CD453814A0CDB9 * get_address_of__inputAdjustClock_55() { return &____inputAdjustClock_55; }
	inline void set__inputAdjustClock_55(Timer_tD2FA8DCC6B9BFD4AA222C333F8CD453814A0CDB9  value)
	{
		____inputAdjustClock_55 = value;
	}

	inline static int32_t get_offset_of__aoiQueries_56() { return static_cast<int32_t>(offsetof(Client_tF782E238FC21B86F0B292479E85CF5D2D28D347D, ____aoiQueries_56)); }
	inline List_1_tB8C252BD9775FCD3A335245D8C4C7F3863F85B46 * get__aoiQueries_56() const { return ____aoiQueries_56; }
	inline List_1_tB8C252BD9775FCD3A335245D8C4C7F3863F85B46 ** get_address_of__aoiQueries_56() { return &____aoiQueries_56; }
	inline void set__aoiQueries_56(List_1_tB8C252BD9775FCD3A335245D8C4C7F3863F85B46 * value)
	{
		____aoiQueries_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____aoiQueries_56), (void*)value);
	}

	inline static int32_t get_offset_of__interpolator_57() { return static_cast<int32_t>(offsetof(Client_tF782E238FC21B86F0B292479E85CF5D2D28D347D, ____interpolator_57)); }
	inline Interpolator_tF7FC72931EAD94B42D9515B6E9FB73E868410B87 * get__interpolator_57() const { return ____interpolator_57; }
	inline Interpolator_tF7FC72931EAD94B42D9515B6E9FB73E868410B87 ** get_address_of__interpolator_57() { return &____interpolator_57; }
	inline void set__interpolator_57(Interpolator_tF7FC72931EAD94B42D9515B6E9FB73E868410B87 * value)
	{
		____interpolator_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interpolator_57), (void*)value);
	}

	inline static int32_t get_offset_of__playerJoinedLeftMessages_58() { return static_cast<int32_t>(offsetof(Client_tF782E238FC21B86F0B292479E85CF5D2D28D347D, ____playerJoinedLeftMessages_58)); }
	inline Queue_1_t88F50430CEFDAD434AC7E3A380D0913F22E8DC2C * get__playerJoinedLeftMessages_58() const { return ____playerJoinedLeftMessages_58; }
	inline Queue_1_t88F50430CEFDAD434AC7E3A380D0913F22E8DC2C ** get_address_of__playerJoinedLeftMessages_58() { return &____playerJoinedLeftMessages_58; }
	inline void set__playerJoinedLeftMessages_58(Queue_1_t88F50430CEFDAD434AC7E3A380D0913F22E8DC2C * value)
	{
		____playerJoinedLeftMessages_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playerJoinedLeftMessages_58), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// Fusion.NetworkArray`1<T> Fusion.NetworkArray`1<System.Object>::Remap(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC  NetworkArray_1_Remap_m5FFE38C0E91975A07820EDE53A685788DD5E0FDC_gshared (NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC * __this, void* ___array0, const RuntimeMethod* method);
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetArray<System.Object>(Fusion.NetworkArray`1<T>,Fusion.NetworkArray`1<T>&,Fusion.NetworkArray`1<T>&,System.Single&,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInterpolator_TryGetArray_TisRuntimeObject_mA8B93EE6A326A64A34F114F2BDAE38CBA2E4DC57_gshared (RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C * __this, NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC  ___base0, NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC * ___from1, NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC * ___to2, float* ___alpha3, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___force4, const RuntimeMethod* method);
// Fusion.NetworkDictionary`2<K,V> Fusion.NetworkDictionary`2<System.Object,System.Object>::Remap(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5  NetworkDictionary_2_Remap_mAA07C47039EEC2117BFDC632DD7B8CE4344E417E_gshared (NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 * __this, void* ___dictionary0, const RuntimeMethod* method);
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetDictionary<System.Object,System.Object>(Fusion.NetworkDictionary`2<K,V>,Fusion.NetworkDictionary`2<K,V>&,Fusion.NetworkDictionary`2<K,V>&,System.Single&,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInterpolator_TryGetDictionary_TisRuntimeObject_TisRuntimeObject_m1A5404C16CA64AA0063938E40B44F4BCF8123431_gshared (RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C * __this, NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5  ___base0, NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 * ___from1, NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 * ___to2, float* ___alpha3, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___force4, const RuntimeMethod* method);
// Fusion.NetworkLinkedList`1<T> Fusion.NetworkLinkedList`1<System.Object>::Remap(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2  NetworkLinkedList_1_Remap_m55A89840F6E80CD4A520DE3EBE595454FAA56BCF_gshared (NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 * __this, void* ___list0, const RuntimeMethod* method);
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetLinkedList<System.Object>(Fusion.NetworkLinkedList`1<T>,Fusion.NetworkLinkedList`1<T>&,Fusion.NetworkLinkedList`1<T>&,System.Single&,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInterpolator_TryGetLinkedList_TisRuntimeObject_m9D1C142287BB7D84C656C4C71D1D47CE5FDCECF7_gshared (RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C * __this, NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2  ___base0, NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 * ___from1, NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 * ___to2, float* ___alpha3, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___force4, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m8B94FD6845DD5E109FD96BB1B9A2C11FA7512460_gshared_inline (Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Double>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Nullable_1_get_Value_mD7DA8CBE0FC157C75F0AA3FC81B59E278B11CD1A_gshared (Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);

// System.Void System.Action`1<System.Exception>::Invoke(!0)
inline void Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * __this, Exception_t * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *, Exception_t *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3 (String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void Fusion.SimulationMessage::Fusion.ILogBuilder.BuildLogMessage(System.Text.StringBuilder,System.String,Fusion.LogOptions& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationMessage_Fusion_ILogBuilder_BuildLogMessage_m2A8F0C87DCF3579066E584852DAC8E513D60AC84 (SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00 * __this, StringBuilder_t * ___builder0, String_t* ___message1, LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA * ___options2, const RuntimeMethod* method);
// System.Void Fusion.Log/DefaultContext::Fusion.ILogBuilder.BuildLogMessage(System.Text.StringBuilder,System.String,Fusion.LogOptions& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultContext_Fusion_ILogBuilder_BuildLogMessage_mF985A8C0223FE66F43129C8AC1ACF74190D87F1B (DefaultContext_t5C63A5EFF790D2AC6B6E9FB8D5A2F2611A903A36 * __this, StringBuilder_t * ___builder0, String_t* ___message1, LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA * ___options2, const RuntimeMethod* method);
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetValues(System.Void*&,System.Void*&,System.Single&,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInterpolator_TryGetValues_m9F731677A1FA220EC0B51597A5CE6A1C51A3E68E (RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C * __this, void** ___from0, void** ___to1, float* ___alpha2, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___force3, const RuntimeMethod* method);
// Fusion.NetworkArray`1<T> Fusion.NetworkArray`1<System.Object>::Remap(System.Void*)
inline NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC  NetworkArray_1_Remap_m5FFE38C0E91975A07820EDE53A685788DD5E0FDC (NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC * __this, void* ___array0, const RuntimeMethod* method)
{
	return ((  NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC  (*) (NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC *, void*, const RuntimeMethod*))NetworkArray_1_Remap_m5FFE38C0E91975A07820EDE53A685788DD5E0FDC_gshared)(__this, ___array0, method);
}
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetArray<System.Object>(Fusion.NetworkArray`1<T>,Fusion.NetworkArray`1<T>&,Fusion.NetworkArray`1<T>&,System.Single&,System.Nullable`1<System.Boolean>)
inline bool RawInterpolator_TryGetArray_TisRuntimeObject_mA8B93EE6A326A64A34F114F2BDAE38CBA2E4DC57 (RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C * __this, NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC  ___base0, NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC * ___from1, NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC * ___to2, float* ___alpha3, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___force4, const RuntimeMethod* method)
{
	return ((  bool (*) (RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C *, NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC , NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC *, NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC *, float*, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 , const RuntimeMethod*))RawInterpolator_TryGetArray_TisRuntimeObject_mA8B93EE6A326A64A34F114F2BDAE38CBA2E4DC57_gshared)(__this, ___base0, ___from1, ___to2, ___alpha3, ___force4, method);
}
// Fusion.NetworkDictionary`2<K,V> Fusion.NetworkDictionary`2<System.Object,System.Object>::Remap(System.Void*)
inline NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5  NetworkDictionary_2_Remap_mAA07C47039EEC2117BFDC632DD7B8CE4344E417E (NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 * __this, void* ___dictionary0, const RuntimeMethod* method)
{
	return ((  NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5  (*) (NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 *, void*, const RuntimeMethod*))NetworkDictionary_2_Remap_mAA07C47039EEC2117BFDC632DD7B8CE4344E417E_gshared)(__this, ___dictionary0, method);
}
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetDictionary<System.Object,System.Object>(Fusion.NetworkDictionary`2<K,V>,Fusion.NetworkDictionary`2<K,V>&,Fusion.NetworkDictionary`2<K,V>&,System.Single&,System.Nullable`1<System.Boolean>)
inline bool RawInterpolator_TryGetDictionary_TisRuntimeObject_TisRuntimeObject_m1A5404C16CA64AA0063938E40B44F4BCF8123431 (RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C * __this, NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5  ___base0, NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 * ___from1, NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 * ___to2, float* ___alpha3, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___force4, const RuntimeMethod* method)
{
	return ((  bool (*) (RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C *, NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 , NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 *, NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 *, float*, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 , const RuntimeMethod*))RawInterpolator_TryGetDictionary_TisRuntimeObject_TisRuntimeObject_m1A5404C16CA64AA0063938E40B44F4BCF8123431_gshared)(__this, ___base0, ___from1, ___to2, ___alpha3, ___force4, method);
}
// Fusion.NetworkLinkedList`1<T> Fusion.NetworkLinkedList`1<System.Object>::Remap(System.Void*)
inline NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2  NetworkLinkedList_1_Remap_m55A89840F6E80CD4A520DE3EBE595454FAA56BCF (NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 * __this, void* ___list0, const RuntimeMethod* method)
{
	return ((  NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2  (*) (NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 *, void*, const RuntimeMethod*))NetworkLinkedList_1_Remap_m55A89840F6E80CD4A520DE3EBE595454FAA56BCF_gshared)(__this, ___list0, method);
}
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetLinkedList<System.Object>(Fusion.NetworkLinkedList`1<T>,Fusion.NetworkLinkedList`1<T>&,Fusion.NetworkLinkedList`1<T>&,System.Single&,System.Nullable`1<System.Boolean>)
inline bool RawInterpolator_TryGetLinkedList_TisRuntimeObject_m9D1C142287BB7D84C656C4C71D1D47CE5FDCECF7 (RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C * __this, NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2  ___base0, NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 * ___from1, NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 * ___to2, float* ___alpha3, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___force4, const RuntimeMethod* method)
{
	return ((  bool (*) (RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C *, NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 , NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 *, NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 *, float*, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 , const RuntimeMethod*))RawInterpolator_TryGetLinkedList_TisRuntimeObject_m9D1C142287BB7D84C656C4C71D1D47CE5FDCECF7_gshared)(__this, ___base0, ___from1, ___to2, ___alpha3, ___force4, method);
}
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
inline bool Nullable_1_get_HasValue_m8B94FD6845DD5E109FD96BB1B9A2C11FA7512460_inline (Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 *, const RuntimeMethod*))Nullable_1_get_HasValue_m8B94FD6845DD5E109FD96BB1B9A2C11FA7512460_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Double>::get_Value()
inline double Nullable_1_get_Value_mD7DA8CBE0FC157C75F0AA3FC81B59E278B11CD1A (Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 *, const RuntimeMethod*))Nullable_1_get_Value_mD7DA8CBE0FC157C75F0AA3FC81B59E278B11CD1A_gshared)(__this, method);
}
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D (double* __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void Fusion.Log/LegacyLogger::LogException<System.Object>(System.String,T&,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_LogException_TisRuntimeObject_m8F73F2B37C1DA98EA9E922B41B268E58671A25C8_gshared (LegacyLogger_t7F5262B70C2C475176C5608597EDA127E03E257F * __this, String_t* ___prefix0, RuntimeObject ** ___context1, Exception_t * ___ex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * G_B2_0 = NULL;
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * G_B1_0 = NULL;
	{
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_0 = (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *)__this->get_Exception_4();
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_1 = (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0014;
	}

IL_000d:
	{
		Exception_t * L_2 = ___ex2;
		Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C((Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *)G_B2_0, (Exception_t *)L_2, /*hidden argument*/Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C_RuntimeMethod_var);
	}

IL_0014:
	{
		return;
	}
}
// System.Void Fusion.Log/LegacyLogger::LogException<Fusion.Log/DefaultContext>(System.String,T&,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_LogException_TisDefaultContext_t5C63A5EFF790D2AC6B6E9FB8D5A2F2611A903A36_m0060A0A2156491EBEA7F3A0402AF6079E0DA54C9_gshared (LegacyLogger_t7F5262B70C2C475176C5608597EDA127E03E257F * __this, String_t* ___prefix0, DefaultContext_t5C63A5EFF790D2AC6B6E9FB8D5A2F2611A903A36 * ___context1, Exception_t * ___ex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * G_B2_0 = NULL;
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * G_B1_0 = NULL;
	{
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_0 = (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *)__this->get_Exception_4();
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_1 = (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0014;
	}

IL_000d:
	{
		Exception_t * L_2 = ___ex2;
		Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C((Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *)G_B2_0, (Exception_t *)L_2, /*hidden argument*/Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C_RuntimeMethod_var);
	}

IL_0014:
	{
		return;
	}
}
// System.Void Fusion.Log/LegacyLogger::NewMethod<Fusion.LogBuilderUtils/CombinedLogBuilder_Value_Ptr`2<System.Object,Fusion.SimulationMessage>>(System.String,T&,System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_NewMethod_TisCombinedLogBuilder_Value_Ptr_2_tC7DE2C34BACD8021DEB8D3DEE53B8C4A88F50457_mB8A1D7EA1A0A8807D08B685B9325C810D77637ED_gshared (LegacyLogger_t7F5262B70C2C475176C5608597EDA127E03E257F * __this, String_t* ___prefix0, CombinedLogBuilder_Value_Ptr_2_tC7DE2C34BACD8021DEB8D3DEE53B8C4A88F50457 * ___loggable1, String_t* ___message2, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___handler3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogBuilder_tE51E858F52A2324C7776A35BD5DD2DDDAD20269E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ___handler3;
		V_0 = (bool)((((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0080;
	}

IL_000d:
	{
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_2 = ___prefix0;
			bool L_3;
			L_3 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3((String_t*)L_2, /*hidden argument*/NULL);
			V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_003c;
			}
		}

IL_001c:
		{
			StringBuilder_t * L_5 = (StringBuilder_t *)__this->get__builder_0();
			String_t* L_6 = ___prefix0;
			StringBuilder_t * L_7;
			L_7 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_5, (String_t*)L_6, /*hidden argument*/NULL);
			StringBuilder_t * L_8 = (StringBuilder_t *)__this->get__builder_0();
			StringBuilder_t * L_9;
			L_9 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155, /*hidden argument*/NULL);
		}

IL_003c:
		{
			CombinedLogBuilder_Value_Ptr_2_tC7DE2C34BACD8021DEB8D3DEE53B8C4A88F50457 * L_10 = ___loggable1;
			StringBuilder_t * L_11 = (StringBuilder_t *)__this->get__builder_0();
			String_t* L_12 = ___message2;
			LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA * L_13 = (LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA *)(&V_3);
			il2cpp_codegen_initobj(L_13, sizeof(LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA ));
			Il2CppMetadataObject L_14(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__83 = il2cpp_codegen_get_interface_invoke_data(0, (&L_14), ILogBuilder_tE51E858F52A2324C7776A35BD5DD2DDDAD20269E_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, StringBuilder_t *, String_t*, LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA *, const RuntimeMethod*))il2cpp_virtual_invoke_data__83.methodPtr)((RuntimeObject*)((RuntimeObject*)L_10)-1, (StringBuilder_t *)L_11, (String_t*)L_12, (LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA *)L_13, /*hidden argument*/il2cpp_virtual_invoke_data__83.method);
			StringBuilder_t * L_15 = (StringBuilder_t *)__this->get__builder_0();
			String_t* L_16;
			L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_15);
			V_1 = (String_t*)L_16;
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_17 = ___handler3;
			String_t* L_18 = V_1;
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_17, (String_t*)L_18, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
			IL2CPP_LEAVE(0x80, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		StringBuilder_t * L_19 = (StringBuilder_t *)__this->get__builder_0();
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1((StringBuilder_t *)L_19, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(113)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x80, IL_0080)
	}

IL_0080:
	{
		return;
	}
}
// System.Void Fusion.Log/LegacyLogger::NewMethod<System.Object>(System.String,T&,System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_NewMethod_TisRuntimeObject_m4BA71177BB1D6738649CBC79A4333216D0F45497_gshared (LegacyLogger_t7F5262B70C2C475176C5608597EDA127E03E257F * __this, String_t* ___prefix0, RuntimeObject ** ___loggable1, String_t* ___message2, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___handler3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogBuilder_tE51E858F52A2324C7776A35BD5DD2DDDAD20269E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ___handler3;
		V_0 = (bool)((((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0080;
	}

IL_000d:
	{
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_2 = ___prefix0;
			bool L_3;
			L_3 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3((String_t*)L_2, /*hidden argument*/NULL);
			V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_003c;
			}
		}

IL_001c:
		{
			StringBuilder_t * L_5 = (StringBuilder_t *)__this->get__builder_0();
			String_t* L_6 = ___prefix0;
			StringBuilder_t * L_7;
			L_7 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_5, (String_t*)L_6, /*hidden argument*/NULL);
			StringBuilder_t * L_8 = (StringBuilder_t *)__this->get__builder_0();
			StringBuilder_t * L_9;
			L_9 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155, /*hidden argument*/NULL);
		}

IL_003c:
		{
			RuntimeObject ** L_10 = ___loggable1;
			StringBuilder_t * L_11 = (StringBuilder_t *)__this->get__builder_0();
			String_t* L_12 = ___message2;
			LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA * L_13 = (LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA *)(&V_3);
			il2cpp_codegen_initobj(L_13, sizeof(LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA ));
			InterfaceActionInvoker3< StringBuilder_t *, String_t*, LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA * >::Invoke(0 /* System.Void Fusion.ILogBuilder::BuildLogMessage(System.Text.StringBuilder,System.String,Fusion.LogOptions& modreq(System.Runtime.InteropServices.InAttribute)) */, ILogBuilder_tE51E858F52A2324C7776A35BD5DD2DDDAD20269E_il2cpp_TypeInfo_var, (RuntimeObject*)(*L_10), (StringBuilder_t *)L_11, (String_t*)L_12, (LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA *)L_13);
			StringBuilder_t * L_14 = (StringBuilder_t *)__this->get__builder_0();
			String_t* L_15;
			L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_14);
			V_1 = (String_t*)L_15;
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_16 = ___handler3;
			String_t* L_17 = V_1;
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_16, (String_t*)L_17, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
			IL2CPP_LEAVE(0x80, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		StringBuilder_t * L_18 = (StringBuilder_t *)__this->get__builder_0();
		StringBuilder_t * L_19;
		L_19 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1((StringBuilder_t *)L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(113)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x80, IL_0080)
	}

IL_0080:
	{
		return;
	}
}
// System.Void Fusion.Log/LegacyLogger::NewMethod<Fusion.SimulationMessage>(System.String,T&,System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_NewMethod_TisSimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00_mC93347E7FCA9B56AAB219163B4154402A8B50C8E_gshared (LegacyLogger_t7F5262B70C2C475176C5608597EDA127E03E257F * __this, String_t* ___prefix0, SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00 * ___loggable1, String_t* ___message2, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___handler3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ___handler3;
		V_0 = (bool)((((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0080;
	}

IL_000d:
	{
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_2 = ___prefix0;
			bool L_3;
			L_3 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3((String_t*)L_2, /*hidden argument*/NULL);
			V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_003c;
			}
		}

IL_001c:
		{
			StringBuilder_t * L_5 = (StringBuilder_t *)__this->get__builder_0();
			String_t* L_6 = ___prefix0;
			StringBuilder_t * L_7;
			L_7 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_5, (String_t*)L_6, /*hidden argument*/NULL);
			StringBuilder_t * L_8 = (StringBuilder_t *)__this->get__builder_0();
			StringBuilder_t * L_9;
			L_9 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155, /*hidden argument*/NULL);
		}

IL_003c:
		{
			SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00 * L_10 = ___loggable1;
			StringBuilder_t * L_11 = (StringBuilder_t *)__this->get__builder_0();
			String_t* L_12 = ___message2;
			LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA * L_13 = (LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA *)(&V_3);
			il2cpp_codegen_initobj(L_13, sizeof(LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA ));
			SimulationMessage_Fusion_ILogBuilder_BuildLogMessage_m2A8F0C87DCF3579066E584852DAC8E513D60AC84((SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00 *)(SimulationMessage_t81A177498E028C9B2613FF0FC136051D00E2BA00 *)L_10, (StringBuilder_t *)L_11, (String_t*)L_12, (LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA *)L_13, /*hidden argument*/NULL);
			StringBuilder_t * L_14 = (StringBuilder_t *)__this->get__builder_0();
			String_t* L_15;
			L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_14);
			V_1 = (String_t*)L_15;
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_16 = ___handler3;
			String_t* L_17 = V_1;
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_16, (String_t*)L_17, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
			IL2CPP_LEAVE(0x80, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		StringBuilder_t * L_18 = (StringBuilder_t *)__this->get__builder_0();
		StringBuilder_t * L_19;
		L_19 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1((StringBuilder_t *)L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(113)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x80, IL_0080)
	}

IL_0080:
	{
		return;
	}
}
// System.Void Fusion.Log/LegacyLogger::NewMethod<Fusion.Log/DefaultContext>(System.String,T&,System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLogger_NewMethod_TisDefaultContext_t5C63A5EFF790D2AC6B6E9FB8D5A2F2611A903A36_mDD56A565C1F6B59C88FC568D47921A949EF90985_gshared (LegacyLogger_t7F5262B70C2C475176C5608597EDA127E03E257F * __this, String_t* ___prefix0, DefaultContext_t5C63A5EFF790D2AC6B6E9FB8D5A2F2611A903A36 * ___loggable1, String_t* ___message2, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___handler3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ___handler3;
		V_0 = (bool)((((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0080;
	}

IL_000d:
	{
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_2 = ___prefix0;
			bool L_3;
			L_3 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3((String_t*)L_2, /*hidden argument*/NULL);
			V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_003c;
			}
		}

IL_001c:
		{
			StringBuilder_t * L_5 = (StringBuilder_t *)__this->get__builder_0();
			String_t* L_6 = ___prefix0;
			StringBuilder_t * L_7;
			L_7 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_5, (String_t*)L_6, /*hidden argument*/NULL);
			StringBuilder_t * L_8 = (StringBuilder_t *)__this->get__builder_0();
			StringBuilder_t * L_9;
			L_9 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155, /*hidden argument*/NULL);
		}

IL_003c:
		{
			DefaultContext_t5C63A5EFF790D2AC6B6E9FB8D5A2F2611A903A36 * L_10 = ___loggable1;
			StringBuilder_t * L_11 = (StringBuilder_t *)__this->get__builder_0();
			String_t* L_12 = ___message2;
			LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA * L_13 = (LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA *)(&V_3);
			il2cpp_codegen_initobj(L_13, sizeof(LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA ));
			DefaultContext_Fusion_ILogBuilder_BuildLogMessage_mF985A8C0223FE66F43129C8AC1ACF74190D87F1B((DefaultContext_t5C63A5EFF790D2AC6B6E9FB8D5A2F2611A903A36 *)(DefaultContext_t5C63A5EFF790D2AC6B6E9FB8D5A2F2611A903A36 *)L_10, (StringBuilder_t *)L_11, (String_t*)L_12, (LogOptions_tB21455A29E6A08F02ADDA86A980DF5DC7C04CEBA *)L_13, /*hidden argument*/NULL);
			StringBuilder_t * L_14 = (StringBuilder_t *)__this->get__builder_0();
			String_t* L_15;
			L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_14);
			V_1 = (String_t*)L_15;
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_16 = ___handler3;
			String_t* L_17 = V_1;
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_16, (String_t*)L_17, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
			IL2CPP_LEAVE(0x80, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		StringBuilder_t * L_18 = (StringBuilder_t *)__this->get__builder_0();
		StringBuilder_t * L_19;
		L_19 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1((StringBuilder_t *)L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(113)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x80, IL_0080)
	}

IL_0080:
	{
		return;
	}
}
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetArray<System.Object>(Fusion.NetworkArray`1<T>,Fusion.NetworkArray`1<T>&,Fusion.NetworkArray`1<T>&,System.Single&,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInterpolator_TryGetArray_TisRuntimeObject_mA8B93EE6A326A64A34F114F2BDAE38CBA2E4DC57_gshared (RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C * __this, NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC  ___base0, NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC * ___from1, NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC * ___to2, float* ___alpha3, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___force4, const RuntimeMethod* method)
{
	void* V_0 = NULL;
	void* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		float* L_0 = ___alpha3;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_1 = ___force4;
		bool L_2;
		L_2 = RawInterpolator_TryGetValues_m9F731677A1FA220EC0B51597A5CE6A1C51A3E68E((RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C *)(RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C *)__this, (void**)(void**)(&V_0), (void**)(void**)(&V_1), (float*)(float*)L_0, (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 )L_1, /*hidden argument*/NULL);
		V_2 = (bool)L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC * L_4 = ___from1;
		void* L_5 = V_0;
		NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC  L_6;
		L_6 = NetworkArray_1_Remap_m5FFE38C0E91975A07820EDE53A685788DD5E0FDC((NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC *)(NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC *)(&___base0), (void*)(void*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		*(NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC *)L_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC *)L_4)->____readerWriter_2), (void*)NULL);
		NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC * L_7 = ___to2;
		void* L_8 = V_1;
		NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC  L_9;
		L_9 = NetworkArray_1_Remap_m5FFE38C0E91975A07820EDE53A685788DD5E0FDC((NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC *)(NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC *)(&___base0), (void*)(void*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		*(NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC *)L_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC *)L_7)->____readerWriter_2), (void*)NULL);
		V_3 = (bool)1;
		goto IL_004e;
	}

IL_0034:
	{
		NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC * L_10 = ___from1;
		il2cpp_codegen_initobj(L_10, sizeof(NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC ));
		NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC * L_11 = ___to2;
		il2cpp_codegen_initobj(L_11, sizeof(NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC ));
		float* L_12 = ___alpha3;
		*((float*)L_12) = (float)(0.0f);
		V_3 = (bool)0;
		goto IL_004e;
	}

IL_004e:
	{
		bool L_13 = V_3;
		return (bool)L_13;
	}
}
IL2CPP_EXTERN_C  bool RawInterpolator_TryGetArray_TisRuntimeObject_mA8B93EE6A326A64A34F114F2BDAE38CBA2E4DC57_AdjustorThunk (RuntimeObject * __this, NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC  ___base0, NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC * ___from1, NetworkArray_1_t3478CC967F1B60AB3B3773641A40BD1DB8D334CC * ___to2, float* ___alpha3, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___force4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C * _thisAdjusted = reinterpret_cast<RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C *>(__this + _offset);
	bool _returnValue;
	_returnValue = RawInterpolator_TryGetArray_TisRuntimeObject_mA8B93EE6A326A64A34F114F2BDAE38CBA2E4DC57(_thisAdjusted, ___base0, ___from1, ___to2, ___alpha3, ___force4, method);
	return _returnValue;
}
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetDictionary<System.Object,System.Object>(Fusion.NetworkDictionary`2<K,V>,Fusion.NetworkDictionary`2<K,V>&,Fusion.NetworkDictionary`2<K,V>&,System.Single&,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInterpolator_TryGetDictionary_TisRuntimeObject_TisRuntimeObject_m1A5404C16CA64AA0063938E40B44F4BCF8123431_gshared (RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C * __this, NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5  ___base0, NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 * ___from1, NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 * ___to2, float* ___alpha3, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___force4, const RuntimeMethod* method)
{
	void* V_0 = NULL;
	void* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		float* L_0 = ___alpha3;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_1 = ___force4;
		bool L_2;
		L_2 = RawInterpolator_TryGetValues_m9F731677A1FA220EC0B51597A5CE6A1C51A3E68E((RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C *)(RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C *)__this, (void**)(void**)(&V_0), (void**)(void**)(&V_1), (float*)(float*)L_0, (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 )L_1, /*hidden argument*/NULL);
		V_2 = (bool)L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 * L_4 = ___from1;
		void* L_5 = V_0;
		NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5  L_6;
		L_6 = NetworkDictionary_2_Remap_mAA07C47039EEC2117BFDC632DD7B8CE4344E417E((NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 *)(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 *)(&___base0), (void*)(void*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		*(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 *)L_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 *)L_4)->____keyReaderWriter_13), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 *)L_4)->____valReaderWriter_14), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 *)L_4)->____equalityComparer_15), (void*)NULL);
		#endif
		NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 * L_7 = ___to2;
		void* L_8 = V_1;
		NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5  L_9;
		L_9 = NetworkDictionary_2_Remap_mAA07C47039EEC2117BFDC632DD7B8CE4344E417E((NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 *)(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 *)(&___base0), (void*)(void*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		*(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 *)L_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 *)L_7)->____keyReaderWriter_13), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 *)L_7)->____valReaderWriter_14), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 *)L_7)->____equalityComparer_15), (void*)NULL);
		#endif
		V_3 = (bool)1;
		goto IL_004e;
	}

IL_0034:
	{
		NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 * L_10 = ___from1;
		il2cpp_codegen_initobj(L_10, sizeof(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 ));
		NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 * L_11 = ___to2;
		il2cpp_codegen_initobj(L_11, sizeof(NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 ));
		float* L_12 = ___alpha3;
		*((float*)L_12) = (float)(0.0f);
		V_3 = (bool)0;
		goto IL_004e;
	}

IL_004e:
	{
		bool L_13 = V_3;
		return (bool)L_13;
	}
}
IL2CPP_EXTERN_C  bool RawInterpolator_TryGetDictionary_TisRuntimeObject_TisRuntimeObject_m1A5404C16CA64AA0063938E40B44F4BCF8123431_AdjustorThunk (RuntimeObject * __this, NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5  ___base0, NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 * ___from1, NetworkDictionary_2_t72FDB01FA654666A2EAC80F8F62D27C08F1730A5 * ___to2, float* ___alpha3, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___force4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C * _thisAdjusted = reinterpret_cast<RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C *>(__this + _offset);
	bool _returnValue;
	_returnValue = RawInterpolator_TryGetDictionary_TisRuntimeObject_TisRuntimeObject_m1A5404C16CA64AA0063938E40B44F4BCF8123431(_thisAdjusted, ___base0, ___from1, ___to2, ___alpha3, ___force4, method);
	return _returnValue;
}
// System.Boolean Fusion.NetworkBehaviour/RawInterpolator::TryGetLinkedList<System.Object>(Fusion.NetworkLinkedList`1<T>,Fusion.NetworkLinkedList`1<T>&,Fusion.NetworkLinkedList`1<T>&,System.Single&,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInterpolator_TryGetLinkedList_TisRuntimeObject_m9D1C142287BB7D84C656C4C71D1D47CE5FDCECF7_gshared (RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C * __this, NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2  ___base0, NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 * ___from1, NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 * ___to2, float* ___alpha3, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___force4, const RuntimeMethod* method)
{
	void* V_0 = NULL;
	void* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		float* L_0 = ___alpha3;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_1 = ___force4;
		bool L_2;
		L_2 = RawInterpolator_TryGetValues_m9F731677A1FA220EC0B51597A5CE6A1C51A3E68E((RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C *)(RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C *)__this, (void**)(void**)(&V_0), (void**)(void**)(&V_1), (float*)(float*)L_0, (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 )L_1, /*hidden argument*/NULL);
		V_2 = (bool)L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 * L_4 = ___from1;
		void* L_5 = V_0;
		NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2  L_6;
		L_6 = NetworkLinkedList_1_Remap_m55A89840F6E80CD4A520DE3EBE595454FAA56BCF((NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 *)(NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 *)(&___base0), (void*)(void*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		*(NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 *)L_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 *)L_4)->____rw_5), (void*)NULL);
		NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 * L_7 = ___to2;
		void* L_8 = V_1;
		NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2  L_9;
		L_9 = NetworkLinkedList_1_Remap_m55A89840F6E80CD4A520DE3EBE595454FAA56BCF((NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 *)(NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 *)(&___base0), (void*)(void*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		*(NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 *)L_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 *)L_7)->____rw_5), (void*)NULL);
		V_3 = (bool)1;
		goto IL_004e;
	}

IL_0034:
	{
		NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 * L_10 = ___from1;
		il2cpp_codegen_initobj(L_10, sizeof(NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 ));
		NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 * L_11 = ___to2;
		il2cpp_codegen_initobj(L_11, sizeof(NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 ));
		float* L_12 = ___alpha3;
		*((float*)L_12) = (float)(0.0f);
		V_3 = (bool)0;
		goto IL_004e;
	}

IL_004e:
	{
		bool L_13 = V_3;
		return (bool)L_13;
	}
}
IL2CPP_EXTERN_C  bool RawInterpolator_TryGetLinkedList_TisRuntimeObject_m9D1C142287BB7D84C656C4C71D1D47CE5FDCECF7_AdjustorThunk (RuntimeObject * __this, NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2  ___base0, NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 * ___from1, NetworkLinkedList_1_t898A4EBA1B5BA88EB97E5C3D4A068AE79D78DDA2 * ___to2, float* ___alpha3, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___force4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C * _thisAdjusted = reinterpret_cast<RawInterpolator_tCBA5A70A5373669F3ABF746747020C33D2F3C58C *>(__this + _offset);
	bool _returnValue;
	_returnValue = RawInterpolator_TryGetLinkedList_TisRuntimeObject_m9D1C142287BB7D84C656C4C71D1D47CE5FDCECF7(_thisAdjusted, ___base0, ___from1, ___to2, ___alpha3, ___force4, method);
	return _returnValue;
}
// System.String Fusion.Simulation/Client::NullableToString<System.Double>(System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Client_NullableToString_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m2FDD41893097ABCE81BDE3A15929C2C392D59392_gshared (Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	double V_1 = 0.0;
	String_t* V_2 = NULL;
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m8B94FD6845DD5E109FD96BB1B9A2C11FA7512460_inline((Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 *)(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 *)(&___value0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		double L_2;
		L_2 = Nullable_1_get_Value_mD7DA8CBE0FC157C75F0AA3FC81B59E278B11CD1A((Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 *)(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 *)(&___value0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (double)L_2;
		String_t* L_3;
		L_3 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(double*)(&V_1), /*hidden argument*/NULL);
		V_2 = (String_t*)L_3;
		goto IL_002d;
	}

IL_0025:
	{
		V_2 = (String_t*)_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		goto IL_002d;
	}

IL_002d:
	{
		String_t* L_4 = V_2;
		return (String_t*)L_4;
	}
}
// System.String Fusion.Simulation/Client::NullableToString<System.Int32>(System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Client_NullableToString_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m696B84C6EE12311F9C894112D31A6A5C86DFCC8F_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&___value0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2;
		L_2 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&___value0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (int32_t)L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = (String_t*)L_3;
		goto IL_002d;
	}

IL_0025:
	{
		V_2 = (String_t*)_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		goto IL_002d;
	}

IL_002d:
	{
		String_t* L_4 = V_2;
		return (String_t*)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m8B94FD6845DD5E109FD96BB1B9A2C11FA7512460_gshared_inline (Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
