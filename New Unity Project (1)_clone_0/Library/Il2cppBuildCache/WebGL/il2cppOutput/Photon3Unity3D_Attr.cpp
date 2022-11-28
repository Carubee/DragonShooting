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
// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4;
// System.Reflection.AssemblyConfigurationAttribute
struct AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C;
// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC;
// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3;
// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F;
// System.Reflection.AssemblyInformationalVersionAttribute
struct AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0;
// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA;
// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53;
// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// ExitGames.Client.Photon.PreserveAttribute
struct PreserveAttribute_tA5FB28C75AE9BB1B2F7DE004F1CC6DA9FDD7B3A3;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;
// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
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

// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::m_company
	String_t* ___m_company_0;

public:
	inline static int32_t get_offset_of_m_company_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4, ___m_company_0)); }
	inline String_t* get_m_company_0() const { return ___m_company_0; }
	inline String_t** get_address_of_m_company_0() { return &___m_company_0; }
	inline void set_m_company_0(String_t* value)
	{
		___m_company_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_company_0), (void*)value);
	}
};


// System.Reflection.AssemblyConfigurationAttribute
struct AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyConfigurationAttribute::m_configuration
	String_t* ___m_configuration_0;

public:
	inline static int32_t get_offset_of_m_configuration_0() { return static_cast<int32_t>(offsetof(AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C, ___m_configuration_0)); }
	inline String_t* get_m_configuration_0() const { return ___m_configuration_0; }
	inline String_t** get_address_of_m_configuration_0() { return &___m_configuration_0; }
	inline void set_m_configuration_0(String_t* value)
	{
		___m_configuration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_configuration_0), (void*)value);
	}
};


// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::m_copyright
	String_t* ___m_copyright_0;

public:
	inline static int32_t get_offset_of_m_copyright_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC, ___m_copyright_0)); }
	inline String_t* get_m_copyright_0() const { return ___m_copyright_0; }
	inline String_t** get_address_of_m_copyright_0() { return &___m_copyright_0; }
	inline void set_m_copyright_0(String_t* value)
	{
		___m_copyright_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_copyright_0), (void*)value);
	}
};


// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::m_description
	String_t* ___m_description_0;

public:
	inline static int32_t get_offset_of_m_description_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3, ___m_description_0)); }
	inline String_t* get_m_description_0() const { return ___m_description_0; }
	inline String_t** get_address_of_m_description_0() { return &___m_description_0; }
	inline void set_m_description_0(String_t* value)
	{
		___m_description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_description_0), (void*)value);
	}
};


// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F, ____version_0)); }
	inline String_t* get__version_0() const { return ____version_0; }
	inline String_t** get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(String_t* value)
	{
		____version_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____version_0), (void*)value);
	}
};


// System.Reflection.AssemblyInformationalVersionAttribute
struct AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::m_informationalVersion
	String_t* ___m_informationalVersion_0;

public:
	inline static int32_t get_offset_of_m_informationalVersion_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0, ___m_informationalVersion_0)); }
	inline String_t* get_m_informationalVersion_0() const { return ___m_informationalVersion_0; }
	inline String_t** get_address_of_m_informationalVersion_0() { return &___m_informationalVersion_0; }
	inline void set_m_informationalVersion_0(String_t* value)
	{
		___m_informationalVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_informationalVersion_0), (void*)value);
	}
};


// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::m_product
	String_t* ___m_product_0;

public:
	inline static int32_t get_offset_of_m_product_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA, ___m_product_0)); }
	inline String_t* get_m_product_0() const { return ___m_product_0; }
	inline String_t** get_address_of_m_product_0() { return &___m_product_0; }
	inline void set_m_product_0(String_t* value)
	{
		___m_product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_product_0), (void*)value);
	}
};


// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::m_title
	String_t* ___m_title_0;

public:
	inline static int32_t get_offset_of_m_title_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7, ___m_title_0)); }
	inline String_t* get_m_title_0() const { return ___m_title_0; }
	inline String_t** get_address_of_m_title_0() { return &___m_title_0; }
	inline void set_m_title_0(String_t* value)
	{
		___m_title_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_title_0), (void*)value);
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::m_memberName
	String_t* ___m_memberName_0;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_memberName_0), (void*)value);
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

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// ExitGames.Client.Photon.PreserveAttribute
struct PreserveAttribute_tA5FB28C75AE9BB1B2F7DE004F1CC6DA9FDD7B3A3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkName
	String_t* ____frameworkName_0;
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkDisplayName
	String_t* ____frameworkDisplayName_1;

public:
	inline static int32_t get_offset_of__frameworkName_0() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkName_0)); }
	inline String_t* get__frameworkName_0() const { return ____frameworkName_0; }
	inline String_t** get_address_of__frameworkName_0() { return &____frameworkName_0; }
	inline void set__frameworkName_0(String_t* value)
	{
		____frameworkName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkName_0), (void*)value);
	}

	inline static int32_t get_offset_of__frameworkDisplayName_1() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkDisplayName_1)); }
	inline String_t* get__frameworkDisplayName_1() const { return ____frameworkDisplayName_1; }
	inline String_t** get_address_of__frameworkDisplayName_1() { return &____frameworkDisplayName_1; }
	inline void set__frameworkDisplayName_1(String_t* value)
	{
		____frameworkDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkDisplayName_1), (void*)value);
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


// System.Diagnostics.DebuggerBrowsableState
struct DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091 
{
public:
	// System.Int32 System.Diagnostics.DebuggerBrowsableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggerBrowsableState System.Diagnostics.DebuggerBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Reflection.AssemblyTitleAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * __this, String_t* ___title0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyInformationalVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyInformationalVersionAttribute__ctor_m9BF349D8F980B0ABAB2A6312E422915285FA1678 (AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 * __this, String_t* ___informationalVersion0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyFileVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * __this, String_t* ___version0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyDescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25 (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * __this, String_t* ___description0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCopyrightAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3 (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * __this, String_t* ___copyright0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyConfigurationAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyConfigurationAttribute__ctor_m6EE76F5A155EDEA71967A32F78D777038ADD0757 (AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C * __this, String_t* ___configuration0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCompanyAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0 (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * __this, String_t* ___company0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___frameworkName0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::set_FrameworkDisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyProductAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8 (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * __this, String_t* ___product0, const RuntimeMethod* method);
// System.Void System.Reflection.DefaultMemberAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7 (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * __this, String_t* ___memberName0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggerBrowsableAttribute::.ctor(System.Diagnostics.DebuggerBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5 (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.FlagsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229 (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_m800849DDA5C873E722AECF3BFE2725B9C1565FCD (PreserveAttribute_tA5FB28C75AE9BB1B2F7DE004F1CC6DA9FDD7B3A3 * __this, const RuntimeMethod* method);
static void Photon3Unity3D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * tmp = (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 *)cache->attributes[0];
		AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D(tmp, il2cpp_codegen_string_new_wrapper("\x50\x68\x6F\x74\x6F\x6E\x33\x55\x6E\x69\x74\x79\x33\x44"), NULL);
	}
	{
		AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 * tmp = (AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 *)cache->attributes[1];
		AssemblyInformationalVersionAttribute__ctor_m9BF349D8F980B0ABAB2A6312E422915285FA1678(tmp, il2cpp_codegen_string_new_wrapper("\x34\x2E\x31\x2E\x36\x2E\x31\x34"), NULL);
	}
	{
		AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * tmp = (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F *)cache->attributes[2];
		AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D(tmp, il2cpp_codegen_string_new_wrapper("\x34\x2E\x31\x2E\x36\x2E\x31\x34"), NULL);
	}
	{
		AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * tmp = (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 *)cache->attributes[3];
		AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25(tmp, il2cpp_codegen_string_new_wrapper("\x50\x68\x6F\x74\x6F\x6E\x20\x2E\x4E\x65\x74\x20\x43\x6C\x69\x65\x6E\x74\x20\x4C\x69\x62\x72\x61\x72\x79\x2E\x20\x44\x65\x62\x75\x67\x2E"), NULL);
	}
	{
		AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * tmp = (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC *)cache->attributes[4];
		AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3(tmp, il2cpp_codegen_string_new_wrapper("\x28\x63\x29\x20\x45\x78\x69\x74\x20\x47\x61\x6D\x65\x73\x20\x47\x6D\x62\x48\x2C\x20\x68\x74\x74\x70\x3A\x2F\x2F\x77\x77\x77\x2E\x65\x78\x69\x74\x67\x61\x6D\x65\x73\x2E\x63\x6F\x6D"), NULL);
	}
	{
		AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C * tmp = (AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C *)cache->attributes[5];
		AssemblyConfigurationAttribute__ctor_m6EE76F5A155EDEA71967A32F78D777038ADD0757(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2D\x44\x65\x62\x75\x67"), NULL);
	}
	{
		AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * tmp = (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 *)cache->attributes[6];
		AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0(tmp, il2cpp_codegen_string_new_wrapper("\x45\x78\x69\x74\x20\x47\x61\x6D\x65\x73\x20\x47\x6D\x62\x48"), NULL);
	}
	{
		TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * tmp = (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 *)cache->attributes[7];
		TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D(tmp, il2cpp_codegen_string_new_wrapper("\x2E\x4E\x45\x54\x53\x74\x61\x6E\x64\x61\x72\x64\x2C\x56\x65\x72\x73\x69\x6F\x6E\x3D\x76\x32\x2E\x30"), NULL);
		TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[8];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 263LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[9];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[10];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[11];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * tmp = (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA *)cache->attributes[12];
		AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8(tmp, il2cpp_codegen_string_new_wrapper("\x50\x68\x6F\x74\x6F\x6E\x20\x2E\x4E\x65\x74\x20\x43\x6C\x69\x65\x6E\x74\x20\x4C\x69\x62\x72\x61\x72\x79\x2E\x20\x44\x65\x62\x75\x67\x2E"), NULL);
	}
}
static void NonAllocDictionary_2_t7639577C1D5272D1C10879900C3065DC469CFBB1_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void Hashtable_tA3A23234A5B8214B7A5B684A2980FB3CD2A1EAAB_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void EnetPeer_t313567A879F44D247FC39F46803DE02E2BA4DA56_CustomAttributesCacheGenerator_EnetPeer_U3CExecuteCommandU3Eb__66_0_mA6018B780686470AC0A839333E4DA4DF8BB9FB1D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_U3CServerIpAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_U3CServerPortU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_U3CAddressResolvedAsIpv6U3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_U3CUrlProtocolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_U3CUrlPathU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_get_State_mF1CF6F0B2E09C1DD1E5E0476FA922FB5916A43E6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_set_State_mDD306E439400F1091ADBBD993D3522859A33DC6C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerAddress_mF77D80EA8500C53D333BF7DCFE91DC56251E06CE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerAddress_mCF2342261013C43F65A95302822B37C778F81117(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_get_ProxyServerAddress_m7CA5DD6E23986C9DDFDB402CDB2C0989AE890131(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_set_ProxyServerAddress_m2103BB38F977578F550CF5A290C4542F3DFFAF3F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerIpAddress_m600A956BF5F7762BA1514D226B6AF190C250D218(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerIpAddress_m3C3992860A2F7C1D92E38F1261F24352C8965312(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerPort_mEE3709944719563B68AAD02B93016BC9EBE2F43E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerPort_m6D455CB8102241937FDAD0AF11E610A934127BAB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_get_AddressResolvedAsIpv6_mA20DEFEC8290618BE00365D479F8472851FF2BE4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_set_AddressResolvedAsIpv6_mEF8C1A482DE36777BB47BA5B327C3C84C49F6D06(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlProtocol_m3324FD15D92A55A3FB4821BEE498FF3FBA2BD6FE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlPath_m03950D521B3D58D3954C81E568CA2DA90B89A19D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_U3CHandleExceptionU3Eb__52_0_mC591498F279CE8F9529101F1C50FD391267C4DBB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_tBE1A580D37AACF2A108183C7F1DE6BC6D8D88491_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IProtocol_tC6046AEC3AA095D4A1AF94439061392104E6931C_CustomAttributesCacheGenerator_IProtocol_SerializeOperationRequest_m35F38DC5AB3A3B2DE2E05F46C80001880B8C3D23(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SimulationItem_tDDC110D4036465CA424987F81F3CDA2D60F3AB02_CustomAttributesCacheGenerator_U3CDelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void SimulationItem_tDDC110D4036465CA424987F81F3CDA2D60F3AB02_CustomAttributesCacheGenerator_SimulationItem_get_Delay_mCBF82C9C5ED6577DB8ADB35729C4D4780F3F6800(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SimulationItem_tDDC110D4036465CA424987F81F3CDA2D60F3AB02_CustomAttributesCacheGenerator_SimulationItem_set_Delay_m288F4810D16A0EEFA4BFD6DF08A6EB234595B966(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_tECF1FCC97FA049DC381FAD37FC09E3219F900BFA_CustomAttributesCacheGenerator_U3CLostPackagesOutU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void NetworkSimulationSet_tECF1FCC97FA049DC381FAD37FC09E3219F900BFA_CustomAttributesCacheGenerator_U3CLostPackagesInU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_tECF1FCC97FA049DC381FAD37FC09E3219F900BFA_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesOut_m42B2CB8832E0911F341C60CDC68F267185A30B0B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_tECF1FCC97FA049DC381FAD37FC09E3219F900BFA_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesOut_m98D96EEE7A388A025F18D63CAD921904568DB071(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_tECF1FCC97FA049DC381FAD37FC09E3219F900BFA_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesIn_m24AFA7BB3F517A1AFC3ADCB27578F1C79B4FA296(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_tECF1FCC97FA049DC381FAD37FC09E3219F900BFA_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesIn_m8A0199E3139F6C55C54CC33CC5E8343F9E85DEAB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ParameterDictionary_t433E7779691251FF54D33CE99A0B96BCA77D4068_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void InitV3Flags_tF0E56A7863528F4C7BB1F456794E6FBE798E31C2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[0];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
static void PeerBase_t6EF7E38DC2EED82FD11AC4CFB4931BEA3F43AA8C_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PeerBase_t6EF7E38DC2EED82FD11AC4CFB4931BEA3F43AA8C_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_t6EF7E38DC2EED82FD11AC4CFB4931BEA3F43AA8C_CustomAttributesCacheGenerator_PeerBase_get_ServerAddress_mB6E8039F45680D7699246F3A6D59EA46DCE1938D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_t6EF7E38DC2EED82FD11AC4CFB4931BEA3F43AA8C_CustomAttributesCacheGenerator_PeerBase_set_ServerAddress_m290C4A8E27AE7409E68F01CE2C9AC0E73CE8AC97(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_t6EF7E38DC2EED82FD11AC4CFB4931BEA3F43AA8C_CustomAttributesCacheGenerator_PeerBase_get_ProxyServerAddress_mC59B1504067FDB8DC4DC88542A49EA0FE69C2271(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_t6EF7E38DC2EED82FD11AC4CFB4931BEA3F43AA8C_CustomAttributesCacheGenerator_PeerBase_set_ProxyServerAddress_m0F815997088EF0FD635A78206A364B045148C83D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass108_0_tE7C1F9189669E6365471E5CF44BFB1BA705D0358_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass109_0_t61FC8F691E45694CC9E1C51BEAD6313F1C761E9C_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonClientWebSocket_t93DACB8935FD8D59F0ED44B5332019112C5F547E_CustomAttributesCacheGenerator_PhotonClientWebSocket__ctor_mE18300D17E4A7A957FC381B5329B221BC9130863(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tA5FB28C75AE9BB1B2F7DE004F1CC6DA9FDD7B3A3 * tmp = (PreserveAttribute_tA5FB28C75AE9BB1B2F7DE004F1CC6DA9FDD7B3A3 *)cache->attributes[0];
		PreserveAttribute__ctor_m800849DDA5C873E722AECF3BFE2725B9C1565FCD(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CCommandBufferSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CLimitOfUnreliableCommandsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_WarningSize(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x43\x68\x65\x63\x6B\x20\x51\x75\x65\x75\x65\x64\x4F\x75\x74\x67\x6F\x69\x6E\x67\x43\x6F\x6D\x6D\x61\x6E\x64\x73\x20\x61\x6E\x64\x20\x51\x75\x65\x75\x65\x64\x49\x6E\x63\x6F\x6D\x69\x6E\x67\x43\x6F\x6D\x6D\x61\x6E\x64\x73\x20\x6F\x6E\x20\x64\x65\x6D\x61\x6E\x64\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_NativeDatagramEncrypt(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x72\x65\x20\x64\x79\x6E\x61\x6D\x69\x63\x20\x6C\x69\x6E\x6B\x69\x6E\x67\x20\x69\x73\x20\x61\x76\x61\x69\x6C\x61\x62\x6C\x65\x2C\x20\x74\x68\x69\x73\x20\x6C\x69\x62\x72\x61\x72\x79\x20\x77\x69\x6C\x6C\x20\x61\x74\x74\x65\x6D\x70\x74\x20\x74\x6F\x20\x6C\x6F\x61\x64\x20\x69\x74\x20\x61\x6E\x64\x20\x66\x61\x6C\x6C\x62\x61\x63\x6B\x20\x74\x6F\x20\x61\x20\x6D\x61\x6E\x61\x67\x65\x64\x20\x69\x6D\x70\x6C\x65\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x69\x73\x20\x61\x6C\x77\x61\x79\x73\x20\x74\x72\x75\x65\x2E"), NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_CommandLogSize(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x74\x68\x65\x20\x49\x54\x72\x61\x66\x66\x69\x63\x52\x65\x63\x6F\x72\x64\x65\x72\x20\x74\x6F\x20\x63\x61\x70\x74\x75\x72\x65\x20\x61\x6C\x6C\x20\x74\x72\x61\x66\x66\x69\x63\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_NativeSocketLibAvailable(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x41\x20\x4E\x61\x74\x69\x76\x65\x20\x53\x6F\x63\x6B\x65\x74\x20\x69\x6D\x70\x6C\x65\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x69\x73\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x74\x68\x69\x73\x20\x44\x4C\x4C\x20\x62\x75\x74\x20\x64\x65\x6C\x69\x76\x65\x72\x65\x64\x20\x69\x6E\x20\x61\x20\x73\x65\x70\x61\x72\x61\x74\x65\x20\x61\x64\x64\x2D\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x61\x6C\x77\x61\x79\x73\x20\x72\x65\x74\x75\x72\x6E\x73\x20\x66\x61\x6C\x73\x65\x2E"), NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_NativePayloadEncryptionLibAvailable(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x61\x74\x69\x76\x65\x20\x50\x61\x79\x6C\x6F\x61\x64\x20\x45\x6E\x63\x72\x79\x70\x74\x69\x6F\x6E\x20\x69\x73\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x74\x68\x69\x73\x20\x44\x4C\x4C\x20\x62\x75\x74\x20\x64\x65\x6C\x69\x76\x65\x72\x65\x64\x20\x69\x6E\x20\x61\x20\x73\x65\x70\x61\x72\x61\x74\x65\x20\x61\x64\x64\x2D\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x61\x6C\x77\x61\x79\x73\x20\x72\x65\x74\x75\x72\x6E\x73\x20\x66\x61\x6C\x73\x65\x2E"), NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_NativeDatagramEncryptionLibAvailable(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x61\x74\x69\x76\x65\x20\x44\x61\x74\x61\x67\x72\x61\x6D\x20\x45\x6E\x63\x72\x79\x70\x74\x69\x6F\x6E\x20\x69\x73\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x74\x68\x69\x73\x20\x44\x4C\x4C\x20\x62\x75\x74\x20\x64\x65\x6C\x69\x76\x65\x72\x65\x64\x20\x69\x6E\x20\x61\x20\x73\x65\x70\x61\x72\x61\x74\x65\x20\x61\x64\x64\x2D\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x61\x6C\x77\x61\x79\x73\x20\x72\x65\x74\x75\x72\x6E\x73\x20\x66\x61\x6C\x73\x65\x2E"), NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CSerializationProtocolTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CSocketImplementationU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CListenerU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_OnDisconnectMessage(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CEnableServerTracingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CTransportProtocolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CIsSendingOnlyAcksU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CTrafficStatsIncomingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CTrafficStatsOutgoingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CTrafficStatsGameLevelU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CCountDiscardedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CDeltaUnreliableNumberU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_SerializationProtocolType_m7DD30559C302FA424971D60F9E59254A7F5BFE96(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_SerializationProtocolType_mC971A225AA0E88264348E4A85E6B53F4895D36EE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_SocketImplementation_m5FB0596C4AB0B19BFF0CFF2349F85E0E8820A8BD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_SocketImplementation_m71FB4C960FD6F799042D98FEAE1D343E438F57CF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_Listener_m085ABDCFCEE96468ECD5D80BAD4DB98E3A7D7557(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_Listener_m9BF100B5479885CAAF84A4632E1A59F35BF27544(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_add_OnDisconnectMessage_mB281D5A4D1F63954564B540788EC2BF461341B8C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_remove_OnDisconnectMessage_m43F38BE3DD0CF9C954E29A8EC3B6171B0A038A8F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_EnableServerTracing_mC09482654230E82877FBAEE068D3E04937843093(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_TransportProtocol_m1E3071D0BD6470712E18A941910421E9D5EAC223(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_TransportProtocol_m80D8D1379B517326A20F1248DDDB27947DF3DBEE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsIncoming_m2072E43A30C6CCEF64846498AC63DFECE0E3EBD4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsIncoming_mA65786630FE837F5089F2B5534FE0FE0BBCC6017(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsOutgoing_m7D5EEBFF9AA399CD587BA86F87026A6DA03EA05E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsOutgoing_mA8F71D9D33E4A35E5AFA9860E465C2EB7555D417(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsGameLevel_m4AB3ACDB568E3721C850A4B79FEF55CBB2B73225(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsGameLevel_m1D2FDBFE47C93B13CD8DD1F24953733252DC2DFD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_CountDiscarded_m43E98893289125423BC6BA8F14C5E8D7243405AA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_CountDiscarded_m2D8B00F1E0D1575D77797160D2E7DA21E2E75DC6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_DeltaUnreliableNumber_m5CD1D5BE733910C4391FFA674328B87B124F4DEE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_U3CEstablishEncryptionU3Eb__220_0_mFC3172FF93F8B9AE66DABB11EAC5D79D4FAB9129(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F____ClientVersion_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x73\x74\x61\x74\x69\x63\x20\x73\x74\x72\x69\x6E\x67\x20\x56\x65\x72\x73\x69\x6F\x6E\x20\x73\x68\x6F\x75\x6C\x64\x20\x62\x65\x20\x70\x72\x65\x66\x65\x72\x72\x65\x64\x2E"), NULL);
	}
}
static void OperationResponse_tE62D20B1ACADF446F481A7AE50AEBEFA8EBD0F7D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void EventData_t5F72D5236F39255454CDA0E0FA9A5DD4ED4422E5_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void Protocol16_tBB41B05949AE2C11E8F7F9162053E140DAFBD635_CustomAttributesCacheGenerator_Protocol16_SerializeOperationRequest_m31E37F496D5C10B0C39A2BA9AC3CBBFFD3D62A9F(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void Protocol16_tBB41B05949AE2C11E8F7F9162053E140DAFBD635_CustomAttributesCacheGenerator_Protocol16_SerializeParameterTable_m198C446DCE64C42D16CADDA0C24D5B98A232C144(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x6F\x66\x20\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x3C\x62\x79\x74\x65\x2C\x20\x6F\x62\x6A\x65\x63\x74\x3E\x2E"), NULL);
	}
}
static void Protocol18_tEE5C26144D277A298120F944B0153343033E5AC9_CustomAttributesCacheGenerator_Protocol18_ReadParameterTable_m636CB0F678EA1C947D6080A19B53844608624AED(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void Protocol18_tEE5C26144D277A298120F944B0153343033E5AC9_CustomAttributesCacheGenerator_Protocol18_SerializeOperationRequest_m3E4BCC61FB6FA4F38D9CF6AF05DB3F25E254A414(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SocketTcp_t4B84B1099036F05F335341024C6A88A96B300E9D_CustomAttributesCacheGenerator_SocketTcp__ctor_m05B07BEE0CF6A2E112E5B978D177C8FE6CBD7E70(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tA5FB28C75AE9BB1B2F7DE004F1CC6DA9FDD7B3A3 * tmp = (PreserveAttribute_tA5FB28C75AE9BB1B2F7DE004F1CC6DA9FDD7B3A3 *)cache->attributes[0];
		PreserveAttribute__ctor_m800849DDA5C873E722AECF3BFE2725B9C1565FCD(tmp, NULL);
	}
}
static void SocketTcpAsync_tBC8F9EF269FAF62D4B94CA13B9157D4389BAD0CF_CustomAttributesCacheGenerator_SocketTcpAsync__ctor_m181E15AAF94DF2AF75299FF8E8E2F97C6548AF7C(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tA5FB28C75AE9BB1B2F7DE004F1CC6DA9FDD7B3A3 * tmp = (PreserveAttribute_tA5FB28C75AE9BB1B2F7DE004F1CC6DA9FDD7B3A3 *)cache->attributes[0];
		PreserveAttribute__ctor_m800849DDA5C873E722AECF3BFE2725B9C1565FCD(tmp, NULL);
	}
}
static void SocketUdp_tDE2D58B7BC867A15E56A0816DD12FA2A508B1C8A_CustomAttributesCacheGenerator_SocketUdp__ctor_m29688E70D407EBC271D0CE8B36910E8D6C4B23B3(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tA5FB28C75AE9BB1B2F7DE004F1CC6DA9FDD7B3A3 * tmp = (PreserveAttribute_tA5FB28C75AE9BB1B2F7DE004F1CC6DA9FDD7B3A3 *)cache->attributes[0];
		PreserveAttribute__ctor_m800849DDA5C873E722AECF3BFE2725B9C1565FCD(tmp, NULL);
	}
}
static void SocketUdpAsync_t1F9B02E21D819EC6F5BD5457B625B1A3E0553E2A_CustomAttributesCacheGenerator_SocketUdpAsync__ctor_mDE82C57C7731C94252A6660C0E5B13D558D8EAF6(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tA5FB28C75AE9BB1B2F7DE004F1CC6DA9FDD7B3A3 * tmp = (PreserveAttribute_tA5FB28C75AE9BB1B2F7DE004F1CC6DA9FDD7B3A3 *)cache->attributes[0];
		PreserveAttribute__ctor_m800849DDA5C873E722AECF3BFE2725B9C1565FCD(tmp, NULL);
	}
}
static void SupportClass_t05673F24A06283918450ECFFEBA495B3A9967974_CustomAttributesCacheGenerator_IntegerMilliseconds(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x28\x6F\x72\x20\x65\x71\x75\x69\x76\x61\x6C\x65\x6E\x74\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void IntegerMillisecondsDelegate_tCF3F13EFBE9B7A1F57A50FD7CBF67933EB78BE7F_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x28\x6F\x72\x20\x65\x71\x75\x69\x76\x61\x6C\x65\x6E\x74\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void U3CU3Ec__DisplayClass6_0_t6FF263B0161C363888FA9A92863E335BC426E825_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_t7151A68D054D1C3C630256A89D337262AFC11A83_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3COperationByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3COperationCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CResultByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CResultCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CEventByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CEventCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CLongestEventCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CLongestMessageCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CLongestRawMessageCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CLongestEventCallbackCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenSendingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CDispatchIncomingCommandsCallsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CSendOutgoingCommandsCallsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationByteCount_mC80644B4D83C8DB17801EFFDD7BB03F1EE00D874(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationByteCount_mE74C0E7DBFB986E2664AE90EE6EBE6D1973F40BA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationCount_mBC5F02AA3C54D88CFABA8B9240620F42B510ACA3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationCount_mD0D2586192A6ABF833CB0F431CEF5DE7BFFD261A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultByteCount_mA47712401EB036A28A2620CB59655D27194CD43A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultByteCount_m698336D7BE9A9E496AC9766A040ED85AFFCD14AF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultCount_mCB4ED2E3C7B577DD71B86A629E4930AA3C990220(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultCount_mCDA879E02013FE6E3DE15E8B719C629579CF6C5E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventByteCount_m21AE90197C0FB5153271F6B3DE6FB6C6185A8CF5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventByteCount_m34A32BB6E950533FDD0577259233A543D34E7018(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventCount_mBC040E6AE9B97F412A5E3530B933A24C07235AA3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventCount_m3D318B2DA0A2C598FADDF49B054021D7465AA8A3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallback_m0C9C6F38E847C75BC1BD8774BD92925B485E8897(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallback_mB7E9D3F8FCA1C9B3D21C222D536A188184A6154C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_mAA4CB0A3AE8D50C6417ABA9F780C71E69BF0C6A5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_mE8B6DB8F49E488906E3D9623C3902FFBABA920F3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallback_m0DE20F2625DBE900B27765DE0A1013B6C7095F08(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallback_m8DFF2F238D47C4BBAED2A74A38F361B97429E7BC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestMessageCallback_m08AD88A4CA68FC6C649BF0C04D523287D9E19D09(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestMessageCallback_m297718665B1325979A2F8292F3E47B4BE096018C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestRawMessageCallback_m8A690461AFE1E9696BAAF100BC423958619D9088(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestRawMessageCallback_mE1C5BAB1CB9B5479D5AA3A286D763F6C55BBA8E8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallbackCode_m4F74CDEBEFE387DC920E1FF7B165013588443533(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallbackCode_m48646D676A6AC2150FF6981DC4338C97CBD61373(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m335155142FA5FA6B6A03044BE55261CA4F9B9ADA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m3576BFDF199CFCB8D15ED3924A1F0A1DB08C9C98(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m245C042D2469E74852C34F65ED649A6F133194B7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m4E6CAEF84118609608743C3447A333BF536A766A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m8A35C03D39092D8283394BAD36708E90774BD4E6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m87A082ADF74F6CCE00C0ECD34FF2035159C794BB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_mF6511442C0145C4C4562BC6D16BFD20B4FFF55AD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m2505F120F9DE64F53212E4C88C94B1990983D602(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CPackageHeaderSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CReliableCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CUnreliableCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CFragmentCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CControlCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CTotalPacketCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CTotalCommandsInPacketsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CReliableCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CUnreliableCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CFragmentCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CControlCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CTimestampOfLastAckU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CTimestampOfLastReliableCommandU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_PackageHeaderSize_m56E4B7787BE9B7BF87C62AE02BA5A213B6411A10(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_PackageHeaderSize_m4883136040C52FD5C8DA6218FF54B9402935695D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandCount_m11664D7D8FFB7C704EEB160EC57025D7A0EF341F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandCount_m088B9EC800863CB838CB947AAB6892663C2CAE66(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandCount_mB11C27AE0AC6865046616194AC455E773B8748B5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandCount_m8FFE32C04041E3D7EF34AF1B444A69D7D52BA26B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandCount_m6C2A3D4B70269B2BD3C88A018021DD8F4E675205(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandCount_mABB8FE6477E57541D180934F99E11D80405FCEF9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandCount_m9AD5D491392D87F1B3E66F46497961F61821A63F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandCount_m99DB551D16A58FA63BA3DDC8430516E8C9A1B248(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_TotalPacketCount_mFDB013C456DE640FDFD1094C2A21A0D820A327C6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_TotalPacketCount_mF30C27235B2DFCC77DB1C3157876D8251A7E0995(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_TotalCommandsInPackets_mAE8189E9D92E80D2015376F211F02F53DC83FF57(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_TotalCommandsInPackets_m60E40E9DDFBC35FEC0A0965835FB2115B31E37DF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandBytes_mE33BFBEE12A134E00459AA6153ECE1850930E153(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandBytes_mE8D4ACB9ABC8C645C6415EFCBB1249D2CF1689A3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandBytes_m21731BE78233DA12AE7523951C3CBB249D378536(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandBytes_m4571B9818DAA3BBDEAA81BDFFC49522AC090DF55(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandBytes_mB3CAE5C47D171EB7A119573166A814F3A062D645(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandBytes_m16AB2BC3F1081072559F83DF4393B9751028A1C8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandBytes_mFEF1203B6C4BDCF72C69062CF84CE3207EFD4225(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandBytes_m03145ED7B4E1BE47008BF6C1606C4AD197392945(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastAck_m05C04CB4D47430EE84EB6759213B0AD8A3CBD8D7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastReliableCommand_m0F6D432A97164561477B989F779094159545935A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapper_1_t53101195E7E94499E3386583731434071C62FB01_CustomAttributesCacheGenerator_U3CReturnPoolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void StructWrapper_1_t53101195E7E94499E3386583731434071C62FB01_CustomAttributesCacheGenerator_StructWrapper_1_get_ReturnPool_mA58CDCFCA7D0CD449682FB1CF41E77B5A83DF98F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapper_1_t53101195E7E94499E3386583731434071C62FB01_CustomAttributesCacheGenerator_StructWrapper_1_set_ReturnPool_m8912349A1F87A632CE177C0A70BC702961600241(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapperUtility_tE791E35DF4D96F751D514C22064E8C97B04BE498_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void StructWrapperUtility_tE791E35DF4D96F751D514C22064E8C97B04BE498_CustomAttributesCacheGenerator_StructWrapperUtility_Unwrap_mB744F553E78C56D19B13BB833D70F4FDD1A5DD2B(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void StructWrapperUtility_tE791E35DF4D96F751D514C22064E8C97B04BE498_CustomAttributesCacheGenerator_StructWrapperUtility_Get_mFF78243D6B56AE9A90405940EE2EB1FF69395DE1(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CPrivateImplementationDetailsU3E_tEF86B2C0A0039515D5C7A2D2120A4785D48AA78C_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Photon3Unity3D_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Photon3Unity3D_AttributeGenerators[197] = 
{
	NonAllocDictionary_2_t7639577C1D5272D1C10879900C3065DC469CFBB1_CustomAttributesCacheGenerator,
	Hashtable_tA3A23234A5B8214B7A5B684A2980FB3CD2A1EAAB_CustomAttributesCacheGenerator,
	U3CU3Ec_tBE1A580D37AACF2A108183C7F1DE6BC6D8D88491_CustomAttributesCacheGenerator,
	ParameterDictionary_t433E7779691251FF54D33CE99A0B96BCA77D4068_CustomAttributesCacheGenerator,
	InitV3Flags_tF0E56A7863528F4C7BB1F456794E6FBE798E31C2_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass108_0_tE7C1F9189669E6365471E5CF44BFB1BA705D0358_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass109_0_t61FC8F691E45694CC9E1C51BEAD6313F1C761E9C_CustomAttributesCacheGenerator,
	OperationResponse_tE62D20B1ACADF446F481A7AE50AEBEFA8EBD0F7D_CustomAttributesCacheGenerator,
	EventData_t5F72D5236F39255454CDA0E0FA9A5DD4ED4422E5_CustomAttributesCacheGenerator,
	IntegerMillisecondsDelegate_tCF3F13EFBE9B7A1F57A50FD7CBF67933EB78BE7F_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass6_0_t6FF263B0161C363888FA9A92863E335BC426E825_CustomAttributesCacheGenerator,
	U3CU3Ec_t7151A68D054D1C3C630256A89D337262AFC11A83_CustomAttributesCacheGenerator,
	StructWrapperUtility_tE791E35DF4D96F751D514C22064E8C97B04BE498_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_tEF86B2C0A0039515D5C7A2D2120A4785D48AA78C_CustomAttributesCacheGenerator,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_U3CServerIpAddressU3Ek__BackingField,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_U3CServerPortU3Ek__BackingField,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_U3CAddressResolvedAsIpv6U3Ek__BackingField,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_U3CUrlProtocolU3Ek__BackingField,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_U3CUrlPathU3Ek__BackingField,
	SimulationItem_tDDC110D4036465CA424987F81F3CDA2D60F3AB02_CustomAttributesCacheGenerator_U3CDelayU3Ek__BackingField,
	NetworkSimulationSet_tECF1FCC97FA049DC381FAD37FC09E3219F900BFA_CustomAttributesCacheGenerator_U3CLostPackagesOutU3Ek__BackingField,
	NetworkSimulationSet_tECF1FCC97FA049DC381FAD37FC09E3219F900BFA_CustomAttributesCacheGenerator_U3CLostPackagesInU3Ek__BackingField,
	PeerBase_t6EF7E38DC2EED82FD11AC4CFB4931BEA3F43AA8C_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField,
	PeerBase_t6EF7E38DC2EED82FD11AC4CFB4931BEA3F43AA8C_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CCommandBufferSizeU3Ek__BackingField,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CLimitOfUnreliableCommandsU3Ek__BackingField,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_WarningSize,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_NativeDatagramEncrypt,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_CommandLogSize,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_NativeSocketLibAvailable,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_NativePayloadEncryptionLibAvailable,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_NativeDatagramEncryptionLibAvailable,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CSerializationProtocolTypeU3Ek__BackingField,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CSocketImplementationU3Ek__BackingField,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CListenerU3Ek__BackingField,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_OnDisconnectMessage,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CEnableServerTracingU3Ek__BackingField,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CTransportProtocolU3Ek__BackingField,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CIsSendingOnlyAcksU3Ek__BackingField,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CTrafficStatsIncomingU3Ek__BackingField,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CTrafficStatsOutgoingU3Ek__BackingField,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CTrafficStatsGameLevelU3Ek__BackingField,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CCountDiscardedU3Ek__BackingField,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_U3CDeltaUnreliableNumberU3Ek__BackingField,
	SupportClass_t05673F24A06283918450ECFFEBA495B3A9967974_CustomAttributesCacheGenerator_IntegerMilliseconds,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3COperationByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3COperationCountU3Ek__BackingField,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CResultByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CResultCountU3Ek__BackingField,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CEventByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CEventCountU3Ek__BackingField,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CLongestEventCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CLongestMessageCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CLongestRawMessageCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CLongestEventCallbackCodeU3Ek__BackingField,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenSendingU3Ek__BackingField,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CDispatchIncomingCommandsCallsU3Ek__BackingField,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_U3CSendOutgoingCommandsCallsU3Ek__BackingField,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CPackageHeaderSizeU3Ek__BackingField,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CReliableCommandCountU3Ek__BackingField,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CUnreliableCommandCountU3Ek__BackingField,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CFragmentCommandCountU3Ek__BackingField,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CControlCommandCountU3Ek__BackingField,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CTotalPacketCountU3Ek__BackingField,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CTotalCommandsInPacketsU3Ek__BackingField,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CReliableCommandBytesU3Ek__BackingField,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CUnreliableCommandBytesU3Ek__BackingField,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CFragmentCommandBytesU3Ek__BackingField,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CControlCommandBytesU3Ek__BackingField,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CTimestampOfLastAckU3Ek__BackingField,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_U3CTimestampOfLastReliableCommandU3Ek__BackingField,
	StructWrapper_1_t53101195E7E94499E3386583731434071C62FB01_CustomAttributesCacheGenerator_U3CReturnPoolU3Ek__BackingField,
	EnetPeer_t313567A879F44D247FC39F46803DE02E2BA4DA56_CustomAttributesCacheGenerator_EnetPeer_U3CExecuteCommandU3Eb__66_0_mA6018B780686470AC0A839333E4DA4DF8BB9FB1D,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_get_State_mF1CF6F0B2E09C1DD1E5E0476FA922FB5916A43E6,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_set_State_mDD306E439400F1091ADBBD993D3522859A33DC6C,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerAddress_mF77D80EA8500C53D333BF7DCFE91DC56251E06CE,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerAddress_mCF2342261013C43F65A95302822B37C778F81117,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_get_ProxyServerAddress_m7CA5DD6E23986C9DDFDB402CDB2C0989AE890131,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_set_ProxyServerAddress_m2103BB38F977578F550CF5A290C4542F3DFFAF3F,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerIpAddress_m600A956BF5F7762BA1514D226B6AF190C250D218,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerIpAddress_m3C3992860A2F7C1D92E38F1261F24352C8965312,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerPort_mEE3709944719563B68AAD02B93016BC9EBE2F43E,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerPort_m6D455CB8102241937FDAD0AF11E610A934127BAB,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_get_AddressResolvedAsIpv6_mA20DEFEC8290618BE00365D479F8472851FF2BE4,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_set_AddressResolvedAsIpv6_mEF8C1A482DE36777BB47BA5B327C3C84C49F6D06,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlProtocol_m3324FD15D92A55A3FB4821BEE498FF3FBA2BD6FE,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlPath_m03950D521B3D58D3954C81E568CA2DA90B89A19D,
	IPhotonSocket_tD78EA19BF35F354B869B77C99D8E50691876862B_CustomAttributesCacheGenerator_IPhotonSocket_U3CHandleExceptionU3Eb__52_0_mC591498F279CE8F9529101F1C50FD391267C4DBB,
	IProtocol_tC6046AEC3AA095D4A1AF94439061392104E6931C_CustomAttributesCacheGenerator_IProtocol_SerializeOperationRequest_m35F38DC5AB3A3B2DE2E05F46C80001880B8C3D23,
	SimulationItem_tDDC110D4036465CA424987F81F3CDA2D60F3AB02_CustomAttributesCacheGenerator_SimulationItem_get_Delay_mCBF82C9C5ED6577DB8ADB35729C4D4780F3F6800,
	SimulationItem_tDDC110D4036465CA424987F81F3CDA2D60F3AB02_CustomAttributesCacheGenerator_SimulationItem_set_Delay_m288F4810D16A0EEFA4BFD6DF08A6EB234595B966,
	NetworkSimulationSet_tECF1FCC97FA049DC381FAD37FC09E3219F900BFA_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesOut_m42B2CB8832E0911F341C60CDC68F267185A30B0B,
	NetworkSimulationSet_tECF1FCC97FA049DC381FAD37FC09E3219F900BFA_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesOut_m98D96EEE7A388A025F18D63CAD921904568DB071,
	NetworkSimulationSet_tECF1FCC97FA049DC381FAD37FC09E3219F900BFA_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesIn_m24AFA7BB3F517A1AFC3ADCB27578F1C79B4FA296,
	NetworkSimulationSet_tECF1FCC97FA049DC381FAD37FC09E3219F900BFA_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesIn_m8A0199E3139F6C55C54CC33CC5E8343F9E85DEAB,
	PeerBase_t6EF7E38DC2EED82FD11AC4CFB4931BEA3F43AA8C_CustomAttributesCacheGenerator_PeerBase_get_ServerAddress_mB6E8039F45680D7699246F3A6D59EA46DCE1938D,
	PeerBase_t6EF7E38DC2EED82FD11AC4CFB4931BEA3F43AA8C_CustomAttributesCacheGenerator_PeerBase_set_ServerAddress_m290C4A8E27AE7409E68F01CE2C9AC0E73CE8AC97,
	PeerBase_t6EF7E38DC2EED82FD11AC4CFB4931BEA3F43AA8C_CustomAttributesCacheGenerator_PeerBase_get_ProxyServerAddress_mC59B1504067FDB8DC4DC88542A49EA0FE69C2271,
	PeerBase_t6EF7E38DC2EED82FD11AC4CFB4931BEA3F43AA8C_CustomAttributesCacheGenerator_PeerBase_set_ProxyServerAddress_m0F815997088EF0FD635A78206A364B045148C83D,
	PhotonClientWebSocket_t93DACB8935FD8D59F0ED44B5332019112C5F547E_CustomAttributesCacheGenerator_PhotonClientWebSocket__ctor_mE18300D17E4A7A957FC381B5329B221BC9130863,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_SerializationProtocolType_m7DD30559C302FA424971D60F9E59254A7F5BFE96,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_SerializationProtocolType_mC971A225AA0E88264348E4A85E6B53F4895D36EE,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_SocketImplementation_m5FB0596C4AB0B19BFF0CFF2349F85E0E8820A8BD,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_SocketImplementation_m71FB4C960FD6F799042D98FEAE1D343E438F57CF,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_Listener_m085ABDCFCEE96468ECD5D80BAD4DB98E3A7D7557,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_Listener_m9BF100B5479885CAAF84A4632E1A59F35BF27544,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_add_OnDisconnectMessage_mB281D5A4D1F63954564B540788EC2BF461341B8C,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_remove_OnDisconnectMessage_m43F38BE3DD0CF9C954E29A8EC3B6171B0A038A8F,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_EnableServerTracing_mC09482654230E82877FBAEE068D3E04937843093,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_TransportProtocol_m1E3071D0BD6470712E18A941910421E9D5EAC223,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_TransportProtocol_m80D8D1379B517326A20F1248DDDB27947DF3DBEE,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsIncoming_m2072E43A30C6CCEF64846498AC63DFECE0E3EBD4,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsIncoming_mA65786630FE837F5089F2B5534FE0FE0BBCC6017,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsOutgoing_m7D5EEBFF9AA399CD587BA86F87026A6DA03EA05E,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsOutgoing_mA8F71D9D33E4A35E5AFA9860E465C2EB7555D417,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsGameLevel_m4AB3ACDB568E3721C850A4B79FEF55CBB2B73225,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsGameLevel_m1D2FDBFE47C93B13CD8DD1F24953733252DC2DFD,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_get_CountDiscarded_m43E98893289125423BC6BA8F14C5E8D7243405AA,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_CountDiscarded_m2D8B00F1E0D1575D77797160D2E7DA21E2E75DC6,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_set_DeltaUnreliableNumber_m5CD1D5BE733910C4391FFA674328B87B124F4DEE,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_U3CEstablishEncryptionU3Eb__220_0_mFC3172FF93F8B9AE66DABB11EAC5D79D4FAB9129,
	Protocol16_tBB41B05949AE2C11E8F7F9162053E140DAFBD635_CustomAttributesCacheGenerator_Protocol16_SerializeOperationRequest_m31E37F496D5C10B0C39A2BA9AC3CBBFFD3D62A9F,
	Protocol16_tBB41B05949AE2C11E8F7F9162053E140DAFBD635_CustomAttributesCacheGenerator_Protocol16_SerializeParameterTable_m198C446DCE64C42D16CADDA0C24D5B98A232C144,
	Protocol18_tEE5C26144D277A298120F944B0153343033E5AC9_CustomAttributesCacheGenerator_Protocol18_ReadParameterTable_m636CB0F678EA1C947D6080A19B53844608624AED,
	Protocol18_tEE5C26144D277A298120F944B0153343033E5AC9_CustomAttributesCacheGenerator_Protocol18_SerializeOperationRequest_m3E4BCC61FB6FA4F38D9CF6AF05DB3F25E254A414,
	SocketTcp_t4B84B1099036F05F335341024C6A88A96B300E9D_CustomAttributesCacheGenerator_SocketTcp__ctor_m05B07BEE0CF6A2E112E5B978D177C8FE6CBD7E70,
	SocketTcpAsync_tBC8F9EF269FAF62D4B94CA13B9157D4389BAD0CF_CustomAttributesCacheGenerator_SocketTcpAsync__ctor_m181E15AAF94DF2AF75299FF8E8E2F97C6548AF7C,
	SocketUdp_tDE2D58B7BC867A15E56A0816DD12FA2A508B1C8A_CustomAttributesCacheGenerator_SocketUdp__ctor_m29688E70D407EBC271D0CE8B36910E8D6C4B23B3,
	SocketUdpAsync_t1F9B02E21D819EC6F5BD5457B625B1A3E0553E2A_CustomAttributesCacheGenerator_SocketUdpAsync__ctor_mDE82C57C7731C94252A6660C0E5B13D558D8EAF6,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationByteCount_mC80644B4D83C8DB17801EFFDD7BB03F1EE00D874,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationByteCount_mE74C0E7DBFB986E2664AE90EE6EBE6D1973F40BA,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationCount_mBC5F02AA3C54D88CFABA8B9240620F42B510ACA3,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationCount_mD0D2586192A6ABF833CB0F431CEF5DE7BFFD261A,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultByteCount_mA47712401EB036A28A2620CB59655D27194CD43A,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultByteCount_m698336D7BE9A9E496AC9766A040ED85AFFCD14AF,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultCount_mCB4ED2E3C7B577DD71B86A629E4930AA3C990220,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultCount_mCDA879E02013FE6E3DE15E8B719C629579CF6C5E,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventByteCount_m21AE90197C0FB5153271F6B3DE6FB6C6185A8CF5,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventByteCount_m34A32BB6E950533FDD0577259233A543D34E7018,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventCount_mBC040E6AE9B97F412A5E3530B933A24C07235AA3,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventCount_m3D318B2DA0A2C598FADDF49B054021D7465AA8A3,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallback_m0C9C6F38E847C75BC1BD8774BD92925B485E8897,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallback_mB7E9D3F8FCA1C9B3D21C222D536A188184A6154C,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_mAA4CB0A3AE8D50C6417ABA9F780C71E69BF0C6A5,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_mE8B6DB8F49E488906E3D9623C3902FFBABA920F3,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallback_m0DE20F2625DBE900B27765DE0A1013B6C7095F08,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallback_m8DFF2F238D47C4BBAED2A74A38F361B97429E7BC,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestMessageCallback_m08AD88A4CA68FC6C649BF0C04D523287D9E19D09,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestMessageCallback_m297718665B1325979A2F8292F3E47B4BE096018C,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestRawMessageCallback_m8A690461AFE1E9696BAAF100BC423958619D9088,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestRawMessageCallback_mE1C5BAB1CB9B5479D5AA3A286D763F6C55BBA8E8,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallbackCode_m4F74CDEBEFE387DC920E1FF7B165013588443533,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallbackCode_m48646D676A6AC2150FF6981DC4338C97CBD61373,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m335155142FA5FA6B6A03044BE55261CA4F9B9ADA,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m3576BFDF199CFCB8D15ED3924A1F0A1DB08C9C98,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m245C042D2469E74852C34F65ED649A6F133194B7,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m4E6CAEF84118609608743C3447A333BF536A766A,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m8A35C03D39092D8283394BAD36708E90774BD4E6,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m87A082ADF74F6CCE00C0ECD34FF2035159C794BB,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_mF6511442C0145C4C4562BC6D16BFD20B4FFF55AD,
	TrafficStatsGameLevel_tBA6D170D9176AB477CEE9ABBFFDA48B693C4BEE1_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m2505F120F9DE64F53212E4C88C94B1990983D602,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_PackageHeaderSize_m56E4B7787BE9B7BF87C62AE02BA5A213B6411A10,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_PackageHeaderSize_m4883136040C52FD5C8DA6218FF54B9402935695D,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandCount_m11664D7D8FFB7C704EEB160EC57025D7A0EF341F,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandCount_m088B9EC800863CB838CB947AAB6892663C2CAE66,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandCount_mB11C27AE0AC6865046616194AC455E773B8748B5,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandCount_m8FFE32C04041E3D7EF34AF1B444A69D7D52BA26B,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandCount_m6C2A3D4B70269B2BD3C88A018021DD8F4E675205,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandCount_mABB8FE6477E57541D180934F99E11D80405FCEF9,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandCount_m9AD5D491392D87F1B3E66F46497961F61821A63F,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandCount_m99DB551D16A58FA63BA3DDC8430516E8C9A1B248,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_TotalPacketCount_mFDB013C456DE640FDFD1094C2A21A0D820A327C6,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_TotalPacketCount_mF30C27235B2DFCC77DB1C3157876D8251A7E0995,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_TotalCommandsInPackets_mAE8189E9D92E80D2015376F211F02F53DC83FF57,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_TotalCommandsInPackets_m60E40E9DDFBC35FEC0A0965835FB2115B31E37DF,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandBytes_mE33BFBEE12A134E00459AA6153ECE1850930E153,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandBytes_mE8D4ACB9ABC8C645C6415EFCBB1249D2CF1689A3,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandBytes_m21731BE78233DA12AE7523951C3CBB249D378536,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandBytes_m4571B9818DAA3BBDEAA81BDFFC49522AC090DF55,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandBytes_mB3CAE5C47D171EB7A119573166A814F3A062D645,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandBytes_m16AB2BC3F1081072559F83DF4393B9751028A1C8,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandBytes_mFEF1203B6C4BDCF72C69062CF84CE3207EFD4225,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandBytes_m03145ED7B4E1BE47008BF6C1606C4AD197392945,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastAck_m05C04CB4D47430EE84EB6759213B0AD8A3CBD8D7,
	TrafficStats_tDB74020BB03F0F5123C45BB7D1383FC069842662_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastReliableCommand_m0F6D432A97164561477B989F779094159545935A,
	StructWrapper_1_t53101195E7E94499E3386583731434071C62FB01_CustomAttributesCacheGenerator_StructWrapper_1_get_ReturnPool_mA58CDCFCA7D0CD449682FB1CF41E77B5A83DF98F,
	StructWrapper_1_t53101195E7E94499E3386583731434071C62FB01_CustomAttributesCacheGenerator_StructWrapper_1_set_ReturnPool_m8912349A1F87A632CE177C0A70BC702961600241,
	StructWrapperUtility_tE791E35DF4D96F751D514C22064E8C97B04BE498_CustomAttributesCacheGenerator_StructWrapperUtility_Unwrap_mB744F553E78C56D19B13BB833D70F4FDD1A5DD2B,
	StructWrapperUtility_tE791E35DF4D96F751D514C22064E8C97B04BE498_CustomAttributesCacheGenerator_StructWrapperUtility_Get_mFF78243D6B56AE9A90405940EE2EB1FF69395DE1,
	PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F_CustomAttributesCacheGenerator_PhotonPeer_t1DDBCD7891A0BBF7A1B239CA6F0311110A43C23F____ClientVersion_PropertyInfo,
	Photon3Unity3D_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__frameworkDisplayName_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
