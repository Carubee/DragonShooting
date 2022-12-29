#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UDP.ProductInfo>
struct Dictionary_2_t9F14E4A3855699BCAFB348A8B31229BA59597A6B;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UDP.PurchaseInfo>
struct Dictionary_2_t95D4DA4A278797521BF3E1975B837A8CC06D1B68;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.UDP.ProductInfo>
struct IDictionary_2_t109184226C4CE04A4D5E7CAE3EBD04239272D950;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.UDP.PurchaseInfo>
struct IDictionary_2_t9E22A3F7F8A4D23B3A8CED4F47438D28CF97D95A;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.UDP.PurchaseInfo>
struct List_1_tFCDCEEF26E1DA0748B07652864550C5414586CD4;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UDP.PurchaseInfo[]
struct PurchaseInfoU5BU5D_t2216117D17DDB9047F743E1F0754CEBCA0C9D522;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.UDP.AppInfo
struct AppInfo_t6F25142BC3A2D7AD8D1C22ABE485D083F027F2DF;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// GameManager
struct GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.UDP.IInitListener
struct IInitListener_tC07A7468A94A8723A8F481142823DD5AC304C03F;
// UnityEngine.UDP.IPurchaseListener
struct IPurchaseListener_tD884F76CC253771530228F7EB4D35F079F319ADD;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UDP.Inventory
struct Inventory_tBB10A768DA4FDE00983BC4313DD3EE4AFABDF3E6;
// LeanTester
struct LeanTester_tD42BFA66605F78E6EF467D897D39ED4CDE4668D4;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.UDP.ProductInfo
struct ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133;
// UnityEngine.UDP.PurchaseInfo
struct PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// RelationsInspector.Backend.AutoBackend.RelatedAttribute
struct RelatedAttribute_t0C0ED9B9806F2D0CFB94F5B99EA00C5DFA0B2412;
// RelationsInspector.Backend.AutoBackend.RelatingAttribute
struct RelatingAttribute_t1B95944B2D548BF56C14E00D453C61425A1AE77B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.UDP.UserInfo
struct UserInfo_tEF1F89A01964B475306DB45080C99BBC8792D47A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6;
// GameManager/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tF540FA1E40992A5EB6FD808E9CC9082D19483029;
// GameManager/InitListener
struct InitListener_t943CBAE9A3DE2B2AB69F18EED9595B8DE8D32E31;
// GameManager/PurchaseListener
struct PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B;
// LeanTester/<timeoutCheck>d__2
struct U3CtimeoutCheckU3Ed__2_t50BE7F796B937AEAD94DD2B0EDBC61B33C9B5514;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t4F5E3BD6C6414B3F9A934025A44D25F4CFC39E70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8B23E5B439C9A2731A9995A12017ED15C5180756_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t421FF492E8FF2EF1B060B237848E8E8A5B5809BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tFAE0C84048A42712D0836F053195FF9AA9857D56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeanTest_tCAA6F23B1027BDCD7DEF5144D2ACDC0840EDEE6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StoreService_t8D0ED3FEFA033A9CF929B43E2CDA7AE838A2E453_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral002BFD9F25E147D029C2C1C4FD6CFB1B4943EFFF;
IL2CPP_EXTERN_C String_t* _stringLiteral029A11ACF56A0B68D7A32276BBC5B616BE4F9D59;
IL2CPP_EXTERN_C String_t* _stringLiteral1A73BAC099A9FDD13730E30721C52AA22AA86896;
IL2CPP_EXTERN_C String_t* _stringLiteral1BCC09A6BE154F240C8C94BF9F145AD9A74CADF4;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral337E24A93702082CA80CEF021BFC34DEFE8B5634;
IL2CPP_EXTERN_C String_t* _stringLiteral37A7F50F0B638EEBDE8D70E1A9B52D991143386E;
IL2CPP_EXTERN_C String_t* _stringLiteral38F4515DDA186E78FD0D8D6B6DA0EC7A245ECD44;
IL2CPP_EXTERN_C String_t* _stringLiteral3C5EA2F6EFFD82311C11121AD44AE63BA8354376;
IL2CPP_EXTERN_C String_t* _stringLiteral452111D336515F857FA8480AC56F8C5F684F2559;
IL2CPP_EXTERN_C String_t* _stringLiteral4AA75CD8D840114C171D186E5D01BC23418C331E;
IL2CPP_EXTERN_C String_t* _stringLiteral53D2D86526148B6E6C60E2769759D206312DC639;
IL2CPP_EXTERN_C String_t* _stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02;
IL2CPP_EXTERN_C String_t* _stringLiteral594B85CB961E17F7430C4D75614DC7D9C38A239E;
IL2CPP_EXTERN_C String_t* _stringLiteral5BD8EC3D4C41CF57AE57F8EAF6D34AE2CDC161BC;
IL2CPP_EXTERN_C String_t* _stringLiteral5CDCD3ACBFB1D724491D4562C0B7619DAD26FA2F;
IL2CPP_EXTERN_C String_t* _stringLiteral734F39F21A558E7EF51DCA413BB2B2FC29B22AF0;
IL2CPP_EXTERN_C String_t* _stringLiteral734FB8B61921891DEC2D6D4C8FEE9ABF0B388964;
IL2CPP_EXTERN_C String_t* _stringLiteral761601AA45498A7010C274E36AE11129F62D56C4;
IL2CPP_EXTERN_C String_t* _stringLiteral804198904F8C1674D80BBD3A697271E8DF3AA846;
IL2CPP_EXTERN_C String_t* _stringLiteral817D1EF0B02ACE8CC6992EC383DEF6AC2F074275;
IL2CPP_EXTERN_C String_t* _stringLiteral90B938CCC0C9081822A8F6F0118CA6F04D2B8828;
IL2CPP_EXTERN_C String_t* _stringLiteralA894FF40AE84794C68A71D0E10D64E73E4C0E16B;
IL2CPP_EXTERN_C String_t* _stringLiteralAA71D40EA4B7EA4E89438220A1916AF45A5469FB;
IL2CPP_EXTERN_C String_t* _stringLiteralACDD223A83CCB65F90E7012FF5FC49DCE64C8513;
IL2CPP_EXTERN_C String_t* _stringLiteralADC1463F0951585C93B22720EBD05967309DA5EA;
IL2CPP_EXTERN_C String_t* _stringLiteralBBA1AAB1ECF70595E73247DC5C16F1F878B1EA94;
IL2CPP_EXTERN_C String_t* _stringLiteralC6BAE7977612DE2746D1D6954715B42BD9CA3B65;
IL2CPP_EXTERN_C String_t* _stringLiteralCE851E6E68185EB46071C250D92249CACD681FDA;
IL2CPP_EXTERN_C String_t* _stringLiteralDB61D814F99D5CDCFBBD4E0B79429AEB528CE00B;
IL2CPP_EXTERN_C String_t* _stringLiteralE13634B258706112A3DFDF17C461D0E2EE7293D9;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D255FB33D3EB2113283F155E1491A224299878;
IL2CPP_EXTERN_C String_t* _stringLiteralEFB356A915A161FCC6E252A3196747FCBBDB0133;
IL2CPP_EXTERN_C String_t* _stringLiteralF36CBD4535537248CDD581FC3F278E99AB4347AC;
IL2CPP_EXTERN_C String_t* _stringLiteralF52249FB2CFECED67368FDFBCF2039BAB717B670;
IL2CPP_EXTERN_C String_t* _stringLiteralFB189E25C5704ECFCEE2BAB004F920F62A66A453;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m2FBFCD6A51A53FE84C8ACE76C8118AF3BBE7F88D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mCA6E11BD0BD95C4A7DCFBB03E8ED11F308991B9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mE20E4E259C4A11ECC52AEC27A622122AE22ED772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m72E8F73F28BD7C51D0DEF1CCDC2BE544BB7A9681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PurchaseListener_OnPurchaseRepeated_m8D3C9C99B9CDBDBF0E6D701A5CE626B32B8B6DC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CtimeoutCheckU3Ed__2_System_Collections_IEnumerator_Reset_m69AF8396CEAE94CC3357615718AF57B18168D63E_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Boolean>
struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____items_1)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__items_1() const { return ____items_1; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_StaticFields, ____emptyArray_5)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
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


// System.Collections.Generic.List`1<UnityEngine.UDP.PurchaseInfo>
struct List_1_tFCDCEEF26E1DA0748B07652864550C5414586CD4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PurchaseInfoU5BU5D_t2216117D17DDB9047F743E1F0754CEBCA0C9D522* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCDCEEF26E1DA0748B07652864550C5414586CD4, ____items_1)); }
	inline PurchaseInfoU5BU5D_t2216117D17DDB9047F743E1F0754CEBCA0C9D522* get__items_1() const { return ____items_1; }
	inline PurchaseInfoU5BU5D_t2216117D17DDB9047F743E1F0754CEBCA0C9D522** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PurchaseInfoU5BU5D_t2216117D17DDB9047F743E1F0754CEBCA0C9D522* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCDCEEF26E1DA0748B07652864550C5414586CD4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCDCEEF26E1DA0748B07652864550C5414586CD4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCDCEEF26E1DA0748B07652864550C5414586CD4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCDCEEF26E1DA0748B07652864550C5414586CD4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PurchaseInfoU5BU5D_t2216117D17DDB9047F743E1F0754CEBCA0C9D522* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCDCEEF26E1DA0748B07652864550C5414586CD4_StaticFields, ____emptyArray_5)); }
	inline PurchaseInfoU5BU5D_t2216117D17DDB9047F743E1F0754CEBCA0C9D522* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PurchaseInfoU5BU5D_t2216117D17DDB9047F743E1F0754CEBCA0C9D522** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PurchaseInfoU5BU5D_t2216117D17DDB9047F743E1F0754CEBCA0C9D522* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____items_1)); }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* get__items_1() const { return ____items_1; }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_StaticFields, ____emptyArray_5)); }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.UDP.AppInfo
struct AppInfo_t6F25142BC3A2D7AD8D1C22ABE485D083F027F2DF  : public RuntimeObject
{
public:
	// System.String UnityEngine.UDP.AppInfo::<ClientId>k__BackingField
	String_t* ___U3CClientIdU3Ek__BackingField_0;
	// System.String UnityEngine.UDP.AppInfo::<AppSlug>k__BackingField
	String_t* ___U3CAppSlugU3Ek__BackingField_1;
	// System.String UnityEngine.UDP.AppInfo::<ClientKey>k__BackingField
	String_t* ___U3CClientKeyU3Ek__BackingField_2;
	// System.String UnityEngine.UDP.AppInfo::<RSAPublicKey>k__BackingField
	String_t* ___U3CRSAPublicKeyU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CClientIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppInfo_t6F25142BC3A2D7AD8D1C22ABE485D083F027F2DF, ___U3CClientIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CClientIdU3Ek__BackingField_0() const { return ___U3CClientIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CClientIdU3Ek__BackingField_0() { return &___U3CClientIdU3Ek__BackingField_0; }
	inline void set_U3CClientIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CClientIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppSlugU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppInfo_t6F25142BC3A2D7AD8D1C22ABE485D083F027F2DF, ___U3CAppSlugU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppSlugU3Ek__BackingField_1() const { return ___U3CAppSlugU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppSlugU3Ek__BackingField_1() { return &___U3CAppSlugU3Ek__BackingField_1; }
	inline void set_U3CAppSlugU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppSlugU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppSlugU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClientKeyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppInfo_t6F25142BC3A2D7AD8D1C22ABE485D083F027F2DF, ___U3CClientKeyU3Ek__BackingField_2)); }
	inline String_t* get_U3CClientKeyU3Ek__BackingField_2() const { return ___U3CClientKeyU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CClientKeyU3Ek__BackingField_2() { return &___U3CClientKeyU3Ek__BackingField_2; }
	inline void set_U3CClientKeyU3Ek__BackingField_2(String_t* value)
	{
		___U3CClientKeyU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientKeyU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRSAPublicKeyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppInfo_t6F25142BC3A2D7AD8D1C22ABE485D083F027F2DF, ___U3CRSAPublicKeyU3Ek__BackingField_3)); }
	inline String_t* get_U3CRSAPublicKeyU3Ek__BackingField_3() const { return ___U3CRSAPublicKeyU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CRSAPublicKeyU3Ek__BackingField_3() { return &___U3CRSAPublicKeyU3Ek__BackingField_3; }
	inline void set_U3CRSAPublicKeyU3Ek__BackingField_3(String_t* value)
	{
		___U3CRSAPublicKeyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRSAPublicKeyU3Ek__BackingField_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UDP.Inventory
struct Inventory_tBB10A768DA4FDE00983BC4313DD3EE4AFABDF3E6  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UDP.PurchaseInfo> UnityEngine.UDP.Inventory::_purchaseDictionary
	Dictionary_2_t95D4DA4A278797521BF3E1975B837A8CC06D1B68 * ____purchaseDictionary_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UDP.ProductInfo> UnityEngine.UDP.Inventory::_productDictionary
	Dictionary_2_t9F14E4A3855699BCAFB348A8B31229BA59597A6B * ____productDictionary_1;

public:
	inline static int32_t get_offset_of__purchaseDictionary_0() { return static_cast<int32_t>(offsetof(Inventory_tBB10A768DA4FDE00983BC4313DD3EE4AFABDF3E6, ____purchaseDictionary_0)); }
	inline Dictionary_2_t95D4DA4A278797521BF3E1975B837A8CC06D1B68 * get__purchaseDictionary_0() const { return ____purchaseDictionary_0; }
	inline Dictionary_2_t95D4DA4A278797521BF3E1975B837A8CC06D1B68 ** get_address_of__purchaseDictionary_0() { return &____purchaseDictionary_0; }
	inline void set__purchaseDictionary_0(Dictionary_2_t95D4DA4A278797521BF3E1975B837A8CC06D1B68 * value)
	{
		____purchaseDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____purchaseDictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of__productDictionary_1() { return static_cast<int32_t>(offsetof(Inventory_tBB10A768DA4FDE00983BC4313DD3EE4AFABDF3E6, ____productDictionary_1)); }
	inline Dictionary_2_t9F14E4A3855699BCAFB348A8B31229BA59597A6B * get__productDictionary_1() const { return ____productDictionary_1; }
	inline Dictionary_2_t9F14E4A3855699BCAFB348A8B31229BA59597A6B ** get_address_of__productDictionary_1() { return &____productDictionary_1; }
	inline void set__productDictionary_1(Dictionary_2_t9F14E4A3855699BCAFB348A8B31229BA59597A6B * value)
	{
		____productDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____productDictionary_1), (void*)value);
	}
};


// LeanTest
struct LeanTest_tCAA6F23B1027BDCD7DEF5144D2ACDC0840EDEE6E  : public RuntimeObject
{
public:

public:
};

struct LeanTest_tCAA6F23B1027BDCD7DEF5144D2ACDC0840EDEE6E_StaticFields
{
public:
	// System.Int32 LeanTest::expected
	int32_t ___expected_0;
	// System.Int32 LeanTest::tests
	int32_t ___tests_1;
	// System.Int32 LeanTest::passes
	int32_t ___passes_2;
	// System.Single LeanTest::timeout
	float ___timeout_3;
	// System.Boolean LeanTest::timeoutStarted
	bool ___timeoutStarted_4;
	// System.Boolean LeanTest::testsFinished
	bool ___testsFinished_5;

public:
	inline static int32_t get_offset_of_expected_0() { return static_cast<int32_t>(offsetof(LeanTest_tCAA6F23B1027BDCD7DEF5144D2ACDC0840EDEE6E_StaticFields, ___expected_0)); }
	inline int32_t get_expected_0() const { return ___expected_0; }
	inline int32_t* get_address_of_expected_0() { return &___expected_0; }
	inline void set_expected_0(int32_t value)
	{
		___expected_0 = value;
	}

	inline static int32_t get_offset_of_tests_1() { return static_cast<int32_t>(offsetof(LeanTest_tCAA6F23B1027BDCD7DEF5144D2ACDC0840EDEE6E_StaticFields, ___tests_1)); }
	inline int32_t get_tests_1() const { return ___tests_1; }
	inline int32_t* get_address_of_tests_1() { return &___tests_1; }
	inline void set_tests_1(int32_t value)
	{
		___tests_1 = value;
	}

	inline static int32_t get_offset_of_passes_2() { return static_cast<int32_t>(offsetof(LeanTest_tCAA6F23B1027BDCD7DEF5144D2ACDC0840EDEE6E_StaticFields, ___passes_2)); }
	inline int32_t get_passes_2() const { return ___passes_2; }
	inline int32_t* get_address_of_passes_2() { return &___passes_2; }
	inline void set_passes_2(int32_t value)
	{
		___passes_2 = value;
	}

	inline static int32_t get_offset_of_timeout_3() { return static_cast<int32_t>(offsetof(LeanTest_tCAA6F23B1027BDCD7DEF5144D2ACDC0840EDEE6E_StaticFields, ___timeout_3)); }
	inline float get_timeout_3() const { return ___timeout_3; }
	inline float* get_address_of_timeout_3() { return &___timeout_3; }
	inline void set_timeout_3(float value)
	{
		___timeout_3 = value;
	}

	inline static int32_t get_offset_of_timeoutStarted_4() { return static_cast<int32_t>(offsetof(LeanTest_tCAA6F23B1027BDCD7DEF5144D2ACDC0840EDEE6E_StaticFields, ___timeoutStarted_4)); }
	inline bool get_timeoutStarted_4() const { return ___timeoutStarted_4; }
	inline bool* get_address_of_timeoutStarted_4() { return &___timeoutStarted_4; }
	inline void set_timeoutStarted_4(bool value)
	{
		___timeoutStarted_4 = value;
	}

	inline static int32_t get_offset_of_testsFinished_5() { return static_cast<int32_t>(offsetof(LeanTest_tCAA6F23B1027BDCD7DEF5144D2ACDC0840EDEE6E_StaticFields, ___testsFinished_5)); }
	inline bool get_testsFinished_5() const { return ___testsFinished_5; }
	inline bool* get_address_of_testsFinished_5() { return &___testsFinished_5; }
	inline void set_testsFinished_5(bool value)
	{
		___testsFinished_5 = value;
	}
};


// UnityEngine.UDP.PurchaseInfo
struct PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB  : public RuntimeObject
{
public:
	// System.String UnityEngine.UDP.PurchaseInfo::<ItemType>k__BackingField
	String_t* ___U3CItemTypeU3Ek__BackingField_0;
	// System.String UnityEngine.UDP.PurchaseInfo::<ProductId>k__BackingField
	String_t* ___U3CProductIdU3Ek__BackingField_1;
	// System.String UnityEngine.UDP.PurchaseInfo::<GameOrderId>k__BackingField
	String_t* ___U3CGameOrderIdU3Ek__BackingField_2;
	// System.String UnityEngine.UDP.PurchaseInfo::<OrderQueryToken>k__BackingField
	String_t* ___U3COrderQueryTokenU3Ek__BackingField_3;
	// System.String UnityEngine.UDP.PurchaseInfo::<DeveloperPayload>k__BackingField
	String_t* ___U3CDeveloperPayloadU3Ek__BackingField_4;
	// System.String UnityEngine.UDP.PurchaseInfo::<StorePurchaseJsonString>k__BackingField
	String_t* ___U3CStorePurchaseJsonStringU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CItemTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB, ___U3CItemTypeU3Ek__BackingField_0)); }
	inline String_t* get_U3CItemTypeU3Ek__BackingField_0() const { return ___U3CItemTypeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CItemTypeU3Ek__BackingField_0() { return &___U3CItemTypeU3Ek__BackingField_0; }
	inline void set_U3CItemTypeU3Ek__BackingField_0(String_t* value)
	{
		___U3CItemTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProductIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB, ___U3CProductIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CProductIdU3Ek__BackingField_1() const { return ___U3CProductIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CProductIdU3Ek__BackingField_1() { return &___U3CProductIdU3Ek__BackingField_1; }
	inline void set_U3CProductIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CProductIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProductIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameOrderIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB, ___U3CGameOrderIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CGameOrderIdU3Ek__BackingField_2() const { return ___U3CGameOrderIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CGameOrderIdU3Ek__BackingField_2() { return &___U3CGameOrderIdU3Ek__BackingField_2; }
	inline void set_U3CGameOrderIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CGameOrderIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameOrderIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrderQueryTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB, ___U3COrderQueryTokenU3Ek__BackingField_3)); }
	inline String_t* get_U3COrderQueryTokenU3Ek__BackingField_3() const { return ___U3COrderQueryTokenU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3COrderQueryTokenU3Ek__BackingField_3() { return &___U3COrderQueryTokenU3Ek__BackingField_3; }
	inline void set_U3COrderQueryTokenU3Ek__BackingField_3(String_t* value)
	{
		___U3COrderQueryTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COrderQueryTokenU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDeveloperPayloadU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB, ___U3CDeveloperPayloadU3Ek__BackingField_4)); }
	inline String_t* get_U3CDeveloperPayloadU3Ek__BackingField_4() const { return ___U3CDeveloperPayloadU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CDeveloperPayloadU3Ek__BackingField_4() { return &___U3CDeveloperPayloadU3Ek__BackingField_4; }
	inline void set_U3CDeveloperPayloadU3Ek__BackingField_4(String_t* value)
	{
		___U3CDeveloperPayloadU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeveloperPayloadU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStorePurchaseJsonStringU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB, ___U3CStorePurchaseJsonStringU3Ek__BackingField_5)); }
	inline String_t* get_U3CStorePurchaseJsonStringU3Ek__BackingField_5() const { return ___U3CStorePurchaseJsonStringU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CStorePurchaseJsonStringU3Ek__BackingField_5() { return &___U3CStorePurchaseJsonStringU3Ek__BackingField_5; }
	inline void set_U3CStorePurchaseJsonStringU3Ek__BackingField_5(String_t* value)
	{
		___U3CStorePurchaseJsonStringU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStorePurchaseJsonStringU3Ek__BackingField_5), (void*)value);
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


// UnityEngine.UDP.UserInfo
struct UserInfo_tEF1F89A01964B475306DB45080C99BBC8792D47A  : public RuntimeObject
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

// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857  : public RuntimeObject
{
public:
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Image_1;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857, ___m_Image_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Image_1() const { return ___m_Image_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}
};


// GameManager/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tF540FA1E40992A5EB6FD808E9CC9082D19483029  : public RuntimeObject
{
public:
	// GameManager GameManager/<>c__DisplayClass13_0::<>4__this
	GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97 * ___U3CU3E4__this_0;
	// System.Collections.Generic.List`1<System.String> GameManager/<>c__DisplayClass13_0::productIds
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___productIds_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tF540FA1E40992A5EB6FD808E9CC9082D19483029, ___U3CU3E4__this_0)); }
	inline GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_productIds_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tF540FA1E40992A5EB6FD808E9CC9082D19483029, ___productIds_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_productIds_1() const { return ___productIds_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_productIds_1() { return &___productIds_1; }
	inline void set_productIds_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___productIds_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___productIds_1), (void*)value);
	}
};


// GameManager/InitListener
struct InitListener_t943CBAE9A3DE2B2AB69F18EED9595B8DE8D32E31  : public RuntimeObject
{
public:

public:
};


// GameManager/PurchaseListener
struct PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B  : public RuntimeObject
{
public:

public:
};


// LeanTester/<timeoutCheck>d__2
struct U3CtimeoutCheckU3Ed__2_t50BE7F796B937AEAD94DD2B0EDBC61B33C9B5514  : public RuntimeObject
{
public:
	// System.Int32 LeanTester/<timeoutCheck>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LeanTester/<timeoutCheck>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// LeanTester LeanTester/<timeoutCheck>d__2::<>4__this
	LeanTester_tD42BFA66605F78E6EF467D897D39ED4CDE4668D4 * ___U3CU3E4__this_2;
	// System.Single LeanTester/<timeoutCheck>d__2::<pauseEndTime>5__2
	float ___U3CpauseEndTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CtimeoutCheckU3Ed__2_t50BE7F796B937AEAD94DD2B0EDBC61B33C9B5514, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CtimeoutCheckU3Ed__2_t50BE7F796B937AEAD94DD2B0EDBC61B33C9B5514, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CtimeoutCheckU3Ed__2_t50BE7F796B937AEAD94DD2B0EDBC61B33C9B5514, ___U3CU3E4__this_2)); }
	inline LeanTester_tD42BFA66605F78E6EF467D897D39ED4CDE4668D4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LeanTester_tD42BFA66605F78E6EF467D897D39ED4CDE4668D4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LeanTester_tD42BFA66605F78E6EF467D897D39ED4CDE4668D4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpauseEndTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CtimeoutCheckU3Ed__2_t50BE7F796B937AEAD94DD2B0EDBC61B33C9B5514, ___U3CpauseEndTimeU3E5__2_3)); }
	inline float get_U3CpauseEndTimeU3E5__2_3() const { return ___U3CpauseEndTimeU3E5__2_3; }
	inline float* get_address_of_U3CpauseEndTimeU3E5__2_3() { return &___U3CpauseEndTimeU3E5__2_3; }
	inline void set_U3CpauseEndTimeU3E5__2_3(float value)
	{
		___U3CpauseEndTimeU3E5__2_3 = value;
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


// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UDP.ProductInfo>
struct KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D, ___value_1)); }
	inline ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * get_value_1() const { return ___value_1; }
	inline ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UDP.PurchaseInfo>
struct KeyValuePair_2_t8E9947DA599543BC6F17EDD9E59082A61949C164 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t8E9947DA599543BC6F17EDD9E59082A61949C164, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t8E9947DA599543BC6F17EDD9E59082A61949C164, ___value_1)); }
	inline PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * get_value_1() const { return ___value_1; }
	inline PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// RelationsInspector.Backend.AutoBackend.RelatedAttribute
struct RelatedAttribute_t0C0ED9B9806F2D0CFB94F5B99EA00C5DFA0B2412  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// RelationsInspector.Backend.AutoBackend.RelatingAttribute
struct RelatingAttribute_t1B95944B2D548BF56C14E00D453C61425A1AE77B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
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


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
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

// LeanTweenType
struct LeanTweenType_tC5C8899D7C9AE5CD17A04FF085029252C62AE9B3 
{
public:
	// System.Int32 LeanTweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeanTweenType_tC5C8899D7C9AE5CD17A04FF085029252C62AE9B3, ___value___2)); }
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

// UnityEngine.UDP.ProductInfo
struct ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133  : public RuntimeObject
{
public:
	// System.String UnityEngine.UDP.ProductInfo::<ItemType>k__BackingField
	String_t* ___U3CItemTypeU3Ek__BackingField_0;
	// System.String UnityEngine.UDP.ProductInfo::<ProductId>k__BackingField
	String_t* ___U3CProductIdU3Ek__BackingField_1;
	// System.Nullable`1<System.Boolean> UnityEngine.UDP.ProductInfo::<Consumable>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CConsumableU3Ek__BackingField_2;
	// System.String UnityEngine.UDP.ProductInfo::<Price>k__BackingField
	String_t* ___U3CPriceU3Ek__BackingField_3;
	// System.Int64 UnityEngine.UDP.ProductInfo::<PriceAmountMicros>k__BackingField
	int64_t ___U3CPriceAmountMicrosU3Ek__BackingField_4;
	// System.String UnityEngine.UDP.ProductInfo::<Currency>k__BackingField
	String_t* ___U3CCurrencyU3Ek__BackingField_5;
	// System.String UnityEngine.UDP.ProductInfo::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_6;
	// System.String UnityEngine.UDP.ProductInfo::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CItemTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133, ___U3CItemTypeU3Ek__BackingField_0)); }
	inline String_t* get_U3CItemTypeU3Ek__BackingField_0() const { return ___U3CItemTypeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CItemTypeU3Ek__BackingField_0() { return &___U3CItemTypeU3Ek__BackingField_0; }
	inline void set_U3CItemTypeU3Ek__BackingField_0(String_t* value)
	{
		___U3CItemTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProductIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133, ___U3CProductIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CProductIdU3Ek__BackingField_1() const { return ___U3CProductIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CProductIdU3Ek__BackingField_1() { return &___U3CProductIdU3Ek__BackingField_1; }
	inline void set_U3CProductIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CProductIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProductIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConsumableU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133, ___U3CConsumableU3Ek__BackingField_2)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CConsumableU3Ek__BackingField_2() const { return ___U3CConsumableU3Ek__BackingField_2; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CConsumableU3Ek__BackingField_2() { return &___U3CConsumableU3Ek__BackingField_2; }
	inline void set_U3CConsumableU3Ek__BackingField_2(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CConsumableU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CPriceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133, ___U3CPriceU3Ek__BackingField_3)); }
	inline String_t* get_U3CPriceU3Ek__BackingField_3() const { return ___U3CPriceU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CPriceU3Ek__BackingField_3() { return &___U3CPriceU3Ek__BackingField_3; }
	inline void set_U3CPriceU3Ek__BackingField_3(String_t* value)
	{
		___U3CPriceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPriceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriceAmountMicrosU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133, ___U3CPriceAmountMicrosU3Ek__BackingField_4)); }
	inline int64_t get_U3CPriceAmountMicrosU3Ek__BackingField_4() const { return ___U3CPriceAmountMicrosU3Ek__BackingField_4; }
	inline int64_t* get_address_of_U3CPriceAmountMicrosU3Ek__BackingField_4() { return &___U3CPriceAmountMicrosU3Ek__BackingField_4; }
	inline void set_U3CPriceAmountMicrosU3Ek__BackingField_4(int64_t value)
	{
		___U3CPriceAmountMicrosU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CCurrencyU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133, ___U3CCurrencyU3Ek__BackingField_5)); }
	inline String_t* get_U3CCurrencyU3Ek__BackingField_5() const { return ___U3CCurrencyU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CCurrencyU3Ek__BackingField_5() { return &___U3CCurrencyU3Ek__BackingField_5; }
	inline void set_U3CCurrencyU3Ek__BackingField_5(String_t* value)
	{
		___U3CCurrencyU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrencyU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTitleU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133, ___U3CTitleU3Ek__BackingField_6)); }
	inline String_t* get_U3CTitleU3Ek__BackingField_6() const { return ___U3CTitleU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CTitleU3Ek__BackingField_6() { return &___U3CTitleU3Ek__BackingField_6; }
	inline void set_U3CTitleU3Ek__BackingField_6(String_t* value)
	{
		___U3CTitleU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTitleU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133, ___U3CDescriptionU3Ek__BackingField_7)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_7() const { return ___U3CDescriptionU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_7() { return &___U3CDescriptionU3Ek__BackingField_7; }
	inline void set_U3CDescriptionU3Ek__BackingField_7(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDescriptionU3Ek__BackingField_7), (void*)value);
	}
};


// TweenAction
struct TweenAction_t56FA8707DB8AEA2175989B27EF3459FED250F339 
{
public:
	// System.Int32 TweenAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenAction_t56FA8707DB8AEA2175989B27EF3459FED250F339, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LTGUI/Element_Type
struct Element_Type_t0C1A5DB6894A8DD65E404FBA87FD25DC64F679E5 
{
public:
	// System.Int32 LTGUI/Element_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Element_Type_t0C1A5DB6894A8DD65E404FBA87FD25DC64F679E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
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


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// GameManager
struct GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String GameManager::Product1
	String_t* ___Product1_4;
	// System.String GameManager::Product2
	String_t* ___Product2_5;
	// UnityEngine.UI.Dropdown GameManager::_dropdown
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ____dropdown_8;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> GameManager::options
	List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * ___options_9;
	// GameManager/PurchaseListener GameManager::purchaseListener
	PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B * ___purchaseListener_12;
	// GameManager/InitListener GameManager::initListener
	InitListener_t943CBAE9A3DE2B2AB69F18EED9595B8DE8D32E31 * ___initListener_13;
	// UnityEngine.UDP.AppInfo GameManager::appInfo
	AppInfo_t6F25142BC3A2D7AD8D1C22ABE485D083F027F2DF * ___appInfo_14;

public:
	inline static int32_t get_offset_of_Product1_4() { return static_cast<int32_t>(offsetof(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97, ___Product1_4)); }
	inline String_t* get_Product1_4() const { return ___Product1_4; }
	inline String_t** get_address_of_Product1_4() { return &___Product1_4; }
	inline void set_Product1_4(String_t* value)
	{
		___Product1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Product1_4), (void*)value);
	}

	inline static int32_t get_offset_of_Product2_5() { return static_cast<int32_t>(offsetof(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97, ___Product2_5)); }
	inline String_t* get_Product2_5() const { return ___Product2_5; }
	inline String_t** get_address_of_Product2_5() { return &___Product2_5; }
	inline void set_Product2_5(String_t* value)
	{
		___Product2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Product2_5), (void*)value);
	}

	inline static int32_t get_offset_of__dropdown_8() { return static_cast<int32_t>(offsetof(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97, ____dropdown_8)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get__dropdown_8() const { return ____dropdown_8; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of__dropdown_8() { return &____dropdown_8; }
	inline void set__dropdown_8(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		____dropdown_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dropdown_8), (void*)value);
	}

	inline static int32_t get_offset_of_options_9() { return static_cast<int32_t>(offsetof(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97, ___options_9)); }
	inline List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * get_options_9() const { return ___options_9; }
	inline List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 ** get_address_of_options_9() { return &___options_9; }
	inline void set_options_9(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * value)
	{
		___options_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_9), (void*)value);
	}

	inline static int32_t get_offset_of_purchaseListener_12() { return static_cast<int32_t>(offsetof(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97, ___purchaseListener_12)); }
	inline PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B * get_purchaseListener_12() const { return ___purchaseListener_12; }
	inline PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B ** get_address_of_purchaseListener_12() { return &___purchaseListener_12; }
	inline void set_purchaseListener_12(PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B * value)
	{
		___purchaseListener_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___purchaseListener_12), (void*)value);
	}

	inline static int32_t get_offset_of_initListener_13() { return static_cast<int32_t>(offsetof(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97, ___initListener_13)); }
	inline InitListener_t943CBAE9A3DE2B2AB69F18EED9595B8DE8D32E31 * get_initListener_13() const { return ___initListener_13; }
	inline InitListener_t943CBAE9A3DE2B2AB69F18EED9595B8DE8D32E31 ** get_address_of_initListener_13() { return &___initListener_13; }
	inline void set_initListener_13(InitListener_t943CBAE9A3DE2B2AB69F18EED9595B8DE8D32E31 * value)
	{
		___initListener_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initListener_13), (void*)value);
	}

	inline static int32_t get_offset_of_appInfo_14() { return static_cast<int32_t>(offsetof(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97, ___appInfo_14)); }
	inline AppInfo_t6F25142BC3A2D7AD8D1C22ABE485D083F027F2DF * get_appInfo_14() const { return ___appInfo_14; }
	inline AppInfo_t6F25142BC3A2D7AD8D1C22ABE485D083F027F2DF ** get_address_of_appInfo_14() { return &___appInfo_14; }
	inline void set_appInfo_14(AppInfo_t6F25142BC3A2D7AD8D1C22ABE485D083F027F2DF * value)
	{
		___appInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appInfo_14), (void*)value);
	}
};

struct GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields
{
public:
	// System.Boolean GameManager::m_consumeOnPurchase
	bool ___m_consumeOnPurchase_6;
	// System.Boolean GameManager::_consumeOnQuery
	bool ____consumeOnQuery_7;
	// UnityEngine.UI.Text GameManager::_textField
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____textField_10;
	// System.Boolean GameManager::_initialized
	bool ____initialized_11;

public:
	inline static int32_t get_offset_of_m_consumeOnPurchase_6() { return static_cast<int32_t>(offsetof(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields, ___m_consumeOnPurchase_6)); }
	inline bool get_m_consumeOnPurchase_6() const { return ___m_consumeOnPurchase_6; }
	inline bool* get_address_of_m_consumeOnPurchase_6() { return &___m_consumeOnPurchase_6; }
	inline void set_m_consumeOnPurchase_6(bool value)
	{
		___m_consumeOnPurchase_6 = value;
	}

	inline static int32_t get_offset_of__consumeOnQuery_7() { return static_cast<int32_t>(offsetof(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields, ____consumeOnQuery_7)); }
	inline bool get__consumeOnQuery_7() const { return ____consumeOnQuery_7; }
	inline bool* get_address_of__consumeOnQuery_7() { return &____consumeOnQuery_7; }
	inline void set__consumeOnQuery_7(bool value)
	{
		____consumeOnQuery_7 = value;
	}

	inline static int32_t get_offset_of__textField_10() { return static_cast<int32_t>(offsetof(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields, ____textField_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__textField_10() const { return ____textField_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__textField_10() { return &____textField_10; }
	inline void set__textField_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____textField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____textField_10), (void*)value);
	}

	inline static int32_t get_offset_of__initialized_11() { return static_cast<int32_t>(offsetof(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields, ____initialized_11)); }
	inline bool get__initialized_11() const { return ____initialized_11; }
	inline bool* get_address_of__initialized_11() { return &____initialized_11; }
	inline void set__initialized_11(bool value)
	{
		____initialized_11 = value;
	}
};


// LeanTester
struct LeanTester_tD42BFA66605F78E6EF467D897D39ED4CDE4668D4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single LeanTester::timeout
	float ___timeout_4;

public:
	inline static int32_t get_offset_of_timeout_4() { return static_cast<int32_t>(offsetof(LeanTester_tD42BFA66605F78E6EF467D897D39ED4CDE4668D4, ___timeout_4)); }
	inline float get_timeout_4() const { return ___timeout_4; }
	inline float* get_address_of_timeout_4() { return &___timeout_4; }
	inline void set_timeout_4(float value)
	{
		___timeout_4 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;

public:
	inline static int32_t get_offset_of_m_Template_20() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Template_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Template_20() const { return ___m_Template_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Template_20() { return &___m_Template_20; }
	inline void set_m_Template_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Template_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Template_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionText_21() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CaptionText_21() const { return ___m_CaptionText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CaptionText_21() { return &___m_CaptionText_21; }
	inline void set_m_CaptionText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CaptionText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionText_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_22() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionImage_22)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_CaptionImage_22() const { return ___m_CaptionImage_22; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_CaptionImage_22() { return &___m_CaptionImage_22; }
	inline void set_m_CaptionImage_22(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_CaptionImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionImage_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemText_23() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_ItemText_23() const { return ___m_ItemText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_ItemText_23() { return &___m_ItemText_23; }
	inline void set_m_ItemText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_ItemText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemImage_24() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemImage_24)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ItemImage_24() const { return ___m_ItemImage_24; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ItemImage_24() { return &___m_ItemImage_24; }
	inline void set_m_ItemImage_24(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ItemImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Value_25)); }
	inline int32_t get_m_Value_25() const { return ___m_Value_25; }
	inline int32_t* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(int32_t value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_Options_26() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Options_26)); }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * get_m_Options_26() const { return ___m_Options_26; }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 ** get_address_of_m_Options_26() { return &___m_Options_26; }
	inline void set_m_Options_26(OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * value)
	{
		___m_Options_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_OnValueChanged_27)); }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaFadeSpeed_28() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaFadeSpeed_28)); }
	inline float get_m_AlphaFadeSpeed_28() const { return ___m_AlphaFadeSpeed_28; }
	inline float* get_address_of_m_AlphaFadeSpeed_28() { return &___m_AlphaFadeSpeed_28; }
	inline void set_m_AlphaFadeSpeed_28(float value)
	{
		___m_AlphaFadeSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_Dropdown_29() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Dropdown_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Dropdown_29() const { return ___m_Dropdown_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Dropdown_29() { return &___m_Dropdown_29; }
	inline void set_m_Dropdown_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Dropdown_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dropdown_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Blocker_30() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Blocker_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Blocker_30() const { return ___m_Blocker_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Blocker_30() { return &___m_Blocker_30; }
	inline void set_m_Blocker_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Blocker_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Blocker_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_Items_31() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Items_31)); }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * get_m_Items_31() const { return ___m_Items_31; }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 ** get_address_of_m_Items_31() { return &___m_Items_31; }
	inline void set_m_Items_31(List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * value)
	{
		___m_Items_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_32() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaTweenRunner_32)); }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * get_m_AlphaTweenRunner_32() const { return ___m_AlphaTweenRunner_32; }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D ** get_address_of_m_AlphaTweenRunner_32() { return &___m_AlphaTweenRunner_32; }
	inline void set_m_AlphaTweenRunner_32(TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * value)
	{
		___m_AlphaTweenRunner_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlphaTweenRunner_32), (void*)value);
	}

	inline static int32_t get_offset_of_validTemplate_33() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___validTemplate_33)); }
	inline bool get_validTemplate_33() const { return ___validTemplate_33; }
	inline bool* get_address_of_validTemplate_33() { return &___validTemplate_33; }
	inline void set_validTemplate_33(bool value)
	{
		___validTemplate_33 = value;
	}
};

struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___s_NoOptionData_35;

public:
	inline static int32_t get_offset_of_s_NoOptionData_35() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields, ___s_NoOptionData_35)); }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * get_s_NoOptionData_35() const { return ___s_NoOptionData_35; }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 ** get_address_of_s_NoOptionData_35() { return &___s_NoOptionData_35; }
	inline void set_s_NoOptionData_35(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * value)
	{
		___s_NoOptionData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NoOptionData_35), (void*)value);
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
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_gshared_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Boolean>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_gshared_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void GameManager::Show(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27 (String_t* ___message0, bool ___append1, const RuntimeMethod* method);
// System.Void UnityEngine.UDP.StoreService::Initialize(UnityEngine.UDP.IInitListener,UnityEngine.UDP.AppInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreService_Initialize_m60AABA44B65C955168C59F18B36B2822D41B4617 (RuntimeObject* ___listener0, AppInfo_t6F25142BC3A2D7AD8D1C22ABE485D083F027F2DF * ___appInfo1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0 (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::get_Item(System.Int32)
inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * (*) (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String UnityEngine.UI.Dropdown/OptionData::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.UDP.StoreService::Purchase(System.String,System.String,System.String,UnityEngine.UDP.IPurchaseListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreService_Purchase_m96FD316381D2FC43EEF6B66C67096FFE6061DBF9 (String_t* ___productId0, String_t* ___gameOrderId1, String_t* ___developerPayload2, RuntimeObject* ___listener3, const RuntimeMethod* method);
// System.Void UnityEngine.UDP.StoreService::QueryInventory(System.Collections.Generic.List`1<System.String>,UnityEngine.UDP.IPurchaseListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreService_QueryInventory_m9192A5A3496309A1447C563E4D340E5A2DF83491 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___productIds0, RuntimeObject* ___listener1, const RuntimeMethod* method);
// System.String UnityEngine.UDP.PurchaseInfo::get_ProductId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_ProductId_m792BD5225AF49A893523BD43F87F4CBEAF58CED2_inline (PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * __this, const RuntimeMethod* method);
// System.String UnityEngine.UDP.PurchaseInfo::get_GameOrderId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_GameOrderId_m1E038051180BE2CE8F720AC03D0C527F95F0BC72_inline (PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * __this, const RuntimeMethod* method);
// System.String UnityEngine.UDP.PurchaseInfo::get_DeveloperPayload()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_DeveloperPayload_m3D9156490A5A4D8181E3F21DEFFC00D3234ABD7D_inline (PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * __this, const RuntimeMethod* method);
// System.String UnityEngine.UDP.PurchaseInfo::get_StorePurchaseJsonString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_StorePurchaseJsonString_m68F5BAF8D658D3B77B23BE57570E3A92C458A06B_inline (PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m2CDD2A21AF2BCE3CE07D634645F9A61B4CB7D9B3 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.UDP.StoreService::ConsumePurchase(UnityEngine.UDP.PurchaseInfo,UnityEngine.UDP.IPurchaseListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreService_ConsumePurchase_mEF46BECA7A96726977B24848422276C949BC32AB (PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * ___purchaseInfo0, RuntimeObject* ___listener1, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
inline int32_t List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, const RuntimeMethod*))List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Boolean>::get_Item(System.Int32)
inline bool List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.UDP.PurchaseInfo>::get_Item(System.Int32)
inline PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * List_1_get_Item_m72E8F73F28BD7C51D0DEF1CCDC2BE544BB7A9681_inline (List_1_tFCDCEEF26E1DA0748B07652864550C5414586CD4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * (*) (List_1_tFCDCEEF26E1DA0748B07652864550C5414586CD4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.UDP.ProductInfo> UnityEngine.UDP.Inventory::GetProductDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Inventory_GetProductDictionary_m5DFAFAC5669A15C84FE9830C6A145A79638FA879 (Inventory_tBB10A768DA4FDE00983BC4313DD3EE4AFABDF3E6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UDP.ProductInfo>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mCA6E11BD0BD95C4A7DCFBB03E8ED11F308991B9B_inline (KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UDP.ProductInfo>::get_Value()
inline ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_inline (KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D * __this, const RuntimeMethod* method)
{
	return ((  ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * (*) (KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.String UnityEngine.UDP.ProductInfo::get_ProductId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductInfo_get_ProductId_mECA30484DA2665CC8B23F4BAACF73F01F01C0715_inline (ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String UnityEngine.UDP.ProductInfo::get_Title()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductInfo_get_Title_mC72CCE6B4B36DE49445DCA3BE801EDC8C434B019_inline (ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UDP.ProductInfo::get_Description()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductInfo_get_Description_m7571CEE8DEAAFA58D73498F1C216F133D898FB00_inline (ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Boolean> UnityEngine.UDP.ProductInfo::get_Consumable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ProductInfo_get_Consumable_m733D88D1BA6A7AC8E43A4CE1C7CD281E03CE50A2_inline (ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UDP.ProductInfo::get_Price()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductInfo_get_Price_m28846578952691E7E109FC24FC100D646DA7BC05_inline (ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UDP.ProductInfo::get_Currency()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductInfo_get_Currency_mC3417D2119A6A9509A118F0BDF3897FC1F0177E4_inline (ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.UDP.ProductInfo::get_PriceAmountMicros()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ProductInfo_get_PriceAmountMicros_m187C61F68637F9D3EBC5FC1A86AF2696AA153940_inline (ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UDP.ProductInfo::get_ItemType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductInfo_get_ItemType_mA8BB1960F81A2E99A9797950ABD69511B9300C18_inline (ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.UDP.PurchaseInfo> UnityEngine.UDP.Inventory::GetPurchaseDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Inventory_GetPurchaseDictionary_m6E1D461322193F8E98303ACA3129305C08717992 (Inventory_tBB10A768DA4FDE00983BC4313DD3EE4AFABDF3E6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UDP.PurchaseInfo>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m2FBFCD6A51A53FE84C8ACE76C8118AF3BBE7F88D_inline (KeyValuePair_2_t8E9947DA599543BC6F17EDD9E59082A61949C164 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t8E9947DA599543BC6F17EDD9E59082A61949C164 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UDP.PurchaseInfo>::get_Value()
inline PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * KeyValuePair_2_get_Value_mE20E4E259C4A11ECC52AEC27A622122AE22ED772_inline (KeyValuePair_2_t8E9947DA599543BC6F17EDD9E59082A61949C164 * __this, const RuntimeMethod* method)
{
	return ((  PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * (*) (KeyValuePair_2_t8E9947DA599543BC6F17EDD9E59082A61949C164 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.UDP.PurchaseInfo> UnityEngine.UDP.Inventory::GetPurchaseList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFCDCEEF26E1DA0748B07652864550C5414586CD4 * Inventory_GetPurchaseList_mD7D365527C37F3B12B4E6390E99FF64B736D3CCF (Inventory_tBB10A768DA4FDE00983BC4313DD3EE4AFABDF3E6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UDP.StoreService::ConsumePurchase(System.Collections.Generic.List`1<UnityEngine.UDP.PurchaseInfo>,UnityEngine.UDP.IPurchaseListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreService_ConsumePurchase_m87F4C1166A9FEABAA5293D7751F799B80A61DC04 (List_1_tFCDCEEF26E1DA0748B07652864550C5414586CD4 * ___purchaseInfos0, RuntimeObject* ___listener1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mA52B7B2C92FF893E5EAB8264B017E7464792BB36 (const RuntimeMethod* method);
// System.String LeanTest::formatB(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LeanTest_formatB_mB4DDF508AC2C7CD424A568705F376425E8E8FF5E (String_t* ___str0, const RuntimeMethod* method);
// System.Void LeanTest::overview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTest_overview_m9536AFA65E1C1E68D19B7DF25B36DC0754391959 (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070 (const RuntimeMethod* method);
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
// System.Void RelationsInspector.Backend.AutoBackend.RelatedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelatedAttribute__ctor_m31AB02446DC799FE97E4F8C1BACFB05390B1F1A8 (RelatedAttribute_t0C0ED9B9806F2D0CFB94F5B99EA00C5DFA0B2412 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void RelationsInspector.Backend.AutoBackend.RelatingAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelatingAttribute__ctor_m5CB01E2398B230E97C47B998E5249236B3A8F9C8 (RelatingAttribute_t1B95944B2D548BF56C14E00D453C61425A1AE77B * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void GameManager/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mEC0D0A19201C9E84B668A259F95733DA0736E587 (U3CU3Ec__DisplayClass13_0_tF540FA1E40992A5EB6FD808E9CC9082D19483029 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager/<>c__DisplayClass13_0::<InitUI>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CInitUIU3Eb__0_mB19ABD41DE9E322DCD53C2BC1EEA8298D3D77747 (U3CU3Ec__DisplayClass13_0_tF540FA1E40992A5EB6FD808E9CC9082D19483029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreService_t8D0ED3FEFA033A9CF929B43E2CDA7AE838A2E453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5EA2F6EFFD82311C11121AD44AE63BA8354376);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral452111D336515F857FA8480AC56F8C5F684F2559);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _initialized = false;
		((GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var))->set__initialized_11((bool)0);
		// Debug.Log("Init button is clicked.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral452111D336515F857FA8480AC56F8C5F684F2559, /*hidden argument*/NULL);
		// Show("Initializing");
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(_stringLiteral3C5EA2F6EFFD82311C11121AD44AE63BA8354376, (bool)0, /*hidden argument*/NULL);
		// StoreService.Initialize(initListener);
		GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97 * L_0 = __this->get_U3CU3E4__this_0();
		InitListener_t943CBAE9A3DE2B2AB69F18EED9595B8DE8D32E31 * L_1 = L_0->get_initListener_13();
		IL2CPP_RUNTIME_CLASS_INIT(StoreService_t8D0ED3FEFA033A9CF929B43E2CDA7AE838A2E453_il2cpp_TypeInfo_var);
		StoreService_Initialize_m60AABA44B65C955168C59F18B36B2822D41B4617(L_1, (AppInfo_t6F25142BC3A2D7AD8D1C22ABE485D083F027F2DF *)NULL, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void GameManager/<>c__DisplayClass13_0::<InitUI>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CInitUIU3Eb__1_m1CBE111BCCD08CF1ACDA807CA869202661657633 (U3CU3Ec__DisplayClass13_0_tF540FA1E40992A5EB6FD808E9CC9082D19483029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreService_t8D0ED3FEFA033A9CF929B43E2CDA7AE838A2E453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral337E24A93702082CA80CEF021BFC34DEFE8B5634);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38F4515DDA186E78FD0D8D6B6DA0EC7A245ECD44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D2D86526148B6E6C60E2769759D206312DC639);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral594B85CB961E17F7430C4D75614DC7D9C38A239E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADC1463F0951585C93B22720EBD05967309DA5EA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (!_initialized)
		bool L_0 = ((GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var))->get__initialized_11();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Show("Please Initialize first");
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(_stringLiteral53D2D86526148B6E6C60E2769759D206312DC639, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// string prodcutId = _dropdown.options[_dropdown.value].text;
		GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97 * L_1 = __this->get_U3CU3E4__this_0();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_2 = L_1->get__dropdown_8();
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_3;
		L_3 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_2, /*hidden argument*/NULL);
		GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97 * L_4 = __this->get_U3CU3E4__this_0();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_5 = L_4->get__dropdown_8();
		int32_t L_6;
		L_6 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline(L_5, /*hidden argument*/NULL);
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_7;
		L_7 = List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline(L_3, L_6, /*hidden argument*/List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		String_t* L_8;
		L_8 = OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// Debug.Log("Buy button is clicked.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral337E24A93702082CA80CEF021BFC34DEFE8B5634, /*hidden argument*/NULL);
		// Show("Buying Product: " + prodcutId);
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral38F4515DDA186E78FD0D8D6B6DA0EC7A245ECD44, L_9, /*hidden argument*/NULL);
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(L_10, (bool)0, /*hidden argument*/NULL);
		// m_consumeOnPurchase = false;
		((GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var))->set_m_consumeOnPurchase_6((bool)0);
		// Debug.Log(_dropdown.options[_dropdown.value].text + " will be bought");
		GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97 * L_11 = __this->get_U3CU3E4__this_0();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_12 = L_11->get__dropdown_8();
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_13;
		L_13 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_12, /*hidden argument*/NULL);
		GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97 * L_14 = __this->get_U3CU3E4__this_0();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_15 = L_14->get__dropdown_8();
		int32_t L_16;
		L_16 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline(L_15, /*hidden argument*/NULL);
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_17;
		L_17 = List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline(L_13, L_16, /*hidden argument*/List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		String_t* L_18;
		L_18 = OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline(L_17, /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(L_18, _stringLiteral594B85CB961E17F7430C4D75614DC7D9C38A239E, /*hidden argument*/NULL);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_19, /*hidden argument*/NULL);
		// StoreService.Purchase(prodcutId, null, "{\"AnyKeyYouWant:\" : \"AnyValueYouWant\"}", purchaseListener);
		String_t* L_20 = V_0;
		GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97 * L_21 = __this->get_U3CU3E4__this_0();
		PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B * L_22 = L_21->get_purchaseListener_12();
		IL2CPP_RUNTIME_CLASS_INIT(StoreService_t8D0ED3FEFA033A9CF929B43E2CDA7AE838A2E453_il2cpp_TypeInfo_var);
		StoreService_Purchase_m96FD316381D2FC43EEF6B66C67096FFE6061DBF9(L_20, (String_t*)NULL, _stringLiteralADC1463F0951585C93B22720EBD05967309DA5EA, L_22, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void GameManager/<>c__DisplayClass13_0::<InitUI>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CInitUIU3Eb__2_m4ABB26ED67667908DC6D7EE6D9EA9089A9ED616E (U3CU3Ec__DisplayClass13_0_tF540FA1E40992A5EB6FD808E9CC9082D19483029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreService_t8D0ED3FEFA033A9CF929B43E2CDA7AE838A2E453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BCC09A6BE154F240C8C94BF9F145AD9A74CADF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38F4515DDA186E78FD0D8D6B6DA0EC7A245ECD44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D2D86526148B6E6C60E2769759D206312DC639);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral804198904F8C1674D80BBD3A697271E8DF3AA846);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (!_initialized)
		bool L_0 = ((GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var))->get__initialized_11();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Show("Please Initialize first");
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(_stringLiteral53D2D86526148B6E6C60E2769759D206312DC639, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// string prodcutId = _dropdown.options[_dropdown.value].text;
		GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97 * L_1 = __this->get_U3CU3E4__this_0();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_2 = L_1->get__dropdown_8();
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_3;
		L_3 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_2, /*hidden argument*/NULL);
		GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97 * L_4 = __this->get_U3CU3E4__this_0();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_5 = L_4->get__dropdown_8();
		int32_t L_6;
		L_6 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline(L_5, /*hidden argument*/NULL);
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_7;
		L_7 = List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline(L_3, L_6, /*hidden argument*/List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		String_t* L_8;
		L_8 = OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// Show("Buying Product: " + prodcutId);
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral38F4515DDA186E78FD0D8D6B6DA0EC7A245ECD44, L_9, /*hidden argument*/NULL);
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(L_10, (bool)0, /*hidden argument*/NULL);
		// Debug.Log("Buy&Consume button is clicked.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral804198904F8C1674D80BBD3A697271E8DF3AA846, /*hidden argument*/NULL);
		// m_consumeOnPurchase = true;
		((GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var))->set_m_consumeOnPurchase_6((bool)1);
		// StoreService.Purchase(prodcutId, null, "buy and consume developer payload", purchaseListener);
		String_t* L_11 = V_0;
		GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97 * L_12 = __this->get_U3CU3E4__this_0();
		PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B * L_13 = L_12->get_purchaseListener_12();
		IL2CPP_RUNTIME_CLASS_INIT(StoreService_t8D0ED3FEFA033A9CF929B43E2CDA7AE838A2E453_il2cpp_TypeInfo_var);
		StoreService_Purchase_m96FD316381D2FC43EEF6B66C67096FFE6061DBF9(L_11, (String_t*)NULL, _stringLiteral1BCC09A6BE154F240C8C94BF9F145AD9A74CADF4, L_13, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void GameManager/<>c__DisplayClass13_0::<InitUI>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CInitUIU3Eb__3_m849247BA2F1B19CFA25C724BAC44A1C6C9C6F743 (U3CU3Ec__DisplayClass13_0_tF540FA1E40992A5EB6FD808E9CC9082D19483029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreService_t8D0ED3FEFA033A9CF929B43E2CDA7AE838A2E453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral002BFD9F25E147D029C2C1C4FD6CFB1B4943EFFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D2D86526148B6E6C60E2769759D206312DC639);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BD8EC3D4C41CF57AE57F8EAF6D34AE2CDC161BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_initialized)
		bool L_0 = ((GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var))->get__initialized_11();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Show("Please Initialize first");
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(_stringLiteral53D2D86526148B6E6C60E2769759D206312DC639, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// _consumeOnQuery = false;
		((GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var))->set__consumeOnQuery_7((bool)0);
		// Debug.Log("Query button is clicked.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral002BFD9F25E147D029C2C1C4FD6CFB1B4943EFFF, /*hidden argument*/NULL);
		// Show("Querying Inventory");
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(_stringLiteral5BD8EC3D4C41CF57AE57F8EAF6D34AE2CDC161BC, (bool)0, /*hidden argument*/NULL);
		// StoreService.QueryInventory(productIds, purchaseListener);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_productIds_1();
		GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97 * L_2 = __this->get_U3CU3E4__this_0();
		PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B * L_3 = L_2->get_purchaseListener_12();
		IL2CPP_RUNTIME_CLASS_INIT(StoreService_t8D0ED3FEFA033A9CF929B43E2CDA7AE838A2E453_il2cpp_TypeInfo_var);
		StoreService_QueryInventory_m9192A5A3496309A1447C563E4D340E5A2DF83491(L_1, L_3, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void GameManager/<>c__DisplayClass13_0::<InitUI>b__4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CInitUIU3Eb__4_m85400EC656CFBE50F889AC8511CAA225110CF0D9 (U3CU3Ec__DisplayClass13_0_tF540FA1E40992A5EB6FD808E9CC9082D19483029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreService_t8D0ED3FEFA033A9CF929B43E2CDA7AE838A2E453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral029A11ACF56A0B68D7A32276BBC5B616BE4F9D59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D2D86526148B6E6C60E2769759D206312DC639);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BD8EC3D4C41CF57AE57F8EAF6D34AE2CDC161BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_initialized)
		bool L_0 = ((GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var))->get__initialized_11();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Show("Please Initialize first");
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(_stringLiteral53D2D86526148B6E6C60E2769759D206312DC639, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// _consumeOnQuery = true;
		((GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var))->set__consumeOnQuery_7((bool)1);
		// Show("Querying Inventory");
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(_stringLiteral5BD8EC3D4C41CF57AE57F8EAF6D34AE2CDC161BC, (bool)0, /*hidden argument*/NULL);
		// Debug.Log("QueryConsume button is clicked.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral029A11ACF56A0B68D7A32276BBC5B616BE4F9D59, /*hidden argument*/NULL);
		// StoreService.QueryInventory(productIds, purchaseListener);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_productIds_1();
		GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97 * L_2 = __this->get_U3CU3E4__this_0();
		PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B * L_3 = L_2->get_purchaseListener_12();
		IL2CPP_RUNTIME_CLASS_INIT(StoreService_t8D0ED3FEFA033A9CF929B43E2CDA7AE838A2E453_il2cpp_TypeInfo_var);
		StoreService_QueryInventory_m9192A5A3496309A1447C563E4D340E5A2DF83491(L_1, L_3, /*hidden argument*/NULL);
		// });
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
// System.Void GameManager/InitListener::OnInitialized(UnityEngine.UDP.UserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitListener_OnInitialized_m569B3AB448C8A238974C70E8BC4C62F8D25A544A (InitListener_t943CBAE9A3DE2B2AB69F18EED9595B8DE8D32E31 * __this, UserInfo_tEF1F89A01964B475306DB45080C99BBC8792D47A * ___userInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA1AAB1ECF70595E73247DC5C16F1F878B1EA94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6BAE7977612DE2746D1D6954715B42BD9CA3B65);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("[Game]On Initialized suceeded");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteralC6BAE7977612DE2746D1D6954715B42BD9CA3B65, /*hidden argument*/NULL);
		// Show("Initialize succeeded");
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(_stringLiteralBBA1AAB1ECF70595E73247DC5C16F1F878B1EA94, (bool)0, /*hidden argument*/NULL);
		// _initialized = true;
		((GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var))->set__initialized_11((bool)1);
		// }
		return;
	}
}
// System.Void GameManager/InitListener::OnInitializeFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitListener_OnInitializeFailed_m2FE9EA08AE637F85AEC0FC24B59A4B423440BFCD (InitListener_t943CBAE9A3DE2B2AB69F18EED9595B8DE8D32E31 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AA75CD8D840114C171D186E5D01BC23418C331E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA71D40EA4B7EA4E89438220A1916AF45A5469FB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("[Game]OnInitializeFailed: " + message);
		String_t* L_0 = ___message0;
		String_t* L_1;
		L_1 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral4AA75CD8D840114C171D186E5D01BC23418C331E, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_1, /*hidden argument*/NULL);
		// Show("Initialize Failed: " + message);
		String_t* L_2 = ___message0;
		String_t* L_3;
		L_3 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralAA71D40EA4B7EA4E89438220A1916AF45A5469FB, L_2, /*hidden argument*/NULL);
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager/InitListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitListener__ctor_mF6A23022A4260634F86A8213ECD262D7BDF5C357 (InitListener_t943CBAE9A3DE2B2AB69F18EED9595B8DE8D32E31 * __this, const RuntimeMethod* method)
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
// System.Void GameManager/PurchaseListener::OnPurchase(UnityEngine.UDP.PurchaseInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseListener_OnPurchase_mCD9DC73878CDE21BD8E894C9047BEADDBDFEF46E (PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B * __this, PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * ___purchaseInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreService_t8D0ED3FEFA033A9CF929B43E2CDA7AE838A2E453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37A7F50F0B638EEBDE8D70E1A9B52D991143386E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral761601AA45498A7010C274E36AE11129F62D56C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string message = string.Format(
		//     "[Game] Purchase Succeeded, productId: {0}, cpOrderId: {1}, developerPayload: {2}, storeJson: {3}",
		//     purchaseInfo.ProductId, purchaseInfo.GameOrderId, purchaseInfo.DeveloperPayload,
		//     purchaseInfo.StorePurchaseJsonString);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * L_2 = ___purchaseInfo0;
		String_t* L_3;
		L_3 = PurchaseInfo_get_ProductId_m792BD5225AF49A893523BD43F87F4CBEAF58CED2_inline(L_2, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_1;
		PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * L_5 = ___purchaseInfo0;
		String_t* L_6;
		L_6 = PurchaseInfo_get_GameOrderId_m1E038051180BE2CE8F720AC03D0C527F95F0BC72_inline(L_5, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * L_8 = ___purchaseInfo0;
		String_t* L_9;
		L_9 = PurchaseInfo_get_DeveloperPayload_m3D9156490A5A4D8181E3F21DEFFC00D3234ABD7D_inline(L_8, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_7;
		PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * L_11 = ___purchaseInfo0;
		String_t* L_12;
		L_12 = PurchaseInfo_get_StorePurchaseJsonString_m68F5BAF8D658D3B77B23BE57570E3A92C458A06B_inline(L_11, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		String_t* L_13;
		L_13 = String_Format_m2CDD2A21AF2BCE3CE07D634645F9A61B4CB7D9B3(_stringLiteral37A7F50F0B638EEBDE8D70E1A9B52D991143386E, L_10, /*hidden argument*/NULL);
		// Debug.Log(message);
		String_t* L_14 = L_13;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_14, /*hidden argument*/NULL);
		// Show(message);
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(L_14, (bool)0, /*hidden argument*/NULL);
		// if (m_consumeOnPurchase)
		bool L_15 = ((GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var))->get_m_consumeOnPurchase_6();
		if (!L_15)
		{
			goto IL_0058;
		}
	}
	{
		// Debug.Log("Consuming");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral761601AA45498A7010C274E36AE11129F62D56C4, /*hidden argument*/NULL);
		// StoreService.ConsumePurchase(purchaseInfo, this);
		PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * L_16 = ___purchaseInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(StoreService_t8D0ED3FEFA033A9CF929B43E2CDA7AE838A2E453_il2cpp_TypeInfo_var);
		StoreService_ConsumePurchase_mEF46BECA7A96726977B24848422276C949BC32AB(L_16, __this, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void GameManager/PurchaseListener::OnPurchaseFailed(System.String,UnityEngine.UDP.PurchaseInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseListener_OnPurchaseFailed_m75EA493C2CCCFBAF9C8244C39F6FABE0B923937F (PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B * __this, String_t* ___message0, PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * ___purchaseInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFB356A915A161FCC6E252A3196747FCBBDB0133);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Purchase Failed: " + message);
		String_t* L_0 = ___message0;
		String_t* L_1;
		L_1 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralEFB356A915A161FCC6E252A3196747FCBBDB0133, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_1, /*hidden argument*/NULL);
		// Show("Purchase Failed: " + message);
		String_t* L_2 = ___message0;
		String_t* L_3;
		L_3 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralEFB356A915A161FCC6E252A3196747FCBBDB0133, L_2, /*hidden argument*/NULL);
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager/PurchaseListener::OnPurchaseRepeated(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseListener_OnPurchaseRepeated_m8D3C9C99B9CDBDBF0E6D701A5CE626B32B8B6DC0 (PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B * __this, String_t* ___productCode0, const RuntimeMethod* method)
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PurchaseListener_OnPurchaseRepeated_m8D3C9C99B9CDBDBF0E6D701A5CE626B32B8B6DC0_RuntimeMethod_var)));
	}
}
// System.Void GameManager/PurchaseListener::OnPurchaseConsume(UnityEngine.UDP.PurchaseInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseListener_OnPurchaseConsume_m4474D12FC46EAB0C0EE7ACD6AC41C37F9CE4BCD8 (PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B * __this, PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * ___purchaseInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90B938CCC0C9081822A8F6F0118CA6F04D2B8828);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF52249FB2CFECED67368FDFBCF2039BAB717B670);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Show("Consume success for " + purchaseInfo.ProductId, true);
		PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * L_0 = ___purchaseInfo0;
		String_t* L_1;
		L_1 = PurchaseInfo_get_ProductId_m792BD5225AF49A893523BD43F87F4CBEAF58CED2_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralF52249FB2CFECED67368FDFBCF2039BAB717B670, L_1, /*hidden argument*/NULL);
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(L_2, (bool)1, /*hidden argument*/NULL);
		// Debug.Log("Consume success: " + purchaseInfo.ProductId);
		PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * L_3 = ___purchaseInfo0;
		String_t* L_4;
		L_4 = PurchaseInfo_get_ProductId_m792BD5225AF49A893523BD43F87F4CBEAF58CED2_inline(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral90B938CCC0C9081822A8F6F0118CA6F04D2B8828, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager/PurchaseListener::OnMultiPurchaseConsume(System.Collections.Generic.List`1<System.Boolean>,System.Collections.Generic.List`1<UnityEngine.UDP.PurchaseInfo>,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseListener_OnMultiPurchaseConsume_mF704364564BCBEB077D5C6065AE8E7C24DFBAA66 (PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B * __this, List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___successful0, List_1_tFCDCEEF26E1DA0748B07652864550C5414586CD4 * ___purchaseInfos1, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___messages2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72E8F73F28BD7C51D0DEF1CCDC2BE544BB7A9681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral734F39F21A558E7EF51DCA413BB2B2FC29B22AF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACDD223A83CCB65F90E7012FF5FC49DCE64C8513);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int len = successful.Count;
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0 = ___successful0;
		int32_t L_1;
		L_1 = List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_inline(L_0, /*hidden argument*/List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_RuntimeMethod_var);
		V_0 = L_1;
		// for (int i = 0; i < len; i++)
		V_1 = 0;
		goto IL_0065;
	}

IL_000b:
	{
		// if (successful[i])
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_2 = ___successful0;
		int32_t L_3 = V_1;
		bool L_4;
		L_4 = List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// message = string.Format("Consuming succeeded for {0}\n", purchaseInfos[i].ProductId);
		List_1_tFCDCEEF26E1DA0748B07652864550C5414586CD4 * L_5 = ___purchaseInfos1;
		int32_t L_6 = V_1;
		PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * L_7;
		L_7 = List_1_get_Item_m72E8F73F28BD7C51D0DEF1CCDC2BE544BB7A9681_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m72E8F73F28BD7C51D0DEF1CCDC2BE544BB7A9681_RuntimeMethod_var);
		String_t* L_8;
		L_8 = PurchaseInfo_get_ProductId_m792BD5225AF49A893523BD43F87F4CBEAF58CED2_inline(L_7, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteralACDD223A83CCB65F90E7012FF5FC49DCE64C8513, L_8, /*hidden argument*/NULL);
		// Show(message, true);
		String_t* L_10 = L_9;
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(L_10, (bool)1, /*hidden argument*/NULL);
		// Debug.Log(message);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_10, /*hidden argument*/NULL);
		// }
		goto IL_0061;
	}

IL_0038:
	{
		// message = string.Format("Consuming failed for {0}, reason: {1}", purchaseInfos[i].ProductId,
		//     messages[i]);
		List_1_tFCDCEEF26E1DA0748B07652864550C5414586CD4 * L_11 = ___purchaseInfos1;
		int32_t L_12 = V_1;
		PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * L_13;
		L_13 = List_1_get_Item_m72E8F73F28BD7C51D0DEF1CCDC2BE544BB7A9681_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_m72E8F73F28BD7C51D0DEF1CCDC2BE544BB7A9681_RuntimeMethod_var);
		String_t* L_14;
		L_14 = PurchaseInfo_get_ProductId_m792BD5225AF49A893523BD43F87F4CBEAF58CED2_inline(L_13, /*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_15 = ___messages2;
		int32_t L_16 = V_1;
		String_t* L_17;
		L_17 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		String_t* L_18;
		L_18 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteral734F39F21A558E7EF51DCA413BB2B2FC29B22AF0, L_14, L_17, /*hidden argument*/NULL);
		// Show(message, true);
		String_t* L_19 = L_18;
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(L_19, (bool)1, /*hidden argument*/NULL);
		// Debug.Log(message);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_19, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// for (int i = 0; i < len; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0065:
	{
		// for (int i = 0; i < len; i++)
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager/PurchaseListener::OnPurchaseConsumeFailed(System.String,UnityEngine.UDP.PurchaseInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseListener_OnPurchaseConsumeFailed_m5651A44FB4740CEE4779C0A87DEDC55C25687C47 (PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B * __this, String_t* ___message0, PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * ___purchaseInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB189E25C5704ECFCEE2BAB004F920F62A66A453);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Consume Failed: " + message);
		String_t* L_0 = ___message0;
		String_t* L_1;
		L_1 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralFB189E25C5704ECFCEE2BAB004F920F62A66A453, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_1, /*hidden argument*/NULL);
		// Show("Consume Failed: " + message);
		String_t* L_2 = ___message0;
		String_t* L_3;
		L_3 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralFB189E25C5704ECFCEE2BAB004F920F62A66A453, L_2, /*hidden argument*/NULL);
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager/PurchaseListener::OnQueryInventory(UnityEngine.UDP.Inventory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseListener_OnQueryInventory_m13A5E145F6AB39351A32C9A76CC5086AB423D0F0 (PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B * __this, Inventory_tBB10A768DA4FDE00983BC4313DD3EE4AFABDF3E6 * ___inventory0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4F5E3BD6C6414B3F9A934025A44D25F4CFC39E70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t8B23E5B439C9A2731A9995A12017ED15C5180756_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t421FF492E8FF2EF1B060B237848E8E8A5B5809BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tFAE0C84048A42712D0836F053195FF9AA9857D56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m2FBFCD6A51A53FE84C8ACE76C8118AF3BBE7F88D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mCA6E11BD0BD95C4A7DCFBB03E8ED11F308991B9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mE20E4E259C4A11ECC52AEC27A622122AE22ED772_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreService_t8D0ED3FEFA033A9CF929B43E2CDA7AE838A2E453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A73BAC099A9FDD13730E30721C52AA22AA86896);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CDCD3ACBFB1D724491D4562C0B7619DAD26FA2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral817D1EF0B02ACE8CC6992EC383DEF6AC2F074275);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE851E6E68185EB46071C250D92249CACD681FDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB61D814F99D5CDCFBBD4E0B79429AEB528CE00B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE13634B258706112A3DFDF17C461D0E2EE7293D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7D255FB33D3EB2113283F155E1491A224299878);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t8E9947DA599543BC6F17EDD9E59082A61949C164  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// Debug.Log("OnQueryInventory");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteralE7D255FB33D3EB2113283F155E1491A224299878, /*hidden argument*/NULL);
		// Debug.Log("[Game] Product List: ");
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral817D1EF0B02ACE8CC6992EC383DEF6AC2F074275, /*hidden argument*/NULL);
		// string message = "Product List: \n";
		V_0 = _stringLiteralE13634B258706112A3DFDF17C461D0E2EE7293D9;
		// foreach (KeyValuePair<string, ProductInfo> productInfo in inventory.GetProductDictionary())
		Inventory_tBB10A768DA4FDE00983BC4313DD3EE4AFABDF3E6 * L_0 = ___inventory0;
		RuntimeObject* L_1;
		L_1 = Inventory_GetProductDictionary_m5DFAFAC5669A15C84FE9830C6A145A79638FA879(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UDP.ProductInfo>>::GetEnumerator() */, IEnumerable_1_t8B23E5B439C9A2731A9995A12017ED15C5180756_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ed;
		}

IL_002b:
		{
			// foreach (KeyValuePair<string, ProductInfo> productInfo in inventory.GetProductDictionary())
			RuntimeObject* L_3 = V_1;
			KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D  L_4;
			L_4 = InterfaceFuncInvoker0< KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UDP.ProductInfo>>::get_Current() */, IEnumerator_1_t421FF492E8FF2EF1B060B237848E8E8A5B5809BD_il2cpp_TypeInfo_var, L_3);
			V_2 = L_4;
			// Debug.Log("[Game] Returned product: " + productInfo.Key + " " + productInfo.Value.ProductId);
			String_t* L_5;
			L_5 = KeyValuePair_2_get_Key_mCA6E11BD0BD95C4A7DCFBB03E8ED11F308991B9B_inline((KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mCA6E11BD0BD95C4A7DCFBB03E8ED11F308991B9B_RuntimeMethod_var);
			ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * L_6;
			L_6 = KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_inline((KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_RuntimeMethod_var);
			String_t* L_7;
			L_7 = ProductInfo_get_ProductId_mECA30484DA2665CC8B23F4BAACF73F01F01C0715_inline(L_6, /*hidden argument*/NULL);
			String_t* L_8;
			L_8 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(_stringLiteral1A73BAC099A9FDD13730E30721C52AA22AA86896, L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_8, /*hidden argument*/NULL);
			// message += string.Format("{0}:\n" +
			//                          "\tTitle: {1}\n" +
			//                          "\tDescription: {2}\n" +
			//                          "\tConsumable: {3}\n" +
			//                          "\tPrice: {4}\n" +
			//                          "\tCurrency: {5}\n" +
			//                          "\tPriceAmountMicros: {6}\n" +
			//                          "\tItemType: {7}\n",
			//     productInfo.Key,
			//     productInfo.Value.Title,
			//     productInfo.Value.Description,
			//     productInfo.Value.Consumable ,
			//     productInfo.Value.Price,
			//     productInfo.Value.Currency,
			//     productInfo.Value.PriceAmountMicros,
			//     productInfo.Value.ItemType
			// );
			String_t* L_9 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)8);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_10;
			String_t* L_12;
			L_12 = KeyValuePair_2_get_Key_mCA6E11BD0BD95C4A7DCFBB03E8ED11F308991B9B_inline((KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mCA6E11BD0BD95C4A7DCFBB03E8ED11F308991B9B_RuntimeMethod_var);
			ArrayElementTypeCheck (L_11, L_12);
			(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_11;
			ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * L_14;
			L_14 = KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_inline((KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_RuntimeMethod_var);
			String_t* L_15;
			L_15 = ProductInfo_get_Title_mC72CCE6B4B36DE49445DCA3BE801EDC8C434B019_inline(L_14, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_13, L_15);
			(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_13;
			ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * L_17;
			L_17 = KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_inline((KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_RuntimeMethod_var);
			String_t* L_18;
			L_18 = ProductInfo_get_Description_m7571CEE8DEAAFA58D73498F1C216F133D898FB00_inline(L_17, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_16, L_18);
			(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_18);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_16;
			ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * L_20;
			L_20 = KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_inline((KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_RuntimeMethod_var);
			Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_21;
			L_21 = ProductInfo_get_Consumable_m733D88D1BA6A7AC8E43A4CE1C7CD281E03CE50A2_inline(L_20, /*hidden argument*/NULL);
			Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_22 = L_21;
			RuntimeObject * L_23 = Box(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3_il2cpp_TypeInfo_var, &L_22);
			ArrayElementTypeCheck (L_19, L_23);
			(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_23);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_19;
			ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * L_25;
			L_25 = KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_inline((KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_RuntimeMethod_var);
			String_t* L_26;
			L_26 = ProductInfo_get_Price_m28846578952691E7E109FC24FC100D646DA7BC05_inline(L_25, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_24, L_26);
			(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_26);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = L_24;
			ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * L_28;
			L_28 = KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_inline((KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_RuntimeMethod_var);
			String_t* L_29;
			L_29 = ProductInfo_get_Currency_mC3417D2119A6A9509A118F0BDF3897FC1F0177E4_inline(L_28, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_27, L_29);
			(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_29);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_27;
			ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * L_31;
			L_31 = KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_inline((KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_RuntimeMethod_var);
			int64_t L_32;
			L_32 = ProductInfo_get_PriceAmountMicros_m187C61F68637F9D3EBC5FC1A86AF2696AA153940_inline(L_31, /*hidden argument*/NULL);
			int64_t L_33 = L_32;
			RuntimeObject * L_34 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_33);
			ArrayElementTypeCheck (L_30, L_34);
			(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_34);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_35 = L_30;
			ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * L_36;
			L_36 = KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_inline((KeyValuePair_2_t65F18D61DA2118C049BF3893FDBD515157C8296D *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m7C4BDD0DA406265AF470CD7DE1FFDAB789F3B4FB_RuntimeMethod_var);
			String_t* L_37;
			L_37 = ProductInfo_get_ItemType_mA8BB1960F81A2E99A9797950ABD69511B9300C18_inline(L_36, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_35, L_37);
			(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_37);
			String_t* L_38;
			L_38 = String_Format_m2CDD2A21AF2BCE3CE07D634645F9A61B4CB7D9B3(_stringLiteralCE851E6E68185EB46071C250D92249CACD681FDA, L_35, /*hidden argument*/NULL);
			String_t* L_39;
			L_39 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(L_9, L_38, /*hidden argument*/NULL);
			V_0 = L_39;
		}

IL_00ed:
		{
			// foreach (KeyValuePair<string, ProductInfo> productInfo in inventory.GetProductDictionary())
			RuntimeObject* L_40 = V_1;
			bool L_41;
			L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_40);
			if (L_41)
			{
				goto IL_002b;
			}
		}

IL_00f8:
		{
			IL2CPP_LEAVE(0x104, FINALLY_00fa);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fa;
	}

FINALLY_00fa:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_42 = V_1;
			if (!L_42)
			{
				goto IL_0103;
			}
		}

IL_00fd:
		{
			RuntimeObject* L_43 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_43);
		}

IL_0103:
		{
			IL2CPP_END_FINALLY(250)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(250)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x104, IL_0104)
	}

IL_0104:
	{
		// message += "\nPurchase List: \n";
		String_t* L_44 = V_0;
		String_t* L_45;
		L_45 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(L_44, _stringLiteral5CDCD3ACBFB1D724491D4562C0B7619DAD26FA2F, /*hidden argument*/NULL);
		V_0 = L_45;
		// foreach (KeyValuePair<string, PurchaseInfo> purchaseInfo in inventory.GetPurchaseDictionary())
		Inventory_tBB10A768DA4FDE00983BC4313DD3EE4AFABDF3E6 * L_46 = ___inventory0;
		RuntimeObject* L_47;
		L_47 = Inventory_GetPurchaseDictionary_m6E1D461322193F8E98303ACA3129305C08717992(L_46, /*hidden argument*/NULL);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UDP.PurchaseInfo>>::GetEnumerator() */, IEnumerable_1_t4F5E3BD6C6414B3F9A934025A44D25F4CFC39E70_il2cpp_TypeInfo_var, L_47);
		V_3 = L_48;
	}

IL_011c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0159;
		}

IL_011e:
		{
			// foreach (KeyValuePair<string, PurchaseInfo> purchaseInfo in inventory.GetPurchaseDictionary())
			RuntimeObject* L_49 = V_3;
			KeyValuePair_2_t8E9947DA599543BC6F17EDD9E59082A61949C164  L_50;
			L_50 = InterfaceFuncInvoker0< KeyValuePair_2_t8E9947DA599543BC6F17EDD9E59082A61949C164  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UDP.PurchaseInfo>>::get_Current() */, IEnumerator_1_tFAE0C84048A42712D0836F053195FF9AA9857D56_il2cpp_TypeInfo_var, L_49);
			V_4 = L_50;
			// Debug.Log("[Game] Returned purchase: " + purchaseInfo.Key);
			String_t* L_51;
			L_51 = KeyValuePair_2_get_Key_m2FBFCD6A51A53FE84C8ACE76C8118AF3BBE7F88D_inline((KeyValuePair_2_t8E9947DA599543BC6F17EDD9E59082A61949C164 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Key_m2FBFCD6A51A53FE84C8ACE76C8118AF3BBE7F88D_RuntimeMethod_var);
			String_t* L_52;
			L_52 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralDB61D814F99D5CDCFBBD4E0B79429AEB528CE00B, L_51, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_52, /*hidden argument*/NULL);
			// message += string.Format("{0}\n", purchaseInfo.Value.ProductId);
			String_t* L_53 = V_0;
			PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * L_54;
			L_54 = KeyValuePair_2_get_Value_mE20E4E259C4A11ECC52AEC27A622122AE22ED772_inline((KeyValuePair_2_t8E9947DA599543BC6F17EDD9E59082A61949C164 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_mE20E4E259C4A11ECC52AEC27A622122AE22ED772_RuntimeMethod_var);
			String_t* L_55;
			L_55 = PurchaseInfo_get_ProductId_m792BD5225AF49A893523BD43F87F4CBEAF58CED2_inline(L_54, /*hidden argument*/NULL);
			String_t* L_56;
			L_56 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02, L_55, /*hidden argument*/NULL);
			String_t* L_57;
			L_57 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(L_53, L_56, /*hidden argument*/NULL);
			V_0 = L_57;
		}

IL_0159:
		{
			// foreach (KeyValuePair<string, PurchaseInfo> purchaseInfo in inventory.GetPurchaseDictionary())
			RuntimeObject* L_58 = V_3;
			bool L_59;
			L_59 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_58);
			if (L_59)
			{
				goto IL_011e;
			}
		}

IL_0161:
		{
			IL2CPP_LEAVE(0x16D, FINALLY_0163);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0163;
	}

FINALLY_0163:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_60 = V_3;
			if (!L_60)
			{
				goto IL_016c;
			}
		}

IL_0166:
		{
			RuntimeObject* L_61 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_61);
		}

IL_016c:
		{
			IL2CPP_END_FINALLY(355)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(355)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16D, IL_016d)
	}

IL_016d:
	{
		// Show(message);
		String_t* L_62 = V_0;
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(L_62, (bool)0, /*hidden argument*/NULL);
		// if (_consumeOnQuery)
		bool L_63 = ((GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t07542AB8B898E85A55AA5602B4232D897CF34F97_il2cpp_TypeInfo_var))->get__consumeOnQuery_7();
		if (!L_63)
		{
			goto IL_0187;
		}
	}
	{
		// StoreService.ConsumePurchase(inventory.GetPurchaseList(), this);
		Inventory_tBB10A768DA4FDE00983BC4313DD3EE4AFABDF3E6 * L_64 = ___inventory0;
		List_1_tFCDCEEF26E1DA0748B07652864550C5414586CD4 * L_65;
		L_65 = Inventory_GetPurchaseList_mD7D365527C37F3B12B4E6390E99FF64B736D3CCF(L_64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StoreService_t8D0ED3FEFA033A9CF929B43E2CDA7AE838A2E453_il2cpp_TypeInfo_var);
		StoreService_ConsumePurchase_m87F4C1166A9FEABAA5293D7751F799B80A61DC04(L_65, __this, /*hidden argument*/NULL);
	}

IL_0187:
	{
		// }
		return;
	}
}
// System.Void GameManager/PurchaseListener::OnQueryInventoryFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseListener_OnQueryInventoryFailed_m785400D8B83CC063CC9C6DB907DBFFFA03F661D0 (PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral734FB8B61921891DEC2D6D4C8FEE9ABF0B388964);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF36CBD4535537248CDD581FC3F278E99AB4347AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnQueryInventory Failed: " + message);
		String_t* L_0 = ___message0;
		String_t* L_1;
		L_1 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral734FB8B61921891DEC2D6D4C8FEE9ABF0B388964, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_1, /*hidden argument*/NULL);
		// Show("QueryInventory Failed: " + message);
		String_t* L_2 = ___message0;
		String_t* L_3;
		L_3 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralF36CBD4535537248CDD581FC3F278E99AB4347AC, L_2, /*hidden argument*/NULL);
		GameManager_Show_m37122C808CBC2017C7EC3DB18C631382CE23DA27(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager/PurchaseListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseListener__ctor_m3DB42321B2A166EA3485531D149864680ABD0975 (PurchaseListener_t0CA324D74590C4CEBA80237E70EADB287EB2000B * __this, const RuntimeMethod* method)
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
// System.Void LeanTester/<timeoutCheck>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtimeoutCheckU3Ed__2__ctor_m5CFCAB9081B4312877DA24E275C19E538441A255 (U3CtimeoutCheckU3Ed__2_t50BE7F796B937AEAD94DD2B0EDBC61B33C9B5514 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LeanTester/<timeoutCheck>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtimeoutCheckU3Ed__2_System_IDisposable_Dispose_mF1BD496C53C6DE400BCF6F79618EFC2A12194B1F (U3CtimeoutCheckU3Ed__2_t50BE7F796B937AEAD94DD2B0EDBC61B33C9B5514 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LeanTester/<timeoutCheck>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CtimeoutCheckU3Ed__2_MoveNext_mD023EFFB8174CCEDB6FEBE788AFA991753238689 (U3CtimeoutCheckU3Ed__2_t50BE7F796B937AEAD94DD2B0EDBC61B33C9B5514 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tCAA6F23B1027BDCD7DEF5144D2ACDC0840EDEE6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA894FF40AE84794C68A71D0E10D64E73E4C0E16B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LeanTester_tD42BFA66605F78E6EF467D897D39ED4CDE4668D4 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		LeanTester_tD42BFA66605F78E6EF467D897D39ED4CDE4668D4 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float pauseEndTime = Time.realtimeSinceStartup + timeout;
		float L_4;
		L_4 = Time_get_realtimeSinceStartup_mA52B7B2C92FF893E5EAB8264B017E7464792BB36(/*hidden argument*/NULL);
		LeanTester_tD42BFA66605F78E6EF467D897D39ED4CDE4668D4 * L_5 = V_1;
		float L_6 = L_5->get_timeout_4();
		__this->set_U3CpauseEndTimeU3E5__2_3(((float)il2cpp_codegen_add((float)L_4, (float)L_6)));
		goto IL_004e;
	}

IL_0032:
	{
		// yield return 0;
		int32_t L_7 = 0;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0047:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004e:
	{
		// while (Time.realtimeSinceStartup < pauseEndTime)
		float L_9;
		L_9 = Time_get_realtimeSinceStartup_mA52B7B2C92FF893E5EAB8264B017E7464792BB36(/*hidden argument*/NULL);
		float L_10 = __this->get_U3CpauseEndTimeU3E5__2_3();
		if ((((float)L_9) < ((float)L_10)))
		{
			goto IL_0032;
		}
	}
	{
		// if(LeanTest.testsFinished==false){
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tCAA6F23B1027BDCD7DEF5144D2ACDC0840EDEE6E_il2cpp_TypeInfo_var);
		bool L_11 = ((LeanTest_tCAA6F23B1027BDCD7DEF5144D2ACDC0840EDEE6E_StaticFields*)il2cpp_codegen_static_fields_for(LeanTest_tCAA6F23B1027BDCD7DEF5144D2ACDC0840EDEE6E_il2cpp_TypeInfo_var))->get_testsFinished_5();
		if (L_11)
		{
			goto IL_0076;
		}
	}
	{
		// Debug.Log(LeanTest.formatB("Tests timed out!"));
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tCAA6F23B1027BDCD7DEF5144D2ACDC0840EDEE6E_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = LeanTest_formatB_mB4DDF508AC2C7CD424A568705F376425E8E8FF5E(_stringLiteralA894FF40AE84794C68A71D0E10D64E73E4C0E16B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_12, /*hidden argument*/NULL);
		// LeanTest.overview();
		LeanTest_overview_m9536AFA65E1C1E68D19B7DF25B36DC0754391959(/*hidden argument*/NULL);
	}

IL_0076:
	{
		// }
		return (bool)0;
	}
}
// System.Object LeanTester/<timeoutCheck>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CtimeoutCheckU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9C60204A790326B96298D777BF25D035B30DF4AF (U3CtimeoutCheckU3Ed__2_t50BE7F796B937AEAD94DD2B0EDBC61B33C9B5514 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LeanTester/<timeoutCheck>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtimeoutCheckU3Ed__2_System_Collections_IEnumerator_Reset_m69AF8396CEAE94CC3357615718AF57B18168D63E (U3CtimeoutCheckU3Ed__2_t50BE7F796B937AEAD94DD2B0EDBC61B33C9B5514 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CtimeoutCheckU3Ed__2_System_Collections_IEnumerator_Reset_m69AF8396CEAE94CC3357615718AF57B18168D63E_RuntimeMethod_var)));
	}
}
// System.Object LeanTester/<timeoutCheck>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CtimeoutCheckU3Ed__2_System_Collections_IEnumerator_get_Current_m1FDB4F6590F27F5DB61139BD1B759BB818ECC29D (U3CtimeoutCheckU3Ed__2_t50BE7F796B937AEAD94DD2B0EDBC61B33C9B5514 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method)
{
	{
		// return m_Value;
		int32_t L_0 = __this->get_m_Value_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, const RuntimeMethod* method)
{
	{
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		String_t* L_0 = __this->get_m_Text_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_ProductId_m792BD5225AF49A893523BD43F87F4CBEAF58CED2_inline (PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CProductIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_GameOrderId_m1E038051180BE2CE8F720AC03D0C527F95F0BC72_inline (PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CGameOrderIdU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_DeveloperPayload_m3D9156490A5A4D8181E3F21DEFFC00D3234ABD7D_inline (PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDeveloperPayloadU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_StorePurchaseJsonString_m68F5BAF8D658D3B77B23BE57570E3A92C458A06B_inline (PurchaseInfo_tFC415BB1B7B823401B491DB1BEB08638D73670AB * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CStorePurchaseJsonStringU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductInfo_get_ProductId_mECA30484DA2665CC8B23F4BAACF73F01F01C0715_inline (ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CProductIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductInfo_get_Title_mC72CCE6B4B36DE49445DCA3BE801EDC8C434B019_inline (ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTitleU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductInfo_get_Description_m7571CEE8DEAAFA58D73498F1C216F133D898FB00_inline (ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDescriptionU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ProductInfo_get_Consumable_m733D88D1BA6A7AC8E43A4CE1C7CD281E03CE50A2_inline (ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0 = __this->get_U3CConsumableU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductInfo_get_Price_m28846578952691E7E109FC24FC100D646DA7BC05_inline (ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CPriceU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductInfo_get_Currency_mC3417D2119A6A9509A118F0BDF3897FC1F0177E4_inline (ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCurrencyU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ProductInfo_get_PriceAmountMicros_m187C61F68637F9D3EBC5FC1A86AF2696AA153940_inline (ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CPriceAmountMicrosU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductInfo_get_ItemType_mA8BB1960F81A2E99A9797950ABD69511B9300C18_inline (ProductInfo_t8D643D5EA15552F4A81546C24428310A6955D133 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CItemTypeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_gshared_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_gshared_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070(/*hidden argument*/NULL);
	}

IL_000e:
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_2 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)__this->get__items_1();
		int32_t L_3 = ___index0;
		bool L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)L_2, (int32_t)L_3);
		return (bool)L_4;
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
