#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.TLS.LowLevel.Binding/unitytls_client_config
struct unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23;
// Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback
struct unitytls_client_data_receive_callback_tA01ACDA6D01B34BAF8AD30BF52E5DD3508AEFE4F;
// Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback
struct unitytls_client_data_send_callback_t17A3876F55EB3D4E2DB2C419795958D323AEE5CE;

IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9FDF7967E4111A4647155F4CDBE78CF9BA233A6E 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Unity.TLS.LowLevel.Binding
struct Binding_t2C2F67F7C1F9B7922D022C4F9B71FCA4D010CA82  : public RuntimeObject
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


// System.UIntPtr
struct UIntPtr_t 
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

// Unity.TLS.LowLevel.Binding/unitytls_client
struct unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D 
{
public:
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client::role
	uint32_t ___role_0;
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client::state
	uint32_t ___state_1;
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client::handshakeState
	uint32_t ___handshakeState_2;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client::ctx
	intptr_t ___ctx_3;
	// Unity.TLS.LowLevel.Binding/unitytls_client_config* Unity.TLS.LowLevel.Binding/unitytls_client::config
	unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23 * ___config_4;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client::internalCtx
	intptr_t ___internalCtx_5;

public:
	inline static int32_t get_offset_of_role_0() { return static_cast<int32_t>(offsetof(unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D, ___role_0)); }
	inline uint32_t get_role_0() const { return ___role_0; }
	inline uint32_t* get_address_of_role_0() { return &___role_0; }
	inline void set_role_0(uint32_t value)
	{
		___role_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D, ___state_1)); }
	inline uint32_t get_state_1() const { return ___state_1; }
	inline uint32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(uint32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_handshakeState_2() { return static_cast<int32_t>(offsetof(unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D, ___handshakeState_2)); }
	inline uint32_t get_handshakeState_2() const { return ___handshakeState_2; }
	inline uint32_t* get_address_of_handshakeState_2() { return &___handshakeState_2; }
	inline void set_handshakeState_2(uint32_t value)
	{
		___handshakeState_2 = value;
	}

	inline static int32_t get_offset_of_ctx_3() { return static_cast<int32_t>(offsetof(unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D, ___ctx_3)); }
	inline intptr_t get_ctx_3() const { return ___ctx_3; }
	inline intptr_t* get_address_of_ctx_3() { return &___ctx_3; }
	inline void set_ctx_3(intptr_t value)
	{
		___ctx_3 = value;
	}

	inline static int32_t get_offset_of_config_4() { return static_cast<int32_t>(offsetof(unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D, ___config_4)); }
	inline unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23 * get_config_4() const { return ___config_4; }
	inline unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23 ** get_address_of_config_4() { return &___config_4; }
	inline void set_config_4(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23 * value)
	{
		___config_4 = value;
	}

	inline static int32_t get_offset_of_internalCtx_5() { return static_cast<int32_t>(offsetof(unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D, ___internalCtx_5)); }
	inline intptr_t get_internalCtx_5() const { return ___internalCtx_5; }
	inline intptr_t* get_address_of_internalCtx_5() { return &___internalCtx_5; }
	inline void set_internalCtx_5(intptr_t value)
	{
		___internalCtx_5 = value;
	}
};


// Unity.TLS.LowLevel.Binding/unitytls_dataRef
struct unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD 
{
public:
	// System.Byte* Unity.TLS.LowLevel.Binding/unitytls_dataRef::dataPtr
	uint8_t* ___dataPtr_0;
	// System.UIntPtr Unity.TLS.LowLevel.Binding/unitytls_dataRef::dataLen
	uintptr_t ___dataLen_1;

public:
	inline static int32_t get_offset_of_dataPtr_0() { return static_cast<int32_t>(offsetof(unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD, ___dataPtr_0)); }
	inline uint8_t* get_dataPtr_0() const { return ___dataPtr_0; }
	inline uint8_t** get_address_of_dataPtr_0() { return &___dataPtr_0; }
	inline void set_dataPtr_0(uint8_t* value)
	{
		___dataPtr_0 = value;
	}

	inline static int32_t get_offset_of_dataLen_1() { return static_cast<int32_t>(offsetof(unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD, ___dataLen_1)); }
	inline uintptr_t get_dataLen_1() const { return ___dataLen_1; }
	inline uintptr_t* get_address_of_dataLen_1() { return &___dataLen_1; }
	inline void set_dataLen_1(uintptr_t value)
	{
		___dataLen_1 = value;
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

// Unity.TLS.LowLevel.Binding/unitytls_client_config
struct unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23 
{
public:
	// Unity.TLS.LowLevel.Binding/unitytls_dataRef Unity.TLS.LowLevel.Binding/unitytls_client_config::caPEM
	unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD  ___caPEM_0;
	// Unity.TLS.LowLevel.Binding/unitytls_dataRef Unity.TLS.LowLevel.Binding/unitytls_client_config::serverPEM
	unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD  ___serverPEM_1;
	// Unity.TLS.LowLevel.Binding/unitytls_dataRef Unity.TLS.LowLevel.Binding/unitytls_client_config::privateKeyPEM
	unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD  ___privateKeyPEM_2;
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client_config::clientAuth
	uint32_t ___clientAuth_3;
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client_config::transportProtocol
	uint32_t ___transportProtocol_4;
	// Unity.TLS.LowLevel.Binding/unitytls_dataRef Unity.TLS.LowLevel.Binding/unitytls_client_config::psk
	unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD  ___psk_5;
	// Unity.TLS.LowLevel.Binding/unitytls_dataRef Unity.TLS.LowLevel.Binding/unitytls_client_config::pskIdentity
	unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD  ___pskIdentity_6;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client_config::onDataCB
	intptr_t ___onDataCB_7;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client_config::dataSendCB
	intptr_t ___dataSendCB_8;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client_config::dataReceiveCB
	intptr_t ___dataReceiveCB_9;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client_config::dataReceiveTimeoutCB
	intptr_t ___dataReceiveTimeoutCB_10;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client_config::transportUserData
	intptr_t ___transportUserData_11;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client_config::applicationUserData
	intptr_t ___applicationUserData_12;
	// System.Int32 Unity.TLS.LowLevel.Binding/unitytls_client_config::handshakeReturnsOnStep
	int32_t ___handshakeReturnsOnStep_13;
	// System.Int32 Unity.TLS.LowLevel.Binding/unitytls_client_config::handshakeReturnsIfWouldBlock
	int32_t ___handshakeReturnsIfWouldBlock_14;
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client_config::ssl_read_timeout_ms
	uint32_t ___ssl_read_timeout_ms_15;
	// System.Byte* Unity.TLS.LowLevel.Binding/unitytls_client_config::hostname
	uint8_t* ___hostname_16;
	// System.Int32 Unity.TLS.LowLevel.Binding/unitytls_client_config::tracelevel
	int32_t ___tracelevel_17;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client_config::logCallback
	intptr_t ___logCallback_18;
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client_config::ssl_handshake_timeout_min
	uint32_t ___ssl_handshake_timeout_min_19;
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client_config::ssl_handshake_timeout_max
	uint32_t ___ssl_handshake_timeout_max_20;

public:
	inline static int32_t get_offset_of_caPEM_0() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___caPEM_0)); }
	inline unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD  get_caPEM_0() const { return ___caPEM_0; }
	inline unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD * get_address_of_caPEM_0() { return &___caPEM_0; }
	inline void set_caPEM_0(unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD  value)
	{
		___caPEM_0 = value;
	}

	inline static int32_t get_offset_of_serverPEM_1() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___serverPEM_1)); }
	inline unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD  get_serverPEM_1() const { return ___serverPEM_1; }
	inline unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD * get_address_of_serverPEM_1() { return &___serverPEM_1; }
	inline void set_serverPEM_1(unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD  value)
	{
		___serverPEM_1 = value;
	}

	inline static int32_t get_offset_of_privateKeyPEM_2() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___privateKeyPEM_2)); }
	inline unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD  get_privateKeyPEM_2() const { return ___privateKeyPEM_2; }
	inline unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD * get_address_of_privateKeyPEM_2() { return &___privateKeyPEM_2; }
	inline void set_privateKeyPEM_2(unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD  value)
	{
		___privateKeyPEM_2 = value;
	}

	inline static int32_t get_offset_of_clientAuth_3() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___clientAuth_3)); }
	inline uint32_t get_clientAuth_3() const { return ___clientAuth_3; }
	inline uint32_t* get_address_of_clientAuth_3() { return &___clientAuth_3; }
	inline void set_clientAuth_3(uint32_t value)
	{
		___clientAuth_3 = value;
	}

	inline static int32_t get_offset_of_transportProtocol_4() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___transportProtocol_4)); }
	inline uint32_t get_transportProtocol_4() const { return ___transportProtocol_4; }
	inline uint32_t* get_address_of_transportProtocol_4() { return &___transportProtocol_4; }
	inline void set_transportProtocol_4(uint32_t value)
	{
		___transportProtocol_4 = value;
	}

	inline static int32_t get_offset_of_psk_5() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___psk_5)); }
	inline unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD  get_psk_5() const { return ___psk_5; }
	inline unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD * get_address_of_psk_5() { return &___psk_5; }
	inline void set_psk_5(unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD  value)
	{
		___psk_5 = value;
	}

	inline static int32_t get_offset_of_pskIdentity_6() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___pskIdentity_6)); }
	inline unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD  get_pskIdentity_6() const { return ___pskIdentity_6; }
	inline unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD * get_address_of_pskIdentity_6() { return &___pskIdentity_6; }
	inline void set_pskIdentity_6(unitytls_dataRef_tB4CBD922A58A166C02AA1C01683D0353F8D3DEDD  value)
	{
		___pskIdentity_6 = value;
	}

	inline static int32_t get_offset_of_onDataCB_7() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___onDataCB_7)); }
	inline intptr_t get_onDataCB_7() const { return ___onDataCB_7; }
	inline intptr_t* get_address_of_onDataCB_7() { return &___onDataCB_7; }
	inline void set_onDataCB_7(intptr_t value)
	{
		___onDataCB_7 = value;
	}

	inline static int32_t get_offset_of_dataSendCB_8() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___dataSendCB_8)); }
	inline intptr_t get_dataSendCB_8() const { return ___dataSendCB_8; }
	inline intptr_t* get_address_of_dataSendCB_8() { return &___dataSendCB_8; }
	inline void set_dataSendCB_8(intptr_t value)
	{
		___dataSendCB_8 = value;
	}

	inline static int32_t get_offset_of_dataReceiveCB_9() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___dataReceiveCB_9)); }
	inline intptr_t get_dataReceiveCB_9() const { return ___dataReceiveCB_9; }
	inline intptr_t* get_address_of_dataReceiveCB_9() { return &___dataReceiveCB_9; }
	inline void set_dataReceiveCB_9(intptr_t value)
	{
		___dataReceiveCB_9 = value;
	}

	inline static int32_t get_offset_of_dataReceiveTimeoutCB_10() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___dataReceiveTimeoutCB_10)); }
	inline intptr_t get_dataReceiveTimeoutCB_10() const { return ___dataReceiveTimeoutCB_10; }
	inline intptr_t* get_address_of_dataReceiveTimeoutCB_10() { return &___dataReceiveTimeoutCB_10; }
	inline void set_dataReceiveTimeoutCB_10(intptr_t value)
	{
		___dataReceiveTimeoutCB_10 = value;
	}

	inline static int32_t get_offset_of_transportUserData_11() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___transportUserData_11)); }
	inline intptr_t get_transportUserData_11() const { return ___transportUserData_11; }
	inline intptr_t* get_address_of_transportUserData_11() { return &___transportUserData_11; }
	inline void set_transportUserData_11(intptr_t value)
	{
		___transportUserData_11 = value;
	}

	inline static int32_t get_offset_of_applicationUserData_12() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___applicationUserData_12)); }
	inline intptr_t get_applicationUserData_12() const { return ___applicationUserData_12; }
	inline intptr_t* get_address_of_applicationUserData_12() { return &___applicationUserData_12; }
	inline void set_applicationUserData_12(intptr_t value)
	{
		___applicationUserData_12 = value;
	}

	inline static int32_t get_offset_of_handshakeReturnsOnStep_13() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___handshakeReturnsOnStep_13)); }
	inline int32_t get_handshakeReturnsOnStep_13() const { return ___handshakeReturnsOnStep_13; }
	inline int32_t* get_address_of_handshakeReturnsOnStep_13() { return &___handshakeReturnsOnStep_13; }
	inline void set_handshakeReturnsOnStep_13(int32_t value)
	{
		___handshakeReturnsOnStep_13 = value;
	}

	inline static int32_t get_offset_of_handshakeReturnsIfWouldBlock_14() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___handshakeReturnsIfWouldBlock_14)); }
	inline int32_t get_handshakeReturnsIfWouldBlock_14() const { return ___handshakeReturnsIfWouldBlock_14; }
	inline int32_t* get_address_of_handshakeReturnsIfWouldBlock_14() { return &___handshakeReturnsIfWouldBlock_14; }
	inline void set_handshakeReturnsIfWouldBlock_14(int32_t value)
	{
		___handshakeReturnsIfWouldBlock_14 = value;
	}

	inline static int32_t get_offset_of_ssl_read_timeout_ms_15() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___ssl_read_timeout_ms_15)); }
	inline uint32_t get_ssl_read_timeout_ms_15() const { return ___ssl_read_timeout_ms_15; }
	inline uint32_t* get_address_of_ssl_read_timeout_ms_15() { return &___ssl_read_timeout_ms_15; }
	inline void set_ssl_read_timeout_ms_15(uint32_t value)
	{
		___ssl_read_timeout_ms_15 = value;
	}

	inline static int32_t get_offset_of_hostname_16() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___hostname_16)); }
	inline uint8_t* get_hostname_16() const { return ___hostname_16; }
	inline uint8_t** get_address_of_hostname_16() { return &___hostname_16; }
	inline void set_hostname_16(uint8_t* value)
	{
		___hostname_16 = value;
	}

	inline static int32_t get_offset_of_tracelevel_17() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___tracelevel_17)); }
	inline int32_t get_tracelevel_17() const { return ___tracelevel_17; }
	inline int32_t* get_address_of_tracelevel_17() { return &___tracelevel_17; }
	inline void set_tracelevel_17(int32_t value)
	{
		___tracelevel_17 = value;
	}

	inline static int32_t get_offset_of_logCallback_18() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___logCallback_18)); }
	inline intptr_t get_logCallback_18() const { return ___logCallback_18; }
	inline intptr_t* get_address_of_logCallback_18() { return &___logCallback_18; }
	inline void set_logCallback_18(intptr_t value)
	{
		___logCallback_18 = value;
	}

	inline static int32_t get_offset_of_ssl_handshake_timeout_min_19() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___ssl_handshake_timeout_min_19)); }
	inline uint32_t get_ssl_handshake_timeout_min_19() const { return ___ssl_handshake_timeout_min_19; }
	inline uint32_t* get_address_of_ssl_handshake_timeout_min_19() { return &___ssl_handshake_timeout_min_19; }
	inline void set_ssl_handshake_timeout_min_19(uint32_t value)
	{
		___ssl_handshake_timeout_min_19 = value;
	}

	inline static int32_t get_offset_of_ssl_handshake_timeout_max_20() { return static_cast<int32_t>(offsetof(unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23, ___ssl_handshake_timeout_max_20)); }
	inline uint32_t get_ssl_handshake_timeout_max_20() const { return ___ssl_handshake_timeout_max_20; }
	inline uint32_t* get_address_of_ssl_handshake_timeout_max_20() { return &___ssl_handshake_timeout_max_20; }
	inline void set_ssl_handshake_timeout_max_20(uint32_t value)
	{
		___ssl_handshake_timeout_max_20 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback
struct unitytls_client_data_receive_callback_tA01ACDA6D01B34BAF8AD30BF52E5DD3508AEFE4F  : public MulticastDelegate_t
{
public:

public:
};


// Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback
struct unitytls_client_data_send_callback_t17A3876F55EB3D4E2DB2C419795958D323AEE5CE  : public MulticastDelegate_t
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
// System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_send_data(Unity.TLS.LowLevel.Binding/unitytls_client*,System.Byte*,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_send_data_m4893B3E22DD06450495A6BC9E9E4A2C4570BEFD5 (unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D * ___clientInstance0, uint8_t* ___data1, uintptr_t ___dataLen2, const RuntimeMethod* method)
{
	typedef uint32_t (*Binding_unitytls_client_send_data_m4893B3E22DD06450495A6BC9E9E4A2C4570BEFD5_ftn) (unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D *, uint8_t*, uintptr_t);
	static Binding_unitytls_client_send_data_m4893B3E22DD06450495A6BC9E9E4A2C4570BEFD5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_send_data_m4893B3E22DD06450495A6BC9E9E4A2C4570BEFD5_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_send_data(Unity.TLS.LowLevel.Binding/unitytls_client*,System.Byte*,System.UIntPtr)");
	uint32_t icallRetVal = _il2cpp_icall_func(___clientInstance0, ___data1, ___dataLen2);
	return icallRetVal;
}
// System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_read_data(Unity.TLS.LowLevel.Binding/unitytls_client*,System.Byte*,System.UIntPtr,System.UIntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_read_data_mE2E25F39F0642A9478CE7E108347B4CAABF93774 (unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D * ___clientInstance0, uint8_t* ___buffer1, uintptr_t ___bufferLen2, uintptr_t* ___bytesRead3, const RuntimeMethod* method)
{
	typedef uint32_t (*Binding_unitytls_client_read_data_mE2E25F39F0642A9478CE7E108347B4CAABF93774_ftn) (unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D *, uint8_t*, uintptr_t, uintptr_t*);
	static Binding_unitytls_client_read_data_mE2E25F39F0642A9478CE7E108347B4CAABF93774_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_read_data_mE2E25F39F0642A9478CE7E108347B4CAABF93774_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_read_data(Unity.TLS.LowLevel.Binding/unitytls_client*,System.Byte*,System.UIntPtr,System.UIntPtr*)");
	uint32_t icallRetVal = _il2cpp_icall_func(___clientInstance0, ___buffer1, ___bufferLen2, ___bytesRead3);
	return icallRetVal;
}
// System.Void Unity.TLS.LowLevel.Binding::unitytls_client_init_config(Unity.TLS.LowLevel.Binding/unitytls_client_config*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Binding_unitytls_client_init_config_mA72CC90CB8F66A5DD2728C09A02DE40E291F925E (unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23 * ___config0, const RuntimeMethod* method)
{
	typedef void (*Binding_unitytls_client_init_config_mA72CC90CB8F66A5DD2728C09A02DE40E291F925E_ftn) (unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23 *);
	static Binding_unitytls_client_init_config_mA72CC90CB8F66A5DD2728C09A02DE40E291F925E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_init_config_mA72CC90CB8F66A5DD2728C09A02DE40E291F925E_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_init_config(Unity.TLS.LowLevel.Binding/unitytls_client_config*)");
	_il2cpp_icall_func(___config0);
}
// Unity.TLS.LowLevel.Binding/unitytls_client* Unity.TLS.LowLevel.Binding::unitytls_client_create(System.UInt32,Unity.TLS.LowLevel.Binding/unitytls_client_config*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D * Binding_unitytls_client_create_mFDD54644EF69E7C9932DACB8598F5B8818865E59 (uint32_t ___role0, unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23 * ___config1, const RuntimeMethod* method)
{
	typedef unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D * (*Binding_unitytls_client_create_mFDD54644EF69E7C9932DACB8598F5B8818865E59_ftn) (uint32_t, unitytls_client_config_tFDD8B569B17D25B85118C659BC7380F06E1D6E23 *);
	static Binding_unitytls_client_create_mFDD54644EF69E7C9932DACB8598F5B8818865E59_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_create_mFDD54644EF69E7C9932DACB8598F5B8818865E59_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_create(System.UInt32,Unity.TLS.LowLevel.Binding/unitytls_client_config*)");
	unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D * icallRetVal = _il2cpp_icall_func(___role0, ___config1);
	return icallRetVal;
}
// System.Void Unity.TLS.LowLevel.Binding::unitytls_client_destroy(Unity.TLS.LowLevel.Binding/unitytls_client*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Binding_unitytls_client_destroy_mD841C76CE31062E1E80DC1DC5AC69FD3574EE0C1 (unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D * ___clientInstance0, const RuntimeMethod* method)
{
	typedef void (*Binding_unitytls_client_destroy_mD841C76CE31062E1E80DC1DC5AC69FD3574EE0C1_ftn) (unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D *);
	static Binding_unitytls_client_destroy_mD841C76CE31062E1E80DC1DC5AC69FD3574EE0C1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_destroy_mD841C76CE31062E1E80DC1DC5AC69FD3574EE0C1_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_destroy(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	_il2cpp_icall_func(___clientInstance0);
}
// System.Int32 Unity.TLS.LowLevel.Binding::unitytls_client_init(Unity.TLS.LowLevel.Binding/unitytls_client*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Binding_unitytls_client_init_m3C52B1623003E4CB2773108D2122357B2FDA227A (unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D * ___clientInstance0, const RuntimeMethod* method)
{
	typedef int32_t (*Binding_unitytls_client_init_m3C52B1623003E4CB2773108D2122357B2FDA227A_ftn) (unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D *);
	static Binding_unitytls_client_init_m3C52B1623003E4CB2773108D2122357B2FDA227A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_init_m3C52B1623003E4CB2773108D2122357B2FDA227A_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_init(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	int32_t icallRetVal = _il2cpp_icall_func(___clientInstance0);
	return icallRetVal;
}
// System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_handshake(Unity.TLS.LowLevel.Binding/unitytls_client*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_handshake_m7DB62F31470704CEDF3D895EE829B3D9DF9F578D (unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D * ___clientInstance0, const RuntimeMethod* method)
{
	typedef uint32_t (*Binding_unitytls_client_handshake_m7DB62F31470704CEDF3D895EE829B3D9DF9F578D_ftn) (unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D *);
	static Binding_unitytls_client_handshake_m7DB62F31470704CEDF3D895EE829B3D9DF9F578D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_handshake_m7DB62F31470704CEDF3D895EE829B3D9DF9F578D_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_handshake(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	uint32_t icallRetVal = _il2cpp_icall_func(___clientInstance0);
	return icallRetVal;
}
// System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_get_handshake_state(Unity.TLS.LowLevel.Binding/unitytls_client*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_get_handshake_state_mDC857DF7D68100BA1223F3C46618A138635D923B (unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D * ___clientInstance0, const RuntimeMethod* method)
{
	typedef uint32_t (*Binding_unitytls_client_get_handshake_state_mDC857DF7D68100BA1223F3C46618A138635D923B_ftn) (unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D *);
	static Binding_unitytls_client_get_handshake_state_mDC857DF7D68100BA1223F3C46618A138635D923B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_get_handshake_state_mDC857DF7D68100BA1223F3C46618A138635D923B_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_get_handshake_state(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	uint32_t icallRetVal = _il2cpp_icall_func(___clientInstance0);
	return icallRetVal;
}
// System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_get_state(Unity.TLS.LowLevel.Binding/unitytls_client*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_get_state_m973BE48E9792EF17BBB0C85036E93A5051F6315C (unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D * ___clientInstance0, const RuntimeMethod* method)
{
	typedef uint32_t (*Binding_unitytls_client_get_state_m973BE48E9792EF17BBB0C85036E93A5051F6315C_ftn) (unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D *);
	static Binding_unitytls_client_get_state_m973BE48E9792EF17BBB0C85036E93A5051F6315C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_get_state_m973BE48E9792EF17BBB0C85036E93A5051F6315C_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_get_state(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	uint32_t icallRetVal = _il2cpp_icall_func(___clientInstance0);
	return icallRetVal;
}
// System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_get_role(Unity.TLS.LowLevel.Binding/unitytls_client*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_get_role_m6A437328E98BE286FB643C4247706D18E027E39E (unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D * ___clientInstance0, const RuntimeMethod* method)
{
	typedef uint32_t (*Binding_unitytls_client_get_role_m6A437328E98BE286FB643C4247706D18E027E39E_ftn) (unitytls_client_t5CC6E19E8E5E5D5FB3D1814C026E81A0EFE9428D *);
	static Binding_unitytls_client_get_role_m6A437328E98BE286FB643C4247706D18E027E39E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_get_role_m6A437328E98BE286FB643C4247706D18E027E39E_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_get_role(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	uint32_t icallRetVal = _il2cpp_icall_func(___clientInstance0);
	return icallRetVal;
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_unitytls_client_data_receive_callback_tA01ACDA6D01B34BAF8AD30BF52E5DD3508AEFE4F (unitytls_client_data_receive_callback_tA01ACDA6D01B34BAF8AD30BF52E5DD3508AEFE4F * __this, intptr_t ___arg00, uint8_t* ___arg11, uintptr_t ___arg22, uint32_t ___arg33, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, uint8_t*, uintptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___arg00, ___arg11, ___arg22, ___arg33);

	return returnValue;
}
// System.Void Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_client_data_receive_callback__ctor_m45A311AFFC861E88AD61AFA2A6A2D3816CEE7FAB (unitytls_client_data_receive_callback_tA01ACDA6D01B34BAF8AD30BF52E5DD3508AEFE4F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback::Invoke(System.IntPtr,System.Byte*,System.UIntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t unitytls_client_data_receive_callback_Invoke_m11CBB5D60DEC1D7DF8C3ECE27113F5550C41E9DD (unitytls_client_data_receive_callback_tA01ACDA6D01B34BAF8AD30BF52E5DD3508AEFE4F * __this, intptr_t ___arg00, uint8_t* ___arg11, uintptr_t ___arg22, uint32_t ___arg33, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 4)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
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
						result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, uint8_t*, uintptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						result = GenericVirtFuncInvoker4< int32_t, intptr_t, uint8_t*, uintptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< int32_t, intptr_t, uint8_t*, uintptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						result = VirtFuncInvoker4< int32_t, intptr_t, uint8_t*, uintptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback::BeginInvoke(System.IntPtr,System.Byte*,System.UIntPtr,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_client_data_receive_callback_BeginInvoke_mF6EED6A27CDA5D0F4AC572B4FBD8F60F23A4A0B5 (unitytls_client_data_receive_callback_tA01ACDA6D01B34BAF8AD30BF52E5DD3508AEFE4F * __this, intptr_t ___arg00, uint8_t* ___arg11, uintptr_t ___arg22, uint32_t ___arg33, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = ___arg11;
	__d_args[2] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___arg22);
	__d_args[3] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___arg33);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Int32 Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t unitytls_client_data_receive_callback_EndInvoke_mB85DB42A09AD431BBCEB245D27AE4D2A6EA66903 (unitytls_client_data_receive_callback_tA01ACDA6D01B34BAF8AD30BF52E5DD3508AEFE4F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_unitytls_client_data_send_callback_t17A3876F55EB3D4E2DB2C419795958D323AEE5CE (unitytls_client_data_send_callback_t17A3876F55EB3D4E2DB2C419795958D323AEE5CE * __this, intptr_t ___arg00, uint8_t* ___arg11, uintptr_t ___arg22, uint32_t ___arg33, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, uint8_t*, uintptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___arg00, ___arg11, ___arg22, ___arg33);

	return returnValue;
}
// System.Void Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_client_data_send_callback__ctor_m44DF2D20C6A88D05AB2448091DD611A56F23E8E8 (unitytls_client_data_send_callback_t17A3876F55EB3D4E2DB2C419795958D323AEE5CE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback::Invoke(System.IntPtr,System.Byte*,System.UIntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t unitytls_client_data_send_callback_Invoke_mC2E6432F32BF599C22A0E8FCEFBBAA7DB5302076 (unitytls_client_data_send_callback_t17A3876F55EB3D4E2DB2C419795958D323AEE5CE * __this, intptr_t ___arg00, uint8_t* ___arg11, uintptr_t ___arg22, uint32_t ___arg33, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 4)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
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
						result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, uint8_t*, uintptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						result = GenericVirtFuncInvoker4< int32_t, intptr_t, uint8_t*, uintptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< int32_t, intptr_t, uint8_t*, uintptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						result = VirtFuncInvoker4< int32_t, intptr_t, uint8_t*, uintptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback::BeginInvoke(System.IntPtr,System.Byte*,System.UIntPtr,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_client_data_send_callback_BeginInvoke_m0E92AAC56D96DA2BA22ACC75943AD8D937543100 (unitytls_client_data_send_callback_t17A3876F55EB3D4E2DB2C419795958D323AEE5CE * __this, intptr_t ___arg00, uint8_t* ___arg11, uintptr_t ___arg22, uint32_t ___arg33, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = ___arg11;
	__d_args[2] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___arg22);
	__d_args[3] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___arg33);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Int32 Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t unitytls_client_data_send_callback_EndInvoke_m87B373AE7650AAD1BDE390175ABB542C21163C97 (unitytls_client_data_send_callback_t17A3876F55EB3D4E2DB2C419795958D323AEE5CE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
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
