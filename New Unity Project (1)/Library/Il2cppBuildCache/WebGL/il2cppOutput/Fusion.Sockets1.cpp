#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String
struct String_t;
// Fusion.Sockets.Stun.StunServers/StunServer
struct StunServer_t92CE99C3273CC84F0C7717FB77F9D9C98A7AF626;

IL2CPP_EXTERN_C RuntimeClass* NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral40114FFF257678C29FF8C3EF907BA609E4F07350;
IL2CPP_EXTERN_C String_t* _stringLiteral5B878039E9D40F79446117192BD554C1893E4403;
IL2CPP_EXTERN_C String_t* _stringLiteral7C7B4EC2D00470FC13550884E5677F799CE5989C;
IL2CPP_EXTERN_C String_t* _stringLiteralF1F4975819195AC909F00AB519DF7ABC95BDE9C6;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
#pragma pack(push, tp, 1)
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
#pragma pack(pop, tp)


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


// Fusion.Sockets.NetAddress
struct NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// NanoSockets.Address Fusion.Sockets.NetAddress::NativeAddress
			Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4  ___NativeAddress_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4  ___NativeAddress_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Fusion.Sockets.NetAddress::Block0
			uint64_t ___Block0_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Block0_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Block1_2_OffsetPadding[8];
			// System.UInt64 Fusion.Sockets.NetAddress::Block1
			uint64_t ___Block1_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Block1_2_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___Block1_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Block2_3_OffsetPadding[16];
			// System.UInt64 Fusion.Sockets.NetAddress::Block2
			uint64_t ___Block2_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Block2_3_OffsetPadding_forAlignmentOnly[16];
			uint64_t ___Block2_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____actorId_4_OffsetPadding[20];
			// System.Int32 Fusion.Sockets.NetAddress::_actorId
			int32_t ____actorId_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____actorId_4_OffsetPadding_forAlignmentOnly[20];
			int32_t ____actorId_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_NativeAddress_0() { return static_cast<int32_t>(offsetof(NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19, ___NativeAddress_0)); }
	inline Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4  get_NativeAddress_0() const { return ___NativeAddress_0; }
	inline Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4 * get_address_of_NativeAddress_0() { return &___NativeAddress_0; }
	inline void set_NativeAddress_0(Address_tF949B1753722F9F53B10A2531AB1C50F77B0AFA4  value)
	{
		___NativeAddress_0 = value;
	}

	inline static int32_t get_offset_of_Block0_1() { return static_cast<int32_t>(offsetof(NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19, ___Block0_1)); }
	inline uint64_t get_Block0_1() const { return ___Block0_1; }
	inline uint64_t* get_address_of_Block0_1() { return &___Block0_1; }
	inline void set_Block0_1(uint64_t value)
	{
		___Block0_1 = value;
	}

	inline static int32_t get_offset_of_Block1_2() { return static_cast<int32_t>(offsetof(NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19, ___Block1_2)); }
	inline uint64_t get_Block1_2() const { return ___Block1_2; }
	inline uint64_t* get_address_of_Block1_2() { return &___Block1_2; }
	inline void set_Block1_2(uint64_t value)
	{
		___Block1_2 = value;
	}

	inline static int32_t get_offset_of_Block2_3() { return static_cast<int32_t>(offsetof(NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19, ___Block2_3)); }
	inline uint64_t get_Block2_3() const { return ___Block2_3; }
	inline uint64_t* get_address_of_Block2_3() { return &___Block2_3; }
	inline void set_Block2_3(uint64_t value)
	{
		___Block2_3 = value;
	}

	inline static int32_t get_offset_of__actorId_4() { return static_cast<int32_t>(offsetof(NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19, ____actorId_4)); }
	inline int32_t get__actorId_4() const { return ____actorId_4; }
	inline int32_t* get_address_of__actorId_4() { return &____actorId_4; }
	inline void set__actorId_4(int32_t value)
	{
		____actorId_4 = value;
	}
};

struct NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19_StaticFields
{
public:
	// Fusion.Sockets.NetAddress Fusion.Sockets.NetAddress::AnyIPv4Addr
	NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19  ___AnyIPv4Addr_5;
	// Fusion.Sockets.NetAddress Fusion.Sockets.NetAddress::AnyIPv6Addr
	NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19  ___AnyIPv6Addr_6;

public:
	inline static int32_t get_offset_of_AnyIPv4Addr_5() { return static_cast<int32_t>(offsetof(NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19_StaticFields, ___AnyIPv4Addr_5)); }
	inline NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19  get_AnyIPv4Addr_5() const { return ___AnyIPv4Addr_5; }
	inline NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19 * get_address_of_AnyIPv4Addr_5() { return &___AnyIPv4Addr_5; }
	inline void set_AnyIPv4Addr_5(NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19  value)
	{
		___AnyIPv4Addr_5 = value;
	}

	inline static int32_t get_offset_of_AnyIPv6Addr_6() { return static_cast<int32_t>(offsetof(NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19_StaticFields, ___AnyIPv6Addr_6)); }
	inline NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19  get_AnyIPv6Addr_6() const { return ___AnyIPv6Addr_6; }
	inline NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19 * get_address_of_AnyIPv6Addr_6() { return &___AnyIPv6Addr_6; }
	inline void set_AnyIPv6Addr_6(NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19  value)
	{
		___AnyIPv6Addr_6 = value;
	}
};


// Fusion.Sockets.Stun.StunServers/StunServer
struct StunServer_t92CE99C3273CC84F0C7717FB77F9D9C98A7AF626  : public RuntimeObject
{
public:
	// Fusion.Sockets.NetAddress Fusion.Sockets.Stun.StunServers/StunServer::IPv4Addr
	NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19  ___IPv4Addr_0;
	// Fusion.Sockets.NetAddress Fusion.Sockets.Stun.StunServers/StunServer::IPv6Addr
	NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19  ___IPv6Addr_1;

public:
	inline static int32_t get_offset_of_IPv4Addr_0() { return static_cast<int32_t>(offsetof(StunServer_t92CE99C3273CC84F0C7717FB77F9D9C98A7AF626, ___IPv4Addr_0)); }
	inline NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19  get_IPv4Addr_0() const { return ___IPv4Addr_0; }
	inline NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19 * get_address_of_IPv4Addr_0() { return &___IPv4Addr_0; }
	inline void set_IPv4Addr_0(NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19  value)
	{
		___IPv4Addr_0 = value;
	}

	inline static int32_t get_offset_of_IPv6Addr_1() { return static_cast<int32_t>(offsetof(StunServer_t92CE99C3273CC84F0C7717FB77F9D9C98A7AF626, ___IPv6Addr_1)); }
	inline NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19  get_IPv6Addr_1() const { return ___IPv6Addr_1; }
	inline NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19 * get_address_of_IPv6Addr_1() { return &___IPv6Addr_1; }
	inline void set_IPv6Addr_1(NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19  value)
	{
		___IPv6Addr_1 = value;
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



// System.Boolean Fusion.Sockets.NetAddress::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetAddress_get_IsValid_m44B70AFA9E632FF68C80CDD5FF5187A1692ECEA6 (NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m2CDD2A21AF2BCE3CE07D634645F9A61B4CB7D9B3 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Fusion.Sockets.Stun.StunServers/StunServer::get_HasIPv4Support()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StunServer_get_HasIPv4Support_mAFBEB592A6939CD3B02AB5DDCEA5DF33FCD4E739 (StunServer_t92CE99C3273CC84F0C7717FB77F9D9C98A7AF626 * __this, const RuntimeMethod* method)
{
	{
		NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19 * L_0 = __this->get_address_of_IPv4Addr_0();
		bool L_1;
		L_1 = NetAddress_get_IsValid_m44B70AFA9E632FF68C80CDD5FF5187A1692ECEA6((NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Fusion.Sockets.Stun.StunServers/StunServer::get_HasIPv6Support()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StunServer_get_HasIPv6Support_m11B67DB0DD0CF201FD574CECC90A9DC09FAA6799 (StunServer_t92CE99C3273CC84F0C7717FB77F9D9C98A7AF626 * __this, const RuntimeMethod* method)
{
	{
		NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19 * L_0 = __this->get_address_of_IPv6Addr_1();
		bool L_1;
		L_1 = NetAddress_get_IsValid_m44B70AFA9E632FF68C80CDD5FF5187A1692ECEA6((NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Fusion.Sockets.Stun.StunServers/StunServer::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StunServer_ToString_m3CAE86525D013F94C4C05479E42CB8B633F3F101 (StunServer_t92CE99C3273CC84F0C7717FB77F9D9C98A7AF626 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40114FFF257678C29FF8C3EF907BA609E4F07350);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B878039E9D40F79446117192BD554C1893E4403);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C7B4EC2D00470FC13550884E5677F799CE5989C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1F4975819195AC909F00AB519DF7ABC95BDE9C6);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral5B878039E9D40F79446117192BD554C1893E4403);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral5B878039E9D40F79446117192BD554C1893E4403);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteral7C7B4EC2D00470FC13550884E5677F799CE5989C);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral7C7B4EC2D00470FC13550884E5677F799CE5989C);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19  L_4 = __this->get_IPv4Addr_0();
		NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19  L_5 = L_4;
		RuntimeObject * L_6 = Box(NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19_il2cpp_TypeInfo_var, &L_5);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_3;
		ArrayElementTypeCheck (L_7, _stringLiteral40114FFF257678C29FF8C3EF907BA609E4F07350);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral40114FFF257678C29FF8C3EF907BA609E4F07350);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
		NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19  L_9 = __this->get_IPv6Addr_1();
		NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19  L_10 = L_9;
		RuntimeObject * L_11 = Box(NetAddress_t02F47DD3AC3491A0911549FE16D4AF3C76BE3D19_il2cpp_TypeInfo_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_11);
		String_t* L_12;
		L_12 = String_Format_m2CDD2A21AF2BCE3CE07D634645F9A61B4CB7D9B3(_stringLiteralF1F4975819195AC909F00AB519DF7ABC95BDE9C6, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void Fusion.Sockets.Stun.StunServers/StunServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunServer__ctor_m20DCFAFC82C11B809B94C70BC667500988657941 (StunServer_t92CE99C3273CC84F0C7717FB77F9D9C98A7AF626 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
