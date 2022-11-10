#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* RewindableAllocator_TryU24BurstManaged_m94F53843161FC7D54FE03A65FEEF91AEC1A85082_RuntimeMethod_var;
extern const RuntimeMethod* RewindableAllocator_Try_mF6E7F53E1E6F100CFE4D0449B40BADCA6877E5C2_RuntimeMethod_var;
extern const RuntimeMethod* SlabAllocator_TryU24BurstManaged_m69BA0BDD9CB936BB95076F93FB4404886E9E3653_RuntimeMethod_var;
extern const RuntimeMethod* SlabAllocator_Try_m935C49B4A7F1F65EA55A3DBBDD2699BF94B53E74_RuntimeMethod_var;
extern const RuntimeMethod* StackAllocator_TryU24BurstManaged_mD9C996BEAB7838301DE0D3BC0F0EA502157D2F84_RuntimeMethod_var;
extern const RuntimeMethod* StackAllocator_Try_m112E33FC058E6A640E7E6E21D95986C5E9D5ECAB_RuntimeMethod_var;



// 0x00000001 System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
extern void EmbeddedAttribute__ctor_mE19BFF00D03833D46FC6E6B83A9C5E708E7E665D (void);
// 0x00000002 System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
extern void IsReadOnlyAttribute__ctor_m34A120993044E67D397DB90FF22BBF030B5C19DC (void);
// 0x00000003 System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
extern void IsUnmanagedAttribute__ctor_m05BDDBB49F005C47C815CD32668381083A1F5C43 (void);
// 0x00000004 Unity.Collections.AllocatorManager/Block Unity.Collections.AllocatorManager::AllocateBlock(T&,System.Int32,System.Int32,System.Int32)
// 0x00000005 System.Void* Unity.Collections.AllocatorManager::Allocate(T&,System.Int32,System.Int32,System.Int32)
// 0x00000006 U* Unity.Collections.AllocatorManager::Allocate(T&,U,System.Int32)
// 0x00000007 System.Void* Unity.Collections.AllocatorManager::AllocateStruct(T&,U,System.Int32)
// 0x00000008 System.Void Unity.Collections.AllocatorManager::FreeBlock(T&,Unity.Collections.AllocatorManager/Block&)
// 0x00000009 System.Void Unity.Collections.AllocatorManager::Free(T&,System.Void*,System.Int32,System.Int32,System.Int32)
// 0x0000000A System.Void Unity.Collections.AllocatorManager::Free(T&,U*,System.Int32)
// 0x0000000B System.Void Unity.Collections.AllocatorManager::Free(Unity.Collections.AllocatorManager/AllocatorHandle,T*,System.Int32)
// 0x0000000C System.Void Unity.Collections.AllocatorManager::CheckDelegate(System.Boolean&)
extern void AllocatorManager_CheckDelegate_m175E6C3C90B1A3D68C3D59AA49BBB6563577D71C (void);
// 0x0000000D System.Boolean Unity.Collections.AllocatorManager::UseDelegate()
extern void AllocatorManager_UseDelegate_m23D47BDAD0127B01BD975BE87DF9DD23069BEF62 (void);
// 0x0000000E System.Int32 Unity.Collections.AllocatorManager::allocate_block(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_allocate_block_mE0A20CC5EC650DA50CEB792D8036CD7182C15DE9 (void);
// 0x0000000F System.Void Unity.Collections.AllocatorManager::forward_mono_allocate_block(Unity.Collections.AllocatorManager/Block&,System.Int32&)
extern void AllocatorManager_forward_mono_allocate_block_m06263F166DBD93A94732FA30672731B18C9905C6 (void);
// 0x00000010 Unity.Collections.Allocator Unity.Collections.AllocatorManager::LegacyOf(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void AllocatorManager_LegacyOf_m8D09A3A92FE3119BDFB06BCCB551346112419344 (void);
// 0x00000011 System.Int32 Unity.Collections.AllocatorManager::TryLegacy(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_TryLegacy_m9B0857A8A6F5903761C7F7A4D11D0B09F7063B0C (void);
// 0x00000012 System.Int32 Unity.Collections.AllocatorManager::Try(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_Try_m9D21E077697EE410032DDC768E2D27CFC66145DE (void);
// 0x00000013 System.Boolean Unity.Collections.AllocatorManager::IsCustomAllocator(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void AllocatorManager_IsCustomAllocator_mD8CD3CDA361B05D851A729640383E1F07369B060 (void);
// 0x00000014 System.Void Unity.Collections.AllocatorManager::.cctor()
extern void AllocatorManager__cctor_mB68DC0C0F56649CE4C9010F11C9A42E309E46BFB (void);
// 0x00000015 System.Void Unity.Collections.AllocatorManager/TryFunction::.ctor(System.Object,System.IntPtr)
extern void TryFunction__ctor_m61B0A7506F9D0C752E09C91E3E3CC16034A41AA0 (void);
// 0x00000016 System.Int32 Unity.Collections.AllocatorManager/TryFunction::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void TryFunction_Invoke_m62DB13101BCEC040485DBD4F68E9B4B9406368DE (void);
// 0x00000017 System.IAsyncResult Unity.Collections.AllocatorManager/TryFunction::BeginInvoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&,System.AsyncCallback,System.Object)
extern void TryFunction_BeginInvoke_mDB5760D98471188127E578B6598BBD7D498ACCF2 (void);
// 0x00000018 System.Int32 Unity.Collections.AllocatorManager/TryFunction::EndInvoke(Unity.Collections.AllocatorManager/Block&,System.IAsyncResult)
extern void TryFunction_EndInvoke_m26A14616127F9673336FE6BB8C1202F6A7F27C44 (void);
// 0x00000019 Unity.Collections.AllocatorManager/TableEntry& Unity.Collections.AllocatorManager/AllocatorHandle::get_TableEntry()
extern void AllocatorHandle_get_TableEntry_mF3BC93F69AA3E1764A9770FEE595E263239B703D (void);
// 0x0000001A System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Rewind()
extern void AllocatorHandle_Rewind_mDBC3DC2236265F7F712121F0F3683F73B8609060 (void);
// 0x0000001B Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(Unity.Collections.Allocator)
extern void AllocatorHandle_op_Implicit_mBF56A735E4B575D7094AA21DAF4FD4FAB1EF94FA (void);
// 0x0000001C System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::get_Value()
extern void AllocatorHandle_get_Value_m5F4A923E36A6E1C8983F187DFF73AA659350790B (void);
// 0x0000001D System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::Try(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorHandle_Try_m2F88758592B176EF3A7CFDCB93599C0CE6A97148 (void);
// 0x0000001E Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::get_Handle()
extern void AllocatorHandle_get_Handle_m9CBE1298F12DFCBD71E6DBE77B08E5D0FD2F4A5E (void);
// 0x0000001F Unity.Collections.Allocator Unity.Collections.AllocatorManager/AllocatorHandle::get_ToAllocator()
extern void AllocatorHandle_get_ToAllocator_mC2F7F3B23A30D63C2A14984F5D25DDF117C5FEFF (void);
// 0x00000020 System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Dispose()
extern void AllocatorHandle_Dispose_m21567B9257F67FFE3EA2A5C44BE860BE641B0FA1 (void);
// 0x00000021 System.Void Unity.Collections.AllocatorManager/Range::Dispose()
extern void Range_Dispose_m466C86ACD4956014EE550CEC4245993E10629D42 (void);
// 0x00000022 System.Int64 Unity.Collections.AllocatorManager/Block::get_Bytes()
extern void Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA (void);
// 0x00000023 System.Int64 Unity.Collections.AllocatorManager/Block::get_AllocatedBytes()
extern void Block_get_AllocatedBytes_mC7DC93B1995B6837136BE97871E344CFDD32B907 (void);
// 0x00000024 System.Int32 Unity.Collections.AllocatorManager/Block::get_Alignment()
extern void Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF (void);
// 0x00000025 System.Void Unity.Collections.AllocatorManager/Block::set_Alignment(System.Int32)
extern void Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730 (void);
// 0x00000026 System.Void Unity.Collections.AllocatorManager/Block::Dispose()
extern void Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9 (void);
// 0x00000027 System.Int32 Unity.Collections.AllocatorManager/Block::TryFree()
extern void Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1 (void);
// 0x00000028 System.Int32 Unity.Collections.AllocatorManager/IAllocator::Try(Unity.Collections.AllocatorManager/Block&)
// 0x00000029 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/IAllocator::get_Handle()
// 0x0000002A Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/StackAllocator::get_Handle()
extern void StackAllocator_get_Handle_m22001B4045E018527C5B35D6715B550B6002C7ED (void);
// 0x0000002B System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_Try_m9E77FFC5B3DB94A6A738F9659B23FB48F675825D (void);
// 0x0000002C System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_Try_m112E33FC058E6A640E7E6E21D95986C5E9D5ECAB (void);
// 0x0000002D System.Void Unity.Collections.AllocatorManager/StackAllocator::Dispose()
extern void StackAllocator_Dispose_m121AA556092D97A553B56BE62D67332183F4F678 (void);
// 0x0000002E System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_TryU24BurstManaged_mD9C996BEAB7838301DE0D3BC0F0EA502157D2F84 (void);
// 0x0000002F System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097F$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_0000097FU24PostfixBurstDelegate__ctor_m2F43652B61CA4B4F77EAE3A9F15BAF3BFD23AAB6 (void);
// 0x00000030 System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_0000097F$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000097FU24PostfixBurstDelegate_Invoke_m7699619275F46D251021E0F285C5D1CA05DE6FA6 (void);
// 0x00000031 System.IAsyncResult Unity.Collections.AllocatorManager/StackAllocator/Try_0000097F$PostfixBurstDelegate::BeginInvoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&,System.AsyncCallback,System.Object)
extern void Try_0000097FU24PostfixBurstDelegate_BeginInvoke_m23B94F95041C4552E6314E51899A8D9F17A7C8E2 (void);
// 0x00000032 System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_0000097F$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
extern void Try_0000097FU24PostfixBurstDelegate_EndInvoke_m850E6195458A006B059617B0A52A30AB360F247D (void);
// 0x00000033 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097F$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_0000097FU24BurstDirectCall_GetFunctionPointerDiscard_m684898C8C3C2EF9B95C091A2DFD93A0E43387279 (void);
// 0x00000034 System.IntPtr Unity.Collections.AllocatorManager/StackAllocator/Try_0000097F$BurstDirectCall::GetFunctionPointer()
extern void Try_0000097FU24BurstDirectCall_GetFunctionPointer_mE9231BF5330D81A318761A06B082B084CC89524B (void);
// 0x00000035 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097F$BurstDirectCall::Constructor()
extern void Try_0000097FU24BurstDirectCall_Constructor_m1E9C5EA8350A676B88E64964AE9C60EEE1C8FBFD (void);
// 0x00000036 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097F$BurstDirectCall::Initialize()
extern void Try_0000097FU24BurstDirectCall_Initialize_mB56A1C6FF75DAB16FB9A8315AC0D7F1B392A071E (void);
// 0x00000037 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097F$BurstDirectCall::.cctor()
extern void Try_0000097FU24BurstDirectCall__cctor_mA50CA8D83461D10BD79F6685862F53BD448AB2E2 (void);
// 0x00000038 System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_0000097F$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000097FU24BurstDirectCall_Invoke_m47D899BAA9331047E34009FEE2F4F038FD859F97 (void);
// 0x00000039 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/SlabAllocator::get_Handle()
extern void SlabAllocator_get_Handle_m1BAE636499EF06990B084B49FF05100F4D70C6D7 (void);
// 0x0000003A System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::get_SlabSizeInBytes()
extern void SlabAllocator_get_SlabSizeInBytes_m09758AFE572F9BA8007BB7ED308086BA629DE685 (void);
// 0x0000003B System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_Try_m18522CF564EE22D2C7FD7C098087906032E53CE3 (void);
// 0x0000003C System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_Try_m935C49B4A7F1F65EA55A3DBBDD2699BF94B53E74 (void);
// 0x0000003D System.Void Unity.Collections.AllocatorManager/SlabAllocator::Dispose()
extern void SlabAllocator_Dispose_m5FD3C0E10FE09952A8F99656821B2D7F3B3E578F (void);
// 0x0000003E System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_TryU24BurstManaged_m69BA0BDD9CB936BB95076F93FB4404886E9E3653 (void);
// 0x0000003F System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098D$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_0000098DU24PostfixBurstDelegate__ctor_mAB977BCAA29E4584E94738117B7264CE61775A2C (void);
// 0x00000040 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098D$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000098DU24PostfixBurstDelegate_Invoke_m2D2F698C1146432FB7A4BDE76FE8EF790E1587A7 (void);
// 0x00000041 System.IAsyncResult Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098D$PostfixBurstDelegate::BeginInvoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&,System.AsyncCallback,System.Object)
extern void Try_0000098DU24PostfixBurstDelegate_BeginInvoke_mBE8708B51E9C1E2CDA7159233604D2D44BEC1104 (void);
// 0x00000042 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098D$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
extern void Try_0000098DU24PostfixBurstDelegate_EndInvoke_m34C3B0B6740984FE4041A4949937627C6E5CF4ED (void);
// 0x00000043 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098D$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_0000098DU24BurstDirectCall_GetFunctionPointerDiscard_m8BEB195D22420B1973341712B5F6B5BAA0B79A8A (void);
// 0x00000044 System.IntPtr Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098D$BurstDirectCall::GetFunctionPointer()
extern void Try_0000098DU24BurstDirectCall_GetFunctionPointer_mE6CE8A6AF1740D87900CAD6BE49E16F936664DCD (void);
// 0x00000045 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098D$BurstDirectCall::Constructor()
extern void Try_0000098DU24BurstDirectCall_Constructor_m9D9178AFE7080D326450B733A6919858743F1B66 (void);
// 0x00000046 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098D$BurstDirectCall::Initialize()
extern void Try_0000098DU24BurstDirectCall_Initialize_m5941729FC6CB725EB4DD6E3D0D3E855C04E4F1DD (void);
// 0x00000047 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098D$BurstDirectCall::.cctor()
extern void Try_0000098DU24BurstDirectCall__cctor_mD5F120C307E12BBA294DC18F77AE0FF2EDFB10F1 (void);
// 0x00000048 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098D$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000098DU24BurstDirectCall_Invoke_m9E1A6AAD9C0B9AF2B528555FAE2C1D151EFB55F5 (void);
// 0x00000049 System.Int32 Unity.Collections.AllocatorManager/Array32768`1::get_Length()
// 0x0000004A System.Void Unity.Collections.AllocatorManager/Array32768`1::set_Length(System.Int32)
// 0x0000004B T& Unity.Collections.AllocatorManager/Array32768`1::ElementAt(System.Int32)
// 0x0000004C System.Void Unity.Collections.AllocatorManager/SharedStatics/TableEntry::.cctor()
extern void TableEntry__cctor_m77F1538AA964864B232693F2DF397D649146E3FF (void);
// 0x0000004D System.Void Unity.Collections.AllocatorManager/Managed::.cctor()
extern void Managed__cctor_m6E6143AAF84278AE2DBA8E20E72380A94802DE40 (void);
// 0x0000004E System.Void Unity.Collections.CreatePropertyAttribute::.ctor()
extern void CreatePropertyAttribute__ctor_mE5AD2035801359532F3ABA06B2E67CB664930A68 (void);
// 0x0000004F System.Void Unity.Collections.BurstCompatibleAttribute::set_GenericTypeArguments(System.Type[])
extern void BurstCompatibleAttribute_set_GenericTypeArguments_mEEF019AFEFB1DCC2C6DC2E33C7BE33DECCD8DD5A (void);
// 0x00000050 System.Void Unity.Collections.BurstCompatibleAttribute::.ctor()
extern void BurstCompatibleAttribute__ctor_m5D7D5245014D5EF879BB02B137717AADED72CA4C (void);
// 0x00000051 System.Void Unity.Collections.NotBurstCompatibleAttribute::.ctor()
extern void NotBurstCompatibleAttribute__ctor_m1A03DFE74AB05DBB234C15F707ABD0AC4C91ED63 (void);
// 0x00000052 System.Int32 Unity.Collections.CollectionHelper::Align(System.Int32,System.Int32)
extern void CollectionHelper_Align_mB050A42548A605C097FC51EAC5E1E79E473D4DA3 (void);
// 0x00000053 System.UInt32 Unity.Collections.CollectionHelper::Hash(System.Void*,System.Int32)
extern void CollectionHelper_Hash_mB39892EEEA8CD9C96B06E37EF3022A5E7557D178 (void);
// 0x00000054 System.Boolean Unity.Collections.CollectionHelper::ShouldDeallocate(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void CollectionHelper_ShouldDeallocate_mC18522E3BA69F147EF876DBF817649CA98CB5C72 (void);
// 0x00000055 System.Int32 Unity.Collections.CollectionHelper::AssumePositive(System.Int32)
extern void CollectionHelper_AssumePositive_m3B3ABDDCACD457581AB325583563481AF0A06D68 (void);
// 0x00000056 Unity.Collections.NativeArray`1<T> Unity.Collections.CollectionHelper::CreateNativeArray(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,Unity.Collections.NativeArrayOptions)
// 0x00000057 System.Void Unity.Collections.Pair`2::.ctor(Key,Value)
// 0x00000058 System.String Unity.Collections.Pair`2::ToString()
// 0x00000059 System.Int32 Unity.Collections.FixedList::PaddingBytes()
// 0x0000005A System.Int32 Unity.Collections.FixedList::StorageBytes()
// 0x0000005B System.Int32 Unity.Collections.FixedList::Capacity()
// 0x0000005C System.Int32 Unity.Collections.FixedList32Bytes`1::get_Length()
// 0x0000005D System.Void Unity.Collections.FixedList32Bytes`1::set_Length(System.Int32)
// 0x0000005E System.Int32 Unity.Collections.FixedList32Bytes`1::get_LengthInBytes()
// 0x0000005F System.Byte* Unity.Collections.FixedList32Bytes`1::get_Buffer()
// 0x00000060 System.Int32 Unity.Collections.FixedList32Bytes`1::get_Capacity()
// 0x00000061 System.Int32 Unity.Collections.FixedList32Bytes`1::GetHashCode()
// 0x00000062 T[] Unity.Collections.FixedList32Bytes`1::ToArray()
// 0x00000063 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000064 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000065 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000066 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000067 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000068 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000069 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000006A System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000006B System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000006C System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000006D System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(System.Object)
// 0x0000006E System.Collections.IEnumerator Unity.Collections.FixedList32Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006F System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList32Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000070 System.Void Unity.Collections.FixedList32BytesDebugView`1::.ctor(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000071 T[] Unity.Collections.FixedList32BytesDebugView`1::get_Items()
// 0x00000072 System.Int32 Unity.Collections.FixedList64Bytes`1::get_Length()
// 0x00000073 System.Void Unity.Collections.FixedList64Bytes`1::set_Length(System.Int32)
// 0x00000074 System.Int32 Unity.Collections.FixedList64Bytes`1::get_LengthInBytes()
// 0x00000075 System.Byte* Unity.Collections.FixedList64Bytes`1::get_Buffer()
// 0x00000076 System.Int32 Unity.Collections.FixedList64Bytes`1::get_Capacity()
// 0x00000077 System.Int32 Unity.Collections.FixedList64Bytes`1::GetHashCode()
// 0x00000078 T[] Unity.Collections.FixedList64Bytes`1::ToArray()
// 0x00000079 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x0000007A System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x0000007B System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x0000007C System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x0000007D System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000007E System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000007F System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000080 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000081 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000082 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000083 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(System.Object)
// 0x00000084 System.Collections.IEnumerator Unity.Collections.FixedList64Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000085 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList64Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000086 System.Void Unity.Collections.FixedList64BytesDebugView`1::.ctor(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000087 T[] Unity.Collections.FixedList64BytesDebugView`1::get_Items()
// 0x00000088 System.Int32 Unity.Collections.FixedList128Bytes`1::get_Length()
// 0x00000089 System.Void Unity.Collections.FixedList128Bytes`1::set_Length(System.Int32)
// 0x0000008A System.Int32 Unity.Collections.FixedList128Bytes`1::get_LengthInBytes()
// 0x0000008B System.Byte* Unity.Collections.FixedList128Bytes`1::get_Buffer()
// 0x0000008C System.Int32 Unity.Collections.FixedList128Bytes`1::get_Capacity()
// 0x0000008D System.Int32 Unity.Collections.FixedList128Bytes`1::GetHashCode()
// 0x0000008E T[] Unity.Collections.FixedList128Bytes`1::ToArray()
// 0x0000008F System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000090 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000091 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000092 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000093 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000094 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000095 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000096 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000097 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000098 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000099 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(System.Object)
// 0x0000009A System.Collections.IEnumerator Unity.Collections.FixedList128Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009B System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList128Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000009C System.Void Unity.Collections.FixedList128BytesDebugView`1::.ctor(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000009D T[] Unity.Collections.FixedList128BytesDebugView`1::get_Items()
// 0x0000009E System.Int32 Unity.Collections.FixedList512Bytes`1::get_Length()
// 0x0000009F System.Void Unity.Collections.FixedList512Bytes`1::set_Length(System.Int32)
// 0x000000A0 System.Int32 Unity.Collections.FixedList512Bytes`1::get_LengthInBytes()
// 0x000000A1 System.Byte* Unity.Collections.FixedList512Bytes`1::get_Buffer()
// 0x000000A2 System.Int32 Unity.Collections.FixedList512Bytes`1::get_Capacity()
// 0x000000A3 System.Int32 Unity.Collections.FixedList512Bytes`1::GetHashCode()
// 0x000000A4 T[] Unity.Collections.FixedList512Bytes`1::ToArray()
// 0x000000A5 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x000000A6 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x000000A7 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x000000A8 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x000000A9 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x000000AA System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x000000AB System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x000000AC System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x000000AD System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x000000AE System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x000000AF System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(System.Object)
// 0x000000B0 System.Collections.IEnumerator Unity.Collections.FixedList512Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000B1 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList512Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000B2 System.Void Unity.Collections.FixedList512BytesDebugView`1::.ctor(Unity.Collections.FixedList512Bytes`1<T>)
// 0x000000B3 T[] Unity.Collections.FixedList512BytesDebugView`1::get_Items()
// 0x000000B4 System.Int32 Unity.Collections.FixedList4096Bytes`1::get_Length()
// 0x000000B5 System.Void Unity.Collections.FixedList4096Bytes`1::set_Length(System.Int32)
// 0x000000B6 System.Int32 Unity.Collections.FixedList4096Bytes`1::get_LengthInBytes()
// 0x000000B7 System.Byte* Unity.Collections.FixedList4096Bytes`1::get_Buffer()
// 0x000000B8 System.Int32 Unity.Collections.FixedList4096Bytes`1::get_Capacity()
// 0x000000B9 T Unity.Collections.FixedList4096Bytes`1::get_Item(System.Int32)
// 0x000000BA System.Void Unity.Collections.FixedList4096Bytes`1::set_Item(System.Int32,T)
// 0x000000BB System.Int32 Unity.Collections.FixedList4096Bytes`1::GetHashCode()
// 0x000000BC T[] Unity.Collections.FixedList4096Bytes`1::ToArray()
// 0x000000BD System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x000000BE System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x000000BF System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x000000C0 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x000000C1 System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x000000C2 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x000000C3 System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x000000C4 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x000000C5 System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x000000C6 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x000000C7 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(System.Object)
// 0x000000C8 System.Collections.IEnumerator Unity.Collections.FixedList4096Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C9 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList4096Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000CA System.Void Unity.Collections.FixedList4096BytesDebugView`1::.ctor(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x000000CB T[] Unity.Collections.FixedList4096BytesDebugView`1::get_Items()
// 0x000000CC System.Byte* Unity.Collections.FixedString32Bytes::GetUnsafePtr()
extern void FixedString32Bytes_GetUnsafePtr_mC5ECAFEFC8B46192D40E7343B05E5E30E0CB7E3E (void);
// 0x000000CD System.Int32 Unity.Collections.FixedString32Bytes::get_Length()
extern void FixedString32Bytes_get_Length_m5BC3BD52F24399E2AABD131E4301DD073308674A (void);
// 0x000000CE System.Void Unity.Collections.FixedString32Bytes::set_Length(System.Int32)
extern void FixedString32Bytes_set_Length_m1BEEECA46CB0DE1A9D72828C079F776D9EA4D8BA (void);
// 0x000000CF System.Int32 Unity.Collections.FixedString32Bytes::get_Capacity()
extern void FixedString32Bytes_get_Capacity_mA4782F3A7A7B0FAFA1CFA5EC39D0C5B17E08EDF7 (void);
// 0x000000D0 System.Boolean Unity.Collections.FixedString32Bytes::TryResize(System.Int32,Unity.Collections.NativeArrayOptions)
extern void FixedString32Bytes_TryResize_mF4CDA9CB3EAA3E11C8A50B85852BCAB5AA0C96BA (void);
// 0x000000D1 System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(System.String)
extern void FixedString32Bytes_CompareTo_mF178913F9D6CB2E3D6BD34ABF448683B3906781F (void);
// 0x000000D2 System.Boolean Unity.Collections.FixedString32Bytes::Equals(System.String)
extern void FixedString32Bytes_Equals_m7BFD13BE12B020CF1CEF69C02F6DFEC001DF6FFF (void);
// 0x000000D3 System.Void Unity.Collections.FixedString32Bytes::.ctor(System.String)
extern void FixedString32Bytes__ctor_mC97DF326CAB40CB1B7105B805CD2A83C2484F198 (void);
// 0x000000D4 System.Int32 Unity.Collections.FixedString32Bytes::Initialize(System.String)
extern void FixedString32Bytes_Initialize_m558E56F9BB87AC90C26907859B66357CE06E9553 (void);
// 0x000000D5 System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(Unity.Collections.FixedString32Bytes)
extern void FixedString32Bytes_CompareTo_mF5834EEF9A96EFF22DD73C42B9D3CC4728DDE96A (void);
// 0x000000D6 System.Boolean Unity.Collections.FixedString32Bytes::op_Equality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString32Bytes_op_Equality_mB2EF2F3DB3F242926FD41E1879C231D12161EE35 (void);
// 0x000000D7 System.Boolean Unity.Collections.FixedString32Bytes::op_Inequality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString32Bytes_op_Inequality_mE8779E45316C276CD30793042D4E159A1300EB8E (void);
// 0x000000D8 System.Boolean Unity.Collections.FixedString32Bytes::Equals(Unity.Collections.FixedString32Bytes)
extern void FixedString32Bytes_Equals_m35066BEF893D842074A1E6BD9A5C72D9DABADFF0 (void);
// 0x000000D9 System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(Unity.Collections.FixedString64Bytes)
extern void FixedString32Bytes_CompareTo_m455F0190A3BFCDF60F4BA8CE2E41BAE0660BB876 (void);
// 0x000000DA System.Boolean Unity.Collections.FixedString32Bytes::op_Equality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString64Bytes&)
extern void FixedString32Bytes_op_Equality_m8F735603DE48939A77EC75F1ED79F8456C28D4AA (void);
// 0x000000DB System.Boolean Unity.Collections.FixedString32Bytes::Equals(Unity.Collections.FixedString64Bytes)
extern void FixedString32Bytes_Equals_mA6D03C1A9E302D3427624450E4A209DD524238B3 (void);
// 0x000000DC System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(Unity.Collections.FixedString128Bytes)
extern void FixedString32Bytes_CompareTo_m4327D9074FF49D2CC5A9EC6E1BB51ACE90C34259 (void);
// 0x000000DD System.Boolean Unity.Collections.FixedString32Bytes::op_Equality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString128Bytes&)
extern void FixedString32Bytes_op_Equality_m415765F4827A092CC83F653B0EA558BD6E7BB855 (void);
// 0x000000DE System.Boolean Unity.Collections.FixedString32Bytes::Equals(Unity.Collections.FixedString128Bytes)
extern void FixedString32Bytes_Equals_m5148C5014FB447963C9452ECDFD2FAA4FCB2B0AA (void);
// 0x000000DF System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(Unity.Collections.FixedString512Bytes)
extern void FixedString32Bytes_CompareTo_mDD8F261148EF43BC134C4404510225C05B4A51E0 (void);
// 0x000000E0 System.Boolean Unity.Collections.FixedString32Bytes::op_Equality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString512Bytes&)
extern void FixedString32Bytes_op_Equality_mD54C9C0DD9C9A0B65CF6FD8EA719C4323B77CDB9 (void);
// 0x000000E1 System.Boolean Unity.Collections.FixedString32Bytes::Equals(Unity.Collections.FixedString512Bytes)
extern void FixedString32Bytes_Equals_m50A3B4996CD9406FAAC0E60C1DED2CF1FC4D9F4C (void);
// 0x000000E2 System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(Unity.Collections.FixedString4096Bytes)
extern void FixedString32Bytes_CompareTo_m208A5443E037D9890D1B7D020B618E17273364EF (void);
// 0x000000E3 System.Boolean Unity.Collections.FixedString32Bytes::op_Equality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString4096Bytes&)
extern void FixedString32Bytes_op_Equality_mE631153864793DC4025542736F4E0A9A69A9F334 (void);
// 0x000000E4 System.Boolean Unity.Collections.FixedString32Bytes::Equals(Unity.Collections.FixedString4096Bytes)
extern void FixedString32Bytes_Equals_m765AAAE165047691F090847EC353D1E6ADB64F4E (void);
// 0x000000E5 Unity.Collections.FixedString32Bytes Unity.Collections.FixedString32Bytes::op_Implicit(System.String)
extern void FixedString32Bytes_op_Implicit_m4361A9347A23B5254BDCA5DD79F8AFA6CEE1F503 (void);
// 0x000000E6 System.String Unity.Collections.FixedString32Bytes::ToString()
extern void FixedString32Bytes_ToString_mBC0B0105B79BFA9D11EA0AF4DF33FD5C02AD8A3D (void);
// 0x000000E7 System.Int32 Unity.Collections.FixedString32Bytes::GetHashCode()
extern void FixedString32Bytes_GetHashCode_m78001276F05EDD1C4D13D517F4CE8F4C62FDD201 (void);
// 0x000000E8 System.Boolean Unity.Collections.FixedString32Bytes::Equals(System.Object)
extern void FixedString32Bytes_Equals_m0E8DB505E1FAC97C090F8275D5815CFCD0DA22DD (void);
// 0x000000E9 System.Int32 Unity.Collections.FixedString64Bytes::get_UTF8MaxLengthInBytes()
extern void FixedString64Bytes_get_UTF8MaxLengthInBytes_mC2D4D77961ECC9F3ADE2E5BEE637A3A90A0D5F5C (void);
// 0x000000EA System.Byte* Unity.Collections.FixedString64Bytes::GetUnsafePtr()
extern void FixedString64Bytes_GetUnsafePtr_m6D16ED9500A89629B80BE451B7656A049A141823 (void);
// 0x000000EB System.Int32 Unity.Collections.FixedString64Bytes::get_Length()
extern void FixedString64Bytes_get_Length_mF9D0BE029ED4BEF8D744A3B0DDCBA458D7789338 (void);
// 0x000000EC System.Void Unity.Collections.FixedString64Bytes::set_Length(System.Int32)
extern void FixedString64Bytes_set_Length_m6FF424E0B4F134E47BF7CB6C29A3512A54920ADF (void);
// 0x000000ED System.Int32 Unity.Collections.FixedString64Bytes::get_Capacity()
extern void FixedString64Bytes_get_Capacity_m95BB021D2345D63B372FF23184467FC3EF88E956 (void);
// 0x000000EE System.Boolean Unity.Collections.FixedString64Bytes::TryResize(System.Int32,Unity.Collections.NativeArrayOptions)
extern void FixedString64Bytes_TryResize_mDA4CB391AAFEF0FE519EB9C6F77EBDC2A9A23AD6 (void);
// 0x000000EF System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(System.String)
extern void FixedString64Bytes_CompareTo_m4E3A4A02BE8625C7848F0103EC51166F2EBF6672 (void);
// 0x000000F0 System.Boolean Unity.Collections.FixedString64Bytes::Equals(System.String)
extern void FixedString64Bytes_Equals_m63C23CD49D4CCF2F297770FCB0F13AC2C6148EBD (void);
// 0x000000F1 System.Void Unity.Collections.FixedString64Bytes::.ctor(System.String)
extern void FixedString64Bytes__ctor_m6F181B5C4D61586DD44AC5B320F75C47165C9ECA (void);
// 0x000000F2 System.Int32 Unity.Collections.FixedString64Bytes::Initialize(System.String)
extern void FixedString64Bytes_Initialize_mB9814E606566EF9010DCEA62AD3E9182EF9B4F2A (void);
// 0x000000F3 System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(Unity.Collections.FixedString32Bytes)
extern void FixedString64Bytes_CompareTo_m627CA84B4D8145636DDF330BFC7AB6B26C1B78EC (void);
// 0x000000F4 System.Boolean Unity.Collections.FixedString64Bytes::op_Equality(Unity.Collections.FixedString64Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString64Bytes_op_Equality_mD1D7A84FE95D4D0812C6ED4D347B29DC5EED681F (void);
// 0x000000F5 System.Boolean Unity.Collections.FixedString64Bytes::Equals(Unity.Collections.FixedString32Bytes)
extern void FixedString64Bytes_Equals_m14019A582997CB9B1B4DFA3288DB5B21F203BCCF (void);
// 0x000000F6 System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(Unity.Collections.FixedString64Bytes)
extern void FixedString64Bytes_CompareTo_m21F888FA1CF25CA055F9A7288E65F10DBD6095B6 (void);
// 0x000000F7 System.Boolean Unity.Collections.FixedString64Bytes::op_Equality(Unity.Collections.FixedString64Bytes&,Unity.Collections.FixedString64Bytes&)
extern void FixedString64Bytes_op_Equality_m5BD7B941EE79754A8B5778CF4775B7568BBAB1C9 (void);
// 0x000000F8 System.Boolean Unity.Collections.FixedString64Bytes::Equals(Unity.Collections.FixedString64Bytes)
extern void FixedString64Bytes_Equals_mBFB24484A72865892C7BC60D9022817271B9C993 (void);
// 0x000000F9 System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(Unity.Collections.FixedString128Bytes)
extern void FixedString64Bytes_CompareTo_m27BBDFF353C19DACD6EFC8886E98106FD46E8894 (void);
// 0x000000FA System.Boolean Unity.Collections.FixedString64Bytes::op_Equality(Unity.Collections.FixedString64Bytes&,Unity.Collections.FixedString128Bytes&)
extern void FixedString64Bytes_op_Equality_mC191D25CE035EBBF9C7D6DB240BDFFB263566B23 (void);
// 0x000000FB System.Boolean Unity.Collections.FixedString64Bytes::Equals(Unity.Collections.FixedString128Bytes)
extern void FixedString64Bytes_Equals_m0D3B6AB690F57CF418004B220261538D1E83B639 (void);
// 0x000000FC System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(Unity.Collections.FixedString512Bytes)
extern void FixedString64Bytes_CompareTo_mB9951AA5E49E2C3B91301B4BDA0A3D287A356D38 (void);
// 0x000000FD System.Boolean Unity.Collections.FixedString64Bytes::op_Equality(Unity.Collections.FixedString64Bytes&,Unity.Collections.FixedString512Bytes&)
extern void FixedString64Bytes_op_Equality_m371DFE02DF55AE74530A12B4A693A1D6ED6FD4E0 (void);
// 0x000000FE System.Boolean Unity.Collections.FixedString64Bytes::Equals(Unity.Collections.FixedString512Bytes)
extern void FixedString64Bytes_Equals_m54DA742A366E1BAFC35800BD2657FD440CFF60E3 (void);
// 0x000000FF System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(Unity.Collections.FixedString4096Bytes)
extern void FixedString64Bytes_CompareTo_mE128DBB33E12D7B8276A50D86C34D2925CC75E12 (void);
// 0x00000100 System.Boolean Unity.Collections.FixedString64Bytes::op_Equality(Unity.Collections.FixedString64Bytes&,Unity.Collections.FixedString4096Bytes&)
extern void FixedString64Bytes_op_Equality_m2A187148D88285FFAC38E3454C3E19B026F3D465 (void);
// 0x00000101 System.Boolean Unity.Collections.FixedString64Bytes::Equals(Unity.Collections.FixedString4096Bytes)
extern void FixedString64Bytes_Equals_m62FB328FF94AE463BDB22F8C10ABE46E3C78898E (void);
// 0x00000102 Unity.Collections.FixedString64Bytes Unity.Collections.FixedString64Bytes::op_Implicit(System.String)
extern void FixedString64Bytes_op_Implicit_m08B2023522E2101D5666EC7F2056FED23E32786A (void);
// 0x00000103 System.String Unity.Collections.FixedString64Bytes::ToString()
extern void FixedString64Bytes_ToString_m9A95BFBD08C8131BE663E28F78C59A387EC4D0C0 (void);
// 0x00000104 System.Int32 Unity.Collections.FixedString64Bytes::GetHashCode()
extern void FixedString64Bytes_GetHashCode_mEE673AF20F2034075FD973EDC8708AF0B0E240BD (void);
// 0x00000105 System.Boolean Unity.Collections.FixedString64Bytes::Equals(System.Object)
extern void FixedString64Bytes_Equals_mE67C9A0F7A76E525EAA873AB7A87E9F5746DBCEC (void);
// 0x00000106 System.Byte* Unity.Collections.FixedString128Bytes::GetUnsafePtr()
extern void FixedString128Bytes_GetUnsafePtr_m5D5721F234226666FBC6AE692983EEC26E9679B0 (void);
// 0x00000107 System.Int32 Unity.Collections.FixedString128Bytes::get_Length()
extern void FixedString128Bytes_get_Length_mB44B48F688A770EBD1D89BFB9441839F05E99BE3 (void);
// 0x00000108 System.Void Unity.Collections.FixedString128Bytes::set_Length(System.Int32)
extern void FixedString128Bytes_set_Length_m6D6AE2962D72D9F45A1F1831786F16976DB60E1D (void);
// 0x00000109 System.Int32 Unity.Collections.FixedString128Bytes::get_Capacity()
extern void FixedString128Bytes_get_Capacity_m4CA35AA2FA471B8B9A1503929ED6732884B7A204 (void);
// 0x0000010A System.Boolean Unity.Collections.FixedString128Bytes::TryResize(System.Int32,Unity.Collections.NativeArrayOptions)
extern void FixedString128Bytes_TryResize_mD2CBC43E806000F8F445A72487EA87CF58468106 (void);
// 0x0000010B System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(System.String)
extern void FixedString128Bytes_CompareTo_mD467A78A95C3BB1F288BC3C9FBA690A9495BFC92 (void);
// 0x0000010C System.Boolean Unity.Collections.FixedString128Bytes::Equals(System.String)
extern void FixedString128Bytes_Equals_m88DC61CFEDB1D2154A1A49342E897B06F9824430 (void);
// 0x0000010D System.Void Unity.Collections.FixedString128Bytes::.ctor(System.String)
extern void FixedString128Bytes__ctor_m0495F2C2FD757248BED63BD13E30F00B7D21A535 (void);
// 0x0000010E System.Int32 Unity.Collections.FixedString128Bytes::Initialize(System.String)
extern void FixedString128Bytes_Initialize_mF7DCBEC7A74580F93F2F391DE17D8C016776E895 (void);
// 0x0000010F System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(Unity.Collections.FixedString32Bytes)
extern void FixedString128Bytes_CompareTo_mBD0FA3114A4A8974E8EFD6B74C6CD555FE424ED3 (void);
// 0x00000110 System.Boolean Unity.Collections.FixedString128Bytes::op_Equality(Unity.Collections.FixedString128Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString128Bytes_op_Equality_m7A58BD9D1D0ED40013B51470E2908E2BDA6CFB16 (void);
// 0x00000111 System.Boolean Unity.Collections.FixedString128Bytes::Equals(Unity.Collections.FixedString32Bytes)
extern void FixedString128Bytes_Equals_m0B98DDEBA4C0909B3A34B20211609D9CDDF17BD4 (void);
// 0x00000112 System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(Unity.Collections.FixedString64Bytes)
extern void FixedString128Bytes_CompareTo_m84D1B08ED43A55442CC0A964ACB16088C35AA4E2 (void);
// 0x00000113 System.Boolean Unity.Collections.FixedString128Bytes::op_Equality(Unity.Collections.FixedString128Bytes&,Unity.Collections.FixedString64Bytes&)
extern void FixedString128Bytes_op_Equality_m74D8379CE2E39BBB0E9A8E49BE78BC83C9FC8D9E (void);
// 0x00000114 System.Boolean Unity.Collections.FixedString128Bytes::Equals(Unity.Collections.FixedString64Bytes)
extern void FixedString128Bytes_Equals_m028BAAF6672E3E8C18FCD2A36E554194AA03B8DC (void);
// 0x00000115 System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(Unity.Collections.FixedString128Bytes)
extern void FixedString128Bytes_CompareTo_m66F5769D0ADC3B31E4980495D2691182C647A4A0 (void);
// 0x00000116 System.Boolean Unity.Collections.FixedString128Bytes::op_Equality(Unity.Collections.FixedString128Bytes&,Unity.Collections.FixedString128Bytes&)
extern void FixedString128Bytes_op_Equality_mC8F409E118E13BD27A95DF1EDB343488FBD4813F (void);
// 0x00000117 System.Boolean Unity.Collections.FixedString128Bytes::Equals(Unity.Collections.FixedString128Bytes)
extern void FixedString128Bytes_Equals_m8B29A1963BA2994BEEB6DC6D2ACB5F85F4169C9B (void);
// 0x00000118 System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(Unity.Collections.FixedString512Bytes)
extern void FixedString128Bytes_CompareTo_mC9A052A1DC9890BC9F8ED3997E0966141D134A6B (void);
// 0x00000119 System.Boolean Unity.Collections.FixedString128Bytes::op_Equality(Unity.Collections.FixedString128Bytes&,Unity.Collections.FixedString512Bytes&)
extern void FixedString128Bytes_op_Equality_m1AF53B6C7F860FFD507465AC501F689B559977C0 (void);
// 0x0000011A System.Boolean Unity.Collections.FixedString128Bytes::Equals(Unity.Collections.FixedString512Bytes)
extern void FixedString128Bytes_Equals_mC127962FC9AD86D88A301110F1DE6891D73A7560 (void);
// 0x0000011B System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(Unity.Collections.FixedString4096Bytes)
extern void FixedString128Bytes_CompareTo_m4690FA70BE7546784FE808AD836134A862EE30CE (void);
// 0x0000011C System.Boolean Unity.Collections.FixedString128Bytes::op_Equality(Unity.Collections.FixedString128Bytes&,Unity.Collections.FixedString4096Bytes&)
extern void FixedString128Bytes_op_Equality_m03FA15F69F81B2B72ADD5AABA302FEC67824AE87 (void);
// 0x0000011D System.Boolean Unity.Collections.FixedString128Bytes::Equals(Unity.Collections.FixedString4096Bytes)
extern void FixedString128Bytes_Equals_mF2F489FEBE264F851A46A49F34E552B93CBE1880 (void);
// 0x0000011E Unity.Collections.FixedString128Bytes Unity.Collections.FixedString128Bytes::op_Implicit(System.String)
extern void FixedString128Bytes_op_Implicit_m3F89D72BE171E07664460C46C509548A190CA64D (void);
// 0x0000011F System.String Unity.Collections.FixedString128Bytes::ToString()
extern void FixedString128Bytes_ToString_m5D0F997EE98FE5E2FD75C67A9EB750EA2A19ECA5 (void);
// 0x00000120 System.Int32 Unity.Collections.FixedString128Bytes::GetHashCode()
extern void FixedString128Bytes_GetHashCode_m0DEBE20E271BB796331438C159F91B8834E3AE27 (void);
// 0x00000121 System.Boolean Unity.Collections.FixedString128Bytes::Equals(System.Object)
extern void FixedString128Bytes_Equals_mD1488F0494260130EA71B36F7F2235BBE6A4FC35 (void);
// 0x00000122 System.Byte* Unity.Collections.FixedString512Bytes::GetUnsafePtr()
extern void FixedString512Bytes_GetUnsafePtr_mC217ABC503C34C4A9505D3BD8184772A6957B594 (void);
// 0x00000123 System.Int32 Unity.Collections.FixedString512Bytes::get_Length()
extern void FixedString512Bytes_get_Length_m70416F6C123F83B82723F71E137672507CEF8E1E (void);
// 0x00000124 System.Void Unity.Collections.FixedString512Bytes::set_Length(System.Int32)
extern void FixedString512Bytes_set_Length_m2FB002DB9D4CE470CB67BBBCF0345F3B879718D1 (void);
// 0x00000125 System.Int32 Unity.Collections.FixedString512Bytes::get_Capacity()
extern void FixedString512Bytes_get_Capacity_m04C798E27AD1D5C03347B09A7B59EC1118A4DD9C (void);
// 0x00000126 System.Boolean Unity.Collections.FixedString512Bytes::TryResize(System.Int32,Unity.Collections.NativeArrayOptions)
extern void FixedString512Bytes_TryResize_m926AFC0E97C55C3D6D76AD2E4341D387866E3487 (void);
// 0x00000127 System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(System.String)
extern void FixedString512Bytes_CompareTo_m04A7A314B42FFA9602958449016B60F210C3210D (void);
// 0x00000128 System.Boolean Unity.Collections.FixedString512Bytes::Equals(System.String)
extern void FixedString512Bytes_Equals_m5D845EB2C13E708265F8ED7E0EA20B7CBC346729 (void);
// 0x00000129 System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(Unity.Collections.FixedString32Bytes)
extern void FixedString512Bytes_CompareTo_m95DEE74C2D0BD5B60B25F90D6BA58ACAEA7A1941 (void);
// 0x0000012A System.Boolean Unity.Collections.FixedString512Bytes::op_Equality(Unity.Collections.FixedString512Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString512Bytes_op_Equality_mCD33B3C9CA398C5E594126A4EC8E57FA8E8834AA (void);
// 0x0000012B System.Boolean Unity.Collections.FixedString512Bytes::Equals(Unity.Collections.FixedString32Bytes)
extern void FixedString512Bytes_Equals_m8F548901D593718D4E2535B84D89972D4E7E6BE9 (void);
// 0x0000012C System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(Unity.Collections.FixedString64Bytes)
extern void FixedString512Bytes_CompareTo_m0DEEF2359E2F1BF27604E76EEE2DADF257E94590 (void);
// 0x0000012D System.Boolean Unity.Collections.FixedString512Bytes::op_Equality(Unity.Collections.FixedString512Bytes&,Unity.Collections.FixedString64Bytes&)
extern void FixedString512Bytes_op_Equality_m43E1195753BE9CF331C4DF8FF11EC53D354097A5 (void);
// 0x0000012E System.Boolean Unity.Collections.FixedString512Bytes::Equals(Unity.Collections.FixedString64Bytes)
extern void FixedString512Bytes_Equals_m11D223E18049AF2276EB099D85BE50952CC3624D (void);
// 0x0000012F System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(Unity.Collections.FixedString128Bytes)
extern void FixedString512Bytes_CompareTo_mA7CF8872D14E6E5F2E920D0FFEE3AA0C82F347E6 (void);
// 0x00000130 System.Boolean Unity.Collections.FixedString512Bytes::op_Equality(Unity.Collections.FixedString512Bytes&,Unity.Collections.FixedString128Bytes&)
extern void FixedString512Bytes_op_Equality_m1FE84DFBADC441B60E35853861A69A39BF027A18 (void);
// 0x00000131 System.Boolean Unity.Collections.FixedString512Bytes::Equals(Unity.Collections.FixedString128Bytes)
extern void FixedString512Bytes_Equals_m8A06C174B2115E83EE8704B02D6ADC27B8AA09DF (void);
// 0x00000132 System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(Unity.Collections.FixedString512Bytes)
extern void FixedString512Bytes_CompareTo_m7428FB6E2AC9137F8A74FD0C5349F2FAE30B05CD (void);
// 0x00000133 System.Boolean Unity.Collections.FixedString512Bytes::op_Equality(Unity.Collections.FixedString512Bytes&,Unity.Collections.FixedString512Bytes&)
extern void FixedString512Bytes_op_Equality_mA859DDE388381AD903D85C542510A97F8A185EE8 (void);
// 0x00000134 System.Boolean Unity.Collections.FixedString512Bytes::Equals(Unity.Collections.FixedString512Bytes)
extern void FixedString512Bytes_Equals_m13E5ED0B742535959E3FF065EB7463151156937B (void);
// 0x00000135 System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(Unity.Collections.FixedString4096Bytes)
extern void FixedString512Bytes_CompareTo_m1CEBDC6E092AE5F41AC99A3555BE147B58F0AB28 (void);
// 0x00000136 System.Boolean Unity.Collections.FixedString512Bytes::op_Equality(Unity.Collections.FixedString512Bytes&,Unity.Collections.FixedString4096Bytes&)
extern void FixedString512Bytes_op_Equality_mFDB9C8167FDC0A524B91270776474E27B3D82DEF (void);
// 0x00000137 System.Boolean Unity.Collections.FixedString512Bytes::Equals(Unity.Collections.FixedString4096Bytes)
extern void FixedString512Bytes_Equals_mBA5CFEFCA3D9F726BDF9221B1E1B7C763186F741 (void);
// 0x00000138 System.String Unity.Collections.FixedString512Bytes::ToString()
extern void FixedString512Bytes_ToString_m3507A4F76408A6AEEC02A081227E82C724E788A3 (void);
// 0x00000139 System.Int32 Unity.Collections.FixedString512Bytes::GetHashCode()
extern void FixedString512Bytes_GetHashCode_m7471BCB4E4BFFB14334B86C731F8A7EEE8808C0B (void);
// 0x0000013A System.Boolean Unity.Collections.FixedString512Bytes::Equals(System.Object)
extern void FixedString512Bytes_Equals_m56F0D84282853BE0F8EB9C384E8A6BC6DCF704B0 (void);
// 0x0000013B System.Byte* Unity.Collections.FixedString4096Bytes::GetUnsafePtr()
extern void FixedString4096Bytes_GetUnsafePtr_mD7BB5BC41DC121917EACD3208B09F7FBA47E9B14 (void);
// 0x0000013C System.Int32 Unity.Collections.FixedString4096Bytes::get_Length()
extern void FixedString4096Bytes_get_Length_m4A6C18A7FF02C0B37966A4BF6A6C62FE5BD8AA79 (void);
// 0x0000013D System.Void Unity.Collections.FixedString4096Bytes::set_Length(System.Int32)
extern void FixedString4096Bytes_set_Length_mDF584B26F865243D41B322965031DC3AE50AE155 (void);
// 0x0000013E System.Int32 Unity.Collections.FixedString4096Bytes::get_Capacity()
extern void FixedString4096Bytes_get_Capacity_m1D61376344C7CD4252488062BF0F1989571E7E65 (void);
// 0x0000013F System.Boolean Unity.Collections.FixedString4096Bytes::TryResize(System.Int32,Unity.Collections.NativeArrayOptions)
extern void FixedString4096Bytes_TryResize_mD9833218AE0B1AA07F9FF570E8A5F059A8EBEF34 (void);
// 0x00000140 System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(System.String)
extern void FixedString4096Bytes_CompareTo_m56A2BDBABB6EC15C2F06F310C77834ABB2E6E423 (void);
// 0x00000141 System.Boolean Unity.Collections.FixedString4096Bytes::Equals(System.String)
extern void FixedString4096Bytes_Equals_mB8B543E697D5B9FE4A99B162080F424C070C67B1 (void);
// 0x00000142 System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(Unity.Collections.FixedString32Bytes)
extern void FixedString4096Bytes_CompareTo_mDF19D52C9733F1C2AC4A5C6E57523640EB762250 (void);
// 0x00000143 System.Boolean Unity.Collections.FixedString4096Bytes::op_Equality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString4096Bytes_op_Equality_m8272B84095F78E4C64A4E7EEEAA83E5300011EBD (void);
// 0x00000144 System.Boolean Unity.Collections.FixedString4096Bytes::op_Inequality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString4096Bytes_op_Inequality_mF060BB48512301E31723F4B4E6E57655943E8CFF (void);
// 0x00000145 System.Boolean Unity.Collections.FixedString4096Bytes::Equals(Unity.Collections.FixedString32Bytes)
extern void FixedString4096Bytes_Equals_m50449CEA376EE67883DAA4A53B7A96657C0ABFC6 (void);
// 0x00000146 System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(Unity.Collections.FixedString64Bytes)
extern void FixedString4096Bytes_CompareTo_m98DB83C45659AA502D3EF4C09CFDFCF7EE6AAD7E (void);
// 0x00000147 System.Boolean Unity.Collections.FixedString4096Bytes::op_Equality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString64Bytes&)
extern void FixedString4096Bytes_op_Equality_m8C1B245E09F423C70F4EB51301C71277C1BAD758 (void);
// 0x00000148 System.Boolean Unity.Collections.FixedString4096Bytes::Equals(Unity.Collections.FixedString64Bytes)
extern void FixedString4096Bytes_Equals_m7A31B6F07E4FF5391793F3A2E570D249FC28BC56 (void);
// 0x00000149 System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(Unity.Collections.FixedString128Bytes)
extern void FixedString4096Bytes_CompareTo_m98AFBA57DD74ED48BB9DC93F0EA3D371AC232D88 (void);
// 0x0000014A System.Boolean Unity.Collections.FixedString4096Bytes::op_Equality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString128Bytes&)
extern void FixedString4096Bytes_op_Equality_m8B7E4B0AD7AF910C4DE957ABCE1F60514A998D13 (void);
// 0x0000014B System.Boolean Unity.Collections.FixedString4096Bytes::Equals(Unity.Collections.FixedString128Bytes)
extern void FixedString4096Bytes_Equals_m6630735E9757A96BBACAB07882404AB206787560 (void);
// 0x0000014C System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(Unity.Collections.FixedString512Bytes)
extern void FixedString4096Bytes_CompareTo_mAEDF7046DC4122FE355E855D489BE117FE71AE20 (void);
// 0x0000014D System.Boolean Unity.Collections.FixedString4096Bytes::op_Equality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString512Bytes&)
extern void FixedString4096Bytes_op_Equality_m2C8A0A6F975F86A2A64A8B7B29095A8ABE0BCB46 (void);
// 0x0000014E System.Boolean Unity.Collections.FixedString4096Bytes::Equals(Unity.Collections.FixedString512Bytes)
extern void FixedString4096Bytes_Equals_mAA8DADE086517F8985B18B396F739A4119E3974A (void);
// 0x0000014F System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(Unity.Collections.FixedString4096Bytes)
extern void FixedString4096Bytes_CompareTo_mBD907BBDC18CA4598C6C284FD38A682FF3D9272E (void);
// 0x00000150 System.Boolean Unity.Collections.FixedString4096Bytes::op_Equality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString4096Bytes&)
extern void FixedString4096Bytes_op_Equality_m0A7B6E865D941E2C15F8BAE950A72D556FAC0CE2 (void);
// 0x00000151 System.Boolean Unity.Collections.FixedString4096Bytes::Equals(Unity.Collections.FixedString4096Bytes)
extern void FixedString4096Bytes_Equals_m524817609813745DF01EAD53A606803206074B5A (void);
// 0x00000152 System.String Unity.Collections.FixedString4096Bytes::ToString()
extern void FixedString4096Bytes_ToString_mE581B44C1FD3E2B439149546143D51020BF22EF1 (void);
// 0x00000153 System.Int32 Unity.Collections.FixedString4096Bytes::GetHashCode()
extern void FixedString4096Bytes_GetHashCode_m6017478A2A1E62CB9F8072684F3D27F71CA73D6F (void);
// 0x00000154 System.Boolean Unity.Collections.FixedString4096Bytes::Equals(System.Object)
extern void FixedString4096Bytes_Equals_m901B3A08DF0A1847030310153BFA484A35000950 (void);
// 0x00000155 Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Append(T&,Unity.Collections.Unicode/Rune)
// 0x00000156 Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Append(T&,System.Char)
// 0x00000157 Unity.Collections.FormatError Unity.Collections.FixedStringMethods::AppendRawByte(T&,System.Byte)
// 0x00000158 Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Append(T&,System.Int64)
// 0x00000159 Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Append(T&,System.Int32)
// 0x0000015A Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Append(T&,T2&)
// 0x0000015B Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Append(T&,System.Byte*,System.Int32)
// 0x0000015C System.Void Unity.Collections.FixedStringMethods::AppendFormat(T&,U&,T0&)
// 0x0000015D System.Int32 Unity.Collections.FixedStringMethods::CompareTo(T&,System.Byte*,System.Int32)
// 0x0000015E System.Int32 Unity.Collections.FixedStringMethods::CompareTo(T&,T2&)
// 0x0000015F Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Write(T&,System.Int32&,Unity.Collections.Unicode/Rune)
// 0x00000160 System.String Unity.Collections.FixedStringMethods::ConvertToString(T&)
// 0x00000161 System.Int32 Unity.Collections.FixedStringMethods::ComputeHashCode(T&)
// 0x00000162 Unity.Collections.FixedString128Bytes Unity.Collections.FixedString::Format(Unity.Collections.FixedString128Bytes,System.Int32)
extern void FixedString_Format_m47B1E44A3DDDCB684C5F7C26871C2E9C4868FC96 (void);
// 0x00000163 System.Byte* Unity.Collections.IUTF8Bytes::GetUnsafePtr()
// 0x00000164 System.Boolean Unity.Collections.IUTF8Bytes::TryResize(System.Int32,Unity.Collections.NativeArrayOptions)
// 0x00000165 System.Void* Unity.Collections.Memory/Unmanaged::Allocate(System.Int64,System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Unmanaged_Allocate_m2B8A0CE5FC5FE807FCA06A65ED4B45BB4BD73641 (void);
// 0x00000166 System.Void Unity.Collections.Memory/Unmanaged::Free(System.Void*,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Unmanaged_Free_m2F50C56130FA36D0309580A8D5A0DBD6587EA180 (void);
// 0x00000167 System.Void Unity.Collections.Memory/Unmanaged::Free(T*,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000168 System.Boolean Unity.Collections.Memory/Unmanaged/Array::IsCustom(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Array_IsCustom_m598D3961A72717D20B5753E57D30DF6C0C71F16E (void);
// 0x00000169 System.Void* Unity.Collections.Memory/Unmanaged/Array::CustomResize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
extern void Array_CustomResize_m1473190F4C3B31568AA3B34ADC10F76FBF23AC24 (void);
// 0x0000016A System.Void* Unity.Collections.Memory/Unmanaged/Array::Resize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
extern void Array_Resize_mFA75DD4DFE9EAD9F626D97098C95EE100807D309 (void);
// 0x0000016B T* Unity.Collections.Memory/Unmanaged/Array::Resize(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x0000016C System.Int32 Unity.Collections.NativeArrayExtensions::IndexOf(Unity.Collections.NativeList`1<T>,U)
// 0x0000016D System.Int32 Unity.Collections.NativeArrayExtensions::IndexOf(System.Void*,System.Int32,U)
// 0x0000016E System.Void Unity.Collections.NativeArrayExtensions::Initialize(Unity.Collections.NativeArray`1<T>&,System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,Unity.Collections.NativeArrayOptions)
// 0x0000016F System.Int32 Unity.Collections.NativeKeyValueArrays`2::get_Length()
// 0x00000170 System.Void Unity.Collections.NativeKeyValueArrays`2::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,Unity.Collections.NativeArrayOptions)
// 0x00000171 System.Void Unity.Collections.NativeKeyValueArrays`2::Dispose()
// 0x00000172 System.Void Unity.Collections.NativeHashMap`2::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000173 System.Void Unity.Collections.NativeHashMap`2::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int32)
// 0x00000174 System.Boolean Unity.Collections.NativeHashMap`2::get_IsEmpty()
// 0x00000175 System.Int32 Unity.Collections.NativeHashMap`2::Count()
// 0x00000176 System.Int32 Unity.Collections.NativeHashMap`2::get_Capacity()
// 0x00000177 System.Void Unity.Collections.NativeHashMap`2::set_Capacity(System.Int32)
// 0x00000178 System.Void Unity.Collections.NativeHashMap`2::Clear()
// 0x00000179 System.Boolean Unity.Collections.NativeHashMap`2::TryAdd(TKey,TValue)
// 0x0000017A System.Void Unity.Collections.NativeHashMap`2::Add(TKey,TValue)
// 0x0000017B System.Boolean Unity.Collections.NativeHashMap`2::Remove(TKey)
// 0x0000017C System.Boolean Unity.Collections.NativeHashMap`2::TryGetValue(TKey,TValue&)
// 0x0000017D System.Boolean Unity.Collections.NativeHashMap`2::ContainsKey(TKey)
// 0x0000017E TValue Unity.Collections.NativeHashMap`2::get_Item(TKey)
// 0x0000017F System.Void Unity.Collections.NativeHashMap`2::set_Item(TKey,TValue)
// 0x00000180 System.Boolean Unity.Collections.NativeHashMap`2::get_IsCreated()
// 0x00000181 System.Void Unity.Collections.NativeHashMap`2::Dispose()
// 0x00000182 Unity.Jobs.JobHandle Unity.Collections.NativeHashMap`2::Dispose(Unity.Jobs.JobHandle)
// 0x00000183 Unity.Collections.NativeArray`1<TKey> Unity.Collections.NativeHashMap`2::GetKeyArray(Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000184 Unity.Collections.NativeArray`1<TValue> Unity.Collections.NativeHashMap`2::GetValueArray(Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000185 Unity.Collections.NativeKeyValueArrays`2<TKey,TValue> Unity.Collections.NativeHashMap`2::GetKeyValueArrays(Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000186 Unity.Collections.NativeHashMap`2/ParallelWriter<TKey,TValue> Unity.Collections.NativeHashMap`2::AsParallelWriter()
// 0x00000187 Unity.Collections.NativeHashMap`2/Enumerator<TKey,TValue> Unity.Collections.NativeHashMap`2::GetEnumerator()
// 0x00000188 System.Collections.Generic.IEnumerator`1<Unity.Collections.LowLevel.Unsafe.KeyValue`2<TKey,TValue>> Unity.Collections.NativeHashMap`2::System.Collections.Generic.IEnumerable<Unity.Collections.LowLevel.Unsafe.KeyValue<TKey,TValue>>.GetEnumerator()
// 0x00000189 System.Collections.IEnumerator Unity.Collections.NativeHashMap`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000018A System.Void Unity.Collections.NativeHashMap`2::CheckRead()
// 0x0000018B System.Void Unity.Collections.NativeHashMap`2::CheckWrite()
// 0x0000018C System.Void Unity.Collections.NativeHashMap`2::ThrowKeyNotPresent(TKey)
// 0x0000018D System.Void Unity.Collections.NativeHashMap`2::ThrowKeyAlreadyAdded(TKey)
// 0x0000018E System.Int32 Unity.Collections.NativeHashMap`2/ParallelWriter::get_m_ThreadIndex()
// 0x0000018F System.Int32 Unity.Collections.NativeHashMap`2/ParallelWriter::get_Capacity()
// 0x00000190 System.Boolean Unity.Collections.NativeHashMap`2/ParallelWriter::TryAdd(TKey,TValue)
// 0x00000191 System.Void Unity.Collections.NativeHashMap`2/Enumerator::Dispose()
// 0x00000192 System.Boolean Unity.Collections.NativeHashMap`2/Enumerator::MoveNext()
// 0x00000193 System.Void Unity.Collections.NativeHashMap`2/Enumerator::Reset()
// 0x00000194 Unity.Collections.LowLevel.Unsafe.KeyValue`2<TKey,TValue> Unity.Collections.NativeHashMap`2/Enumerator::get_Current()
// 0x00000195 System.Object Unity.Collections.NativeHashMap`2/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000196 System.Void Unity.Collections.NativeHashMapDebuggerTypeProxy`2::.ctor(Unity.Collections.NativeHashMap`2<TKey,TValue>)
// 0x00000197 System.Collections.Generic.List`1<Unity.Collections.Pair`2<TKey,TValue>> Unity.Collections.NativeHashMapDebuggerTypeProxy`2::get_Items()
// 0x00000198 System.Int32 Unity.Collections.IIndexable`1::get_Length()
// 0x00000199 System.Void Unity.Collections.IIndexable`1::set_Length(System.Int32)
// 0x0000019A System.Int32 Unity.Collections.INativeList`1::get_Capacity()
// 0x0000019B System.Void Unity.Collections.NativeList`1::.ctor(Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x0000019C System.Void Unity.Collections.NativeList`1::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x0000019D System.Void Unity.Collections.NativeList`1::Initialize(System.Int32,U&,System.Int32)
// 0x0000019E System.Void Unity.Collections.NativeList`1::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int32)
// 0x0000019F T Unity.Collections.NativeList`1::get_Item(System.Int32)
// 0x000001A0 System.Void Unity.Collections.NativeList`1::set_Item(System.Int32,T)
// 0x000001A1 T& Unity.Collections.NativeList`1::ElementAt(System.Int32)
// 0x000001A2 System.Int32 Unity.Collections.NativeList`1::get_Length()
// 0x000001A3 System.Void Unity.Collections.NativeList`1::set_Length(System.Int32)
// 0x000001A4 System.Int32 Unity.Collections.NativeList`1::get_Capacity()
// 0x000001A5 System.Void Unity.Collections.NativeList`1::Add(T&)
// 0x000001A6 System.Void Unity.Collections.NativeList`1::InsertRangeWithBeginEnd(System.Int32,System.Int32)
// 0x000001A7 System.Void Unity.Collections.NativeList`1::RemoveAt(System.Int32)
// 0x000001A8 System.Boolean Unity.Collections.NativeList`1::get_IsCreated()
// 0x000001A9 System.Void Unity.Collections.NativeList`1::Dispose()
// 0x000001AA System.Void Unity.Collections.NativeList`1::Clear()
// 0x000001AB Unity.Collections.NativeArray`1<T> Unity.Collections.NativeList`1::op_Implicit(Unity.Collections.NativeList`1<T>)
// 0x000001AC Unity.Collections.NativeArray`1<T> Unity.Collections.NativeList`1::AsArray()
// 0x000001AD Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeList`1::GetEnumerator()
// 0x000001AE System.Collections.IEnumerator Unity.Collections.NativeList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000001AF System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeList`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000001B0 System.Void Unity.Collections.NativeList`1::CopyFrom(Unity.Collections.NativeArray`1<T>)
// 0x000001B1 System.Void Unity.Collections.NativeList`1::Resize(System.Int32,Unity.Collections.NativeArrayOptions)
// 0x000001B2 System.Void Unity.Collections.NativeList`1::ResizeUninitialized(System.Int32)
// 0x000001B3 System.Void Unity.Collections.NativeListDebugView`1::.ctor(Unity.Collections.NativeList`1<T>)
// 0x000001B4 T[] Unity.Collections.NativeListDebugView`1::get_Items()
// 0x000001B5 Unity.Collections.NativeQueueBlockHeader* Unity.Collections.NativeQueueBlockPoolData::AllocateBlock()
extern void NativeQueueBlockPoolData_AllocateBlock_mEE2500587CBF0C5D7DF01862F5608578F3E1A41D (void);
// 0x000001B6 System.Void Unity.Collections.NativeQueueBlockPoolData::FreeBlock(Unity.Collections.NativeQueueBlockHeader*)
extern void NativeQueueBlockPoolData_FreeBlock_m79B8FBE865EF9B2477F98C29F078417436BEED0E (void);
// 0x000001B7 Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueueBlockPool::GetQueueBlockPool()
extern void NativeQueueBlockPool_GetQueueBlockPool_m540355E049FC3D323E602F926545011F22036027 (void);
// 0x000001B8 System.Void Unity.Collections.NativeQueueBlockPool::AppDomainOnDomainUnload()
extern void NativeQueueBlockPool_AppDomainOnDomainUnload_mFA4C51C06F0886FA44B19412B7E675A815DE1B00 (void);
// 0x000001B9 System.Void Unity.Collections.NativeQueueBlockPool::OnDomainUnload(System.Object,System.EventArgs)
extern void NativeQueueBlockPool_OnDomainUnload_m822548C47C87F6D8DB1B7AE6663E7E2FFD4DA2D0 (void);
// 0x000001BA System.Void Unity.Collections.NativeQueueBlockPool::.cctor()
extern void NativeQueueBlockPool__cctor_mF4DA14D7352B4073B635C1E275639E34A312CBEF (void);
// 0x000001BB Unity.Collections.NativeQueueBlockHeader* Unity.Collections.NativeQueueData::GetCurrentWriteBlockTLS(System.Int32)
extern void NativeQueueData_GetCurrentWriteBlockTLS_m75502C82FDFF25E26AA4773759A824A0D22E1411 (void);
// 0x000001BC System.Void Unity.Collections.NativeQueueData::SetCurrentWriteBlockTLS(System.Int32,Unity.Collections.NativeQueueBlockHeader*)
extern void NativeQueueData_SetCurrentWriteBlockTLS_m9C78BEF5415CD20F6265F199C04B0D59D590131B (void);
// 0x000001BD Unity.Collections.NativeQueueBlockHeader* Unity.Collections.NativeQueueData::AllocateWriteBlockMT(Unity.Collections.NativeQueueData*,Unity.Collections.NativeQueueBlockPoolData*,System.Int32)
// 0x000001BE System.Void Unity.Collections.NativeQueueData::AllocateQueue(Unity.Collections.AllocatorManager/AllocatorHandle,Unity.Collections.NativeQueueData*&)
// 0x000001BF System.Void Unity.Collections.NativeQueueData::DeallocateQueue(Unity.Collections.NativeQueueData*,Unity.Collections.NativeQueueBlockPoolData*,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void NativeQueueData_DeallocateQueue_mEF180466591D362F161130630E7E3E87F12797CC (void);
// 0x000001C0 System.Void Unity.Collections.NativeQueue`1::.ctor(Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x000001C1 System.Int32 Unity.Collections.NativeQueue`1::get_Count()
// 0x000001C2 System.Void Unity.Collections.NativeQueue`1::Enqueue(T)
// 0x000001C3 System.Boolean Unity.Collections.NativeQueue`1::TryDequeue(T&)
// 0x000001C4 System.Void Unity.Collections.NativeQueue`1::Clear()
// 0x000001C5 System.Void Unity.Collections.NativeQueue`1::Dispose()
// 0x000001C6 Unity.Collections.NativeQueue`1/ParallelWriter<T> Unity.Collections.NativeQueue`1::AsParallelWriter()
// 0x000001C7 System.Void Unity.Collections.NativeQueue`1/ParallelWriter::Enqueue(T)
// 0x000001C8 System.Void Unity.Collections.NativeReference`1::.ctor(Unity.Collections.AllocatorManager/AllocatorHandle,Unity.Collections.NativeArrayOptions)
// 0x000001C9 System.Void Unity.Collections.NativeReference`1::Allocate(Unity.Collections.AllocatorManager/AllocatorHandle,Unity.Collections.NativeReference`1<T>&)
// 0x000001CA T Unity.Collections.NativeReference`1::get_Value()
// 0x000001CB System.Void Unity.Collections.NativeReference`1::set_Value(T)
// 0x000001CC System.Void Unity.Collections.NativeReference`1::Dispose()
// 0x000001CD System.Boolean Unity.Collections.NativeReference`1::Equals(Unity.Collections.NativeReference`1<T>)
// 0x000001CE System.Boolean Unity.Collections.NativeReference`1::Equals(System.Object)
// 0x000001CF System.Int32 Unity.Collections.NativeReference`1::GetHashCode()
// 0x000001D0 System.Void Unity.Collections.Spinner::Lock()
extern void Spinner_Lock_m455E583C6650190C9F5D9211C134A8D7898006D1 (void);
// 0x000001D1 System.Void Unity.Collections.Spinner::Unlock()
extern void Spinner_Unlock_m1A26CB58AE3E733421698B9F8750D882C649EE32 (void);
// 0x000001D2 System.Void Unity.Collections.UnmanagedArray`1::Dispose()
// 0x000001D3 T& Unity.Collections.UnmanagedArray`1::get_Item(System.Int32)
// 0x000001D4 System.Void Unity.Collections.RewindableAllocator::Rewind()
extern void RewindableAllocator_Rewind_mCE9856063EE3638DC82C4CF8605DBEBEBF130580 (void);
// 0x000001D5 System.Void Unity.Collections.RewindableAllocator::Dispose()
extern void RewindableAllocator_Dispose_m9938A91127A11581DA09794A2C5E8DF6283F2678 (void);
// 0x000001D6 System.Int32 Unity.Collections.RewindableAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_Try_m1C0B2B6033081280DA48B6475F2A0B764E4F57BE (void);
// 0x000001D7 System.Int32 Unity.Collections.RewindableAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_Try_mF6E7F53E1E6F100CFE4D0449B40BADCA6877E5C2 (void);
// 0x000001D8 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.RewindableAllocator::get_Handle()
extern void RewindableAllocator_get_Handle_m056BEDCB4F2BEA70D8DB4B91FAE1C9B7A44D174F (void);
// 0x000001D9 System.Int32 Unity.Collections.RewindableAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_TryU24BurstManaged_m94F53843161FC7D54FE03A65FEEF91AEC1A85082 (void);
// 0x000001DA System.Void Unity.Collections.RewindableAllocator/MemoryBlock::.ctor(System.Int64)
extern void MemoryBlock__ctor_mE607093E03F964839EE507282CED5F6ACB9E64D3 (void);
// 0x000001DB System.Void Unity.Collections.RewindableAllocator/MemoryBlock::Rewind()
extern void MemoryBlock_Rewind_mD4E938ABCCD22E3430DEDEA620DFEF56E7542958 (void);
// 0x000001DC System.Void Unity.Collections.RewindableAllocator/MemoryBlock::Dispose()
extern void MemoryBlock_Dispose_m8B9123CC2024106EE5104952C15DA2E4902033EF (void);
// 0x000001DD System.Int32 Unity.Collections.RewindableAllocator/MemoryBlock::TryAllocate(Unity.Collections.AllocatorManager/Block&)
extern void MemoryBlock_TryAllocate_m3B55864CA6A89C02E25B9C7B49E2652B66FE3A7F (void);
// 0x000001DE System.Boolean Unity.Collections.RewindableAllocator/MemoryBlock::Contains(System.IntPtr)
extern void MemoryBlock_Contains_m93E7B8DC04D2AD9AFDD8589FFC7CD205031C90BB (void);
// 0x000001DF System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E7$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_000006E7U24PostfixBurstDelegate__ctor_mF2B0791B7B689108C934F1420F889C5C3D491EB6 (void);
// 0x000001E0 System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E7$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_000006E7U24PostfixBurstDelegate_Invoke_m35AFB8CCF5FB1954B8B8B4681A34A7A4B1D188F6 (void);
// 0x000001E1 System.IAsyncResult Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E7$PostfixBurstDelegate::BeginInvoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&,System.AsyncCallback,System.Object)
extern void Try_000006E7U24PostfixBurstDelegate_BeginInvoke_mF7269EE84D2FBF46D3F1F5BD2F2B18A96503A572 (void);
// 0x000001E2 System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E7$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
extern void Try_000006E7U24PostfixBurstDelegate_EndInvoke_m04483C10C816205A5991BBC651C69F5AF2FF98CD (void);
// 0x000001E3 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E7$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_000006E7U24BurstDirectCall_GetFunctionPointerDiscard_m03892CAE6C814540351E6C177B7CDAD10C2F9E21 (void);
// 0x000001E4 System.IntPtr Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E7$BurstDirectCall::GetFunctionPointer()
extern void Try_000006E7U24BurstDirectCall_GetFunctionPointer_m879E751F874D42C5FD2C38375A967202C8D95CCA (void);
// 0x000001E5 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E7$BurstDirectCall::Constructor()
extern void Try_000006E7U24BurstDirectCall_Constructor_mF9C02D2DCB0D6949EF4284E51A4EF47801315B9D (void);
// 0x000001E6 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E7$BurstDirectCall::Initialize()
extern void Try_000006E7U24BurstDirectCall_Initialize_m6F83B305E1280FF2175A58A500B801481C0580D3 (void);
// 0x000001E7 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E7$BurstDirectCall::.cctor()
extern void Try_000006E7U24BurstDirectCall__cctor_mF03EB38DD47EC8725C6041B7E92E3F246AE8F73B (void);
// 0x000001E8 System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E7$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_000006E7U24BurstDirectCall_Invoke_mE2703313414C6B77A1A305EADFBB7F2166162214 (void);
// 0x000001E9 Unity.Collections.CopyError Unity.Collections.UTF8ArrayUnsafeUtility::Copy(System.Byte*,System.Int32&,System.Int32,System.Char*,System.Int32)
extern void UTF8ArrayUnsafeUtility_Copy_mCA5E6CB4A6C5041BEC8F0A10CEED04338D2D4082 (void);
// 0x000001EA Unity.Collections.CopyError Unity.Collections.UTF8ArrayUnsafeUtility::Copy(System.Byte*,System.UInt16&,System.UInt16,System.Char*,System.Int32)
extern void UTF8ArrayUnsafeUtility_Copy_m2A1BCB7AF917A965D600F659B20C0E95CFF28DA1 (void);
// 0x000001EB System.Int32 Unity.Collections.UTF8ArrayUnsafeUtility::StrCmp(System.Byte*,System.Int32,System.Byte*,System.Int32)
extern void UTF8ArrayUnsafeUtility_StrCmp_m6B6F0AFAB3C027DCD0595636A2EE7E0111B5CF4D (void);
// 0x000001EC System.Boolean Unity.Collections.UTF8ArrayUnsafeUtility::EqualsUTF8Bytes(System.Byte*,System.Int32,System.Byte*,System.Int32)
extern void UTF8ArrayUnsafeUtility_EqualsUTF8Bytes_m5F0D6A125E7A821380D781FF3CE89654770F0F52 (void);
// 0x000001ED System.Int32 Unity.Collections.UTF8ArrayUnsafeUtility::StrCmp(System.Byte*,System.Int32,System.Char*,System.Int32)
extern void UTF8ArrayUnsafeUtility_StrCmp_mB9A99D67EB2B4A65AA7ACC201834D2126F49551A (void);
// 0x000001EE System.Void Unity.Collections.UTF8ArrayUnsafeUtility/Comparison::.ctor(Unity.Collections.Unicode/Rune,Unity.Collections.ConversionError,Unity.Collections.Unicode/Rune,Unity.Collections.ConversionError)
extern void Comparison__ctor_m532F7CEEC53619D47639FF9483D6CE0F7282807B (void);
// 0x000001EF System.Boolean Unity.Collections.Unicode::IsValidCodePoint(System.Int32)
extern void Unicode_IsValidCodePoint_m63546F522A9197CE3FD9F1126FB6029C1EDA6922 (void);
// 0x000001F0 System.Boolean Unity.Collections.Unicode::NotTrailer(System.Byte)
extern void Unicode_NotTrailer_m12C46BBD84BABEE1A62F7FF5F15BDB17531C500F (void);
// 0x000001F1 Unity.Collections.Unicode/Rune Unity.Collections.Unicode::get_ReplacementCharacter()
extern void Unicode_get_ReplacementCharacter_m0834B138000E3F294DE751347EE480CCC388FC65 (void);
// 0x000001F2 Unity.Collections.ConversionError Unity.Collections.Unicode::Utf8ToUcs(Unity.Collections.Unicode/Rune&,System.Byte*,System.Int32&,System.Int32)
extern void Unicode_Utf8ToUcs_m482CC924FFECFBA79ABE2C102C8A698BA260CE78 (void);
// 0x000001F3 System.Boolean Unity.Collections.Unicode::IsLeadingSurrogate(System.Char)
extern void Unicode_IsLeadingSurrogate_mBB1CF1A83708E58175E3714BF761B0F924C8A086 (void);
// 0x000001F4 System.Boolean Unity.Collections.Unicode::IsTrailingSurrogate(System.Char)
extern void Unicode_IsTrailingSurrogate_m5921D0860D53414B3F73ACD41E4C56489DB7F2DB (void);
// 0x000001F5 Unity.Collections.ConversionError Unity.Collections.Unicode::Utf16ToUcs(Unity.Collections.Unicode/Rune&,System.Char*,System.Int32&,System.Int32)
extern void Unicode_Utf16ToUcs_mC943C4288B0B7B25B98789A2FA70B858A0A98788 (void);
// 0x000001F6 Unity.Collections.ConversionError Unity.Collections.Unicode::UcsToUtf8(System.Byte*,System.Int32&,System.Int32,Unity.Collections.Unicode/Rune)
extern void Unicode_UcsToUtf8_m94109B9092335B9C781085D0AA8B406263DFCC18 (void);
// 0x000001F7 Unity.Collections.ConversionError Unity.Collections.Unicode::UcsToUtf16(System.Char*,System.Int32&,System.Int32,Unity.Collections.Unicode/Rune)
extern void Unicode_UcsToUtf16_m9CCEB3D32329CB38BEC9AE5145246AAF8CD856CC (void);
// 0x000001F8 Unity.Collections.ConversionError Unity.Collections.Unicode::Utf16ToUtf8(System.Char*,System.Int32,System.Byte*,System.Int32&,System.Int32)
extern void Unicode_Utf16ToUtf8_mEEC4AC98273A5A3CE54C5EFCF44B01CC65FE4ECA (void);
// 0x000001F9 Unity.Collections.ConversionError Unity.Collections.Unicode::Utf8ToUtf16(System.Byte*,System.Int32,System.Char*,System.Int32&,System.Int32)
extern void Unicode_Utf8ToUtf16_m43FC98F1150EBEEEC5DEF212ED3C3C790DE5F145 (void);
// 0x000001FA Unity.Collections.Unicode/Rune Unity.Collections.Unicode/Rune::op_Explicit(System.Char)
extern void Rune_op_Explicit_mE3A636E9FD38D6C371E41DCAAB2138F400A3F42F (void);
// 0x000001FB System.Int32 Unity.Collections.Unicode/Rune::LengthInUtf8Bytes()
extern void Rune_LengthInUtf8Bytes_m604BE7D4A8E1D866A859DCCF56093F2F0CDF8C58 (void);
// 0x000001FC System.Void Unity.Collections.xxHash3::Avx2HashLongInternalLoop(System.UInt64*,System.Byte*,System.Byte*,System.Int64,System.Byte*,System.Int32)
extern void xxHash3_Avx2HashLongInternalLoop_mD675A814781A3346F6DD0B55163340629AF82B31 (void);
// 0x000001FD System.Void Unity.Collections.xxHash3::Avx2ScrambleAcc(System.UInt64*,System.Byte*)
extern void xxHash3_Avx2ScrambleAcc_mF7B503E35596219948DB29FF557A6632DDB204FF (void);
// 0x000001FE System.Void Unity.Collections.xxHash3::Avx2Accumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
extern void xxHash3_Avx2Accumulate_mD9C9864A554667983A788D8F7076A2B5DE17A9C4 (void);
// 0x000001FF System.Void Unity.Collections.xxHash3::Avx2Accumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*)
extern void xxHash3_Avx2Accumulate512_m8FFD6101C52B5036B1BDA5CC8586EEB8E2F0439F (void);
// 0x00000200 System.UInt64 Unity.Collections.xxHash3::Hash64Long(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void xxHash3_Hash64Long_m362983ED628110459335EF3AADDCE56947A8420E (void);
// 0x00000201 System.Void Unity.Collections.xxHash3::Hash128Long(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128Long_m17ABEB7B8F67A0F9754AC5D1F3932BAEB7801DDE (void);
// 0x00000202 Unity.Mathematics.uint4 Unity.Collections.xxHash3::ToUint4(System.UInt64,System.UInt64)
extern void xxHash3_ToUint4_m592D9312AFCC5F5642ED63D6B2FB90B03FEA4E5D (void);
// 0x00000203 System.UInt64 Unity.Collections.xxHash3::Read64LE(System.Void*)
extern void xxHash3_Read64LE_m90CC453AD07D50C6D8E3C0FCD63782F1DC0045B4 (void);
// 0x00000204 System.Void Unity.Collections.xxHash3::Write64LE(System.Void*,System.UInt64)
extern void xxHash3_Write64LE_mF27307D87928FEB3EB969009C94036E3C5D91396 (void);
// 0x00000205 System.UInt64 Unity.Collections.xxHash3::Mul32To64(System.UInt32,System.UInt32)
extern void xxHash3_Mul32To64_m7F2A9755DA48811848F0734E9BDB4C89C65D0796 (void);
// 0x00000206 System.UInt64 Unity.Collections.xxHash3::XorShift64(System.UInt64,System.Int32)
extern void xxHash3_XorShift64_mB53E417D84565E9FDB55FA8F1A12B17B13D69E19 (void);
// 0x00000207 System.UInt64 Unity.Collections.xxHash3::Mul128Fold64(System.UInt64,System.UInt64)
extern void xxHash3_Mul128Fold64_m13536D24425EE781D0E864C529E40C92E3E7B8C2 (void);
// 0x00000208 System.UInt64 Unity.Collections.xxHash3::Avalanche(System.UInt64)
extern void xxHash3_Avalanche_m4A7FC83F5F99482EC8ABF2D5C988BF88B3580276 (void);
// 0x00000209 System.UInt64 Unity.Collections.xxHash3::Mix2Acc(System.UInt64,System.UInt64,System.Byte*)
extern void xxHash3_Mix2Acc_m597B7F16AEB66AF69E7DB26746B23A61327B6F8B (void);
// 0x0000020A System.UInt64 Unity.Collections.xxHash3::MergeAcc(System.UInt64*,System.Byte*,System.UInt64)
extern void xxHash3_MergeAcc_mBF112A7A272F378502935BA5ACB3571F84E9D064 (void);
// 0x0000020B System.Void Unity.Collections.xxHash3::DefaultHashLongInternalLoop(System.UInt64*,System.Byte*,System.Byte*,System.Int64,System.Byte*,System.Int32)
extern void xxHash3_DefaultHashLongInternalLoop_m8931659CB98216AD2BDFAA86C16BD9D5FC3A319E (void);
// 0x0000020C System.Void Unity.Collections.xxHash3::DefaultAccumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
extern void xxHash3_DefaultAccumulate_mB6356774096EB26FF5896290674B2EBF2D88172B (void);
// 0x0000020D System.Void Unity.Collections.xxHash3::DefaultAccumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int32)
extern void xxHash3_DefaultAccumulate512_mD70E11C9C3EE954C60CA119BFED851934A310674 (void);
// 0x0000020E System.Void Unity.Collections.xxHash3::DefaultScrambleAcc(System.UInt64*,System.Byte*)
extern void xxHash3_DefaultScrambleAcc_m76040A3322FB2033023CC573EECC959616539940 (void);
// 0x0000020F System.UInt64 Unity.Collections.xxHash3::Hash64Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void xxHash3_Hash64LongU24BurstManaged_mE6B8AFB7022AA042F0BF88484D441CC169DEF612 (void);
// 0x00000210 System.Void Unity.Collections.xxHash3::Hash128Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128LongU24BurstManaged_mE8C02CE53D508387CE351B64CD5993DCC6390EE4 (void);
// 0x00000211 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071E$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Hash64Long_0000071EU24PostfixBurstDelegate__ctor_m9143DE880F0E321E7466F05267EF0AA602CC7DE4 (void);
// 0x00000212 System.UInt64 Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071E$PostfixBurstDelegate::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void Hash64Long_0000071EU24PostfixBurstDelegate_Invoke_mBC1E55F1B1F1849AE9BD281A4078C8BEF32B38CC (void);
// 0x00000213 System.IAsyncResult Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071E$PostfixBurstDelegate::BeginInvoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.AsyncCallback,System.Object)
extern void Hash64Long_0000071EU24PostfixBurstDelegate_BeginInvoke_mB82237118582F59E072BD288BD8CC27E3D145DF5 (void);
// 0x00000214 System.UInt64 Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071E$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
extern void Hash64Long_0000071EU24PostfixBurstDelegate_EndInvoke_m296852E2141F4EE2E89A993E764AD320A8113923 (void);
// 0x00000215 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071E$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Hash64Long_0000071EU24BurstDirectCall_GetFunctionPointerDiscard_mB35064638406956A7AA47CCABE70AE102969579F (void);
// 0x00000216 System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071E$BurstDirectCall::GetFunctionPointer()
extern void Hash64Long_0000071EU24BurstDirectCall_GetFunctionPointer_m6453BE24D1BC34F9380612D1CBFDC7643C6055B5 (void);
// 0x00000217 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071E$BurstDirectCall::Constructor()
extern void Hash64Long_0000071EU24BurstDirectCall_Constructor_m41ADD78FB2F98A82BC7B3BA8F91D21A52381B1C8 (void);
// 0x00000218 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071E$BurstDirectCall::Initialize()
extern void Hash64Long_0000071EU24BurstDirectCall_Initialize_m69D96D7C8FB5CDA42E6A08AB98ADFCFD204D4EA3 (void);
// 0x00000219 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071E$BurstDirectCall::.cctor()
extern void Hash64Long_0000071EU24BurstDirectCall__cctor_m9E7F1839B03AEB7089A746CF30B97EF605F5BF45 (void);
// 0x0000021A System.UInt64 Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071E$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void Hash64Long_0000071EU24BurstDirectCall_Invoke_m456A658A3877D6FA81EDBE9BFBA4859D1D47A292 (void);
// 0x0000021B System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000725$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Hash128Long_00000725U24PostfixBurstDelegate__ctor_mC8530D7D2B767455599DCE567885C29926E2DFF4 (void);
// 0x0000021C System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000725$PostfixBurstDelegate::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void Hash128Long_00000725U24PostfixBurstDelegate_Invoke_m16CEE2EAE8B164DEDB6C9BC77683F889CDE9D1E0 (void);
// 0x0000021D System.IAsyncResult Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000725$PostfixBurstDelegate::BeginInvoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&,System.AsyncCallback,System.Object)
extern void Hash128Long_00000725U24PostfixBurstDelegate_BeginInvoke_mF018549B9B93B95A4E179A0454DDC39CB912FB32 (void);
// 0x0000021E System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000725$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
extern void Hash128Long_00000725U24PostfixBurstDelegate_EndInvoke_m624C81BB1EA925997A59A6FD753C950FA4E5A315 (void);
// 0x0000021F System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000725$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Hash128Long_00000725U24BurstDirectCall_GetFunctionPointerDiscard_m9D88E1FBE67644F71CD5CAC38B5EB04B276BF00F (void);
// 0x00000220 System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000725$BurstDirectCall::GetFunctionPointer()
extern void Hash128Long_00000725U24BurstDirectCall_GetFunctionPointer_m6E587CBE14B775A1BB04DE4EBA56CCF12A9A55F0 (void);
// 0x00000221 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000725$BurstDirectCall::Constructor()
extern void Hash128Long_00000725U24BurstDirectCall_Constructor_mE964E5649109F2C135B6156A1470E261FAD993B9 (void);
// 0x00000222 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000725$BurstDirectCall::Initialize()
extern void Hash128Long_00000725U24BurstDirectCall_Initialize_mA6F12D746653B7B033F77C494E20AFF38E5F5746 (void);
// 0x00000223 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000725$BurstDirectCall::.cctor()
extern void Hash128Long_00000725U24BurstDirectCall__cctor_mAF04DA690220544772A7C82A24E5258CA2F1DAB5 (void);
// 0x00000224 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000725$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void Hash128Long_00000725U24BurstDirectCall_Invoke_m7C794BCCAEE8669C75E0388A8858A00CB7BB3F30 (void);
// 0x00000225 System.Void* Unity.Collections.LowLevel.Unsafe.NativeListUnsafeUtility::GetUnsafePtr(Unity.Collections.NativeList`1<T>)
// 0x00000226 System.Void* Unity.Collections.LowLevel.Unsafe.NativeListUnsafeUtility::GetUnsafeReadOnlyPtr(Unity.Collections.NativeList`1<T>)
// 0x00000227 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::GetBucketSize(System.Int32)
extern void UnsafeHashMapData_GetBucketSize_m8012EBF65449E404290869CDD9142C0FE0B3796B (void);
// 0x00000228 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::GrowCapacity(System.Int32)
extern void UnsafeHashMapData_GrowCapacity_mCA1CECBF0488C1D5A77A1DF8600D5614BA0861A0 (void);
// 0x00000229 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::AllocateHashMap(System.Int32,System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*&)
// 0x0000022A System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::ReallocateHashMap(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,System.Int32,System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x0000022B System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::DeallocateHashMap(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void UnsafeHashMapData_DeallocateHashMap_m952A5E5A03F6270931864BE77A3349C8F274FC2E (void);
// 0x0000022C System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::CalculateDataSize(System.Int32,System.Int32,System.Int32&,System.Int32&,System.Int32&)
// 0x0000022D System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::IsEmpty(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*)
extern void UnsafeHashMapData_IsEmpty_m0F038F9D2231E886E8168C633A2A861A3CDCCE37 (void);
// 0x0000022E System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::GetCount(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*)
extern void UnsafeHashMapData_GetCount_m19B2E9FD50DD11A43A2D01AD2D9C387A9D6DDE52 (void);
// 0x0000022F System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::MoveNext(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,System.Int32&,System.Int32&,System.Int32&)
extern void UnsafeHashMapData_MoveNext_mCB3B5197F1741D281A6F0520FEE01CF04E844541 (void);
// 0x00000230 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::GetKeyArray(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,Unity.Collections.NativeArray`1<TKey>)
// 0x00000231 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::GetValueArray(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,Unity.Collections.NativeArray`1<TValue>)
// 0x00000232 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::GetKeyValueArrays(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,Unity.Collections.NativeKeyValueArrays`2<TKey,TValue>)
// 0x00000233 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapDataDispose::Dispose()
extern void UnsafeHashMapDataDispose_Dispose_m9E3DF36D59F3E4CAD0D400181DC8C3C8BAD76808 (void);
// 0x00000234 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapDataDisposeJob::Execute()
extern void UnsafeHashMapDataDisposeJob_Execute_m19D9297F09EE8544FC687FFFD7CC974B94A1233B (void);
// 0x00000235 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::Clear(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*)
// 0x00000236 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::AllocEntry(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,System.Int32)
// 0x00000237 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::FreeEntry(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,System.Int32,System.Int32)
// 0x00000238 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::TryAddAtomic(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,TKey,TValue,System.Int32)
// 0x00000239 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::TryAdd(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,TKey,TValue,System.Boolean,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x0000023A System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::Remove(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,TKey,System.Boolean)
// 0x0000023B System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::TryGetFirstValueAtomic(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,TKey,TValue&,Unity.Collections.NativeMultiHashMapIterator`1<TKey>&)
// 0x0000023C System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::TryGetNextValueAtomic(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,TValue&,Unity.Collections.NativeMultiHashMapIterator`1<TKey>&)
// 0x0000023D System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::SetValue(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,Unity.Collections.NativeMultiHashMapIterator`1<TKey>&,TValue&)
// 0x0000023E TKey Unity.Collections.LowLevel.Unsafe.KeyValue`2::get_Key()
// 0x0000023F TValue& Unity.Collections.LowLevel.Unsafe.KeyValue`2::get_Value()
// 0x00000240 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapDataEnumerator::.ctor(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*)
extern void UnsafeHashMapDataEnumerator__ctor_m96A3F1A71567451A655C63C4412838FD85BAA6DD (void);
// 0x00000241 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMapDataEnumerator::MoveNext()
extern void UnsafeHashMapDataEnumerator_MoveNext_m74CB5CDA2177D0AA9F5022C160676C7854FC2C7B (void);
// 0x00000242 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapDataEnumerator::Reset()
extern void UnsafeHashMapDataEnumerator_Reset_m85D5B42E562A51E766D0FF22934E14B6B1614AD8 (void);
// 0x00000243 Unity.Collections.LowLevel.Unsafe.KeyValue`2<TKey,TValue> Unity.Collections.LowLevel.Unsafe.UnsafeHashMapDataEnumerator::GetCurrent()
// 0x00000244 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000245 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::get_IsEmpty()
// 0x00000246 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::Count()
// 0x00000247 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::get_Capacity()
// 0x00000248 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::set_Capacity(System.Int32)
// 0x00000249 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::Clear()
// 0x0000024A System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::TryAdd(TKey,TValue)
// 0x0000024B System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::Remove(TKey)
// 0x0000024C System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::TryGetValue(TKey,TValue&)
// 0x0000024D System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::ContainsKey(TKey)
// 0x0000024E TValue Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::get_Item(TKey)
// 0x0000024F System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::set_Item(TKey,TValue)
// 0x00000250 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::get_IsCreated()
// 0x00000251 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::Dispose()
// 0x00000252 Unity.Collections.NativeArray`1<TKey> Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::GetKeyArray(Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000253 Unity.Collections.NativeArray`1<TValue> Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::GetValueArray(Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000254 Unity.Collections.NativeKeyValueArrays`2<TKey,TValue> Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::GetKeyValueArrays(Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000255 Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2/ParallelWriter<TKey,TValue> Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::AsParallelWriter()
// 0x00000256 System.Collections.Generic.IEnumerator`1<Unity.Collections.LowLevel.Unsafe.KeyValue`2<TKey,TValue>> Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::System.Collections.Generic.IEnumerable<Unity.Collections.LowLevel.Unsafe.KeyValue<TKey,TValue>>.GetEnumerator()
// 0x00000257 System.Collections.IEnumerator Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000258 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2/ParallelWriter::get_Capacity()
// 0x00000259 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2/ParallelWriter::TryAdd(TKey,TValue)
// 0x0000025A System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapDebuggerTypeProxy`2::.ctor(Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<TKey,TValue>)
// 0x0000025B System.Collections.Generic.List`1<Unity.Collections.Pair`2<TKey,TValue>> Unity.Collections.LowLevel.Unsafe.UnsafeHashMapDebuggerTypeProxy`2::get_Items()
// 0x0000025C System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::get_Length()
// 0x0000025D System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::set_Length(System.Int32)
// 0x0000025E System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::get_Capacity()
// 0x0000025F System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::set_Capacity(System.Int32)
// 0x00000260 T Unity.Collections.LowLevel.Unsafe.UnsafeList`1::get_Item(System.Int32)
// 0x00000261 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::set_Item(System.Int32,T)
// 0x00000262 T& Unity.Collections.LowLevel.Unsafe.UnsafeList`1::ElementAt(System.Int32)
// 0x00000263 Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Create(System.Int32,U&,Unity.Collections.NativeArrayOptions)
// 0x00000264 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Destroy(Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>*)
// 0x00000265 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeList`1::get_IsEmpty()
// 0x00000266 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeList`1::get_IsCreated()
// 0x00000267 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Dispose()
// 0x00000268 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Clear()
// 0x00000269 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Resize(System.Int32,Unity.Collections.NativeArrayOptions)
// 0x0000026A System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Realloc(U&,System.Int32)
// 0x0000026B System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::SetCapacity(U&,System.Int32)
// 0x0000026C System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::SetCapacity(System.Int32)
// 0x0000026D System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Add(T&)
// 0x0000026E System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::InsertRangeWithBeginEnd(System.Int32,System.Int32)
// 0x0000026F System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::RemoveAt(System.Int32)
// 0x00000270 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::RemoveRange(System.Int32,System.Int32)
// 0x00000271 System.Collections.IEnumerator Unity.Collections.LowLevel.Unsafe.UnsafeList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000272 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.LowLevel.Unsafe.UnsafeList`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000273 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeListTDebugView`1::.ctor(Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>)
// 0x00000274 T[] Unity.Collections.LowLevel.Unsafe.UnsafeListTDebugView`1::get_Items()
// 0x00000275 System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtilityExtensions::AddressOf(T&)
// 0x00000276 T& Unity.Collections.LowLevel.Unsafe.UnsafeUtilityExtensions::AsRef(T&)
// 0x00000277 System.Void $BurstDirectCallInitializer::Initialize()
extern void U24BurstDirectCallInitializer_Initialize_m28D21A06E148501E7C9395ABA00B007F42778D50 (void);
static Il2CppMethodPointer s_methodPointers[631] = 
{
	EmbeddedAttribute__ctor_mE19BFF00D03833D46FC6E6B83A9C5E708E7E665D,
	IsReadOnlyAttribute__ctor_m34A120993044E67D397DB90FF22BBF030B5C19DC,
	IsUnmanagedAttribute__ctor_m05BDDBB49F005C47C815CD32668381083A1F5C43,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AllocatorManager_CheckDelegate_m175E6C3C90B1A3D68C3D59AA49BBB6563577D71C,
	AllocatorManager_UseDelegate_m23D47BDAD0127B01BD975BE87DF9DD23069BEF62,
	AllocatorManager_allocate_block_mE0A20CC5EC650DA50CEB792D8036CD7182C15DE9,
	AllocatorManager_forward_mono_allocate_block_m06263F166DBD93A94732FA30672731B18C9905C6,
	AllocatorManager_LegacyOf_m8D09A3A92FE3119BDFB06BCCB551346112419344,
	AllocatorManager_TryLegacy_m9B0857A8A6F5903761C7F7A4D11D0B09F7063B0C,
	AllocatorManager_Try_m9D21E077697EE410032DDC768E2D27CFC66145DE,
	AllocatorManager_IsCustomAllocator_mD8CD3CDA361B05D851A729640383E1F07369B060,
	AllocatorManager__cctor_mB68DC0C0F56649CE4C9010F11C9A42E309E46BFB,
	TryFunction__ctor_m61B0A7506F9D0C752E09C91E3E3CC16034A41AA0,
	TryFunction_Invoke_m62DB13101BCEC040485DBD4F68E9B4B9406368DE,
	TryFunction_BeginInvoke_mDB5760D98471188127E578B6598BBD7D498ACCF2,
	TryFunction_EndInvoke_m26A14616127F9673336FE6BB8C1202F6A7F27C44,
	AllocatorHandle_get_TableEntry_mF3BC93F69AA3E1764A9770FEE595E263239B703D,
	AllocatorHandle_Rewind_mDBC3DC2236265F7F712121F0F3683F73B8609060,
	AllocatorHandle_op_Implicit_mBF56A735E4B575D7094AA21DAF4FD4FAB1EF94FA,
	AllocatorHandle_get_Value_m5F4A923E36A6E1C8983F187DFF73AA659350790B,
	AllocatorHandle_Try_m2F88758592B176EF3A7CFDCB93599C0CE6A97148,
	AllocatorHandle_get_Handle_m9CBE1298F12DFCBD71E6DBE77B08E5D0FD2F4A5E,
	AllocatorHandle_get_ToAllocator_mC2F7F3B23A30D63C2A14984F5D25DDF117C5FEFF,
	AllocatorHandle_Dispose_m21567B9257F67FFE3EA2A5C44BE860BE641B0FA1,
	Range_Dispose_m466C86ACD4956014EE550CEC4245993E10629D42,
	Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA,
	Block_get_AllocatedBytes_mC7DC93B1995B6837136BE97871E344CFDD32B907,
	Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF,
	Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730,
	Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9,
	Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1,
	NULL,
	NULL,
	StackAllocator_get_Handle_m22001B4045E018527C5B35D6715B550B6002C7ED,
	StackAllocator_Try_m9E77FFC5B3DB94A6A738F9659B23FB48F675825D,
	StackAllocator_Try_m112E33FC058E6A640E7E6E21D95986C5E9D5ECAB,
	StackAllocator_Dispose_m121AA556092D97A553B56BE62D67332183F4F678,
	StackAllocator_TryU24BurstManaged_mD9C996BEAB7838301DE0D3BC0F0EA502157D2F84,
	Try_0000097FU24PostfixBurstDelegate__ctor_m2F43652B61CA4B4F77EAE3A9F15BAF3BFD23AAB6,
	Try_0000097FU24PostfixBurstDelegate_Invoke_m7699619275F46D251021E0F285C5D1CA05DE6FA6,
	Try_0000097FU24PostfixBurstDelegate_BeginInvoke_m23B94F95041C4552E6314E51899A8D9F17A7C8E2,
	Try_0000097FU24PostfixBurstDelegate_EndInvoke_m850E6195458A006B059617B0A52A30AB360F247D,
	Try_0000097FU24BurstDirectCall_GetFunctionPointerDiscard_m684898C8C3C2EF9B95C091A2DFD93A0E43387279,
	Try_0000097FU24BurstDirectCall_GetFunctionPointer_mE9231BF5330D81A318761A06B082B084CC89524B,
	Try_0000097FU24BurstDirectCall_Constructor_m1E9C5EA8350A676B88E64964AE9C60EEE1C8FBFD,
	Try_0000097FU24BurstDirectCall_Initialize_mB56A1C6FF75DAB16FB9A8315AC0D7F1B392A071E,
	Try_0000097FU24BurstDirectCall__cctor_mA50CA8D83461D10BD79F6685862F53BD448AB2E2,
	Try_0000097FU24BurstDirectCall_Invoke_m47D899BAA9331047E34009FEE2F4F038FD859F97,
	SlabAllocator_get_Handle_m1BAE636499EF06990B084B49FF05100F4D70C6D7,
	SlabAllocator_get_SlabSizeInBytes_m09758AFE572F9BA8007BB7ED308086BA629DE685,
	SlabAllocator_Try_m18522CF564EE22D2C7FD7C098087906032E53CE3,
	SlabAllocator_Try_m935C49B4A7F1F65EA55A3DBBDD2699BF94B53E74,
	SlabAllocator_Dispose_m5FD3C0E10FE09952A8F99656821B2D7F3B3E578F,
	SlabAllocator_TryU24BurstManaged_m69BA0BDD9CB936BB95076F93FB4404886E9E3653,
	Try_0000098DU24PostfixBurstDelegate__ctor_mAB977BCAA29E4584E94738117B7264CE61775A2C,
	Try_0000098DU24PostfixBurstDelegate_Invoke_m2D2F698C1146432FB7A4BDE76FE8EF790E1587A7,
	Try_0000098DU24PostfixBurstDelegate_BeginInvoke_mBE8708B51E9C1E2CDA7159233604D2D44BEC1104,
	Try_0000098DU24PostfixBurstDelegate_EndInvoke_m34C3B0B6740984FE4041A4949937627C6E5CF4ED,
	Try_0000098DU24BurstDirectCall_GetFunctionPointerDiscard_m8BEB195D22420B1973341712B5F6B5BAA0B79A8A,
	Try_0000098DU24BurstDirectCall_GetFunctionPointer_mE6CE8A6AF1740D87900CAD6BE49E16F936664DCD,
	Try_0000098DU24BurstDirectCall_Constructor_m9D9178AFE7080D326450B733A6919858743F1B66,
	Try_0000098DU24BurstDirectCall_Initialize_m5941729FC6CB725EB4DD6E3D0D3E855C04E4F1DD,
	Try_0000098DU24BurstDirectCall__cctor_mD5F120C307E12BBA294DC18F77AE0FF2EDFB10F1,
	Try_0000098DU24BurstDirectCall_Invoke_m9E1A6AAD9C0B9AF2B528555FAE2C1D151EFB55F5,
	NULL,
	NULL,
	NULL,
	TableEntry__cctor_m77F1538AA964864B232693F2DF397D649146E3FF,
	Managed__cctor_m6E6143AAF84278AE2DBA8E20E72380A94802DE40,
	CreatePropertyAttribute__ctor_mE5AD2035801359532F3ABA06B2E67CB664930A68,
	BurstCompatibleAttribute_set_GenericTypeArguments_mEEF019AFEFB1DCC2C6DC2E33C7BE33DECCD8DD5A,
	BurstCompatibleAttribute__ctor_m5D7D5245014D5EF879BB02B137717AADED72CA4C,
	NotBurstCompatibleAttribute__ctor_m1A03DFE74AB05DBB234C15F707ABD0AC4C91ED63,
	CollectionHelper_Align_mB050A42548A605C097FC51EAC5E1E79E473D4DA3,
	CollectionHelper_Hash_mB39892EEEA8CD9C96B06E37EF3022A5E7557D178,
	CollectionHelper_ShouldDeallocate_mC18522E3BA69F147EF876DBF817649CA98CB5C72,
	CollectionHelper_AssumePositive_m3B3ABDDCACD457581AB325583563481AF0A06D68,
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
	NULL,
	FixedString32Bytes_GetUnsafePtr_mC5ECAFEFC8B46192D40E7343B05E5E30E0CB7E3E,
	FixedString32Bytes_get_Length_m5BC3BD52F24399E2AABD131E4301DD073308674A,
	FixedString32Bytes_set_Length_m1BEEECA46CB0DE1A9D72828C079F776D9EA4D8BA,
	FixedString32Bytes_get_Capacity_mA4782F3A7A7B0FAFA1CFA5EC39D0C5B17E08EDF7,
	FixedString32Bytes_TryResize_mF4CDA9CB3EAA3E11C8A50B85852BCAB5AA0C96BA,
	FixedString32Bytes_CompareTo_mF178913F9D6CB2E3D6BD34ABF448683B3906781F,
	FixedString32Bytes_Equals_m7BFD13BE12B020CF1CEF69C02F6DFEC001DF6FFF,
	FixedString32Bytes__ctor_mC97DF326CAB40CB1B7105B805CD2A83C2484F198,
	FixedString32Bytes_Initialize_m558E56F9BB87AC90C26907859B66357CE06E9553,
	FixedString32Bytes_CompareTo_mF5834EEF9A96EFF22DD73C42B9D3CC4728DDE96A,
	FixedString32Bytes_op_Equality_mB2EF2F3DB3F242926FD41E1879C231D12161EE35,
	FixedString32Bytes_op_Inequality_mE8779E45316C276CD30793042D4E159A1300EB8E,
	FixedString32Bytes_Equals_m35066BEF893D842074A1E6BD9A5C72D9DABADFF0,
	FixedString32Bytes_CompareTo_m455F0190A3BFCDF60F4BA8CE2E41BAE0660BB876,
	FixedString32Bytes_op_Equality_m8F735603DE48939A77EC75F1ED79F8456C28D4AA,
	FixedString32Bytes_Equals_mA6D03C1A9E302D3427624450E4A209DD524238B3,
	FixedString32Bytes_CompareTo_m4327D9074FF49D2CC5A9EC6E1BB51ACE90C34259,
	FixedString32Bytes_op_Equality_m415765F4827A092CC83F653B0EA558BD6E7BB855,
	FixedString32Bytes_Equals_m5148C5014FB447963C9452ECDFD2FAA4FCB2B0AA,
	FixedString32Bytes_CompareTo_mDD8F261148EF43BC134C4404510225C05B4A51E0,
	FixedString32Bytes_op_Equality_mD54C9C0DD9C9A0B65CF6FD8EA719C4323B77CDB9,
	FixedString32Bytes_Equals_m50A3B4996CD9406FAAC0E60C1DED2CF1FC4D9F4C,
	FixedString32Bytes_CompareTo_m208A5443E037D9890D1B7D020B618E17273364EF,
	FixedString32Bytes_op_Equality_mE631153864793DC4025542736F4E0A9A69A9F334,
	FixedString32Bytes_Equals_m765AAAE165047691F090847EC353D1E6ADB64F4E,
	FixedString32Bytes_op_Implicit_m4361A9347A23B5254BDCA5DD79F8AFA6CEE1F503,
	FixedString32Bytes_ToString_mBC0B0105B79BFA9D11EA0AF4DF33FD5C02AD8A3D,
	FixedString32Bytes_GetHashCode_m78001276F05EDD1C4D13D517F4CE8F4C62FDD201,
	FixedString32Bytes_Equals_m0E8DB505E1FAC97C090F8275D5815CFCD0DA22DD,
	FixedString64Bytes_get_UTF8MaxLengthInBytes_mC2D4D77961ECC9F3ADE2E5BEE637A3A90A0D5F5C,
	FixedString64Bytes_GetUnsafePtr_m6D16ED9500A89629B80BE451B7656A049A141823,
	FixedString64Bytes_get_Length_mF9D0BE029ED4BEF8D744A3B0DDCBA458D7789338,
	FixedString64Bytes_set_Length_m6FF424E0B4F134E47BF7CB6C29A3512A54920ADF,
	FixedString64Bytes_get_Capacity_m95BB021D2345D63B372FF23184467FC3EF88E956,
	FixedString64Bytes_TryResize_mDA4CB391AAFEF0FE519EB9C6F77EBDC2A9A23AD6,
	FixedString64Bytes_CompareTo_m4E3A4A02BE8625C7848F0103EC51166F2EBF6672,
	FixedString64Bytes_Equals_m63C23CD49D4CCF2F297770FCB0F13AC2C6148EBD,
	FixedString64Bytes__ctor_m6F181B5C4D61586DD44AC5B320F75C47165C9ECA,
	FixedString64Bytes_Initialize_mB9814E606566EF9010DCEA62AD3E9182EF9B4F2A,
	FixedString64Bytes_CompareTo_m627CA84B4D8145636DDF330BFC7AB6B26C1B78EC,
	FixedString64Bytes_op_Equality_mD1D7A84FE95D4D0812C6ED4D347B29DC5EED681F,
	FixedString64Bytes_Equals_m14019A582997CB9B1B4DFA3288DB5B21F203BCCF,
	FixedString64Bytes_CompareTo_m21F888FA1CF25CA055F9A7288E65F10DBD6095B6,
	FixedString64Bytes_op_Equality_m5BD7B941EE79754A8B5778CF4775B7568BBAB1C9,
	FixedString64Bytes_Equals_mBFB24484A72865892C7BC60D9022817271B9C993,
	FixedString64Bytes_CompareTo_m27BBDFF353C19DACD6EFC8886E98106FD46E8894,
	FixedString64Bytes_op_Equality_mC191D25CE035EBBF9C7D6DB240BDFFB263566B23,
	FixedString64Bytes_Equals_m0D3B6AB690F57CF418004B220261538D1E83B639,
	FixedString64Bytes_CompareTo_mB9951AA5E49E2C3B91301B4BDA0A3D287A356D38,
	FixedString64Bytes_op_Equality_m371DFE02DF55AE74530A12B4A693A1D6ED6FD4E0,
	FixedString64Bytes_Equals_m54DA742A366E1BAFC35800BD2657FD440CFF60E3,
	FixedString64Bytes_CompareTo_mE128DBB33E12D7B8276A50D86C34D2925CC75E12,
	FixedString64Bytes_op_Equality_m2A187148D88285FFAC38E3454C3E19B026F3D465,
	FixedString64Bytes_Equals_m62FB328FF94AE463BDB22F8C10ABE46E3C78898E,
	FixedString64Bytes_op_Implicit_m08B2023522E2101D5666EC7F2056FED23E32786A,
	FixedString64Bytes_ToString_m9A95BFBD08C8131BE663E28F78C59A387EC4D0C0,
	FixedString64Bytes_GetHashCode_mEE673AF20F2034075FD973EDC8708AF0B0E240BD,
	FixedString64Bytes_Equals_mE67C9A0F7A76E525EAA873AB7A87E9F5746DBCEC,
	FixedString128Bytes_GetUnsafePtr_m5D5721F234226666FBC6AE692983EEC26E9679B0,
	FixedString128Bytes_get_Length_mB44B48F688A770EBD1D89BFB9441839F05E99BE3,
	FixedString128Bytes_set_Length_m6D6AE2962D72D9F45A1F1831786F16976DB60E1D,
	FixedString128Bytes_get_Capacity_m4CA35AA2FA471B8B9A1503929ED6732884B7A204,
	FixedString128Bytes_TryResize_mD2CBC43E806000F8F445A72487EA87CF58468106,
	FixedString128Bytes_CompareTo_mD467A78A95C3BB1F288BC3C9FBA690A9495BFC92,
	FixedString128Bytes_Equals_m88DC61CFEDB1D2154A1A49342E897B06F9824430,
	FixedString128Bytes__ctor_m0495F2C2FD757248BED63BD13E30F00B7D21A535,
	FixedString128Bytes_Initialize_mF7DCBEC7A74580F93F2F391DE17D8C016776E895,
	FixedString128Bytes_CompareTo_mBD0FA3114A4A8974E8EFD6B74C6CD555FE424ED3,
	FixedString128Bytes_op_Equality_m7A58BD9D1D0ED40013B51470E2908E2BDA6CFB16,
	FixedString128Bytes_Equals_m0B98DDEBA4C0909B3A34B20211609D9CDDF17BD4,
	FixedString128Bytes_CompareTo_m84D1B08ED43A55442CC0A964ACB16088C35AA4E2,
	FixedString128Bytes_op_Equality_m74D8379CE2E39BBB0E9A8E49BE78BC83C9FC8D9E,
	FixedString128Bytes_Equals_m028BAAF6672E3E8C18FCD2A36E554194AA03B8DC,
	FixedString128Bytes_CompareTo_m66F5769D0ADC3B31E4980495D2691182C647A4A0,
	FixedString128Bytes_op_Equality_mC8F409E118E13BD27A95DF1EDB343488FBD4813F,
	FixedString128Bytes_Equals_m8B29A1963BA2994BEEB6DC6D2ACB5F85F4169C9B,
	FixedString128Bytes_CompareTo_mC9A052A1DC9890BC9F8ED3997E0966141D134A6B,
	FixedString128Bytes_op_Equality_m1AF53B6C7F860FFD507465AC501F689B559977C0,
	FixedString128Bytes_Equals_mC127962FC9AD86D88A301110F1DE6891D73A7560,
	FixedString128Bytes_CompareTo_m4690FA70BE7546784FE808AD836134A862EE30CE,
	FixedString128Bytes_op_Equality_m03FA15F69F81B2B72ADD5AABA302FEC67824AE87,
	FixedString128Bytes_Equals_mF2F489FEBE264F851A46A49F34E552B93CBE1880,
	FixedString128Bytes_op_Implicit_m3F89D72BE171E07664460C46C509548A190CA64D,
	FixedString128Bytes_ToString_m5D0F997EE98FE5E2FD75C67A9EB750EA2A19ECA5,
	FixedString128Bytes_GetHashCode_m0DEBE20E271BB796331438C159F91B8834E3AE27,
	FixedString128Bytes_Equals_mD1488F0494260130EA71B36F7F2235BBE6A4FC35,
	FixedString512Bytes_GetUnsafePtr_mC217ABC503C34C4A9505D3BD8184772A6957B594,
	FixedString512Bytes_get_Length_m70416F6C123F83B82723F71E137672507CEF8E1E,
	FixedString512Bytes_set_Length_m2FB002DB9D4CE470CB67BBBCF0345F3B879718D1,
	FixedString512Bytes_get_Capacity_m04C798E27AD1D5C03347B09A7B59EC1118A4DD9C,
	FixedString512Bytes_TryResize_m926AFC0E97C55C3D6D76AD2E4341D387866E3487,
	FixedString512Bytes_CompareTo_m04A7A314B42FFA9602958449016B60F210C3210D,
	FixedString512Bytes_Equals_m5D845EB2C13E708265F8ED7E0EA20B7CBC346729,
	FixedString512Bytes_CompareTo_m95DEE74C2D0BD5B60B25F90D6BA58ACAEA7A1941,
	FixedString512Bytes_op_Equality_mCD33B3C9CA398C5E594126A4EC8E57FA8E8834AA,
	FixedString512Bytes_Equals_m8F548901D593718D4E2535B84D89972D4E7E6BE9,
	FixedString512Bytes_CompareTo_m0DEEF2359E2F1BF27604E76EEE2DADF257E94590,
	FixedString512Bytes_op_Equality_m43E1195753BE9CF331C4DF8FF11EC53D354097A5,
	FixedString512Bytes_Equals_m11D223E18049AF2276EB099D85BE50952CC3624D,
	FixedString512Bytes_CompareTo_mA7CF8872D14E6E5F2E920D0FFEE3AA0C82F347E6,
	FixedString512Bytes_op_Equality_m1FE84DFBADC441B60E35853861A69A39BF027A18,
	FixedString512Bytes_Equals_m8A06C174B2115E83EE8704B02D6ADC27B8AA09DF,
	FixedString512Bytes_CompareTo_m7428FB6E2AC9137F8A74FD0C5349F2FAE30B05CD,
	FixedString512Bytes_op_Equality_mA859DDE388381AD903D85C542510A97F8A185EE8,
	FixedString512Bytes_Equals_m13E5ED0B742535959E3FF065EB7463151156937B,
	FixedString512Bytes_CompareTo_m1CEBDC6E092AE5F41AC99A3555BE147B58F0AB28,
	FixedString512Bytes_op_Equality_mFDB9C8167FDC0A524B91270776474E27B3D82DEF,
	FixedString512Bytes_Equals_mBA5CFEFCA3D9F726BDF9221B1E1B7C763186F741,
	FixedString512Bytes_ToString_m3507A4F76408A6AEEC02A081227E82C724E788A3,
	FixedString512Bytes_GetHashCode_m7471BCB4E4BFFB14334B86C731F8A7EEE8808C0B,
	FixedString512Bytes_Equals_m56F0D84282853BE0F8EB9C384E8A6BC6DCF704B0,
	FixedString4096Bytes_GetUnsafePtr_mD7BB5BC41DC121917EACD3208B09F7FBA47E9B14,
	FixedString4096Bytes_get_Length_m4A6C18A7FF02C0B37966A4BF6A6C62FE5BD8AA79,
	FixedString4096Bytes_set_Length_mDF584B26F865243D41B322965031DC3AE50AE155,
	FixedString4096Bytes_get_Capacity_m1D61376344C7CD4252488062BF0F1989571E7E65,
	FixedString4096Bytes_TryResize_mD9833218AE0B1AA07F9FF570E8A5F059A8EBEF34,
	FixedString4096Bytes_CompareTo_m56A2BDBABB6EC15C2F06F310C77834ABB2E6E423,
	FixedString4096Bytes_Equals_mB8B543E697D5B9FE4A99B162080F424C070C67B1,
	FixedString4096Bytes_CompareTo_mDF19D52C9733F1C2AC4A5C6E57523640EB762250,
	FixedString4096Bytes_op_Equality_m8272B84095F78E4C64A4E7EEEAA83E5300011EBD,
	FixedString4096Bytes_op_Inequality_mF060BB48512301E31723F4B4E6E57655943E8CFF,
	FixedString4096Bytes_Equals_m50449CEA376EE67883DAA4A53B7A96657C0ABFC6,
	FixedString4096Bytes_CompareTo_m98DB83C45659AA502D3EF4C09CFDFCF7EE6AAD7E,
	FixedString4096Bytes_op_Equality_m8C1B245E09F423C70F4EB51301C71277C1BAD758,
	FixedString4096Bytes_Equals_m7A31B6F07E4FF5391793F3A2E570D249FC28BC56,
	FixedString4096Bytes_CompareTo_m98AFBA57DD74ED48BB9DC93F0EA3D371AC232D88,
	FixedString4096Bytes_op_Equality_m8B7E4B0AD7AF910C4DE957ABCE1F60514A998D13,
	FixedString4096Bytes_Equals_m6630735E9757A96BBACAB07882404AB206787560,
	FixedString4096Bytes_CompareTo_mAEDF7046DC4122FE355E855D489BE117FE71AE20,
	FixedString4096Bytes_op_Equality_m2C8A0A6F975F86A2A64A8B7B29095A8ABE0BCB46,
	FixedString4096Bytes_Equals_mAA8DADE086517F8985B18B396F739A4119E3974A,
	FixedString4096Bytes_CompareTo_mBD907BBDC18CA4598C6C284FD38A682FF3D9272E,
	FixedString4096Bytes_op_Equality_m0A7B6E865D941E2C15F8BAE950A72D556FAC0CE2,
	FixedString4096Bytes_Equals_m524817609813745DF01EAD53A606803206074B5A,
	FixedString4096Bytes_ToString_mE581B44C1FD3E2B439149546143D51020BF22EF1,
	FixedString4096Bytes_GetHashCode_m6017478A2A1E62CB9F8072684F3D27F71CA73D6F,
	FixedString4096Bytes_Equals_m901B3A08DF0A1847030310153BFA484A35000950,
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
	FixedString_Format_m47B1E44A3DDDCB684C5F7C26871C2E9C4868FC96,
	NULL,
	NULL,
	Unmanaged_Allocate_m2B8A0CE5FC5FE807FCA06A65ED4B45BB4BD73641,
	Unmanaged_Free_m2F50C56130FA36D0309580A8D5A0DBD6587EA180,
	NULL,
	Array_IsCustom_m598D3961A72717D20B5753E57D30DF6C0C71F16E,
	Array_CustomResize_m1473190F4C3B31568AA3B34ADC10F76FBF23AC24,
	Array_Resize_mFA75DD4DFE9EAD9F626D97098C95EE100807D309,
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
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NativeQueueBlockPoolData_AllocateBlock_mEE2500587CBF0C5D7DF01862F5608578F3E1A41D,
	NativeQueueBlockPoolData_FreeBlock_m79B8FBE865EF9B2477F98C29F078417436BEED0E,
	NativeQueueBlockPool_GetQueueBlockPool_m540355E049FC3D323E602F926545011F22036027,
	NativeQueueBlockPool_AppDomainOnDomainUnload_mFA4C51C06F0886FA44B19412B7E675A815DE1B00,
	NativeQueueBlockPool_OnDomainUnload_m822548C47C87F6D8DB1B7AE6663E7E2FFD4DA2D0,
	NativeQueueBlockPool__cctor_mF4DA14D7352B4073B635C1E275639E34A312CBEF,
	NativeQueueData_GetCurrentWriteBlockTLS_m75502C82FDFF25E26AA4773759A824A0D22E1411,
	NativeQueueData_SetCurrentWriteBlockTLS_m9C78BEF5415CD20F6265F199C04B0D59D590131B,
	NULL,
	NULL,
	NativeQueueData_DeallocateQueue_mEF180466591D362F161130630E7E3E87F12797CC,
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
	NULL,
	NULL,
	NULL,
	Spinner_Lock_m455E583C6650190C9F5D9211C134A8D7898006D1,
	Spinner_Unlock_m1A26CB58AE3E733421698B9F8750D882C649EE32,
	NULL,
	NULL,
	RewindableAllocator_Rewind_mCE9856063EE3638DC82C4CF8605DBEBEBF130580,
	RewindableAllocator_Dispose_m9938A91127A11581DA09794A2C5E8DF6283F2678,
	RewindableAllocator_Try_m1C0B2B6033081280DA48B6475F2A0B764E4F57BE,
	RewindableAllocator_Try_mF6E7F53E1E6F100CFE4D0449B40BADCA6877E5C2,
	RewindableAllocator_get_Handle_m056BEDCB4F2BEA70D8DB4B91FAE1C9B7A44D174F,
	RewindableAllocator_TryU24BurstManaged_m94F53843161FC7D54FE03A65FEEF91AEC1A85082,
	MemoryBlock__ctor_mE607093E03F964839EE507282CED5F6ACB9E64D3,
	MemoryBlock_Rewind_mD4E938ABCCD22E3430DEDEA620DFEF56E7542958,
	MemoryBlock_Dispose_m8B9123CC2024106EE5104952C15DA2E4902033EF,
	MemoryBlock_TryAllocate_m3B55864CA6A89C02E25B9C7B49E2652B66FE3A7F,
	MemoryBlock_Contains_m93E7B8DC04D2AD9AFDD8589FFC7CD205031C90BB,
	Try_000006E7U24PostfixBurstDelegate__ctor_mF2B0791B7B689108C934F1420F889C5C3D491EB6,
	Try_000006E7U24PostfixBurstDelegate_Invoke_m35AFB8CCF5FB1954B8B8B4681A34A7A4B1D188F6,
	Try_000006E7U24PostfixBurstDelegate_BeginInvoke_mF7269EE84D2FBF46D3F1F5BD2F2B18A96503A572,
	Try_000006E7U24PostfixBurstDelegate_EndInvoke_m04483C10C816205A5991BBC651C69F5AF2FF98CD,
	Try_000006E7U24BurstDirectCall_GetFunctionPointerDiscard_m03892CAE6C814540351E6C177B7CDAD10C2F9E21,
	Try_000006E7U24BurstDirectCall_GetFunctionPointer_m879E751F874D42C5FD2C38375A967202C8D95CCA,
	Try_000006E7U24BurstDirectCall_Constructor_mF9C02D2DCB0D6949EF4284E51A4EF47801315B9D,
	Try_000006E7U24BurstDirectCall_Initialize_m6F83B305E1280FF2175A58A500B801481C0580D3,
	Try_000006E7U24BurstDirectCall__cctor_mF03EB38DD47EC8725C6041B7E92E3F246AE8F73B,
	Try_000006E7U24BurstDirectCall_Invoke_mE2703313414C6B77A1A305EADFBB7F2166162214,
	UTF8ArrayUnsafeUtility_Copy_mCA5E6CB4A6C5041BEC8F0A10CEED04338D2D4082,
	UTF8ArrayUnsafeUtility_Copy_m2A1BCB7AF917A965D600F659B20C0E95CFF28DA1,
	UTF8ArrayUnsafeUtility_StrCmp_m6B6F0AFAB3C027DCD0595636A2EE7E0111B5CF4D,
	UTF8ArrayUnsafeUtility_EqualsUTF8Bytes_m5F0D6A125E7A821380D781FF3CE89654770F0F52,
	UTF8ArrayUnsafeUtility_StrCmp_mB9A99D67EB2B4A65AA7ACC201834D2126F49551A,
	Comparison__ctor_m532F7CEEC53619D47639FF9483D6CE0F7282807B,
	Unicode_IsValidCodePoint_m63546F522A9197CE3FD9F1126FB6029C1EDA6922,
	Unicode_NotTrailer_m12C46BBD84BABEE1A62F7FF5F15BDB17531C500F,
	Unicode_get_ReplacementCharacter_m0834B138000E3F294DE751347EE480CCC388FC65,
	Unicode_Utf8ToUcs_m482CC924FFECFBA79ABE2C102C8A698BA260CE78,
	Unicode_IsLeadingSurrogate_mBB1CF1A83708E58175E3714BF761B0F924C8A086,
	Unicode_IsTrailingSurrogate_m5921D0860D53414B3F73ACD41E4C56489DB7F2DB,
	Unicode_Utf16ToUcs_mC943C4288B0B7B25B98789A2FA70B858A0A98788,
	Unicode_UcsToUtf8_m94109B9092335B9C781085D0AA8B406263DFCC18,
	Unicode_UcsToUtf16_m9CCEB3D32329CB38BEC9AE5145246AAF8CD856CC,
	Unicode_Utf16ToUtf8_mEEC4AC98273A5A3CE54C5EFCF44B01CC65FE4ECA,
	Unicode_Utf8ToUtf16_m43FC98F1150EBEEEC5DEF212ED3C3C790DE5F145,
	Rune_op_Explicit_mE3A636E9FD38D6C371E41DCAAB2138F400A3F42F,
	Rune_LengthInUtf8Bytes_m604BE7D4A8E1D866A859DCCF56093F2F0CDF8C58,
	xxHash3_Avx2HashLongInternalLoop_mD675A814781A3346F6DD0B55163340629AF82B31,
	xxHash3_Avx2ScrambleAcc_mF7B503E35596219948DB29FF557A6632DDB204FF,
	xxHash3_Avx2Accumulate_mD9C9864A554667983A788D8F7076A2B5DE17A9C4,
	xxHash3_Avx2Accumulate512_m8FFD6101C52B5036B1BDA5CC8586EEB8E2F0439F,
	xxHash3_Hash64Long_m362983ED628110459335EF3AADDCE56947A8420E,
	xxHash3_Hash128Long_m17ABEB7B8F67A0F9754AC5D1F3932BAEB7801DDE,
	xxHash3_ToUint4_m592D9312AFCC5F5642ED63D6B2FB90B03FEA4E5D,
	xxHash3_Read64LE_m90CC453AD07D50C6D8E3C0FCD63782F1DC0045B4,
	xxHash3_Write64LE_mF27307D87928FEB3EB969009C94036E3C5D91396,
	xxHash3_Mul32To64_m7F2A9755DA48811848F0734E9BDB4C89C65D0796,
	xxHash3_XorShift64_mB53E417D84565E9FDB55FA8F1A12B17B13D69E19,
	xxHash3_Mul128Fold64_m13536D24425EE781D0E864C529E40C92E3E7B8C2,
	xxHash3_Avalanche_m4A7FC83F5F99482EC8ABF2D5C988BF88B3580276,
	xxHash3_Mix2Acc_m597B7F16AEB66AF69E7DB26746B23A61327B6F8B,
	xxHash3_MergeAcc_mBF112A7A272F378502935BA5ACB3571F84E9D064,
	xxHash3_DefaultHashLongInternalLoop_m8931659CB98216AD2BDFAA86C16BD9D5FC3A319E,
	xxHash3_DefaultAccumulate_mB6356774096EB26FF5896290674B2EBF2D88172B,
	xxHash3_DefaultAccumulate512_mD70E11C9C3EE954C60CA119BFED851934A310674,
	xxHash3_DefaultScrambleAcc_m76040A3322FB2033023CC573EECC959616539940,
	xxHash3_Hash64LongU24BurstManaged_mE6B8AFB7022AA042F0BF88484D441CC169DEF612,
	xxHash3_Hash128LongU24BurstManaged_mE8C02CE53D508387CE351B64CD5993DCC6390EE4,
	Hash64Long_0000071EU24PostfixBurstDelegate__ctor_m9143DE880F0E321E7466F05267EF0AA602CC7DE4,
	Hash64Long_0000071EU24PostfixBurstDelegate_Invoke_mBC1E55F1B1F1849AE9BD281A4078C8BEF32B38CC,
	Hash64Long_0000071EU24PostfixBurstDelegate_BeginInvoke_mB82237118582F59E072BD288BD8CC27E3D145DF5,
	Hash64Long_0000071EU24PostfixBurstDelegate_EndInvoke_m296852E2141F4EE2E89A993E764AD320A8113923,
	Hash64Long_0000071EU24BurstDirectCall_GetFunctionPointerDiscard_mB35064638406956A7AA47CCABE70AE102969579F,
	Hash64Long_0000071EU24BurstDirectCall_GetFunctionPointer_m6453BE24D1BC34F9380612D1CBFDC7643C6055B5,
	Hash64Long_0000071EU24BurstDirectCall_Constructor_m41ADD78FB2F98A82BC7B3BA8F91D21A52381B1C8,
	Hash64Long_0000071EU24BurstDirectCall_Initialize_m69D96D7C8FB5CDA42E6A08AB98ADFCFD204D4EA3,
	Hash64Long_0000071EU24BurstDirectCall__cctor_m9E7F1839B03AEB7089A746CF30B97EF605F5BF45,
	Hash64Long_0000071EU24BurstDirectCall_Invoke_m456A658A3877D6FA81EDBE9BFBA4859D1D47A292,
	Hash128Long_00000725U24PostfixBurstDelegate__ctor_mC8530D7D2B767455599DCE567885C29926E2DFF4,
	Hash128Long_00000725U24PostfixBurstDelegate_Invoke_m16CEE2EAE8B164DEDB6C9BC77683F889CDE9D1E0,
	Hash128Long_00000725U24PostfixBurstDelegate_BeginInvoke_mF018549B9B93B95A4E179A0454DDC39CB912FB32,
	Hash128Long_00000725U24PostfixBurstDelegate_EndInvoke_m624C81BB1EA925997A59A6FD753C950FA4E5A315,
	Hash128Long_00000725U24BurstDirectCall_GetFunctionPointerDiscard_m9D88E1FBE67644F71CD5CAC38B5EB04B276BF00F,
	Hash128Long_00000725U24BurstDirectCall_GetFunctionPointer_m6E587CBE14B775A1BB04DE4EBA56CCF12A9A55F0,
	Hash128Long_00000725U24BurstDirectCall_Constructor_mE964E5649109F2C135B6156A1470E261FAD993B9,
	Hash128Long_00000725U24BurstDirectCall_Initialize_mA6F12D746653B7B033F77C494E20AFF38E5F5746,
	Hash128Long_00000725U24BurstDirectCall__cctor_mAF04DA690220544772A7C82A24E5258CA2F1DAB5,
	Hash128Long_00000725U24BurstDirectCall_Invoke_m7C794BCCAEE8669C75E0388A8858A00CB7BB3F30,
	NULL,
	NULL,
	UnsafeHashMapData_GetBucketSize_m8012EBF65449E404290869CDD9142C0FE0B3796B,
	UnsafeHashMapData_GrowCapacity_mCA1CECBF0488C1D5A77A1DF8600D5614BA0861A0,
	NULL,
	NULL,
	UnsafeHashMapData_DeallocateHashMap_m952A5E5A03F6270931864BE77A3349C8F274FC2E,
	NULL,
	UnsafeHashMapData_IsEmpty_m0F038F9D2231E886E8168C633A2A861A3CDCCE37,
	UnsafeHashMapData_GetCount_m19B2E9FD50DD11A43A2D01AD2D9C387A9D6DDE52,
	UnsafeHashMapData_MoveNext_mCB3B5197F1741D281A6F0520FEE01CF04E844541,
	NULL,
	NULL,
	NULL,
	UnsafeHashMapDataDispose_Dispose_m9E3DF36D59F3E4CAD0D400181DC8C3C8BAD76808,
	UnsafeHashMapDataDisposeJob_Execute_m19D9297F09EE8544FC687FFFD7CC974B94A1233B,
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
	UnsafeHashMapDataEnumerator__ctor_m96A3F1A71567451A655C63C4412838FD85BAA6DD,
	UnsafeHashMapDataEnumerator_MoveNext_m74CB5CDA2177D0AA9F5022C160676C7854FC2C7B,
	UnsafeHashMapDataEnumerator_Reset_m85D5B42E562A51E766D0FF22934E14B6B1614AD8,
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
	U24BurstDirectCallInitializer_Initialize_m28D21A06E148501E7C9395ABA00B007F42778D50,
};
extern void AllocatorHandle_get_TableEntry_mF3BC93F69AA3E1764A9770FEE595E263239B703D_AdjustorThunk (void);
extern void AllocatorHandle_Rewind_mDBC3DC2236265F7F712121F0F3683F73B8609060_AdjustorThunk (void);
extern void AllocatorHandle_get_Value_m5F4A923E36A6E1C8983F187DFF73AA659350790B_AdjustorThunk (void);
extern void AllocatorHandle_Try_m2F88758592B176EF3A7CFDCB93599C0CE6A97148_AdjustorThunk (void);
extern void AllocatorHandle_get_Handle_m9CBE1298F12DFCBD71E6DBE77B08E5D0FD2F4A5E_AdjustorThunk (void);
extern void AllocatorHandle_get_ToAllocator_mC2F7F3B23A30D63C2A14984F5D25DDF117C5FEFF_AdjustorThunk (void);
extern void AllocatorHandle_Dispose_m21567B9257F67FFE3EA2A5C44BE860BE641B0FA1_AdjustorThunk (void);
extern void Range_Dispose_m466C86ACD4956014EE550CEC4245993E10629D42_AdjustorThunk (void);
extern void Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA_AdjustorThunk (void);
extern void Block_get_AllocatedBytes_mC7DC93B1995B6837136BE97871E344CFDD32B907_AdjustorThunk (void);
extern void Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF_AdjustorThunk (void);
extern void Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730_AdjustorThunk (void);
extern void Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9_AdjustorThunk (void);
extern void Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1_AdjustorThunk (void);
extern void StackAllocator_get_Handle_m22001B4045E018527C5B35D6715B550B6002C7ED_AdjustorThunk (void);
extern void StackAllocator_Try_m9E77FFC5B3DB94A6A738F9659B23FB48F675825D_AdjustorThunk (void);
extern void StackAllocator_Dispose_m121AA556092D97A553B56BE62D67332183F4F678_AdjustorThunk (void);
extern void SlabAllocator_get_Handle_m1BAE636499EF06990B084B49FF05100F4D70C6D7_AdjustorThunk (void);
extern void SlabAllocator_get_SlabSizeInBytes_m09758AFE572F9BA8007BB7ED308086BA629DE685_AdjustorThunk (void);
extern void SlabAllocator_Try_m18522CF564EE22D2C7FD7C098087906032E53CE3_AdjustorThunk (void);
extern void SlabAllocator_Dispose_m5FD3C0E10FE09952A8F99656821B2D7F3B3E578F_AdjustorThunk (void);
extern void FixedString32Bytes_GetUnsafePtr_mC5ECAFEFC8B46192D40E7343B05E5E30E0CB7E3E_AdjustorThunk (void);
extern void FixedString32Bytes_get_Length_m5BC3BD52F24399E2AABD131E4301DD073308674A_AdjustorThunk (void);
extern void FixedString32Bytes_set_Length_m1BEEECA46CB0DE1A9D72828C079F776D9EA4D8BA_AdjustorThunk (void);
extern void FixedString32Bytes_get_Capacity_mA4782F3A7A7B0FAFA1CFA5EC39D0C5B17E08EDF7_AdjustorThunk (void);
extern void FixedString32Bytes_TryResize_mF4CDA9CB3EAA3E11C8A50B85852BCAB5AA0C96BA_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_mF178913F9D6CB2E3D6BD34ABF448683B3906781F_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m7BFD13BE12B020CF1CEF69C02F6DFEC001DF6FFF_AdjustorThunk (void);
extern void FixedString32Bytes__ctor_mC97DF326CAB40CB1B7105B805CD2A83C2484F198_AdjustorThunk (void);
extern void FixedString32Bytes_Initialize_m558E56F9BB87AC90C26907859B66357CE06E9553_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_mF5834EEF9A96EFF22DD73C42B9D3CC4728DDE96A_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m35066BEF893D842074A1E6BD9A5C72D9DABADFF0_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_m455F0190A3BFCDF60F4BA8CE2E41BAE0660BB876_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_mA6D03C1A9E302D3427624450E4A209DD524238B3_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_m4327D9074FF49D2CC5A9EC6E1BB51ACE90C34259_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m5148C5014FB447963C9452ECDFD2FAA4FCB2B0AA_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_mDD8F261148EF43BC134C4404510225C05B4A51E0_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m50A3B4996CD9406FAAC0E60C1DED2CF1FC4D9F4C_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_m208A5443E037D9890D1B7D020B618E17273364EF_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m765AAAE165047691F090847EC353D1E6ADB64F4E_AdjustorThunk (void);
extern void FixedString32Bytes_ToString_mBC0B0105B79BFA9D11EA0AF4DF33FD5C02AD8A3D_AdjustorThunk (void);
extern void FixedString32Bytes_GetHashCode_m78001276F05EDD1C4D13D517F4CE8F4C62FDD201_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m0E8DB505E1FAC97C090F8275D5815CFCD0DA22DD_AdjustorThunk (void);
extern void FixedString64Bytes_GetUnsafePtr_m6D16ED9500A89629B80BE451B7656A049A141823_AdjustorThunk (void);
extern void FixedString64Bytes_get_Length_mF9D0BE029ED4BEF8D744A3B0DDCBA458D7789338_AdjustorThunk (void);
extern void FixedString64Bytes_set_Length_m6FF424E0B4F134E47BF7CB6C29A3512A54920ADF_AdjustorThunk (void);
extern void FixedString64Bytes_get_Capacity_m95BB021D2345D63B372FF23184467FC3EF88E956_AdjustorThunk (void);
extern void FixedString64Bytes_TryResize_mDA4CB391AAFEF0FE519EB9C6F77EBDC2A9A23AD6_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_m4E3A4A02BE8625C7848F0103EC51166F2EBF6672_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_m63C23CD49D4CCF2F297770FCB0F13AC2C6148EBD_AdjustorThunk (void);
extern void FixedString64Bytes__ctor_m6F181B5C4D61586DD44AC5B320F75C47165C9ECA_AdjustorThunk (void);
extern void FixedString64Bytes_Initialize_mB9814E606566EF9010DCEA62AD3E9182EF9B4F2A_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_m627CA84B4D8145636DDF330BFC7AB6B26C1B78EC_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_m14019A582997CB9B1B4DFA3288DB5B21F203BCCF_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_m21F888FA1CF25CA055F9A7288E65F10DBD6095B6_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_mBFB24484A72865892C7BC60D9022817271B9C993_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_m27BBDFF353C19DACD6EFC8886E98106FD46E8894_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_m0D3B6AB690F57CF418004B220261538D1E83B639_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_mB9951AA5E49E2C3B91301B4BDA0A3D287A356D38_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_m54DA742A366E1BAFC35800BD2657FD440CFF60E3_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_mE128DBB33E12D7B8276A50D86C34D2925CC75E12_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_m62FB328FF94AE463BDB22F8C10ABE46E3C78898E_AdjustorThunk (void);
extern void FixedString64Bytes_ToString_m9A95BFBD08C8131BE663E28F78C59A387EC4D0C0_AdjustorThunk (void);
extern void FixedString64Bytes_GetHashCode_mEE673AF20F2034075FD973EDC8708AF0B0E240BD_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_mE67C9A0F7A76E525EAA873AB7A87E9F5746DBCEC_AdjustorThunk (void);
extern void FixedString128Bytes_GetUnsafePtr_m5D5721F234226666FBC6AE692983EEC26E9679B0_AdjustorThunk (void);
extern void FixedString128Bytes_get_Length_mB44B48F688A770EBD1D89BFB9441839F05E99BE3_AdjustorThunk (void);
extern void FixedString128Bytes_set_Length_m6D6AE2962D72D9F45A1F1831786F16976DB60E1D_AdjustorThunk (void);
extern void FixedString128Bytes_get_Capacity_m4CA35AA2FA471B8B9A1503929ED6732884B7A204_AdjustorThunk (void);
extern void FixedString128Bytes_TryResize_mD2CBC43E806000F8F445A72487EA87CF58468106_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_mD467A78A95C3BB1F288BC3C9FBA690A9495BFC92_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_m88DC61CFEDB1D2154A1A49342E897B06F9824430_AdjustorThunk (void);
extern void FixedString128Bytes__ctor_m0495F2C2FD757248BED63BD13E30F00B7D21A535_AdjustorThunk (void);
extern void FixedString128Bytes_Initialize_mF7DCBEC7A74580F93F2F391DE17D8C016776E895_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_mBD0FA3114A4A8974E8EFD6B74C6CD555FE424ED3_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_m0B98DDEBA4C0909B3A34B20211609D9CDDF17BD4_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_m84D1B08ED43A55442CC0A964ACB16088C35AA4E2_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_m028BAAF6672E3E8C18FCD2A36E554194AA03B8DC_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_m66F5769D0ADC3B31E4980495D2691182C647A4A0_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_m8B29A1963BA2994BEEB6DC6D2ACB5F85F4169C9B_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_mC9A052A1DC9890BC9F8ED3997E0966141D134A6B_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_mC127962FC9AD86D88A301110F1DE6891D73A7560_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_m4690FA70BE7546784FE808AD836134A862EE30CE_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_mF2F489FEBE264F851A46A49F34E552B93CBE1880_AdjustorThunk (void);
extern void FixedString128Bytes_ToString_m5D0F997EE98FE5E2FD75C67A9EB750EA2A19ECA5_AdjustorThunk (void);
extern void FixedString128Bytes_GetHashCode_m0DEBE20E271BB796331438C159F91B8834E3AE27_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_mD1488F0494260130EA71B36F7F2235BBE6A4FC35_AdjustorThunk (void);
extern void FixedString512Bytes_GetUnsafePtr_mC217ABC503C34C4A9505D3BD8184772A6957B594_AdjustorThunk (void);
extern void FixedString512Bytes_get_Length_m70416F6C123F83B82723F71E137672507CEF8E1E_AdjustorThunk (void);
extern void FixedString512Bytes_set_Length_m2FB002DB9D4CE470CB67BBBCF0345F3B879718D1_AdjustorThunk (void);
extern void FixedString512Bytes_get_Capacity_m04C798E27AD1D5C03347B09A7B59EC1118A4DD9C_AdjustorThunk (void);
extern void FixedString512Bytes_TryResize_m926AFC0E97C55C3D6D76AD2E4341D387866E3487_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_m04A7A314B42FFA9602958449016B60F210C3210D_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m5D845EB2C13E708265F8ED7E0EA20B7CBC346729_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_m95DEE74C2D0BD5B60B25F90D6BA58ACAEA7A1941_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m8F548901D593718D4E2535B84D89972D4E7E6BE9_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_m0DEEF2359E2F1BF27604E76EEE2DADF257E94590_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m11D223E18049AF2276EB099D85BE50952CC3624D_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_mA7CF8872D14E6E5F2E920D0FFEE3AA0C82F347E6_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m8A06C174B2115E83EE8704B02D6ADC27B8AA09DF_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_m7428FB6E2AC9137F8A74FD0C5349F2FAE30B05CD_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m13E5ED0B742535959E3FF065EB7463151156937B_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_m1CEBDC6E092AE5F41AC99A3555BE147B58F0AB28_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_mBA5CFEFCA3D9F726BDF9221B1E1B7C763186F741_AdjustorThunk (void);
extern void FixedString512Bytes_ToString_m3507A4F76408A6AEEC02A081227E82C724E788A3_AdjustorThunk (void);
extern void FixedString512Bytes_GetHashCode_m7471BCB4E4BFFB14334B86C731F8A7EEE8808C0B_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m56F0D84282853BE0F8EB9C384E8A6BC6DCF704B0_AdjustorThunk (void);
extern void FixedString4096Bytes_GetUnsafePtr_mD7BB5BC41DC121917EACD3208B09F7FBA47E9B14_AdjustorThunk (void);
extern void FixedString4096Bytes_get_Length_m4A6C18A7FF02C0B37966A4BF6A6C62FE5BD8AA79_AdjustorThunk (void);
extern void FixedString4096Bytes_set_Length_mDF584B26F865243D41B322965031DC3AE50AE155_AdjustorThunk (void);
extern void FixedString4096Bytes_get_Capacity_m1D61376344C7CD4252488062BF0F1989571E7E65_AdjustorThunk (void);
extern void FixedString4096Bytes_TryResize_mD9833218AE0B1AA07F9FF570E8A5F059A8EBEF34_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_m56A2BDBABB6EC15C2F06F310C77834ABB2E6E423_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_mB8B543E697D5B9FE4A99B162080F424C070C67B1_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_mDF19D52C9733F1C2AC4A5C6E57523640EB762250_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_m50449CEA376EE67883DAA4A53B7A96657C0ABFC6_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_m98DB83C45659AA502D3EF4C09CFDFCF7EE6AAD7E_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_m7A31B6F07E4FF5391793F3A2E570D249FC28BC56_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_m98AFBA57DD74ED48BB9DC93F0EA3D371AC232D88_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_m6630735E9757A96BBACAB07882404AB206787560_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_mAEDF7046DC4122FE355E855D489BE117FE71AE20_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_mAA8DADE086517F8985B18B396F739A4119E3974A_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_mBD907BBDC18CA4598C6C284FD38A682FF3D9272E_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_m524817609813745DF01EAD53A606803206074B5A_AdjustorThunk (void);
extern void FixedString4096Bytes_ToString_mE581B44C1FD3E2B439149546143D51020BF22EF1_AdjustorThunk (void);
extern void FixedString4096Bytes_GetHashCode_m6017478A2A1E62CB9F8072684F3D27F71CA73D6F_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_m901B3A08DF0A1847030310153BFA484A35000950_AdjustorThunk (void);
extern void NativeQueueBlockPoolData_AllocateBlock_mEE2500587CBF0C5D7DF01862F5608578F3E1A41D_AdjustorThunk (void);
extern void NativeQueueBlockPoolData_FreeBlock_m79B8FBE865EF9B2477F98C29F078417436BEED0E_AdjustorThunk (void);
extern void NativeQueueData_GetCurrentWriteBlockTLS_m75502C82FDFF25E26AA4773759A824A0D22E1411_AdjustorThunk (void);
extern void NativeQueueData_SetCurrentWriteBlockTLS_m9C78BEF5415CD20F6265F199C04B0D59D590131B_AdjustorThunk (void);
extern void Spinner_Lock_m455E583C6650190C9F5D9211C134A8D7898006D1_AdjustorThunk (void);
extern void Spinner_Unlock_m1A26CB58AE3E733421698B9F8750D882C649EE32_AdjustorThunk (void);
extern void RewindableAllocator_Rewind_mCE9856063EE3638DC82C4CF8605DBEBEBF130580_AdjustorThunk (void);
extern void RewindableAllocator_Dispose_m9938A91127A11581DA09794A2C5E8DF6283F2678_AdjustorThunk (void);
extern void RewindableAllocator_Try_m1C0B2B6033081280DA48B6475F2A0B764E4F57BE_AdjustorThunk (void);
extern void RewindableAllocator_get_Handle_m056BEDCB4F2BEA70D8DB4B91FAE1C9B7A44D174F_AdjustorThunk (void);
extern void MemoryBlock__ctor_mE607093E03F964839EE507282CED5F6ACB9E64D3_AdjustorThunk (void);
extern void MemoryBlock_Rewind_mD4E938ABCCD22E3430DEDEA620DFEF56E7542958_AdjustorThunk (void);
extern void MemoryBlock_Dispose_m8B9123CC2024106EE5104952C15DA2E4902033EF_AdjustorThunk (void);
extern void MemoryBlock_TryAllocate_m3B55864CA6A89C02E25B9C7B49E2652B66FE3A7F_AdjustorThunk (void);
extern void MemoryBlock_Contains_m93E7B8DC04D2AD9AFDD8589FFC7CD205031C90BB_AdjustorThunk (void);
extern void Comparison__ctor_m532F7CEEC53619D47639FF9483D6CE0F7282807B_AdjustorThunk (void);
extern void Rune_LengthInUtf8Bytes_m604BE7D4A8E1D866A859DCCF56093F2F0CDF8C58_AdjustorThunk (void);
extern void UnsafeHashMapDataDispose_Dispose_m9E3DF36D59F3E4CAD0D400181DC8C3C8BAD76808_AdjustorThunk (void);
extern void UnsafeHashMapDataDisposeJob_Execute_m19D9297F09EE8544FC687FFFD7CC974B94A1233B_AdjustorThunk (void);
extern void UnsafeHashMapDataEnumerator__ctor_m96A3F1A71567451A655C63C4412838FD85BAA6DD_AdjustorThunk (void);
extern void UnsafeHashMapDataEnumerator_MoveNext_m74CB5CDA2177D0AA9F5022C160676C7854FC2C7B_AdjustorThunk (void);
extern void UnsafeHashMapDataEnumerator_Reset_m85D5B42E562A51E766D0FF22934E14B6B1614AD8_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[149] = 
{
	{ 0x06000019, AllocatorHandle_get_TableEntry_mF3BC93F69AA3E1764A9770FEE595E263239B703D_AdjustorThunk },
	{ 0x0600001A, AllocatorHandle_Rewind_mDBC3DC2236265F7F712121F0F3683F73B8609060_AdjustorThunk },
	{ 0x0600001C, AllocatorHandle_get_Value_m5F4A923E36A6E1C8983F187DFF73AA659350790B_AdjustorThunk },
	{ 0x0600001D, AllocatorHandle_Try_m2F88758592B176EF3A7CFDCB93599C0CE6A97148_AdjustorThunk },
	{ 0x0600001E, AllocatorHandle_get_Handle_m9CBE1298F12DFCBD71E6DBE77B08E5D0FD2F4A5E_AdjustorThunk },
	{ 0x0600001F, AllocatorHandle_get_ToAllocator_mC2F7F3B23A30D63C2A14984F5D25DDF117C5FEFF_AdjustorThunk },
	{ 0x06000020, AllocatorHandle_Dispose_m21567B9257F67FFE3EA2A5C44BE860BE641B0FA1_AdjustorThunk },
	{ 0x06000021, Range_Dispose_m466C86ACD4956014EE550CEC4245993E10629D42_AdjustorThunk },
	{ 0x06000022, Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA_AdjustorThunk },
	{ 0x06000023, Block_get_AllocatedBytes_mC7DC93B1995B6837136BE97871E344CFDD32B907_AdjustorThunk },
	{ 0x06000024, Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF_AdjustorThunk },
	{ 0x06000025, Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730_AdjustorThunk },
	{ 0x06000026, Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9_AdjustorThunk },
	{ 0x06000027, Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1_AdjustorThunk },
	{ 0x0600002A, StackAllocator_get_Handle_m22001B4045E018527C5B35D6715B550B6002C7ED_AdjustorThunk },
	{ 0x0600002B, StackAllocator_Try_m9E77FFC5B3DB94A6A738F9659B23FB48F675825D_AdjustorThunk },
	{ 0x0600002D, StackAllocator_Dispose_m121AA556092D97A553B56BE62D67332183F4F678_AdjustorThunk },
	{ 0x06000039, SlabAllocator_get_Handle_m1BAE636499EF06990B084B49FF05100F4D70C6D7_AdjustorThunk },
	{ 0x0600003A, SlabAllocator_get_SlabSizeInBytes_m09758AFE572F9BA8007BB7ED308086BA629DE685_AdjustorThunk },
	{ 0x0600003B, SlabAllocator_Try_m18522CF564EE22D2C7FD7C098087906032E53CE3_AdjustorThunk },
	{ 0x0600003D, SlabAllocator_Dispose_m5FD3C0E10FE09952A8F99656821B2D7F3B3E578F_AdjustorThunk },
	{ 0x060000CC, FixedString32Bytes_GetUnsafePtr_mC5ECAFEFC8B46192D40E7343B05E5E30E0CB7E3E_AdjustorThunk },
	{ 0x060000CD, FixedString32Bytes_get_Length_m5BC3BD52F24399E2AABD131E4301DD073308674A_AdjustorThunk },
	{ 0x060000CE, FixedString32Bytes_set_Length_m1BEEECA46CB0DE1A9D72828C079F776D9EA4D8BA_AdjustorThunk },
	{ 0x060000CF, FixedString32Bytes_get_Capacity_mA4782F3A7A7B0FAFA1CFA5EC39D0C5B17E08EDF7_AdjustorThunk },
	{ 0x060000D0, FixedString32Bytes_TryResize_mF4CDA9CB3EAA3E11C8A50B85852BCAB5AA0C96BA_AdjustorThunk },
	{ 0x060000D1, FixedString32Bytes_CompareTo_mF178913F9D6CB2E3D6BD34ABF448683B3906781F_AdjustorThunk },
	{ 0x060000D2, FixedString32Bytes_Equals_m7BFD13BE12B020CF1CEF69C02F6DFEC001DF6FFF_AdjustorThunk },
	{ 0x060000D3, FixedString32Bytes__ctor_mC97DF326CAB40CB1B7105B805CD2A83C2484F198_AdjustorThunk },
	{ 0x060000D4, FixedString32Bytes_Initialize_m558E56F9BB87AC90C26907859B66357CE06E9553_AdjustorThunk },
	{ 0x060000D5, FixedString32Bytes_CompareTo_mF5834EEF9A96EFF22DD73C42B9D3CC4728DDE96A_AdjustorThunk },
	{ 0x060000D8, FixedString32Bytes_Equals_m35066BEF893D842074A1E6BD9A5C72D9DABADFF0_AdjustorThunk },
	{ 0x060000D9, FixedString32Bytes_CompareTo_m455F0190A3BFCDF60F4BA8CE2E41BAE0660BB876_AdjustorThunk },
	{ 0x060000DB, FixedString32Bytes_Equals_mA6D03C1A9E302D3427624450E4A209DD524238B3_AdjustorThunk },
	{ 0x060000DC, FixedString32Bytes_CompareTo_m4327D9074FF49D2CC5A9EC6E1BB51ACE90C34259_AdjustorThunk },
	{ 0x060000DE, FixedString32Bytes_Equals_m5148C5014FB447963C9452ECDFD2FAA4FCB2B0AA_AdjustorThunk },
	{ 0x060000DF, FixedString32Bytes_CompareTo_mDD8F261148EF43BC134C4404510225C05B4A51E0_AdjustorThunk },
	{ 0x060000E1, FixedString32Bytes_Equals_m50A3B4996CD9406FAAC0E60C1DED2CF1FC4D9F4C_AdjustorThunk },
	{ 0x060000E2, FixedString32Bytes_CompareTo_m208A5443E037D9890D1B7D020B618E17273364EF_AdjustorThunk },
	{ 0x060000E4, FixedString32Bytes_Equals_m765AAAE165047691F090847EC353D1E6ADB64F4E_AdjustorThunk },
	{ 0x060000E6, FixedString32Bytes_ToString_mBC0B0105B79BFA9D11EA0AF4DF33FD5C02AD8A3D_AdjustorThunk },
	{ 0x060000E7, FixedString32Bytes_GetHashCode_m78001276F05EDD1C4D13D517F4CE8F4C62FDD201_AdjustorThunk },
	{ 0x060000E8, FixedString32Bytes_Equals_m0E8DB505E1FAC97C090F8275D5815CFCD0DA22DD_AdjustorThunk },
	{ 0x060000EA, FixedString64Bytes_GetUnsafePtr_m6D16ED9500A89629B80BE451B7656A049A141823_AdjustorThunk },
	{ 0x060000EB, FixedString64Bytes_get_Length_mF9D0BE029ED4BEF8D744A3B0DDCBA458D7789338_AdjustorThunk },
	{ 0x060000EC, FixedString64Bytes_set_Length_m6FF424E0B4F134E47BF7CB6C29A3512A54920ADF_AdjustorThunk },
	{ 0x060000ED, FixedString64Bytes_get_Capacity_m95BB021D2345D63B372FF23184467FC3EF88E956_AdjustorThunk },
	{ 0x060000EE, FixedString64Bytes_TryResize_mDA4CB391AAFEF0FE519EB9C6F77EBDC2A9A23AD6_AdjustorThunk },
	{ 0x060000EF, FixedString64Bytes_CompareTo_m4E3A4A02BE8625C7848F0103EC51166F2EBF6672_AdjustorThunk },
	{ 0x060000F0, FixedString64Bytes_Equals_m63C23CD49D4CCF2F297770FCB0F13AC2C6148EBD_AdjustorThunk },
	{ 0x060000F1, FixedString64Bytes__ctor_m6F181B5C4D61586DD44AC5B320F75C47165C9ECA_AdjustorThunk },
	{ 0x060000F2, FixedString64Bytes_Initialize_mB9814E606566EF9010DCEA62AD3E9182EF9B4F2A_AdjustorThunk },
	{ 0x060000F3, FixedString64Bytes_CompareTo_m627CA84B4D8145636DDF330BFC7AB6B26C1B78EC_AdjustorThunk },
	{ 0x060000F5, FixedString64Bytes_Equals_m14019A582997CB9B1B4DFA3288DB5B21F203BCCF_AdjustorThunk },
	{ 0x060000F6, FixedString64Bytes_CompareTo_m21F888FA1CF25CA055F9A7288E65F10DBD6095B6_AdjustorThunk },
	{ 0x060000F8, FixedString64Bytes_Equals_mBFB24484A72865892C7BC60D9022817271B9C993_AdjustorThunk },
	{ 0x060000F9, FixedString64Bytes_CompareTo_m27BBDFF353C19DACD6EFC8886E98106FD46E8894_AdjustorThunk },
	{ 0x060000FB, FixedString64Bytes_Equals_m0D3B6AB690F57CF418004B220261538D1E83B639_AdjustorThunk },
	{ 0x060000FC, FixedString64Bytes_CompareTo_mB9951AA5E49E2C3B91301B4BDA0A3D287A356D38_AdjustorThunk },
	{ 0x060000FE, FixedString64Bytes_Equals_m54DA742A366E1BAFC35800BD2657FD440CFF60E3_AdjustorThunk },
	{ 0x060000FF, FixedString64Bytes_CompareTo_mE128DBB33E12D7B8276A50D86C34D2925CC75E12_AdjustorThunk },
	{ 0x06000101, FixedString64Bytes_Equals_m62FB328FF94AE463BDB22F8C10ABE46E3C78898E_AdjustorThunk },
	{ 0x06000103, FixedString64Bytes_ToString_m9A95BFBD08C8131BE663E28F78C59A387EC4D0C0_AdjustorThunk },
	{ 0x06000104, FixedString64Bytes_GetHashCode_mEE673AF20F2034075FD973EDC8708AF0B0E240BD_AdjustorThunk },
	{ 0x06000105, FixedString64Bytes_Equals_mE67C9A0F7A76E525EAA873AB7A87E9F5746DBCEC_AdjustorThunk },
	{ 0x06000106, FixedString128Bytes_GetUnsafePtr_m5D5721F234226666FBC6AE692983EEC26E9679B0_AdjustorThunk },
	{ 0x06000107, FixedString128Bytes_get_Length_mB44B48F688A770EBD1D89BFB9441839F05E99BE3_AdjustorThunk },
	{ 0x06000108, FixedString128Bytes_set_Length_m6D6AE2962D72D9F45A1F1831786F16976DB60E1D_AdjustorThunk },
	{ 0x06000109, FixedString128Bytes_get_Capacity_m4CA35AA2FA471B8B9A1503929ED6732884B7A204_AdjustorThunk },
	{ 0x0600010A, FixedString128Bytes_TryResize_mD2CBC43E806000F8F445A72487EA87CF58468106_AdjustorThunk },
	{ 0x0600010B, FixedString128Bytes_CompareTo_mD467A78A95C3BB1F288BC3C9FBA690A9495BFC92_AdjustorThunk },
	{ 0x0600010C, FixedString128Bytes_Equals_m88DC61CFEDB1D2154A1A49342E897B06F9824430_AdjustorThunk },
	{ 0x0600010D, FixedString128Bytes__ctor_m0495F2C2FD757248BED63BD13E30F00B7D21A535_AdjustorThunk },
	{ 0x0600010E, FixedString128Bytes_Initialize_mF7DCBEC7A74580F93F2F391DE17D8C016776E895_AdjustorThunk },
	{ 0x0600010F, FixedString128Bytes_CompareTo_mBD0FA3114A4A8974E8EFD6B74C6CD555FE424ED3_AdjustorThunk },
	{ 0x06000111, FixedString128Bytes_Equals_m0B98DDEBA4C0909B3A34B20211609D9CDDF17BD4_AdjustorThunk },
	{ 0x06000112, FixedString128Bytes_CompareTo_m84D1B08ED43A55442CC0A964ACB16088C35AA4E2_AdjustorThunk },
	{ 0x06000114, FixedString128Bytes_Equals_m028BAAF6672E3E8C18FCD2A36E554194AA03B8DC_AdjustorThunk },
	{ 0x06000115, FixedString128Bytes_CompareTo_m66F5769D0ADC3B31E4980495D2691182C647A4A0_AdjustorThunk },
	{ 0x06000117, FixedString128Bytes_Equals_m8B29A1963BA2994BEEB6DC6D2ACB5F85F4169C9B_AdjustorThunk },
	{ 0x06000118, FixedString128Bytes_CompareTo_mC9A052A1DC9890BC9F8ED3997E0966141D134A6B_AdjustorThunk },
	{ 0x0600011A, FixedString128Bytes_Equals_mC127962FC9AD86D88A301110F1DE6891D73A7560_AdjustorThunk },
	{ 0x0600011B, FixedString128Bytes_CompareTo_m4690FA70BE7546784FE808AD836134A862EE30CE_AdjustorThunk },
	{ 0x0600011D, FixedString128Bytes_Equals_mF2F489FEBE264F851A46A49F34E552B93CBE1880_AdjustorThunk },
	{ 0x0600011F, FixedString128Bytes_ToString_m5D0F997EE98FE5E2FD75C67A9EB750EA2A19ECA5_AdjustorThunk },
	{ 0x06000120, FixedString128Bytes_GetHashCode_m0DEBE20E271BB796331438C159F91B8834E3AE27_AdjustorThunk },
	{ 0x06000121, FixedString128Bytes_Equals_mD1488F0494260130EA71B36F7F2235BBE6A4FC35_AdjustorThunk },
	{ 0x06000122, FixedString512Bytes_GetUnsafePtr_mC217ABC503C34C4A9505D3BD8184772A6957B594_AdjustorThunk },
	{ 0x06000123, FixedString512Bytes_get_Length_m70416F6C123F83B82723F71E137672507CEF8E1E_AdjustorThunk },
	{ 0x06000124, FixedString512Bytes_set_Length_m2FB002DB9D4CE470CB67BBBCF0345F3B879718D1_AdjustorThunk },
	{ 0x06000125, FixedString512Bytes_get_Capacity_m04C798E27AD1D5C03347B09A7B59EC1118A4DD9C_AdjustorThunk },
	{ 0x06000126, FixedString512Bytes_TryResize_m926AFC0E97C55C3D6D76AD2E4341D387866E3487_AdjustorThunk },
	{ 0x06000127, FixedString512Bytes_CompareTo_m04A7A314B42FFA9602958449016B60F210C3210D_AdjustorThunk },
	{ 0x06000128, FixedString512Bytes_Equals_m5D845EB2C13E708265F8ED7E0EA20B7CBC346729_AdjustorThunk },
	{ 0x06000129, FixedString512Bytes_CompareTo_m95DEE74C2D0BD5B60B25F90D6BA58ACAEA7A1941_AdjustorThunk },
	{ 0x0600012B, FixedString512Bytes_Equals_m8F548901D593718D4E2535B84D89972D4E7E6BE9_AdjustorThunk },
	{ 0x0600012C, FixedString512Bytes_CompareTo_m0DEEF2359E2F1BF27604E76EEE2DADF257E94590_AdjustorThunk },
	{ 0x0600012E, FixedString512Bytes_Equals_m11D223E18049AF2276EB099D85BE50952CC3624D_AdjustorThunk },
	{ 0x0600012F, FixedString512Bytes_CompareTo_mA7CF8872D14E6E5F2E920D0FFEE3AA0C82F347E6_AdjustorThunk },
	{ 0x06000131, FixedString512Bytes_Equals_m8A06C174B2115E83EE8704B02D6ADC27B8AA09DF_AdjustorThunk },
	{ 0x06000132, FixedString512Bytes_CompareTo_m7428FB6E2AC9137F8A74FD0C5349F2FAE30B05CD_AdjustorThunk },
	{ 0x06000134, FixedString512Bytes_Equals_m13E5ED0B742535959E3FF065EB7463151156937B_AdjustorThunk },
	{ 0x06000135, FixedString512Bytes_CompareTo_m1CEBDC6E092AE5F41AC99A3555BE147B58F0AB28_AdjustorThunk },
	{ 0x06000137, FixedString512Bytes_Equals_mBA5CFEFCA3D9F726BDF9221B1E1B7C763186F741_AdjustorThunk },
	{ 0x06000138, FixedString512Bytes_ToString_m3507A4F76408A6AEEC02A081227E82C724E788A3_AdjustorThunk },
	{ 0x06000139, FixedString512Bytes_GetHashCode_m7471BCB4E4BFFB14334B86C731F8A7EEE8808C0B_AdjustorThunk },
	{ 0x0600013A, FixedString512Bytes_Equals_m56F0D84282853BE0F8EB9C384E8A6BC6DCF704B0_AdjustorThunk },
	{ 0x0600013B, FixedString4096Bytes_GetUnsafePtr_mD7BB5BC41DC121917EACD3208B09F7FBA47E9B14_AdjustorThunk },
	{ 0x0600013C, FixedString4096Bytes_get_Length_m4A6C18A7FF02C0B37966A4BF6A6C62FE5BD8AA79_AdjustorThunk },
	{ 0x0600013D, FixedString4096Bytes_set_Length_mDF584B26F865243D41B322965031DC3AE50AE155_AdjustorThunk },
	{ 0x0600013E, FixedString4096Bytes_get_Capacity_m1D61376344C7CD4252488062BF0F1989571E7E65_AdjustorThunk },
	{ 0x0600013F, FixedString4096Bytes_TryResize_mD9833218AE0B1AA07F9FF570E8A5F059A8EBEF34_AdjustorThunk },
	{ 0x06000140, FixedString4096Bytes_CompareTo_m56A2BDBABB6EC15C2F06F310C77834ABB2E6E423_AdjustorThunk },
	{ 0x06000141, FixedString4096Bytes_Equals_mB8B543E697D5B9FE4A99B162080F424C070C67B1_AdjustorThunk },
	{ 0x06000142, FixedString4096Bytes_CompareTo_mDF19D52C9733F1C2AC4A5C6E57523640EB762250_AdjustorThunk },
	{ 0x06000145, FixedString4096Bytes_Equals_m50449CEA376EE67883DAA4A53B7A96657C0ABFC6_AdjustorThunk },
	{ 0x06000146, FixedString4096Bytes_CompareTo_m98DB83C45659AA502D3EF4C09CFDFCF7EE6AAD7E_AdjustorThunk },
	{ 0x06000148, FixedString4096Bytes_Equals_m7A31B6F07E4FF5391793F3A2E570D249FC28BC56_AdjustorThunk },
	{ 0x06000149, FixedString4096Bytes_CompareTo_m98AFBA57DD74ED48BB9DC93F0EA3D371AC232D88_AdjustorThunk },
	{ 0x0600014B, FixedString4096Bytes_Equals_m6630735E9757A96BBACAB07882404AB206787560_AdjustorThunk },
	{ 0x0600014C, FixedString4096Bytes_CompareTo_mAEDF7046DC4122FE355E855D489BE117FE71AE20_AdjustorThunk },
	{ 0x0600014E, FixedString4096Bytes_Equals_mAA8DADE086517F8985B18B396F739A4119E3974A_AdjustorThunk },
	{ 0x0600014F, FixedString4096Bytes_CompareTo_mBD907BBDC18CA4598C6C284FD38A682FF3D9272E_AdjustorThunk },
	{ 0x06000151, FixedString4096Bytes_Equals_m524817609813745DF01EAD53A606803206074B5A_AdjustorThunk },
	{ 0x06000152, FixedString4096Bytes_ToString_mE581B44C1FD3E2B439149546143D51020BF22EF1_AdjustorThunk },
	{ 0x06000153, FixedString4096Bytes_GetHashCode_m6017478A2A1E62CB9F8072684F3D27F71CA73D6F_AdjustorThunk },
	{ 0x06000154, FixedString4096Bytes_Equals_m901B3A08DF0A1847030310153BFA484A35000950_AdjustorThunk },
	{ 0x060001B5, NativeQueueBlockPoolData_AllocateBlock_mEE2500587CBF0C5D7DF01862F5608578F3E1A41D_AdjustorThunk },
	{ 0x060001B6, NativeQueueBlockPoolData_FreeBlock_m79B8FBE865EF9B2477F98C29F078417436BEED0E_AdjustorThunk },
	{ 0x060001BB, NativeQueueData_GetCurrentWriteBlockTLS_m75502C82FDFF25E26AA4773759A824A0D22E1411_AdjustorThunk },
	{ 0x060001BC, NativeQueueData_SetCurrentWriteBlockTLS_m9C78BEF5415CD20F6265F199C04B0D59D590131B_AdjustorThunk },
	{ 0x060001D0, Spinner_Lock_m455E583C6650190C9F5D9211C134A8D7898006D1_AdjustorThunk },
	{ 0x060001D1, Spinner_Unlock_m1A26CB58AE3E733421698B9F8750D882C649EE32_AdjustorThunk },
	{ 0x060001D4, RewindableAllocator_Rewind_mCE9856063EE3638DC82C4CF8605DBEBEBF130580_AdjustorThunk },
	{ 0x060001D5, RewindableAllocator_Dispose_m9938A91127A11581DA09794A2C5E8DF6283F2678_AdjustorThunk },
	{ 0x060001D6, RewindableAllocator_Try_m1C0B2B6033081280DA48B6475F2A0B764E4F57BE_AdjustorThunk },
	{ 0x060001D8, RewindableAllocator_get_Handle_m056BEDCB4F2BEA70D8DB4B91FAE1C9B7A44D174F_AdjustorThunk },
	{ 0x060001DA, MemoryBlock__ctor_mE607093E03F964839EE507282CED5F6ACB9E64D3_AdjustorThunk },
	{ 0x060001DB, MemoryBlock_Rewind_mD4E938ABCCD22E3430DEDEA620DFEF56E7542958_AdjustorThunk },
	{ 0x060001DC, MemoryBlock_Dispose_m8B9123CC2024106EE5104952C15DA2E4902033EF_AdjustorThunk },
	{ 0x060001DD, MemoryBlock_TryAllocate_m3B55864CA6A89C02E25B9C7B49E2652B66FE3A7F_AdjustorThunk },
	{ 0x060001DE, MemoryBlock_Contains_m93E7B8DC04D2AD9AFDD8589FFC7CD205031C90BB_AdjustorThunk },
	{ 0x060001EE, Comparison__ctor_m532F7CEEC53619D47639FF9483D6CE0F7282807B_AdjustorThunk },
	{ 0x060001FB, Rune_LengthInUtf8Bytes_m604BE7D4A8E1D866A859DCCF56093F2F0CDF8C58_AdjustorThunk },
	{ 0x06000233, UnsafeHashMapDataDispose_Dispose_m9E3DF36D59F3E4CAD0D400181DC8C3C8BAD76808_AdjustorThunk },
	{ 0x06000234, UnsafeHashMapDataDisposeJob_Execute_m19D9297F09EE8544FC687FFFD7CC974B94A1233B_AdjustorThunk },
	{ 0x06000240, UnsafeHashMapDataEnumerator__ctor_m96A3F1A71567451A655C63C4412838FD85BAA6DD_AdjustorThunk },
	{ 0x06000241, UnsafeHashMapDataEnumerator_MoveNext_m74CB5CDA2177D0AA9F5022C160676C7854FC2C7B_AdjustorThunk },
	{ 0x06000242, UnsafeHashMapDataEnumerator_Reset_m85D5B42E562A51E766D0FF22934E14B6B1614AD8_AdjustorThunk },
};
static const int32_t s_InvokerIndices[631] = 
{
	3107,
	3107,
	3107,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4982,
	5014,
	4772,
	4553,
	4790,
	4772,
	4772,
	4716,
	5066,
	1483,
	1097,
	428,
	1088,
	2995,
	3107,
	5002,
	3027,
	2096,
	3110,
	3027,
	3107,
	3107,
	3028,
	3028,
	3027,
	2534,
	3107,
	3027,
	2096,
	3110,
	3110,
	2096,
	4326,
	3107,
	4326,
	1483,
	1097,
	428,
	2145,
	4982,
	5029,
	5066,
	5066,
	5066,
	4326,
	3110,
	3027,
	2096,
	4326,
	3107,
	4326,
	1483,
	1097,
	428,
	2145,
	4982,
	5029,
	5066,
	5066,
	5066,
	4326,
	-1,
	-1,
	-1,
	5066,
	5066,
	3107,
	2556,
	3107,
	3107,
	4325,
	4487,
	4716,
	4778,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2995,
	3027,
	2534,
	3027,
	994,
	2145,
	1876,
	2556,
	2145,
	2119,
	4225,
	4225,
	1841,
	2122,
	4225,
	1844,
	2118,
	4225,
	1840,
	2121,
	4225,
	1843,
	2120,
	4225,
	1842,
	4755,
	3051,
	3027,
	1876,
	5027,
	2995,
	3027,
	2534,
	3027,
	994,
	2145,
	1876,
	2556,
	2145,
	2119,
	4225,
	1841,
	2122,
	4225,
	1844,
	2118,
	4225,
	1840,
	2121,
	4225,
	1843,
	2120,
	4225,
	1842,
	4756,
	3051,
	3027,
	1876,
	2995,
	3027,
	2534,
	3027,
	994,
	2145,
	1876,
	2556,
	2145,
	2119,
	4225,
	1841,
	2122,
	4225,
	1844,
	2118,
	4225,
	1840,
	2121,
	4225,
	1843,
	2120,
	4225,
	1842,
	4754,
	3051,
	3027,
	1876,
	2995,
	3027,
	2534,
	3027,
	994,
	2145,
	1876,
	2119,
	4225,
	1841,
	2122,
	4225,
	1844,
	2118,
	4225,
	1840,
	2121,
	4225,
	1843,
	2120,
	4225,
	1842,
	3051,
	3027,
	1876,
	2995,
	3027,
	2534,
	3027,
	994,
	2145,
	1876,
	2119,
	4225,
	4225,
	1841,
	2122,
	4225,
	1844,
	2118,
	4225,
	1840,
	2121,
	4225,
	1843,
	2120,
	4225,
	1842,
	3051,
	3027,
	1876,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4311,
	2995,
	994,
	3877,
	4562,
	-1,
	4716,
	3245,
	3245,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2995,
	2496,
	5013,
	5066,
	4605,
	5066,
	1665,
	1334,
	-1,
	-1,
	4107,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3107,
	3107,
	-1,
	-1,
	3107,
	3107,
	2096,
	4326,
	3110,
	4326,
	2535,
	3107,
	3107,
	2096,
	1853,
	1483,
	1097,
	428,
	2145,
	4982,
	5029,
	5066,
	5066,
	5066,
	4326,
	3354,
	3356,
	3616,
	3564,
	3616,
	625,
	4700,
	4696,
	5074,
	3611,
	4712,
	4712,
	3611,
	3612,
	3612,
	3357,
	3357,
	5008,
	3027,
	3306,
	4553,
	3305,
	3768,
	3759,
	3507,
	4627,
	4949,
	4560,
	4498,
	4499,
	4500,
	4962,
	4076,
	4072,
	3306,
	3305,
	3504,
	4553,
	3759,
	3507,
	1483,
	504,
	123,
	2371,
	4982,
	5029,
	5066,
	5066,
	5066,
	3759,
	1483,
	232,
	73,
	2556,
	4982,
	5029,
	5066,
	5066,
	5066,
	3507,
	-1,
	-1,
	4778,
	4778,
	-1,
	-1,
	4562,
	-1,
	4695,
	4772,
	3559,
	-1,
	-1,
	-1,
	3107,
	3107,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2496,
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
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	5066,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[6] = 
{
	{ 0x0600002C, 58,  (void**)&StackAllocator_Try_m112E33FC058E6A640E7E6E21D95986C5E9D5ECAB_RuntimeMethod_var, 0 },
	{ 0x0600002E, 59,  (void**)&StackAllocator_TryU24BurstManaged_mD9C996BEAB7838301DE0D3BC0F0EA502157D2F84_RuntimeMethod_var, 0 },
	{ 0x0600003C, 56,  (void**)&SlabAllocator_Try_m935C49B4A7F1F65EA55A3DBBDD2699BF94B53E74_RuntimeMethod_var, 0 },
	{ 0x0600003E, 57,  (void**)&SlabAllocator_TryU24BurstManaged_m69BA0BDD9CB936BB95076F93FB4404886E9E3653_RuntimeMethod_var, 0 },
	{ 0x060001D7, 27,  (void**)&RewindableAllocator_Try_mF6E7F53E1E6F100CFE4D0449B40BADCA6877E5C2_RuntimeMethod_var, 0 },
	{ 0x060001D9, 28,  (void**)&RewindableAllocator_TryU24BurstManaged_m94F53843161FC7D54FE03A65FEEF91AEC1A85082_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[73] = 
{
	{ 0x02000015, { 14, 2 } },
	{ 0x0200001E, { 18, 2 } },
	{ 0x02000020, { 25, 27 } },
	{ 0x02000021, { 52, 1 } },
	{ 0x02000022, { 53, 27 } },
	{ 0x02000023, { 80, 1 } },
	{ 0x02000024, { 81, 27 } },
	{ 0x02000025, { 108, 1 } },
	{ 0x02000026, { 109, 27 } },
	{ 0x02000027, { 136, 1 } },
	{ 0x02000028, { 137, 29 } },
	{ 0x02000029, { 166, 1 } },
	{ 0x0200003C, { 200, 5 } },
	{ 0x0200003D, { 205, 22 } },
	{ 0x0200003E, { 227, 2 } },
	{ 0x0200003F, { 229, 3 } },
	{ 0x02000040, { 232, 10 } },
	{ 0x02000043, { 242, 23 } },
	{ 0x02000044, { 267, 2 } },
	{ 0x0200004A, { 270, 4 } },
	{ 0x0200004B, { 274, 2 } },
	{ 0x0200004C, { 276, 8 } },
	{ 0x0200004E, { 284, 2 } },
	{ 0x02000064, { 305, 13 } },
	{ 0x02000065, { 318, 3 } },
	{ 0x02000067, { 321, 17 } },
	{ 0x02000068, { 338, 2 } },
	{ 0x02000069, { 340, 10 } },
	{ 0x0200006A, { 350, 13 } },
	{ 0x0200006B, { 369, 3 } },
	{ 0x06000004, { 0, 1 } },
	{ 0x06000005, { 1, 1 } },
	{ 0x06000006, { 2, 3 } },
	{ 0x06000007, { 5, 3 } },
	{ 0x06000008, { 8, 1 } },
	{ 0x06000009, { 9, 1 } },
	{ 0x0600000A, { 10, 3 } },
	{ 0x0600000B, { 13, 1 } },
	{ 0x06000056, { 16, 2 } },
	{ 0x06000059, { 20, 1 } },
	{ 0x0600005A, { 21, 2 } },
	{ 0x0600005B, { 23, 2 } },
	{ 0x06000155, { 167, 2 } },
	{ 0x06000156, { 169, 1 } },
	{ 0x06000157, { 170, 1 } },
	{ 0x06000158, { 171, 1 } },
	{ 0x06000159, { 172, 1 } },
	{ 0x0600015A, { 173, 3 } },
	{ 0x0600015B, { 176, 1 } },
	{ 0x0600015C, { 177, 4 } },
	{ 0x0600015D, { 181, 1 } },
	{ 0x0600015E, { 182, 3 } },
	{ 0x0600015F, { 185, 1 } },
	{ 0x06000160, { 186, 1 } },
	{ 0x06000161, { 187, 1 } },
	{ 0x06000167, { 188, 1 } },
	{ 0x0600016B, { 189, 2 } },
	{ 0x0600016C, { 191, 3 } },
	{ 0x0600016D, { 194, 4 } },
	{ 0x0600016E, { 198, 2 } },
	{ 0x0600019D, { 265, 2 } },
	{ 0x060001BE, { 269, 1 } },
	{ 0x06000229, { 286, 1 } },
	{ 0x0600022A, { 287, 5 } },
	{ 0x0600022C, { 292, 2 } },
	{ 0x06000230, { 294, 3 } },
	{ 0x06000231, { 297, 3 } },
	{ 0x06000232, { 300, 5 } },
	{ 0x06000263, { 363, 3 } },
	{ 0x0600026A, { 366, 2 } },
	{ 0x0600026B, { 368, 1 } },
	{ 0x06000275, { 372, 1 } },
	{ 0x06000276, { 373, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[374] = 
{
	{ (Il2CppRGCTXDataType)2, 5 },
	{ (Il2CppRGCTXDataType)3, 19445 },
	{ (Il2CppRGCTXDataType)3, 23948 },
	{ (Il2CppRGCTXDataType)3, 23828 },
	{ (Il2CppRGCTXDataType)3, 19443 },
	{ (Il2CppRGCTXDataType)3, 23947 },
	{ (Il2CppRGCTXDataType)3, 23827 },
	{ (Il2CppRGCTXDataType)3, 19442 },
	{ (Il2CppRGCTXDataType)2, 3 },
	{ (Il2CppRGCTXDataType)3, 19504 },
	{ (Il2CppRGCTXDataType)3, 23946 },
	{ (Il2CppRGCTXDataType)3, 23826 },
	{ (Il2CppRGCTXDataType)3, 19502 },
	{ (Il2CppRGCTXDataType)3, 19479 },
	{ (Il2CppRGCTXDataType)2, 688 },
	{ (Il2CppRGCTXDataType)3, 23875 },
	{ (Il2CppRGCTXDataType)3, 14032 },
	{ (Il2CppRGCTXDataType)3, 23346 },
	{ (Il2CppRGCTXDataType)2, 629 },
	{ (Il2CppRGCTXDataType)2, 846 },
	{ (Il2CppRGCTXDataType)3, 23927 },
	{ (Il2CppRGCTXDataType)3, 23934 },
	{ (Il2CppRGCTXDataType)3, 22704 },
	{ (Il2CppRGCTXDataType)3, 22706 },
	{ (Il2CppRGCTXDataType)3, 23949 },
	{ (Il2CppRGCTXDataType)3, 7738 },
	{ (Il2CppRGCTXDataType)3, 23938 },
	{ (Il2CppRGCTXDataType)3, 22700 },
	{ (Il2CppRGCTXDataType)3, 22691 },
	{ (Il2CppRGCTXDataType)3, 7737 },
	{ (Il2CppRGCTXDataType)3, 7739 },
	{ (Il2CppRGCTXDataType)2, 4438 },
	{ (Il2CppRGCTXDataType)2, 540 },
	{ (Il2CppRGCTXDataType)3, 7728 },
	{ (Il2CppRGCTXDataType)3, 7842 },
	{ (Il2CppRGCTXDataType)3, 7731 },
	{ (Il2CppRGCTXDataType)3, 7701 },
	{ (Il2CppRGCTXDataType)3, 7727 },
	{ (Il2CppRGCTXDataType)3, 7804 },
	{ (Il2CppRGCTXDataType)3, 7730 },
	{ (Il2CppRGCTXDataType)3, 7764 },
	{ (Il2CppRGCTXDataType)3, 7729 },
	{ (Il2CppRGCTXDataType)2, 1629 },
	{ (Il2CppRGCTXDataType)3, 7733 },
	{ (Il2CppRGCTXDataType)2, 1649 },
	{ (Il2CppRGCTXDataType)3, 7736 },
	{ (Il2CppRGCTXDataType)2, 1622 },
	{ (Il2CppRGCTXDataType)3, 7732 },
	{ (Il2CppRGCTXDataType)2, 1642 },
	{ (Il2CppRGCTXDataType)3, 7735 },
	{ (Il2CppRGCTXDataType)2, 1634 },
	{ (Il2CppRGCTXDataType)3, 7734 },
	{ (Il2CppRGCTXDataType)3, 7726 },
	{ (Il2CppRGCTXDataType)3, 7857 },
	{ (Il2CppRGCTXDataType)3, 23941 },
	{ (Il2CppRGCTXDataType)3, 22703 },
	{ (Il2CppRGCTXDataType)3, 22697 },
	{ (Il2CppRGCTXDataType)3, 7856 },
	{ (Il2CppRGCTXDataType)3, 7858 },
	{ (Il2CppRGCTXDataType)2, 4444 },
	{ (Il2CppRGCTXDataType)3, 7742 },
	{ (Il2CppRGCTXDataType)2, 546 },
	{ (Il2CppRGCTXDataType)3, 7847 },
	{ (Il2CppRGCTXDataType)3, 7850 },
	{ (Il2CppRGCTXDataType)3, 7704 },
	{ (Il2CppRGCTXDataType)3, 7846 },
	{ (Il2CppRGCTXDataType)3, 7820 },
	{ (Il2CppRGCTXDataType)3, 7849 },
	{ (Il2CppRGCTXDataType)3, 7780 },
	{ (Il2CppRGCTXDataType)3, 7848 },
	{ (Il2CppRGCTXDataType)2, 1632 },
	{ (Il2CppRGCTXDataType)3, 7852 },
	{ (Il2CppRGCTXDataType)2, 1654 },
	{ (Il2CppRGCTXDataType)3, 7855 },
	{ (Il2CppRGCTXDataType)2, 1625 },
	{ (Il2CppRGCTXDataType)3, 7851 },
	{ (Il2CppRGCTXDataType)2, 1647 },
	{ (Il2CppRGCTXDataType)3, 7854 },
	{ (Il2CppRGCTXDataType)2, 1639 },
	{ (Il2CppRGCTXDataType)3, 7853 },
	{ (Il2CppRGCTXDataType)3, 7845 },
	{ (Il2CppRGCTXDataType)3, 7699 },
	{ (Il2CppRGCTXDataType)3, 23937 },
	{ (Il2CppRGCTXDataType)3, 22699 },
	{ (Il2CppRGCTXDataType)3, 22689 },
	{ (Il2CppRGCTXDataType)3, 7698 },
	{ (Il2CppRGCTXDataType)3, 7700 },
	{ (Il2CppRGCTXDataType)2, 4436 },
	{ (Il2CppRGCTXDataType)3, 7725 },
	{ (Il2CppRGCTXDataType)2, 538 },
	{ (Il2CppRGCTXDataType)3, 7689 },
	{ (Il2CppRGCTXDataType)3, 7841 },
	{ (Il2CppRGCTXDataType)3, 7692 },
	{ (Il2CppRGCTXDataType)3, 7688 },
	{ (Il2CppRGCTXDataType)3, 7803 },
	{ (Il2CppRGCTXDataType)3, 7691 },
	{ (Il2CppRGCTXDataType)3, 7763 },
	{ (Il2CppRGCTXDataType)3, 7690 },
	{ (Il2CppRGCTXDataType)2, 1626 },
	{ (Il2CppRGCTXDataType)3, 7694 },
	{ (Il2CppRGCTXDataType)2, 1648 },
	{ (Il2CppRGCTXDataType)3, 7697 },
	{ (Il2CppRGCTXDataType)2, 1621 },
	{ (Il2CppRGCTXDataType)3, 7693 },
	{ (Il2CppRGCTXDataType)2, 1641 },
	{ (Il2CppRGCTXDataType)3, 7696 },
	{ (Il2CppRGCTXDataType)2, 1633 },
	{ (Il2CppRGCTXDataType)3, 7695 },
	{ (Il2CppRGCTXDataType)3, 7687 },
	{ (Il2CppRGCTXDataType)3, 7818 },
	{ (Il2CppRGCTXDataType)3, 23940 },
	{ (Il2CppRGCTXDataType)3, 22702 },
	{ (Il2CppRGCTXDataType)3, 22695 },
	{ (Il2CppRGCTXDataType)3, 7817 },
	{ (Il2CppRGCTXDataType)3, 7819 },
	{ (Il2CppRGCTXDataType)2, 4442 },
	{ (Il2CppRGCTXDataType)3, 7741 },
	{ (Il2CppRGCTXDataType)2, 544 },
	{ (Il2CppRGCTXDataType)3, 7808 },
	{ (Il2CppRGCTXDataType)3, 7844 },
	{ (Il2CppRGCTXDataType)3, 7811 },
	{ (Il2CppRGCTXDataType)3, 7703 },
	{ (Il2CppRGCTXDataType)3, 7807 },
	{ (Il2CppRGCTXDataType)3, 7810 },
	{ (Il2CppRGCTXDataType)3, 7779 },
	{ (Il2CppRGCTXDataType)3, 7809 },
	{ (Il2CppRGCTXDataType)2, 1631 },
	{ (Il2CppRGCTXDataType)3, 7813 },
	{ (Il2CppRGCTXDataType)2, 1651 },
	{ (Il2CppRGCTXDataType)3, 7816 },
	{ (Il2CppRGCTXDataType)2, 1624 },
	{ (Il2CppRGCTXDataType)3, 7812 },
	{ (Il2CppRGCTXDataType)2, 1646 },
	{ (Il2CppRGCTXDataType)3, 7815 },
	{ (Il2CppRGCTXDataType)2, 1638 },
	{ (Il2CppRGCTXDataType)3, 7814 },
	{ (Il2CppRGCTXDataType)3, 7806 },
	{ (Il2CppRGCTXDataType)3, 7777 },
	{ (Il2CppRGCTXDataType)3, 23939 },
	{ (Il2CppRGCTXDataType)3, 22701 },
	{ (Il2CppRGCTXDataType)3, 22693 },
	{ (Il2CppRGCTXDataType)3, 7776 },
	{ (Il2CppRGCTXDataType)3, 23892 },
	{ (Il2CppRGCTXDataType)3, 24069 },
	{ (Il2CppRGCTXDataType)3, 7778 },
	{ (Il2CppRGCTXDataType)2, 4440 },
	{ (Il2CppRGCTXDataType)3, 7740 },
	{ (Il2CppRGCTXDataType)2, 542 },
	{ (Il2CppRGCTXDataType)3, 7767 },
	{ (Il2CppRGCTXDataType)3, 7843 },
	{ (Il2CppRGCTXDataType)3, 7770 },
	{ (Il2CppRGCTXDataType)3, 7702 },
	{ (Il2CppRGCTXDataType)3, 7766 },
	{ (Il2CppRGCTXDataType)3, 7805 },
	{ (Il2CppRGCTXDataType)3, 7769 },
	{ (Il2CppRGCTXDataType)3, 7768 },
	{ (Il2CppRGCTXDataType)2, 1630 },
	{ (Il2CppRGCTXDataType)3, 7772 },
	{ (Il2CppRGCTXDataType)2, 1650 },
	{ (Il2CppRGCTXDataType)3, 7775 },
	{ (Il2CppRGCTXDataType)2, 1623 },
	{ (Il2CppRGCTXDataType)3, 7771 },
	{ (Il2CppRGCTXDataType)2, 1643 },
	{ (Il2CppRGCTXDataType)3, 7774 },
	{ (Il2CppRGCTXDataType)2, 1637 },
	{ (Il2CppRGCTXDataType)3, 7773 },
	{ (Il2CppRGCTXDataType)3, 7765 },
	{ (Il2CppRGCTXDataType)2, 258 },
	{ (Il2CppRGCTXDataType)3, 22778 },
	{ (Il2CppRGCTXDataType)3, 22714 },
	{ (Il2CppRGCTXDataType)2, 259 },
	{ (Il2CppRGCTXDataType)3, 22727 },
	{ (Il2CppRGCTXDataType)3, 22715 },
	{ (Il2CppRGCTXDataType)3, 24111 },
	{ (Il2CppRGCTXDataType)2, 796 },
	{ (Il2CppRGCTXDataType)3, 22728 },
	{ (Il2CppRGCTXDataType)2, 254 },
	{ (Il2CppRGCTXDataType)3, 24112 },
	{ (Il2CppRGCTXDataType)2, 817 },
	{ (Il2CppRGCTXDataType)3, 22724 },
	{ (Il2CppRGCTXDataType)3, 22734 },
	{ (Il2CppRGCTXDataType)2, 251 },
	{ (Il2CppRGCTXDataType)3, 24110 },
	{ (Il2CppRGCTXDataType)2, 795 },
	{ (Il2CppRGCTXDataType)3, 22762 },
	{ (Il2CppRGCTXDataType)2, 260 },
	{ (Il2CppRGCTXDataType)2, 253 },
	{ (Il2CppRGCTXDataType)2, 252 },
	{ (Il2CppRGCTXDataType)3, 24251 },
	{ (Il2CppRGCTXDataType)3, 23933 },
	{ (Il2CppRGCTXDataType)3, 23822 },
	{ (Il2CppRGCTXDataType)3, 23383 },
	{ (Il2CppRGCTXDataType)3, 14574 },
	{ (Il2CppRGCTXDataType)3, 23345 },
	{ (Il2CppRGCTXDataType)3, 23889 },
	{ (Il2CppRGCTXDataType)2, 485 },
	{ (Il2CppRGCTXDataType)2, 2337 },
	{ (Il2CppRGCTXDataType)3, 8520 },
	{ (Il2CppRGCTXDataType)3, 19447 },
	{ (Il2CppRGCTXDataType)3, 23928 },
	{ (Il2CppRGCTXDataType)3, 14049 },
	{ (Il2CppRGCTXDataType)3, 22015 },
	{ (Il2CppRGCTXDataType)3, 22017 },
	{ (Il2CppRGCTXDataType)3, 14048 },
	{ (Il2CppRGCTXDataType)3, 14058 },
	{ (Il2CppRGCTXDataType)3, 14500 },
	{ (Il2CppRGCTXDataType)2, 3605 },
	{ (Il2CppRGCTXDataType)3, 18410 },
	{ (Il2CppRGCTXDataType)3, 14502 },
	{ (Il2CppRGCTXDataType)3, 18424 },
	{ (Il2CppRGCTXDataType)3, 18414 },
	{ (Il2CppRGCTXDataType)3, 18422 },
	{ (Il2CppRGCTXDataType)3, 18425 },
	{ (Il2CppRGCTXDataType)3, 18412 },
	{ (Il2CppRGCTXDataType)3, 18420 },
	{ (Il2CppRGCTXDataType)3, 14501 },
	{ (Il2CppRGCTXDataType)3, 18419 },
	{ (Il2CppRGCTXDataType)3, 18421 },
	{ (Il2CppRGCTXDataType)3, 18413 },
	{ (Il2CppRGCTXDataType)3, 18426 },
	{ (Il2CppRGCTXDataType)3, 18423 },
	{ (Il2CppRGCTXDataType)3, 18415 },
	{ (Il2CppRGCTXDataType)3, 18416 },
	{ (Il2CppRGCTXDataType)3, 18418 },
	{ (Il2CppRGCTXDataType)3, 18417 },
	{ (Il2CppRGCTXDataType)3, 18411 },
	{ (Il2CppRGCTXDataType)2, 604 },
	{ (Il2CppRGCTXDataType)3, 15910 },
	{ (Il2CppRGCTXDataType)3, 15909 },
	{ (Il2CppRGCTXDataType)3, 23801 },
	{ (Il2CppRGCTXDataType)3, 6178 },
	{ (Il2CppRGCTXDataType)2, 2667 },
	{ (Il2CppRGCTXDataType)2, 2746 },
	{ (Il2CppRGCTXDataType)3, 10996 },
	{ (Il2CppRGCTXDataType)3, 18409 },
	{ (Il2CppRGCTXDataType)3, 14047 },
	{ (Il2CppRGCTXDataType)3, 14057 },
	{ (Il2CppRGCTXDataType)2, 3314 },
	{ (Il2CppRGCTXDataType)3, 15901 },
	{ (Il2CppRGCTXDataType)3, 10997 },
	{ (Il2CppRGCTXDataType)3, 14560 },
	{ (Il2CppRGCTXDataType)2, 3189 },
	{ (Il2CppRGCTXDataType)3, 14577 },
	{ (Il2CppRGCTXDataType)2, 607 },
	{ (Il2CppRGCTXDataType)2, 3610 },
	{ (Il2CppRGCTXDataType)3, 14576 },
	{ (Il2CppRGCTXDataType)3, 18500 },
	{ (Il2CppRGCTXDataType)3, 18502 },
	{ (Il2CppRGCTXDataType)3, 18495 },
	{ (Il2CppRGCTXDataType)3, 18501 },
	{ (Il2CppRGCTXDataType)3, 18498 },
	{ (Il2CppRGCTXDataType)3, 18499 },
	{ (Il2CppRGCTXDataType)3, 18492 },
	{ (Il2CppRGCTXDataType)3, 18496 },
	{ (Il2CppRGCTXDataType)3, 18497 },
	{ (Il2CppRGCTXDataType)3, 18494 },
	{ (Il2CppRGCTXDataType)3, 18493 },
	{ (Il2CppRGCTXDataType)3, 14578 },
	{ (Il2CppRGCTXDataType)3, 23354 },
	{ (Il2CppRGCTXDataType)2, 1503 },
	{ (Il2CppRGCTXDataType)3, 5500 },
	{ (Il2CppRGCTXDataType)3, 14579 },
	{ (Il2CppRGCTXDataType)3, 14052 },
	{ (Il2CppRGCTXDataType)3, 14580 },
	{ (Il2CppRGCTXDataType)3, 14051 },
	{ (Il2CppRGCTXDataType)3, 18491 },
	{ (Il2CppRGCTXDataType)2, 356 },
	{ (Il2CppRGCTXDataType)3, 14575 },
	{ (Il2CppRGCTXDataType)3, 14050 },
	{ (Il2CppRGCTXDataType)3, 23929 },
	{ (Il2CppRGCTXDataType)3, 23385 },
	{ (Il2CppRGCTXDataType)3, 23390 },
	{ (Il2CppRGCTXDataType)3, 24071 },
	{ (Il2CppRGCTXDataType)3, 23895 },
	{ (Il2CppRGCTXDataType)3, 23391 },
	{ (Il2CppRGCTXDataType)3, 24074 },
	{ (Il2CppRGCTXDataType)3, 14902 },
	{ (Il2CppRGCTXDataType)2, 3231 },
	{ (Il2CppRGCTXDataType)3, 23943 },
	{ (Il2CppRGCTXDataType)3, 23824 },
	{ (Il2CppRGCTXDataType)3, 14904 },
	{ (Il2CppRGCTXDataType)2, 611 },
	{ (Il2CppRGCTXDataType)2, 3231 },
	{ (Il2CppRGCTXDataType)3, 14903 },
	{ (Il2CppRGCTXDataType)3, 24168 },
	{ (Il2CppRGCTXDataType)2, 674 },
	{ (Il2CppRGCTXDataType)3, 23779 },
	{ (Il2CppRGCTXDataType)3, 23780 },
	{ (Il2CppRGCTXDataType)3, 23951 },
	{ (Il2CppRGCTXDataType)3, 23936 },
	{ (Il2CppRGCTXDataType)3, 23891 },
	{ (Il2CppRGCTXDataType)2, 496 },
	{ (Il2CppRGCTXDataType)3, 23950 },
	{ (Il2CppRGCTXDataType)3, 23935 },
	{ (Il2CppRGCTXDataType)3, 14033 },
	{ (Il2CppRGCTXDataType)3, 23887 },
	{ (Il2CppRGCTXDataType)3, 14034 },
	{ (Il2CppRGCTXDataType)3, 14035 },
	{ (Il2CppRGCTXDataType)3, 23888 },
	{ (Il2CppRGCTXDataType)3, 14036 },
	{ (Il2CppRGCTXDataType)3, 14559 },
	{ (Il2CppRGCTXDataType)3, 23890 },
	{ (Il2CppRGCTXDataType)3, 14037 },
	{ (Il2CppRGCTXDataType)3, 23897 },
	{ (Il2CppRGCTXDataType)3, 14056 },
	{ (Il2CppRGCTXDataType)3, 18374 },
	{ (Il2CppRGCTXDataType)2, 3601 },
	{ (Il2CppRGCTXDataType)3, 18372 },
	{ (Il2CppRGCTXDataType)3, 24072 },
	{ (Il2CppRGCTXDataType)3, 24075 },
	{ (Il2CppRGCTXDataType)2, 676 },
	{ (Il2CppRGCTXDataType)3, 18373 },
	{ (Il2CppRGCTXDataType)3, 23796 },
	{ (Il2CppRGCTXDataType)3, 23896 },
	{ (Il2CppRGCTXDataType)2, 2330 },
	{ (Il2CppRGCTXDataType)3, 8519 },
	{ (Il2CppRGCTXDataType)3, 18375 },
	{ (Il2CppRGCTXDataType)3, 23898 },
	{ (Il2CppRGCTXDataType)3, 23893 },
	{ (Il2CppRGCTXDataType)3, 23952 },
	{ (Il2CppRGCTXDataType)3, 23876 },
	{ (Il2CppRGCTXDataType)3, 23775 },
	{ (Il2CppRGCTXDataType)3, 18428 },
	{ (Il2CppRGCTXDataType)3, 18430 },
	{ (Il2CppRGCTXDataType)3, 23797 },
	{ (Il2CppRGCTXDataType)3, 18376 },
	{ (Il2CppRGCTXDataType)2, 3602 },
	{ (Il2CppRGCTXDataType)3, 18379 },
	{ (Il2CppRGCTXDataType)3, 18377 },
	{ (Il2CppRGCTXDataType)3, 18380 },
	{ (Il2CppRGCTXDataType)3, 18429 },
	{ (Il2CppRGCTXDataType)3, 18378 },
	{ (Il2CppRGCTXDataType)3, 22016 },
	{ (Il2CppRGCTXDataType)3, 23784 },
	{ (Il2CppRGCTXDataType)3, 22018 },
	{ (Il2CppRGCTXDataType)3, 23792 },
	{ (Il2CppRGCTXDataType)3, 14562 },
	{ (Il2CppRGCTXDataType)3, 23788 },
	{ (Il2CppRGCTXDataType)3, 18381 },
	{ (Il2CppRGCTXDataType)2, 3603 },
	{ (Il2CppRGCTXDataType)2, 2747 },
	{ (Il2CppRGCTXDataType)3, 10998 },
	{ (Il2CppRGCTXDataType)3, 18427 },
	{ (Il2CppRGCTXDataType)3, 14053 },
	{ (Il2CppRGCTXDataType)3, 14059 },
	{ (Il2CppRGCTXDataType)2, 3315 },
	{ (Il2CppRGCTXDataType)3, 15902 },
	{ (Il2CppRGCTXDataType)3, 10999 },
	{ (Il2CppRGCTXDataType)3, 14561 },
	{ (Il2CppRGCTXDataType)2, 3191 },
	{ (Il2CppRGCTXDataType)3, 18511 },
	{ (Il2CppRGCTXDataType)3, 18509 },
	{ (Il2CppRGCTXDataType)3, 18510 },
	{ (Il2CppRGCTXDataType)2, 680 },
	{ (Il2CppRGCTXDataType)2, 3613 },
	{ (Il2CppRGCTXDataType)3, 18507 },
	{ (Il2CppRGCTXDataType)3, 19455 },
	{ (Il2CppRGCTXDataType)3, 18512 },
	{ (Il2CppRGCTXDataType)3, 19454 },
	{ (Il2CppRGCTXDataType)3, 23825 },
	{ (Il2CppRGCTXDataType)3, 18506 },
	{ (Il2CppRGCTXDataType)3, 24073 },
	{ (Il2CppRGCTXDataType)3, 18508 },
	{ (Il2CppRGCTXDataType)3, 19429 },
	{ (Il2CppRGCTXDataType)2, 419 },
	{ (Il2CppRGCTXDataType)3, 18505 },
	{ (Il2CppRGCTXDataType)3, 19441 },
	{ (Il2CppRGCTXDataType)3, 19478 },
	{ (Il2CppRGCTXDataType)3, 18504 },
	{ (Il2CppRGCTXDataType)3, 18503 },
	{ (Il2CppRGCTXDataType)2, 4469 },
	{ (Il2CppRGCTXDataType)2, 679 },
	{ (Il2CppRGCTXDataType)3, 22951 },
	{ (Il2CppRGCTXDataType)3, 22957 },
};
extern const CustomAttributesCacheGenerator g_Unity_Collections_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Collections_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Collections_CodeGenModule = 
{
	"Unity.Collections.dll",
	631,
	s_methodPointers,
	149,
	s_adjustorThunks,
	s_InvokerIndices,
	6,
	s_reversePInvokeIndices,
	73,
	s_rgctxIndices,
	374,
	s_rgctxValues,
	NULL,
	g_Unity_Collections_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
