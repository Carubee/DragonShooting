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

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// _2dxFX_GoldenFX
struct _2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06;
// _2dxFX_GrassFX
struct _2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B;
// _2dxFX_GrassMultiFX
struct _2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9;
// _2dxFX_GrayScale
struct _2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB;
// _2dxFX_HSV
struct _2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F;
// _2dxFX_Heat
struct _2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E;
// _2dxFX_Hologram
struct _2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1;
// _2dxFX_Hologram2
struct _2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E;
// _2dxFX_Hologram3
struct _2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181;
// _2dxFX_Ice
struct _2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858;
// _2dxFX_IcedFX
struct _2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85;
// _2dxFX_Jelly
struct _2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0009BF01CFB4657E9EC895B1FBB478831AD13CA0;
IL2CPP_EXTERN_C String_t* _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC;
IL2CPP_EXTERN_C String_t* _stringLiteral06F3CB9DDBDD7E3B9CACE1A46664B54A171FA7FF;
IL2CPP_EXTERN_C String_t* _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3;
IL2CPP_EXTERN_C String_t* _stringLiteral14BE754BF8F5400050442C7A7201D90C19ABEEF1;
IL2CPP_EXTERN_C String_t* _stringLiteral16ECCB3D7241492FF112254B62584E63D9752D80;
IL2CPP_EXTERN_C String_t* _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E;
IL2CPP_EXTERN_C String_t* _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266;
IL2CPP_EXTERN_C String_t* _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59;
IL2CPP_EXTERN_C String_t* _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716;
IL2CPP_EXTERN_C String_t* _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75;
IL2CPP_EXTERN_C String_t* _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25;
IL2CPP_EXTERN_C String_t* _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227;
IL2CPP_EXTERN_C String_t* _stringLiteral58AAFF72F520DA2B9EE6AA369289D02EDB353A4F;
IL2CPP_EXTERN_C String_t* _stringLiteral69C9230FB0C7F891F4264EBA12C85C9C1E073237;
IL2CPP_EXTERN_C String_t* _stringLiteral6C1D39728B6BDA70199CD57CB74792961097EEF4;
IL2CPP_EXTERN_C String_t* _stringLiteral6CFC2B48D932FEF52252855F81D3970C490F2095;
IL2CPP_EXTERN_C String_t* _stringLiteral725B75E738B55ED8EF009980C3AC6820D195BB18;
IL2CPP_EXTERN_C String_t* _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1;
IL2CPP_EXTERN_C String_t* _stringLiteral7FE5213919E7409ED5D651CE5D16A1B023774D3F;
IL2CPP_EXTERN_C String_t* _stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9EEC191F53AD169AC62F0A08F647DA34EB1911A7;
IL2CPP_EXTERN_C String_t* _stringLiteralBBEDCFFA21A0842E1CF747265175D6B76155BED8;
IL2CPP_EXTERN_C String_t* _stringLiteralBBF46CBBBD7F63FB47A67AE4772CAA081A121020;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E94BD1050374F96F444E696EECC1EFAC118519;
IL2CPP_EXTERN_C String_t* _stringLiteralC20DCA4FAC181BC1E26F2DC821B7FEC3ED791BE5;
IL2CPP_EXTERN_C String_t* _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527;
IL2CPP_EXTERN_C String_t* _stringLiteralD7719EBA22A5A5BC23DCFE8ACCA5550D5CA7654D;
IL2CPP_EXTERN_C String_t* _stringLiteralDF8B765C1627860F9A4962977BF369C50E405DE6;
IL2CPP_EXTERN_C String_t* _stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1;
IL2CPP_EXTERN_C String_t* _stringLiteralE8C3391C4B3DE37D423934C11466D08463BEF8A7;
IL2CPP_EXTERN_C String_t* _stringLiteralFB986E40913D5294E726405E2650B1FC74F9E6ED;
IL2CPP_EXTERN_C String_t* _stringLiteralFF8E1F5EF1340BB4DE17EAA7636D1021F91E9C17;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;

struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;

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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// UnityEngine.Keyframe
struct Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.TextureWrapMode
struct TextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.WrapMode
struct WrapMode_t0DF566E32B136795606714DB9A11A3DC170F5468 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrapMode_t0DF566E32B136795606714DB9A11A3DC170F5468, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// _2dxFX_GoldenFX
struct _2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material _2dxFX_GoldenFX::ForceMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___ForceMaterial_4;
	// System.Boolean _2dxFX_GoldenFX::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_GoldenFX::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_GoldenFX::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_GoldenFX::Golden
	float ___Golden_8;
	// System.Int32 _2dxFX_GoldenFX::ShaderChange
	int32_t ___ShaderChange_9;
	// UnityEngine.Material _2dxFX_GoldenFX::tempMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___tempMaterial_10;
	// UnityEngine.Material _2dxFX_GoldenFX::defaultMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultMaterial_11;
	// UnityEngine.UI.Image _2dxFX_GoldenFX::CanvasImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___CanvasImage_12;

public:
	inline static int32_t get_offset_of_ForceMaterial_4() { return static_cast<int32_t>(offsetof(_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06, ___ForceMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_ForceMaterial_4() const { return ___ForceMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_ForceMaterial_4() { return &___ForceMaterial_4; }
	inline void set_ForceMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___ForceMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForceMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveChange_5() { return static_cast<int32_t>(offsetof(_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06, ___ActiveChange_5)); }
	inline bool get_ActiveChange_5() const { return ___ActiveChange_5; }
	inline bool* get_address_of_ActiveChange_5() { return &___ActiveChange_5; }
	inline void set_ActiveChange_5(bool value)
	{
		___ActiveChange_5 = value;
	}

	inline static int32_t get_offset_of_shader_6() { return static_cast<int32_t>(offsetof(_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06, ___shader_6)); }
	inline String_t* get_shader_6() const { return ___shader_6; }
	inline String_t** get_address_of_shader_6() { return &___shader_6; }
	inline void set_shader_6(String_t* value)
	{
		___shader_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shader_6), (void*)value);
	}

	inline static int32_t get_offset_of__Alpha_7() { return static_cast<int32_t>(offsetof(_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06, ____Alpha_7)); }
	inline float get__Alpha_7() const { return ____Alpha_7; }
	inline float* get_address_of__Alpha_7() { return &____Alpha_7; }
	inline void set__Alpha_7(float value)
	{
		____Alpha_7 = value;
	}

	inline static int32_t get_offset_of_Golden_8() { return static_cast<int32_t>(offsetof(_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06, ___Golden_8)); }
	inline float get_Golden_8() const { return ___Golden_8; }
	inline float* get_address_of_Golden_8() { return &___Golden_8; }
	inline void set_Golden_8(float value)
	{
		___Golden_8 = value;
	}

	inline static int32_t get_offset_of_ShaderChange_9() { return static_cast<int32_t>(offsetof(_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06, ___ShaderChange_9)); }
	inline int32_t get_ShaderChange_9() const { return ___ShaderChange_9; }
	inline int32_t* get_address_of_ShaderChange_9() { return &___ShaderChange_9; }
	inline void set_ShaderChange_9(int32_t value)
	{
		___ShaderChange_9 = value;
	}

	inline static int32_t get_offset_of_tempMaterial_10() { return static_cast<int32_t>(offsetof(_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06, ___tempMaterial_10)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_tempMaterial_10() const { return ___tempMaterial_10; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_tempMaterial_10() { return &___tempMaterial_10; }
	inline void set_tempMaterial_10(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___tempMaterial_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempMaterial_10), (void*)value);
	}

	inline static int32_t get_offset_of_defaultMaterial_11() { return static_cast<int32_t>(offsetof(_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06, ___defaultMaterial_11)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultMaterial_11() const { return ___defaultMaterial_11; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultMaterial_11() { return &___defaultMaterial_11; }
	inline void set_defaultMaterial_11(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_11), (void*)value);
	}

	inline static int32_t get_offset_of_CanvasImage_12() { return static_cast<int32_t>(offsetof(_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06, ___CanvasImage_12)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_CanvasImage_12() const { return ___CanvasImage_12; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_CanvasImage_12() { return &___CanvasImage_12; }
	inline void set_CanvasImage_12(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___CanvasImage_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CanvasImage_12), (void*)value);
	}
};


// _2dxFX_GrassFX
struct _2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material _2dxFX_GrassFX::ForceMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___ForceMaterial_4;
	// System.Boolean _2dxFX_GrassFX::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_GrassFX::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_GrassFX::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_GrassFX::Heat
	float ___Heat_8;
	// System.Single _2dxFX_GrassFX::Speed
	float ___Speed_9;
	// UnityEngine.AnimationCurve _2dxFX_GrassFX::Wind
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___Wind_10;
	// System.Single _2dxFX_GrassFX::WindTime1
	float ___WindTime1_11;
	// System.Int32 _2dxFX_GrassFX::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_GrassFX::tempMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_GrassFX::defaultMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_GrassFX::CanvasImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___CanvasImage_15;

public:
	inline static int32_t get_offset_of_ForceMaterial_4() { return static_cast<int32_t>(offsetof(_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B, ___ForceMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_ForceMaterial_4() const { return ___ForceMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_ForceMaterial_4() { return &___ForceMaterial_4; }
	inline void set_ForceMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___ForceMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForceMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveChange_5() { return static_cast<int32_t>(offsetof(_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B, ___ActiveChange_5)); }
	inline bool get_ActiveChange_5() const { return ___ActiveChange_5; }
	inline bool* get_address_of_ActiveChange_5() { return &___ActiveChange_5; }
	inline void set_ActiveChange_5(bool value)
	{
		___ActiveChange_5 = value;
	}

	inline static int32_t get_offset_of_shader_6() { return static_cast<int32_t>(offsetof(_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B, ___shader_6)); }
	inline String_t* get_shader_6() const { return ___shader_6; }
	inline String_t** get_address_of_shader_6() { return &___shader_6; }
	inline void set_shader_6(String_t* value)
	{
		___shader_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shader_6), (void*)value);
	}

	inline static int32_t get_offset_of__Alpha_7() { return static_cast<int32_t>(offsetof(_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B, ____Alpha_7)); }
	inline float get__Alpha_7() const { return ____Alpha_7; }
	inline float* get_address_of__Alpha_7() { return &____Alpha_7; }
	inline void set__Alpha_7(float value)
	{
		____Alpha_7 = value;
	}

	inline static int32_t get_offset_of_Heat_8() { return static_cast<int32_t>(offsetof(_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B, ___Heat_8)); }
	inline float get_Heat_8() const { return ___Heat_8; }
	inline float* get_address_of_Heat_8() { return &___Heat_8; }
	inline void set_Heat_8(float value)
	{
		___Heat_8 = value;
	}

	inline static int32_t get_offset_of_Speed_9() { return static_cast<int32_t>(offsetof(_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B, ___Speed_9)); }
	inline float get_Speed_9() const { return ___Speed_9; }
	inline float* get_address_of_Speed_9() { return &___Speed_9; }
	inline void set_Speed_9(float value)
	{
		___Speed_9 = value;
	}

	inline static int32_t get_offset_of_Wind_10() { return static_cast<int32_t>(offsetof(_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B, ___Wind_10)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_Wind_10() const { return ___Wind_10; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_Wind_10() { return &___Wind_10; }
	inline void set_Wind_10(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___Wind_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Wind_10), (void*)value);
	}

	inline static int32_t get_offset_of_WindTime1_11() { return static_cast<int32_t>(offsetof(_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B, ___WindTime1_11)); }
	inline float get_WindTime1_11() const { return ___WindTime1_11; }
	inline float* get_address_of_WindTime1_11() { return &___WindTime1_11; }
	inline void set_WindTime1_11(float value)
	{
		___WindTime1_11 = value;
	}

	inline static int32_t get_offset_of_ShaderChange_12() { return static_cast<int32_t>(offsetof(_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B, ___ShaderChange_12)); }
	inline int32_t get_ShaderChange_12() const { return ___ShaderChange_12; }
	inline int32_t* get_address_of_ShaderChange_12() { return &___ShaderChange_12; }
	inline void set_ShaderChange_12(int32_t value)
	{
		___ShaderChange_12 = value;
	}

	inline static int32_t get_offset_of_tempMaterial_13() { return static_cast<int32_t>(offsetof(_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B, ___tempMaterial_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_tempMaterial_13() const { return ___tempMaterial_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_tempMaterial_13() { return &___tempMaterial_13; }
	inline void set_tempMaterial_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___tempMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempMaterial_13), (void*)value);
	}

	inline static int32_t get_offset_of_defaultMaterial_14() { return static_cast<int32_t>(offsetof(_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B, ___defaultMaterial_14)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultMaterial_14() const { return ___defaultMaterial_14; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultMaterial_14() { return &___defaultMaterial_14; }
	inline void set_defaultMaterial_14(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_14), (void*)value);
	}

	inline static int32_t get_offset_of_CanvasImage_15() { return static_cast<int32_t>(offsetof(_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B, ___CanvasImage_15)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_CanvasImage_15() const { return ___CanvasImage_15; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_CanvasImage_15() { return &___CanvasImage_15; }
	inline void set_CanvasImage_15(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___CanvasImage_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CanvasImage_15), (void*)value);
	}
};


// _2dxFX_GrassMultiFX
struct _2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material _2dxFX_GrassMultiFX::ForceMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___ForceMaterial_4;
	// System.Boolean _2dxFX_GrassMultiFX::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_GrassMultiFX::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_GrassMultiFX::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_GrassMultiFX::Heat
	float ___Heat_8;
	// System.Single _2dxFX_GrassMultiFX::Speed
	float ___Speed_9;
	// UnityEngine.AnimationCurve _2dxFX_GrassMultiFX::Wind
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___Wind_10;
	// System.Single _2dxFX_GrassMultiFX::WindTime1
	float ___WindTime1_11;
	// System.Single _2dxFX_GrassMultiFX::WindTime2
	float ___WindTime2_12;
	// System.Single _2dxFX_GrassMultiFX::WindTime3
	float ___WindTime3_13;
	// System.Single _2dxFX_GrassMultiFX::WindTime4
	float ___WindTime4_14;
	// System.Int32 _2dxFX_GrassMultiFX::ShaderChange
	int32_t ___ShaderChange_15;
	// UnityEngine.Material _2dxFX_GrassMultiFX::tempMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___tempMaterial_16;
	// UnityEngine.Material _2dxFX_GrassMultiFX::defaultMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultMaterial_17;
	// UnityEngine.UI.Image _2dxFX_GrassMultiFX::CanvasImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___CanvasImage_18;

public:
	inline static int32_t get_offset_of_ForceMaterial_4() { return static_cast<int32_t>(offsetof(_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9, ___ForceMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_ForceMaterial_4() const { return ___ForceMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_ForceMaterial_4() { return &___ForceMaterial_4; }
	inline void set_ForceMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___ForceMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForceMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveChange_5() { return static_cast<int32_t>(offsetof(_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9, ___ActiveChange_5)); }
	inline bool get_ActiveChange_5() const { return ___ActiveChange_5; }
	inline bool* get_address_of_ActiveChange_5() { return &___ActiveChange_5; }
	inline void set_ActiveChange_5(bool value)
	{
		___ActiveChange_5 = value;
	}

	inline static int32_t get_offset_of_shader_6() { return static_cast<int32_t>(offsetof(_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9, ___shader_6)); }
	inline String_t* get_shader_6() const { return ___shader_6; }
	inline String_t** get_address_of_shader_6() { return &___shader_6; }
	inline void set_shader_6(String_t* value)
	{
		___shader_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shader_6), (void*)value);
	}

	inline static int32_t get_offset_of__Alpha_7() { return static_cast<int32_t>(offsetof(_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9, ____Alpha_7)); }
	inline float get__Alpha_7() const { return ____Alpha_7; }
	inline float* get_address_of__Alpha_7() { return &____Alpha_7; }
	inline void set__Alpha_7(float value)
	{
		____Alpha_7 = value;
	}

	inline static int32_t get_offset_of_Heat_8() { return static_cast<int32_t>(offsetof(_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9, ___Heat_8)); }
	inline float get_Heat_8() const { return ___Heat_8; }
	inline float* get_address_of_Heat_8() { return &___Heat_8; }
	inline void set_Heat_8(float value)
	{
		___Heat_8 = value;
	}

	inline static int32_t get_offset_of_Speed_9() { return static_cast<int32_t>(offsetof(_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9, ___Speed_9)); }
	inline float get_Speed_9() const { return ___Speed_9; }
	inline float* get_address_of_Speed_9() { return &___Speed_9; }
	inline void set_Speed_9(float value)
	{
		___Speed_9 = value;
	}

	inline static int32_t get_offset_of_Wind_10() { return static_cast<int32_t>(offsetof(_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9, ___Wind_10)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_Wind_10() const { return ___Wind_10; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_Wind_10() { return &___Wind_10; }
	inline void set_Wind_10(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___Wind_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Wind_10), (void*)value);
	}

	inline static int32_t get_offset_of_WindTime1_11() { return static_cast<int32_t>(offsetof(_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9, ___WindTime1_11)); }
	inline float get_WindTime1_11() const { return ___WindTime1_11; }
	inline float* get_address_of_WindTime1_11() { return &___WindTime1_11; }
	inline void set_WindTime1_11(float value)
	{
		___WindTime1_11 = value;
	}

	inline static int32_t get_offset_of_WindTime2_12() { return static_cast<int32_t>(offsetof(_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9, ___WindTime2_12)); }
	inline float get_WindTime2_12() const { return ___WindTime2_12; }
	inline float* get_address_of_WindTime2_12() { return &___WindTime2_12; }
	inline void set_WindTime2_12(float value)
	{
		___WindTime2_12 = value;
	}

	inline static int32_t get_offset_of_WindTime3_13() { return static_cast<int32_t>(offsetof(_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9, ___WindTime3_13)); }
	inline float get_WindTime3_13() const { return ___WindTime3_13; }
	inline float* get_address_of_WindTime3_13() { return &___WindTime3_13; }
	inline void set_WindTime3_13(float value)
	{
		___WindTime3_13 = value;
	}

	inline static int32_t get_offset_of_WindTime4_14() { return static_cast<int32_t>(offsetof(_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9, ___WindTime4_14)); }
	inline float get_WindTime4_14() const { return ___WindTime4_14; }
	inline float* get_address_of_WindTime4_14() { return &___WindTime4_14; }
	inline void set_WindTime4_14(float value)
	{
		___WindTime4_14 = value;
	}

	inline static int32_t get_offset_of_ShaderChange_15() { return static_cast<int32_t>(offsetof(_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9, ___ShaderChange_15)); }
	inline int32_t get_ShaderChange_15() const { return ___ShaderChange_15; }
	inline int32_t* get_address_of_ShaderChange_15() { return &___ShaderChange_15; }
	inline void set_ShaderChange_15(int32_t value)
	{
		___ShaderChange_15 = value;
	}

	inline static int32_t get_offset_of_tempMaterial_16() { return static_cast<int32_t>(offsetof(_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9, ___tempMaterial_16)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_tempMaterial_16() const { return ___tempMaterial_16; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_tempMaterial_16() { return &___tempMaterial_16; }
	inline void set_tempMaterial_16(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___tempMaterial_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempMaterial_16), (void*)value);
	}

	inline static int32_t get_offset_of_defaultMaterial_17() { return static_cast<int32_t>(offsetof(_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9, ___defaultMaterial_17)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultMaterial_17() const { return ___defaultMaterial_17; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultMaterial_17() { return &___defaultMaterial_17; }
	inline void set_defaultMaterial_17(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultMaterial_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_17), (void*)value);
	}

	inline static int32_t get_offset_of_CanvasImage_18() { return static_cast<int32_t>(offsetof(_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9, ___CanvasImage_18)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_CanvasImage_18() const { return ___CanvasImage_18; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_CanvasImage_18() { return &___CanvasImage_18; }
	inline void set_CanvasImage_18(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___CanvasImage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CanvasImage_18), (void*)value);
	}
};


// _2dxFX_GrayScale
struct _2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material _2dxFX_GrayScale::ForceMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___ForceMaterial_4;
	// System.Boolean _2dxFX_GrayScale::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_GrayScale::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_GrayScale::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_GrayScale::_EffectAmount
	float ____EffectAmount_8;
	// System.Int32 _2dxFX_GrayScale::ShaderChange
	int32_t ___ShaderChange_9;
	// UnityEngine.Material _2dxFX_GrayScale::tempMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___tempMaterial_10;
	// UnityEngine.Material _2dxFX_GrayScale::defaultMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultMaterial_11;
	// UnityEngine.UI.Image _2dxFX_GrayScale::CanvasImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___CanvasImage_12;

public:
	inline static int32_t get_offset_of_ForceMaterial_4() { return static_cast<int32_t>(offsetof(_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB, ___ForceMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_ForceMaterial_4() const { return ___ForceMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_ForceMaterial_4() { return &___ForceMaterial_4; }
	inline void set_ForceMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___ForceMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForceMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveChange_5() { return static_cast<int32_t>(offsetof(_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB, ___ActiveChange_5)); }
	inline bool get_ActiveChange_5() const { return ___ActiveChange_5; }
	inline bool* get_address_of_ActiveChange_5() { return &___ActiveChange_5; }
	inline void set_ActiveChange_5(bool value)
	{
		___ActiveChange_5 = value;
	}

	inline static int32_t get_offset_of_shader_6() { return static_cast<int32_t>(offsetof(_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB, ___shader_6)); }
	inline String_t* get_shader_6() const { return ___shader_6; }
	inline String_t** get_address_of_shader_6() { return &___shader_6; }
	inline void set_shader_6(String_t* value)
	{
		___shader_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shader_6), (void*)value);
	}

	inline static int32_t get_offset_of__Alpha_7() { return static_cast<int32_t>(offsetof(_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB, ____Alpha_7)); }
	inline float get__Alpha_7() const { return ____Alpha_7; }
	inline float* get_address_of__Alpha_7() { return &____Alpha_7; }
	inline void set__Alpha_7(float value)
	{
		____Alpha_7 = value;
	}

	inline static int32_t get_offset_of__EffectAmount_8() { return static_cast<int32_t>(offsetof(_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB, ____EffectAmount_8)); }
	inline float get__EffectAmount_8() const { return ____EffectAmount_8; }
	inline float* get_address_of__EffectAmount_8() { return &____EffectAmount_8; }
	inline void set__EffectAmount_8(float value)
	{
		____EffectAmount_8 = value;
	}

	inline static int32_t get_offset_of_ShaderChange_9() { return static_cast<int32_t>(offsetof(_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB, ___ShaderChange_9)); }
	inline int32_t get_ShaderChange_9() const { return ___ShaderChange_9; }
	inline int32_t* get_address_of_ShaderChange_9() { return &___ShaderChange_9; }
	inline void set_ShaderChange_9(int32_t value)
	{
		___ShaderChange_9 = value;
	}

	inline static int32_t get_offset_of_tempMaterial_10() { return static_cast<int32_t>(offsetof(_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB, ___tempMaterial_10)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_tempMaterial_10() const { return ___tempMaterial_10; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_tempMaterial_10() { return &___tempMaterial_10; }
	inline void set_tempMaterial_10(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___tempMaterial_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempMaterial_10), (void*)value);
	}

	inline static int32_t get_offset_of_defaultMaterial_11() { return static_cast<int32_t>(offsetof(_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB, ___defaultMaterial_11)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultMaterial_11() const { return ___defaultMaterial_11; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultMaterial_11() { return &___defaultMaterial_11; }
	inline void set_defaultMaterial_11(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_11), (void*)value);
	}

	inline static int32_t get_offset_of_CanvasImage_12() { return static_cast<int32_t>(offsetof(_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB, ___CanvasImage_12)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_CanvasImage_12() const { return ___CanvasImage_12; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_CanvasImage_12() { return &___CanvasImage_12; }
	inline void set_CanvasImage_12(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___CanvasImage_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CanvasImage_12), (void*)value);
	}
};


// _2dxFX_HSV
struct _2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material _2dxFX_HSV::ForceMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___ForceMaterial_4;
	// System.Boolean _2dxFX_HSV::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_HSV::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_HSV::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_HSV::_HueShift
	float ____HueShift_8;
	// System.Single _2dxFX_HSV::_Saturation
	float ____Saturation_9;
	// System.Single _2dxFX_HSV::_ValueBrightness
	float ____ValueBrightness_10;
	// System.Int32 _2dxFX_HSV::ShaderChange
	int32_t ___ShaderChange_11;
	// UnityEngine.Material _2dxFX_HSV::tempMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___tempMaterial_12;
	// UnityEngine.Material _2dxFX_HSV::defaultMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultMaterial_13;
	// UnityEngine.UI.Image _2dxFX_HSV::CanvasImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___CanvasImage_14;

public:
	inline static int32_t get_offset_of_ForceMaterial_4() { return static_cast<int32_t>(offsetof(_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F, ___ForceMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_ForceMaterial_4() const { return ___ForceMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_ForceMaterial_4() { return &___ForceMaterial_4; }
	inline void set_ForceMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___ForceMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForceMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveChange_5() { return static_cast<int32_t>(offsetof(_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F, ___ActiveChange_5)); }
	inline bool get_ActiveChange_5() const { return ___ActiveChange_5; }
	inline bool* get_address_of_ActiveChange_5() { return &___ActiveChange_5; }
	inline void set_ActiveChange_5(bool value)
	{
		___ActiveChange_5 = value;
	}

	inline static int32_t get_offset_of_shader_6() { return static_cast<int32_t>(offsetof(_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F, ___shader_6)); }
	inline String_t* get_shader_6() const { return ___shader_6; }
	inline String_t** get_address_of_shader_6() { return &___shader_6; }
	inline void set_shader_6(String_t* value)
	{
		___shader_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shader_6), (void*)value);
	}

	inline static int32_t get_offset_of__Alpha_7() { return static_cast<int32_t>(offsetof(_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F, ____Alpha_7)); }
	inline float get__Alpha_7() const { return ____Alpha_7; }
	inline float* get_address_of__Alpha_7() { return &____Alpha_7; }
	inline void set__Alpha_7(float value)
	{
		____Alpha_7 = value;
	}

	inline static int32_t get_offset_of__HueShift_8() { return static_cast<int32_t>(offsetof(_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F, ____HueShift_8)); }
	inline float get__HueShift_8() const { return ____HueShift_8; }
	inline float* get_address_of__HueShift_8() { return &____HueShift_8; }
	inline void set__HueShift_8(float value)
	{
		____HueShift_8 = value;
	}

	inline static int32_t get_offset_of__Saturation_9() { return static_cast<int32_t>(offsetof(_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F, ____Saturation_9)); }
	inline float get__Saturation_9() const { return ____Saturation_9; }
	inline float* get_address_of__Saturation_9() { return &____Saturation_9; }
	inline void set__Saturation_9(float value)
	{
		____Saturation_9 = value;
	}

	inline static int32_t get_offset_of__ValueBrightness_10() { return static_cast<int32_t>(offsetof(_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F, ____ValueBrightness_10)); }
	inline float get__ValueBrightness_10() const { return ____ValueBrightness_10; }
	inline float* get_address_of__ValueBrightness_10() { return &____ValueBrightness_10; }
	inline void set__ValueBrightness_10(float value)
	{
		____ValueBrightness_10 = value;
	}

	inline static int32_t get_offset_of_ShaderChange_11() { return static_cast<int32_t>(offsetof(_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F, ___ShaderChange_11)); }
	inline int32_t get_ShaderChange_11() const { return ___ShaderChange_11; }
	inline int32_t* get_address_of_ShaderChange_11() { return &___ShaderChange_11; }
	inline void set_ShaderChange_11(int32_t value)
	{
		___ShaderChange_11 = value;
	}

	inline static int32_t get_offset_of_tempMaterial_12() { return static_cast<int32_t>(offsetof(_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F, ___tempMaterial_12)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_tempMaterial_12() const { return ___tempMaterial_12; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_tempMaterial_12() { return &___tempMaterial_12; }
	inline void set_tempMaterial_12(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___tempMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempMaterial_12), (void*)value);
	}

	inline static int32_t get_offset_of_defaultMaterial_13() { return static_cast<int32_t>(offsetof(_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F, ___defaultMaterial_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultMaterial_13() const { return ___defaultMaterial_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultMaterial_13() { return &___defaultMaterial_13; }
	inline void set_defaultMaterial_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_13), (void*)value);
	}

	inline static int32_t get_offset_of_CanvasImage_14() { return static_cast<int32_t>(offsetof(_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F, ___CanvasImage_14)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_CanvasImage_14() const { return ___CanvasImage_14; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_CanvasImage_14() { return &___CanvasImage_14; }
	inline void set_CanvasImage_14(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___CanvasImage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CanvasImage_14), (void*)value);
	}
};


// _2dxFX_Heat
struct _2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material _2dxFX_Heat::ForceMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___ForceMaterial_4;
	// System.Boolean _2dxFX_Heat::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_Heat::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_Heat::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_Heat::Heat
	float ___Heat_8;
	// System.Single _2dxFX_Heat::Speed
	float ___Speed_9;
	// System.Int32 _2dxFX_Heat::ShaderChange
	int32_t ___ShaderChange_10;
	// UnityEngine.Material _2dxFX_Heat::tempMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___tempMaterial_11;
	// UnityEngine.Material _2dxFX_Heat::defaultMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultMaterial_12;
	// UnityEngine.UI.Image _2dxFX_Heat::CanvasImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___CanvasImage_13;

public:
	inline static int32_t get_offset_of_ForceMaterial_4() { return static_cast<int32_t>(offsetof(_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E, ___ForceMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_ForceMaterial_4() const { return ___ForceMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_ForceMaterial_4() { return &___ForceMaterial_4; }
	inline void set_ForceMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___ForceMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForceMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveChange_5() { return static_cast<int32_t>(offsetof(_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E, ___ActiveChange_5)); }
	inline bool get_ActiveChange_5() const { return ___ActiveChange_5; }
	inline bool* get_address_of_ActiveChange_5() { return &___ActiveChange_5; }
	inline void set_ActiveChange_5(bool value)
	{
		___ActiveChange_5 = value;
	}

	inline static int32_t get_offset_of_shader_6() { return static_cast<int32_t>(offsetof(_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E, ___shader_6)); }
	inline String_t* get_shader_6() const { return ___shader_6; }
	inline String_t** get_address_of_shader_6() { return &___shader_6; }
	inline void set_shader_6(String_t* value)
	{
		___shader_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shader_6), (void*)value);
	}

	inline static int32_t get_offset_of__Alpha_7() { return static_cast<int32_t>(offsetof(_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E, ____Alpha_7)); }
	inline float get__Alpha_7() const { return ____Alpha_7; }
	inline float* get_address_of__Alpha_7() { return &____Alpha_7; }
	inline void set__Alpha_7(float value)
	{
		____Alpha_7 = value;
	}

	inline static int32_t get_offset_of_Heat_8() { return static_cast<int32_t>(offsetof(_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E, ___Heat_8)); }
	inline float get_Heat_8() const { return ___Heat_8; }
	inline float* get_address_of_Heat_8() { return &___Heat_8; }
	inline void set_Heat_8(float value)
	{
		___Heat_8 = value;
	}

	inline static int32_t get_offset_of_Speed_9() { return static_cast<int32_t>(offsetof(_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E, ___Speed_9)); }
	inline float get_Speed_9() const { return ___Speed_9; }
	inline float* get_address_of_Speed_9() { return &___Speed_9; }
	inline void set_Speed_9(float value)
	{
		___Speed_9 = value;
	}

	inline static int32_t get_offset_of_ShaderChange_10() { return static_cast<int32_t>(offsetof(_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E, ___ShaderChange_10)); }
	inline int32_t get_ShaderChange_10() const { return ___ShaderChange_10; }
	inline int32_t* get_address_of_ShaderChange_10() { return &___ShaderChange_10; }
	inline void set_ShaderChange_10(int32_t value)
	{
		___ShaderChange_10 = value;
	}

	inline static int32_t get_offset_of_tempMaterial_11() { return static_cast<int32_t>(offsetof(_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E, ___tempMaterial_11)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_tempMaterial_11() const { return ___tempMaterial_11; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_tempMaterial_11() { return &___tempMaterial_11; }
	inline void set_tempMaterial_11(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___tempMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempMaterial_11), (void*)value);
	}

	inline static int32_t get_offset_of_defaultMaterial_12() { return static_cast<int32_t>(offsetof(_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E, ___defaultMaterial_12)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultMaterial_12() const { return ___defaultMaterial_12; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultMaterial_12() { return &___defaultMaterial_12; }
	inline void set_defaultMaterial_12(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_12), (void*)value);
	}

	inline static int32_t get_offset_of_CanvasImage_13() { return static_cast<int32_t>(offsetof(_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E, ___CanvasImage_13)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_CanvasImage_13() const { return ___CanvasImage_13; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_CanvasImage_13() { return &___CanvasImage_13; }
	inline void set_CanvasImage_13(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___CanvasImage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CanvasImage_13), (void*)value);
	}
};


// _2dxFX_Hologram
struct _2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material _2dxFX_Hologram::ForceMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___ForceMaterial_4;
	// System.Boolean _2dxFX_Hologram::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_Hologram::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_Hologram::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_Hologram::Distortion
	float ___Distortion_8;
	// System.Single _2dxFX_Hologram::_TimeX
	float ____TimeX_9;
	// System.Single _2dxFX_Hologram::Speed
	float ___Speed_10;
	// System.Int32 _2dxFX_Hologram::ShaderChange
	int32_t ___ShaderChange_11;
	// UnityEngine.Material _2dxFX_Hologram::tempMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___tempMaterial_12;
	// UnityEngine.Material _2dxFX_Hologram::defaultMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultMaterial_13;
	// UnityEngine.UI.Image _2dxFX_Hologram::CanvasImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___CanvasImage_14;

public:
	inline static int32_t get_offset_of_ForceMaterial_4() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1, ___ForceMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_ForceMaterial_4() const { return ___ForceMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_ForceMaterial_4() { return &___ForceMaterial_4; }
	inline void set_ForceMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___ForceMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForceMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveChange_5() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1, ___ActiveChange_5)); }
	inline bool get_ActiveChange_5() const { return ___ActiveChange_5; }
	inline bool* get_address_of_ActiveChange_5() { return &___ActiveChange_5; }
	inline void set_ActiveChange_5(bool value)
	{
		___ActiveChange_5 = value;
	}

	inline static int32_t get_offset_of_shader_6() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1, ___shader_6)); }
	inline String_t* get_shader_6() const { return ___shader_6; }
	inline String_t** get_address_of_shader_6() { return &___shader_6; }
	inline void set_shader_6(String_t* value)
	{
		___shader_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shader_6), (void*)value);
	}

	inline static int32_t get_offset_of__Alpha_7() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1, ____Alpha_7)); }
	inline float get__Alpha_7() const { return ____Alpha_7; }
	inline float* get_address_of__Alpha_7() { return &____Alpha_7; }
	inline void set__Alpha_7(float value)
	{
		____Alpha_7 = value;
	}

	inline static int32_t get_offset_of_Distortion_8() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1, ___Distortion_8)); }
	inline float get_Distortion_8() const { return ___Distortion_8; }
	inline float* get_address_of_Distortion_8() { return &___Distortion_8; }
	inline void set_Distortion_8(float value)
	{
		___Distortion_8 = value;
	}

	inline static int32_t get_offset_of__TimeX_9() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1, ____TimeX_9)); }
	inline float get__TimeX_9() const { return ____TimeX_9; }
	inline float* get_address_of__TimeX_9() { return &____TimeX_9; }
	inline void set__TimeX_9(float value)
	{
		____TimeX_9 = value;
	}

	inline static int32_t get_offset_of_Speed_10() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1, ___Speed_10)); }
	inline float get_Speed_10() const { return ___Speed_10; }
	inline float* get_address_of_Speed_10() { return &___Speed_10; }
	inline void set_Speed_10(float value)
	{
		___Speed_10 = value;
	}

	inline static int32_t get_offset_of_ShaderChange_11() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1, ___ShaderChange_11)); }
	inline int32_t get_ShaderChange_11() const { return ___ShaderChange_11; }
	inline int32_t* get_address_of_ShaderChange_11() { return &___ShaderChange_11; }
	inline void set_ShaderChange_11(int32_t value)
	{
		___ShaderChange_11 = value;
	}

	inline static int32_t get_offset_of_tempMaterial_12() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1, ___tempMaterial_12)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_tempMaterial_12() const { return ___tempMaterial_12; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_tempMaterial_12() { return &___tempMaterial_12; }
	inline void set_tempMaterial_12(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___tempMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempMaterial_12), (void*)value);
	}

	inline static int32_t get_offset_of_defaultMaterial_13() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1, ___defaultMaterial_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultMaterial_13() const { return ___defaultMaterial_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultMaterial_13() { return &___defaultMaterial_13; }
	inline void set_defaultMaterial_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_13), (void*)value);
	}

	inline static int32_t get_offset_of_CanvasImage_14() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1, ___CanvasImage_14)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_CanvasImage_14() const { return ___CanvasImage_14; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_CanvasImage_14() { return &___CanvasImage_14; }
	inline void set_CanvasImage_14(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___CanvasImage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CanvasImage_14), (void*)value);
	}
};


// _2dxFX_Hologram2
struct _2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material _2dxFX_Hologram2::ForceMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___ForceMaterial_4;
	// System.Boolean _2dxFX_Hologram2::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_Hologram2::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_Hologram2::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_Hologram2::Distortion
	float ___Distortion_8;
	// System.Single _2dxFX_Hologram2::_TimeX
	float ____TimeX_9;
	// System.Single _2dxFX_Hologram2::Speed
	float ___Speed_10;
	// System.Int32 _2dxFX_Hologram2::ShaderChange
	int32_t ___ShaderChange_11;
	// UnityEngine.Material _2dxFX_Hologram2::tempMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___tempMaterial_12;
	// UnityEngine.Material _2dxFX_Hologram2::defaultMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultMaterial_13;
	// UnityEngine.UI.Image _2dxFX_Hologram2::CanvasImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___CanvasImage_14;

public:
	inline static int32_t get_offset_of_ForceMaterial_4() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E, ___ForceMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_ForceMaterial_4() const { return ___ForceMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_ForceMaterial_4() { return &___ForceMaterial_4; }
	inline void set_ForceMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___ForceMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForceMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveChange_5() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E, ___ActiveChange_5)); }
	inline bool get_ActiveChange_5() const { return ___ActiveChange_5; }
	inline bool* get_address_of_ActiveChange_5() { return &___ActiveChange_5; }
	inline void set_ActiveChange_5(bool value)
	{
		___ActiveChange_5 = value;
	}

	inline static int32_t get_offset_of_shader_6() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E, ___shader_6)); }
	inline String_t* get_shader_6() const { return ___shader_6; }
	inline String_t** get_address_of_shader_6() { return &___shader_6; }
	inline void set_shader_6(String_t* value)
	{
		___shader_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shader_6), (void*)value);
	}

	inline static int32_t get_offset_of__Alpha_7() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E, ____Alpha_7)); }
	inline float get__Alpha_7() const { return ____Alpha_7; }
	inline float* get_address_of__Alpha_7() { return &____Alpha_7; }
	inline void set__Alpha_7(float value)
	{
		____Alpha_7 = value;
	}

	inline static int32_t get_offset_of_Distortion_8() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E, ___Distortion_8)); }
	inline float get_Distortion_8() const { return ___Distortion_8; }
	inline float* get_address_of_Distortion_8() { return &___Distortion_8; }
	inline void set_Distortion_8(float value)
	{
		___Distortion_8 = value;
	}

	inline static int32_t get_offset_of__TimeX_9() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E, ____TimeX_9)); }
	inline float get__TimeX_9() const { return ____TimeX_9; }
	inline float* get_address_of__TimeX_9() { return &____TimeX_9; }
	inline void set__TimeX_9(float value)
	{
		____TimeX_9 = value;
	}

	inline static int32_t get_offset_of_Speed_10() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E, ___Speed_10)); }
	inline float get_Speed_10() const { return ___Speed_10; }
	inline float* get_address_of_Speed_10() { return &___Speed_10; }
	inline void set_Speed_10(float value)
	{
		___Speed_10 = value;
	}

	inline static int32_t get_offset_of_ShaderChange_11() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E, ___ShaderChange_11)); }
	inline int32_t get_ShaderChange_11() const { return ___ShaderChange_11; }
	inline int32_t* get_address_of_ShaderChange_11() { return &___ShaderChange_11; }
	inline void set_ShaderChange_11(int32_t value)
	{
		___ShaderChange_11 = value;
	}

	inline static int32_t get_offset_of_tempMaterial_12() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E, ___tempMaterial_12)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_tempMaterial_12() const { return ___tempMaterial_12; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_tempMaterial_12() { return &___tempMaterial_12; }
	inline void set_tempMaterial_12(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___tempMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempMaterial_12), (void*)value);
	}

	inline static int32_t get_offset_of_defaultMaterial_13() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E, ___defaultMaterial_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultMaterial_13() const { return ___defaultMaterial_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultMaterial_13() { return &___defaultMaterial_13; }
	inline void set_defaultMaterial_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_13), (void*)value);
	}

	inline static int32_t get_offset_of_CanvasImage_14() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E, ___CanvasImage_14)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_CanvasImage_14() const { return ___CanvasImage_14; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_CanvasImage_14() { return &___CanvasImage_14; }
	inline void set_CanvasImage_14(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___CanvasImage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CanvasImage_14), (void*)value);
	}
};


// _2dxFX_Hologram3
struct _2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material _2dxFX_Hologram3::ForceMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___ForceMaterial_4;
	// System.Boolean _2dxFX_Hologram3::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_Hologram3::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_Hologram3::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_Hologram3::Distortion
	float ___Distortion_8;
	// System.Single _2dxFX_Hologram3::_TimeX
	float ____TimeX_9;
	// System.Single _2dxFX_Hologram3::Speed
	float ___Speed_10;
	// UnityEngine.Color _2dxFX_Hologram3::_ColorX
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____ColorX_11;
	// System.Int32 _2dxFX_Hologram3::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_Hologram3::tempMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_Hologram3::defaultMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_Hologram3::CanvasImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___CanvasImage_15;

public:
	inline static int32_t get_offset_of_ForceMaterial_4() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181, ___ForceMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_ForceMaterial_4() const { return ___ForceMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_ForceMaterial_4() { return &___ForceMaterial_4; }
	inline void set_ForceMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___ForceMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForceMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveChange_5() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181, ___ActiveChange_5)); }
	inline bool get_ActiveChange_5() const { return ___ActiveChange_5; }
	inline bool* get_address_of_ActiveChange_5() { return &___ActiveChange_5; }
	inline void set_ActiveChange_5(bool value)
	{
		___ActiveChange_5 = value;
	}

	inline static int32_t get_offset_of_shader_6() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181, ___shader_6)); }
	inline String_t* get_shader_6() const { return ___shader_6; }
	inline String_t** get_address_of_shader_6() { return &___shader_6; }
	inline void set_shader_6(String_t* value)
	{
		___shader_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shader_6), (void*)value);
	}

	inline static int32_t get_offset_of__Alpha_7() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181, ____Alpha_7)); }
	inline float get__Alpha_7() const { return ____Alpha_7; }
	inline float* get_address_of__Alpha_7() { return &____Alpha_7; }
	inline void set__Alpha_7(float value)
	{
		____Alpha_7 = value;
	}

	inline static int32_t get_offset_of_Distortion_8() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181, ___Distortion_8)); }
	inline float get_Distortion_8() const { return ___Distortion_8; }
	inline float* get_address_of_Distortion_8() { return &___Distortion_8; }
	inline void set_Distortion_8(float value)
	{
		___Distortion_8 = value;
	}

	inline static int32_t get_offset_of__TimeX_9() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181, ____TimeX_9)); }
	inline float get__TimeX_9() const { return ____TimeX_9; }
	inline float* get_address_of__TimeX_9() { return &____TimeX_9; }
	inline void set__TimeX_9(float value)
	{
		____TimeX_9 = value;
	}

	inline static int32_t get_offset_of_Speed_10() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181, ___Speed_10)); }
	inline float get_Speed_10() const { return ___Speed_10; }
	inline float* get_address_of_Speed_10() { return &___Speed_10; }
	inline void set_Speed_10(float value)
	{
		___Speed_10 = value;
	}

	inline static int32_t get_offset_of__ColorX_11() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181, ____ColorX_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__ColorX_11() const { return ____ColorX_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__ColorX_11() { return &____ColorX_11; }
	inline void set__ColorX_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____ColorX_11 = value;
	}

	inline static int32_t get_offset_of_ShaderChange_12() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181, ___ShaderChange_12)); }
	inline int32_t get_ShaderChange_12() const { return ___ShaderChange_12; }
	inline int32_t* get_address_of_ShaderChange_12() { return &___ShaderChange_12; }
	inline void set_ShaderChange_12(int32_t value)
	{
		___ShaderChange_12 = value;
	}

	inline static int32_t get_offset_of_tempMaterial_13() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181, ___tempMaterial_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_tempMaterial_13() const { return ___tempMaterial_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_tempMaterial_13() { return &___tempMaterial_13; }
	inline void set_tempMaterial_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___tempMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempMaterial_13), (void*)value);
	}

	inline static int32_t get_offset_of_defaultMaterial_14() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181, ___defaultMaterial_14)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultMaterial_14() const { return ___defaultMaterial_14; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultMaterial_14() { return &___defaultMaterial_14; }
	inline void set_defaultMaterial_14(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_14), (void*)value);
	}

	inline static int32_t get_offset_of_CanvasImage_15() { return static_cast<int32_t>(offsetof(_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181, ___CanvasImage_15)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_CanvasImage_15() const { return ___CanvasImage_15; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_CanvasImage_15() { return &___CanvasImage_15; }
	inline void set_CanvasImage_15(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___CanvasImage_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CanvasImage_15), (void*)value);
	}
};


// _2dxFX_Ice
struct _2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material _2dxFX_Ice::ForceMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___ForceMaterial_4;
	// System.Boolean _2dxFX_Ice::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_Ice::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_Ice::_Alpha
	float ____Alpha_7;
	// UnityEngine.Texture2D _2dxFX_Ice::__MainTex2
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * _____MainTex2_8;
	// System.Single _2dxFX_Ice::_Value1
	float ____Value1_9;
	// System.Single _2dxFX_Ice::_Value2
	float ____Value2_10;
	// System.Single _2dxFX_Ice::_Value3
	float ____Value3_11;
	// System.Single _2dxFX_Ice::_Value4
	float ____Value4_12;
	// System.Boolean _2dxFX_Ice::_AutoScrollX
	bool ____AutoScrollX_13;
	// System.Single _2dxFX_Ice::_AutoScrollSpeedX
	float ____AutoScrollSpeedX_14;
	// System.Boolean _2dxFX_Ice::_AutoScrollY
	bool ____AutoScrollY_15;
	// System.Single _2dxFX_Ice::_AutoScrollSpeedY
	float ____AutoScrollSpeedY_16;
	// System.Single _2dxFX_Ice::_AutoScrollCountX
	float ____AutoScrollCountX_17;
	// System.Single _2dxFX_Ice::_AutoScrollCountY
	float ____AutoScrollCountY_18;
	// System.Int32 _2dxFX_Ice::ShaderChange
	int32_t ___ShaderChange_19;
	// UnityEngine.Material _2dxFX_Ice::tempMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___tempMaterial_20;
	// UnityEngine.Material _2dxFX_Ice::defaultMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultMaterial_21;
	// UnityEngine.UI.Image _2dxFX_Ice::CanvasImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___CanvasImage_22;

public:
	inline static int32_t get_offset_of_ForceMaterial_4() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ___ForceMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_ForceMaterial_4() const { return ___ForceMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_ForceMaterial_4() { return &___ForceMaterial_4; }
	inline void set_ForceMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___ForceMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForceMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveChange_5() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ___ActiveChange_5)); }
	inline bool get_ActiveChange_5() const { return ___ActiveChange_5; }
	inline bool* get_address_of_ActiveChange_5() { return &___ActiveChange_5; }
	inline void set_ActiveChange_5(bool value)
	{
		___ActiveChange_5 = value;
	}

	inline static int32_t get_offset_of_shader_6() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ___shader_6)); }
	inline String_t* get_shader_6() const { return ___shader_6; }
	inline String_t** get_address_of_shader_6() { return &___shader_6; }
	inline void set_shader_6(String_t* value)
	{
		___shader_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shader_6), (void*)value);
	}

	inline static int32_t get_offset_of__Alpha_7() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ____Alpha_7)); }
	inline float get__Alpha_7() const { return ____Alpha_7; }
	inline float* get_address_of__Alpha_7() { return &____Alpha_7; }
	inline void set__Alpha_7(float value)
	{
		____Alpha_7 = value;
	}

	inline static int32_t get_offset_of___MainTex2_8() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, _____MainTex2_8)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get___MainTex2_8() const { return _____MainTex2_8; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of___MainTex2_8() { return &_____MainTex2_8; }
	inline void set___MainTex2_8(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		_____MainTex2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&_____MainTex2_8), (void*)value);
	}

	inline static int32_t get_offset_of__Value1_9() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ____Value1_9)); }
	inline float get__Value1_9() const { return ____Value1_9; }
	inline float* get_address_of__Value1_9() { return &____Value1_9; }
	inline void set__Value1_9(float value)
	{
		____Value1_9 = value;
	}

	inline static int32_t get_offset_of__Value2_10() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ____Value2_10)); }
	inline float get__Value2_10() const { return ____Value2_10; }
	inline float* get_address_of__Value2_10() { return &____Value2_10; }
	inline void set__Value2_10(float value)
	{
		____Value2_10 = value;
	}

	inline static int32_t get_offset_of__Value3_11() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ____Value3_11)); }
	inline float get__Value3_11() const { return ____Value3_11; }
	inline float* get_address_of__Value3_11() { return &____Value3_11; }
	inline void set__Value3_11(float value)
	{
		____Value3_11 = value;
	}

	inline static int32_t get_offset_of__Value4_12() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ____Value4_12)); }
	inline float get__Value4_12() const { return ____Value4_12; }
	inline float* get_address_of__Value4_12() { return &____Value4_12; }
	inline void set__Value4_12(float value)
	{
		____Value4_12 = value;
	}

	inline static int32_t get_offset_of__AutoScrollX_13() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ____AutoScrollX_13)); }
	inline bool get__AutoScrollX_13() const { return ____AutoScrollX_13; }
	inline bool* get_address_of__AutoScrollX_13() { return &____AutoScrollX_13; }
	inline void set__AutoScrollX_13(bool value)
	{
		____AutoScrollX_13 = value;
	}

	inline static int32_t get_offset_of__AutoScrollSpeedX_14() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ____AutoScrollSpeedX_14)); }
	inline float get__AutoScrollSpeedX_14() const { return ____AutoScrollSpeedX_14; }
	inline float* get_address_of__AutoScrollSpeedX_14() { return &____AutoScrollSpeedX_14; }
	inline void set__AutoScrollSpeedX_14(float value)
	{
		____AutoScrollSpeedX_14 = value;
	}

	inline static int32_t get_offset_of__AutoScrollY_15() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ____AutoScrollY_15)); }
	inline bool get__AutoScrollY_15() const { return ____AutoScrollY_15; }
	inline bool* get_address_of__AutoScrollY_15() { return &____AutoScrollY_15; }
	inline void set__AutoScrollY_15(bool value)
	{
		____AutoScrollY_15 = value;
	}

	inline static int32_t get_offset_of__AutoScrollSpeedY_16() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ____AutoScrollSpeedY_16)); }
	inline float get__AutoScrollSpeedY_16() const { return ____AutoScrollSpeedY_16; }
	inline float* get_address_of__AutoScrollSpeedY_16() { return &____AutoScrollSpeedY_16; }
	inline void set__AutoScrollSpeedY_16(float value)
	{
		____AutoScrollSpeedY_16 = value;
	}

	inline static int32_t get_offset_of__AutoScrollCountX_17() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ____AutoScrollCountX_17)); }
	inline float get__AutoScrollCountX_17() const { return ____AutoScrollCountX_17; }
	inline float* get_address_of__AutoScrollCountX_17() { return &____AutoScrollCountX_17; }
	inline void set__AutoScrollCountX_17(float value)
	{
		____AutoScrollCountX_17 = value;
	}

	inline static int32_t get_offset_of__AutoScrollCountY_18() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ____AutoScrollCountY_18)); }
	inline float get__AutoScrollCountY_18() const { return ____AutoScrollCountY_18; }
	inline float* get_address_of__AutoScrollCountY_18() { return &____AutoScrollCountY_18; }
	inline void set__AutoScrollCountY_18(float value)
	{
		____AutoScrollCountY_18 = value;
	}

	inline static int32_t get_offset_of_ShaderChange_19() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ___ShaderChange_19)); }
	inline int32_t get_ShaderChange_19() const { return ___ShaderChange_19; }
	inline int32_t* get_address_of_ShaderChange_19() { return &___ShaderChange_19; }
	inline void set_ShaderChange_19(int32_t value)
	{
		___ShaderChange_19 = value;
	}

	inline static int32_t get_offset_of_tempMaterial_20() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ___tempMaterial_20)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_tempMaterial_20() const { return ___tempMaterial_20; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_tempMaterial_20() { return &___tempMaterial_20; }
	inline void set_tempMaterial_20(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___tempMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempMaterial_20), (void*)value);
	}

	inline static int32_t get_offset_of_defaultMaterial_21() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ___defaultMaterial_21)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultMaterial_21() const { return ___defaultMaterial_21; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultMaterial_21() { return &___defaultMaterial_21; }
	inline void set_defaultMaterial_21(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultMaterial_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_21), (void*)value);
	}

	inline static int32_t get_offset_of_CanvasImage_22() { return static_cast<int32_t>(offsetof(_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858, ___CanvasImage_22)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_CanvasImage_22() const { return ___CanvasImage_22; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_CanvasImage_22() { return &___CanvasImage_22; }
	inline void set_CanvasImage_22(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___CanvasImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CanvasImage_22), (void*)value);
	}
};


// _2dxFX_IcedFX
struct _2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material _2dxFX_IcedFX::ForceMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___ForceMaterial_4;
	// System.Boolean _2dxFX_IcedFX::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_IcedFX::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_IcedFX::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_IcedFX::Iced
	float ___Iced_8;
	// System.Int32 _2dxFX_IcedFX::ShaderChange
	int32_t ___ShaderChange_9;
	// UnityEngine.Material _2dxFX_IcedFX::tempMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___tempMaterial_10;
	// UnityEngine.Material _2dxFX_IcedFX::defaultMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultMaterial_11;
	// UnityEngine.UI.Image _2dxFX_IcedFX::CanvasImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___CanvasImage_12;

public:
	inline static int32_t get_offset_of_ForceMaterial_4() { return static_cast<int32_t>(offsetof(_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85, ___ForceMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_ForceMaterial_4() const { return ___ForceMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_ForceMaterial_4() { return &___ForceMaterial_4; }
	inline void set_ForceMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___ForceMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForceMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveChange_5() { return static_cast<int32_t>(offsetof(_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85, ___ActiveChange_5)); }
	inline bool get_ActiveChange_5() const { return ___ActiveChange_5; }
	inline bool* get_address_of_ActiveChange_5() { return &___ActiveChange_5; }
	inline void set_ActiveChange_5(bool value)
	{
		___ActiveChange_5 = value;
	}

	inline static int32_t get_offset_of_shader_6() { return static_cast<int32_t>(offsetof(_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85, ___shader_6)); }
	inline String_t* get_shader_6() const { return ___shader_6; }
	inline String_t** get_address_of_shader_6() { return &___shader_6; }
	inline void set_shader_6(String_t* value)
	{
		___shader_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shader_6), (void*)value);
	}

	inline static int32_t get_offset_of__Alpha_7() { return static_cast<int32_t>(offsetof(_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85, ____Alpha_7)); }
	inline float get__Alpha_7() const { return ____Alpha_7; }
	inline float* get_address_of__Alpha_7() { return &____Alpha_7; }
	inline void set__Alpha_7(float value)
	{
		____Alpha_7 = value;
	}

	inline static int32_t get_offset_of_Iced_8() { return static_cast<int32_t>(offsetof(_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85, ___Iced_8)); }
	inline float get_Iced_8() const { return ___Iced_8; }
	inline float* get_address_of_Iced_8() { return &___Iced_8; }
	inline void set_Iced_8(float value)
	{
		___Iced_8 = value;
	}

	inline static int32_t get_offset_of_ShaderChange_9() { return static_cast<int32_t>(offsetof(_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85, ___ShaderChange_9)); }
	inline int32_t get_ShaderChange_9() const { return ___ShaderChange_9; }
	inline int32_t* get_address_of_ShaderChange_9() { return &___ShaderChange_9; }
	inline void set_ShaderChange_9(int32_t value)
	{
		___ShaderChange_9 = value;
	}

	inline static int32_t get_offset_of_tempMaterial_10() { return static_cast<int32_t>(offsetof(_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85, ___tempMaterial_10)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_tempMaterial_10() const { return ___tempMaterial_10; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_tempMaterial_10() { return &___tempMaterial_10; }
	inline void set_tempMaterial_10(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___tempMaterial_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempMaterial_10), (void*)value);
	}

	inline static int32_t get_offset_of_defaultMaterial_11() { return static_cast<int32_t>(offsetof(_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85, ___defaultMaterial_11)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultMaterial_11() const { return ___defaultMaterial_11; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultMaterial_11() { return &___defaultMaterial_11; }
	inline void set_defaultMaterial_11(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_11), (void*)value);
	}

	inline static int32_t get_offset_of_CanvasImage_12() { return static_cast<int32_t>(offsetof(_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85, ___CanvasImage_12)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_CanvasImage_12() const { return ___CanvasImage_12; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_CanvasImage_12() { return &___CanvasImage_12; }
	inline void set_CanvasImage_12(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___CanvasImage_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CanvasImage_12), (void*)value);
	}
};


// _2dxFX_Jelly
struct _2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material _2dxFX_Jelly::ForceMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___ForceMaterial_4;
	// System.Boolean _2dxFX_Jelly::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_Jelly::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_Jelly::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_Jelly::Heat
	float ___Heat_8;
	// System.Single _2dxFX_Jelly::Inside
	float ___Inside_9;
	// System.Single _2dxFX_Jelly::Speed
	float ___Speed_10;
	// System.Int32 _2dxFX_Jelly::ShaderChange
	int32_t ___ShaderChange_11;
	// UnityEngine.Material _2dxFX_Jelly::tempMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___tempMaterial_12;
	// UnityEngine.Material _2dxFX_Jelly::defaultMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultMaterial_13;
	// UnityEngine.UI.Image _2dxFX_Jelly::CanvasImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___CanvasImage_14;

public:
	inline static int32_t get_offset_of_ForceMaterial_4() { return static_cast<int32_t>(offsetof(_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4, ___ForceMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_ForceMaterial_4() const { return ___ForceMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_ForceMaterial_4() { return &___ForceMaterial_4; }
	inline void set_ForceMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___ForceMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForceMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveChange_5() { return static_cast<int32_t>(offsetof(_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4, ___ActiveChange_5)); }
	inline bool get_ActiveChange_5() const { return ___ActiveChange_5; }
	inline bool* get_address_of_ActiveChange_5() { return &___ActiveChange_5; }
	inline void set_ActiveChange_5(bool value)
	{
		___ActiveChange_5 = value;
	}

	inline static int32_t get_offset_of_shader_6() { return static_cast<int32_t>(offsetof(_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4, ___shader_6)); }
	inline String_t* get_shader_6() const { return ___shader_6; }
	inline String_t** get_address_of_shader_6() { return &___shader_6; }
	inline void set_shader_6(String_t* value)
	{
		___shader_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shader_6), (void*)value);
	}

	inline static int32_t get_offset_of__Alpha_7() { return static_cast<int32_t>(offsetof(_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4, ____Alpha_7)); }
	inline float get__Alpha_7() const { return ____Alpha_7; }
	inline float* get_address_of__Alpha_7() { return &____Alpha_7; }
	inline void set__Alpha_7(float value)
	{
		____Alpha_7 = value;
	}

	inline static int32_t get_offset_of_Heat_8() { return static_cast<int32_t>(offsetof(_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4, ___Heat_8)); }
	inline float get_Heat_8() const { return ___Heat_8; }
	inline float* get_address_of_Heat_8() { return &___Heat_8; }
	inline void set_Heat_8(float value)
	{
		___Heat_8 = value;
	}

	inline static int32_t get_offset_of_Inside_9() { return static_cast<int32_t>(offsetof(_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4, ___Inside_9)); }
	inline float get_Inside_9() const { return ___Inside_9; }
	inline float* get_address_of_Inside_9() { return &___Inside_9; }
	inline void set_Inside_9(float value)
	{
		___Inside_9 = value;
	}

	inline static int32_t get_offset_of_Speed_10() { return static_cast<int32_t>(offsetof(_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4, ___Speed_10)); }
	inline float get_Speed_10() const { return ___Speed_10; }
	inline float* get_address_of_Speed_10() { return &___Speed_10; }
	inline void set_Speed_10(float value)
	{
		___Speed_10 = value;
	}

	inline static int32_t get_offset_of_ShaderChange_11() { return static_cast<int32_t>(offsetof(_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4, ___ShaderChange_11)); }
	inline int32_t get_ShaderChange_11() const { return ___ShaderChange_11; }
	inline int32_t* get_address_of_ShaderChange_11() { return &___ShaderChange_11; }
	inline void set_ShaderChange_11(int32_t value)
	{
		___ShaderChange_11 = value;
	}

	inline static int32_t get_offset_of_tempMaterial_12() { return static_cast<int32_t>(offsetof(_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4, ___tempMaterial_12)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_tempMaterial_12() const { return ___tempMaterial_12; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_tempMaterial_12() { return &___tempMaterial_12; }
	inline void set_tempMaterial_12(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___tempMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempMaterial_12), (void*)value);
	}

	inline static int32_t get_offset_of_defaultMaterial_13() { return static_cast<int32_t>(offsetof(_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4, ___defaultMaterial_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultMaterial_13() const { return ___defaultMaterial_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultMaterial_13() { return &___defaultMaterial_13; }
	inline void set_defaultMaterial_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_13), (void*)value);
	}

	inline static int32_t get_offset_of_CanvasImage_14() { return static_cast<int32_t>(offsetof(_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4, ___CanvasImage_14)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_CanvasImage_14() const { return ___CanvasImage_14; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_CanvasImage_14() { return &___CanvasImage_14; }
	inline void set_CanvasImage_14(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___CanvasImage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CanvasImage_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  m_Items[1];

public:
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void _2dxFX_GoldenFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_Update_mEB087A6678BDFBF4F05B1902F470DE350630D53E (_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C (const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7BA0984E1359E7A656CB9110DBB539A4F2810CB1 (const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::AddKey(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, float ___value1, const RuntimeMethod* method);
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_tangentMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_inTangent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_outTangent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void _2dxFX_GrassFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_Update_mD4F581DFDB1C636811EC4899E28C045726F8F720 (_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1 (const RuntimeMethod* method);
// System.Void _2dxFX_GrassMultiFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_Update_mA4FBD723D588CEE2F1BF946CFE9EAE3F98E47454 (_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9 * __this, const RuntimeMethod* method);
// System.Void _2dxFX_GrayScale::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrayScale_Update_mC38987765617BC96BD3E87BB0CBD52410316AE7D (_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB * __this, const RuntimeMethod* method);
// System.Void _2dxFX_HSV::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_HSV_Update_m8A8D3C78ACFB36FAAEA616BFEC343BD2D2024E64 (_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F * __this, const RuntimeMethod* method);
// System.Void _2dxFX_Heat::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Heat_Update_m564A00C503858001B23EC900B6A5FD2F94A1CF63 (_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E * __this, const RuntimeMethod* method);
// System.Void _2dxFX_Hologram::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram_Update_m8FB884EBCA7C90F49B359F90E44449B6925A000D (_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1 * __this, const RuntimeMethod* method);
// System.Void _2dxFX_Hologram2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram2_Update_mD21017306B299D049DC97FABA800E79E02E204A6 (_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E * __this, const RuntimeMethod* method);
// System.Void _2dxFX_Hologram3::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram3_Update_mCE41B0669BD473783328C3CD45CE95D216776F99 (_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_mC33EB216560AE32277F2C285188B4490CEB6F074 (String_t* ___path0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// System.Void _2dxFX_Ice::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ice_Update_m7ABA65A6984FFB0CBACAB8C094CDB33EDA5DFAE9 (_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void _2dxFX_IcedFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_IcedFX_Update_m27AA431724667338057E9C3663A140AB1DB153CB (_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85 * __this, const RuntimeMethod* method);
// System.Void _2dxFX_Jelly::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Jelly_Update_m74D94D306FF8A09B8669815215AAFB378800FB48 (_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void _2dxFX_GoldenFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_Awake_mA878FF1D45146705DAE6B6589E5C23C20FF1C5B0 (_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_12(L_5);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldenFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_Start_m4C3E4D04A719001F63F31EAD55A29D55C83DF7D5 (_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06 * __this, const RuntimeMethod* method)
{
	{
		// ShaderChange = 0;
		__this->set_ShaderChange_9(0);
		// }
		return;
	}
}
// System.Void _2dxFX_GoldenFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_CallUpdate_m34C97CC42256512766B2F60039441B7684218723 (_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06 * __this, const RuntimeMethod* method)
{
	{
		// Update ();
		_2dxFX_GoldenFX_Update_mEB087A6678BDFBF4F05B1902F470DE350630D53E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_GoldenFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_Update_mEB087A6678BDFBF4F05B1902F470DE350630D53E (_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_12(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_9 = __this->get_ShaderChange_9();
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B7_0 = 0;
	}

IL_0050:
	{
		V_2 = (bool)G_B7_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00f8;
		}
	}
	{
		// ShaderChange=1;
		__this->set_ShaderChange_9(1);
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_16, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18;
		L_18 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_17, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00a8;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_21;
		L_21 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_21, L_22, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00a8:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24;
		L_24 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_23, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00d3;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_27, L_28);
	}

IL_00d3:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = __this->get_ForceMaterial_4();
		String_t* L_31 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_32;
		L_32 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_31, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_30, L_32, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// if ((ForceMaterial == null) && (ShaderChange==1))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_35 = __this->get_ShaderChange_9();
		G_B18_0 = ((((int32_t)L_35) == ((int32_t)1))? 1 : 0);
		goto IL_0112;
	}

IL_0111:
	{
		G_B18_0 = 0;
	}

IL_0112:
	{
		V_6 = (bool)G_B18_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_01bd;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_38;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_013a;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_40 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_40, /*hidden argument*/NULL);
	}

IL_013a:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_41 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_42;
		L_42 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_41, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_43, L_42, /*hidden argument*/NULL);
		__this->set_tempMaterial_10(L_43);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = __this->get_tempMaterial_10();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_44, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_46;
		L_46 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_45, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_46, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_47;
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_018a;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_49;
		L_49 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get_tempMaterial_10();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_49, L_50, /*hidden argument*/NULL);
		goto IL_01b5;
	}

IL_018a:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52;
		L_52 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_51, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_52, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_9 = L_53;
		bool L_54 = V_9;
		if (!L_54)
		{
			goto IL_01b5;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_55 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56 = __this->get_tempMaterial_10();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_55, L_56);
	}

IL_01b5:
	{
		// ShaderChange=0;
		__this->set_ShaderChange_9(0);
	}

IL_01bd:
	{
		// if (ActiveChange)
		bool L_57 = __this->get_ActiveChange_5();
		V_10 = L_57;
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_027e;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_60;
		L_60 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_59, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_60, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_11 = L_61;
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_0226;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Alpha", 1-_Alpha);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_63;
		L_63 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64;
		L_64 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_63, /*hidden argument*/NULL);
		float L_65 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_64, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_65)), /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Distortion", Golden);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_66;
		L_66 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_67;
		L_67 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_66, /*hidden argument*/NULL);
		float L_68 = __this->get_Golden_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_67, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_68, /*hidden argument*/NULL);
		goto IL_027d;
	}

IL_0226:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69;
		L_69 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_70;
		L_70 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_69, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_71;
		L_71 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_70, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_12 = L_71;
		bool L_72 = V_12;
		if (!L_72)
		{
			goto IL_027d;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1-_Alpha);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_73 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_74;
		L_74 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_73);
		float L_75 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_74, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_75)), /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_Distortion", Golden);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_76 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_77;
		L_77 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_76);
		float L_78 = __this->get_Golden_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_77, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_78, /*hidden argument*/NULL);
	}

IL_027d:
	{
	}

IL_027e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldenFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_OnDestroy_m864073BFE3F445D50D8F732B31309FCE977723B4 (_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_12(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true)) {
		bool L_9;
		L_9 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		bool L_10;
		L_10 = Application_get_isEditor_m7BA0984E1359E7A656CB9110DBB539A4F2810CB1(/*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0048;
	}

IL_0047:
	{
		G_B7_0 = 0;
	}

IL_0048:
	{
		V_2 = (bool)G_B7_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_010d;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_15, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_17;
		L_17 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = __this->get_defaultMaterial_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_19));
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_4 = (bool)G_B13_0;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010c;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00ce;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_defaultMaterial_11();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_27;
		L_27 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28;
		L_28 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_27, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_28, 0, /*hidden argument*/NULL);
		goto IL_010b;
	}

IL_00ce:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30;
		L_30 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_29, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_30, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_31;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_010b;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = __this->get_defaultMaterial_11();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_33, L_34);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36;
		L_36 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_35);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
	}

IL_010b:
	{
	}

IL_010c:
	{
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldenFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_OnDisable_m3C40BA4441730A2693F97B055484F4DAD3C10D16 (_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_12(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_defaultMaterial_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 0;
	}

IL_0055:
	{
		V_2 = (bool)G_B7_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_00d5;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_15;
		L_15 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_14, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_16;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0097;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18;
		L_18 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_defaultMaterial_11();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_18, L_19, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_20;
		L_20 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21;
		L_21 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_20, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_21, 0, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0097:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_23;
		L_23 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_22, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = __this->get_defaultMaterial_11();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29;
		L_29 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_28);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldenFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_OnEnable_m5E0D280A835633176E7D9119043485708B0B7252 (_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_12(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (defaultMaterial == null) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_defaultMaterial_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_12;
		L_12 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_13, L_12, /*hidden argument*/NULL);
		__this->set_defaultMaterial_11(L_13);
	}

IL_0060:
	{
		// if (ForceMaterial==null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00f9;
		}
	}
	{
		// ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_17 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_18;
		L_18 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_17, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_19, L_18, /*hidden argument*/NULL);
		__this->set_tempMaterial_10(L_19);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_tempMaterial_10();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_20, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00cb;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_tempMaterial_10();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_00cb:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28;
		L_28 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_27, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_29;
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_00f6;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = __this->get_tempMaterial_10();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_31, L_32);
	}

IL_00f6:
	{
		goto IL_0177;
	}

IL_00f9:
	{
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		String_t* L_34 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_35;
		L_35 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_34, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_33, L_35, /*hidden argument*/NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_38;
		L_38 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_37, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_38, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_39;
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_014b;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_41;
		L_41 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_41, L_42, /*hidden argument*/NULL);
		goto IL_0176;
	}

IL_014b:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_44;
		L_44 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_43, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_44, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_45;
		bool L_46 = V_7;
		if (!L_46)
		{
			goto IL_0176;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_47 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_47, L_48);
	}

IL_0176:
	{
	}

IL_0177:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldenFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX__ctor_mFA59C9B76ED6CA85BFB42B39A62B18757D2C5A06 (_2dxFX_GoldenFX_t917ACA7103D69413A1F94135ED77B34CDAC54C06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69C9230FB0C7F891F4264EBA12C85C9C1E073237);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// private string shader = "2DxFX/Standard/GoldenFX";
		__this->set_shader_6(_stringLiteral69C9230FB0C7F891F4264EBA12C85C9C1E073237);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->set__Alpha_7((1.0f));
		// [HideInInspector] [Range(0.001f, 4f)] public float Golden = 1.0f;
		__this->set_Golden_8((1.0f));
		// [HideInInspector] public int ShaderChange=0;
		__this->set_ShaderChange_9(0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void _2dxFX_GrassFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_Awake_m740D8A9067A9C608C6F0B8F378242B92C304AA91 (_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_15(L_5);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_Start_m64DEDB6724D11B795D62B58D833BD56AFCD82598 (_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ShaderChange = 0;
		__this->set_ShaderChange_12(0);
		// Wind= new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_0, /*hidden argument*/NULL);
		__this->set_Wind_10(L_0);
		// Wind.AddKey(0,0);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = __this->get_Wind_10();
		int32_t L_2;
		L_2 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_1, (0.0f), (0.0f), /*hidden argument*/NULL);
		// Wind.keys[0].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_4;
		L_4 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_3, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))), 0, /*hidden argument*/NULL);
		// Wind.keys[0].inTangent = 0f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_6;
		L_6 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_5, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))), (0.0f), /*hidden argument*/NULL);
		// Wind.keys[0].outTangent = 0f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_8;
		L_8 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_7, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))), (0.0f), /*hidden argument*/NULL);
		// Wind.AddKey(0.1004994f,0.06637689f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = __this->get_Wind_10();
		int32_t L_10;
		L_10 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_9, (0.100499399f), (0.0663768873f), /*hidden argument*/NULL);
		// Wind.keys[1].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_11 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_12;
		L_12 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_11, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))), 0, /*hidden argument*/NULL);
		// Wind.keys[1].inTangent = 0f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_13 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_14;
		L_14 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_13, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))), (0.0f), /*hidden argument*/NULL);
		// Wind.keys[1].outTangent = 0f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_15 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_16;
		L_16 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_15, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))), (0.0f), /*hidden argument*/NULL);
		// Wind.AddKey(0.2430963f,-0.06465532f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_17 = __this->get_Wind_10();
		int32_t L_18;
		L_18 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_17, (0.243096307f), (-0.0646553189f), /*hidden argument*/NULL);
		// Wind.keys[2].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_19 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_20;
		L_20 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_19, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2))), 0, /*hidden argument*/NULL);
		// Wind.keys[2].inTangent = -0.07599592f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_21 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_22;
		L_22 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_21, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2))), (-0.0759959221f), /*hidden argument*/NULL);
		// Wind.keys[2].outTangent = -0.07599592f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_23 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_24;
		L_24 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_23, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2))), (-0.0759959221f), /*hidden argument*/NULL);
		// Wind.AddKey(0.3425266f,0.02290122f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_25 = __this->get_Wind_10();
		int32_t L_26;
		L_26 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_25, (0.342526615f), (0.0229012202f), /*hidden argument*/NULL);
		// Wind.keys[3].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_27 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_28;
		L_28 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_27, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(3))), 0, /*hidden argument*/NULL);
		// Wind.keys[3].inTangent = 0.03580004f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_29 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_30;
		L_30 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_29, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(3))), (0.0358000398f), /*hidden argument*/NULL);
		// Wind.keys[3].outTangent = 0.03580004f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_31 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_32;
		L_32 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_31, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_32)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(3))), (0.0358000398f), /*hidden argument*/NULL);
		// Wind.AddKey(0.4246872f,-0.02232522f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_33 = __this->get_Wind_10();
		int32_t L_34;
		L_34 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_33, (0.424687207f), (-0.0223252196f), /*hidden argument*/NULL);
		// Wind.keys[4].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_35 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_36;
		L_36 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_35, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(4))), 0, /*hidden argument*/NULL);
		// Wind.keys[4].inTangent = -0.006025657f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_37 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_38;
		L_38 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_37, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(4))), (-0.00602565706f), /*hidden argument*/NULL);
		// Wind.keys[4].outTangent = -0.006025657f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_39 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_40;
		L_40 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_39, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_40)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(4))), (-0.00602565706f), /*hidden argument*/NULL);
		// Wind.AddKey(0.5104106f,0.1647801f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_41 = __this->get_Wind_10();
		int32_t L_42;
		L_42 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_41, (0.510410607f), (0.164780095f), /*hidden argument*/NULL);
		// Wind.keys[5].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_43 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_44;
		L_44 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_43, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(5))), 0, /*hidden argument*/NULL);
		// Wind.keys[5].inTangent = 0.02981164f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_45 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_46;
		L_46 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_45, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(5))), (0.0298116393f), /*hidden argument*/NULL);
		// Wind.keys[5].outTangent = 0.02981164f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_47 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_48;
		L_48 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_47, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_48)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(5))), (0.0298116393f), /*hidden argument*/NULL);
		// Wind.AddKey(0.6082056f,-0.04679203f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_49 = __this->get_Wind_10();
		int32_t L_50;
		L_50 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_49, (0.608205616f), (-0.0467920303f), /*hidden argument*/NULL);
		// Wind.keys[6].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_51 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_52;
		L_52 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_51, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(6))), 0, /*hidden argument*/NULL);
		// Wind.keys[6].inTangent = -0.3176928f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_53 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_54;
		L_54 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_53, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_54)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(6))), (-0.317692786f), /*hidden argument*/NULL);
		// Wind.keys[6].outTangent = -0.3176928f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_55 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_56;
		L_56 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_55, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(6))), (-0.317692786f), /*hidden argument*/NULL);
		// Wind.AddKey(0.7794942f,0.2234365f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_57 = __this->get_Wind_10();
		int32_t L_58;
		L_58 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_57, (0.779494226f), (0.223436505f), /*hidden argument*/NULL);
		// Wind.keys[7].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_59 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_60;
		L_60 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_59, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(7))), 0, /*hidden argument*/NULL);
		// Wind.keys[7].inTangent = 0.2063811f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_61 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_62;
		L_62 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_61, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_62)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(7))), (0.206381097f), /*hidden argument*/NULL);
		// Wind.keys[7].outTangent = 0.2063811f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_63 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_64;
		L_64 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_63, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(7))), (0.206381097f), /*hidden argument*/NULL);
		// Wind.AddKey(0.8546611f,-0.003165513f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_65 = __this->get_Wind_10();
		int32_t L_66;
		L_66 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_65, (0.854661107f), (-0.00316551304f), /*hidden argument*/NULL);
		// Wind.keys[8].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_67 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_68;
		L_68 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_67, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_68)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(8))), 0, /*hidden argument*/NULL);
		// Wind.keys[8].inTangent = 0.02264977f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_69 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_70;
		L_70 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_69, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(8))), (0.0226497706f), /*hidden argument*/NULL);
		// Wind.keys[8].outTangent = 0.02264977f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_71 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_72;
		L_72 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_71, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_72)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(8))), (0.0226497706f), /*hidden argument*/NULL);
		// Wind.AddKey(1.022495f,-0.07358052f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_73 = __this->get_Wind_10();
		int32_t L_74;
		L_74 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_73, (1.02249503f), (-0.0735805184f), /*hidden argument*/NULL);
		// Wind.keys[9].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_75 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_76;
		L_76 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_75, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_76)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)))), 0, /*hidden argument*/NULL);
		// Wind.keys[9].inTangent = 2.450916f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_77 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_78;
		L_78 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_77, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_78)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)))), (2.45091605f), /*hidden argument*/NULL);
		// Wind.keys[9].outTangent = 2.450916f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_79 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_80;
		L_80 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_79, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_80)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)))), (2.45091605f), /*hidden argument*/NULL);
		// Wind.AddKey(1.250894f,-0.1813075f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_81 = __this->get_Wind_10();
		int32_t L_82;
		L_82 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_81, (1.25089395f), (-0.181307495f), /*hidden argument*/NULL);
		// Wind.keys[10].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_83 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_84;
		L_84 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_83, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)))), 0, /*hidden argument*/NULL);
		// Wind.keys[10].inTangent = 0.02214685f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_85 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_86;
		L_86 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_85, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_86)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)))), (0.0221468508f), /*hidden argument*/NULL);
		// Wind.keys[10].outTangent = 0.02214685f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_87 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_88;
		L_88 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_87, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_88)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)))), (0.0221468508f), /*hidden argument*/NULL);
		// Wind.AddKey(1.369877f,-0.06861454f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_89 = __this->get_Wind_10();
		int32_t L_90;
		L_90 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_89, (1.36987698f), (-0.0686145425f), /*hidden argument*/NULL);
		// Wind.keys[11].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_91 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_92;
		L_92 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_91, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_92)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)))), 0, /*hidden argument*/NULL);
		// Wind.keys[11].inTangent = -1.860534f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_93 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_94;
		L_94 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_93, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_94)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)))), (-1.86053395f), /*hidden argument*/NULL);
		// Wind.keys[11].outTangent = -1.860534f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_95 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_96;
		L_96 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_95, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_96)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)))), (-1.86053395f), /*hidden argument*/NULL);
		// Wind.AddKey(1.484951f,-0.1543293f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_97 = __this->get_Wind_10();
		int32_t L_98;
		L_98 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_97, (1.48495102f), (-0.1543293f), /*hidden argument*/NULL);
		// Wind.keys[12].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_99 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_100;
		L_100 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_99, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_100)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)))), 0, /*hidden argument*/NULL);
		// Wind.keys[12].inTangent = 0.0602752f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_101 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_102;
		L_102 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_101, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_102)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)))), (0.0602752008f), /*hidden argument*/NULL);
		// Wind.keys[12].outTangent = 0.0602752f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_103 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_104;
		L_104 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_103, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_104)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)))), (0.0602752008f), /*hidden argument*/NULL);
		// Wind.AddKey(1.583562f,0.100938f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_105 = __this->get_Wind_10();
		int32_t L_106;
		L_106 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_105, (1.58356202f), (0.100938f), /*hidden argument*/NULL);
		// Wind.keys[13].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_107 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_108;
		L_108 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_107, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_108)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)))), 0, /*hidden argument*/NULL);
		// Wind.keys[13].inTangent = 0.08665025f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_109 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_110;
		L_110 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_109, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_110)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)))), (0.0866502523f), /*hidden argument*/NULL);
		// Wind.keys[13].outTangent = 0.08665025f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_111 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_112;
		L_112 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_111, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_112)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)))), (0.0866502523f), /*hidden argument*/NULL);
		// Wind.AddKey(1.687307f,-0.100769f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_113 = __this->get_Wind_10();
		int32_t L_114;
		L_114 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_113, (1.687307f), (-0.100768998f), /*hidden argument*/NULL);
		// Wind.keys[14].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_115 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_116;
		L_116 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_115, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_116)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)))), 0, /*hidden argument*/NULL);
		// Wind.keys[14].inTangent = 0.01110137f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_117 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_118;
		L_118 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_117, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_118)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)))), (0.0111013697f), /*hidden argument*/NULL);
		// Wind.keys[14].outTangent = 0.01110137f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_119 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_120;
		L_120 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_119, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_120)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)))), (0.0111013697f), /*hidden argument*/NULL);
		// Wind.AddKey(1.797593f,0.04921142f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_121 = __this->get_Wind_10();
		int32_t L_122;
		L_122 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_121, (1.797593f), (0.0492114201f), /*hidden argument*/NULL);
		// Wind.keys[15].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_123 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_124;
		L_124 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_123, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_124)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)))), 0, /*hidden argument*/NULL);
		// Wind.keys[15].inTangent = 3.407104f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_125 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_126;
		L_126 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_125, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_126)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)))), (3.40710402f), /*hidden argument*/NULL);
		// Wind.keys[15].outTangent = 3.407104f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_127 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_128;
		L_128 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_127, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_128)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)))), (3.40710402f), /*hidden argument*/NULL);
		// Wind.AddKey(1.927248f,-0.1877219f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_129 = __this->get_Wind_10();
		int32_t L_130;
		L_130 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_129, (1.927248f), (-0.187721893f), /*hidden argument*/NULL);
		// Wind.keys[16].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_131 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_132;
		L_132 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_131, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_132)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)))), 0, /*hidden argument*/NULL);
		// Wind.keys[16].inTangent = -0.001117587f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_133 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_134;
		L_134 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_133, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_134)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)))), (-0.00111758697f), /*hidden argument*/NULL);
		// Wind.keys[16].outTangent = -0.001117587f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_135 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_136;
		L_136 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_135, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_136)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)))), (-0.00111758697f), /*hidden argument*/NULL);
		// Wind.AddKey(2.067694f,0.2742145f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_137 = __this->get_Wind_10();
		int32_t L_138;
		L_138 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_137, (2.06769395f), (0.274214506f), /*hidden argument*/NULL);
		// Wind.keys[17].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_139 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_140;
		L_140 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_139, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_140)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)))), 0, /*hidden argument*/NULL);
		// Wind.keys[17].inTangent = 4.736587f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_141 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_142;
		L_142 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_141, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_142)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)))), (4.73658705f), /*hidden argument*/NULL);
		// Wind.keys[17].outTangent = 4.736587f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_143 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_144;
		L_144 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_143, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_144)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)))), (4.73658705f), /*hidden argument*/NULL);
		// Wind.AddKey(2.184602f,-0.06127208f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_145 = __this->get_Wind_10();
		int32_t L_146;
		L_146 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_145, (2.18460202f), (-0.061272081f), /*hidden argument*/NULL);
		// Wind.keys[18].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_147 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_148;
		L_148 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_147, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_148)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)))), 0, /*hidden argument*/NULL);
		// Wind.keys[18].inTangent = -0.1308322f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_149 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_150;
		L_150 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_149, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_150)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)))), (-0.130832195f), /*hidden argument*/NULL);
		// Wind.keys[18].outTangent = -0.1308322f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_151 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_152;
		L_152 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_151, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_152)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)))), (-0.130832195f), /*hidden argument*/NULL);
		// Wind.AddKey(2.305948f,0.1891117f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_153 = __this->get_Wind_10();
		int32_t L_154;
		L_154 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_153, (2.30594802f), (0.189111695f), /*hidden argument*/NULL);
		// Wind.keys[19].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_155 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_156;
		L_156 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_155, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_156)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)))), 0, /*hidden argument*/NULL);
		// Wind.keys[19].inTangent = 0.04030764f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_157 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_158;
		L_158 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_157, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_158)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)))), (0.040307641f), /*hidden argument*/NULL);
		// Wind.keys[19].outTangent = 0.04030764f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_159 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_160;
		L_160 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_159, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_160)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)))), (0.040307641f), /*hidden argument*/NULL);
		// Wind.AddKey(2.428946f,-0.1695723f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_161 = __this->get_Wind_10();
		int32_t L_162;
		L_162 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_161, (2.42894602f), (-0.169572294f), /*hidden argument*/NULL);
		// Wind.keys[20].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_163 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_164;
		L_164 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_163, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_164)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)))), 0, /*hidden argument*/NULL);
		// Wind.keys[20].inTangent = -0.2463162f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_165 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_166;
		L_166 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_165, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_166)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)))), (-0.246316195f), /*hidden argument*/NULL);
		// Wind.keys[20].outTangent = -0.2463162f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_167 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_168;
		L_168 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_167, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_168)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)))), (-0.246316195f), /*hidden argument*/NULL);
		// Wind.AddKey(2.55922f,0.0359862f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_169 = __this->get_Wind_10();
		int32_t L_170;
		L_170 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_169, (2.55922008f), (0.0359862f), /*hidden argument*/NULL);
		// Wind.keys[21].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_171 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_172;
		L_172 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_171, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_172)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)))), 0, /*hidden argument*/NULL);
		// Wind.keys[21].inTangent = 0.3967434f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_173 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_174;
		L_174 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_173, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_174)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)))), (0.396743387f), /*hidden argument*/NULL);
		// Wind.keys[21].outTangent = 0.3967434f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_175 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_176;
		L_176 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_175, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_176)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)))), (0.396743387f), /*hidden argument*/NULL);
		// Wind.AddKey(2.785119f,-0.08398628f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_177 = __this->get_Wind_10();
		int32_t L_178;
		L_178 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_177, (2.78511906f), (-0.0839862823f), /*hidden argument*/NULL);
		// Wind.keys[22].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_179 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_180;
		L_180 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_179, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_180)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)))), 0, /*hidden argument*/NULL);
		// Wind.keys[22].inTangent = -0.2388284f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_181 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_182;
		L_182 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_181, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_182)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)))), (-0.238828406f), /*hidden argument*/NULL);
		// Wind.keys[22].outTangent = -0.2388284f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_183 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_184;
		L_184 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_183, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_184)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)))), (-0.238828406f), /*hidden argument*/NULL);
		// Wind.AddKey(3f,0f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_185 = __this->get_Wind_10();
		int32_t L_186;
		L_186 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_185, (3.0f), (0.0f), /*hidden argument*/NULL);
		// Wind.keys[23].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_187 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_188;
		L_188 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_187, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_188)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)))), 0, /*hidden argument*/NULL);
		// Wind.keys[23].inTangent = 0f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_189 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_190;
		L_190 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_189, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_190)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)))), (0.0f), /*hidden argument*/NULL);
		// Wind.keys[23].outTangent = 0f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_191 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_192;
		L_192 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_191, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_192)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)))), (0.0f), /*hidden argument*/NULL);
		// Wind.postWrapMode= WrapMode.Loop;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_193 = __this->get_Wind_10();
		AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568(L_193, 2, /*hidden argument*/NULL);
		// Wind.preWrapMode= WrapMode.Loop;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_194 = __this->get_Wind_10();
		AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF(L_194, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_GrassFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_CallUpdate_m60FA0254524F06B4390B166078B3444BB17696BE (_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B * __this, const RuntimeMethod* method)
{
	{
		// Update ();
		_2dxFX_GrassFX_Update_mD4F581DFDB1C636811EC4899E28C045726F8F720(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_GrassFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_Update_mD4F581DFDB1C636811EC4899E28C045726F8F720 (_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_15(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_9 = __this->get_ShaderChange_12();
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B7_0 = 0;
	}

IL_0050:
	{
		V_2 = (bool)G_B7_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00f8;
		}
	}
	{
		// ShaderChange=1;
		__this->set_ShaderChange_12(1);
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_tempMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_tempMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_16, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18;
		L_18 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_17, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00a8;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_21;
		L_21 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_21, L_22, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00a8:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24;
		L_24 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_23, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00d3;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_27, L_28);
	}

IL_00d3:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = __this->get_ForceMaterial_4();
		String_t* L_31 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_32;
		L_32 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_31, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_30, L_32, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// if ((ForceMaterial == null) && (ShaderChange==1))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_35 = __this->get_ShaderChange_12();
		G_B18_0 = ((((int32_t)L_35) == ((int32_t)1))? 1 : 0);
		goto IL_0112;
	}

IL_0111:
	{
		G_B18_0 = 0;
	}

IL_0112:
	{
		V_6 = (bool)G_B18_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_01bd;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_tempMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_38;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_013a;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_40 = __this->get_tempMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_40, /*hidden argument*/NULL);
	}

IL_013a:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_41 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_42;
		L_42 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_41, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_43, L_42, /*hidden argument*/NULL);
		__this->set_tempMaterial_13(L_43);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = __this->get_tempMaterial_13();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_44, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_46;
		L_46 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_45, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_46, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_47;
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_018a;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_49;
		L_49 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get_tempMaterial_13();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_49, L_50, /*hidden argument*/NULL);
		goto IL_01b5;
	}

IL_018a:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52;
		L_52 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_51, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_52, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_9 = L_53;
		bool L_54 = V_9;
		if (!L_54)
		{
			goto IL_01b5;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_55 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56 = __this->get_tempMaterial_13();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_55, L_56);
	}

IL_01b5:
	{
		// ShaderChange=0;
		__this->set_ShaderChange_12(0);
	}

IL_01bd:
	{
		// if (ActiveChange)
		bool L_57 = __this->get_ActiveChange_5();
		V_10 = L_57;
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_0369;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_60;
		L_60 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_59, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_60, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_11 = L_61;
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_029d;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Alpha", 1-_Alpha);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_63;
		L_63 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64;
		L_64 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_63, /*hidden argument*/NULL);
		float L_65 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_64, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_65)), /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Distortion", Heat);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_66;
		L_66 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_67;
		L_67 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_66, /*hidden argument*/NULL);
		float L_68 = __this->get_Heat_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_67, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_68, /*hidden argument*/NULL);
		// if (Wind!=null) this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_69 = __this->get_Wind_10();
		V_12 = (bool)((!(((RuntimeObject*)(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)L_69) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_70 = V_12;
		if (!L_70)
		{
			goto IL_025c;
		}
	}
	{
		// if (Wind!=null) this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_71;
		L_71 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_72;
		L_72 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_71, /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_73 = __this->get_Wind_10();
		float L_74 = __this->get_WindTime1_11();
		float L_75;
		L_75 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_73, L_74, /*hidden argument*/NULL);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_72, _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716, L_75, /*hidden argument*/NULL);
	}

IL_025c:
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Speed", Speed);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_76;
		L_76 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_77;
		L_77 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_76, /*hidden argument*/NULL);
		float L_78 = __this->get_Speed_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_77, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_78, /*hidden argument*/NULL);
		// WindTime1 += (Time.deltaTime/8)*Speed;
		float L_79 = __this->get_WindTime1_11();
		float L_80;
		L_80 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_81 = __this->get_Speed_9();
		__this->set_WindTime1_11(((float)il2cpp_codegen_add((float)L_79, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_80/(float)(8.0f))), (float)L_81)))));
		goto IL_0368;
	}

IL_029d:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_82;
		L_82 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_83;
		L_83 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_82, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_84;
		L_84 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_83, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_13 = L_84;
		bool L_85 = V_13;
		if (!L_85)
		{
			goto IL_0368;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1-_Alpha);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_86 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_87;
		L_87 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_86);
		float L_88 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_87, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_88)), /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_Distortion", Heat);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_89 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_90;
		L_90 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_89);
		float L_91 = __this->get_Heat_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_90, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_91, /*hidden argument*/NULL);
		// if (Wind!=null) CanvasImage.material.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_92 = __this->get_Wind_10();
		V_14 = (bool)((!(((RuntimeObject*)(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)L_92) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_93 = V_14;
		if (!L_93)
		{
			goto IL_032c;
		}
	}
	{
		// if (Wind!=null) CanvasImage.material.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_94 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_95;
		L_95 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_94);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_96 = __this->get_Wind_10();
		float L_97 = __this->get_WindTime1_11();
		float L_98;
		L_98 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_96, L_97, /*hidden argument*/NULL);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_95, _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716, L_98, /*hidden argument*/NULL);
	}

IL_032c:
	{
		// CanvasImage.material.SetFloat("_Speed", Speed);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_99 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_100;
		L_100 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_99);
		float L_101 = __this->get_Speed_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_100, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_101, /*hidden argument*/NULL);
		// WindTime1 += (Time.deltaTime/8)*Speed;
		float L_102 = __this->get_WindTime1_11();
		float L_103;
		L_103 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_104 = __this->get_Speed_9();
		__this->set_WindTime1_11(((float)il2cpp_codegen_add((float)L_102, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_103/(float)(8.0f))), (float)L_104)))));
	}

IL_0368:
	{
	}

IL_0369:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_OnDestroy_m791FE9D5806E69562FA48D234911476F35094E5A (_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_15(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true)) {
		bool L_9;
		L_9 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		bool L_10;
		L_10 = Application_get_isEditor_m7BA0984E1359E7A656CB9110DBB539A4F2810CB1(/*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0048;
	}

IL_0047:
	{
		G_B7_0 = 0;
	}

IL_0048:
	{
		V_2 = (bool)G_B7_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_010d;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_tempMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = __this->get_tempMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_15, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_17;
		L_17 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = __this->get_defaultMaterial_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_19));
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_4 = (bool)G_B13_0;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010c;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00ce;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_defaultMaterial_14();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_27;
		L_27 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28;
		L_28 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_27, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_28, 0, /*hidden argument*/NULL);
		goto IL_010b;
	}

IL_00ce:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30;
		L_30 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_29, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_30, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_31;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_010b;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = __this->get_defaultMaterial_14();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_33, L_34);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36;
		L_36 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_35);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
	}

IL_010b:
	{
	}

IL_010c:
	{
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_OnDisable_m592F885A5F73AA06BC3E1F5CC7471CB81E041DAE (_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_15(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_defaultMaterial_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 0;
	}

IL_0055:
	{
		V_2 = (bool)G_B7_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_00d5;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_15;
		L_15 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_14, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_16;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0097;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18;
		L_18 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_defaultMaterial_14();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_18, L_19, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_20;
		L_20 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21;
		L_21 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_20, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_21, 0, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0097:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_23;
		L_23 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_22, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = __this->get_defaultMaterial_14();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29;
		L_29 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_28);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_OnEnable_m354D6A79F7E6D397D3619BC5CF839DDCDBEB4FD9 (_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_15(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// WindTime1 = 0;
		__this->set_WindTime1_11((0.0f));
		// if (defaultMaterial == null) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_defaultMaterial_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_12;
		L_12 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_13, L_12, /*hidden argument*/NULL);
		__this->set_defaultMaterial_14(L_13);
	}

IL_006b:
	{
		// if (ForceMaterial==null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0104;
		}
	}
	{
		// ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_17 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_18;
		L_18 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_17, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_19, L_18, /*hidden argument*/NULL);
		__this->set_tempMaterial_13(L_19);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_tempMaterial_13();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_20, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00d6;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_tempMaterial_13();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		goto IL_0101;
	}

IL_00d6:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28;
		L_28 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_27, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_29;
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_0101;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = __this->get_tempMaterial_13();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_31, L_32);
	}

IL_0101:
	{
		goto IL_0182;
	}

IL_0104:
	{
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		String_t* L_34 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_35;
		L_35 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_34, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_33, L_35, /*hidden argument*/NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_38;
		L_38 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_37, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_38, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_39;
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_0156;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_41;
		L_41 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_41, L_42, /*hidden argument*/NULL);
		goto IL_0181;
	}

IL_0156:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_44;
		L_44 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_43, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_44, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_45;
		bool L_46 = V_7;
		if (!L_46)
		{
			goto IL_0181;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_47 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_47, L_48);
	}

IL_0181:
	{
	}

IL_0182:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX__ctor_m9749249EEE80E6CAFB8E9A7E53BD180A4A379453 (_2dxFX_GrassFX_t1220028DA81155EA4079991541FC990A8A08D78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EEC191F53AD169AC62F0A08F647DA34EB1911A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// private string shader = "2DxFX/Standard/GrassFX";
		__this->set_shader_6(_stringLiteral9EEC191F53AD169AC62F0A08F647DA34EB1911A7);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->set__Alpha_7((1.0f));
		// [HideInInspector] [Range(0.0f, 4f)] public float Heat = 1.0f;
		__this->set_Heat_8((1.0f));
		// [HideInInspector] [Range(0.0f, 4f)] public float Speed = 1.0f;
		__this->set_Speed_9((1.0f));
		// private float WindTime1=0;
		__this->set_WindTime1_11((0.0f));
		// [HideInInspector] public int ShaderChange=0;
		__this->set_ShaderChange_12(0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void _2dxFX_GrassMultiFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_Awake_mE8FF3FC3014CCF914511B01DA86A6C769682CB18 (_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_18(L_5);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassMultiFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_Start_mA1BFDF132DB8B99D83A2CD9FA186DF1AE2DF5303 (_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ShaderChange = 0;
		__this->set_ShaderChange_15(0);
		// Wind= new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_0, /*hidden argument*/NULL);
		__this->set_Wind_10(L_0);
		// Wind.AddKey(0,0);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = __this->get_Wind_10();
		int32_t L_2;
		L_2 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_1, (0.0f), (0.0f), /*hidden argument*/NULL);
		// Wind.keys[0].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_4;
		L_4 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_3, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))), 0, /*hidden argument*/NULL);
		// Wind.keys[0].inTangent = 0f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_6;
		L_6 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_5, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))), (0.0f), /*hidden argument*/NULL);
		// Wind.keys[0].outTangent = 0f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_8;
		L_8 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_7, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))), (0.0f), /*hidden argument*/NULL);
		// Wind.AddKey(0.1004994f,0.06637689f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = __this->get_Wind_10();
		int32_t L_10;
		L_10 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_9, (0.100499399f), (0.0663768873f), /*hidden argument*/NULL);
		// Wind.keys[1].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_11 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_12;
		L_12 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_11, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))), 0, /*hidden argument*/NULL);
		// Wind.keys[1].inTangent = 0f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_13 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_14;
		L_14 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_13, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))), (0.0f), /*hidden argument*/NULL);
		// Wind.keys[1].outTangent = 0f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_15 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_16;
		L_16 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_15, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))), (0.0f), /*hidden argument*/NULL);
		// Wind.AddKey(0.2430963f,-0.06465532f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_17 = __this->get_Wind_10();
		int32_t L_18;
		L_18 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_17, (0.243096307f), (-0.0646553189f), /*hidden argument*/NULL);
		// Wind.keys[2].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_19 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_20;
		L_20 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_19, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2))), 0, /*hidden argument*/NULL);
		// Wind.keys[2].inTangent = -0.07599592f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_21 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_22;
		L_22 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_21, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2))), (-0.0759959221f), /*hidden argument*/NULL);
		// Wind.keys[2].outTangent = -0.07599592f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_23 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_24;
		L_24 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_23, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2))), (-0.0759959221f), /*hidden argument*/NULL);
		// Wind.AddKey(0.3425266f,0.02290122f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_25 = __this->get_Wind_10();
		int32_t L_26;
		L_26 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_25, (0.342526615f), (0.0229012202f), /*hidden argument*/NULL);
		// Wind.keys[3].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_27 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_28;
		L_28 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_27, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(3))), 0, /*hidden argument*/NULL);
		// Wind.keys[3].inTangent = 0.03580004f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_29 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_30;
		L_30 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_29, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(3))), (0.0358000398f), /*hidden argument*/NULL);
		// Wind.keys[3].outTangent = 0.03580004f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_31 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_32;
		L_32 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_31, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_32)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(3))), (0.0358000398f), /*hidden argument*/NULL);
		// Wind.AddKey(0.4246872f,-0.02232522f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_33 = __this->get_Wind_10();
		int32_t L_34;
		L_34 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_33, (0.424687207f), (-0.0223252196f), /*hidden argument*/NULL);
		// Wind.keys[4].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_35 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_36;
		L_36 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_35, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(4))), 0, /*hidden argument*/NULL);
		// Wind.keys[4].inTangent = -0.006025657f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_37 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_38;
		L_38 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_37, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(4))), (-0.00602565706f), /*hidden argument*/NULL);
		// Wind.keys[4].outTangent = -0.006025657f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_39 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_40;
		L_40 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_39, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_40)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(4))), (-0.00602565706f), /*hidden argument*/NULL);
		// Wind.AddKey(0.5104106f,0.1647801f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_41 = __this->get_Wind_10();
		int32_t L_42;
		L_42 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_41, (0.510410607f), (0.164780095f), /*hidden argument*/NULL);
		// Wind.keys[5].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_43 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_44;
		L_44 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_43, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(5))), 0, /*hidden argument*/NULL);
		// Wind.keys[5].inTangent = 0.02981164f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_45 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_46;
		L_46 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_45, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(5))), (0.0298116393f), /*hidden argument*/NULL);
		// Wind.keys[5].outTangent = 0.02981164f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_47 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_48;
		L_48 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_47, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_48)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(5))), (0.0298116393f), /*hidden argument*/NULL);
		// Wind.AddKey(0.6082056f,-0.04679203f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_49 = __this->get_Wind_10();
		int32_t L_50;
		L_50 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_49, (0.608205616f), (-0.0467920303f), /*hidden argument*/NULL);
		// Wind.keys[6].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_51 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_52;
		L_52 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_51, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(6))), 0, /*hidden argument*/NULL);
		// Wind.keys[6].inTangent = -0.3176928f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_53 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_54;
		L_54 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_53, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_54)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(6))), (-0.317692786f), /*hidden argument*/NULL);
		// Wind.keys[6].outTangent = -0.3176928f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_55 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_56;
		L_56 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_55, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(6))), (-0.317692786f), /*hidden argument*/NULL);
		// Wind.AddKey(0.7794942f,0.2234365f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_57 = __this->get_Wind_10();
		int32_t L_58;
		L_58 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_57, (0.779494226f), (0.223436505f), /*hidden argument*/NULL);
		// Wind.keys[7].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_59 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_60;
		L_60 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_59, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(7))), 0, /*hidden argument*/NULL);
		// Wind.keys[7].inTangent = 0.2063811f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_61 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_62;
		L_62 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_61, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_62)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(7))), (0.206381097f), /*hidden argument*/NULL);
		// Wind.keys[7].outTangent = 0.2063811f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_63 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_64;
		L_64 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_63, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(7))), (0.206381097f), /*hidden argument*/NULL);
		// Wind.AddKey(0.8546611f,-0.003165513f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_65 = __this->get_Wind_10();
		int32_t L_66;
		L_66 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_65, (0.854661107f), (-0.00316551304f), /*hidden argument*/NULL);
		// Wind.keys[8].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_67 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_68;
		L_68 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_67, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_68)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(8))), 0, /*hidden argument*/NULL);
		// Wind.keys[8].inTangent = 0.02264977f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_69 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_70;
		L_70 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_69, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(8))), (0.0226497706f), /*hidden argument*/NULL);
		// Wind.keys[8].outTangent = 0.02264977f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_71 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_72;
		L_72 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_71, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_72)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(8))), (0.0226497706f), /*hidden argument*/NULL);
		// Wind.AddKey(1.022495f,-0.07358052f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_73 = __this->get_Wind_10();
		int32_t L_74;
		L_74 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_73, (1.02249503f), (-0.0735805184f), /*hidden argument*/NULL);
		// Wind.keys[9].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_75 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_76;
		L_76 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_75, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_76)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)))), 0, /*hidden argument*/NULL);
		// Wind.keys[9].inTangent = 2.450916f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_77 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_78;
		L_78 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_77, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_78)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)))), (2.45091605f), /*hidden argument*/NULL);
		// Wind.keys[9].outTangent = 2.450916f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_79 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_80;
		L_80 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_79, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_80)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)))), (2.45091605f), /*hidden argument*/NULL);
		// Wind.AddKey(1.250894f,-0.1813075f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_81 = __this->get_Wind_10();
		int32_t L_82;
		L_82 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_81, (1.25089395f), (-0.181307495f), /*hidden argument*/NULL);
		// Wind.keys[10].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_83 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_84;
		L_84 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_83, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)))), 0, /*hidden argument*/NULL);
		// Wind.keys[10].inTangent = 0.02214685f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_85 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_86;
		L_86 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_85, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_86)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)))), (0.0221468508f), /*hidden argument*/NULL);
		// Wind.keys[10].outTangent = 0.02214685f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_87 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_88;
		L_88 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_87, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_88)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)))), (0.0221468508f), /*hidden argument*/NULL);
		// Wind.AddKey(1.369877f,-0.06861454f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_89 = __this->get_Wind_10();
		int32_t L_90;
		L_90 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_89, (1.36987698f), (-0.0686145425f), /*hidden argument*/NULL);
		// Wind.keys[11].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_91 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_92;
		L_92 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_91, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_92)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)))), 0, /*hidden argument*/NULL);
		// Wind.keys[11].inTangent = -1.860534f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_93 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_94;
		L_94 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_93, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_94)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)))), (-1.86053395f), /*hidden argument*/NULL);
		// Wind.keys[11].outTangent = -1.860534f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_95 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_96;
		L_96 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_95, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_96)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)))), (-1.86053395f), /*hidden argument*/NULL);
		// Wind.AddKey(1.484951f,-0.1543293f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_97 = __this->get_Wind_10();
		int32_t L_98;
		L_98 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_97, (1.48495102f), (-0.1543293f), /*hidden argument*/NULL);
		// Wind.keys[12].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_99 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_100;
		L_100 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_99, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_100)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)))), 0, /*hidden argument*/NULL);
		// Wind.keys[12].inTangent = 0.0602752f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_101 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_102;
		L_102 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_101, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_102)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)))), (0.0602752008f), /*hidden argument*/NULL);
		// Wind.keys[12].outTangent = 0.0602752f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_103 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_104;
		L_104 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_103, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_104)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)))), (0.0602752008f), /*hidden argument*/NULL);
		// Wind.AddKey(1.583562f,0.100938f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_105 = __this->get_Wind_10();
		int32_t L_106;
		L_106 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_105, (1.58356202f), (0.100938f), /*hidden argument*/NULL);
		// Wind.keys[13].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_107 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_108;
		L_108 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_107, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_108)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)))), 0, /*hidden argument*/NULL);
		// Wind.keys[13].inTangent = 0.08665025f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_109 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_110;
		L_110 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_109, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_110)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)))), (0.0866502523f), /*hidden argument*/NULL);
		// Wind.keys[13].outTangent = 0.08665025f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_111 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_112;
		L_112 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_111, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_112)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)))), (0.0866502523f), /*hidden argument*/NULL);
		// Wind.AddKey(1.687307f,-0.100769f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_113 = __this->get_Wind_10();
		int32_t L_114;
		L_114 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_113, (1.687307f), (-0.100768998f), /*hidden argument*/NULL);
		// Wind.keys[14].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_115 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_116;
		L_116 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_115, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_116)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)))), 0, /*hidden argument*/NULL);
		// Wind.keys[14].inTangent = 0.01110137f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_117 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_118;
		L_118 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_117, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_118)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)))), (0.0111013697f), /*hidden argument*/NULL);
		// Wind.keys[14].outTangent = 0.01110137f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_119 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_120;
		L_120 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_119, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_120)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)))), (0.0111013697f), /*hidden argument*/NULL);
		// Wind.AddKey(1.797593f,0.04921142f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_121 = __this->get_Wind_10();
		int32_t L_122;
		L_122 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_121, (1.797593f), (0.0492114201f), /*hidden argument*/NULL);
		// Wind.keys[15].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_123 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_124;
		L_124 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_123, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_124)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)))), 0, /*hidden argument*/NULL);
		// Wind.keys[15].inTangent = 3.407104f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_125 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_126;
		L_126 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_125, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_126)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)))), (3.40710402f), /*hidden argument*/NULL);
		// Wind.keys[15].outTangent = 3.407104f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_127 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_128;
		L_128 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_127, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_128)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)))), (3.40710402f), /*hidden argument*/NULL);
		// Wind.AddKey(1.927248f,-0.1877219f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_129 = __this->get_Wind_10();
		int32_t L_130;
		L_130 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_129, (1.927248f), (-0.187721893f), /*hidden argument*/NULL);
		// Wind.keys[16].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_131 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_132;
		L_132 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_131, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_132)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)))), 0, /*hidden argument*/NULL);
		// Wind.keys[16].inTangent = -0.001117587f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_133 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_134;
		L_134 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_133, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_134)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)))), (-0.00111758697f), /*hidden argument*/NULL);
		// Wind.keys[16].outTangent = -0.001117587f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_135 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_136;
		L_136 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_135, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_136)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)))), (-0.00111758697f), /*hidden argument*/NULL);
		// Wind.AddKey(2.067694f,0.2742145f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_137 = __this->get_Wind_10();
		int32_t L_138;
		L_138 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_137, (2.06769395f), (0.274214506f), /*hidden argument*/NULL);
		// Wind.keys[17].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_139 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_140;
		L_140 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_139, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_140)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)))), 0, /*hidden argument*/NULL);
		// Wind.keys[17].inTangent = 4.736587f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_141 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_142;
		L_142 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_141, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_142)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)))), (4.73658705f), /*hidden argument*/NULL);
		// Wind.keys[17].outTangent = 4.736587f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_143 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_144;
		L_144 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_143, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_144)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)))), (4.73658705f), /*hidden argument*/NULL);
		// Wind.AddKey(2.184602f,-0.06127208f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_145 = __this->get_Wind_10();
		int32_t L_146;
		L_146 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_145, (2.18460202f), (-0.061272081f), /*hidden argument*/NULL);
		// Wind.keys[18].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_147 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_148;
		L_148 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_147, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_148)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)))), 0, /*hidden argument*/NULL);
		// Wind.keys[18].inTangent = -0.1308322f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_149 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_150;
		L_150 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_149, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_150)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)))), (-0.130832195f), /*hidden argument*/NULL);
		// Wind.keys[18].outTangent = -0.1308322f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_151 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_152;
		L_152 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_151, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_152)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)))), (-0.130832195f), /*hidden argument*/NULL);
		// Wind.AddKey(2.305948f,0.1891117f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_153 = __this->get_Wind_10();
		int32_t L_154;
		L_154 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_153, (2.30594802f), (0.189111695f), /*hidden argument*/NULL);
		// Wind.keys[19].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_155 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_156;
		L_156 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_155, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_156)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)))), 0, /*hidden argument*/NULL);
		// Wind.keys[19].inTangent = 0.04030764f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_157 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_158;
		L_158 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_157, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_158)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)))), (0.040307641f), /*hidden argument*/NULL);
		// Wind.keys[19].outTangent = 0.04030764f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_159 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_160;
		L_160 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_159, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_160)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)))), (0.040307641f), /*hidden argument*/NULL);
		// Wind.AddKey(2.428946f,-0.1695723f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_161 = __this->get_Wind_10();
		int32_t L_162;
		L_162 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_161, (2.42894602f), (-0.169572294f), /*hidden argument*/NULL);
		// Wind.keys[20].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_163 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_164;
		L_164 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_163, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_164)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)))), 0, /*hidden argument*/NULL);
		// Wind.keys[20].inTangent = -0.2463162f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_165 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_166;
		L_166 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_165, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_166)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)))), (-0.246316195f), /*hidden argument*/NULL);
		// Wind.keys[20].outTangent = -0.2463162f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_167 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_168;
		L_168 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_167, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_168)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)))), (-0.246316195f), /*hidden argument*/NULL);
		// Wind.AddKey(2.55922f,0.0359862f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_169 = __this->get_Wind_10();
		int32_t L_170;
		L_170 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_169, (2.55922008f), (0.0359862f), /*hidden argument*/NULL);
		// Wind.keys[21].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_171 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_172;
		L_172 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_171, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_172)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)))), 0, /*hidden argument*/NULL);
		// Wind.keys[21].inTangent = 0.3967434f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_173 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_174;
		L_174 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_173, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_174)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)))), (0.396743387f), /*hidden argument*/NULL);
		// Wind.keys[21].outTangent = 0.3967434f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_175 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_176;
		L_176 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_175, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_176)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)))), (0.396743387f), /*hidden argument*/NULL);
		// Wind.AddKey(2.785119f,-0.08398628f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_177 = __this->get_Wind_10();
		int32_t L_178;
		L_178 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_177, (2.78511906f), (-0.0839862823f), /*hidden argument*/NULL);
		// Wind.keys[22].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_179 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_180;
		L_180 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_179, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_180)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)))), 0, /*hidden argument*/NULL);
		// Wind.keys[22].inTangent = -0.2388284f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_181 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_182;
		L_182 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_181, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_182)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)))), (-0.238828406f), /*hidden argument*/NULL);
		// Wind.keys[22].outTangent = -0.2388284f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_183 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_184;
		L_184 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_183, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_184)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)))), (-0.238828406f), /*hidden argument*/NULL);
		// Wind.AddKey(3f,0f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_185 = __this->get_Wind_10();
		int32_t L_186;
		L_186 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_185, (3.0f), (0.0f), /*hidden argument*/NULL);
		// Wind.keys[23].tangentMode = 0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_187 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_188;
		L_188 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_187, /*hidden argument*/NULL);
		Keyframe_set_tangentMode_m8F508E34F29426915248DE36080A5BCC583F05F3((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_188)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)))), 0, /*hidden argument*/NULL);
		// Wind.keys[23].inTangent = 0f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_189 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_190;
		L_190 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_189, /*hidden argument*/NULL);
		Keyframe_set_inTangent_m12C08116896BC3E2C632356738D4CBE1D43B37C5((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_190)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)))), (0.0f), /*hidden argument*/NULL);
		// Wind.keys[23].outTangent = 0f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_191 = __this->get_Wind_10();
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_192;
		L_192 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_191, /*hidden argument*/NULL);
		Keyframe_set_outTangent_m8754D0F36E7C5470E7FE426171ADD7D77077C275((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_192)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)))), (0.0f), /*hidden argument*/NULL);
		// Wind.postWrapMode= WrapMode.Loop;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_193 = __this->get_Wind_10();
		AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568(L_193, 2, /*hidden argument*/NULL);
		// Wind.preWrapMode= WrapMode.Loop;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_194 = __this->get_Wind_10();
		AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF(L_194, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_GrassMultiFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_CallUpdate_m05D2325FCD7259470E1CB30606B1C162E745EB11 (_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9 * __this, const RuntimeMethod* method)
{
	{
		// Update ();
		_2dxFX_GrassMultiFX_Update_mA4FBD723D588CEE2F1BF946CFE9EAE3F98E47454(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_GrassMultiFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_Update_mA4FBD723D588CEE2F1BF946CFE9EAE3F98E47454 (_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58AAFF72F520DA2B9EE6AA369289D02EDB353A4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B75E738B55ED8EF009980C3AC6820D195BB18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF8E1F5EF1340BB4DE17EAA7636D1021F91E9C17);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_18(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_9 = __this->get_ShaderChange_15();
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B7_0 = 0;
	}

IL_0050:
	{
		V_2 = (bool)G_B7_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00f8;
		}
	}
	{
		// ShaderChange=1;
		__this->set_ShaderChange_15(1);
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_tempMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_tempMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_16, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18;
		L_18 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_17, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00a8;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_21;
		L_21 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_21, L_22, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00a8:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24;
		L_24 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_23, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00d3;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = __this->get_CanvasImage_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_27, L_28);
	}

IL_00d3:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = __this->get_ForceMaterial_4();
		String_t* L_31 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_32;
		L_32 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_31, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_30, L_32, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// if ((ForceMaterial == null) && (ShaderChange==1))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_35 = __this->get_ShaderChange_15();
		G_B18_0 = ((((int32_t)L_35) == ((int32_t)1))? 1 : 0);
		goto IL_0112;
	}

IL_0111:
	{
		G_B18_0 = 0;
	}

IL_0112:
	{
		V_6 = (bool)G_B18_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_01bd;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_tempMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_38;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_013a;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_40 = __this->get_tempMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_40, /*hidden argument*/NULL);
	}

IL_013a:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_41 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_42;
		L_42 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_41, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_43, L_42, /*hidden argument*/NULL);
		__this->set_tempMaterial_16(L_43);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = __this->get_tempMaterial_16();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_44, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_46;
		L_46 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_45, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_46, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_47;
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_018a;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_49;
		L_49 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get_tempMaterial_16();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_49, L_50, /*hidden argument*/NULL);
		goto IL_01b5;
	}

IL_018a:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52;
		L_52 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_51, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_52, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_9 = L_53;
		bool L_54 = V_9;
		if (!L_54)
		{
			goto IL_01b5;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_55 = __this->get_CanvasImage_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56 = __this->get_tempMaterial_16();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_55, L_56);
	}

IL_01b5:
	{
		// ShaderChange=0;
		__this->set_ShaderChange_15(0);
	}

IL_01bd:
	{
		// if (ActiveChange)
		bool L_57 = __this->get_ActiveChange_5();
		V_10 = L_57;
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_04eb;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_60;
		L_60 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_59, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_60, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_11 = L_61;
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_0320;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Alpha", 1-_Alpha);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_63;
		L_63 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64;
		L_64 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_63, /*hidden argument*/NULL);
		float L_65 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_64, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_65)), /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Distortion", Heat);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_66;
		L_66 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_67;
		L_67 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_66, /*hidden argument*/NULL);
		float L_68 = __this->get_Heat_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_67, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_68, /*hidden argument*/NULL);
		// if (Wind!=null) this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_69 = __this->get_Wind_10();
		V_12 = (bool)((!(((RuntimeObject*)(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)L_69) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_70 = V_12;
		if (!L_70)
		{
			goto IL_025c;
		}
	}
	{
		// if (Wind!=null) this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_71;
		L_71 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_72;
		L_72 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_71, /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_73 = __this->get_Wind_10();
		float L_74 = __this->get_WindTime1_11();
		float L_75;
		L_75 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_73, L_74, /*hidden argument*/NULL);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_72, _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716, L_75, /*hidden argument*/NULL);
	}

IL_025c:
	{
		// if (Wind!=null) this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Wind2", Wind.Evaluate(WindTime2));
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_76 = __this->get_Wind_10();
		V_13 = (bool)((!(((RuntimeObject*)(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)L_76) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_77 = V_13;
		if (!L_77)
		{
			goto IL_0292;
		}
	}
	{
		// if (Wind!=null) this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Wind2", Wind.Evaluate(WindTime2));
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_78;
		L_78 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_79;
		L_79 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_78, /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_80 = __this->get_Wind_10();
		float L_81 = __this->get_WindTime2_12();
		float L_82;
		L_82 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_80, L_81, /*hidden argument*/NULL);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_79, _stringLiteralFF8E1F5EF1340BB4DE17EAA7636D1021F91E9C17, L_82, /*hidden argument*/NULL);
	}

IL_0292:
	{
		// if (Wind!=null) this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Wind3", Wind.Evaluate(WindTime3));
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_83 = __this->get_Wind_10();
		V_14 = (bool)((!(((RuntimeObject*)(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)L_83) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_84 = V_14;
		if (!L_84)
		{
			goto IL_02c8;
		}
	}
	{
		// if (Wind!=null) this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Wind3", Wind.Evaluate(WindTime3));
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_85;
		L_85 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_86;
		L_86 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_85, /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_87 = __this->get_Wind_10();
		float L_88 = __this->get_WindTime3_13();
		float L_89;
		L_89 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_87, L_88, /*hidden argument*/NULL);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_86, _stringLiteral725B75E738B55ED8EF009980C3AC6820D195BB18, L_89, /*hidden argument*/NULL);
	}

IL_02c8:
	{
		// if (Wind!=null) this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Wind4", Wind.Evaluate(WindTime4));
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_90 = __this->get_Wind_10();
		V_15 = (bool)((!(((RuntimeObject*)(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)L_90) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_91 = V_15;
		if (!L_91)
		{
			goto IL_02fe;
		}
	}
	{
		// if (Wind!=null) this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Wind4", Wind.Evaluate(WindTime4));
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_92;
		L_92 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_93;
		L_93 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_92, /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_94 = __this->get_Wind_10();
		float L_95 = __this->get_WindTime4_14();
		float L_96;
		L_96 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_94, L_95, /*hidden argument*/NULL);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_93, _stringLiteral58AAFF72F520DA2B9EE6AA369289D02EDB353A4F, L_96, /*hidden argument*/NULL);
	}

IL_02fe:
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Speed", Speed);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_97;
		L_97 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_98;
		L_98 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_97, /*hidden argument*/NULL);
		float L_99 = __this->get_Speed_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_98, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_99, /*hidden argument*/NULL);
		goto IL_046e;
	}

IL_0320:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100;
		L_100 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_101;
		L_101 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_100, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_102;
		L_102 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_101, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_16 = L_102;
		bool L_103 = V_16;
		if (!L_103)
		{
			goto IL_046e;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1-_Alpha);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_104 = __this->get_CanvasImage_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_105;
		L_105 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_104);
		float L_106 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_105, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_106)), /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_Distortion", Heat);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_107 = __this->get_CanvasImage_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_108;
		L_108 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_107);
		float L_109 = __this->get_Heat_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_108, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_109, /*hidden argument*/NULL);
		// if (Wind!=null) CanvasImage.material.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_110 = __this->get_Wind_10();
		V_17 = (bool)((!(((RuntimeObject*)(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)L_110) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_111 = V_17;
		if (!L_111)
		{
			goto IL_03af;
		}
	}
	{
		// if (Wind!=null) CanvasImage.material.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_112 = __this->get_CanvasImage_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_113;
		L_113 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_112);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_114 = __this->get_Wind_10();
		float L_115 = __this->get_WindTime1_11();
		float L_116;
		L_116 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_114, L_115, /*hidden argument*/NULL);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_113, _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716, L_116, /*hidden argument*/NULL);
	}

IL_03af:
	{
		// if (Wind!=null) CanvasImage.material.SetFloat("_Wind2", Wind.Evaluate(WindTime2));
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_117 = __this->get_Wind_10();
		V_18 = (bool)((!(((RuntimeObject*)(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)L_117) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_118 = V_18;
		if (!L_118)
		{
			goto IL_03e5;
		}
	}
	{
		// if (Wind!=null) CanvasImage.material.SetFloat("_Wind2", Wind.Evaluate(WindTime2));
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_119 = __this->get_CanvasImage_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_120;
		L_120 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_119);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_121 = __this->get_Wind_10();
		float L_122 = __this->get_WindTime2_12();
		float L_123;
		L_123 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_121, L_122, /*hidden argument*/NULL);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_120, _stringLiteralFF8E1F5EF1340BB4DE17EAA7636D1021F91E9C17, L_123, /*hidden argument*/NULL);
	}

IL_03e5:
	{
		// if (Wind!=null) CanvasImage.material.SetFloat("_Wind3", Wind.Evaluate(WindTime3));
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_124 = __this->get_Wind_10();
		V_19 = (bool)((!(((RuntimeObject*)(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)L_124) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_125 = V_19;
		if (!L_125)
		{
			goto IL_041b;
		}
	}
	{
		// if (Wind!=null) CanvasImage.material.SetFloat("_Wind3", Wind.Evaluate(WindTime3));
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_126 = __this->get_CanvasImage_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_127;
		L_127 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_126);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_128 = __this->get_Wind_10();
		float L_129 = __this->get_WindTime3_13();
		float L_130;
		L_130 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_128, L_129, /*hidden argument*/NULL);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_127, _stringLiteral725B75E738B55ED8EF009980C3AC6820D195BB18, L_130, /*hidden argument*/NULL);
	}

IL_041b:
	{
		// if (Wind!=null) CanvasImage.material.SetFloat("_Wind4", Wind.Evaluate(WindTime4));
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_131 = __this->get_Wind_10();
		V_20 = (bool)((!(((RuntimeObject*)(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)L_131) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_132 = V_20;
		if (!L_132)
		{
			goto IL_0451;
		}
	}
	{
		// if (Wind!=null) CanvasImage.material.SetFloat("_Wind4", Wind.Evaluate(WindTime4));
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_133 = __this->get_CanvasImage_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_134;
		L_134 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_133);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_135 = __this->get_Wind_10();
		float L_136 = __this->get_WindTime4_14();
		float L_137;
		L_137 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_135, L_136, /*hidden argument*/NULL);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_134, _stringLiteral58AAFF72F520DA2B9EE6AA369289D02EDB353A4F, L_137, /*hidden argument*/NULL);
	}

IL_0451:
	{
		// CanvasImage.material.SetFloat("_Speed", Speed);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_138 = __this->get_CanvasImage_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_139;
		L_139 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_138);
		float L_140 = __this->get_Speed_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_139, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_140, /*hidden argument*/NULL);
	}

IL_046e:
	{
		// WindTime1 += (Time.deltaTime/8)*Speed;
		float L_141 = __this->get_WindTime1_11();
		float L_142;
		L_142 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_143 = __this->get_Speed_9();
		__this->set_WindTime1_11(((float)il2cpp_codegen_add((float)L_141, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_142/(float)(8.0f))), (float)L_143)))));
		// WindTime2 += (Time.deltaTime/8)*Speed;
		float L_144 = __this->get_WindTime2_12();
		float L_145;
		L_145 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_146 = __this->get_Speed_9();
		__this->set_WindTime2_12(((float)il2cpp_codegen_add((float)L_144, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_145/(float)(8.0f))), (float)L_146)))));
		// WindTime3 += (Time.deltaTime/8)*Speed;
		float L_147 = __this->get_WindTime3_13();
		float L_148;
		L_148 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_149 = __this->get_Speed_9();
		__this->set_WindTime3_13(((float)il2cpp_codegen_add((float)L_147, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_148/(float)(8.0f))), (float)L_149)))));
		// WindTime4 += (Time.deltaTime/8)*Speed;
		float L_150 = __this->get_WindTime4_14();
		float L_151;
		L_151 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_152 = __this->get_Speed_9();
		__this->set_WindTime4_14(((float)il2cpp_codegen_add((float)L_150, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_151/(float)(8.0f))), (float)L_152)))));
	}

IL_04eb:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassMultiFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_OnDestroy_mA206471AE698FA8CA45DBA0794D8D5F73074C40C (_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_18(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true)) {
		bool L_9;
		L_9 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		bool L_10;
		L_10 = Application_get_isEditor_m7BA0984E1359E7A656CB9110DBB539A4F2810CB1(/*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0048;
	}

IL_0047:
	{
		G_B7_0 = 0;
	}

IL_0048:
	{
		V_2 = (bool)G_B7_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_010d;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_tempMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = __this->get_tempMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_15, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_17;
		L_17 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = __this->get_defaultMaterial_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_19));
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_4 = (bool)G_B13_0;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010c;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00ce;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_defaultMaterial_17();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_27;
		L_27 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28;
		L_28 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_27, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_28, 0, /*hidden argument*/NULL);
		goto IL_010b;
	}

IL_00ce:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30;
		L_30 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_29, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_30, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_31;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_010b;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_CanvasImage_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = __this->get_defaultMaterial_17();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_33, L_34);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_CanvasImage_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36;
		L_36 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_35);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
	}

IL_010b:
	{
	}

IL_010c:
	{
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassMultiFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_OnDisable_m31B746439F2905913DB15D72926444B3F2E0906E (_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_18(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_defaultMaterial_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 0;
	}

IL_0055:
	{
		V_2 = (bool)G_B7_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_00d5;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_15;
		L_15 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_14, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_16;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0097;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18;
		L_18 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_defaultMaterial_17();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_18, L_19, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_20;
		L_20 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21;
		L_21 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_20, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_21, 0, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0097:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_23;
		L_23 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_22, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = __this->get_CanvasImage_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = __this->get_defaultMaterial_17();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_CanvasImage_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29;
		L_29 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_28);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassMultiFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_OnEnable_m0676C3CC1692B459DE3AB423F10F3CE48A509905 (_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_18(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// WindTime1 = 0;
		__this->set_WindTime1_11((0.0f));
		// if (defaultMaterial == null) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_defaultMaterial_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_12;
		L_12 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_13, L_12, /*hidden argument*/NULL);
		__this->set_defaultMaterial_17(L_13);
	}

IL_006b:
	{
		// if (ForceMaterial==null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0104;
		}
	}
	{
		// ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_17 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_18;
		L_18 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_17, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_19, L_18, /*hidden argument*/NULL);
		__this->set_tempMaterial_16(L_19);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_tempMaterial_16();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_20, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00d6;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_tempMaterial_16();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		goto IL_0101;
	}

IL_00d6:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28;
		L_28 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_27, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_29;
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_0101;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = __this->get_CanvasImage_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = __this->get_tempMaterial_16();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_31, L_32);
	}

IL_0101:
	{
		goto IL_0182;
	}

IL_0104:
	{
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		String_t* L_34 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_35;
		L_35 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_34, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_33, L_35, /*hidden argument*/NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_38;
		L_38 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_37, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_38, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_39;
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_0156;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_41;
		L_41 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_41, L_42, /*hidden argument*/NULL);
		goto IL_0181;
	}

IL_0156:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_44;
		L_44 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_43, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_44, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_45;
		bool L_46 = V_7;
		if (!L_46)
		{
			goto IL_0181;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_47 = __this->get_CanvasImage_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_47, L_48);
	}

IL_0181:
	{
	}

IL_0182:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassMultiFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX__ctor_m0E250A108960C96A48685CFB328F9D3D202E076B (_2dxFX_GrassMultiFX_t2A8669E1E0489EAA4CB3EC794FA592F0AABE7ED9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBF46CBBBD7F63FB47A67AE4772CAA081A121020);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// private string shader = "2DxFX/Standard/GrassMultiFX";
		__this->set_shader_6(_stringLiteralBBF46CBBBD7F63FB47A67AE4772CAA081A121020);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->set__Alpha_7((1.0f));
		// [HideInInspector] [Range(0.0f, 4f)] public float Heat = 1.0f;
		__this->set_Heat_8((1.0f));
		// [HideInInspector] [Range(0.0f, 4f)] public float Speed = 1.0f;
		__this->set_Speed_9((1.0f));
		// private float WindTime1=0;
		__this->set_WindTime1_11((0.0f));
		// private float WindTime2=0.015f;
		__this->set_WindTime2_12((0.0149999997f));
		// private float WindTime3=0.030f;
		__this->set_WindTime3_13((0.0299999993f));
		// private float WindTime4=0.045f;
		__this->set_WindTime4_14((0.0450000018f));
		// [HideInInspector] public int ShaderChange=0;
		__this->set_ShaderChange_15(0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void _2dxFX_GrayScale::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrayScale_Awake_m4FA3F6A8C62FB5CDC0F687FC3A1EA9D6913C8677 (_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_12(L_5);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrayScale::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrayScale_Start_m7861411FBCE5A33DADA97A36A3EE195824967206 (_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB * __this, const RuntimeMethod* method)
{
	{
		// ShaderChange = 0;
		__this->set_ShaderChange_9(0);
		// }
		return;
	}
}
// System.Void _2dxFX_GrayScale::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrayScale_CallUpdate_mD54AB275B3E9F03AE25B1D36B1816F89E63641E4 (_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB * __this, const RuntimeMethod* method)
{
	{
		// Update ();
		_2dxFX_GrayScale_Update_mC38987765617BC96BD3E87BB0CBD52410316AE7D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_GrayScale::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrayScale_Update_mC38987765617BC96BD3E87BB0CBD52410316AE7D (_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14BE754BF8F5400050442C7A7201D90C19ABEEF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_12(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_9 = __this->get_ShaderChange_9();
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B7_0 = 0;
	}

IL_0050:
	{
		V_2 = (bool)G_B7_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00f8;
		}
	}
	{
		// ShaderChange=1;
		__this->set_ShaderChange_9(1);
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_16, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18;
		L_18 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_17, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00a8;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_21;
		L_21 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_21, L_22, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00a8:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24;
		L_24 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_23, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00d3;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_27, L_28);
	}

IL_00d3:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = __this->get_ForceMaterial_4();
		String_t* L_31 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_32;
		L_32 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_31, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_30, L_32, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// if ((ForceMaterial == null) && (ShaderChange==1))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_35 = __this->get_ShaderChange_9();
		G_B18_0 = ((((int32_t)L_35) == ((int32_t)1))? 1 : 0);
		goto IL_0112;
	}

IL_0111:
	{
		G_B18_0 = 0;
	}

IL_0112:
	{
		V_6 = (bool)G_B18_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_01bd;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_38;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_013a;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_40 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_40, /*hidden argument*/NULL);
	}

IL_013a:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_41 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_42;
		L_42 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_41, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_43, L_42, /*hidden argument*/NULL);
		__this->set_tempMaterial_10(L_43);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = __this->get_tempMaterial_10();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_44, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_46;
		L_46 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_45, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_46, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_47;
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_018a;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_49;
		L_49 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get_tempMaterial_10();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_49, L_50, /*hidden argument*/NULL);
		goto IL_01b5;
	}

IL_018a:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52;
		L_52 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_51, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_52, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_9 = L_53;
		bool L_54 = V_9;
		if (!L_54)
		{
			goto IL_01b5;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_55 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56 = __this->get_tempMaterial_10();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_55, L_56);
	}

IL_01b5:
	{
		// ShaderChange=0;
		__this->set_ShaderChange_9(0);
	}

IL_01bd:
	{
		// if (ActiveChange)
		bool L_57 = __this->get_ActiveChange_5();
		V_10 = L_57;
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_027e;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_60;
		L_60 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_59, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_60, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_11 = L_61;
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_0226;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Alpha", 1-_Alpha);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_63;
		L_63 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64;
		L_64 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_63, /*hidden argument*/NULL);
		float L_65 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_64, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_65)), /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_EffectAmount", _EffectAmount);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_66;
		L_66 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_67;
		L_67 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_66, /*hidden argument*/NULL);
		float L_68 = __this->get__EffectAmount_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_67, _stringLiteral14BE754BF8F5400050442C7A7201D90C19ABEEF1, L_68, /*hidden argument*/NULL);
		goto IL_027d;
	}

IL_0226:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69;
		L_69 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_70;
		L_70 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_69, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_71;
		L_71 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_70, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_12 = L_71;
		bool L_72 = V_12;
		if (!L_72)
		{
			goto IL_027d;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1-_Alpha);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_73 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_74;
		L_74 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_73);
		float L_75 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_74, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_75)), /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_EffectAmount", _EffectAmount);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_76 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_77;
		L_77 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_76);
		float L_78 = __this->get__EffectAmount_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_77, _stringLiteral14BE754BF8F5400050442C7A7201D90C19ABEEF1, L_78, /*hidden argument*/NULL);
	}

IL_027d:
	{
	}

IL_027e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrayScale::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrayScale_OnDestroy_m1CF184A05A61A211CD93F1195B940BD61A8B7C10 (_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_12(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true)) {
		bool L_9;
		L_9 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		bool L_10;
		L_10 = Application_get_isEditor_m7BA0984E1359E7A656CB9110DBB539A4F2810CB1(/*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0048;
	}

IL_0047:
	{
		G_B7_0 = 0;
	}

IL_0048:
	{
		V_2 = (bool)G_B7_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_010d;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_15, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_17;
		L_17 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = __this->get_defaultMaterial_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_19));
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_4 = (bool)G_B13_0;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010c;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00ce;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_defaultMaterial_11();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_27;
		L_27 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28;
		L_28 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_27, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_28, 0, /*hidden argument*/NULL);
		goto IL_010b;
	}

IL_00ce:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30;
		L_30 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_29, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_30, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_31;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_010b;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = __this->get_defaultMaterial_11();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_33, L_34);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36;
		L_36 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_35);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
	}

IL_010b:
	{
	}

IL_010c:
	{
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrayScale::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrayScale_OnDisable_m90A71818F8CAC6B9CB50C68ED7A84354194B1E3C (_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_12(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_defaultMaterial_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 0;
	}

IL_0055:
	{
		V_2 = (bool)G_B7_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_00d5;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_15;
		L_15 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_14, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_16;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0097;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18;
		L_18 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_defaultMaterial_11();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_18, L_19, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_20;
		L_20 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21;
		L_21 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_20, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_21, 0, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0097:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_23;
		L_23 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_22, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = __this->get_defaultMaterial_11();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29;
		L_29 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_28);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrayScale::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrayScale_OnEnable_m2249D3F7A645E7034048264C66AAD33546D7E7B4 (_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_12(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (defaultMaterial == null) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_defaultMaterial_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_12;
		L_12 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_13, L_12, /*hidden argument*/NULL);
		__this->set_defaultMaterial_11(L_13);
	}

IL_0060:
	{
		// if (ForceMaterial==null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00f9;
		}
	}
	{
		// ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_17 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_18;
		L_18 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_17, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_19, L_18, /*hidden argument*/NULL);
		__this->set_tempMaterial_10(L_19);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_tempMaterial_10();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_20, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00cb;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_tempMaterial_10();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_00cb:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28;
		L_28 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_27, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_29;
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_00f6;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = __this->get_tempMaterial_10();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_31, L_32);
	}

IL_00f6:
	{
		goto IL_0177;
	}

IL_00f9:
	{
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		String_t* L_34 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_35;
		L_35 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_34, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_33, L_35, /*hidden argument*/NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_38;
		L_38 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_37, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_38, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_39;
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_014b;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_41;
		L_41 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_41, L_42, /*hidden argument*/NULL);
		goto IL_0176;
	}

IL_014b:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_44;
		L_44 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_43, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_44, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_45;
		bool L_46 = V_7;
		if (!L_46)
		{
			goto IL_0176;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_47 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_47, L_48);
	}

IL_0176:
	{
	}

IL_0177:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrayScale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrayScale__ctor_mC38A1AC46EF9D080EB39E613C23B170AED2C58BA (_2dxFX_GrayScale_tF2508D800838AA8F9D52E9A89D5BCD09A18CE8EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7719EBA22A5A5BC23DCFE8ACCA5550D5CA7654D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// private string shader = "2DxFX/Standard/GrayScale";
		__this->set_shader_6(_stringLiteralD7719EBA22A5A5BC23DCFE8ACCA5550D5CA7654D);
		// [HideInInspector][Range(0, 1)] public float _Alpha = 1f;
		__this->set__Alpha_7((1.0f));
		// [Range(0, 1)] public float _EffectAmount =1f;
		__this->set__EffectAmount_8((1.0f));
		// [HideInInspector] public int ShaderChange=0;
		__this->set_ShaderChange_9(0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void _2dxFX_HSV::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_HSV_Awake_m2ABFCE639A5773FCCDF88D4E902DF09C3AF2D568 (_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_5);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_HSV::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_HSV_Start_m70E5B0A4850E6A4954B44A45DED6346A92DE50B3 (_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F * __this, const RuntimeMethod* method)
{
	{
		// ShaderChange = 0;
		__this->set_ShaderChange_11(0);
		// }
		return;
	}
}
// System.Void _2dxFX_HSV::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_HSV_CallUpdate_m71D7B5F9C19E5F1AB47A52A805C7827D993E9D34 (_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F * __this, const RuntimeMethod* method)
{
	{
		// Update ();
		_2dxFX_HSV_Update_m8A8D3C78ACFB36FAAEA616BFEC343BD2D2024E64(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_HSV::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_HSV_Update_m8A8D3C78ACFB36FAAEA616BFEC343BD2D2024E64 (_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0009BF01CFB4657E9EC895B1FBB478831AD13CA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CFC2B48D932FEF52252855F81D3970C490F2095);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E94BD1050374F96F444E696EECC1EFAC118519);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_9 = __this->get_ShaderChange_11();
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B7_0 = 0;
	}

IL_0050:
	{
		V_2 = (bool)G_B7_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00f8;
		}
	}
	{
		// ShaderChange=1;
		__this->set_ShaderChange_11(1);
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_16, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18;
		L_18 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_17, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00a8;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_21;
		L_21 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_21, L_22, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00a8:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24;
		L_24 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_23, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00d3;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_27, L_28);
	}

IL_00d3:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = __this->get_ForceMaterial_4();
		String_t* L_31 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_32;
		L_32 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_31, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_30, L_32, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// if ((ForceMaterial == null) && (ShaderChange==1))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_35 = __this->get_ShaderChange_11();
		G_B18_0 = ((((int32_t)L_35) == ((int32_t)1))? 1 : 0);
		goto IL_0112;
	}

IL_0111:
	{
		G_B18_0 = 0;
	}

IL_0112:
	{
		V_6 = (bool)G_B18_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_01bd;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_38;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_013a;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_40 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_40, /*hidden argument*/NULL);
	}

IL_013a:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_41 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_42;
		L_42 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_41, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_43, L_42, /*hidden argument*/NULL);
		__this->set_tempMaterial_12(L_43);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = __this->get_tempMaterial_12();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_44, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_46;
		L_46 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_45, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_46, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_47;
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_018a;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_49;
		L_49 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get_tempMaterial_12();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_49, L_50, /*hidden argument*/NULL);
		goto IL_01b5;
	}

IL_018a:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52;
		L_52 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_51, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_52, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_9 = L_53;
		bool L_54 = V_9;
		if (!L_54)
		{
			goto IL_01b5;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_55 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56 = __this->get_tempMaterial_12();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_55, L_56);
	}

IL_01b5:
	{
		// ShaderChange=0;
		__this->set_ShaderChange_11(0);
	}

IL_01bd:
	{
		// if (ActiveChange)
		bool L_57 = __this->get_ActiveChange_5();
		V_10 = L_57;
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_02f1;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_60;
		L_60 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_59, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_60, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_11 = L_61;
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_0261;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Alpha", 1-_Alpha);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_63;
		L_63 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64;
		L_64 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_63, /*hidden argument*/NULL);
		float L_65 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_64, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_65)), /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_HueShift", _HueShift);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_66;
		L_66 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_67;
		L_67 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_66, /*hidden argument*/NULL);
		float L_68 = __this->get__HueShift_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_67, _stringLiteral0009BF01CFB4657E9EC895B1FBB478831AD13CA0, L_68, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Sat", _Saturation);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_69;
		L_69 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_70;
		L_70 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_69, /*hidden argument*/NULL);
		float L_71 = __this->get__Saturation_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_70, _stringLiteralC0E94BD1050374F96F444E696EECC1EFAC118519, L_71, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Val", _ValueBrightness);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_72;
		L_72 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_73;
		L_73 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_72, /*hidden argument*/NULL);
		float L_74 = __this->get__ValueBrightness_10();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_73, _stringLiteral6CFC2B48D932FEF52252855F81D3970C490F2095, L_74, /*hidden argument*/NULL);
		goto IL_02f0;
	}

IL_0261:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_75;
		L_75 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_76;
		L_76 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_75, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_77;
		L_77 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_76, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_12 = L_77;
		bool L_78 = V_12;
		if (!L_78)
		{
			goto IL_02f0;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1-_Alpha);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_79 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_80;
		L_80 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_79);
		float L_81 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_80, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_81)), /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_HueShift", _HueShift);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_82 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_83;
		L_83 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_82);
		float L_84 = __this->get__HueShift_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_83, _stringLiteral0009BF01CFB4657E9EC895B1FBB478831AD13CA0, L_84, /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_Sat", _Saturation);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_85 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_86;
		L_86 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_85);
		float L_87 = __this->get__Saturation_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_86, _stringLiteralC0E94BD1050374F96F444E696EECC1EFAC118519, L_87, /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_Val", _ValueBrightness);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_88 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_89;
		L_89 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_88);
		float L_90 = __this->get__ValueBrightness_10();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_89, _stringLiteral6CFC2B48D932FEF52252855F81D3970C490F2095, L_90, /*hidden argument*/NULL);
	}

IL_02f0:
	{
	}

IL_02f1:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_HSV::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_HSV_OnDestroy_mCD09B891A602A56DC9092B9844606E36B9EB8C2D (_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true)) {
		bool L_9;
		L_9 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		bool L_10;
		L_10 = Application_get_isEditor_m7BA0984E1359E7A656CB9110DBB539A4F2810CB1(/*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0048;
	}

IL_0047:
	{
		G_B7_0 = 0;
	}

IL_0048:
	{
		V_2 = (bool)G_B7_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_010d;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_15, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_17;
		L_17 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = __this->get_defaultMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_19));
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_4 = (bool)G_B13_0;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010c;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00ce;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_defaultMaterial_13();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_27;
		L_27 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28;
		L_28 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_27, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_28, 0, /*hidden argument*/NULL);
		goto IL_010b;
	}

IL_00ce:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30;
		L_30 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_29, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_30, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_31;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_010b;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = __this->get_defaultMaterial_13();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_33, L_34);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36;
		L_36 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_35);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
	}

IL_010b:
	{
	}

IL_010c:
	{
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_HSV::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_HSV_OnDisable_mA5E27DE2CC7E78ADCDC9AB73AA4C530D82ED716F (_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_defaultMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 0;
	}

IL_0055:
	{
		V_2 = (bool)G_B7_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_00d5;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_15;
		L_15 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_14, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_16;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0097;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18;
		L_18 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_defaultMaterial_13();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_18, L_19, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_20;
		L_20 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21;
		L_21 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_20, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_21, 0, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0097:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_23;
		L_23 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_22, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = __this->get_defaultMaterial_13();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29;
		L_29 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_28);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_HSV::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_HSV_OnEnable_m34418E0299FFA3BABB7E7DD3AFEB82C0488BC5CE (_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (defaultMaterial == null) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_defaultMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_12;
		L_12 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_13, L_12, /*hidden argument*/NULL);
		__this->set_defaultMaterial_13(L_13);
	}

IL_0060:
	{
		// if (ForceMaterial==null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00f9;
		}
	}
	{
		// ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_17 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_18;
		L_18 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_17, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_19, L_18, /*hidden argument*/NULL);
		__this->set_tempMaterial_12(L_19);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_tempMaterial_12();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_20, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00cb;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_tempMaterial_12();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_00cb:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28;
		L_28 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_27, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_29;
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_00f6;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = __this->get_tempMaterial_12();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_31, L_32);
	}

IL_00f6:
	{
		goto IL_0177;
	}

IL_00f9:
	{
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		String_t* L_34 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_35;
		L_35 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_34, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_33, L_35, /*hidden argument*/NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_38;
		L_38 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_37, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_38, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_39;
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_014b;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_41;
		L_41 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_41, L_42, /*hidden argument*/NULL);
		goto IL_0176;
	}

IL_014b:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_44;
		L_44 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_43, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_44, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_45;
		bool L_46 = V_7;
		if (!L_46)
		{
			goto IL_0176;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_47 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_47, L_48);
	}

IL_0176:
	{
	}

IL_0177:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_HSV::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_HSV__ctor_mB700920D7C82DC2215184F4EBCBDBF992316B99C (_2dxFX_HSV_t936DDDC8EC108B88FE096429F5861B947473FC2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06F3CB9DDBDD7E3B9CACE1A46664B54A171FA7FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// private string shader = "2DxFX/Standard/HSV";
		__this->set_shader_6(_stringLiteral06F3CB9DDBDD7E3B9CACE1A46664B54A171FA7FF);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->set__Alpha_7((1.0f));
		// [HideInInspector] [Range(0, 360)] public float _HueShift = 180f;
		__this->set__HueShift_8((180.0f));
		// [HideInInspector] [Range(-2, 2)] public float _Saturation = 1f;
		__this->set__Saturation_9((1.0f));
		// [HideInInspector] [Range(-2, 2)] public float _ValueBrightness = 1f;
		__this->set__ValueBrightness_10((1.0f));
		// [HideInInspector] public int ShaderChange=0;
		__this->set_ShaderChange_11(0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void _2dxFX_Heat::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Heat_Awake_m320AADD76A7CEEB59F928198BD05A84167EDFFF7 (_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_13(L_5);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Heat::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Heat_Start_m566E183C961C566C4BD276F5FF73AD1341459B82 (_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E * __this, const RuntimeMethod* method)
{
	{
		// ShaderChange = 0;
		__this->set_ShaderChange_10(0);
		// }
		return;
	}
}
// System.Void _2dxFX_Heat::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Heat_CallUpdate_mC09B7BF55194A054C900B265C0680FAFA0E3A6B7 (_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E * __this, const RuntimeMethod* method)
{
	{
		// Update ();
		_2dxFX_Heat_Update_m564A00C503858001B23EC900B6A5FD2F94A1CF63(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Heat::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Heat_Update_m564A00C503858001B23EC900B6A5FD2F94A1CF63 (_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_13(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_9 = __this->get_ShaderChange_10();
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B7_0 = 0;
	}

IL_0050:
	{
		V_2 = (bool)G_B7_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00f8;
		}
	}
	{
		// ShaderChange=1;
		__this->set_ShaderChange_10(1);
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_tempMaterial_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_tempMaterial_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_16, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18;
		L_18 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_17, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00a8;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_21;
		L_21 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_21, L_22, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00a8:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24;
		L_24 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_23, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00d3;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = __this->get_CanvasImage_13();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_27, L_28);
	}

IL_00d3:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = __this->get_ForceMaterial_4();
		String_t* L_31 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_32;
		L_32 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_31, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_30, L_32, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// if ((ForceMaterial == null) && (ShaderChange==1))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_35 = __this->get_ShaderChange_10();
		G_B18_0 = ((((int32_t)L_35) == ((int32_t)1))? 1 : 0);
		goto IL_0112;
	}

IL_0111:
	{
		G_B18_0 = 0;
	}

IL_0112:
	{
		V_6 = (bool)G_B18_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_01bd;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_tempMaterial_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_38;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_013a;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_40 = __this->get_tempMaterial_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_40, /*hidden argument*/NULL);
	}

IL_013a:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_41 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_42;
		L_42 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_41, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_43, L_42, /*hidden argument*/NULL);
		__this->set_tempMaterial_11(L_43);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = __this->get_tempMaterial_11();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_44, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_46;
		L_46 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_45, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_46, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_47;
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_018a;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_49;
		L_49 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get_tempMaterial_11();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_49, L_50, /*hidden argument*/NULL);
		goto IL_01b5;
	}

IL_018a:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52;
		L_52 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_51, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_52, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_9 = L_53;
		bool L_54 = V_9;
		if (!L_54)
		{
			goto IL_01b5;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_55 = __this->get_CanvasImage_13();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56 = __this->get_tempMaterial_11();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_55, L_56);
	}

IL_01b5:
	{
		// ShaderChange=0;
		__this->set_ShaderChange_10(0);
	}

IL_01bd:
	{
		// if (ActiveChange)
		bool L_57 = __this->get_ActiveChange_5();
		V_10 = L_57;
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_02b6;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_60;
		L_60 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_59, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_60, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_11 = L_61;
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_0242;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Alpha", 1-_Alpha);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_63;
		L_63 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64;
		L_64 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_63, /*hidden argument*/NULL);
		float L_65 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_64, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_65)), /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Distortion", Heat);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_66;
		L_66 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_67;
		L_67 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_66, /*hidden argument*/NULL);
		float L_68 = __this->get_Heat_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_67, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_68, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Speed", Speed);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_69;
		L_69 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_70;
		L_70 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_69, /*hidden argument*/NULL);
		float L_71 = __this->get_Speed_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_70, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_71, /*hidden argument*/NULL);
		goto IL_02b5;
	}

IL_0242:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72;
		L_72 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_73;
		L_73 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_72, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_73, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_12 = L_74;
		bool L_75 = V_12;
		if (!L_75)
		{
			goto IL_02b5;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1-_Alpha);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_76 = __this->get_CanvasImage_13();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_77;
		L_77 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_76);
		float L_78 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_77, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_78)), /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_Distortion", Heat);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_79 = __this->get_CanvasImage_13();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_80;
		L_80 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_79);
		float L_81 = __this->get_Heat_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_80, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_81, /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_Speed", Speed);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_82 = __this->get_CanvasImage_13();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_83;
		L_83 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_82);
		float L_84 = __this->get_Speed_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_83, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_84, /*hidden argument*/NULL);
	}

IL_02b5:
	{
	}

IL_02b6:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Heat::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Heat_OnDestroy_m679924A22881377C5E3628036FBC8F51B43A6D96 (_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_13(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true)) {
		bool L_9;
		L_9 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		bool L_10;
		L_10 = Application_get_isEditor_m7BA0984E1359E7A656CB9110DBB539A4F2810CB1(/*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0048;
	}

IL_0047:
	{
		G_B7_0 = 0;
	}

IL_0048:
	{
		V_2 = (bool)G_B7_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_010d;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_tempMaterial_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = __this->get_tempMaterial_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_15, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_17;
		L_17 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = __this->get_defaultMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_19));
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_4 = (bool)G_B13_0;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010c;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00ce;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_defaultMaterial_12();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_27;
		L_27 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28;
		L_28 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_27, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_28, 0, /*hidden argument*/NULL);
		goto IL_010b;
	}

IL_00ce:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30;
		L_30 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_29, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_30, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_31;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_010b;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_CanvasImage_13();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = __this->get_defaultMaterial_12();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_33, L_34);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_CanvasImage_13();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36;
		L_36 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_35);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
	}

IL_010b:
	{
	}

IL_010c:
	{
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Heat::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Heat_OnDisable_mCCB3DFF679A3F6A3B82A1067D78454D15C42201E (_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_13(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_defaultMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 0;
	}

IL_0055:
	{
		V_2 = (bool)G_B7_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_00d5;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_15;
		L_15 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_14, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_16;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0097;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18;
		L_18 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_defaultMaterial_12();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_18, L_19, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_20;
		L_20 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21;
		L_21 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_20, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_21, 0, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0097:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_23;
		L_23 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_22, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = __this->get_CanvasImage_13();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = __this->get_defaultMaterial_12();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_CanvasImage_13();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29;
		L_29 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_28);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Heat::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Heat_OnEnable_m7FC8E661FEAD905FADE5819915991FA6169EA537 (_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_13(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (defaultMaterial == null) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_defaultMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_12;
		L_12 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_13, L_12, /*hidden argument*/NULL);
		__this->set_defaultMaterial_12(L_13);
	}

IL_0060:
	{
		// if (ForceMaterial==null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00f9;
		}
	}
	{
		// ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_17 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_18;
		L_18 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_17, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_19, L_18, /*hidden argument*/NULL);
		__this->set_tempMaterial_11(L_19);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_tempMaterial_11();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_20, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00cb;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_tempMaterial_11();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_00cb:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28;
		L_28 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_27, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_29;
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_00f6;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = __this->get_CanvasImage_13();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = __this->get_tempMaterial_11();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_31, L_32);
	}

IL_00f6:
	{
		goto IL_0177;
	}

IL_00f9:
	{
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		String_t* L_34 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_35;
		L_35 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_34, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_33, L_35, /*hidden argument*/NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_38;
		L_38 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_37, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_38, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_39;
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_014b;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_41;
		L_41 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_41, L_42, /*hidden argument*/NULL);
		goto IL_0176;
	}

IL_014b:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_44;
		L_44 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_43, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_44, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_45;
		bool L_46 = V_7;
		if (!L_46)
		{
			goto IL_0176;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_47 = __this->get_CanvasImage_13();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_47, L_48);
	}

IL_0176:
	{
	}

IL_0177:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Heat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Heat__ctor_m01BC65D9CB200916A8D16992E218BFD50EA11EE3 (_2dxFX_Heat_t0E754909D07E42536D8AF70E86BD36C22AFBF19E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16ECCB3D7241492FF112254B62584E63D9752D80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// private string shader = "2DxFX/Standard/Heat";
		__this->set_shader_6(_stringLiteral16ECCB3D7241492FF112254B62584E63D9752D80);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->set__Alpha_7((1.0f));
		// [HideInInspector] [Range(0.0f, 4f)] public float Heat = 1.0f;
		__this->set_Heat_8((1.0f));
		// [HideInInspector] [Range(0.0f, 4f)] public float Speed = 1.0f;
		__this->set_Speed_9((1.0f));
		// [HideInInspector] public int ShaderChange=0;
		__this->set_ShaderChange_10(0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void _2dxFX_Hologram::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram_Awake_mD14C8E533EA12CE3092849EDD32E85EFE07E42A8 (_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_5);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram_Start_mBD65A70678BF88AC26A1A94B6B1291B6AC91EF1B (_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1 * __this, const RuntimeMethod* method)
{
	{
		// ShaderChange = 0;
		__this->set_ShaderChange_11(0);
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram_CallUpdate_m7CAC9F0D28B27CDCBD91576073BE4C4D5E7DBAEE (_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1 * __this, const RuntimeMethod* method)
{
	{
		// Update ();
		_2dxFX_Hologram_Update_m8FB884EBCA7C90F49B359F90E44449B6925A000D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram_Update_m8FB884EBCA7C90F49B359F90E44449B6925A000D (_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_9 = __this->get_ShaderChange_11();
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B7_0 = 0;
	}

IL_0050:
	{
		V_2 = (bool)G_B7_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00f8;
		}
	}
	{
		// ShaderChange=1;
		__this->set_ShaderChange_11(1);
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_16, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18;
		L_18 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_17, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00a8;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_21;
		L_21 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_21, L_22, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00a8:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24;
		L_24 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_23, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00d3;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_27, L_28);
	}

IL_00d3:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = __this->get_ForceMaterial_4();
		String_t* L_31 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_32;
		L_32 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_31, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_30, L_32, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// if ((ForceMaterial == null) && (ShaderChange==1))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_35 = __this->get_ShaderChange_11();
		G_B18_0 = ((((int32_t)L_35) == ((int32_t)1))? 1 : 0);
		goto IL_0112;
	}

IL_0111:
	{
		G_B18_0 = 0;
	}

IL_0112:
	{
		V_6 = (bool)G_B18_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_01bd;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_38;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_013a;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_40 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_40, /*hidden argument*/NULL);
	}

IL_013a:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_41 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_42;
		L_42 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_41, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_43, L_42, /*hidden argument*/NULL);
		__this->set_tempMaterial_12(L_43);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = __this->get_tempMaterial_12();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_44, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_46;
		L_46 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_45, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_46, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_47;
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_018a;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_49;
		L_49 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get_tempMaterial_12();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_49, L_50, /*hidden argument*/NULL);
		goto IL_01b5;
	}

IL_018a:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52;
		L_52 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_51, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_52, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_9 = L_53;
		bool L_54 = V_9;
		if (!L_54)
		{
			goto IL_01b5;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_55 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56 = __this->get_tempMaterial_12();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_55, L_56);
	}

IL_01b5:
	{
		// ShaderChange=0;
		__this->set_ShaderChange_11(0);
	}

IL_01bd:
	{
		// if (ActiveChange)
		bool L_57 = __this->get_ActiveChange_5();
		V_10 = L_57;
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_0339;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_60;
		L_60 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_59, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_60, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_11 = L_61;
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_0285;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Alpha", 1-_Alpha);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_63;
		L_63 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64;
		L_64 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_63, /*hidden argument*/NULL);
		float L_65 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_64, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_65)), /*hidden argument*/NULL);
		// _TimeX+=Time.deltaTime*Speed;
		float L_66 = __this->get__TimeX_9();
		float L_67;
		L_67 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_68 = __this->get_Speed_10();
		__this->set__TimeX_9(((float)il2cpp_codegen_add((float)L_66, (float)((float)il2cpp_codegen_multiply((float)L_67, (float)L_68)))));
		// if (_TimeX>100)  _TimeX=0;
		float L_69 = __this->get__TimeX_9();
		V_12 = (bool)((((float)L_69) > ((float)(100.0f)))? 1 : 0);
		bool L_70 = V_12;
		if (!L_70)
		{
			goto IL_0241;
		}
	}
	{
		// if (_TimeX>100)  _TimeX=0;
		__this->set__TimeX_9((0.0f));
	}

IL_0241:
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Distortion", Distortion);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_71;
		L_71 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_72;
		L_72 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_71, /*hidden argument*/NULL);
		float L_73 = __this->get_Distortion_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_72, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_73, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_TimeX", 1f+_TimeX);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_74;
		L_74 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_75;
		L_75 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_74, /*hidden argument*/NULL);
		float L_76 = __this->get__TimeX_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_75, _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC, ((float)il2cpp_codegen_add((float)(1.0f), (float)L_76)), /*hidden argument*/NULL);
		goto IL_0338;
	}

IL_0285:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77;
		L_77 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_78;
		L_78 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_77, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_79;
		L_79 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_78, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_13 = L_79;
		bool L_80 = V_13;
		if (!L_80)
		{
			goto IL_0338;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1-_Alpha);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_81 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_82;
		L_82 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_81);
		float L_83 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_82, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_83)), /*hidden argument*/NULL);
		// _TimeX+=Time.deltaTime*Speed;
		float L_84 = __this->get__TimeX_9();
		float L_85;
		L_85 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_86 = __this->get_Speed_10();
		__this->set__TimeX_9(((float)il2cpp_codegen_add((float)L_84, (float)((float)il2cpp_codegen_multiply((float)L_85, (float)L_86)))));
		// if (_TimeX>100)  _TimeX=0;
		float L_87 = __this->get__TimeX_9();
		V_14 = (bool)((((float)L_87) > ((float)(100.0f)))? 1 : 0);
		bool L_88 = V_14;
		if (!L_88)
		{
			goto IL_02f9;
		}
	}
	{
		// if (_TimeX>100)  _TimeX=0;
		__this->set__TimeX_9((0.0f));
	}

IL_02f9:
	{
		// CanvasImage.material.SetFloat("_Distortion", Distortion);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_89 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_90;
		L_90 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_89);
		float L_91 = __this->get_Distortion_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_90, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_91, /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_TimeX", 1f+_TimeX);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_92 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_93;
		L_93 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_92);
		float L_94 = __this->get__TimeX_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_93, _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC, ((float)il2cpp_codegen_add((float)(1.0f), (float)L_94)), /*hidden argument*/NULL);
	}

IL_0338:
	{
	}

IL_0339:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram_OnDestroy_m3C2B02E827A2E374BAE7BFB98BB64BE3D2C89F96 (_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true)) {
		bool L_9;
		L_9 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		bool L_10;
		L_10 = Application_get_isEditor_m7BA0984E1359E7A656CB9110DBB539A4F2810CB1(/*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0048;
	}

IL_0047:
	{
		G_B7_0 = 0;
	}

IL_0048:
	{
		V_2 = (bool)G_B7_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_010d;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_15, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_17;
		L_17 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = __this->get_defaultMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_19));
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_4 = (bool)G_B13_0;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010c;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00ce;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_defaultMaterial_13();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_27;
		L_27 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28;
		L_28 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_27, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_28, 0, /*hidden argument*/NULL);
		goto IL_010b;
	}

IL_00ce:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30;
		L_30 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_29, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_30, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_31;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_010b;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = __this->get_defaultMaterial_13();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_33, L_34);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36;
		L_36 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_35);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
	}

IL_010b:
	{
	}

IL_010c:
	{
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram_OnDisable_mFFBB341B723655A269FDD11CE304E82A6A4F7689 (_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_defaultMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 0;
	}

IL_0055:
	{
		V_2 = (bool)G_B7_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_00d5;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_15;
		L_15 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_14, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_16;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0097;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18;
		L_18 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_defaultMaterial_13();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_18, L_19, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_20;
		L_20 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21;
		L_21 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_20, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_21, 0, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0097:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_23;
		L_23 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_22, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = __this->get_defaultMaterial_13();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29;
		L_29 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_28);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram_OnEnable_mFFA127AD8EE57B6F9B87A8CAD9C05E4DC24FC5F1 (_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (defaultMaterial == null) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_defaultMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_12;
		L_12 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_13, L_12, /*hidden argument*/NULL);
		__this->set_defaultMaterial_13(L_13);
	}

IL_0060:
	{
		// if (ForceMaterial==null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00f9;
		}
	}
	{
		// ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_17 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_18;
		L_18 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_17, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_19, L_18, /*hidden argument*/NULL);
		__this->set_tempMaterial_12(L_19);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_tempMaterial_12();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_20, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00cb;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_tempMaterial_12();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_00cb:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28;
		L_28 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_27, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_29;
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_00f6;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = __this->get_tempMaterial_12();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_31, L_32);
	}

IL_00f6:
	{
		goto IL_0177;
	}

IL_00f9:
	{
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		String_t* L_34 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_35;
		L_35 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_34, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_33, L_35, /*hidden argument*/NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_38;
		L_38 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_37, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_38, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_39;
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_014b;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_41;
		L_41 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_41, L_42, /*hidden argument*/NULL);
		goto IL_0176;
	}

IL_014b:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_44;
		L_44 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_43, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_44, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_45;
		bool L_46 = V_7;
		if (!L_46)
		{
			goto IL_0176;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_47 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_47, L_48);
	}

IL_0176:
	{
	}

IL_0177:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram__ctor_m2C857DA3F692A0685F501CEA21383EA323145977 (_2dxFX_Hologram_t01077372FDC8BC686F295EAF12753B792F433EC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FE5213919E7409ED5D651CE5D16A1B023774D3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// private string shader = "2DxFX/Standard/Hologram";
		__this->set_shader_6(_stringLiteral7FE5213919E7409ED5D651CE5D16A1B023774D3F);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->set__Alpha_7((1.0f));
		// [HideInInspector] [Range(0, 4)] public float Distortion = 1.0f;
		__this->set_Distortion_8((1.0f));
		// [HideInInspector] private float _TimeX = 0; [Range(0, 3)]
		__this->set__TimeX_9((0.0f));
		// [HideInInspector] public float Speed = 1;
		__this->set_Speed_10((1.0f));
		// [HideInInspector] public int ShaderChange=0;
		__this->set_ShaderChange_11(0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void _2dxFX_Hologram2::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram2_Awake_m05FE4073C36ED89FE3556A5DBDBA43D20CEB1EAD (_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_5);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram2_Start_m79B14538BE888A71B121E5D0C9E92CB9DC46F80E (_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E * __this, const RuntimeMethod* method)
{
	{
		// ShaderChange = 0;
		__this->set_ShaderChange_11(0);
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram2::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram2_CallUpdate_mC3A082A1F4C2C0E09B0AA6232C6674580C09CD71 (_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E * __this, const RuntimeMethod* method)
{
	{
		// Update ();
		_2dxFX_Hologram2_Update_mD21017306B299D049DC97FABA800E79E02E204A6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram2_Update_mD21017306B299D049DC97FABA800E79E02E204A6 (_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_9 = __this->get_ShaderChange_11();
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B7_0 = 0;
	}

IL_0050:
	{
		V_2 = (bool)G_B7_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00f8;
		}
	}
	{
		// ShaderChange=1;
		__this->set_ShaderChange_11(1);
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_16, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18;
		L_18 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_17, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00a8;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_21;
		L_21 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_21, L_22, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00a8:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24;
		L_24 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_23, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00d3;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_27, L_28);
	}

IL_00d3:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = __this->get_ForceMaterial_4();
		String_t* L_31 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_32;
		L_32 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_31, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_30, L_32, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// if ((ForceMaterial == null) && (ShaderChange==1))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_35 = __this->get_ShaderChange_11();
		G_B18_0 = ((((int32_t)L_35) == ((int32_t)1))? 1 : 0);
		goto IL_0112;
	}

IL_0111:
	{
		G_B18_0 = 0;
	}

IL_0112:
	{
		V_6 = (bool)G_B18_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_01bd;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_38;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_013a;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_40 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_40, /*hidden argument*/NULL);
	}

IL_013a:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_41 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_42;
		L_42 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_41, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_43, L_42, /*hidden argument*/NULL);
		__this->set_tempMaterial_12(L_43);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = __this->get_tempMaterial_12();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_44, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_46;
		L_46 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_45, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_46, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_47;
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_018a;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_49;
		L_49 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get_tempMaterial_12();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_49, L_50, /*hidden argument*/NULL);
		goto IL_01b5;
	}

IL_018a:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52;
		L_52 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_51, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_52, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_9 = L_53;
		bool L_54 = V_9;
		if (!L_54)
		{
			goto IL_01b5;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_55 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56 = __this->get_tempMaterial_12();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_55, L_56);
	}

IL_01b5:
	{
		// ShaderChange=0;
		__this->set_ShaderChange_11(0);
	}

IL_01bd:
	{
		// if (ActiveChange)
		bool L_57 = __this->get_ActiveChange_5();
		V_10 = L_57;
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_0339;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_60;
		L_60 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_59, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_60, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_11 = L_61;
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_0285;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Alpha", 1-_Alpha);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_63;
		L_63 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64;
		L_64 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_63, /*hidden argument*/NULL);
		float L_65 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_64, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_65)), /*hidden argument*/NULL);
		// _TimeX+=Time.deltaTime*Speed;
		float L_66 = __this->get__TimeX_9();
		float L_67;
		L_67 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_68 = __this->get_Speed_10();
		__this->set__TimeX_9(((float)il2cpp_codegen_add((float)L_66, (float)((float)il2cpp_codegen_multiply((float)L_67, (float)L_68)))));
		// if (_TimeX>100)  _TimeX=0;
		float L_69 = __this->get__TimeX_9();
		V_12 = (bool)((((float)L_69) > ((float)(100.0f)))? 1 : 0);
		bool L_70 = V_12;
		if (!L_70)
		{
			goto IL_0241;
		}
	}
	{
		// if (_TimeX>100)  _TimeX=0;
		__this->set__TimeX_9((0.0f));
	}

IL_0241:
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Distortion", Distortion);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_71;
		L_71 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_72;
		L_72 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_71, /*hidden argument*/NULL);
		float L_73 = __this->get_Distortion_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_72, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_73, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_TimeX", 1f+_TimeX);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_74;
		L_74 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_75;
		L_75 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_74, /*hidden argument*/NULL);
		float L_76 = __this->get__TimeX_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_75, _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC, ((float)il2cpp_codegen_add((float)(1.0f), (float)L_76)), /*hidden argument*/NULL);
		goto IL_0338;
	}

IL_0285:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77;
		L_77 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_78;
		L_78 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_77, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_79;
		L_79 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_78, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_13 = L_79;
		bool L_80 = V_13;
		if (!L_80)
		{
			goto IL_0338;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1-_Alpha);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_81 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_82;
		L_82 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_81);
		float L_83 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_82, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_83)), /*hidden argument*/NULL);
		// _TimeX+=Time.deltaTime*Speed;
		float L_84 = __this->get__TimeX_9();
		float L_85;
		L_85 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_86 = __this->get_Speed_10();
		__this->set__TimeX_9(((float)il2cpp_codegen_add((float)L_84, (float)((float)il2cpp_codegen_multiply((float)L_85, (float)L_86)))));
		// if (_TimeX>100)  _TimeX=0;
		float L_87 = __this->get__TimeX_9();
		V_14 = (bool)((((float)L_87) > ((float)(100.0f)))? 1 : 0);
		bool L_88 = V_14;
		if (!L_88)
		{
			goto IL_02f9;
		}
	}
	{
		// if (_TimeX>100)  _TimeX=0;
		__this->set__TimeX_9((0.0f));
	}

IL_02f9:
	{
		// CanvasImage.material.SetFloat("_Distortion", Distortion);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_89 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_90;
		L_90 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_89);
		float L_91 = __this->get_Distortion_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_90, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_91, /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_TimeX", 1f+_TimeX);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_92 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_93;
		L_93 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_92);
		float L_94 = __this->get__TimeX_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_93, _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC, ((float)il2cpp_codegen_add((float)(1.0f), (float)L_94)), /*hidden argument*/NULL);
	}

IL_0338:
	{
	}

IL_0339:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram2::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram2_OnDestroy_m391E794542E2F970153B22BDA0B59815F9D81EE5 (_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true)) {
		bool L_9;
		L_9 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		bool L_10;
		L_10 = Application_get_isEditor_m7BA0984E1359E7A656CB9110DBB539A4F2810CB1(/*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0048;
	}

IL_0047:
	{
		G_B7_0 = 0;
	}

IL_0048:
	{
		V_2 = (bool)G_B7_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_010d;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_15, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_17;
		L_17 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = __this->get_defaultMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_19));
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_4 = (bool)G_B13_0;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010c;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00ce;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_defaultMaterial_13();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_27;
		L_27 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28;
		L_28 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_27, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_28, 0, /*hidden argument*/NULL);
		goto IL_010b;
	}

IL_00ce:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30;
		L_30 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_29, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_30, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_31;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_010b;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = __this->get_defaultMaterial_13();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_33, L_34);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36;
		L_36 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_35);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
	}

IL_010b:
	{
	}

IL_010c:
	{
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram2::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram2_OnDisable_m004DC6F99076DA3A5F8933A252117EF57CA7E897 (_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_defaultMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 0;
	}

IL_0055:
	{
		V_2 = (bool)G_B7_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_00d5;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_15;
		L_15 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_14, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_16;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0097;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18;
		L_18 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_defaultMaterial_13();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_18, L_19, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_20;
		L_20 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21;
		L_21 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_20, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_21, 0, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0097:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_23;
		L_23 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_22, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = __this->get_defaultMaterial_13();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29;
		L_29 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_28);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram2::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram2_OnEnable_mF363F442139A294CE695987F70FA46B0D4D2C00D (_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (defaultMaterial == null) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_defaultMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_12;
		L_12 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_13, L_12, /*hidden argument*/NULL);
		__this->set_defaultMaterial_13(L_13);
	}

IL_0060:
	{
		// if (ForceMaterial==null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00f9;
		}
	}
	{
		// ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_17 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_18;
		L_18 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_17, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_19, L_18, /*hidden argument*/NULL);
		__this->set_tempMaterial_12(L_19);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_tempMaterial_12();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_20, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00cb;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_tempMaterial_12();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_00cb:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28;
		L_28 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_27, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_29;
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_00f6;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = __this->get_tempMaterial_12();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_31, L_32);
	}

IL_00f6:
	{
		goto IL_0177;
	}

IL_00f9:
	{
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		String_t* L_34 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_35;
		L_35 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_34, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_33, L_35, /*hidden argument*/NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_38;
		L_38 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_37, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_38, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_39;
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_014b;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_41;
		L_41 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_41, L_42, /*hidden argument*/NULL);
		goto IL_0176;
	}

IL_014b:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_44;
		L_44 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_43, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_44, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_45;
		bool L_46 = V_7;
		if (!L_46)
		{
			goto IL_0176;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_47 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_47, L_48);
	}

IL_0176:
	{
	}

IL_0177:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram2__ctor_m37BD72000CC587196D3E0AA7860F388180994101 (_2dxFX_Hologram2_t1FDFE7A948008545AE36291EA07DA807FDB10F6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8C3391C4B3DE37D423934C11466D08463BEF8A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// private string shader = "2DxFX/Standard/Hologram2";
		__this->set_shader_6(_stringLiteralE8C3391C4B3DE37D423934C11466D08463BEF8A7);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->set__Alpha_7((1.0f));
		// [HideInInspector] [Range(0, 4)] public float Distortion = 1.0f;
		__this->set_Distortion_8((1.0f));
		// [HideInInspector] private float _TimeX = 0; [Range(0, 3)]
		__this->set__TimeX_9((0.0f));
		// [HideInInspector] public float Speed = 1;
		__this->set_Speed_10((1.0f));
		// [HideInInspector] public int ShaderChange=0;
		__this->set_ShaderChange_11(0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void _2dxFX_Hologram3::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram3_Awake_mDAD7A562F3E0C7BC998C75BB13BEC22BAFD1D649 (_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_15(L_5);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram3_Start_m306257C4801D1DB2FEE908C57338486D25F9C640 (_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181 * __this, const RuntimeMethod* method)
{
	{
		// ShaderChange = 0;
		__this->set_ShaderChange_12(0);
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram3::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram3_CallUpdate_m0CF7FA770E8E791579BC73EE4FF2F8B97B6D6D04 (_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181 * __this, const RuntimeMethod* method)
{
	{
		// Update ();
		_2dxFX_Hologram3_Update_mCE41B0669BD473783328C3CD45CE95D216776F99(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram3::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram3_Update_mCE41B0669BD473783328C3CD45CE95D216776F99 (_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_15(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_9 = __this->get_ShaderChange_12();
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B7_0 = 0;
	}

IL_0050:
	{
		V_2 = (bool)G_B7_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00f8;
		}
	}
	{
		// ShaderChange=1;
		__this->set_ShaderChange_12(1);
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_tempMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_tempMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_16, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18;
		L_18 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_17, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00a8;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_21;
		L_21 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_21, L_22, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00a8:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24;
		L_24 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_23, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00d3;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_27, L_28);
	}

IL_00d3:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = __this->get_ForceMaterial_4();
		String_t* L_31 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_32;
		L_32 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_31, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_30, L_32, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// if ((ForceMaterial == null) && (ShaderChange==1))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_35 = __this->get_ShaderChange_12();
		G_B18_0 = ((((int32_t)L_35) == ((int32_t)1))? 1 : 0);
		goto IL_0112;
	}

IL_0111:
	{
		G_B18_0 = 0;
	}

IL_0112:
	{
		V_6 = (bool)G_B18_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_01bd;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_tempMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_38;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_013a;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_40 = __this->get_tempMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_40, /*hidden argument*/NULL);
	}

IL_013a:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_41 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_42;
		L_42 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_41, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_43, L_42, /*hidden argument*/NULL);
		__this->set_tempMaterial_13(L_43);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = __this->get_tempMaterial_13();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_44, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_46;
		L_46 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_45, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_46, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_47;
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_018a;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_49;
		L_49 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get_tempMaterial_13();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_49, L_50, /*hidden argument*/NULL);
		goto IL_01b5;
	}

IL_018a:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52;
		L_52 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_51, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_52, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_9 = L_53;
		bool L_54 = V_9;
		if (!L_54)
		{
			goto IL_01b5;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_55 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56 = __this->get_tempMaterial_13();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_55, L_56);
	}

IL_01b5:
	{
		// ShaderChange=0;
		__this->set_ShaderChange_12(0);
	}

IL_01bd:
	{
		// if (ActiveChange)
		bool L_57 = __this->get_ActiveChange_5();
		V_10 = L_57;
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_0371;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_60;
		L_60 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_59, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_60, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_11 = L_61;
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_02a1;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Alpha", 1-_Alpha);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_63;
		L_63 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64;
		L_64 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_63, /*hidden argument*/NULL);
		float L_65 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_64, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_65)), /*hidden argument*/NULL);
		// _TimeX+=Time.deltaTime*Speed;
		float L_66 = __this->get__TimeX_9();
		float L_67;
		L_67 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_68 = __this->get_Speed_10();
		__this->set__TimeX_9(((float)il2cpp_codegen_add((float)L_66, (float)((float)il2cpp_codegen_multiply((float)L_67, (float)L_68)))));
		// if (_TimeX>100)  _TimeX=0;
		float L_69 = __this->get__TimeX_9();
		V_12 = (bool)((((float)L_69) > ((float)(100.0f)))? 1 : 0);
		bool L_70 = V_12;
		if (!L_70)
		{
			goto IL_0241;
		}
	}
	{
		// if (_TimeX>100)  _TimeX=0;
		__this->set__TimeX_9((0.0f));
	}

IL_0241:
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Distortion", Distortion);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_71;
		L_71 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_72;
		L_72 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_71, /*hidden argument*/NULL);
		float L_73 = __this->get_Distortion_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_72, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_73, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_TimeX", 1f+_TimeX);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_74;
		L_74 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_75;
		L_75 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_74, /*hidden argument*/NULL);
		float L_76 = __this->get__TimeX_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_75, _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC, ((float)il2cpp_codegen_add((float)(1.0f), (float)L_76)), /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetColor("_ColorX", _ColorX);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_77;
		L_77 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_78;
		L_78 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_77, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_79 = __this->get__ColorX_11();
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_78, _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227, L_79, /*hidden argument*/NULL);
		goto IL_0370;
	}

IL_02a1:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80;
		L_80 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_81;
		L_81 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_80, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_81, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_13 = L_82;
		bool L_83 = V_13;
		if (!L_83)
		{
			goto IL_0370;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1-_Alpha);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_84 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_85;
		L_85 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_84);
		float L_86 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_85, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_86)), /*hidden argument*/NULL);
		// _TimeX+=Time.deltaTime*Speed;
		float L_87 = __this->get__TimeX_9();
		float L_88;
		L_88 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_89 = __this->get_Speed_10();
		__this->set__TimeX_9(((float)il2cpp_codegen_add((float)L_87, (float)((float)il2cpp_codegen_multiply((float)L_88, (float)L_89)))));
		// if (_TimeX>100)  _TimeX=0;
		float L_90 = __this->get__TimeX_9();
		V_14 = (bool)((((float)L_90) > ((float)(100.0f)))? 1 : 0);
		bool L_91 = V_14;
		if (!L_91)
		{
			goto IL_0315;
		}
	}
	{
		// if (_TimeX>100)  _TimeX=0;
		__this->set__TimeX_9((0.0f));
	}

IL_0315:
	{
		// CanvasImage.material.SetFloat("_Distortion", Distortion);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_92 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_93;
		L_93 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_92);
		float L_94 = __this->get_Distortion_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_93, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_94, /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_TimeX", 1f+_TimeX);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_95 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_96;
		L_96 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_95);
		float L_97 = __this->get__TimeX_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_96, _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC, ((float)il2cpp_codegen_add((float)(1.0f), (float)L_97)), /*hidden argument*/NULL);
		// CanvasImage.material.SetColor("_ColorX", _ColorX);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_98 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_99;
		L_99 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_98);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_100 = __this->get__ColorX_11();
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_99, _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227, L_100, /*hidden argument*/NULL);
	}

IL_0370:
	{
	}

IL_0371:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram3::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram3_OnDestroy_m57FE3582FB7A9762976672E6BC53F42843938196 (_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_15(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true)) {
		bool L_9;
		L_9 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		bool L_10;
		L_10 = Application_get_isEditor_m7BA0984E1359E7A656CB9110DBB539A4F2810CB1(/*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0048;
	}

IL_0047:
	{
		G_B7_0 = 0;
	}

IL_0048:
	{
		V_2 = (bool)G_B7_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_010d;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_tempMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = __this->get_tempMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_15, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_17;
		L_17 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = __this->get_defaultMaterial_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_19));
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_4 = (bool)G_B13_0;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010c;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00ce;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_defaultMaterial_14();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_27;
		L_27 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28;
		L_28 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_27, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_28, 0, /*hidden argument*/NULL);
		goto IL_010b;
	}

IL_00ce:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30;
		L_30 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_29, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_30, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_31;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_010b;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = __this->get_defaultMaterial_14();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_33, L_34);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36;
		L_36 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_35);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
	}

IL_010b:
	{
	}

IL_010c:
	{
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram3::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram3_OnDisable_m62FDD554D959A6D45B57097B3B497C8B15611BA0 (_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_15(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_defaultMaterial_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 0;
	}

IL_0055:
	{
		V_2 = (bool)G_B7_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_00d5;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_15;
		L_15 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_14, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_16;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0097;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18;
		L_18 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_defaultMaterial_14();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_18, L_19, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_20;
		L_20 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21;
		L_21 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_20, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_21, 0, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0097:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_23;
		L_23 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_22, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = __this->get_defaultMaterial_14();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29;
		L_29 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_28);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram3::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram3_OnEnable_m6F04EB7497BC36A4FE305B5C27F781753BCC8000 (_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_15(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (defaultMaterial == null) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_defaultMaterial_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_12;
		L_12 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_13, L_12, /*hidden argument*/NULL);
		__this->set_defaultMaterial_14(L_13);
	}

IL_0060:
	{
		// if (ForceMaterial==null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00f9;
		}
	}
	{
		// ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_17 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_18;
		L_18 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_17, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_19, L_18, /*hidden argument*/NULL);
		__this->set_tempMaterial_13(L_19);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_tempMaterial_13();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_20, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00cb;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_tempMaterial_13();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_00cb:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28;
		L_28 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_27, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_29;
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_00f6;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = __this->get_tempMaterial_13();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_31, L_32);
	}

IL_00f6:
	{
		goto IL_0177;
	}

IL_00f9:
	{
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		String_t* L_34 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_35;
		L_35 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_34, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_33, L_35, /*hidden argument*/NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_38;
		L_38 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_37, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_38, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_39;
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_014b;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_41;
		L_41 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_41, L_42, /*hidden argument*/NULL);
		goto IL_0176;
	}

IL_014b:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_44;
		L_44 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_43, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_44, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_45;
		bool L_46 = V_7;
		if (!L_46)
		{
			goto IL_0176;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_47 = __this->get_CanvasImage_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_47, L_48);
	}

IL_0176:
	{
	}

IL_0177:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Hologram3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Hologram3__ctor_m0DAB8D93016A35E0DC9B828BC8C6D013F899F1CC (_2dxFX_Hologram3_t50A770FCBC0C9402C21F5EB52F06F88EC35A8181 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB986E40913D5294E726405E2650B1FC74F9E6ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// private string shader = "2DxFX/Standard/Hologram3";
		__this->set_shader_6(_stringLiteralFB986E40913D5294E726405E2650B1FC74F9E6ED);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->set__Alpha_7((1.0f));
		// [HideInInspector] [Range(0, 4)] public float Distortion = 1.0f;
		__this->set_Distortion_8((1.0f));
		// [HideInInspector] private float _TimeX = 0; [Range(0, 3)]
		__this->set__TimeX_9((0.0f));
		// [HideInInspector] public float Speed = 1;
		__this->set_Speed_10((1.0f));
		// [HideInInspector] public Color _ColorX = new Color(1,1,1,1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set__ColorX_11(L_0);
		// [HideInInspector] public int ShaderChange=0;
		__this->set_ShaderChange_12(0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void _2dxFX_Ice::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ice_Awake_m7A5FB8699254CAB55B9C001500DD69FF6FE3D916 (_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_22(L_5);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Ice::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ice_Start_m47AD6D5F1993A6D2586674F05011BDC9091F4289 (_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// __MainTex2 = Resources.Load ("_2dxFX_FireTXT") as Texture2D;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0;
		L_0 = Resources_Load_mC33EB216560AE32277F2C285188B4490CEB6F074(_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1, /*hidden argument*/NULL);
		__this->set___MainTex2_8(((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)));
		// ShaderChange = 0;
		__this->set_ShaderChange_19(0);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_1, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetTexture ("_MainTex2", __MainTex2);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_5;
		L_5 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6;
		L_6 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_5, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = __this->get___MainTex2_8();
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_6, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_7, /*hidden argument*/NULL);
		goto IL_0085;
	}

IL_0052:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9;
		L_9 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_8, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0085;
		}
	}
	{
		// CanvasImage.material.SetTexture ("_MainTex2", __MainTex2);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12 = __this->get_CanvasImage_22();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13;
		L_13 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_12);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = __this->get___MainTex2_8();
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_13, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_14, /*hidden argument*/NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Ice::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ice_CallUpdate_m4B2C01C3A79C419E16CA768654C1C15683152E3B (_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858 * __this, const RuntimeMethod* method)
{
	{
		// Update ();
		_2dxFX_Ice_Update_m7ABA65A6984FFB0CBACAB8C094CDB33EDA5DFAE9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Ice::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ice_Update_m7ABA65A6984FFB0CBACAB8C094CDB33EDA5DFAE9 (_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_22(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_9 = __this->get_ShaderChange_19();
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B7_0 = 0;
	}

IL_0050:
	{
		V_2 = (bool)G_B7_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00f8;
		}
	}
	{
		// ShaderChange=1;
		__this->set_ShaderChange_19(1);
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_tempMaterial_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_tempMaterial_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_16, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18;
		L_18 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_17, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00a8;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_21;
		L_21 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_21, L_22, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00a8:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24;
		L_24 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_23, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00d3;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = __this->get_CanvasImage_22();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_27, L_28);
	}

IL_00d3:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = __this->get_ForceMaterial_4();
		String_t* L_31 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_32;
		L_32 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_31, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_30, L_32, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// if ((ForceMaterial == null) && (ShaderChange==1))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_35 = __this->get_ShaderChange_19();
		G_B18_0 = ((((int32_t)L_35) == ((int32_t)1))? 1 : 0);
		goto IL_0112;
	}

IL_0111:
	{
		G_B18_0 = 0;
	}

IL_0112:
	{
		V_6 = (bool)G_B18_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_01bd;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_tempMaterial_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_38;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_013a;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_40 = __this->get_tempMaterial_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_40, /*hidden argument*/NULL);
	}

IL_013a:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_41 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_42;
		L_42 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_41, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_43, L_42, /*hidden argument*/NULL);
		__this->set_tempMaterial_20(L_43);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = __this->get_tempMaterial_20();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_44, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_46;
		L_46 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_45, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_46, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_47;
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_018a;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_49;
		L_49 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get_tempMaterial_20();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_49, L_50, /*hidden argument*/NULL);
		goto IL_01b5;
	}

IL_018a:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52;
		L_52 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_51, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_52, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_9 = L_53;
		bool L_54 = V_9;
		if (!L_54)
		{
			goto IL_01b5;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_55 = __this->get_CanvasImage_22();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56 = __this->get_tempMaterial_20();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_55, L_56);
	}

IL_01b5:
	{
		// ShaderChange=0;
		__this->set_ShaderChange_19(0);
	}

IL_01bd:
	{
		// if (ActiveChange)
		bool L_57 = __this->get_ActiveChange_5();
		V_10 = L_57;
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_032f;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_60;
		L_60 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_59, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_60, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_11 = L_61;
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_0280;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Alpha", 1-_Alpha);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_63;
		L_63 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64;
		L_64 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_63, /*hidden argument*/NULL);
		float L_65 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_64, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_65)), /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Value1",_Value1);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_66;
		L_66 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_67;
		L_67 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_66, /*hidden argument*/NULL);
		float L_68 = __this->get__Value1_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_67, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_68, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Value2",_Value2);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_69;
		L_69 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_70;
		L_70 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_69, /*hidden argument*/NULL);
		float L_71 = __this->get__Value2_10();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_70, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, L_71, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Value3",_Value3);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_72;
		L_72 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_73;
		L_73 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_72, /*hidden argument*/NULL);
		float L_74 = __this->get__Value3_11();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_73, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, L_74, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Value4",_Value4);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_75;
		L_75 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_76;
		L_76 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_75, /*hidden argument*/NULL);
		float L_77 = __this->get__Value4_12();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_76, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_77, /*hidden argument*/NULL);
		goto IL_032e;
	}

IL_0280:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_78;
		L_78 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_79;
		L_79 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_78, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_79, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_12 = L_80;
		bool L_81 = V_12;
		if (!L_81)
		{
			goto IL_032e;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1-_Alpha);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_82 = __this->get_CanvasImage_22();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_83;
		L_83 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_82);
		float L_84 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_83, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_84)), /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_Value1",_Value1);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_85 = __this->get_CanvasImage_22();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_86;
		L_86 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_85);
		float L_87 = __this->get__Value1_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_86, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_87, /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_Value2",_Value2);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_88 = __this->get_CanvasImage_22();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_89;
		L_89 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_88);
		float L_90 = __this->get__Value2_10();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_89, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, L_90, /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_Value3",_Value3);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_91 = __this->get_CanvasImage_22();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_92;
		L_92 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_91);
		float L_93 = __this->get__Value3_11();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_92, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, L_93, /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_Value4",_Value4);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_94 = __this->get_CanvasImage_22();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_95;
		L_95 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_94);
		float L_96 = __this->get__Value4_12();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_95, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_96, /*hidden argument*/NULL);
	}

IL_032e:
	{
	}

IL_032f:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Ice::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ice_OnDestroy_m8DEE004785C13BCB0F88CB892477098777579F9C (_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_22(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true)) {
		bool L_9;
		L_9 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		bool L_10;
		L_10 = Application_get_isEditor_m7BA0984E1359E7A656CB9110DBB539A4F2810CB1(/*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0048;
	}

IL_0047:
	{
		G_B7_0 = 0;
	}

IL_0048:
	{
		V_2 = (bool)G_B7_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_010d;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_tempMaterial_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = __this->get_tempMaterial_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_15, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_17;
		L_17 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = __this->get_defaultMaterial_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_19));
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_4 = (bool)G_B13_0;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010c;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00ce;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_defaultMaterial_21();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_27;
		L_27 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28;
		L_28 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_27, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_28, 0, /*hidden argument*/NULL);
		goto IL_010b;
	}

IL_00ce:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30;
		L_30 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_29, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_30, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_31;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_010b;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_CanvasImage_22();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = __this->get_defaultMaterial_21();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_33, L_34);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_CanvasImage_22();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36;
		L_36 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_35);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
	}

IL_010b:
	{
	}

IL_010c:
	{
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Ice::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ice_OnDisable_m55EB82CAA2B10DC20C3350C14FEB12DF12A1A93E (_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_22(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_defaultMaterial_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 0;
	}

IL_0055:
	{
		V_2 = (bool)G_B7_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_00d5;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_15;
		L_15 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_14, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_16;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0097;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18;
		L_18 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_defaultMaterial_21();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_18, L_19, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_20;
		L_20 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21;
		L_21 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_20, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_21, 0, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0097:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_23;
		L_23 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_22, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = __this->get_CanvasImage_22();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = __this->get_defaultMaterial_21();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_CanvasImage_22();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29;
		L_29 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_28);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Ice::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ice_OnEnable_m33A6EA5FB1BF917BC301B46FE098A73B5A82A781 (_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_22(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (defaultMaterial == null) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_defaultMaterial_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_12;
		L_12 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_13, L_12, /*hidden argument*/NULL);
		__this->set_defaultMaterial_21(L_13);
	}

IL_0060:
	{
		// if (ForceMaterial==null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0111;
		}
	}
	{
		// ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_17 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_18;
		L_18 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_17, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_19, L_18, /*hidden argument*/NULL);
		__this->set_tempMaterial_20(L_19);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_tempMaterial_20();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_20, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00cb;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_tempMaterial_20();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_00cb:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28;
		L_28 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_27, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_29;
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_00f6;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = __this->get_CanvasImage_22();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = __this->get_tempMaterial_20();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_31, L_32);
	}

IL_00f6:
	{
		// __MainTex2 = Resources.Load ("_2dxFX_FireTXT") as Texture2D;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_33;
		L_33 = Resources_Load_mC33EB216560AE32277F2C285188B4490CEB6F074(_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1, /*hidden argument*/NULL);
		__this->set___MainTex2_8(((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_33, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)));
		goto IL_01a4;
	}

IL_0111:
	{
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = __this->get_ForceMaterial_4();
		String_t* L_35 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_36;
		L_36 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_35, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_34, L_36, /*hidden argument*/NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_37, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_39;
		L_39 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_38, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_39, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_40;
		bool L_41 = V_6;
		if (!L_41)
		{
			goto IL_0163;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_42;
		L_42 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_42, L_43, /*hidden argument*/NULL);
		goto IL_018e;
	}

IL_0163:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_45;
		L_45 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_44, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_45, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_46;
		bool L_47 = V_7;
		if (!L_47)
		{
			goto IL_018e;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_48 = __this->get_CanvasImage_22();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_49 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_018e:
	{
		// __MainTex2 = Resources.Load ("_2dxFX_FireTXT") as Texture2D;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_50;
		L_50 = Resources_Load_mC33EB216560AE32277F2C285188B4490CEB6F074(_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1, /*hidden argument*/NULL);
		__this->set___MainTex2_8(((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_50, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)));
	}

IL_01a4:
	{
		// if (__MainTex2)
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_51 = __this->get___MainTex2_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_51, /*hidden argument*/NULL);
		V_8 = L_52;
		bool L_53 = V_8;
		if (!L_53)
		{
			goto IL_0230;
		}
	}
	{
		// __MainTex2.wrapMode= TextureWrapMode.Repeat;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_54 = __this->get___MainTex2_8();
		Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D(L_54, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55;
		L_55 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_56;
		L_56 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_55, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_57;
		L_57 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_56, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_9 = L_57;
		bool L_58 = V_9;
		if (!L_58)
		{
			goto IL_01fa;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetTexture ("_MainTex2", __MainTex2);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_59;
		L_59 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_60;
		L_60 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_59, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_61 = __this->get___MainTex2_8();
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_60, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_61, /*hidden argument*/NULL);
		goto IL_022f;
	}

IL_01fa:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62;
		L_62 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_63;
		L_63 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_62, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_63, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_10 = L_64;
		bool L_65 = V_10;
		if (!L_65)
		{
			goto IL_022f;
		}
	}
	{
		// CanvasImage.material.SetTexture ("_MainTex2", __MainTex2);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_66 = __this->get_CanvasImage_22();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_67;
		L_67 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_66);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_68 = __this->get___MainTex2_8();
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_67, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_68, /*hidden argument*/NULL);
	}

IL_022f:
	{
	}

IL_0230:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Ice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ice__ctor_m3A10649CB2280185D95705E284F7FBB4C8B179A1 (_2dxFX_Ice_t854871DE2DF92CB0AECF1F0619CADB16F6CA3858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF8B765C1627860F9A4962977BF369C50E405DE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// private string shader = "2DxFX/Standard/Ice";
		__this->set_shader_6(_stringLiteralDF8B765C1627860F9A4962977BF369C50E405DE6);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->set__Alpha_7((1.0f));
		// [HideInInspector] [Range(16, 256)] public float _Value1=64;
		__this->set__Value1_9((64.0f));
		// [HideInInspector] [Range(0, 2)] public float _Value2=1;
		__this->set__Value2_10((1.0f));
		// [HideInInspector] [Range(0, 1)] public float _Value3=1;
		__this->set__Value3_11((1.0f));
		// [HideInInspector] public int ShaderChange=0;
		__this->set_ShaderChange_19(0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void _2dxFX_IcedFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_IcedFX_Awake_m6D7E1056A8D643C81B3536360557BAE3E2443DC7 (_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_12(L_5);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_IcedFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_IcedFX_Start_m5EBC182C19E4C21F741D9892FC1AF9F3AE80F36E (_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85 * __this, const RuntimeMethod* method)
{
	{
		// ShaderChange = 0;
		__this->set_ShaderChange_9(0);
		// }
		return;
	}
}
// System.Void _2dxFX_IcedFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_IcedFX_CallUpdate_m32A02E184AC732F20B044F765FF944EDA961E154 (_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85 * __this, const RuntimeMethod* method)
{
	{
		// Update ();
		_2dxFX_IcedFX_Update_m27AA431724667338057E9C3663A140AB1DB153CB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_IcedFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_IcedFX_Update_m27AA431724667338057E9C3663A140AB1DB153CB (_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_12(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_9 = __this->get_ShaderChange_9();
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B7_0 = 0;
	}

IL_0050:
	{
		V_2 = (bool)G_B7_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00f8;
		}
	}
	{
		// ShaderChange=1;
		__this->set_ShaderChange_9(1);
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_16, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18;
		L_18 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_17, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00a8;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_21;
		L_21 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_21, L_22, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00a8:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24;
		L_24 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_23, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00d3;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_27, L_28);
	}

IL_00d3:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = __this->get_ForceMaterial_4();
		String_t* L_31 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_32;
		L_32 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_31, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_30, L_32, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// if ((ForceMaterial == null) && (ShaderChange==1))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_35 = __this->get_ShaderChange_9();
		G_B18_0 = ((((int32_t)L_35) == ((int32_t)1))? 1 : 0);
		goto IL_0112;
	}

IL_0111:
	{
		G_B18_0 = 0;
	}

IL_0112:
	{
		V_6 = (bool)G_B18_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_01bd;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_38;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_013a;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_40 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_40, /*hidden argument*/NULL);
	}

IL_013a:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_41 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_42;
		L_42 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_41, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_43, L_42, /*hidden argument*/NULL);
		__this->set_tempMaterial_10(L_43);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = __this->get_tempMaterial_10();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_44, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_46;
		L_46 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_45, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_46, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_47;
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_018a;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_49;
		L_49 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get_tempMaterial_10();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_49, L_50, /*hidden argument*/NULL);
		goto IL_01b5;
	}

IL_018a:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52;
		L_52 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_51, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_52, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_9 = L_53;
		bool L_54 = V_9;
		if (!L_54)
		{
			goto IL_01b5;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_55 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56 = __this->get_tempMaterial_10();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_55, L_56);
	}

IL_01b5:
	{
		// ShaderChange=0;
		__this->set_ShaderChange_9(0);
	}

IL_01bd:
	{
		// if (ActiveChange)
		bool L_57 = __this->get_ActiveChange_5();
		V_10 = L_57;
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_027e;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_60;
		L_60 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_59, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_60, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_11 = L_61;
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_0226;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Alpha", 1-_Alpha);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_63;
		L_63 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64;
		L_64 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_63, /*hidden argument*/NULL);
		float L_65 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_64, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_65)), /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Distortion", Iced);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_66;
		L_66 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_67;
		L_67 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_66, /*hidden argument*/NULL);
		float L_68 = __this->get_Iced_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_67, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_68, /*hidden argument*/NULL);
		goto IL_027d;
	}

IL_0226:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69;
		L_69 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_70;
		L_70 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_69, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_71;
		L_71 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_70, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_12 = L_71;
		bool L_72 = V_12;
		if (!L_72)
		{
			goto IL_027d;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1-_Alpha);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_73 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_74;
		L_74 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_73);
		float L_75 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_74, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_75)), /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_Distortion", Iced);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_76 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_77;
		L_77 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_76);
		float L_78 = __this->get_Iced_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_77, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_78, /*hidden argument*/NULL);
	}

IL_027d:
	{
	}

IL_027e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_IcedFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_IcedFX_OnDestroy_m58823F2E15A0420C89BB49B6BF8F02B10DF52C76 (_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_12(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true)) {
		bool L_9;
		L_9 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		bool L_10;
		L_10 = Application_get_isEditor_m7BA0984E1359E7A656CB9110DBB539A4F2810CB1(/*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0048;
	}

IL_0047:
	{
		G_B7_0 = 0;
	}

IL_0048:
	{
		V_2 = (bool)G_B7_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_010d;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = __this->get_tempMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_15, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_17;
		L_17 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = __this->get_defaultMaterial_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_19));
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_4 = (bool)G_B13_0;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010c;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00ce;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_defaultMaterial_11();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_27;
		L_27 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28;
		L_28 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_27, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_28, 0, /*hidden argument*/NULL);
		goto IL_010b;
	}

IL_00ce:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30;
		L_30 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_29, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_30, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_31;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_010b;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = __this->get_defaultMaterial_11();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_33, L_34);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36;
		L_36 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_35);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
	}

IL_010b:
	{
	}

IL_010c:
	{
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_IcedFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_IcedFX_OnDisable_m102D4CF57548D96C7A0D528F7A89A6414F59A530 (_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_12(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_defaultMaterial_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 0;
	}

IL_0055:
	{
		V_2 = (bool)G_B7_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_00d5;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_15;
		L_15 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_14, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_16;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0097;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18;
		L_18 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_defaultMaterial_11();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_18, L_19, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_20;
		L_20 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21;
		L_21 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_20, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_21, 0, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0097:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_23;
		L_23 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_22, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = __this->get_defaultMaterial_11();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29;
		L_29 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_28);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_IcedFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_IcedFX_OnEnable_m8056C67B02136B0C9660318FD46AAD92CB68BE34 (_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_12(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (defaultMaterial == null) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_defaultMaterial_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_12;
		L_12 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_13, L_12, /*hidden argument*/NULL);
		__this->set_defaultMaterial_11(L_13);
	}

IL_0060:
	{
		// if (ForceMaterial==null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00f9;
		}
	}
	{
		// ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_17 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_18;
		L_18 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_17, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_19, L_18, /*hidden argument*/NULL);
		__this->set_tempMaterial_10(L_19);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_tempMaterial_10();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_20, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00cb;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_tempMaterial_10();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_00cb:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28;
		L_28 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_27, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_29;
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_00f6;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = __this->get_tempMaterial_10();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_31, L_32);
	}

IL_00f6:
	{
		goto IL_0177;
	}

IL_00f9:
	{
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		String_t* L_34 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_35;
		L_35 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_34, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_33, L_35, /*hidden argument*/NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_38;
		L_38 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_37, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_38, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_39;
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_014b;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_41;
		L_41 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_41, L_42, /*hidden argument*/NULL);
		goto IL_0176;
	}

IL_014b:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_44;
		L_44 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_43, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_44, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_45;
		bool L_46 = V_7;
		if (!L_46)
		{
			goto IL_0176;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_47 = __this->get_CanvasImage_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_47, L_48);
	}

IL_0176:
	{
	}

IL_0177:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_IcedFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_IcedFX__ctor_m617A69B5C78D4E592F092FB3D4046C5BDFBDFC29 (_2dxFX_IcedFX_t3F9246719982206D1B163639F03A3706870C5D85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBEDCFFA21A0842E1CF747265175D6B76155BED8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// private string shader = "2DxFX/Standard/IcedFX";
		__this->set_shader_6(_stringLiteralBBEDCFFA21A0842E1CF747265175D6B76155BED8);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->set__Alpha_7((1.0f));
		// [HideInInspector] [Range(0.001f, 4f)] public float Iced = 1.0f;
		__this->set_Iced_8((1.0f));
		// [HideInInspector] public int ShaderChange=0;
		__this->set_ShaderChange_9(0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void _2dxFX_Jelly::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Jelly_Awake_mF5EC557D339E75CAA2B6ADEC65E90EAA2C648280 (_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_5);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Jelly::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Jelly_Start_mBAB52050E84583E6E9BFE5313D825AD0E9E13B8E (_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4 * __this, const RuntimeMethod* method)
{
	{
		// ShaderChange = 0;
		__this->set_ShaderChange_11(0);
		// }
		return;
	}
}
// System.Void _2dxFX_Jelly::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Jelly_CallUpdate_mAAD38291BAEB8996642FFF281EE3551DDF7E8C85 (_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4 * __this, const RuntimeMethod* method)
{
	{
		// Update ();
		_2dxFX_Jelly_Update_m74D94D306FF8A09B8669815215AAFB378800FB48(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Jelly::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Jelly_Update_m74D94D306FF8A09B8669815215AAFB378800FB48 (_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC20DCA4FAC181BC1E26F2DC821B7FEC3ED791BE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_9 = __this->get_ShaderChange_11();
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B7_0 = 0;
	}

IL_0050:
	{
		V_2 = (bool)G_B7_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00f8;
		}
	}
	{
		// ShaderChange=1;
		__this->set_ShaderChange_11(1);
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_16, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18;
		L_18 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_17, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00a8;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_21;
		L_21 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_21, L_22, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00a8:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24;
		L_24 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_23, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00d3;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_27, L_28);
	}

IL_00d3:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = __this->get_ForceMaterial_4();
		String_t* L_31 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_32;
		L_32 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_31, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_30, L_32, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// if ((ForceMaterial == null) && (ShaderChange==1))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_35 = __this->get_ShaderChange_11();
		G_B18_0 = ((((int32_t)L_35) == ((int32_t)1))? 1 : 0);
		goto IL_0112;
	}

IL_0111:
	{
		G_B18_0 = 0;
	}

IL_0112:
	{
		V_6 = (bool)G_B18_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_01bd;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_38;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_013a;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_40 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_40, /*hidden argument*/NULL);
	}

IL_013a:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_41 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_42;
		L_42 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_41, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_43, L_42, /*hidden argument*/NULL);
		__this->set_tempMaterial_12(L_43);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = __this->get_tempMaterial_12();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_44, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_46;
		L_46 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_45, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_46, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_47;
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_018a;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_49;
		L_49 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get_tempMaterial_12();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_49, L_50, /*hidden argument*/NULL);
		goto IL_01b5;
	}

IL_018a:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52;
		L_52 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_51, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_52, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_9 = L_53;
		bool L_54 = V_9;
		if (!L_54)
		{
			goto IL_01b5;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_55 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56 = __this->get_tempMaterial_12();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_55, L_56);
	}

IL_01b5:
	{
		// ShaderChange=0;
		__this->set_ShaderChange_11(0);
	}

IL_01bd:
	{
		// if (ActiveChange)
		bool L_57 = __this->get_ActiveChange_5();
		V_10 = L_57;
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_02f1;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_60;
		L_60 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_59, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_60, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_11 = L_61;
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_0261;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Alpha", 1-_Alpha);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_63;
		L_63 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64;
		L_64 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_63, /*hidden argument*/NULL);
		float L_65 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_64, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_65)), /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Distortion", Heat);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_66;
		L_66 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_67;
		L_67 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_66, /*hidden argument*/NULL);
		float L_68 = __this->get_Heat_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_67, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_68, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Inside", Inside);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_69;
		L_69 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_70;
		L_70 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_69, /*hidden argument*/NULL);
		float L_71 = __this->get_Inside_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_70, _stringLiteralC20DCA4FAC181BC1E26F2DC821B7FEC3ED791BE5, L_71, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.SetFloat("_Speed", Speed);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_72;
		L_72 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_73;
		L_73 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_72, /*hidden argument*/NULL);
		float L_74 = __this->get_Speed_10();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_73, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_74, /*hidden argument*/NULL);
		goto IL_02f0;
	}

IL_0261:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_75;
		L_75 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_76;
		L_76 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_75, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_77;
		L_77 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_76, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_12 = L_77;
		bool L_78 = V_12;
		if (!L_78)
		{
			goto IL_02f0;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1-_Alpha);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_79 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_80;
		L_80 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_79);
		float L_81 = __this->get__Alpha_7();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_80, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_81)), /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_Distortion", Heat);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_82 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_83;
		L_83 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_82);
		float L_84 = __this->get_Heat_8();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_83, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_84, /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_Inside", Inside);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_85 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_86;
		L_86 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_85);
		float L_87 = __this->get_Inside_9();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_86, _stringLiteralC20DCA4FAC181BC1E26F2DC821B7FEC3ED791BE5, L_87, /*hidden argument*/NULL);
		// CanvasImage.material.SetFloat("_Speed", Speed);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_88 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_89;
		L_89 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_88);
		float L_90 = __this->get_Speed_10();
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_89, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_90, /*hidden argument*/NULL);
	}

IL_02f0:
	{
	}

IL_02f1:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Jelly::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Jelly_OnDestroy_mAC1A6991AE6AA944FDAE9DF5CD720E36AAC2872B (_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true)) {
		bool L_9;
		L_9 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		bool L_10;
		L_10 = Application_get_isEditor_m7BA0984E1359E7A656CB9110DBB539A4F2810CB1(/*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0048;
	}

IL_0047:
	{
		G_B7_0 = 0;
	}

IL_0048:
	{
		V_2 = (bool)G_B7_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_010d;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// if (tempMaterial!=null) DestroyImmediate(tempMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = __this->get_tempMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_15, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_17;
		L_17 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = __this->get_defaultMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_19));
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_4 = (bool)G_B13_0;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010c;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00ce;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_defaultMaterial_13();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_27;
		L_27 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28;
		L_28 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_27, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_28, 0, /*hidden argument*/NULL);
		goto IL_010b;
	}

IL_00ce:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30;
		L_30 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_29, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_30, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_31;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_010b;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = __this->get_defaultMaterial_13();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_33, L_34);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36;
		L_36 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_35);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
	}

IL_010b:
	{
	}

IL_010c:
	{
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Jelly::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Jelly_OnDisable_m5C9B7FEA452CB4AA61323E9B7CF5E41F39936897 (_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (gameObject.activeSelf && defaultMaterial!=null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_defaultMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 0;
	}

IL_0055:
	{
		V_2 = (bool)G_B7_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_00d5;
		}
	}
	{
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_15;
		L_15 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_14, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_16;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0097;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = defaultMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18;
		L_18 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_defaultMaterial_13();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_18, L_19, /*hidden argument*/NULL);
		// this.GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_20;
		L_20 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21;
		L_21 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_20, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_21, 0, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0097:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_23;
		L_23 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_22, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = __this->get_defaultMaterial_13();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29;
		L_29 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_28);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, 0, /*hidden argument*/NULL);
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Jelly::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Jelly_OnEnable_m3D94E0CBD65E28AF0743455755C92F5047B30483 (_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (this.gameObject.GetComponent<Image> () != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_CanvasImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (CanvasImage==null) CanvasImage = this.gameObject.GetComponent<Image> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		__this->set_CanvasImage_14(L_8);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// if (defaultMaterial == null) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_defaultMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_12;
		L_12 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_13, L_12, /*hidden argument*/NULL);
		__this->set_defaultMaterial_13(L_13);
	}

IL_0060:
	{
		// if (ForceMaterial==null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_ForceMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00f9;
		}
	}
	{
		// ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_17 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_18;
		L_18 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_17, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_19, L_18, /*hidden argument*/NULL);
		__this->set_tempMaterial_12(L_19);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_tempMaterial_12();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_20, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00cb;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = tempMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_tempMaterial_12();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_25, L_26, /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_00cb:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28;
		L_28 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_27, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_29;
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_00f6;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = __this->get_tempMaterial_12();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_31, L_32);
	}

IL_00f6:
	{
		goto IL_0177;
	}

IL_00f9:
	{
		// ForceMaterial.shader=Shader.Find(shader);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_ForceMaterial_4();
		String_t* L_34 = __this->get_shader_6();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_35;
		L_35 = Shader_Find_m01F8D68779D3B0EA219E624443A768392B68B1E0(L_34, /*hidden argument*/NULL);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_33, L_35, /*hidden argument*/NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_ForceMaterial_4();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_36, 0, /*hidden argument*/NULL);
		// if(this.gameObject.GetComponent<SpriteRenderer>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_38;
		L_38 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_37, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_38, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_39;
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_014b;
		}
	}
	{
		// this.GetComponent<Renderer>().sharedMaterial = ForceMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_41;
		L_41 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42 = __this->get_ForceMaterial_4();
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_41, L_42, /*hidden argument*/NULL);
		goto IL_0176;
	}

IL_014b:
	{
		// else if(this.gameObject.GetComponent<Image>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_44;
		L_44 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_43, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_44, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_45;
		bool L_46 = V_7;
		if (!L_46)
		{
			goto IL_0176;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_47 = __this->get_CanvasImage_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48 = __this->get_ForceMaterial_4();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_47, L_48);
	}

IL_0176:
	{
	}

IL_0177:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Jelly::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Jelly__ctor_mB605A95B6CE6974723D611331622911B980DAFC8 (_2dxFX_Jelly_tAD4ABDA2502779851DBF2FE5F50526F2B4A5E5E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C1D39728B6BDA70199CD57CB74792961097EEF4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange=true;
		__this->set_ActiveChange_5((bool)1);
		// private string shader = "2DxFX/Standard/Jelly";
		__this->set_shader_6(_stringLiteral6C1D39728B6BDA70199CD57CB74792961097EEF4);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->set__Alpha_7((1.0f));
		// [HideInInspector] [Range(0.0f, 4f)] public float Heat = 1.0f;
		__this->set_Heat_8((1.0f));
		// [HideInInspector] [Range(  1f, 2f)] public float Inside = 1.1f;
		__this->set_Inside_9((1.10000002f));
		// [HideInInspector] [Range(0.0f, 4f)] public float Speed = 1.0f;
		__this->set_Speed_10((1.0f));
		// [HideInInspector] public int ShaderChange=0;
		__this->set_ShaderChange_11(0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
