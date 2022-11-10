#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct IReadOnlyDictionary_2_t72D108A371510A87097A1EAC94C2E67AEFC1EE1C;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct IReadOnlyDictionary_2_tCC588BD9FC49C62ED0FE74D76DFCBB9CB3AC0826;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct IReadOnlyDictionary_2_t0F50FEF148CE67FB3F747F56D9F50C84B1DC5531;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct IReadOnlyDictionary_2_t4571D1C30D93A7DDC080730ED16FE0F9C9E2E7D7;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct IReadOnlyList_1_t5D70A1E02F76C9D4D918AAB6B54337A9D6E3F812;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver
struct IMetricObserver_tE7C56283153031145DFA6FE40A0CCD84EEAA13E5;
// Unity.Multiplayer.Tools.NetStats.MetricCollection
struct MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E;
// Unity.Multiplayer.Tools.MetricObserver
struct MetricObserver_tCB49AB4A132CFE62F5F4E8489BEB287F90C7A030;
// Unity.Multiplayer.Tools.NoOpMetricObserver
struct NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0;

IL2CPP_EXTERN_C RuntimeClass* IMetricObserver_tE7C56283153031145DFA6FE40A0CCD84EEAA13E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricObserver_tCB49AB4A132CFE62F5F4E8489BEB287F90C7A030_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t236E9418C28A734B3992E3A0C41A993A7B9024EB 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Unity.Multiplayer.Tools.NetStats.MetricCollection
struct MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E  : public RuntimeObject
{
public:
	// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_Counters
	RuntimeObject* ___m_Counters_0;
	// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_Gauges
	RuntimeObject* ___m_Gauges_1;
	// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_Timers
	RuntimeObject* ___m_Timers_2;
	// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_PayloadEvents
	RuntimeObject* ___m_PayloadEvents_3;
	// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IMetric> Unity.Multiplayer.Tools.NetStats.MetricCollection::<Metrics>k__BackingField
	RuntimeObject* ___U3CMetricsU3Ek__BackingField_4;
	// System.UInt64 Unity.Multiplayer.Tools.NetStats.MetricCollection::<ConnectionId>k__BackingField
	uint64_t ___U3CConnectionIdU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_Counters_0() { return static_cast<int32_t>(offsetof(MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E, ___m_Counters_0)); }
	inline RuntimeObject* get_m_Counters_0() const { return ___m_Counters_0; }
	inline RuntimeObject** get_address_of_m_Counters_0() { return &___m_Counters_0; }
	inline void set_m_Counters_0(RuntimeObject* value)
	{
		___m_Counters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Counters_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Gauges_1() { return static_cast<int32_t>(offsetof(MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E, ___m_Gauges_1)); }
	inline RuntimeObject* get_m_Gauges_1() const { return ___m_Gauges_1; }
	inline RuntimeObject** get_address_of_m_Gauges_1() { return &___m_Gauges_1; }
	inline void set_m_Gauges_1(RuntimeObject* value)
	{
		___m_Gauges_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Gauges_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Timers_2() { return static_cast<int32_t>(offsetof(MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E, ___m_Timers_2)); }
	inline RuntimeObject* get_m_Timers_2() const { return ___m_Timers_2; }
	inline RuntimeObject** get_address_of_m_Timers_2() { return &___m_Timers_2; }
	inline void set_m_Timers_2(RuntimeObject* value)
	{
		___m_Timers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Timers_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PayloadEvents_3() { return static_cast<int32_t>(offsetof(MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E, ___m_PayloadEvents_3)); }
	inline RuntimeObject* get_m_PayloadEvents_3() const { return ___m_PayloadEvents_3; }
	inline RuntimeObject** get_address_of_m_PayloadEvents_3() { return &___m_PayloadEvents_3; }
	inline void set_m_PayloadEvents_3(RuntimeObject* value)
	{
		___m_PayloadEvents_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PayloadEvents_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMetricsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E, ___U3CMetricsU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CMetricsU3Ek__BackingField_4() const { return ___U3CMetricsU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CMetricsU3Ek__BackingField_4() { return &___U3CMetricsU3Ek__BackingField_4; }
	inline void set_U3CMetricsU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CMetricsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMetricsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectionIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E, ___U3CConnectionIdU3Ek__BackingField_5)); }
	inline uint64_t get_U3CConnectionIdU3Ek__BackingField_5() const { return ___U3CConnectionIdU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3CConnectionIdU3Ek__BackingField_5() { return &___U3CConnectionIdU3Ek__BackingField_5; }
	inline void set_U3CConnectionIdU3Ek__BackingField_5(uint64_t value)
	{
		___U3CConnectionIdU3Ek__BackingField_5 = value;
	}
};


// Unity.Multiplayer.Tools.MetricObserver
struct MetricObserver_tCB49AB4A132CFE62F5F4E8489BEB287F90C7A030  : public RuntimeObject
{
public:
	// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.MetricObserver::m_profilerMetricObserver
	RuntimeObject* ___m_profilerMetricObserver_0;
	// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.MetricObserver::m_rnsmMetricObserver
	RuntimeObject* ___m_rnsmMetricObserver_1;

public:
	inline static int32_t get_offset_of_m_profilerMetricObserver_0() { return static_cast<int32_t>(offsetof(MetricObserver_tCB49AB4A132CFE62F5F4E8489BEB287F90C7A030, ___m_profilerMetricObserver_0)); }
	inline RuntimeObject* get_m_profilerMetricObserver_0() const { return ___m_profilerMetricObserver_0; }
	inline RuntimeObject** get_address_of_m_profilerMetricObserver_0() { return &___m_profilerMetricObserver_0; }
	inline void set_m_profilerMetricObserver_0(RuntimeObject* value)
	{
		___m_profilerMetricObserver_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_profilerMetricObserver_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_rnsmMetricObserver_1() { return static_cast<int32_t>(offsetof(MetricObserver_tCB49AB4A132CFE62F5F4E8489BEB287F90C7A030, ___m_rnsmMetricObserver_1)); }
	inline RuntimeObject* get_m_rnsmMetricObserver_1() const { return ___m_rnsmMetricObserver_1; }
	inline RuntimeObject** get_address_of_m_rnsmMetricObserver_1() { return &___m_rnsmMetricObserver_1; }
	inline void set_m_rnsmMetricObserver_1(RuntimeObject* value)
	{
		___m_rnsmMetricObserver_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rnsmMetricObserver_1), (void*)value);
	}
};


// Unity.Multiplayer.Tools.MetricObserverFactory
struct MetricObserverFactory_t42055AFB713B8D2BE11D22E83C542A782EFAF960  : public RuntimeObject
{
public:

public:
};


// Unity.Multiplayer.Tools.NoOpMetricObserver
struct NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0  : public RuntimeObject
{
public:

public:
};

struct NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_StaticFields
{
public:
	// Unity.Multiplayer.Tools.NoOpMetricObserver Unity.Multiplayer.Tools.NoOpMetricObserver::<Instance>k__BackingField
	NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0 * ___U3CInstanceU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0 * get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0 ** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0 * value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}
};


// Unity.Multiplayer.Tools.RnsmMetricObserverFactory
struct RnsmMetricObserverFactory_tBE9795F05AB72924D0060FAB17793ABFA8686B20  : public RuntimeObject
{
public:

public:
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerMetricObserverFactory::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProfilerMetricObserverFactory_Construct_mCAFBA77D0F9A6F3D0A9CCE7AD47A6B8052C26E2D (const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.RnsmMetricObserverFactory::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RnsmMetricObserverFactory_Construct_mD22C7859801C671073260D44227B169B160FDA23 (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.MetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricObserver__ctor_m1E2AF2CD3E153CA55D42404BB9D7B33036B60D24 (MetricObserver_tCB49AB4A132CFE62F5F4E8489BEB287F90C7A030 * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NoOpMetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoOpMetricObserver__ctor_m720F694F39D32D06F91EA15A354D1ABE5C647B88 (NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0 * __this, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NoOpMetricObserver Unity.Multiplayer.Tools.NoOpMetricObserver::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0 * NoOpMetricObserver_get_Instance_mE60771ED9594612599646218849483C7800BF479_inline (const RuntimeMethod* method);
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
// System.Void Unity.Multiplayer.Tools.MetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricObserver_Observe_mFA6BA0EB328DA94BC3C81270A55359518A92E281 (MetricObserver_tCB49AB4A132CFE62F5F4E8489BEB287F90C7A030 * __this, MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetricObserver_tE7C56283153031145DFA6FE40A0CCD84EEAA13E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_profilerMetricObserver.Observe(collection);
		RuntimeObject* L_0 = __this->get_m_profilerMetricObserver_0();
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_1 = ___collection0;
		InterfaceActionInvoker1< MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * >::Invoke(0 /* System.Void Unity.Multiplayer.Tools.NetStats.IMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection) */, IMetricObserver_tE7C56283153031145DFA6FE40A0CCD84EEAA13E5_il2cpp_TypeInfo_var, L_0, L_1);
		// m_rnsmMetricObserver.Observe(collection);
		RuntimeObject* L_2 = __this->get_m_rnsmMetricObserver_1();
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_3 = ___collection0;
		InterfaceActionInvoker1< MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * >::Invoke(0 /* System.Void Unity.Multiplayer.Tools.NetStats.IMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection) */, IMetricObserver_tE7C56283153031145DFA6FE40A0CCD84EEAA13E5_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.MetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricObserver__ctor_m1E2AF2CD3E153CA55D42404BB9D7B33036B60D24 (MetricObserver_tCB49AB4A132CFE62F5F4E8489BEB287F90C7A030 * __this, const RuntimeMethod* method)
{
	{
		// private IMetricObserver m_profilerMetricObserver = ProfilerMetricObserverFactory.Construct();
		RuntimeObject* L_0;
		L_0 = ProfilerMetricObserverFactory_Construct_mCAFBA77D0F9A6F3D0A9CCE7AD47A6B8052C26E2D(/*hidden argument*/NULL);
		__this->set_m_profilerMetricObserver_0(L_0);
		// private IMetricObserver m_rnsmMetricObserver = RnsmMetricObserverFactory.Construct();
		RuntimeObject* L_1;
		L_1 = RnsmMetricObserverFactory_Construct_mD22C7859801C671073260D44227B169B160FDA23(/*hidden argument*/NULL);
		__this->set_m_rnsmMetricObserver_1(L_1);
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
// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.MetricObserverFactory::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricObserverFactory_Construct_mE7C00D4BDFE79A365ABFE9353D9DA944A49B6113 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricObserver_tCB49AB4A132CFE62F5F4E8489BEB287F90C7A030_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static IMetricObserver Construct() => new MetricObserver();
		MetricObserver_tCB49AB4A132CFE62F5F4E8489BEB287F90C7A030 * L_0 = (MetricObserver_tCB49AB4A132CFE62F5F4E8489BEB287F90C7A030 *)il2cpp_codegen_object_new(MetricObserver_tCB49AB4A132CFE62F5F4E8489BEB287F90C7A030_il2cpp_TypeInfo_var);
		MetricObserver__ctor_m1E2AF2CD3E153CA55D42404BB9D7B33036B60D24(L_0, /*hidden argument*/NULL);
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
// Unity.Multiplayer.Tools.NoOpMetricObserver Unity.Multiplayer.Tools.NoOpMetricObserver::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0 * NoOpMetricObserver_get_Instance_mE60771ED9594612599646218849483C7800BF479 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NoOpMetricObserver Instance { get; } = new NoOpMetricObserver();
		IL2CPP_RUNTIME_CLASS_INIT(NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_il2cpp_TypeInfo_var);
		NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0 * L_0 = ((NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_StaticFields*)il2cpp_codegen_static_fields_for(NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NoOpMetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoOpMetricObserver__ctor_m720F694F39D32D06F91EA15A354D1ABE5C647B88 (NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0 * __this, const RuntimeMethod* method)
{
	{
		// private NoOpMetricObserver() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// private NoOpMetricObserver() {}
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NoOpMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoOpMetricObserver_Observe_m6DDD0227370BCD327F6733BC174DAA4A524B30E7 (NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0 * __this, MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, const RuntimeMethod* method)
{
	{
		// public void Observe(MetricCollection collection) {}
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NoOpMetricObserver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoOpMetricObserver__cctor_m36775FBE9DC241C05F2DBB6AC028F547A86756B6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NoOpMetricObserver Instance { get; } = new NoOpMetricObserver();
		NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0 * L_0 = (NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0 *)il2cpp_codegen_object_new(NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_il2cpp_TypeInfo_var);
		NoOpMetricObserver__ctor_m720F694F39D32D06F91EA15A354D1ABE5C647B88(L_0, /*hidden argument*/NULL);
		((NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_StaticFields*)il2cpp_codegen_static_fields_for(NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
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
// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.RnsmMetricObserverFactory::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RnsmMetricObserverFactory_Construct_mD22C7859801C671073260D44227B169B160FDA23 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return NoOpMetricObserver.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_il2cpp_TypeInfo_var);
		NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0 * L_0;
		L_0 = NoOpMetricObserver_get_Instance_mE60771ED9594612599646218849483C7800BF479_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0 * NoOpMetricObserver_get_Instance_mE60771ED9594612599646218849483C7800BF479_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NoOpMetricObserver Instance { get; } = new NoOpMetricObserver();
		IL2CPP_RUNTIME_CLASS_INIT(NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_il2cpp_TypeInfo_var);
		NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0 * L_0 = ((NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_StaticFields*)il2cpp_codegen_static_fields_for(NoOpMetricObserver_t8215710ABBEA7424F8F8E9AB6670CFF987FE4BE0_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
