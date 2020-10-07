#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Void Mirror.Websocket.Client::add_Connected(System.Action)
extern void Client_add_Connected_mACCA2AADA7BBDA2D4843E4AF22BFF3211F010065 (void);
// 0x00000002 System.Void Mirror.Websocket.Client::remove_Connected(System.Action)
extern void Client_remove_Connected_mF7DD10E52FE0D9E3074B1CEE3977D4429B382869 (void);
// 0x00000003 System.Void Mirror.Websocket.Client::add_ReceivedData(System.Action`1<System.ArraySegment`1<System.Byte>>)
extern void Client_add_ReceivedData_m4361004BA0E3D603EBA7641EEF8876A0914DDA0C (void);
// 0x00000004 System.Void Mirror.Websocket.Client::remove_ReceivedData(System.Action`1<System.ArraySegment`1<System.Byte>>)
extern void Client_remove_ReceivedData_m1B00732821B9BEF2FBF4FC7337F44A7D95B9A64A (void);
// 0x00000005 System.Void Mirror.Websocket.Client::add_Disconnected(System.Action)
extern void Client_add_Disconnected_mAD9D7A58BF25BC8F7E0AD7F621046DEB52CFEEBC (void);
// 0x00000006 System.Void Mirror.Websocket.Client::remove_Disconnected(System.Action)
extern void Client_remove_Disconnected_m5F02E4179E2EDD55A97A7C30084DC67950DD9F18 (void);
// 0x00000007 System.Void Mirror.Websocket.Client::add_ReceivedError(System.Action`1<System.Exception>)
extern void Client_add_ReceivedError_m3B724A14ED126295E70C31BB7D35D09F152AD181 (void);
// 0x00000008 System.Void Mirror.Websocket.Client::remove_ReceivedError(System.Action`1<System.Exception>)
extern void Client_remove_ReceivedError_m9C532F682BEB37DECC9484742FBE12B41A912DA7 (void);
// 0x00000009 System.Boolean Mirror.Websocket.Client::get_Connecting()
extern void Client_get_Connecting_m5F34C29C8B056FF7D084B9F25D05E672C224A754 (void);
// 0x0000000A System.Void Mirror.Websocket.Client::set_Connecting(System.Boolean)
extern void Client_set_Connecting_m6C8BF334A0329CF575801FCD2A54EB563DEBB067 (void);
// 0x0000000B System.Boolean Mirror.Websocket.Client::get_IsConnected()
extern void Client_get_IsConnected_m12F7E826588326B76721F2406BA67AF8D5D8385C (void);
// 0x0000000C System.Void Mirror.Websocket.Client::set_IsConnected(System.Boolean)
extern void Client_set_IsConnected_mBB55DDA0BE02E4F5EEB4984325F9316DAD093ED0 (void);
// 0x0000000D System.Void Mirror.Websocket.Client::Connect(System.Uri)
extern void Client_Connect_m5BA0C1DEA3A6A6B01AA02077C54C1DF125273418 (void);
// 0x0000000E System.Threading.Tasks.Task Mirror.Websocket.Client::ReceiveLoop(System.Net.WebSockets.WebSocket,System.Threading.CancellationToken)
extern void Client_ReceiveLoop_mA3AE60D98D694CE288E7D4AE5DD129F05E66E311 (void);
// 0x0000000F System.Threading.Tasks.Task Mirror.Websocket.Client::WaitForEnabledAsync()
extern void Client_WaitForEnabledAsync_mAC3FC6B80472369C0DE634C6F4F0D03F0576108E (void);
// 0x00000010 System.Boolean Mirror.Websocket.Client::ProcessClientMessage()
extern void Client_ProcessClientMessage_mE5E7473DBD493874CF3D7FED1241C2848C910C22 (void);
// 0x00000011 System.Threading.Tasks.Task`1<System.ArraySegment`1<System.Byte>> Mirror.Websocket.Client::ReadFrames(System.Net.WebSockets.WebSocketReceiveResult,System.Net.WebSockets.WebSocket,System.Byte[])
extern void Client_ReadFrames_m22309959B3BFF3BA307FA2780A2959A0CE45AE34 (void);
// 0x00000012 System.Void Mirror.Websocket.Client::Disconnect()
extern void Client_Disconnect_mF24A0D258867DB077425DF743BB87AF41D25EFD5 (void);
// 0x00000013 System.Void Mirror.Websocket.Client::Send(System.ArraySegment`1<System.Byte>)
extern void Client_Send_m9692EAC34C32B531EEE85FCED8A00E6DFC42870F (void);
// 0x00000014 System.String Mirror.Websocket.Client::ToString()
extern void Client_ToString_mFE1776E11D54BB50E81029C17C20234C2C9710BA (void);
// 0x00000015 System.Void Mirror.Websocket.Client::.ctor()
extern void Client__ctor_m42E63227C99C34CC2E7E4E6D6536319C7DEBBAD2 (void);
// 0x00000016 System.Void Mirror.Websocket.Server::add_Connected(System.Action`1<System.Int32>)
extern void Server_add_Connected_m4342C9ED9613025238E4DEFA4559B6AE26EF8396 (void);
// 0x00000017 System.Void Mirror.Websocket.Server::remove_Connected(System.Action`1<System.Int32>)
extern void Server_remove_Connected_m733A0B1785E43E61896E6B304B7D3BE0FB2E9BB0 (void);
// 0x00000018 System.Void Mirror.Websocket.Server::add_ReceivedData(System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>)
extern void Server_add_ReceivedData_m6E0108803A83A73550C36956E254CCEBC032D281 (void);
// 0x00000019 System.Void Mirror.Websocket.Server::remove_ReceivedData(System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>)
extern void Server_remove_ReceivedData_m4CBF1CA4FE5748C99DBA59D67E54842B66DF0AB2 (void);
// 0x0000001A System.Void Mirror.Websocket.Server::add_Disconnected(System.Action`1<System.Int32>)
extern void Server_add_Disconnected_m32F95F3088EACC6A93354D15432456DEEBFDB7FA (void);
// 0x0000001B System.Void Mirror.Websocket.Server::remove_Disconnected(System.Action`1<System.Int32>)
extern void Server_remove_Disconnected_m334563E8670891A8F8762F5DDA1EA53CAFD386DD (void);
// 0x0000001C System.Void Mirror.Websocket.Server::add_ReceivedError(System.Action`2<System.Int32,System.Exception>)
extern void Server_add_ReceivedError_m8986335D892E101107DF4875E47347FC49F0B404 (void);
// 0x0000001D System.Void Mirror.Websocket.Server::remove_ReceivedError(System.Action`2<System.Int32,System.Exception>)
extern void Server_remove_ReceivedError_m87DCBE6A541F77301BCF09E7FA2D3DCB15508E2B (void);
// 0x0000001E System.Int32 Mirror.Websocket.Server::NextConnectionId()
extern void Server_NextConnectionId_m32A28CFE748C0C99415B092CE085715B7D9D5C12 (void);
// 0x0000001F System.Boolean Mirror.Websocket.Server::get_Active()
extern void Server_get_Active_mEFF0489487C9B87D76882A991E4C007AE7CD046E (void);
// 0x00000020 System.Net.WebSockets.WebSocket Mirror.Websocket.Server::GetClient(System.Int32)
extern void Server_GetClient_m74C3BFEB1E99237E8C819B735680A46BD061B648 (void);
// 0x00000021 System.Threading.Tasks.Task Mirror.Websocket.Server::Listen(System.Int32)
extern void Server_Listen_mAD1108A3E37B37CEE1F422888B21F447F9366A23 (void);
// 0x00000022 System.Threading.Tasks.Task Mirror.Websocket.Server::ProcessTcpClient(System.Net.Sockets.TcpClient,System.Threading.CancellationToken)
extern void Server_ProcessTcpClient_m6569D57812504117306685CEF4962C1AFE824E61 (void);
// 0x00000023 System.Boolean Mirror.Websocket.Server::CertVerificationCallback(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void Server_CertVerificationCallback_m0DD64D114895F7434AE0BD9DF632817A4F9C115B (void);
// 0x00000024 System.Threading.Tasks.Task Mirror.Websocket.Server::ReceiveLoopAsync(System.Net.WebSockets.WebSocket,System.Threading.CancellationToken)
extern void Server_ReceiveLoopAsync_mC3A1139190529AAF3F985717DBAC7AC564AF7113 (void);
// 0x00000025 System.Threading.Tasks.Task Mirror.Websocket.Server::WaitForEnabledAsync()
extern void Server_WaitForEnabledAsync_mF588D4DA07F4D3EE99CC208C2C36F8330ED3FFD1 (void);
// 0x00000026 System.Threading.Tasks.Task`1<System.ArraySegment`1<System.Byte>> Mirror.Websocket.Server::ReadFrames(System.Int32,System.Net.WebSockets.WebSocketReceiveResult,System.Net.WebSockets.WebSocket,System.Byte[],System.Threading.CancellationToken)
extern void Server_ReadFrames_m51BB74FF9F2C970D7BFFE252E7027D5465D8A462 (void);
// 0x00000027 System.Void Mirror.Websocket.Server::Stop()
extern void Server_Stop_mD2F1F3C6AC81CD766CA195400CA32A5F1C2F6006 (void);
// 0x00000028 System.Void Mirror.Websocket.Server::Send(System.Int32,System.ArraySegment`1<System.Byte>)
extern void Server_Send_m7B25BFF57509D49F13515DA887E5F66C26CFA7AA (void);
// 0x00000029 System.String Mirror.Websocket.Server::GetClientAddress(System.Int32)
extern void Server_GetClientAddress_mEA8E4879A90A9225BF452A8657927951798874CC (void);
// 0x0000002A System.Boolean Mirror.Websocket.Server::Disconnect(System.Int32)
extern void Server_Disconnect_m1F224548071798C2E3ED91FA624464595E811827 (void);
// 0x0000002B System.String Mirror.Websocket.Server::ToString()
extern void Server_ToString_mE62097BF1B6990D35D893375EBD1459ED5A42E10 (void);
// 0x0000002C System.Void Mirror.Websocket.Server::.ctor()
extern void Server__ctor_m967F055DF7F8316510B81B71F6CAA740AADDD260 (void);
// 0x0000002D System.Void Mirror.Websocket.Server::.cctor()
extern void Server__cctor_mDEAA8D4E1CA947A54AE1D5F630D020EF75844EA3 (void);
// 0x0000002E System.Void Mirror.Websocket.WebsocketTransport::.ctor()
extern void WebsocketTransport__ctor_m3DD487A8D9F797018059B043417A263B306EF79F (void);
// 0x0000002F System.Boolean Mirror.Websocket.WebsocketTransport::Available()
extern void WebsocketTransport_Available_mC270DB1155039A2E3953188148E2EB7F4065940C (void);
// 0x00000030 System.Void Mirror.Websocket.WebsocketTransport::OnEnable()
extern void WebsocketTransport_OnEnable_m5AF02B186A17F335DE61D3205B1D514415A966C3 (void);
// 0x00000031 System.Void Mirror.Websocket.WebsocketTransport::OnDisable()
extern void WebsocketTransport_OnDisable_mBEFEE2168D7B13E0AD0CC2C0678EDB79AE6483F4 (void);
// 0x00000032 System.Void Mirror.Websocket.WebsocketTransport::LateUpdate()
extern void WebsocketTransport_LateUpdate_m7F8E32F870497BDBB02467215AE8E2B5D0D2D142 (void);
// 0x00000033 System.Boolean Mirror.Websocket.WebsocketTransport::ClientConnected()
extern void WebsocketTransport_ClientConnected_m562D8952B342CA329472F3AE9188279A579B2E50 (void);
// 0x00000034 System.Void Mirror.Websocket.WebsocketTransport::ClientConnect(System.String)
extern void WebsocketTransport_ClientConnect_m81F82FA4D1B93ED99FAAAAA6C8632F7348587CE3 (void);
// 0x00000035 System.Void Mirror.Websocket.WebsocketTransport::ClientConnect(System.Uri)
extern void WebsocketTransport_ClientConnect_m3F2C69FEC90EC6D5F0831684B158012ADC811335 (void);
// 0x00000036 System.Boolean Mirror.Websocket.WebsocketTransport::ClientSend(System.Int32,System.ArraySegment`1<System.Byte>)
extern void WebsocketTransport_ClientSend_mA1DB36577061E1DCB47D8FB790B5348C0CF7CC44 (void);
// 0x00000037 System.Void Mirror.Websocket.WebsocketTransport::ClientDisconnect()
extern void WebsocketTransport_ClientDisconnect_mFFE53BC951D9607A2203D9A9D5B2DEB13E7CE29B (void);
// 0x00000038 System.Uri Mirror.Websocket.WebsocketTransport::ServerUri()
extern void WebsocketTransport_ServerUri_m6A0974DA5551740C7CBA07D9A1DC27CC2252AC50 (void);
// 0x00000039 System.Boolean Mirror.Websocket.WebsocketTransport::ServerActive()
extern void WebsocketTransport_ServerActive_mDADF3F277D036894462C61C9DD93FF022A812279 (void);
// 0x0000003A System.Void Mirror.Websocket.WebsocketTransport::ServerStart()
extern void WebsocketTransport_ServerStart_m9A871BE7B820229D805962BAD9F5F0AAA4D9F7F4 (void);
// 0x0000003B System.Boolean Mirror.Websocket.WebsocketTransport::ServerSend(System.Collections.Generic.List`1<System.Int32>,System.Int32,System.ArraySegment`1<System.Byte>)
extern void WebsocketTransport_ServerSend_m11CDEC7944421F71CEC933D53B35DD64BE0487E9 (void);
// 0x0000003C System.Boolean Mirror.Websocket.WebsocketTransport::ServerDisconnect(System.Int32)
extern void WebsocketTransport_ServerDisconnect_mA153312836154A36F7419488180461881B0F9318 (void);
// 0x0000003D System.String Mirror.Websocket.WebsocketTransport::ServerGetClientAddress(System.Int32)
extern void WebsocketTransport_ServerGetClientAddress_mD3DFB611C79B4D139574B07AD6759FC357C71345 (void);
// 0x0000003E System.Void Mirror.Websocket.WebsocketTransport::ServerStop()
extern void WebsocketTransport_ServerStop_m0788B8E6EC75DC76482F1C27465B23612AC98CC2 (void);
// 0x0000003F System.Void Mirror.Websocket.WebsocketTransport::Shutdown()
extern void WebsocketTransport_Shutdown_m2A7DAC876FB630DF87AA0CD94E52CFDB73E5AD32 (void);
// 0x00000040 System.Int32 Mirror.Websocket.WebsocketTransport::GetMaxPacketSize(System.Int32)
extern void WebsocketTransport_GetMaxPacketSize_mF5B268697AB75A5C63B30812035A7FC1784859BC (void);
// 0x00000041 System.String Mirror.Websocket.WebsocketTransport::ToString()
extern void WebsocketTransport_ToString_mE0A9C76DEF4007E0C1697C880BE361235F2156B7 (void);
// 0x00000042 System.Void Mirror.Websocket.WebsocketTransport::<.ctor>b__10_0(System.Int32)
extern void WebsocketTransport_U3C_ctorU3Eb__10_0_m1F3CF64F3B13DDD9D9255556C2A517063DF897AF (void);
// 0x00000043 System.Void Mirror.Websocket.WebsocketTransport::<.ctor>b__10_1(System.Int32)
extern void WebsocketTransport_U3C_ctorU3Eb__10_1_mFD2D7B43CFF5F9541B769286136C50C71E127C44 (void);
// 0x00000044 System.Void Mirror.Websocket.WebsocketTransport::<.ctor>b__10_2(System.Int32,System.ArraySegment`1<System.Byte>)
extern void WebsocketTransport_U3C_ctorU3Eb__10_2_m8656C9AE6DE739062CC9E137B28F11614BF92879 (void);
// 0x00000045 System.Void Mirror.Websocket.WebsocketTransport::<.ctor>b__10_3(System.Int32,System.Exception)
extern void WebsocketTransport_U3C_ctorU3Eb__10_3_m0B13291B9C6A84F0A36B0234CB68FA506C687DC6 (void);
// 0x00000046 System.Void Mirror.Websocket.WebsocketTransport::<.ctor>b__10_4()
extern void WebsocketTransport_U3C_ctorU3Eb__10_4_m652B3E1563CB457B619B4ADA946E0841700351B8 (void);
// 0x00000047 System.Void Mirror.Websocket.WebsocketTransport::<.ctor>b__10_5()
extern void WebsocketTransport_U3C_ctorU3Eb__10_5_m6CA1AB1192EFE316A67F74197A850109DAC37EE8 (void);
// 0x00000048 System.Void Mirror.Websocket.WebsocketTransport::<.ctor>b__10_6(System.ArraySegment`1<System.Byte>)
extern void WebsocketTransport_U3C_ctorU3Eb__10_6_m86D17BDCB327CB584314E5A6ED100ABDC33BF9B4 (void);
// 0x00000049 System.Void Mirror.Websocket.WebsocketTransport::<.ctor>b__10_7(System.Exception)
extern void WebsocketTransport_U3C_ctorU3Eb__10_7_mD5E8E57DD19F838DE95A22C648BADC4F465563B1 (void);
// 0x0000004A System.Void Mirror.Websocket.Client_<Connect>d__25::MoveNext()
extern void U3CConnectU3Ed__25_MoveNext_mB6EF83C089C8BB955EA4A569042343A0819A179F_AdjustorThunk (void);
// 0x0000004B System.Void Mirror.Websocket.Client_<Connect>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CConnectU3Ed__25_SetStateMachine_m10F7D69225B662CE2607387DE5B9A0D88D44CA11_AdjustorThunk (void);
// 0x0000004C System.Void Mirror.Websocket.Client_<ReceiveLoop>d__27::MoveNext()
extern void U3CReceiveLoopU3Ed__27_MoveNext_mF7CBF9194A9E453183AEFCDF3BF384019D8B77F1_AdjustorThunk (void);
// 0x0000004D System.Void Mirror.Websocket.Client_<ReceiveLoop>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReceiveLoopU3Ed__27_SetStateMachine_mB587866809D49423AF726DAE3FA10623BAD8A818_AdjustorThunk (void);
// 0x0000004E System.Void Mirror.Websocket.Client_<WaitForEnabledAsync>d__28::MoveNext()
extern void U3CWaitForEnabledAsyncU3Ed__28_MoveNext_mC2E7B28722056A94360F2CC39F8E85E68D89D435_AdjustorThunk (void);
// 0x0000004F System.Void Mirror.Websocket.Client_<WaitForEnabledAsync>d__28::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWaitForEnabledAsyncU3Ed__28_SetStateMachine_mB243656D517D49737908A9F24CA8F3B194A70372_AdjustorThunk (void);
// 0x00000050 System.Void Mirror.Websocket.Client_<ReadFrames>d__30::MoveNext()
extern void U3CReadFramesU3Ed__30_MoveNext_mC907BF3A7B55715AF36960ED5BE496DC23A721A8_AdjustorThunk (void);
// 0x00000051 System.Void Mirror.Websocket.Client_<ReadFrames>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadFramesU3Ed__30_SetStateMachine_mD3733888F20E0FDB6D341C791183BC6A8CFD7109_AdjustorThunk (void);
// 0x00000052 System.Void Mirror.Websocket.Client_<Send>d__32::MoveNext()
extern void U3CSendU3Ed__32_MoveNext_m4D6E8F6B48744E8DD2670165F377679C468411E9_AdjustorThunk (void);
// 0x00000053 System.Void Mirror.Websocket.Client_<Send>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendU3Ed__32_SetStateMachine_m10CD8C134840DF16C4E60544DB5B444AEC8E721F_AdjustorThunk (void);
// 0x00000054 System.Void Mirror.Websocket.Server_SslConfiguration::.ctor()
extern void SslConfiguration__ctor_mD07A084BF31BECE1B11352EE5A974B6B5AE200DA (void);
// 0x00000055 System.Void Mirror.Websocket.Server_<Listen>d__26::MoveNext()
extern void U3CListenU3Ed__26_MoveNext_m4FA9E88D9DA38240A9E4EE570951DC315302BA22_AdjustorThunk (void);
// 0x00000056 System.Void Mirror.Websocket.Server_<Listen>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CListenU3Ed__26_SetStateMachine_m90BCB3279236193C8F9698A64C3320013F789187_AdjustorThunk (void);
// 0x00000057 System.Void Mirror.Websocket.Server_<ProcessTcpClient>d__27::MoveNext()
extern void U3CProcessTcpClientU3Ed__27_MoveNext_m963C89E717957799F4B7934C50F65AE486E323AB_AdjustorThunk (void);
// 0x00000058 System.Void Mirror.Websocket.Server_<ProcessTcpClient>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CProcessTcpClientU3Ed__27_SetStateMachine_m72F8EE6B9B8687ADAF7E4CCE20B8B21E407EAFFE_AdjustorThunk (void);
// 0x00000059 System.Void Mirror.Websocket.Server_<ReceiveLoopAsync>d__30::MoveNext()
extern void U3CReceiveLoopAsyncU3Ed__30_MoveNext_mA5D6EA89D39727C755339394824FE18C5BE536B9_AdjustorThunk (void);
// 0x0000005A System.Void Mirror.Websocket.Server_<ReceiveLoopAsync>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReceiveLoopAsyncU3Ed__30_SetStateMachine_mFBA210D29F252A588485FF0524ABEA410CFEA4EE_AdjustorThunk (void);
// 0x0000005B System.Void Mirror.Websocket.Server_<WaitForEnabledAsync>d__31::MoveNext()
extern void U3CWaitForEnabledAsyncU3Ed__31_MoveNext_m8E279D04A76ACEB6002AFCC3A95A7EAE8D23CB4A_AdjustorThunk (void);
// 0x0000005C System.Void Mirror.Websocket.Server_<WaitForEnabledAsync>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWaitForEnabledAsyncU3Ed__31_SetStateMachine_m08A384B32C33EA58E06C551124488DD6B2CDFDE7_AdjustorThunk (void);
// 0x0000005D System.Void Mirror.Websocket.Server_<ReadFrames>d__32::MoveNext()
extern void U3CReadFramesU3Ed__32_MoveNext_m4159606010F34266719F4D732147E8A0145C16BD_AdjustorThunk (void);
// 0x0000005E System.Void Mirror.Websocket.Server_<ReadFrames>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadFramesU3Ed__32_SetStateMachine_m82ADBFD7069B36AD1498FCBA8408CB4880EB7C27_AdjustorThunk (void);
// 0x0000005F System.Void Mirror.Websocket.Server_<Send>d__34::MoveNext()
extern void U3CSendU3Ed__34_MoveNext_mF972D486304D5CB5D2E746692A44C71DCACB9CC2_AdjustorThunk (void);
// 0x00000060 System.Void Mirror.Websocket.Server_<Send>d__34::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendU3Ed__34_SetStateMachine_mFBB4BFEBC0B7E792C4EF5B36F92E2CF40919DC9D_AdjustorThunk (void);
static Il2CppMethodPointer s_methodPointers[96] = 
{
	Client_add_Connected_mACCA2AADA7BBDA2D4843E4AF22BFF3211F010065,
	Client_remove_Connected_mF7DD10E52FE0D9E3074B1CEE3977D4429B382869,
	Client_add_ReceivedData_m4361004BA0E3D603EBA7641EEF8876A0914DDA0C,
	Client_remove_ReceivedData_m1B00732821B9BEF2FBF4FC7337F44A7D95B9A64A,
	Client_add_Disconnected_mAD9D7A58BF25BC8F7E0AD7F621046DEB52CFEEBC,
	Client_remove_Disconnected_m5F02E4179E2EDD55A97A7C30084DC67950DD9F18,
	Client_add_ReceivedError_m3B724A14ED126295E70C31BB7D35D09F152AD181,
	Client_remove_ReceivedError_m9C532F682BEB37DECC9484742FBE12B41A912DA7,
	Client_get_Connecting_m5F34C29C8B056FF7D084B9F25D05E672C224A754,
	Client_set_Connecting_m6C8BF334A0329CF575801FCD2A54EB563DEBB067,
	Client_get_IsConnected_m12F7E826588326B76721F2406BA67AF8D5D8385C,
	Client_set_IsConnected_mBB55DDA0BE02E4F5EEB4984325F9316DAD093ED0,
	Client_Connect_m5BA0C1DEA3A6A6B01AA02077C54C1DF125273418,
	Client_ReceiveLoop_mA3AE60D98D694CE288E7D4AE5DD129F05E66E311,
	Client_WaitForEnabledAsync_mAC3FC6B80472369C0DE634C6F4F0D03F0576108E,
	Client_ProcessClientMessage_mE5E7473DBD493874CF3D7FED1241C2848C910C22,
	Client_ReadFrames_m22309959B3BFF3BA307FA2780A2959A0CE45AE34,
	Client_Disconnect_mF24A0D258867DB077425DF743BB87AF41D25EFD5,
	Client_Send_m9692EAC34C32B531EEE85FCED8A00E6DFC42870F,
	Client_ToString_mFE1776E11D54BB50E81029C17C20234C2C9710BA,
	Client__ctor_m42E63227C99C34CC2E7E4E6D6536319C7DEBBAD2,
	Server_add_Connected_m4342C9ED9613025238E4DEFA4559B6AE26EF8396,
	Server_remove_Connected_m733A0B1785E43E61896E6B304B7D3BE0FB2E9BB0,
	Server_add_ReceivedData_m6E0108803A83A73550C36956E254CCEBC032D281,
	Server_remove_ReceivedData_m4CBF1CA4FE5748C99DBA59D67E54842B66DF0AB2,
	Server_add_Disconnected_m32F95F3088EACC6A93354D15432456DEEBFDB7FA,
	Server_remove_Disconnected_m334563E8670891A8F8762F5DDA1EA53CAFD386DD,
	Server_add_ReceivedError_m8986335D892E101107DF4875E47347FC49F0B404,
	Server_remove_ReceivedError_m87DCBE6A541F77301BCF09E7FA2D3DCB15508E2B,
	Server_NextConnectionId_m32A28CFE748C0C99415B092CE085715B7D9D5C12,
	Server_get_Active_mEFF0489487C9B87D76882A991E4C007AE7CD046E,
	Server_GetClient_m74C3BFEB1E99237E8C819B735680A46BD061B648,
	Server_Listen_mAD1108A3E37B37CEE1F422888B21F447F9366A23,
	Server_ProcessTcpClient_m6569D57812504117306685CEF4962C1AFE824E61,
	Server_CertVerificationCallback_m0DD64D114895F7434AE0BD9DF632817A4F9C115B,
	Server_ReceiveLoopAsync_mC3A1139190529AAF3F985717DBAC7AC564AF7113,
	Server_WaitForEnabledAsync_mF588D4DA07F4D3EE99CC208C2C36F8330ED3FFD1,
	Server_ReadFrames_m51BB74FF9F2C970D7BFFE252E7027D5465D8A462,
	Server_Stop_mD2F1F3C6AC81CD766CA195400CA32A5F1C2F6006,
	Server_Send_m7B25BFF57509D49F13515DA887E5F66C26CFA7AA,
	Server_GetClientAddress_mEA8E4879A90A9225BF452A8657927951798874CC,
	Server_Disconnect_m1F224548071798C2E3ED91FA624464595E811827,
	Server_ToString_mE62097BF1B6990D35D893375EBD1459ED5A42E10,
	Server__ctor_m967F055DF7F8316510B81B71F6CAA740AADDD260,
	Server__cctor_mDEAA8D4E1CA947A54AE1D5F630D020EF75844EA3,
	WebsocketTransport__ctor_m3DD487A8D9F797018059B043417A263B306EF79F,
	WebsocketTransport_Available_mC270DB1155039A2E3953188148E2EB7F4065940C,
	WebsocketTransport_OnEnable_m5AF02B186A17F335DE61D3205B1D514415A966C3,
	WebsocketTransport_OnDisable_mBEFEE2168D7B13E0AD0CC2C0678EDB79AE6483F4,
	WebsocketTransport_LateUpdate_m7F8E32F870497BDBB02467215AE8E2B5D0D2D142,
	WebsocketTransport_ClientConnected_m562D8952B342CA329472F3AE9188279A579B2E50,
	WebsocketTransport_ClientConnect_m81F82FA4D1B93ED99FAAAAA6C8632F7348587CE3,
	WebsocketTransport_ClientConnect_m3F2C69FEC90EC6D5F0831684B158012ADC811335,
	WebsocketTransport_ClientSend_mA1DB36577061E1DCB47D8FB790B5348C0CF7CC44,
	WebsocketTransport_ClientDisconnect_mFFE53BC951D9607A2203D9A9D5B2DEB13E7CE29B,
	WebsocketTransport_ServerUri_m6A0974DA5551740C7CBA07D9A1DC27CC2252AC50,
	WebsocketTransport_ServerActive_mDADF3F277D036894462C61C9DD93FF022A812279,
	WebsocketTransport_ServerStart_m9A871BE7B820229D805962BAD9F5F0AAA4D9F7F4,
	WebsocketTransport_ServerSend_m11CDEC7944421F71CEC933D53B35DD64BE0487E9,
	WebsocketTransport_ServerDisconnect_mA153312836154A36F7419488180461881B0F9318,
	WebsocketTransport_ServerGetClientAddress_mD3DFB611C79B4D139574B07AD6759FC357C71345,
	WebsocketTransport_ServerStop_m0788B8E6EC75DC76482F1C27465B23612AC98CC2,
	WebsocketTransport_Shutdown_m2A7DAC876FB630DF87AA0CD94E52CFDB73E5AD32,
	WebsocketTransport_GetMaxPacketSize_mF5B268697AB75A5C63B30812035A7FC1784859BC,
	WebsocketTransport_ToString_mE0A9C76DEF4007E0C1697C880BE361235F2156B7,
	WebsocketTransport_U3C_ctorU3Eb__10_0_m1F3CF64F3B13DDD9D9255556C2A517063DF897AF,
	WebsocketTransport_U3C_ctorU3Eb__10_1_mFD2D7B43CFF5F9541B769286136C50C71E127C44,
	WebsocketTransport_U3C_ctorU3Eb__10_2_m8656C9AE6DE739062CC9E137B28F11614BF92879,
	WebsocketTransport_U3C_ctorU3Eb__10_3_m0B13291B9C6A84F0A36B0234CB68FA506C687DC6,
	WebsocketTransport_U3C_ctorU3Eb__10_4_m652B3E1563CB457B619B4ADA946E0841700351B8,
	WebsocketTransport_U3C_ctorU3Eb__10_5_m6CA1AB1192EFE316A67F74197A850109DAC37EE8,
	WebsocketTransport_U3C_ctorU3Eb__10_6_m86D17BDCB327CB584314E5A6ED100ABDC33BF9B4,
	WebsocketTransport_U3C_ctorU3Eb__10_7_mD5E8E57DD19F838DE95A22C648BADC4F465563B1,
	U3CConnectU3Ed__25_MoveNext_mB6EF83C089C8BB955EA4A569042343A0819A179F_AdjustorThunk,
	U3CConnectU3Ed__25_SetStateMachine_m10F7D69225B662CE2607387DE5B9A0D88D44CA11_AdjustorThunk,
	U3CReceiveLoopU3Ed__27_MoveNext_mF7CBF9194A9E453183AEFCDF3BF384019D8B77F1_AdjustorThunk,
	U3CReceiveLoopU3Ed__27_SetStateMachine_mB587866809D49423AF726DAE3FA10623BAD8A818_AdjustorThunk,
	U3CWaitForEnabledAsyncU3Ed__28_MoveNext_mC2E7B28722056A94360F2CC39F8E85E68D89D435_AdjustorThunk,
	U3CWaitForEnabledAsyncU3Ed__28_SetStateMachine_mB243656D517D49737908A9F24CA8F3B194A70372_AdjustorThunk,
	U3CReadFramesU3Ed__30_MoveNext_mC907BF3A7B55715AF36960ED5BE496DC23A721A8_AdjustorThunk,
	U3CReadFramesU3Ed__30_SetStateMachine_mD3733888F20E0FDB6D341C791183BC6A8CFD7109_AdjustorThunk,
	U3CSendU3Ed__32_MoveNext_m4D6E8F6B48744E8DD2670165F377679C468411E9_AdjustorThunk,
	U3CSendU3Ed__32_SetStateMachine_m10CD8C134840DF16C4E60544DB5B444AEC8E721F_AdjustorThunk,
	SslConfiguration__ctor_mD07A084BF31BECE1B11352EE5A974B6B5AE200DA,
	U3CListenU3Ed__26_MoveNext_m4FA9E88D9DA38240A9E4EE570951DC315302BA22_AdjustorThunk,
	U3CListenU3Ed__26_SetStateMachine_m90BCB3279236193C8F9698A64C3320013F789187_AdjustorThunk,
	U3CProcessTcpClientU3Ed__27_MoveNext_m963C89E717957799F4B7934C50F65AE486E323AB_AdjustorThunk,
	U3CProcessTcpClientU3Ed__27_SetStateMachine_m72F8EE6B9B8687ADAF7E4CCE20B8B21E407EAFFE_AdjustorThunk,
	U3CReceiveLoopAsyncU3Ed__30_MoveNext_mA5D6EA89D39727C755339394824FE18C5BE536B9_AdjustorThunk,
	U3CReceiveLoopAsyncU3Ed__30_SetStateMachine_mFBA210D29F252A588485FF0524ABEA410CFEA4EE_AdjustorThunk,
	U3CWaitForEnabledAsyncU3Ed__31_MoveNext_m8E279D04A76ACEB6002AFCC3A95A7EAE8D23CB4A_AdjustorThunk,
	U3CWaitForEnabledAsyncU3Ed__31_SetStateMachine_m08A384B32C33EA58E06C551124488DD6B2CDFDE7_AdjustorThunk,
	U3CReadFramesU3Ed__32_MoveNext_m4159606010F34266719F4D732147E8A0145C16BD_AdjustorThunk,
	U3CReadFramesU3Ed__32_SetStateMachine_m82ADBFD7069B36AD1498FCBA8408CB4880EB7C27_AdjustorThunk,
	U3CSendU3Ed__34_MoveNext_mF972D486304D5CB5D2E746692A44C71DCACB9CC2_AdjustorThunk,
	U3CSendU3Ed__34_SetStateMachine_mFBB4BFEBC0B7E792C4EF5B36F92E2CF40919DC9D_AdjustorThunk,
};
static const int32_t s_InvokerIndices[96] = 
{
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	89,
	31,
	89,
	31,
	26,
	1328,
	14,
	89,
	215,
	23,
	2210,
	14,
	23,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	106,
	89,
	34,
	34,
	1328,
	1102,
	1328,
	14,
	2640,
	23,
	2641,
	34,
	30,
	14,
	23,
	3,
	23,
	89,
	23,
	23,
	23,
	89,
	26,
	26,
	2276,
	23,
	14,
	89,
	23,
	2277,
	30,
	34,
	23,
	23,
	37,
	14,
	32,
	32,
	2641,
	62,
	23,
	23,
	2210,
	26,
	23,
	26,
	23,
	26,
	23,
	26,
	23,
	26,
	23,
	26,
	23,
	23,
	26,
	23,
	26,
	23,
	26,
	23,
	26,
	23,
	26,
	23,
	26,
};
extern const Il2CppCodeGenModule g_Mirror_WebsocketCodeGenModule;
const Il2CppCodeGenModule g_Mirror_WebsocketCodeGenModule = 
{
	"Mirror.Websocket.dll",
	96,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
};
