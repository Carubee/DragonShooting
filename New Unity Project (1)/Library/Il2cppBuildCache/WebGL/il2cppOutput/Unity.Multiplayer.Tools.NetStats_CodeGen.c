#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
extern void EmbeddedAttribute__ctor_m1A50BB75A5F555C8968ADB6984C57DC62EA1069B (void);
// 0x00000002 System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
extern void IsReadOnlyAttribute__ctor_m599914EA2593849AF9B26E3B60E6B395D4A229F5 (void);
// 0x00000003 System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
extern void IsUnmanagedAttribute__ctor_m95D3170354BA42728491DE36D73D92AC58DAB066 (void);
// 0x00000004 System.Void Unity.Multiplayer.Tools.NetStats.IMetricDispatcher::RegisterObserver(Unity.Multiplayer.Tools.NetStats.IMetricObserver)
// 0x00000005 System.Void Unity.Multiplayer.Tools.NetStats.IMetricDispatcher::SetConnectionId(System.UInt64)
// 0x00000006 System.Void Unity.Multiplayer.Tools.NetStats.IMetricDispatcher::Dispatch()
// 0x00000007 System.Void Unity.Multiplayer.Tools.NetStats.IMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection)
// 0x00000008 System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>)
extern void MetricCollection__ctor_m3EEFCAB26EFDF3C0651CE7277CAC66F35FF33CC4 (void);
// 0x00000009 System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::set_ConnectionId(System.UInt64)
extern void MetricCollection_set_ConnectionId_m234B3D6EC6CE42E53DB8959567889F0DBEA49798 (void);
// 0x0000000A System.Boolean Unity.Multiplayer.Tools.NetStats.MetricCollection::TryGetCounter(Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>&)
extern void MetricCollection_TryGetCounter_mD94B33BAF0ED4D0B774597800ACA6AC45214230D (void);
// 0x0000000B System.Boolean Unity.Multiplayer.Tools.NetStats.MetricCollection::TryGetEvent(Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<TEvent>&)
// 0x0000000C System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::.ctor(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable>,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>)
extern void MetricDispatcher__ctor_m28B86E71944BAC620D312D2F42316D3A5338FADC (void);
// 0x0000000D System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::RegisterObserver(Unity.Multiplayer.Tools.NetStats.IMetricObserver)
extern void MetricDispatcher_RegisterObserver_m7F92DF455F2E02A1B24B4EF95D89620FF96FD096 (void);
// 0x0000000E System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::SetConnectionId(System.UInt64)
extern void MetricDispatcher_SetConnectionId_m8FFA43FEE838D7D94B16012216227023504068A6 (void);
// 0x0000000F System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::Dispatch()
extern void MetricDispatcher_Dispatch_m89DC7BD524CF1AD09AEF3820C75AD3E9A13291BB (void);
// 0x00000010 Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithCounters(Unity.Multiplayer.Tools.NetStats.Counter[])
extern void MetricDispatcherBuilder_WithCounters_m5BDE184D8E8544AEEC6EAA32CBE1E772EB5B5D70 (void);
// 0x00000011 Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithGauges(Unity.Multiplayer.Tools.NetStats.Gauge[])
extern void MetricDispatcherBuilder_WithGauges_m9C16440A991ACBA98AE1D9CF20E72BF9A335637C (void);
// 0x00000012 Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
// 0x00000013 Unity.Multiplayer.Tools.NetStats.IMetricDispatcher Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::Build()
extern void MetricDispatcherBuilder_Build_m3090A95805D0F1896E8B0BFA12F68AA520F02BB0 (void);
// 0x00000014 System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::.ctor()
extern void MetricDispatcherBuilder__ctor_mF480977AFB8A533D394C09EBD1E13D0A34AC2CA4 (void);
// 0x00000015 System.Void Unity.Multiplayer.Tools.NetStats.Counter::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,System.Int64)
extern void Counter__ctor_m34020D3116A2C65E64FBC345084D0EDC3CE6E359 (void);
// 0x00000016 System.Void Unity.Multiplayer.Tools.NetStats.Counter::Increment(System.Int64)
extern void Counter_Increment_m206FA1D3A051DF1FDB7A21C288DA88FA239789EB (void);
// 0x00000017 System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
// 0x00000018 Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.EventMetric`1::get_Id()
// 0x00000019 System.Collections.Generic.IReadOnlyList`1<TValue> Unity.Multiplayer.Tools.NetStats.EventMetric`1::get_Values()
// 0x0000001A System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::get_ShouldResetOnDispatch()
// 0x0000001B System.UInt32 Unity.Multiplayer.Tools.NetStats.EventMetric`1::get_MaxNumberOfValues()
// 0x0000001C System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::get_WentOverLimit()
// 0x0000001D System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1::set_WentOverLimit(System.Boolean)
// 0x0000001E System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1::Mark(TValue)
// 0x0000001F System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1::Reset()
// 0x00000020 System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetricFactory::TryGetFactoryTypeName(System.Type,Unity.Collections.FixedString128Bytes&)
extern void EventMetricFactory_TryGetFactoryTypeName_m22726D37B34A69AB661E53EE41DE627DA928F2FE (void);
// 0x00000021 System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::.cctor()
extern void EventMetricFactory__cctor_m66251A2D18A61D95358328EC31785578F18095E4 (void);
// 0x00000022 System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType()
// 0x00000023 System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory/EventMetricFactoryImpl`1::.ctor()
// 0x00000024 System.Void Unity.Multiplayer.Tools.NetStats.Gauge::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,System.Double)
extern void Gauge__ctor_mD5300184C3691CC7771A20EC8D8CEDB2F90D3B20 (void);
// 0x00000025 System.Void Unity.Multiplayer.Tools.NetStats.Gauge::Set(System.Double)
extern void Gauge_Set_m568D72381A3C04DC7A46D3657906119251DC1FEB (void);
// 0x00000026 System.Boolean Unity.Multiplayer.Tools.NetStats.IEventMetric::get_WentOverLimit()
// 0x00000027 System.Collections.Generic.IReadOnlyList`1<TValue> Unity.Multiplayer.Tools.NetStats.IEventMetric`1::get_Values()
// 0x00000028 TValue Unity.Multiplayer.Tools.NetStats.IMetric`1::get_Value()
// 0x00000029 System.Boolean Unity.Multiplayer.Tools.NetStats.IResettable::get_ShouldResetOnDispatch()
// 0x0000002A System.Void Unity.Multiplayer.Tools.NetStats.IResettable::Reset()
// 0x0000002B System.Void Unity.Multiplayer.Tools.NetStats.Metric`1::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,TValue)
// 0x0000002C Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.Metric`1::get_Id()
// 0x0000002D TValue Unity.Multiplayer.Tools.NetStats.Metric`1::get_Value()
// 0x0000002E System.Void Unity.Multiplayer.Tools.NetStats.Metric`1::set_Value(TValue)
// 0x0000002F TValue Unity.Multiplayer.Tools.NetStats.Metric`1::get_DefaultValue()
// 0x00000030 System.Boolean Unity.Multiplayer.Tools.NetStats.Metric`1::get_ShouldResetOnDispatch()
// 0x00000031 System.Void Unity.Multiplayer.Tools.NetStats.Metric`1::set_ShouldResetOnDispatch(System.Boolean)
// 0x00000032 System.Void Unity.Multiplayer.Tools.NetStats.Metric`1::Reset()
// 0x00000033 System.Void Unity.Multiplayer.Tools.NetStats.AssemblyRequiresTypeRegistrationAttribute::.ctor()
extern void AssemblyRequiresTypeRegistrationAttribute__ctor_m3A101E436469A6D656BC8698414FF61A81B6489E (void);
// 0x00000034 System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::get_TypeIndex()
extern void MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2 (void);
// 0x00000035 System.Void Unity.Multiplayer.Tools.NetStats.MetricId::set_TypeIndex(System.Int32)
extern void MetricId_set_TypeIndex_mAC9DA10DAB9FDC1D1CB28142FA3D57781A4C2316 (void);
// 0x00000036 System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::get_EnumValue()
extern void MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949 (void);
// 0x00000037 System.Void Unity.Multiplayer.Tools.NetStats.MetricId::set_EnumValue(System.Int32)
extern void MetricId_set_EnumValue_m45AD5DD6613D6D657C83F81B1C6BAD4101EBA82E (void);
// 0x00000038 System.String Unity.Multiplayer.Tools.NetStats.MetricId::get_Name()
extern void MetricId_get_Name_mB7FB04F0B3361F6350D1375EA554403E059E0538 (void);
// 0x00000039 System.Void Unity.Multiplayer.Tools.NetStats.MetricId::.ctor(System.Type,System.Int32)
extern void MetricId__ctor_m5C9A08C428BDD9C1A14BB98875BA3573358BAA46 (void);
// 0x0000003A Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.MetricId::Create(T)
// 0x0000003B System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId::Equals(Unity.Multiplayer.Tools.NetStats.MetricId)
extern void MetricId_Equals_mCD082A093E6F7BA4C383C45BBC651CDFBB9ECBF8 (void);
// 0x0000003C System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId::Equals(System.Object)
extern void MetricId_Equals_m7E1641625966F7C53CF769CB7D90A1B881FC8A7B (void);
// 0x0000003D System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::GetHashCode()
extern void MetricId_GetHashCode_m1F491EB5BBED580DC9D06EE60EB37A4EA6592872 (void);
// 0x0000003E System.String Unity.Multiplayer.Tools.NetStats.MetricId::ToString()
extern void MetricId_ToString_m1E4C105CA8DD0D7C416E3403C57679F5D8497914 (void);
// 0x0000003F System.String Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_DisplayName()
extern void MetricMetadataAttribute_get_DisplayName_m6A734721829A018646FB2413F0649E5D23399703 (void);
// 0x00000040 System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_DisplayName(System.String)
extern void MetricMetadataAttribute_set_DisplayName_mB3BBDCFD30ECAE1AD2F42B1CAABA8813AE54D15A (void);
// 0x00000041 Unity.Multiplayer.Tools.NetStats.MetricKind Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_MetricKind()
extern void MetricMetadataAttribute_get_MetricKind_m0CF8CE2AE613BB85D4F373AB0C8B734E9B94D19F (void);
// 0x00000042 System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_MetricKind(Unity.Multiplayer.Tools.NetStats.MetricKind)
extern void MetricMetadataAttribute_set_MetricKind_m38C083F9087F7C11044E28CEAFD8BEB706A23072 (void);
// 0x00000043 Unity.Multiplayer.Tools.NetStats.Units Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_Units()
extern void MetricMetadataAttribute_get_Units_m25F92CE37664463460011164824D5E5CE07DA331 (void);
// 0x00000044 System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_Units(Unity.Multiplayer.Tools.NetStats.Units)
extern void MetricMetadataAttribute_set_Units_m6A7BBCFC74D7D98BC3F3C5D4BF4E3FD1FC8B4D98 (void);
// 0x00000045 System.Boolean Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_DisplayAsPercentage()
extern void MetricMetadataAttribute_get_DisplayAsPercentage_mE2F870C594CCFD23DC9292371D3D4454933A6D60 (void);
// 0x00000046 System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_DisplayAsPercentage(System.Boolean)
extern void MetricMetadataAttribute_set_DisplayAsPercentage_m907228DDFC849ED0495D6D5E612C6BFB87927DC2 (void);
// 0x00000047 System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::.ctor()
extern void MetricMetadataAttribute__ctor_m961DA3FB66A28C97D6C619B5468B3A04D38AAFC1 (void);
// 0x00000048 System.String Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute::get_DisplayName()
extern void MetricTypeEnumAttribute_get_DisplayName_mE36F6CCB65BEC799571706F2A8033CBBE4F59338 (void);
// 0x00000049 System.Void Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute::set_DisplayName(System.String)
extern void MetricTypeEnumAttribute_set_DisplayName_m6C788A8B17FC606824526F8270A92E8B7D9DCF0C (void);
// 0x0000004A System.Void Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute::.ctor()
extern void MetricTypeEnumAttribute__ctor_m836FB2CB02905DA1FA4AB480C40164D195E14223 (void);
// 0x0000004B Unity.Multiplayer.Tools.NetStats.SortPriority Unity.Multiplayer.Tools.NetStats.MetricTypeSortPriorityAttribute::get_SortPriority()
extern void MetricTypeSortPriorityAttribute_get_SortPriority_m8D2EBBE907FC077A7E00EA48E90FC31E5211C041 (void);
// 0x0000004C System.Void Unity.Multiplayer.Tools.NetStats.MetricTypeSortPriorityAttribute::set_SortPriority(Unity.Multiplayer.Tools.NetStats.SortPriority)
extern void MetricTypeSortPriorityAttribute_set_SortPriority_m030E89E019833CF9E64B29A97573CE718E2CDD3C (void);
// 0x0000004D System.Void Unity.Multiplayer.Tools.NetStats.MetricTypeSortPriorityAttribute::.ctor()
extern void MetricTypeSortPriorityAttribute__ctor_m7C7803457D2E568B5B86EECCBD170E158707B068 (void);
// 0x0000004E System.Void Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::.cctor()
extern void MetricIdTypeLibrary__cctor_mCD455C298941DFF432397009EB1E025C2CF8DA3F (void);
// 0x0000004F System.Void Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::TypeRegistrationPostProcess()
extern void MetricIdTypeLibrary_TypeRegistrationPostProcess_m2ED7193F1DEE7DD8745113DB6512A52F78483952 (void);
// 0x00000050 System.Int32 Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetTypeIndex(System.Type)
extern void MetricIdTypeLibrary_GetTypeIndex_m265EA534C9138756F8BDF36979AD8DE7E27F4948 (void);
// 0x00000051 System.String Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumName(System.Int32,System.Int32)
extern void MetricIdTypeLibrary_GetEnumName_m6BF7D76EA20AE4D839BFA6AD4438E42108454505 (void);
// 0x00000052 T Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumMetadata(System.Collections.Generic.List`1<T[]>,System.Int32,System.Int32)
// 0x00000053 System.Void Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary/<>c::.cctor()
extern void U3CU3Ec__cctor_m5F037611ABDD73513F8B50055B5325CB53C242A8 (void);
// 0x00000054 System.Void Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary/<>c::.ctor()
extern void U3CU3Ec__ctor_mABB13FFB00DA24DF8DCDC117170D07E8476D24AF (void);
// 0x00000055 System.Int32 Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary/<>c::<TypeRegistrationPostProcess>b__14_0(System.Type,System.Type)
extern void U3CU3Ec_U3CTypeRegistrationPostProcessU3Eb__14_0_mE245FCA63B01EDF4551CD6E05AA6A8EDDFDE618B (void);
// 0x00000056 System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
// 0x00000057 System.Void Unity.Multiplayer.Tools.NetStats.TypeRegistration::RunIfNeeded()
extern void TypeRegistration_RunIfNeeded_m72FC7892EE2D74AB50A190F3BAC31D8A40B7B8D1 (void);
// 0x00000058 System.Void Unity.Multiplayer.Tools.NetStats.TypeRegistration::.cctor()
extern void TypeRegistration__cctor_m3E5A1B1B0C5C0187CAA34956DA10698C0F2F94AA (void);
// 0x00000059 System.String Unity.Multiplayer.Tools.NetStats.BaseUnitExtensions::GetSymbol(Unity.Multiplayer.Tools.NetStats.BaseUnit)
extern void BaseUnitExtensions_GetSymbol_m6CBC48A31A0BA8819D2AF964CE057C830EEA9EC9 (void);
// 0x0000005A System.SByte Unity.Multiplayer.Tools.NetStats.BaseUnits::get_BytesExponent()
extern void BaseUnits_get_BytesExponent_m3D9D6BA717AE6ED3B84025809F9865FFF76DD65B (void);
// 0x0000005B System.SByte Unity.Multiplayer.Tools.NetStats.BaseUnits::get_SecondsExponent()
extern void BaseUnits_get_SecondsExponent_m0962F79C317A279BBD26249C7266C50EDBE3083B (void);
// 0x0000005C System.Void Unity.Multiplayer.Tools.NetStats.BaseUnits::.ctor(System.SByte,System.SByte)
extern void BaseUnits__ctor_m1396BC7693FF6504BF2B7ED2794AC85BDE235D48 (void);
// 0x0000005D Unity.Multiplayer.Tools.NetStats.BaseUnits Unity.Multiplayer.Tools.NetStats.BaseUnits::WithSeconds(System.SByte)
extern void BaseUnits_WithSeconds_mECDB84B85C4DDB8353C701D27149B24A2DF607BA (void);
// 0x0000005E System.Boolean Unity.Multiplayer.Tools.NetStats.BaseUnits::Equals(Unity.Multiplayer.Tools.NetStats.BaseUnits)
extern void BaseUnits_Equals_m823AFB4848A12AA7C04CE11C13659FC2E3C5A798 (void);
// 0x0000005F System.Boolean Unity.Multiplayer.Tools.NetStats.BaseUnits::Equals(System.Object)
extern void BaseUnits_Equals_mD99804AD2103B60EDC48CAD120C570D1640A200F (void);
// 0x00000060 System.Int32 Unity.Multiplayer.Tools.NetStats.BaseUnits::GetHashCode()
extern void BaseUnits_GetHashCode_mA7BA62BD84B195F12255DCC6F169307F7607C393 (void);
// 0x00000061 System.SByte Unity.Multiplayer.Tools.NetStats.BaseUnits::GetExponent(Unity.Multiplayer.Tools.NetStats.BaseUnit)
extern void BaseUnits_GetExponent_mB3C460AE7CE52DE9F8CD4129DAA6A60E676D87F6 (void);
// 0x00000062 System.ValueTuple`2<System.String,System.String> Unity.Multiplayer.Tools.NetStats.BaseUnits::get_NumeratorAndDenominatorDisplayStrings()
extern void BaseUnits_get_NumeratorAndDenominatorDisplayStrings_mA305104EDA27F388E687740F9D9A651A21710F95 (void);
// 0x00000063 System.String Unity.Multiplayer.Tools.NetStats.BaseUnits::get_DisplayString()
extern void BaseUnits_get_DisplayString_mFE868FF1EFA0FD03336C15B16ADC6545D953818A (void);
// 0x00000064 System.String Unity.Multiplayer.Tools.NetStats.BaseUnits::ToString()
extern void BaseUnits_ToString_m3F4139F573CE238EE5915AA857BDDD624B7C7568 (void);
// 0x00000065 System.Void Unity.Multiplayer.Tools.NetStats.BaseUnits::.cctor()
extern void BaseUnits__cctor_mA331AAAEE7E92659D8989B76A6368ED155182408 (void);
// 0x00000066 System.Void Unity.Multiplayer.Tools.NetStats.BaseUnits::<get_NumeratorAndDenominatorDisplayStrings>g__AddUnit|14_0(Unity.Multiplayer.Tools.NetStats.BaseUnit,System.SByte,System.String&)
extern void BaseUnits_U3Cget_NumeratorAndDenominatorDisplayStringsU3Eg__AddUnitU7C14_0_m249951BABC6C020916D4E559F137C6E143B4B0DC (void);
// 0x00000067 Unity.Multiplayer.Tools.NetStats.BaseUnits Unity.Multiplayer.Tools.NetStats.UnitExtensions::GetBaseUnits(Unity.Multiplayer.Tools.NetStats.Units)
extern void UnitExtensions_GetBaseUnits_mCDACF77CA6BA396DCCC57D0902D094A5B9244767 (void);
static Il2CppMethodPointer s_methodPointers[103] = 
{
	EmbeddedAttribute__ctor_m1A50BB75A5F555C8968ADB6984C57DC62EA1069B,
	IsReadOnlyAttribute__ctor_m599914EA2593849AF9B26E3B60E6B395D4A229F5,
	IsUnmanagedAttribute__ctor_m95D3170354BA42728491DE36D73D92AC58DAB066,
	NULL,
	NULL,
	NULL,
	NULL,
	MetricCollection__ctor_m3EEFCAB26EFDF3C0651CE7277CAC66F35FF33CC4,
	MetricCollection_set_ConnectionId_m234B3D6EC6CE42E53DB8959567889F0DBEA49798,
	MetricCollection_TryGetCounter_mD94B33BAF0ED4D0B774597800ACA6AC45214230D,
	NULL,
	MetricDispatcher__ctor_m28B86E71944BAC620D312D2F42316D3A5338FADC,
	MetricDispatcher_RegisterObserver_m7F92DF455F2E02A1B24B4EF95D89620FF96FD096,
	MetricDispatcher_SetConnectionId_m8FFA43FEE838D7D94B16012216227023504068A6,
	MetricDispatcher_Dispatch_m89DC7BD524CF1AD09AEF3820C75AD3E9A13291BB,
	MetricDispatcherBuilder_WithCounters_m5BDE184D8E8544AEEC6EAA32CBE1E772EB5B5D70,
	MetricDispatcherBuilder_WithGauges_m9C16440A991ACBA98AE1D9CF20E72BF9A335637C,
	NULL,
	MetricDispatcherBuilder_Build_m3090A95805D0F1896E8B0BFA12F68AA520F02BB0,
	MetricDispatcherBuilder__ctor_mF480977AFB8A533D394C09EBD1E13D0A34AC2CA4,
	Counter__ctor_m34020D3116A2C65E64FBC345084D0EDC3CE6E359,
	Counter_Increment_m206FA1D3A051DF1FDB7A21C288DA88FA239789EB,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	EventMetricFactory_TryGetFactoryTypeName_m22726D37B34A69AB661E53EE41DE627DA928F2FE,
	EventMetricFactory__cctor_m66251A2D18A61D95358328EC31785578F18095E4,
	NULL,
	NULL,
	Gauge__ctor_mD5300184C3691CC7771A20EC8D8CEDB2F90D3B20,
	Gauge_Set_m568D72381A3C04DC7A46D3657906119251DC1FEB,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AssemblyRequiresTypeRegistrationAttribute__ctor_m3A101E436469A6D656BC8698414FF61A81B6489E,
	MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2,
	MetricId_set_TypeIndex_mAC9DA10DAB9FDC1D1CB28142FA3D57781A4C2316,
	MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949,
	MetricId_set_EnumValue_m45AD5DD6613D6D657C83F81B1C6BAD4101EBA82E,
	MetricId_get_Name_mB7FB04F0B3361F6350D1375EA554403E059E0538,
	MetricId__ctor_m5C9A08C428BDD9C1A14BB98875BA3573358BAA46,
	NULL,
	MetricId_Equals_mCD082A093E6F7BA4C383C45BBC651CDFBB9ECBF8,
	MetricId_Equals_m7E1641625966F7C53CF769CB7D90A1B881FC8A7B,
	MetricId_GetHashCode_m1F491EB5BBED580DC9D06EE60EB37A4EA6592872,
	MetricId_ToString_m1E4C105CA8DD0D7C416E3403C57679F5D8497914,
	MetricMetadataAttribute_get_DisplayName_m6A734721829A018646FB2413F0649E5D23399703,
	MetricMetadataAttribute_set_DisplayName_mB3BBDCFD30ECAE1AD2F42B1CAABA8813AE54D15A,
	MetricMetadataAttribute_get_MetricKind_m0CF8CE2AE613BB85D4F373AB0C8B734E9B94D19F,
	MetricMetadataAttribute_set_MetricKind_m38C083F9087F7C11044E28CEAFD8BEB706A23072,
	MetricMetadataAttribute_get_Units_m25F92CE37664463460011164824D5E5CE07DA331,
	MetricMetadataAttribute_set_Units_m6A7BBCFC74D7D98BC3F3C5D4BF4E3FD1FC8B4D98,
	MetricMetadataAttribute_get_DisplayAsPercentage_mE2F870C594CCFD23DC9292371D3D4454933A6D60,
	MetricMetadataAttribute_set_DisplayAsPercentage_m907228DDFC849ED0495D6D5E612C6BFB87927DC2,
	MetricMetadataAttribute__ctor_m961DA3FB66A28C97D6C619B5468B3A04D38AAFC1,
	MetricTypeEnumAttribute_get_DisplayName_mE36F6CCB65BEC799571706F2A8033CBBE4F59338,
	MetricTypeEnumAttribute_set_DisplayName_m6C788A8B17FC606824526F8270A92E8B7D9DCF0C,
	MetricTypeEnumAttribute__ctor_m836FB2CB02905DA1FA4AB480C40164D195E14223,
	MetricTypeSortPriorityAttribute_get_SortPriority_m8D2EBBE907FC077A7E00EA48E90FC31E5211C041,
	MetricTypeSortPriorityAttribute_set_SortPriority_m030E89E019833CF9E64B29A97573CE718E2CDD3C,
	MetricTypeSortPriorityAttribute__ctor_m7C7803457D2E568B5B86EECCBD170E158707B068,
	MetricIdTypeLibrary__cctor_mCD455C298941DFF432397009EB1E025C2CF8DA3F,
	MetricIdTypeLibrary_TypeRegistrationPostProcess_m2ED7193F1DEE7DD8745113DB6512A52F78483952,
	MetricIdTypeLibrary_GetTypeIndex_m265EA534C9138756F8BDF36979AD8DE7E27F4948,
	MetricIdTypeLibrary_GetEnumName_m6BF7D76EA20AE4D839BFA6AD4438E42108454505,
	NULL,
	U3CU3Ec__cctor_m5F037611ABDD73513F8B50055B5325CB53C242A8,
	U3CU3Ec__ctor_mABB13FFB00DA24DF8DCDC117170D07E8476D24AF,
	U3CU3Ec_U3CTypeRegistrationPostProcessU3Eb__14_0_mE245FCA63B01EDF4551CD6E05AA6A8EDDFDE618B,
	NULL,
	TypeRegistration_RunIfNeeded_m72FC7892EE2D74AB50A190F3BAC31D8A40B7B8D1,
	TypeRegistration__cctor_m3E5A1B1B0C5C0187CAA34956DA10698C0F2F94AA,
	BaseUnitExtensions_GetSymbol_m6CBC48A31A0BA8819D2AF964CE057C830EEA9EC9,
	BaseUnits_get_BytesExponent_m3D9D6BA717AE6ED3B84025809F9865FFF76DD65B,
	BaseUnits_get_SecondsExponent_m0962F79C317A279BBD26249C7266C50EDBE3083B,
	BaseUnits__ctor_m1396BC7693FF6504BF2B7ED2794AC85BDE235D48,
	BaseUnits_WithSeconds_mECDB84B85C4DDB8353C701D27149B24A2DF607BA,
	BaseUnits_Equals_m823AFB4848A12AA7C04CE11C13659FC2E3C5A798,
	BaseUnits_Equals_mD99804AD2103B60EDC48CAD120C570D1640A200F,
	BaseUnits_GetHashCode_mA7BA62BD84B195F12255DCC6F169307F7607C393,
	BaseUnits_GetExponent_mB3C460AE7CE52DE9F8CD4129DAA6A60E676D87F6,
	BaseUnits_get_NumeratorAndDenominatorDisplayStrings_mA305104EDA27F388E687740F9D9A651A21710F95,
	BaseUnits_get_DisplayString_mFE868FF1EFA0FD03336C15B16ADC6545D953818A,
	BaseUnits_ToString_m3F4139F573CE238EE5915AA857BDDD624B7C7568,
	BaseUnits__cctor_mA331AAAEE7E92659D8989B76A6368ED155182408,
	BaseUnits_U3Cget_NumeratorAndDenominatorDisplayStringsU3Eg__AddUnitU7C14_0_m249951BABC6C020916D4E559F137C6E143B4B0DC,
	UnitExtensions_GetBaseUnits_mCDACF77CA6BA396DCCC57D0902D094A5B9244767,
};
extern void MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2_AdjustorThunk (void);
extern void MetricId_set_TypeIndex_mAC9DA10DAB9FDC1D1CB28142FA3D57781A4C2316_AdjustorThunk (void);
extern void MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949_AdjustorThunk (void);
extern void MetricId_set_EnumValue_m45AD5DD6613D6D657C83F81B1C6BAD4101EBA82E_AdjustorThunk (void);
extern void MetricId_get_Name_mB7FB04F0B3361F6350D1375EA554403E059E0538_AdjustorThunk (void);
extern void MetricId__ctor_m5C9A08C428BDD9C1A14BB98875BA3573358BAA46_AdjustorThunk (void);
extern void MetricId_Equals_mCD082A093E6F7BA4C383C45BBC651CDFBB9ECBF8_AdjustorThunk (void);
extern void MetricId_Equals_m7E1641625966F7C53CF769CB7D90A1B881FC8A7B_AdjustorThunk (void);
extern void MetricId_GetHashCode_m1F491EB5BBED580DC9D06EE60EB37A4EA6592872_AdjustorThunk (void);
extern void MetricId_ToString_m1E4C105CA8DD0D7C416E3403C57679F5D8497914_AdjustorThunk (void);
extern void BaseUnits_get_BytesExponent_m3D9D6BA717AE6ED3B84025809F9865FFF76DD65B_AdjustorThunk (void);
extern void BaseUnits_get_SecondsExponent_m0962F79C317A279BBD26249C7266C50EDBE3083B_AdjustorThunk (void);
extern void BaseUnits__ctor_m1396BC7693FF6504BF2B7ED2794AC85BDE235D48_AdjustorThunk (void);
extern void BaseUnits_WithSeconds_mECDB84B85C4DDB8353C701D27149B24A2DF607BA_AdjustorThunk (void);
extern void BaseUnits_Equals_m823AFB4848A12AA7C04CE11C13659FC2E3C5A798_AdjustorThunk (void);
extern void BaseUnits_Equals_mD99804AD2103B60EDC48CAD120C570D1640A200F_AdjustorThunk (void);
extern void BaseUnits_GetHashCode_mA7BA62BD84B195F12255DCC6F169307F7607C393_AdjustorThunk (void);
extern void BaseUnits_GetExponent_mB3C460AE7CE52DE9F8CD4129DAA6A60E676D87F6_AdjustorThunk (void);
extern void BaseUnits_get_NumeratorAndDenominatorDisplayStrings_mA305104EDA27F388E687740F9D9A651A21710F95_AdjustorThunk (void);
extern void BaseUnits_get_DisplayString_mFE868FF1EFA0FD03336C15B16ADC6545D953818A_AdjustorThunk (void);
extern void BaseUnits_ToString_m3F4139F573CE238EE5915AA857BDDD624B7C7568_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[21] = 
{
	{ 0x06000034, MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2_AdjustorThunk },
	{ 0x06000035, MetricId_set_TypeIndex_mAC9DA10DAB9FDC1D1CB28142FA3D57781A4C2316_AdjustorThunk },
	{ 0x06000036, MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949_AdjustorThunk },
	{ 0x06000037, MetricId_set_EnumValue_m45AD5DD6613D6D657C83F81B1C6BAD4101EBA82E_AdjustorThunk },
	{ 0x06000038, MetricId_get_Name_mB7FB04F0B3361F6350D1375EA554403E059E0538_AdjustorThunk },
	{ 0x06000039, MetricId__ctor_m5C9A08C428BDD9C1A14BB98875BA3573358BAA46_AdjustorThunk },
	{ 0x0600003B, MetricId_Equals_mCD082A093E6F7BA4C383C45BBC651CDFBB9ECBF8_AdjustorThunk },
	{ 0x0600003C, MetricId_Equals_m7E1641625966F7C53CF769CB7D90A1B881FC8A7B_AdjustorThunk },
	{ 0x0600003D, MetricId_GetHashCode_m1F491EB5BBED580DC9D06EE60EB37A4EA6592872_AdjustorThunk },
	{ 0x0600003E, MetricId_ToString_m1E4C105CA8DD0D7C416E3403C57679F5D8497914_AdjustorThunk },
	{ 0x0600005A, BaseUnits_get_BytesExponent_m3D9D6BA717AE6ED3B84025809F9865FFF76DD65B_AdjustorThunk },
	{ 0x0600005B, BaseUnits_get_SecondsExponent_m0962F79C317A279BBD26249C7266C50EDBE3083B_AdjustorThunk },
	{ 0x0600005C, BaseUnits__ctor_m1396BC7693FF6504BF2B7ED2794AC85BDE235D48_AdjustorThunk },
	{ 0x0600005D, BaseUnits_WithSeconds_mECDB84B85C4DDB8353C701D27149B24A2DF607BA_AdjustorThunk },
	{ 0x0600005E, BaseUnits_Equals_m823AFB4848A12AA7C04CE11C13659FC2E3C5A798_AdjustorThunk },
	{ 0x0600005F, BaseUnits_Equals_mD99804AD2103B60EDC48CAD120C570D1640A200F_AdjustorThunk },
	{ 0x06000060, BaseUnits_GetHashCode_mA7BA62BD84B195F12255DCC6F169307F7607C393_AdjustorThunk },
	{ 0x06000061, BaseUnits_GetExponent_mB3C460AE7CE52DE9F8CD4129DAA6A60E676D87F6_AdjustorThunk },
	{ 0x06000062, BaseUnits_get_NumeratorAndDenominatorDisplayStrings_mA305104EDA27F388E687740F9D9A651A21710F95_AdjustorThunk },
	{ 0x06000063, BaseUnits_get_DisplayString_mFE868FF1EFA0FD03336C15B16ADC6545D953818A_AdjustorThunk },
	{ 0x06000064, BaseUnits_ToString_m3F4139F573CE238EE5915AA857BDDD624B7C7568_AdjustorThunk },
};
static const int32_t s_InvokerIndices[103] = 
{
	3107,
	3107,
	3107,
	2556,
	2603,
	3107,
	2556,
	589,
	2603,
	1001,
	-1,
	895,
	2556,
	2603,
	3107,
	2273,
	2273,
	-1,
	3051,
	3107,
	1463,
	2535,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4255,
	5066,
	-1,
	-1,
	1462,
	2524,
	3002,
	-1,
	-1,
	3002,
	3107,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3107,
	3027,
	2534,
	3027,
	2534,
	3051,
	1481,
	-1,
	1863,
	1876,
	3027,
	3051,
	3051,
	2556,
	3027,
	2534,
	3027,
	2534,
	3002,
	2503,
	3107,
	3051,
	2556,
	3107,
	3027,
	2534,
	3107,
	5066,
	5066,
	4783,
	4384,
	-1,
	5066,
	3107,
	1105,
	-1,
	5066,
	5066,
	4855,
	3082,
	3082,
	1504,
	1669,
	1814,
	1876,
	3027,
	2323,
	2994,
	3051,
	3051,
	5066,
	4153,
	4693,
};
static const Il2CppTokenRangePair s_rgctxIndices[8] = 
{
	{ 0x0200000B, { 2, 8 } },
	{ 0x02000015, { 13, 2 } },
	{ 0x0600000B, { 0, 1 } },
	{ 0x06000012, { 1, 1 } },
	{ 0x06000022, { 10, 3 } },
	{ 0x0600003A, { 15, 2 } },
	{ 0x06000052, { 17, 1 } },
	{ 0x06000056, { 18, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[21] = 
{
	{ (Il2CppRGCTXDataType)2, 2455 },
	{ (Il2CppRGCTXDataType)3, 7537 },
	{ (Il2CppRGCTXDataType)2, 2722 },
	{ (Il2CppRGCTXDataType)3, 10730 },
	{ (Il2CppRGCTXDataType)1, 534 },
	{ (Il2CppRGCTXDataType)3, 10733 },
	{ (Il2CppRGCTXDataType)3, 7538 },
	{ (Il2CppRGCTXDataType)3, 7539 },
	{ (Il2CppRGCTXDataType)3, 10731 },
	{ (Il2CppRGCTXDataType)3, 10732 },
	{ (Il2CppRGCTXDataType)1, 184 },
	{ (Il2CppRGCTXDataType)2, 1588 },
	{ (Il2CppRGCTXDataType)3, 7526 },
	{ (Il2CppRGCTXDataType)3, 14011 },
	{ (Il2CppRGCTXDataType)3, 14010 },
	{ (Il2CppRGCTXDataType)1, 335 },
	{ (Il2CppRGCTXDataType)2, 335 },
	{ (Il2CppRGCTXDataType)3, 11000 },
	{ (Il2CppRGCTXDataType)3, 23175 },
	{ (Il2CppRGCTXDataType)3, 19593 },
	{ (Il2CppRGCTXDataType)2, 2456 },
};
extern const CustomAttributesCacheGenerator g_Unity_Multiplayer_Tools_NetStats_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Multiplayer_Tools_NetStats_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Multiplayer_Tools_NetStats_CodeGenModule = 
{
	"Unity.Multiplayer.Tools.NetStats.dll",
	103,
	s_methodPointers,
	21,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	8,
	s_rgctxIndices,
	21,
	s_rgctxValues,
	NULL,
	g_Unity_Multiplayer_Tools_NetStats_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
