#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Boolean NanoSockets.Socket::get_IsCreated()
extern void Socket_get_IsCreated_mF3296FB08389CB71F076FED3577B42E494826704 (void);
// 0x00000002 System.Int64 NanoSockets.Socket::op_Implicit(NanoSockets.Socket)
extern void Socket_op_Implicit_m6FCA3BEBDD7B9717B46265E9EF281BF42270A091 (void);
// 0x00000003 NanoSockets.Socket NanoSockets.Socket::op_Implicit(System.Int64)
extern void Socket_op_Implicit_m5492D8EE67C10FB7A34A8090C9BC220C91AB87F5 (void);
// 0x00000004 System.Boolean NanoSockets.Address::Equals(NanoSockets.Address)
extern void Address_Equals_m74D0F3D8422E871EC77D58D3367484EEA26CE38C (void);
// 0x00000005 System.Boolean NanoSockets.Address::Equals(System.Object)
extern void Address_Equals_m9E7233ADADD7336D5FA9C916212D49A195FB169A (void);
// 0x00000006 System.Int32 NanoSockets.Address::GetHashCode()
extern void Address_GetHashCode_m553107BD838B87CEC1DAE71663EA53C08404F83F (void);
// 0x00000007 System.String NanoSockets.Address::ToString()
extern void Address_ToString_m5BFFE4ECA0326DF5E2544B33C8ACE7B7A76605E5 (void);
// 0x00000008 NanoSockets.Status NanoSockets.UDP::Initialize()
extern void UDP_Initialize_mBEBA69D775ACF36DF91F454FBDDC8E25323C5B9E (void);
// 0x00000009 System.Int64 NanoSockets.UDP::Create(System.Int32,System.Int32)
extern void UDP_Create_mE6CD73C5EADF7E343C570F9FED60D8243B63FDAE (void);
// 0x0000000A System.Void NanoSockets.UDP::Destroy(System.Int64&)
extern void UDP_Destroy_mF64B136A9659984165263870F61A1F00AB0EE601 (void);
// 0x0000000B System.Int32 NanoSockets.UDP::Bind(System.Int64,NanoSockets.Address&)
extern void UDP_Bind_m17A43EED0620425008A67D87541099358FC53DD1 (void);
// 0x0000000C NanoSockets.Status NanoSockets.UDP::SetNonBlocking(System.Int64)
extern void UDP_SetNonBlocking_mB46588289C4D9B94DF91A0CFF8BC47DDE823035C (void);
// 0x0000000D System.Int32 NanoSockets.UDP::Send(System.Int64,NanoSockets.Address*,System.Byte*,System.Int32)
extern void UDP_Send_m0292367F9B279864C303027C480DB6DA1D30DE17 (void);
// 0x0000000E System.Int32 NanoSockets.UDP::Receive(System.Int64,NanoSockets.Address*,System.Byte*,System.Int32)
extern void UDP_Receive_mE1CCB654E88A386D8BE0F64C33E13F283A00B458 (void);
// 0x0000000F NanoSockets.Status NanoSockets.UDP::GetAddress(System.Int64,NanoSockets.Address&)
extern void UDP_GetAddress_m5BB306176A2371940CDF8A64913A17B0F2B659CB (void);
// 0x00000010 NanoSockets.Status NanoSockets.UDP::SetIP(NanoSockets.Address&,System.String)
extern void UDP_SetIP_mE5D02A243CE4F3A2B1E6AA7CE4541D9CC0E02314 (void);
static Il2CppMethodPointer s_methodPointers[16] = 
{
	Socket_get_IsCreated_mF3296FB08389CB71F076FED3577B42E494826704,
	Socket_op_Implicit_m6FCA3BEBDD7B9717B46265E9EF281BF42270A091,
	Socket_op_Implicit_m5492D8EE67C10FB7A34A8090C9BC220C91AB87F5,
	Address_Equals_m74D0F3D8422E871EC77D58D3367484EEA26CE38C,
	Address_Equals_m9E7233ADADD7336D5FA9C916212D49A195FB169A,
	Address_GetHashCode_m553107BD838B87CEC1DAE71663EA53C08404F83F,
	Address_ToString_m5BFFE4ECA0326DF5E2544B33C8ACE7B7A76605E5,
	UDP_Initialize_mBEBA69D775ACF36DF91F454FBDDC8E25323C5B9E,
	UDP_Create_mE6CD73C5EADF7E343C570F9FED60D8243B63FDAE,
	UDP_Destroy_mF64B136A9659984165263870F61A1F00AB0EE601,
	UDP_Bind_m17A43EED0620425008A67D87541099358FC53DD1,
	UDP_SetNonBlocking_mB46588289C4D9B94DF91A0CFF8BC47DDE823035C,
	UDP_Send_m0292367F9B279864C303027C480DB6DA1D30DE17,
	UDP_Receive_mE1CCB654E88A386D8BE0F64C33E13F283A00B458,
	UDP_GetAddress_m5BB306176A2371940CDF8A64913A17B0F2B659CB,
	UDP_SetIP_mE5D02A243CE4F3A2B1E6AA7CE4541D9CC0E02314,
};
extern void Socket_get_IsCreated_mF3296FB08389CB71F076FED3577B42E494826704_AdjustorThunk (void);
extern void Address_Equals_m74D0F3D8422E871EC77D58D3367484EEA26CE38C_AdjustorThunk (void);
extern void Address_Equals_m9E7233ADADD7336D5FA9C916212D49A195FB169A_AdjustorThunk (void);
extern void Address_GetHashCode_m553107BD838B87CEC1DAE71663EA53C08404F83F_AdjustorThunk (void);
extern void Address_ToString_m5BFFE4ECA0326DF5E2544B33C8ACE7B7A76605E5_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[5] = 
{
	{ 0x06000001, Socket_get_IsCreated_mF3296FB08389CB71F076FED3577B42E494826704_AdjustorThunk },
	{ 0x06000004, Address_Equals_m74D0F3D8422E871EC77D58D3367484EEA26CE38C_AdjustorThunk },
	{ 0x06000005, Address_Equals_m9E7233ADADD7336D5FA9C916212D49A195FB169A_AdjustorThunk },
	{ 0x06000006, Address_GetHashCode_m553107BD838B87CEC1DAE71663EA53C08404F83F_AdjustorThunk },
	{ 0x06000007, Address_ToString_m5BFFE4ECA0326DF5E2544B33C8ACE7B7A76605E5_AdjustorThunk },
};
static const int32_t s_InvokerIndices[16] = 
{
	3431,
	5320,
	5471,
	2124,
	2208,
	3466,
	3497,
	5594,
	4906,
	5539,
	4887,
	5296,
	4125,
	4125,
	4887,
	4882,
};
extern const CustomAttributesCacheGenerator g_NanoSockets_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_NanoSockets_CodeGenModule;
const Il2CppCodeGenModule g_NanoSockets_CodeGenModule = 
{
	"NanoSockets.dll",
	16,
	s_methodPointers,
	5,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_NanoSockets_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
