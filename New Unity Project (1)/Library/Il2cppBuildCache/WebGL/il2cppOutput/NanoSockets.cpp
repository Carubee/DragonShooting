#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4344DB0F3E9EB00D6B4A15BFD2A82E7869CFA0AF;
IL2CPP_EXTERN_C String_t* _stringLiteral557FB10169DCBA7723885B2E54E8A0318602F069;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t069C65D34CD6EAFC97F650B5F1281736658595EF 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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


// NanoSockets.UDP
struct UDP_t7E09FC0CE50A1296F64ED99323FA44B1F11BF8B1  : public RuntimeObject
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

// NanoSockets.Address
struct Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.UInt64 NanoSockets.Address::_address0
					uint64_t ____address0_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ____address0_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ____address1_1_OffsetPadding[8];
					// System.UInt64 NanoSockets.Address::_address1
					uint64_t ____address1_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ____address1_1_OffsetPadding_forAlignmentOnly[8];
					uint64_t ____address1_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Port_2_OffsetPadding[16];
					// System.UInt16 NanoSockets.Address::Port
					uint16_t ___Port_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Port_2_OffsetPadding_forAlignmentOnly[16];
					uint16_t ___Port_2_forAlignmentOnly;
				};
			};
		};
		uint8_t Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4__padding[24];
	};

public:
	inline static int32_t get_offset_of__address0_0() { return static_cast<int32_t>(offsetof(Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4, ____address0_0)); }
	inline uint64_t get__address0_0() const { return ____address0_0; }
	inline uint64_t* get_address_of__address0_0() { return &____address0_0; }
	inline void set__address0_0(uint64_t value)
	{
		____address0_0 = value;
	}

	inline static int32_t get_offset_of__address1_1() { return static_cast<int32_t>(offsetof(Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4, ____address1_1)); }
	inline uint64_t get__address1_1() const { return ____address1_1; }
	inline uint64_t* get_address_of__address1_1() { return &____address1_1; }
	inline void set__address1_1(uint64_t value)
	{
		____address1_1 = value;
	}

	inline static int32_t get_offset_of_Port_2() { return static_cast<int32_t>(offsetof(Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4, ___Port_2)); }
	inline uint16_t get_Port_2() const { return ___Port_2; }
	inline uint16_t* get_address_of_Port_2() { return &___Port_2; }
	inline void set_Port_2(uint16_t value)
	{
		___Port_2 = value;
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


// NanoSockets.Socket
struct Socket_t378C5CD49F7E9E2CB3C664E1D72D148888C382FE 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 NanoSockets.Socket::handle
			int64_t ___handle_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___handle_0_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(Socket_t378C5CD49F7E9E2CB3C664E1D72D148888C382FE, ___handle_0)); }
	inline int64_t get_handle_0() const { return ___handle_0; }
	inline int64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int64_t value)
	{
		___handle_0 = value;
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


// NanoSockets.Status
struct Status_tF48F15FE4E299B5B64D895C2303B60D3594129AC 
{
public:
	// System.Int32 NanoSockets.Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_tF48F15FE4E299B5B64D895C2303B60D3594129AC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Boolean NanoSockets.Address::Equals(NanoSockets.Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Address_Equals_m74D0F3D8422E871EC77D58D3367484EEA26CE38C (Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * __this, Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4  ___other0, const RuntimeMethod* method);
// System.Boolean NanoSockets.Address::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Address_Equals_m9E7233ADADD7336D5FA9C916212D49A195FB169A (Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33 (uint64_t* __this, const RuntimeMethod* method);
// System.Int32 System.UInt16::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_mDA01CAA4AF8C22A63972F93F26AF7E888CEBD2AA (uint16_t* __this, const RuntimeMethod* method);
// System.Int32 NanoSockets.Address::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Address_GetHashCode_m553107BD838B87CEC1DAE71663EA53C08404F83F (Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String NanoSockets.Address::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Address_ToString_m5BFFE4ECA0326DF5E2544B33C8ACE7B7A76605E5 (Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * __this, const RuntimeMethod* method);
// System.Boolean NanoSockets.Socket::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_IsCreated_mF3296FB08389CB71F076FED3577B42E494826704 (Socket_t378C5CD49F7E9E2CB3C664E1D72D148888C382FE * __this, const RuntimeMethod* method);
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
// System.Boolean NanoSockets.Address::Equals(NanoSockets.Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Address_Equals_m74D0F3D8422E871EC77D58D3367484EEA26CE38C (Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * __this, Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4  ___other0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get__address0_0();
		Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4  L_1 = ___other0;
		uint64_t L_2 = L_1.get__address0_0();
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		uint64_t L_3 = __this->get__address1_1();
		Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4  L_4 = ___other0;
		uint64_t L_5 = L_4.get__address1_1();
		if ((!(((uint64_t)L_3) == ((uint64_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		uint16_t L_6 = __this->get_Port_2();
		Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4  L_7 = ___other0;
		uint16_t L_8 = L_7.get_Port_2();
		return (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Address_Equals_m74D0F3D8422E871EC77D58D3367484EEA26CE38C_AdjustorThunk (RuntimeObject * __this, Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * _thisAdjusted = reinterpret_cast<Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Address_Equals_m74D0F3D8422E871EC77D58D3367484EEA26CE38C(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean NanoSockets.Address::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Address_Equals_m9E7233ADADD7336D5FA9C916212D49A195FB169A (Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 *)((Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 *)UnBox(L_1, Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4_il2cpp_TypeInfo_var))));
		Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4  L_2 = V_0;
		bool L_3;
		L_3 = Address_Equals_m74D0F3D8422E871EC77D58D3367484EEA26CE38C((Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Address_Equals_m9E7233ADADD7336D5FA9C916212D49A195FB169A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * _thisAdjusted = reinterpret_cast<Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Address_Equals_m9E7233ADADD7336D5FA9C916212D49A195FB169A(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 NanoSockets.Address::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Address_GetHashCode_m553107BD838B87CEC1DAE71663EA53C08404F83F (Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * __this, const RuntimeMethod* method)
{
	{
		uint64_t* L_0 = __this->get_address_of__address0_0();
		int32_t L_1;
		L_1 = UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33((uint64_t*)L_0, /*hidden argument*/NULL);
		uint64_t* L_2 = __this->get_address_of__address1_1();
		int32_t L_3;
		L_3 = UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33((uint64_t*)L_2, /*hidden argument*/NULL);
		uint16_t* L_4 = __this->get_address_of_Port_2();
		int32_t L_5;
		L_5 = UInt16_GetHashCode_mDA01CAA4AF8C22A63972F93F26AF7E888CEBD2AA((uint16_t*)L_4, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)31))), (int32_t)L_1)), (int32_t)((int32_t)31))), (int32_t)L_3)), (int32_t)((int32_t)31))), (int32_t)L_5));
	}
}
IL2CPP_EXTERN_C  int32_t Address_GetHashCode_m553107BD838B87CEC1DAE71663EA53C08404F83F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * _thisAdjusted = reinterpret_cast<Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Address_GetHashCode_m553107BD838B87CEC1DAE71663EA53C08404F83F(_thisAdjusted, method);
	return _returnValue;
}
// System.String NanoSockets.Address::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Address_ToString_m5BFFE4ECA0326DF5E2544B33C8ACE7B7A76605E5 (Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4344DB0F3E9EB00D6B4A15BFD2A82E7869CFA0AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral557FB10169DCBA7723885B2E54E8A0318602F069);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0 = __this->get_Port_2();
		uint16_t L_1 = L_0;
		RuntimeObject * L_2 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteral4344DB0F3E9EB00D6B4A15BFD2A82E7869CFA0AF, _stringLiteral557FB10169DCBA7723885B2E54E8A0318602F069, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* Address_ToString_m5BFFE4ECA0326DF5E2544B33C8ACE7B7A76605E5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * _thisAdjusted = reinterpret_cast<Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Address_ToString_m5BFFE4ECA0326DF5E2544B33C8ACE7B7A76605E5(_thisAdjusted, method);
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
// System.Boolean NanoSockets.Socket::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_IsCreated_mF3296FB08389CB71F076FED3577B42E494826704 (Socket_t378C5CD49F7E9E2CB3C664E1D72D148888C382FE * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_handle_0();
		return (bool)((((int64_t)L_0) > ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Socket_get_IsCreated_mF3296FB08389CB71F076FED3577B42E494826704_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Socket_t378C5CD49F7E9E2CB3C664E1D72D148888C382FE * _thisAdjusted = reinterpret_cast<Socket_t378C5CD49F7E9E2CB3C664E1D72D148888C382FE *>(__this + _offset);
	bool _returnValue;
	_returnValue = Socket_get_IsCreated_mF3296FB08389CB71F076FED3577B42E494826704(_thisAdjusted, method);
	return _returnValue;
}
// System.Int64 NanoSockets.Socket::op_Implicit(NanoSockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Socket_op_Implicit_m6FCA3BEBDD7B9717B46265E9EF281BF42270A091 (Socket_t378C5CD49F7E9E2CB3C664E1D72D148888C382FE  ___socket0, const RuntimeMethod* method)
{
	{
		Socket_t378C5CD49F7E9E2CB3C664E1D72D148888C382FE  L_0 = ___socket0;
		int64_t L_1 = L_0.get_handle_0();
		return L_1;
	}
}
// NanoSockets.Socket NanoSockets.Socket::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t378C5CD49F7E9E2CB3C664E1D72D148888C382FE  Socket_op_Implicit_m5492D8EE67C10FB7A34A8090C9BC220C91AB87F5 (int64_t ___handle0, const RuntimeMethod* method)
{
	Socket_t378C5CD49F7E9E2CB3C664E1D72D148888C382FE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int64_t L_0 = ___handle0;
		(&V_0)->set_handle_0(L_0);
		Socket_t378C5CD49F7E9E2CB3C664E1D72D148888C382FE  L_1 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// NanoSockets.Status NanoSockets.UDP::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Initialize_mBEBA69D775ACF36DF91F454FBDDC8E25323C5B9E (const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Int64 NanoSockets.UDP::Create(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UDP_Create_mE6CD73C5EADF7E343C570F9FED60D8243B63FDAE (int32_t ___sendBufferSize0, int32_t ___receiveBufferSize1, const RuntimeMethod* method)
{
	{
		return ((int64_t)((int64_t)0));
	}
}
// System.Void NanoSockets.UDP::Destroy(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_Destroy_mF64B136A9659984165263870F61A1F00AB0EE601 (int64_t* ___socket0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int32 NanoSockets.UDP::Bind(System.Int64,NanoSockets.Address&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Bind_m17A43EED0620425008A67D87541099358FC53DD1 (int64_t ___socket0, Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * ___address1, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// NanoSockets.Status NanoSockets.UDP::SetNonBlocking(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetNonBlocking_mB46588289C4D9B94DF91A0CFF8BC47DDE823035C (int64_t ___socket0, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Int32 NanoSockets.UDP::Send(System.Int64,NanoSockets.Address*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Send_m0292367F9B279864C303027C480DB6DA1D30DE17 (int64_t ___socket0, Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * ___address1, uint8_t* ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Int32 NanoSockets.UDP::Receive(System.Int64,NanoSockets.Address*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Receive_mE1CCB654E88A386D8BE0F64C33E13F283A00B458 (int64_t ___socket0, Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * ___address1, uint8_t* ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// NanoSockets.Status NanoSockets.UDP::GetAddress(System.Int64,NanoSockets.Address&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetAddress_m5BB306176A2371940CDF8A64913A17B0F2B659CB (int64_t ___socket0, Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * ___address1, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// NanoSockets.Status NanoSockets.UDP::SetIP(NanoSockets.Address&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetIP_mE5D02A243CE4F3A2B1E6AA7CE4541D9CC0E02314 (Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * ___address0, String_t* ___ip1, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
