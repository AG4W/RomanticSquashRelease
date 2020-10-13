#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Void Ninja.WebSockets.BufferPool::.ctor()
extern void BufferPool__ctor_m7AD0FF8A3027B532CBD752C6C56B7CB2B78ED94C (void);
// 0x00000002 System.Void Ninja.WebSockets.BufferPool::.ctor(System.Int32)
extern void BufferPool__ctor_m70FAD3F2DA0391E267558B5E36D5E97B10F9BDF3 (void);
// 0x00000003 System.IO.MemoryStream Ninja.WebSockets.BufferPool::GetBuffer()
extern void BufferPool_GetBuffer_m85A96E0CF0033684F1D59BADE82EFE68846CE6DF (void);
// 0x00000004 System.Void Ninja.WebSockets.BufferPool::ReturnBuffer(System.Byte[])
extern void BufferPool_ReturnBuffer_m93D682CB009427D5FBBA66D6DA4F735E86C4DDE9 (void);
// 0x00000005 System.String Ninja.WebSockets.HttpHelper::CalculateWebSocketKey()
extern void HttpHelper_CalculateWebSocketKey_m7E68BCD6B6431427E5D24082305055393AE30E6D (void);
// 0x00000006 System.String Ninja.WebSockets.HttpHelper::ComputeSocketAcceptString(System.String)
extern void HttpHelper_ComputeSocketAcceptString_m781D21403B73D23B01A748BBFA952F04AAD81F8F (void);
// 0x00000007 System.Threading.Tasks.Task`1<System.String> Ninja.WebSockets.HttpHelper::ReadHttpHeaderAsync(System.IO.Stream,System.Threading.CancellationToken)
extern void HttpHelper_ReadHttpHeaderAsync_mCD37A79187BFCB48CC99DF64A84779D9B2F12456 (void);
// 0x00000008 System.Boolean Ninja.WebSockets.HttpHelper::IsWebSocketUpgradeRequest(System.String)
extern void HttpHelper_IsWebSocketUpgradeRequest_m664A0F3AED6EEA08E84D992C4CB93B82E20E8690 (void);
// 0x00000009 System.String Ninja.WebSockets.HttpHelper::GetPathFromHeader(System.String)
extern void HttpHelper_GetPathFromHeader_m01ADE4D4550AEDA04F6F49ED65E385B5651D4724 (void);
// 0x0000000A System.Collections.Generic.IList`1<System.String> Ninja.WebSockets.HttpHelper::GetSubProtocols(System.String)
extern void HttpHelper_GetSubProtocols_m063C0C52E255DEBE0C22D74A1D8A0A1BCA9C1D9D (void);
// 0x0000000B System.String Ninja.WebSockets.HttpHelper::ReadHttpResponseCode(System.String)
extern void HttpHelper_ReadHttpResponseCode_m735C6ED28A76CB090C876113DCA47030302D2F69 (void);
// 0x0000000C System.Threading.Tasks.Task Ninja.WebSockets.HttpHelper::WriteHttpHeaderAsync(System.String,System.IO.Stream,System.Threading.CancellationToken)
extern void HttpHelper_WriteHttpHeaderAsync_m28684994B536871BCCC190FBE990B4E5F0B3E68D (void);
// 0x0000000D System.Void Ninja.WebSockets.HttpHelper::.ctor()
extern void HttpHelper__ctor_m53BCEBC7F8541BAF2D353FA622229CA50947E8A6 (void);
// 0x0000000E System.IO.MemoryStream Ninja.WebSockets.IBufferPool::GetBuffer()
// 0x0000000F System.Void Ninja.WebSockets.IPingPongManager::add_Pong(System.EventHandler`1<Ninja.WebSockets.PongEventArgs>)
// 0x00000010 System.Void Ninja.WebSockets.IPingPongManager::remove_Pong(System.EventHandler`1<Ninja.WebSockets.PongEventArgs>)
// 0x00000011 System.Threading.Tasks.Task Ninja.WebSockets.IPingPongManager::SendPing(System.ArraySegment`1<System.Byte>,System.Threading.CancellationToken)
// 0x00000012 System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket> Ninja.WebSockets.IWebSocketClientFactory::ConnectAsync(System.Uri,System.Threading.CancellationToken)
// 0x00000013 System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket> Ninja.WebSockets.IWebSocketClientFactory::ConnectAsync(System.Uri,Ninja.WebSockets.WebSocketClientOptions,System.Threading.CancellationToken)
// 0x00000014 System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket> Ninja.WebSockets.IWebSocketClientFactory::ConnectAsync(System.IO.Stream,System.String,Ninja.WebSockets.WebSocketClientOptions,System.Threading.CancellationToken)
// 0x00000015 System.Threading.Tasks.Task`1<Ninja.WebSockets.WebSocketHttpContext> Ninja.WebSockets.IWebSocketServerFactory::ReadHttpHeaderFromStreamAsync(System.Net.Sockets.TcpClient,System.IO.Stream,System.Threading.CancellationToken)
// 0x00000016 System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket> Ninja.WebSockets.IWebSocketServerFactory::AcceptWebSocketAsync(Ninja.WebSockets.WebSocketHttpContext,System.Threading.CancellationToken)
// 0x00000017 System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket> Ninja.WebSockets.IWebSocketServerFactory::AcceptWebSocketAsync(Ninja.WebSockets.WebSocketHttpContext,Ninja.WebSockets.WebSocketServerOptions,System.Threading.CancellationToken)
// 0x00000018 System.Void Ninja.WebSockets.PingPongManager::add_Pong(System.EventHandler`1<Ninja.WebSockets.PongEventArgs>)
extern void PingPongManager_add_Pong_mB9311BB2D18A9794C3312D7D9E41F73F3307F351 (void);
// 0x00000019 System.Void Ninja.WebSockets.PingPongManager::remove_Pong(System.EventHandler`1<Ninja.WebSockets.PongEventArgs>)
extern void PingPongManager_remove_Pong_m1380869DC53670087DAB678D7845C83102AC1C38 (void);
// 0x0000001A System.Void Ninja.WebSockets.PingPongManager::.ctor(System.Guid,System.Net.WebSockets.WebSocket,System.TimeSpan,System.Threading.CancellationToken)
extern void PingPongManager__ctor_m8C0186EFCF1C1C7434CF6A303CCABE80328FFA32 (void);
// 0x0000001B System.Threading.Tasks.Task Ninja.WebSockets.PingPongManager::SendPing(System.ArraySegment`1<System.Byte>,System.Threading.CancellationToken)
extern void PingPongManager_SendPing_m6814C157494C2C0C3AF8440D2271A59357D695AC (void);
// 0x0000001C System.Void Ninja.WebSockets.PingPongManager::OnPong(Ninja.WebSockets.PongEventArgs)
extern void PingPongManager_OnPong_mFC43B246061CF52A3244CD0449152E12D4E773BF (void);
// 0x0000001D System.Threading.Tasks.Task Ninja.WebSockets.PingPongManager::PingForever()
extern void PingPongManager_PingForever_m494AB5810B9031D5442769AF1D34C9F04301530C (void);
// 0x0000001E System.Void Ninja.WebSockets.PingPongManager::WebSocketImpl_Pong(System.Object,Ninja.WebSockets.PongEventArgs)
extern void PingPongManager_WebSocketImpl_Pong_mE849F9F40AE729F88BC26AACD562D5F56AFC2B35 (void);
// 0x0000001F System.ArraySegment`1<System.Byte> Ninja.WebSockets.PongEventArgs::get_Payload()
extern void PongEventArgs_get_Payload_m8B6C8EC39426F159D025241596E6CACBE3D28FD3 (void);
// 0x00000020 System.Void Ninja.WebSockets.PongEventArgs::set_Payload(System.ArraySegment`1<System.Byte>)
extern void PongEventArgs_set_Payload_m2E93E72B83DF07D31DB9AD61DDF89FB96CB083F8 (void);
// 0x00000021 System.Void Ninja.WebSockets.PongEventArgs::.ctor(System.ArraySegment`1<System.Byte>)
extern void PongEventArgs__ctor_m0C0CC7C53EEBA9D5FF52D9E4C67C55A00EA85E66 (void);
// 0x00000022 System.Void Ninja.WebSockets.WebSocketClientFactory::.ctor()
extern void WebSocketClientFactory__ctor_m6C114C9D54994D893749376A1AAAC93031A1E9C9 (void);
// 0x00000023 System.Void Ninja.WebSockets.WebSocketClientFactory::.ctor(System.Func`1<System.IO.MemoryStream>)
extern void WebSocketClientFactory__ctor_mDCC6338747AB684A9966BD3619251F2D8345E2B4 (void);
// 0x00000024 System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket> Ninja.WebSockets.WebSocketClientFactory::ConnectAsync(System.Uri,System.Threading.CancellationToken)
extern void WebSocketClientFactory_ConnectAsync_m6E8EAC949510295ECBCC91F013BF7E9ABCA45671 (void);
// 0x00000025 System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket> Ninja.WebSockets.WebSocketClientFactory::ConnectAsync(System.Uri,Ninja.WebSockets.WebSocketClientOptions,System.Threading.CancellationToken)
extern void WebSocketClientFactory_ConnectAsync_mEF633F9428473C6D21D022B7E7A1E68327DE7DE5 (void);
// 0x00000026 System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket> Ninja.WebSockets.WebSocketClientFactory::ConnectAsync(System.IO.Stream,System.String,Ninja.WebSockets.WebSocketClientOptions,System.Threading.CancellationToken)
extern void WebSocketClientFactory_ConnectAsync_m1461FD1FA25B276C1C99971360C2A264F4206620 (void);
// 0x00000027 System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket> Ninja.WebSockets.WebSocketClientFactory::ConnectAsync(System.Guid,System.IO.Stream,System.String,System.TimeSpan,System.String,System.Boolean,System.Threading.CancellationToken)
extern void WebSocketClientFactory_ConnectAsync_mE390D3A1AA0EA52EE757239D16F4B283A38C6D2A (void);
// 0x00000028 System.String Ninja.WebSockets.WebSocketClientFactory::GetSubProtocolFromHeader(System.String)
extern void WebSocketClientFactory_GetSubProtocolFromHeader_m2F9ED005B64A1AFC4A53CF6DD06570E1816A9CC0 (void);
// 0x00000029 System.Void Ninja.WebSockets.WebSocketClientFactory::ThrowIfInvalidAcceptString(System.Guid,System.String,System.String)
extern void WebSocketClientFactory_ThrowIfInvalidAcceptString_m5089D29FBE0184CC98B6F25E96E2BC5E5A3C31B7 (void);
// 0x0000002A System.Void Ninja.WebSockets.WebSocketClientFactory::ThrowIfInvalidResponseCode(System.String)
extern void WebSocketClientFactory_ThrowIfInvalidResponseCode_m248AFB216A68C2A3A5BF26E3DD6C28CAE34001B2 (void);
// 0x0000002B System.IO.Stream Ninja.WebSockets.WebSocketClientFactory::GetStream(System.Guid,System.Net.Sockets.TcpClient,System.Boolean,System.String)
extern void WebSocketClientFactory_GetStream_m28894EEEA289BA8E1B34FE726AB747752C4CC5B3 (void);
// 0x0000002C System.Boolean Ninja.WebSockets.WebSocketClientFactory::ValidateServerCertificate(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void WebSocketClientFactory_ValidateServerCertificate_mBF4108CFB23F8A36DA2F3AAE9FCC071D436E29FF (void);
// 0x0000002D System.String Ninja.WebSockets.WebSocketClientFactory::GetAdditionalHeaders(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void WebSocketClientFactory_GetAdditionalHeaders_mDE172BC4E36F8D7F1AADA2F95CC76E77D7BE9284 (void);
// 0x0000002E System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket> Ninja.WebSockets.WebSocketClientFactory::PerformHandshake(System.Guid,System.Uri,System.IO.Stream,Ninja.WebSockets.WebSocketClientOptions,System.Threading.CancellationToken)
extern void WebSocketClientFactory_PerformHandshake_mFDF0E947CDDAA783D752E0ACE50727530F3B9598 (void);
// 0x0000002F System.TimeSpan Ninja.WebSockets.WebSocketClientOptions::get_KeepAliveInterval()
extern void WebSocketClientOptions_get_KeepAliveInterval_mF33E58C3934EB06A582C918F0B6F2D03F64A84D9 (void);
// 0x00000030 System.Void Ninja.WebSockets.WebSocketClientOptions::set_KeepAliveInterval(System.TimeSpan)
extern void WebSocketClientOptions_set_KeepAliveInterval_mCAB2CAD8FB9380A449AB2491B0D31D77549557B8 (void);
// 0x00000031 System.Boolean Ninja.WebSockets.WebSocketClientOptions::get_NoDelay()
extern void WebSocketClientOptions_get_NoDelay_m1A5DC0818381289F64FFA96D849BF848FE91B50C (void);
// 0x00000032 System.Void Ninja.WebSockets.WebSocketClientOptions::set_NoDelay(System.Boolean)
extern void WebSocketClientOptions_set_NoDelay_mDDDAC044D0FAE24B660D9C30FF9B52A81236AA2C (void);
// 0x00000033 System.Collections.Generic.Dictionary`2<System.String,System.String> Ninja.WebSockets.WebSocketClientOptions::get_AdditionalHttpHeaders()
extern void WebSocketClientOptions_get_AdditionalHttpHeaders_m1501FEB5937607739A250696583F729D1D97FF55 (void);
// 0x00000034 System.Void Ninja.WebSockets.WebSocketClientOptions::set_AdditionalHttpHeaders(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void WebSocketClientOptions_set_AdditionalHttpHeaders_m65B1A2807A0C2C19C1ADD601612E341F2446C29C (void);
// 0x00000035 System.Boolean Ninja.WebSockets.WebSocketClientOptions::get_IncludeExceptionInCloseResponse()
extern void WebSocketClientOptions_get_IncludeExceptionInCloseResponse_mB2417E7CEDA4566FA765BF84803FC743974EA0D2 (void);
// 0x00000036 System.Void Ninja.WebSockets.WebSocketClientOptions::set_IncludeExceptionInCloseResponse(System.Boolean)
extern void WebSocketClientOptions_set_IncludeExceptionInCloseResponse_m04150AD32018E464B20742B249452C25521F26A7 (void);
// 0x00000037 System.String Ninja.WebSockets.WebSocketClientOptions::get_SecWebSocketExtensions()
extern void WebSocketClientOptions_get_SecWebSocketExtensions_m93A92426C1E05CBEEB12F162758086EBD9E0313C (void);
// 0x00000038 System.Void Ninja.WebSockets.WebSocketClientOptions::set_SecWebSocketExtensions(System.String)
extern void WebSocketClientOptions_set_SecWebSocketExtensions_m53D9BB5ABD474369F9512FF05ADD212E326AA384 (void);
// 0x00000039 System.String Ninja.WebSockets.WebSocketClientOptions::get_SecWebSocketProtocol()
extern void WebSocketClientOptions_get_SecWebSocketProtocol_m055A473969680C17A7C40E2A2918D66DF3155AAD (void);
// 0x0000003A System.Void Ninja.WebSockets.WebSocketClientOptions::set_SecWebSocketProtocol(System.String)
extern void WebSocketClientOptions_set_SecWebSocketProtocol_mB81FB9F2572A3DF086BF4B27DF15A1DF44AD95F3 (void);
// 0x0000003B System.Void Ninja.WebSockets.WebSocketClientOptions::.ctor()
extern void WebSocketClientOptions__ctor_mD213B28E275D504676C977B09E9DDFE8B32D4C0F (void);
// 0x0000003C System.Boolean Ninja.WebSockets.WebSocketHttpContext::get_IsWebSocketRequest()
extern void WebSocketHttpContext_get_IsWebSocketRequest_m9DA9D3F60E228253E42A1E062B0F188ECE777785 (void);
// 0x0000003D System.Void Ninja.WebSockets.WebSocketHttpContext::set_IsWebSocketRequest(System.Boolean)
extern void WebSocketHttpContext_set_IsWebSocketRequest_mF4845E2C9654D95F542200BEBD48EB565EDC68DD (void);
// 0x0000003E System.Collections.Generic.IList`1<System.String> Ninja.WebSockets.WebSocketHttpContext::get_WebSocketRequestedProtocols()
extern void WebSocketHttpContext_get_WebSocketRequestedProtocols_mC1AACED1D9C4A00CF2A35ACC0C91D55429C19740 (void);
// 0x0000003F System.Void Ninja.WebSockets.WebSocketHttpContext::set_WebSocketRequestedProtocols(System.Collections.Generic.IList`1<System.String>)
extern void WebSocketHttpContext_set_WebSocketRequestedProtocols_mE5EABD0920A4C9E8FA258BBF11AC827AA9051662 (void);
// 0x00000040 System.String Ninja.WebSockets.WebSocketHttpContext::get_HttpHeader()
extern void WebSocketHttpContext_get_HttpHeader_mA335DFD70D78A5B05790C66CE5057B518EDC41D0 (void);
// 0x00000041 System.Void Ninja.WebSockets.WebSocketHttpContext::set_HttpHeader(System.String)
extern void WebSocketHttpContext_set_HttpHeader_m8329AB8AF9F0840CF607F1ED1069362DB23FEFB3 (void);
// 0x00000042 System.String Ninja.WebSockets.WebSocketHttpContext::get_Path()
extern void WebSocketHttpContext_get_Path_m6E5060815658DE07986C05BB542D08770F5F0821 (void);
// 0x00000043 System.Void Ninja.WebSockets.WebSocketHttpContext::set_Path(System.String)
extern void WebSocketHttpContext_set_Path_mB176EA1BD724063308ABD35CD93981E834927DB5 (void);
// 0x00000044 System.IO.Stream Ninja.WebSockets.WebSocketHttpContext::get_Stream()
extern void WebSocketHttpContext_get_Stream_mF21C2A5E85A4D6F5FA64B619D91C9579BCB2FEF5 (void);
// 0x00000045 System.Void Ninja.WebSockets.WebSocketHttpContext::set_Stream(System.IO.Stream)
extern void WebSocketHttpContext_set_Stream_mC1D2F49C965ADE516E134CD2A50241E4BD18B8F6 (void);
// 0x00000046 System.Net.Sockets.TcpClient Ninja.WebSockets.WebSocketHttpContext::get_Client()
extern void WebSocketHttpContext_get_Client_mA4C5005D99B0D6D5A51CBFE2A5E1C92B79248776 (void);
// 0x00000047 System.Void Ninja.WebSockets.WebSocketHttpContext::set_Client(System.Net.Sockets.TcpClient)
extern void WebSocketHttpContext_set_Client_mC22AC13EBEF6D066C1EAF204F9319A515B682D57 (void);
// 0x00000048 System.Void Ninja.WebSockets.WebSocketHttpContext::.ctor(System.Boolean,System.Collections.Generic.IList`1<System.String>,System.String,System.String,System.Net.Sockets.TcpClient,System.IO.Stream)
extern void WebSocketHttpContext__ctor_m6E03EFA4585863D9B5FDA7B80ED695963B946E6D (void);
// 0x00000049 System.Void Ninja.WebSockets.WebSocketServerFactory::.ctor()
extern void WebSocketServerFactory__ctor_mC1B85E1FD4834824FE72580E479494CB4E095E67 (void);
// 0x0000004A System.Void Ninja.WebSockets.WebSocketServerFactory::.ctor(System.Func`1<System.IO.MemoryStream>)
extern void WebSocketServerFactory__ctor_mAD24FE4B9F66039B0C66E2DDC4C206E5DF5290E3 (void);
// 0x0000004B System.Threading.Tasks.Task`1<Ninja.WebSockets.WebSocketHttpContext> Ninja.WebSockets.WebSocketServerFactory::ReadHttpHeaderFromStreamAsync(System.Net.Sockets.TcpClient,System.IO.Stream,System.Threading.CancellationToken)
extern void WebSocketServerFactory_ReadHttpHeaderFromStreamAsync_m74CD1A7DCDBE5B00996A440D7FDED351F3BB302D (void);
// 0x0000004C System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket> Ninja.WebSockets.WebSocketServerFactory::AcceptWebSocketAsync(Ninja.WebSockets.WebSocketHttpContext,System.Threading.CancellationToken)
extern void WebSocketServerFactory_AcceptWebSocketAsync_mA4098E358DEC6ECCC344EA25FB9D1B4553CBAFD1 (void);
// 0x0000004D System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket> Ninja.WebSockets.WebSocketServerFactory::AcceptWebSocketAsync(Ninja.WebSockets.WebSocketHttpContext,Ninja.WebSockets.WebSocketServerOptions,System.Threading.CancellationToken)
extern void WebSocketServerFactory_AcceptWebSocketAsync_m320CD85E6B05F2A6553D4CC0E28C166BB2D3E8B9 (void);
// 0x0000004E System.Void Ninja.WebSockets.WebSocketServerFactory::CheckWebSocketVersion(System.String)
extern void WebSocketServerFactory_CheckWebSocketVersion_mE0348F6FC9B885DCEF38A3AA6E59CEFC6A671505 (void);
// 0x0000004F System.Threading.Tasks.Task Ninja.WebSockets.WebSocketServerFactory::PerformHandshakeAsync(System.Guid,System.String,System.String,System.IO.Stream,System.Threading.CancellationToken)
extern void WebSocketServerFactory_PerformHandshakeAsync_mF12A792C2067A3279435E60A567256EA279C64A0 (void);
// 0x00000050 System.TimeSpan Ninja.WebSockets.WebSocketServerOptions::get_KeepAliveInterval()
extern void WebSocketServerOptions_get_KeepAliveInterval_mC2D458CB417E07DFBD1DA3F4E833EFAD9268FC27 (void);
// 0x00000051 System.Void Ninja.WebSockets.WebSocketServerOptions::set_KeepAliveInterval(System.TimeSpan)
extern void WebSocketServerOptions_set_KeepAliveInterval_m5EA85441BAE66A0D55183DEA5BECDE32904101F8 (void);
// 0x00000052 System.Boolean Ninja.WebSockets.WebSocketServerOptions::get_IncludeExceptionInCloseResponse()
extern void WebSocketServerOptions_get_IncludeExceptionInCloseResponse_m9758F4B505F2F2784B4220888E4045211281ED87 (void);
// 0x00000053 System.Void Ninja.WebSockets.WebSocketServerOptions::set_IncludeExceptionInCloseResponse(System.Boolean)
extern void WebSocketServerOptions_set_IncludeExceptionInCloseResponse_m263297F39DD3982833AF4962709E8C7D51753860 (void);
// 0x00000054 System.String Ninja.WebSockets.WebSocketServerOptions::get_SubProtocol()
extern void WebSocketServerOptions_get_SubProtocol_mE11424329287E5D8526A64FB003BB35EB7267696 (void);
// 0x00000055 System.Void Ninja.WebSockets.WebSocketServerOptions::set_SubProtocol(System.String)
extern void WebSocketServerOptions_set_SubProtocol_mC7F3D7371EBD58E361DA11963F347E8B94A5B45D (void);
// 0x00000056 System.Void Ninja.WebSockets.WebSocketServerOptions::.ctor()
extern void WebSocketServerOptions__ctor_mB9269DB3C3EA0DC0F586BD7FCC176D0EF16FD8DB (void);
// 0x00000057 System.Threading.Tasks.Task Ninja.WebSockets.Internal.BinaryReaderWriter::ReadExactly(System.Int32,System.IO.Stream,System.ArraySegment`1<System.Byte>,System.Threading.CancellationToken)
extern void BinaryReaderWriter_ReadExactly_m6C19BB1E2C0FD796571D6DDEA1D78A5E2AFEAB4F (void);
// 0x00000058 System.Threading.Tasks.Task`1<System.UInt16> Ninja.WebSockets.Internal.BinaryReaderWriter::ReadUShortExactly(System.IO.Stream,System.Boolean,System.ArraySegment`1<System.Byte>,System.Threading.CancellationToken)
extern void BinaryReaderWriter_ReadUShortExactly_m341F4D9B1E3405C92A04315CB92BE2042D1BD1C3 (void);
// 0x00000059 System.Threading.Tasks.Task`1<System.UInt64> Ninja.WebSockets.Internal.BinaryReaderWriter::ReadULongExactly(System.IO.Stream,System.Boolean,System.ArraySegment`1<System.Byte>,System.Threading.CancellationToken)
extern void BinaryReaderWriter_ReadULongExactly_mB912DE5084D28BA7433CBC0ECD3972A749C238FA (void);
// 0x0000005A System.Threading.Tasks.Task`1<System.Int64> Ninja.WebSockets.Internal.BinaryReaderWriter::ReadLongExactly(System.IO.Stream,System.Boolean,System.ArraySegment`1<System.Byte>,System.Threading.CancellationToken)
extern void BinaryReaderWriter_ReadLongExactly_mF57395141618E9632B7EF6C0E35FEBB922F7BA12 (void);
// 0x0000005B System.Void Ninja.WebSockets.Internal.BinaryReaderWriter::WriteInt(System.Int32,System.IO.Stream,System.Boolean)
extern void BinaryReaderWriter_WriteInt_m11897500F8AA5053BEB30796E96C920B54C1FF3B (void);
// 0x0000005C System.Void Ninja.WebSockets.Internal.BinaryReaderWriter::WriteULong(System.UInt64,System.IO.Stream,System.Boolean)
extern void BinaryReaderWriter_WriteULong_m8CF26FCC822744730AE53E37C669FC1C6237037A (void);
// 0x0000005D System.Void Ninja.WebSockets.Internal.BinaryReaderWriter::WriteLong(System.Int64,System.IO.Stream,System.Boolean)
extern void BinaryReaderWriter_WriteLong_mC8913ACDDC45D8E7CEA0313A16C155FABEE4CD33 (void);
// 0x0000005E System.Void Ninja.WebSockets.Internal.BinaryReaderWriter::WriteUShort(System.UInt16,System.IO.Stream,System.Boolean)
extern void BinaryReaderWriter_WriteUShort_m8FDB91A7A57A630E4D9826AE992BB8955FAC728C (void);
// 0x0000005F System.Void Ninja.WebSockets.Internal.BinaryReaderWriter::.ctor()
extern void BinaryReaderWriter__ctor_m0DF840330DA1A146EAD74D8E32FD758F84D89935 (void);
// 0x00000060 System.Void Ninja.WebSockets.Internal.Events::ClientConnectingToIpAddress(System.Guid,System.String,System.Int32)
extern void Events_ClientConnectingToIpAddress_m50D7E668610F282A50C40FD298BBAA72E475DBB7 (void);
// 0x00000061 System.Void Ninja.WebSockets.Internal.Events::ClientConnectingToHost(System.Guid,System.String,System.Int32)
extern void Events_ClientConnectingToHost_mF5C2226C5C208772357EC6DC05C0AE8450B287D3 (void);
// 0x00000062 System.Void Ninja.WebSockets.Internal.Events::AttemtingToSecureSslConnection(System.Guid)
extern void Events_AttemtingToSecureSslConnection_mFB6E39B42C9A95EC1466ED153C9D0137C3E0DCEB (void);
// 0x00000063 System.Void Ninja.WebSockets.Internal.Events::ConnectionSecured(System.Guid)
extern void Events_ConnectionSecured_m41D11992B51E0E2CC63D240CD3680AFA017179A7 (void);
// 0x00000064 System.Void Ninja.WebSockets.Internal.Events::ConnectionNotSecure(System.Guid)
extern void Events_ConnectionNotSecure_m62F829C34C6F5D5AEAD0C37C3847C7F921A268B1 (void);
// 0x00000065 System.Void Ninja.WebSockets.Internal.Events::SslCertificateError(System.Net.Security.SslPolicyErrors)
extern void Events_SslCertificateError_m1F5CFD8DB7E2C628DCF4AD0F74B6DAE283441B72 (void);
// 0x00000066 System.Void Ninja.WebSockets.Internal.Events::HandshakeSent(System.Guid,System.String)
extern void Events_HandshakeSent_m8B254748872B4243773DA72D1DEC12CAFB3B9F5B (void);
// 0x00000067 System.Void Ninja.WebSockets.Internal.Events::ReadingHttpResponse(System.Guid)
extern void Events_ReadingHttpResponse_m5AEDD47CF8490C85202CF71B4A15AB29AB9114E4 (void);
// 0x00000068 System.Void Ninja.WebSockets.Internal.Events::ReadHttpResponseError(System.Guid,System.String)
extern void Events_ReadHttpResponseError_mD304E26D926AD9F4F1E3A83B59314DF2365CED2B (void);
// 0x00000069 System.Void Ninja.WebSockets.Internal.Events::InvalidHttpResponseCode(System.Guid,System.String)
extern void Events_InvalidHttpResponseCode_m73CEA63F2454145256E58772A504C7D3FC51CD4E (void);
// 0x0000006A System.Void Ninja.WebSockets.Internal.Events::HandshakeFailure(System.Guid,System.String)
extern void Events_HandshakeFailure_m54DF4A354D2E51A57E8CABBC67DDC726F43885BA (void);
// 0x0000006B System.Void Ninja.WebSockets.Internal.Events::ClientHandshakeSuccess(System.Guid)
extern void Events_ClientHandshakeSuccess_m68F36EC56056A2608547E0C1BC9189E00E2870AA (void);
// 0x0000006C System.Void Ninja.WebSockets.Internal.Events::ServerHandshakeSuccess(System.Guid)
extern void Events_ServerHandshakeSuccess_m5A1C1D6FF8AB89C902418FC61ED6C56C30318109 (void);
// 0x0000006D System.Void Ninja.WebSockets.Internal.Events::AcceptWebSocketStarted(System.Guid)
extern void Events_AcceptWebSocketStarted_m3289E9E308103DDEE8A857845BD7C991A44DC6EC (void);
// 0x0000006E System.Void Ninja.WebSockets.Internal.Events::SendingHandshakeResponse(System.Guid,System.String)
extern void Events_SendingHandshakeResponse_m898D7063710D58FAF6B201E76A268F922F26C1D4 (void);
// 0x0000006F System.Void Ninja.WebSockets.Internal.Events::WebSocketVersionNotSupported(System.Guid,System.String)
extern void Events_WebSocketVersionNotSupported_m9C7C8BFECA85D7D9C8255D9EDE2A45E047B5FE79 (void);
// 0x00000070 System.Void Ninja.WebSockets.Internal.Events::BadRequest(System.Guid,System.String)
extern void Events_BadRequest_m2AF132C6A7C8B81E5090B6AB78D6DFBFB753ADD5 (void);
// 0x00000071 System.Void Ninja.WebSockets.Internal.Events::UsePerMessageDeflate(System.Guid)
extern void Events_UsePerMessageDeflate_m39C223B5197CE2D214722A11164E916745DA0D7E (void);
// 0x00000072 System.Void Ninja.WebSockets.Internal.Events::NoMessageCompression(System.Guid)
extern void Events_NoMessageCompression_mBA1FD8CB028A00857C627BDFF2C15810DB09F87A (void);
// 0x00000073 System.Void Ninja.WebSockets.Internal.Events::KeepAliveIntervalZero(System.Guid)
extern void Events_KeepAliveIntervalZero_m9954B66D647EF01AC5A00FDA75E31142BF2F1A29 (void);
// 0x00000074 System.Void Ninja.WebSockets.Internal.Events::PingPongManagerStarted(System.Guid,System.Int32)
extern void Events_PingPongManagerStarted_m3A23C1B147BFA3EEBC7161E4830D45541FE5B9DF (void);
// 0x00000075 System.Void Ninja.WebSockets.Internal.Events::PingPongManagerEnded(System.Guid)
extern void Events_PingPongManagerEnded_m55D62DD98D1BACABB6A20F515A7460F0BD541656 (void);
// 0x00000076 System.Void Ninja.WebSockets.Internal.Events::KeepAliveIntervalExpired(System.Guid,System.Int32)
extern void Events_KeepAliveIntervalExpired_m2ABB09C3B5E23A96B23D203C52778306BA9B577C (void);
// 0x00000077 System.Void Ninja.WebSockets.Internal.Events::CloseOutputAutoTimeout(System.Guid,System.Net.WebSockets.WebSocketCloseStatus,System.String,System.String)
extern void Events_CloseOutputAutoTimeout_mC45901D3BF8524F2D3CB474E26A9584F337B5BD2 (void);
// 0x00000078 System.Void Ninja.WebSockets.Internal.Events::CloseOutputAutoTimeoutCancelled(System.Guid,System.Int32,System.Net.WebSockets.WebSocketCloseStatus,System.String,System.String)
extern void Events_CloseOutputAutoTimeoutCancelled_m36D46707EFA0A3F4008C2C6C35B98682AC3013B9 (void);
// 0x00000079 System.Void Ninja.WebSockets.Internal.Events::CloseOutputAutoTimeoutError(System.Guid,System.String,System.Net.WebSockets.WebSocketCloseStatus,System.String,System.String)
extern void Events_CloseOutputAutoTimeoutError_mBEA2888127EEA47DA9E2D8AE911175EFDBB16C74 (void);
// 0x0000007A System.Void Ninja.WebSockets.Internal.Events::TryGetBufferNotSupported(System.Guid,System.String)
extern void Events_TryGetBufferNotSupported_m6A19325384235DFDFD99F7507A0D103C15F2741A (void);
// 0x0000007B System.Void Ninja.WebSockets.Internal.Events::SendingFrame(System.Guid,Ninja.WebSockets.Internal.WebSocketOpCode,System.Boolean,System.Int32,System.Boolean)
extern void Events_SendingFrame_mF5EA21272F531E6AE783BF8FE38B8A3BEFA2345D (void);
// 0x0000007C System.Void Ninja.WebSockets.Internal.Events::ReceivedFrame(System.Guid,Ninja.WebSockets.Internal.WebSocketOpCode,System.Boolean,System.Int32)
extern void Events_ReceivedFrame_mE0D8E4403ACD782F641DEFA867D69F08302E383E (void);
// 0x0000007D System.Void Ninja.WebSockets.Internal.Events::CloseOutputNoHandshake(System.Guid,System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>,System.String)
extern void Events_CloseOutputNoHandshake_m72661E0563C7A0F4846ED37669FBBCDB8CB69E32 (void);
// 0x0000007E System.Void Ninja.WebSockets.Internal.Events::CloseHandshakeStarted(System.Guid,System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>,System.String)
extern void Events_CloseHandshakeStarted_mD479B36843340888AA2BB3EA0A662623D1E20CA0 (void);
// 0x0000007F System.Void Ninja.WebSockets.Internal.Events::CloseHandshakeRespond(System.Guid,System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>,System.String)
extern void Events_CloseHandshakeRespond_mD83F7B4722990ED634B9A56E83EF7CB82F2F1AA9 (void);
// 0x00000080 System.Void Ninja.WebSockets.Internal.Events::CloseHandshakeComplete(System.Guid)
extern void Events_CloseHandshakeComplete_m42710FD5E42D741E23EB0E32B7DF6B4F88D17365 (void);
// 0x00000081 System.Void Ninja.WebSockets.Internal.Events::CloseFrameReceivedInUnexpectedState(System.Guid,System.Net.WebSockets.WebSocketState,System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>,System.String)
extern void Events_CloseFrameReceivedInUnexpectedState_m51EE3649B54ED97AF92CAAB3DD49628ED15AADC3 (void);
// 0x00000082 System.Void Ninja.WebSockets.Internal.Events::WebSocketDispose(System.Guid,System.Net.WebSockets.WebSocketState)
extern void Events_WebSocketDispose_mEF933EAB1C3C7EAAE76FA7B9D132898C28F99917 (void);
// 0x00000083 System.Void Ninja.WebSockets.Internal.Events::WebSocketDisposeCloseTimeout(System.Guid,System.Net.WebSockets.WebSocketState)
extern void Events_WebSocketDisposeCloseTimeout_mEDA45772182A2FAADD912D17DE846D65860BFCA1 (void);
// 0x00000084 System.Void Ninja.WebSockets.Internal.Events::WebSocketDisposeError(System.Guid,System.Net.WebSockets.WebSocketState,System.String)
extern void Events_WebSocketDisposeError_m1F019DE3312F2B420DE78467171A198D710FF1DA (void);
// 0x00000085 System.Void Ninja.WebSockets.Internal.Events::InvalidStateBeforeClose(System.Guid,System.Net.WebSockets.WebSocketState)
extern void Events_InvalidStateBeforeClose_m75080AF460746215108A6553FE85665A2768EFFA (void);
// 0x00000086 System.Void Ninja.WebSockets.Internal.Events::InvalidStateBeforeCloseOutput(System.Guid,System.Net.WebSockets.WebSocketState)
extern void Events_InvalidStateBeforeCloseOutput_mAA8007F3FE41DDE88AD1CEE3D6DC4AD92429E247 (void);
// 0x00000087 System.Void Ninja.WebSockets.Internal.Events::.ctor()
extern void Events__ctor_mB4B49D5DB9A9DB803FEC90D9432473DC6613D581 (void);
// 0x00000088 System.Void Ninja.WebSockets.Internal.Events::.cctor()
extern void Events__cctor_m0708D9E61D2506228A10E7322B9A6716356CD236 (void);
// 0x00000089 System.Boolean Ninja.WebSockets.Internal.WebSocketFrame::get_IsFinBitSet()
extern void WebSocketFrame_get_IsFinBitSet_mE7FD80B0281FC7E3B90F18F1A50CE263C55B8DDD (void);
// 0x0000008A System.Void Ninja.WebSockets.Internal.WebSocketFrame::set_IsFinBitSet(System.Boolean)
extern void WebSocketFrame_set_IsFinBitSet_m4E9CAA276FF435E6CC8B5E5330821BE7AAA45820 (void);
// 0x0000008B Ninja.WebSockets.Internal.WebSocketOpCode Ninja.WebSockets.Internal.WebSocketFrame::get_OpCode()
extern void WebSocketFrame_get_OpCode_m104433E28DDDAB060B457046920B6D1A7C9368E7 (void);
// 0x0000008C System.Void Ninja.WebSockets.Internal.WebSocketFrame::set_OpCode(Ninja.WebSockets.Internal.WebSocketOpCode)
extern void WebSocketFrame_set_OpCode_m5F00CDEB9F1825C86777881271F9D40219507917 (void);
// 0x0000008D System.Int32 Ninja.WebSockets.Internal.WebSocketFrame::get_Count()
extern void WebSocketFrame_get_Count_mC4A4A09A9077D11B3314E7E191379A744EF9509A (void);
// 0x0000008E System.Void Ninja.WebSockets.Internal.WebSocketFrame::set_Count(System.Int32)
extern void WebSocketFrame_set_Count_m62C99F09EE14E2080AAC4FC7D49DCF835CC51428 (void);
// 0x0000008F System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus> Ninja.WebSockets.Internal.WebSocketFrame::get_CloseStatus()
extern void WebSocketFrame_get_CloseStatus_m2DCDAF9E6F8AA2FFA4F95076FB2885B32F07BDB3 (void);
// 0x00000090 System.Void Ninja.WebSockets.Internal.WebSocketFrame::set_CloseStatus(System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>)
extern void WebSocketFrame_set_CloseStatus_m54F262FA1DAC27BC74D2F32CDBE389DE3B58FD64 (void);
// 0x00000091 System.String Ninja.WebSockets.Internal.WebSocketFrame::get_CloseStatusDescription()
extern void WebSocketFrame_get_CloseStatusDescription_mE10DC02087D5C24A95B2E7F2614558D7B37C99D7 (void);
// 0x00000092 System.Void Ninja.WebSockets.Internal.WebSocketFrame::set_CloseStatusDescription(System.String)
extern void WebSocketFrame_set_CloseStatusDescription_m2DECCA51E44226397DAA4B752A92102278AD1125 (void);
// 0x00000093 System.Void Ninja.WebSockets.Internal.WebSocketFrame::.ctor(System.Boolean,Ninja.WebSockets.Internal.WebSocketOpCode,System.Int32)
extern void WebSocketFrame__ctor_m459DEE97A378E92BC264291747FA854A643C3BEF (void);
// 0x00000094 System.Void Ninja.WebSockets.Internal.WebSocketFrame::.ctor(System.Boolean,Ninja.WebSockets.Internal.WebSocketOpCode,System.Int32,System.Net.WebSockets.WebSocketCloseStatus,System.String)
extern void WebSocketFrame__ctor_m9262E9406DA37A5E34FE99E18AF6203C8C9B30B3 (void);
// 0x00000095 System.Void Ninja.WebSockets.Internal.WebSocketFrameCommon::ToggleMask(System.ArraySegment`1<System.Byte>,System.ArraySegment`1<System.Byte>)
extern void WebSocketFrameCommon_ToggleMask_m69B04C6F8654F2DE4AB55757BD95E4950DA390A8 (void);
// 0x00000096 System.Threading.Tasks.Task`1<Ninja.WebSockets.Internal.WebSocketFrame> Ninja.WebSockets.Internal.WebSocketFrameReader::ReadAsync(System.IO.Stream,System.ArraySegment`1<System.Byte>,System.Threading.CancellationToken)
extern void WebSocketFrameReader_ReadAsync_mD0B3FEB070201D4D739399D93EA95DB377C312AA (void);
// 0x00000097 Ninja.WebSockets.Internal.WebSocketFrame Ninja.WebSockets.Internal.WebSocketFrameReader::DecodeCloseFrame(System.Boolean,Ninja.WebSockets.Internal.WebSocketOpCode,System.Int32,System.ArraySegment`1<System.Byte>)
extern void WebSocketFrameReader_DecodeCloseFrame_mCB9B0050709876F1DD48C6D2A5A87872FB4F61DC (void);
// 0x00000098 System.Threading.Tasks.Task`1<System.UInt32> Ninja.WebSockets.Internal.WebSocketFrameReader::ReadLength(System.Byte,System.ArraySegment`1<System.Byte>,System.IO.Stream,System.Threading.CancellationToken)
extern void WebSocketFrameReader_ReadLength_mEA35EC231DA63EEB8C82B2FC4FA8B164E19406F3 (void);
// 0x00000099 System.Void Ninja.WebSockets.Internal.WebSocketFrameWriter::.cctor()
extern void WebSocketFrameWriter__cctor_m60A80A5D1B77C01627332586853AA5C660C69C8A (void);
// 0x0000009A System.Void Ninja.WebSockets.Internal.WebSocketFrameWriter::Write(Ninja.WebSockets.Internal.WebSocketOpCode,System.ArraySegment`1<System.Byte>,System.IO.MemoryStream,System.Boolean,System.Boolean)
extern void WebSocketFrameWriter_Write_mD7624FC57C25D4B74C81925CDEA447B3BC69290A (void);
// 0x0000009B System.Void Ninja.WebSockets.Internal.WebSocketImplementation::add_Pong(System.EventHandler`1<Ninja.WebSockets.PongEventArgs>)
extern void WebSocketImplementation_add_Pong_mEBA6801D659EBED7C0F234070F24D7F76DE70C67 (void);
// 0x0000009C System.Void Ninja.WebSockets.Internal.WebSocketImplementation::remove_Pong(System.EventHandler`1<Ninja.WebSockets.PongEventArgs>)
extern void WebSocketImplementation_remove_Pong_m8BA2A20609492FAFB1DEA18A67CA1A08846ED8DA (void);
// 0x0000009D Ninja.WebSockets.WebSocketHttpContext Ninja.WebSockets.Internal.WebSocketImplementation::get_Context()
extern void WebSocketImplementation_get_Context_m613372FAFD0403D330FC0F31E2D9FC852DB74789 (void);
// 0x0000009E System.Void Ninja.WebSockets.Internal.WebSocketImplementation::set_Context(Ninja.WebSockets.WebSocketHttpContext)
extern void WebSocketImplementation_set_Context_m6822CA4821DC586BC1E2A9AE652F96075223D6D9 (void);
// 0x0000009F System.Void Ninja.WebSockets.Internal.WebSocketImplementation::.ctor(System.Guid,System.Func`1<System.IO.MemoryStream>,System.IO.Stream,System.TimeSpan,System.String,System.Boolean,System.Boolean,System.String)
extern void WebSocketImplementation__ctor_mAA331D6A96613B05DF9C69FCFBF3BCB0D343B59B (void);
// 0x000000A0 System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus> Ninja.WebSockets.Internal.WebSocketImplementation::get_CloseStatus()
extern void WebSocketImplementation_get_CloseStatus_mE37F9BBD8B85A992EAA2724341A7595A864A00FB (void);
// 0x000000A1 System.String Ninja.WebSockets.Internal.WebSocketImplementation::get_CloseStatusDescription()
extern void WebSocketImplementation_get_CloseStatusDescription_mE9BFD6206442B2C615CBDD4C772F1EB3ED13A319 (void);
// 0x000000A2 System.Net.WebSockets.WebSocketState Ninja.WebSockets.Internal.WebSocketImplementation::get_State()
extern void WebSocketImplementation_get_State_mEAE8A90E86AEBEEFF2A060C5AFAB7FC08F64F7A6 (void);
// 0x000000A3 System.String Ninja.WebSockets.Internal.WebSocketImplementation::get_SubProtocol()
extern void WebSocketImplementation_get_SubProtocol_m2F22384855BB8B57827D2B08CFD059BF27485991 (void);
// 0x000000A4 System.TimeSpan Ninja.WebSockets.Internal.WebSocketImplementation::get_KeepAliveInterval()
extern void WebSocketImplementation_get_KeepAliveInterval_m81F266D1B5E3D37334E19A32523164E7D55A122B (void);
// 0x000000A5 System.Void Ninja.WebSockets.Internal.WebSocketImplementation::set_KeepAliveInterval(System.TimeSpan)
extern void WebSocketImplementation_set_KeepAliveInterval_m0B43E1679747CF34877383D96D7E68F3B7A6359E (void);
// 0x000000A6 System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult> Ninja.WebSockets.Internal.WebSocketImplementation::ReceiveAsync(System.ArraySegment`1<System.Byte>,System.Threading.CancellationToken)
extern void WebSocketImplementation_ReceiveAsync_m94D726EB32C5C06F04A6E384595B005C92526F94 (void);
// 0x000000A7 System.Threading.Tasks.Task Ninja.WebSockets.Internal.WebSocketImplementation::SendAsync(System.ArraySegment`1<System.Byte>,System.Net.WebSockets.WebSocketMessageType,System.Boolean,System.Threading.CancellationToken)
extern void WebSocketImplementation_SendAsync_mE71232392036FFE719441A975BAC1FEF8C739ABE (void);
// 0x000000A8 System.Threading.Tasks.Task Ninja.WebSockets.Internal.WebSocketImplementation::SendPingAsync(System.ArraySegment`1<System.Byte>,System.Threading.CancellationToken)
extern void WebSocketImplementation_SendPingAsync_mC7D08E3394D160B07F6BBDBF8527480D956287EC (void);
// 0x000000A9 System.Void Ninja.WebSockets.Internal.WebSocketImplementation::Abort()
extern void WebSocketImplementation_Abort_m2C9715AFA261614B22DC98D0F2F32993D5DC8EAD (void);
// 0x000000AA System.Threading.Tasks.Task Ninja.WebSockets.Internal.WebSocketImplementation::CloseAsync(System.Net.WebSockets.WebSocketCloseStatus,System.String,System.Threading.CancellationToken)
extern void WebSocketImplementation_CloseAsync_m7B08F9927D246F95C096AAA601B0D210E439A3F1 (void);
// 0x000000AB System.Threading.Tasks.Task Ninja.WebSockets.Internal.WebSocketImplementation::CloseOutputAsync(System.Net.WebSockets.WebSocketCloseStatus,System.String,System.Threading.CancellationToken)
extern void WebSocketImplementation_CloseOutputAsync_mCFD110D1CB64DBEEC170FAF655590B4FB8A406CC (void);
// 0x000000AC System.Void Ninja.WebSockets.Internal.WebSocketImplementation::Dispose()
extern void WebSocketImplementation_Dispose_m70B8F8A16DD206093C61E1B1AE45CAE1E984F921 (void);
// 0x000000AD System.Void Ninja.WebSockets.Internal.WebSocketImplementation::OnPong(Ninja.WebSockets.PongEventArgs)
extern void WebSocketImplementation_OnPong_mEE1AF39DC7BED2664C6F1F14C66180EE1ACDD8FC (void);
// 0x000000AE System.ArraySegment`1<System.Byte> Ninja.WebSockets.Internal.WebSocketImplementation::BuildClosePayload(System.Net.WebSockets.WebSocketCloseStatus,System.String)
extern void WebSocketImplementation_BuildClosePayload_m642AC871AB572D3090520257B6C313267644DF07 (void);
// 0x000000AF System.Threading.Tasks.Task Ninja.WebSockets.Internal.WebSocketImplementation::SendPongAsync(System.ArraySegment`1<System.Byte>,System.Threading.CancellationToken)
extern void WebSocketImplementation_SendPongAsync_mA1A475AE84817F19729A13690A6861547AA195C8 (void);
// 0x000000B0 System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult> Ninja.WebSockets.Internal.WebSocketImplementation::RespondToCloseFrame(Ninja.WebSockets.Internal.WebSocketFrame,System.ArraySegment`1<System.Byte>,System.Threading.CancellationToken)
extern void WebSocketImplementation_RespondToCloseFrame_mA04828D24E0559C2F79601019C5205C41482ACE6 (void);
// 0x000000B1 System.ArraySegment`1<System.Byte> Ninja.WebSockets.Internal.WebSocketImplementation::GetBuffer(System.IO.MemoryStream)
extern void WebSocketImplementation_GetBuffer_m24C61C3844B657AEA338A158C0C8F61E781F233D (void);
// 0x000000B2 System.Threading.Tasks.Task Ninja.WebSockets.Internal.WebSocketImplementation::WriteStreamToNetwork(System.IO.MemoryStream,System.Threading.CancellationToken)
extern void WebSocketImplementation_WriteStreamToNetwork_m49B79F579E0288FCF9545CABD96D32C6C81A6AD9 (void);
// 0x000000B3 Ninja.WebSockets.Internal.WebSocketOpCode Ninja.WebSockets.Internal.WebSocketImplementation::GetOppCode(System.Net.WebSockets.WebSocketMessageType)
extern void WebSocketImplementation_GetOppCode_m8A0F1B9EB90BBFD5FD18E3F0860B100B9A1C6D05 (void);
// 0x000000B4 System.Threading.Tasks.Task Ninja.WebSockets.Internal.WebSocketImplementation::CloseOutputAutoTimeoutAsync(System.Net.WebSockets.WebSocketCloseStatus,System.String,System.Exception)
extern void WebSocketImplementation_CloseOutputAutoTimeoutAsync_mB2DD0FE1A7E9F3D115E109835A893D0F282A71EB (void);
// 0x000000B5 System.Void Ninja.WebSockets.Exceptions.EntityTooLargeException::.ctor()
extern void EntityTooLargeException__ctor_m6514ECB7E5635F0291A7F82070F2850436CD3D3D (void);
// 0x000000B6 System.Void Ninja.WebSockets.Exceptions.EntityTooLargeException::.ctor(System.String)
extern void EntityTooLargeException__ctor_m5396EBE192FCCBB390FE5CDE4C9B3D4F36B86BDE (void);
// 0x000000B7 System.Void Ninja.WebSockets.Exceptions.EntityTooLargeException::.ctor(System.String,System.Exception)
extern void EntityTooLargeException__ctor_m6390F6CC2F4C72A679852079B27BA1085CFBEF0D (void);
// 0x000000B8 System.String Ninja.WebSockets.Exceptions.InvalidHttpResponseCodeException::get_ResponseCode()
extern void InvalidHttpResponseCodeException_get_ResponseCode_m370D04C28E6D1F5EAB4EB8223702C1A52B8AA867 (void);
// 0x000000B9 System.Void Ninja.WebSockets.Exceptions.InvalidHttpResponseCodeException::set_ResponseCode(System.String)
extern void InvalidHttpResponseCodeException_set_ResponseCode_mA2951688C2EAD2D8C7D8DFB49C53DD418213E4AB (void);
// 0x000000BA System.String Ninja.WebSockets.Exceptions.InvalidHttpResponseCodeException::get_ResponseHeader()
extern void InvalidHttpResponseCodeException_get_ResponseHeader_m3D5BFA16FBA97274C90D307A21894349D0B0053B (void);
// 0x000000BB System.Void Ninja.WebSockets.Exceptions.InvalidHttpResponseCodeException::set_ResponseHeader(System.String)
extern void InvalidHttpResponseCodeException_set_ResponseHeader_mB96199E973A9626F2F572FA44EA0FA6BBC038F0C (void);
// 0x000000BC System.String Ninja.WebSockets.Exceptions.InvalidHttpResponseCodeException::get_ResponseDetails()
extern void InvalidHttpResponseCodeException_get_ResponseDetails_m08A985D761FD9087D3FDA482A85A610F61DD9B87 (void);
// 0x000000BD System.Void Ninja.WebSockets.Exceptions.InvalidHttpResponseCodeException::set_ResponseDetails(System.String)
extern void InvalidHttpResponseCodeException_set_ResponseDetails_m7B19609E9DE93B19FDDD09FF1C862F64CA884787 (void);
// 0x000000BE System.Void Ninja.WebSockets.Exceptions.InvalidHttpResponseCodeException::.ctor()
extern void InvalidHttpResponseCodeException__ctor_m49FD4EB30A6C23ACFDC9BE86FA5A101D9B635FC3 (void);
// 0x000000BF System.Void Ninja.WebSockets.Exceptions.InvalidHttpResponseCodeException::.ctor(System.String)
extern void InvalidHttpResponseCodeException__ctor_mCFA4F18CC2E836885E4BC75653165495D889D0A4 (void);
// 0x000000C0 System.Void Ninja.WebSockets.Exceptions.InvalidHttpResponseCodeException::.ctor(System.String,System.String,System.String)
extern void InvalidHttpResponseCodeException__ctor_mBD32FF07CC7711F266F14D7B469A041D9E470823 (void);
// 0x000000C1 System.Void Ninja.WebSockets.Exceptions.InvalidHttpResponseCodeException::.ctor(System.String,System.Exception)
extern void InvalidHttpResponseCodeException__ctor_m81E81ED73D83A969377F7EDB9119CE4DFB286CB5 (void);
// 0x000000C2 System.Void Ninja.WebSockets.Exceptions.SecWebSocketKeyMissingException::.ctor()
extern void SecWebSocketKeyMissingException__ctor_m3A13CC5460DD1626FD623E84688C579258E688C1 (void);
// 0x000000C3 System.Void Ninja.WebSockets.Exceptions.SecWebSocketKeyMissingException::.ctor(System.String)
extern void SecWebSocketKeyMissingException__ctor_mBAED0768E54E859B3D4AE2CB40FC118F1B5193F7 (void);
// 0x000000C4 System.Void Ninja.WebSockets.Exceptions.SecWebSocketKeyMissingException::.ctor(System.String,System.Exception)
extern void SecWebSocketKeyMissingException__ctor_mE2CB9EFFC5584D826C5CFED56808C8C79DC9D197 (void);
// 0x000000C5 System.Void Ninja.WebSockets.Exceptions.ServerListenerSocketException::.ctor()
extern void ServerListenerSocketException__ctor_m8D72DDB25BA36E1A048C3C5F3982FCCE121D5D60 (void);
// 0x000000C6 System.Void Ninja.WebSockets.Exceptions.ServerListenerSocketException::.ctor(System.String)
extern void ServerListenerSocketException__ctor_m5906E7394144EB8341102272DD429FF876F74D98 (void);
// 0x000000C7 System.Void Ninja.WebSockets.Exceptions.ServerListenerSocketException::.ctor(System.String,System.Exception)
extern void ServerListenerSocketException__ctor_m3583B055E08FC47E26785F101B1003B2102A5DCC (void);
// 0x000000C8 System.Void Ninja.WebSockets.Exceptions.WebSocketBufferOverflowException::.ctor()
extern void WebSocketBufferOverflowException__ctor_mBB8DC65F47462CFAB11DE171F612C79339D42462 (void);
// 0x000000C9 System.Void Ninja.WebSockets.Exceptions.WebSocketBufferOverflowException::.ctor(System.String)
extern void WebSocketBufferOverflowException__ctor_m5D4012BDE80EB0573E5631AE28E9A3B90A38917F (void);
// 0x000000CA System.Void Ninja.WebSockets.Exceptions.WebSocketBufferOverflowException::.ctor(System.String,System.Exception)
extern void WebSocketBufferOverflowException__ctor_m386B60BE64CF430E106F78A40400A0A7FE3B6377 (void);
// 0x000000CB System.Void Ninja.WebSockets.Exceptions.WebSocketHandshakeFailedException::.ctor()
extern void WebSocketHandshakeFailedException__ctor_mF7166C896E5A4FCBE8C8167500D8978B98BD16A9 (void);
// 0x000000CC System.Void Ninja.WebSockets.Exceptions.WebSocketHandshakeFailedException::.ctor(System.String)
extern void WebSocketHandshakeFailedException__ctor_m26FFFA4E3D20A2B7D4E95067F0E5653020C40CCD (void);
// 0x000000CD System.Void Ninja.WebSockets.Exceptions.WebSocketHandshakeFailedException::.ctor(System.String,System.Exception)
extern void WebSocketHandshakeFailedException__ctor_m0E2A45FB357C0249BA77FDC1E56981126D7EC173 (void);
// 0x000000CE System.Void Ninja.WebSockets.Exceptions.WebSocketVersionNotSupportedException::.ctor()
extern void WebSocketVersionNotSupportedException__ctor_mB4FB99B1B7EE74C97A4459B8BEB18E8A3FEFBE46 (void);
// 0x000000CF System.Void Ninja.WebSockets.Exceptions.WebSocketVersionNotSupportedException::.ctor(System.String)
extern void WebSocketVersionNotSupportedException__ctor_m595A3CA38D6C583A34C8FF1D4BF47D280E7F5711 (void);
// 0x000000D0 System.Void Ninja.WebSockets.Exceptions.WebSocketVersionNotSupportedException::.ctor(System.String,System.Exception)
extern void WebSocketVersionNotSupportedException__ctor_m264C44100C5BF3B6542B9B1C8DFDAC9DF4628B87 (void);
// 0x000000D1 System.Void Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::.ctor(System.Byte[],Ninja.WebSockets.BufferPool)
extern void PublicBufferMemoryStream__ctor_mAA760D4A3D5713266BFB344D14F907BFC2C069F3 (void);
// 0x000000D2 System.Int64 Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::get_Length()
extern void PublicBufferMemoryStream_get_Length_m9C91999B148835304C54DFB00DD6D8EBF7059D45 (void);
// 0x000000D3 System.IAsyncResult Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void PublicBufferMemoryStream_BeginRead_mA1F476D6C10543A738D869CF37AC408D2FEE75EF (void);
// 0x000000D4 System.IAsyncResult Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void PublicBufferMemoryStream_BeginWrite_m50C6D3E6E9A0715DC39381081364099D717D410D (void);
// 0x000000D5 System.Boolean Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::get_CanRead()
extern void PublicBufferMemoryStream_get_CanRead_m17A5F06EE2AF30E077A3931A8816714A14CAD66B (void);
// 0x000000D6 System.Boolean Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::get_CanSeek()
extern void PublicBufferMemoryStream_get_CanSeek_mA55D0D0D3084848F6E4432228AD13D72E2BD3DB3 (void);
// 0x000000D7 System.Boolean Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::get_CanTimeout()
extern void PublicBufferMemoryStream_get_CanTimeout_m56CBCB888FE977853F5B285A7FBAFAAA71AF2443 (void);
// 0x000000D8 System.Boolean Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::get_CanWrite()
extern void PublicBufferMemoryStream_get_CanWrite_m33F1F6291D1815522BF4AE4AE0652E4B325CA0DC (void);
// 0x000000D9 System.Int32 Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::get_Capacity()
extern void PublicBufferMemoryStream_get_Capacity_m3B7E7FF586081009B98330767C43F50E483D97EC (void);
// 0x000000DA System.Void Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::set_Capacity(System.Int32)
extern void PublicBufferMemoryStream_set_Capacity_m394BB65BA353742266E103BEAE5E72461C73799D (void);
// 0x000000DB System.Void Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::Close()
extern void PublicBufferMemoryStream_Close_m4C9B7E2A6EC82D0D560156A67C731E1078AEE341 (void);
// 0x000000DC System.Threading.Tasks.Task Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::CopyToAsync(System.IO.Stream,System.Int32,System.Threading.CancellationToken)
extern void PublicBufferMemoryStream_CopyToAsync_m455EE6FF0E6CDD8161E7E0708AF489F2091935D3 (void);
// 0x000000DD System.Int32 Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::EndRead(System.IAsyncResult)
extern void PublicBufferMemoryStream_EndRead_mC115844BC59022B36650C96E92EE705E7E217514 (void);
// 0x000000DE System.Void Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::EndWrite(System.IAsyncResult)
extern void PublicBufferMemoryStream_EndWrite_mA19C7B46D88924006C04AAEBA2A64E8EA154AD4D (void);
// 0x000000DF System.Void Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::Flush()
extern void PublicBufferMemoryStream_Flush_m1408FFE75CA73E1DB335EFBEAB787874EE069A1F (void);
// 0x000000E0 System.Threading.Tasks.Task Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::FlushAsync(System.Threading.CancellationToken)
extern void PublicBufferMemoryStream_FlushAsync_m22D11E4E46FD4239FC2E355A4DE763F0B198C902 (void);
// 0x000000E1 System.Byte[] Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::GetBuffer()
extern void PublicBufferMemoryStream_GetBuffer_m9AE3F1F4CF8AC9F7900C4286C1C1E079F7214D8F (void);
// 0x000000E2 System.Int64 Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::get_Position()
extern void PublicBufferMemoryStream_get_Position_m1B1435F375F39B1D9C40EDA1E201D72F09B2BAFE (void);
// 0x000000E3 System.Void Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::set_Position(System.Int64)
extern void PublicBufferMemoryStream_set_Position_m71F5DF784A261BB1257BB7654A2B6E1DFDC823FF (void);
// 0x000000E4 System.Int32 Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::Read(System.Byte[],System.Int32,System.Int32)
extern void PublicBufferMemoryStream_Read_m6CE36823D0B8EDB14EF5E09545094ADB894F495C (void);
// 0x000000E5 System.Void Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::EnlargeBufferIfRequired(System.Int32)
extern void PublicBufferMemoryStream_EnlargeBufferIfRequired_m6D118E62325D4322D1834DD057701481D33A7A43 (void);
// 0x000000E6 System.Void Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::WriteByte(System.Byte)
extern void PublicBufferMemoryStream_WriteByte_m99520D17CF41203BB02AF99F5BE7CE0205C7A1C0 (void);
// 0x000000E7 System.Void Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::Write(System.Byte[],System.Int32,System.Int32)
extern void PublicBufferMemoryStream_Write_m742E41596F75CD3BBE9318D31764884EBC40DC63 (void);
// 0x000000E8 System.Threading.Tasks.Task Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void PublicBufferMemoryStream_WriteAsync_mD56DFB14FEC395336D6C328E582B145C930AB048 (void);
// 0x000000E9 System.Object Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::InitializeLifetimeService()
extern void PublicBufferMemoryStream_InitializeLifetimeService_mB9CE7777B23A22D1909C1FD5ACDFA310D3AD30F3 (void);
// 0x000000EA System.Threading.Tasks.Task`1<System.Int32> Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void PublicBufferMemoryStream_ReadAsync_m8848B017CC9C0BE0A5C57430FBFE1CB7C6B370F6 (void);
// 0x000000EB System.Int32 Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::ReadByte()
extern void PublicBufferMemoryStream_ReadByte_m2209396D780070095582209D69F5F42A21574E6F (void);
// 0x000000EC System.Int32 Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::get_ReadTimeout()
extern void PublicBufferMemoryStream_get_ReadTimeout_mBB9040F2894D8EBBB45388F588B1CD573E91A004 (void);
// 0x000000ED System.Void Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::set_ReadTimeout(System.Int32)
extern void PublicBufferMemoryStream_set_ReadTimeout_m33070D03B727B4B5C753F061AB0FA989603601C4 (void);
// 0x000000EE System.Int64 Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void PublicBufferMemoryStream_Seek_mFB8B7F277CC8D2CE3346FFA42EEF3083D6C9ADC5 (void);
// 0x000000EF System.Void Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::SetLength(System.Int64)
extern void PublicBufferMemoryStream_SetLength_m2DCD1D5A64A3ABFF661833717106D09C7D86B2DB (void);
// 0x000000F0 System.Byte[] Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::ToArray()
extern void PublicBufferMemoryStream_ToArray_mC44864D08981DA1FBD520B386B13EBD39EB0B9A2 (void);
// 0x000000F1 System.Int32 Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::get_WriteTimeout()
extern void PublicBufferMemoryStream_get_WriteTimeout_mF1DC9664B402CAF0AECC7FDDEB6855FF8C3ACC53 (void);
// 0x000000F2 System.Void Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::set_WriteTimeout(System.Int32)
extern void PublicBufferMemoryStream_set_WriteTimeout_m4CB149CF46BACCB1C74820D86AE1118EAECB1837 (void);
// 0x000000F3 System.Boolean Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::TryGetBuffer(System.ArraySegment`1<System.Byte>&)
extern void PublicBufferMemoryStream_TryGetBuffer_mB5355306A082248AC83E1CD8047A01209F77F1B7 (void);
// 0x000000F4 System.Void Ninja.WebSockets.BufferPool_PublicBufferMemoryStream::WriteTo(System.IO.Stream)
extern void PublicBufferMemoryStream_WriteTo_m32C1D86AD4195FCEFC3F7E6D143AE28CE6CCBB1C (void);
// 0x000000F5 System.Void Ninja.WebSockets.HttpHelper_<ReadHttpHeaderAsync>d__3::MoveNext()
extern void U3CReadHttpHeaderAsyncU3Ed__3_MoveNext_m948BA992E9C195E4C980768A65F3DDE8F2073BB0_AdjustorThunk (void);
// 0x000000F6 System.Void Ninja.WebSockets.HttpHelper_<ReadHttpHeaderAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadHttpHeaderAsyncU3Ed__3_SetStateMachine_m209D478BE98A85491FE10F2D9766DA70485A4B81_AdjustorThunk (void);
// 0x000000F7 System.Void Ninja.WebSockets.HttpHelper_<>c::.cctor()
extern void U3CU3Ec__cctor_m54E0C00C514B40BD42C847721EEFC73B79BC61DA (void);
// 0x000000F8 System.Void Ninja.WebSockets.HttpHelper_<>c::.ctor()
extern void U3CU3Ec__ctor_m8DEFD8A86EB4BEEF8872B61D57CB8649564E1A7F (void);
// 0x000000F9 System.String Ninja.WebSockets.HttpHelper_<>c::<GetSubProtocols>b__6_0(System.String)
extern void U3CU3Ec_U3CGetSubProtocolsU3Eb__6_0_mABFAF2E7BB612EE16905794B86AEB1A9EB9E2175 (void);
// 0x000000FA System.Void Ninja.WebSockets.HttpHelper_<WriteHttpHeaderAsync>d__8::MoveNext()
extern void U3CWriteHttpHeaderAsyncU3Ed__8_MoveNext_mE5F14F903A27E8A92F4CD976C5BA945C890D5C62_AdjustorThunk (void);
// 0x000000FB System.Void Ninja.WebSockets.HttpHelper_<WriteHttpHeaderAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWriteHttpHeaderAsyncU3Ed__8_SetStateMachine_m62A17F5631796D9D694C9F0DD362C31E690EE00E_AdjustorThunk (void);
// 0x000000FC System.Void Ninja.WebSockets.PingPongManager_<SendPing>d__11::MoveNext()
extern void U3CSendPingU3Ed__11_MoveNext_mF0DF296E0E827E1082AD277513584AA00ED1A676_AdjustorThunk (void);
// 0x000000FD System.Void Ninja.WebSockets.PingPongManager_<SendPing>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendPingU3Ed__11_SetStateMachine_m214CE2CB28440588799969E606E183736E8735B2_AdjustorThunk (void);
// 0x000000FE System.Void Ninja.WebSockets.PingPongManager_<PingForever>d__13::MoveNext()
extern void U3CPingForeverU3Ed__13_MoveNext_m0DAC6997D4D015EE9B1F1576799069253FDF2660_AdjustorThunk (void);
// 0x000000FF System.Void Ninja.WebSockets.PingPongManager_<PingForever>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CPingForeverU3Ed__13_SetStateMachine_m968BE087BBB663D79A52E3C2FAB58055A765E51C_AdjustorThunk (void);
// 0x00000100 System.Void Ninja.WebSockets.WebSocketClientFactory_<ConnectAsync>d__4::MoveNext()
extern void U3CConnectAsyncU3Ed__4_MoveNext_mC53E22B4B246A9BBB993A50DD404ECB2D8D03F0C_AdjustorThunk (void);
// 0x00000101 System.Void Ninja.WebSockets.WebSocketClientFactory_<ConnectAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CConnectAsyncU3Ed__4_SetStateMachine_m7460D9FE4AEE4EE2AAC3C27177C1918345A8D802_AdjustorThunk (void);
// 0x00000102 System.Void Ninja.WebSockets.WebSocketClientFactory_<ConnectAsync>d__5::MoveNext()
extern void U3CConnectAsyncU3Ed__5_MoveNext_mBB585ECEA64ADD7EC294DAAF35EFCAA87AC0EBC3_AdjustorThunk (void);
// 0x00000103 System.Void Ninja.WebSockets.WebSocketClientFactory_<ConnectAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CConnectAsyncU3Ed__5_SetStateMachine_mF2553FABBB0DEC9725257C9E30D08E5FAD010446_AdjustorThunk (void);
// 0x00000104 System.Void Ninja.WebSockets.WebSocketClientFactory_<ConnectAsync>d__6::MoveNext()
extern void U3CConnectAsyncU3Ed__6_MoveNext_m180EDB27BD6A9A8A15FF8415AEBC10967E7F7BE3_AdjustorThunk (void);
// 0x00000105 System.Void Ninja.WebSockets.WebSocketClientFactory_<ConnectAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CConnectAsyncU3Ed__6_SetStateMachine_mC117340C351E6CE258A3C2DD024AA738E1B2822A_AdjustorThunk (void);
// 0x00000106 System.Void Ninja.WebSockets.WebSocketClientFactory_<ConnectAsync>d__7::MoveNext()
extern void U3CConnectAsyncU3Ed__7_MoveNext_m1ED0EA2F01A722C7B5323BE3BA05D72837C9D1A1_AdjustorThunk (void);
// 0x00000107 System.Void Ninja.WebSockets.WebSocketClientFactory_<ConnectAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CConnectAsyncU3Ed__7_SetStateMachine_m8B3CC3F46BAEC676B66776187769970D588FBE54_AdjustorThunk (void);
// 0x00000108 System.Void Ninja.WebSockets.WebSocketClientFactory_<PerformHandshake>d__14::MoveNext()
extern void U3CPerformHandshakeU3Ed__14_MoveNext_m2CCE0D26F730AECFF692A1E6185E22D2A9FD34A2_AdjustorThunk (void);
// 0x00000109 System.Void Ninja.WebSockets.WebSocketClientFactory_<PerformHandshake>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CPerformHandshakeU3Ed__14_SetStateMachine_m4F046F9B8C294EC96DF5A226566F74C17FE910F1_AdjustorThunk (void);
// 0x0000010A System.Void Ninja.WebSockets.WebSocketServerFactory_<ReadHttpHeaderFromStreamAsync>d__4::MoveNext()
extern void U3CReadHttpHeaderFromStreamAsyncU3Ed__4_MoveNext_mBA1858D1ACA1D1998A6E02C8DC2A5F6EF7D59849_AdjustorThunk (void);
// 0x0000010B System.Void Ninja.WebSockets.WebSocketServerFactory_<ReadHttpHeaderFromStreamAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadHttpHeaderFromStreamAsyncU3Ed__4_SetStateMachine_mCE59D53D014CC9221D48D0BA2CD336A8F47EDB93_AdjustorThunk (void);
// 0x0000010C System.Void Ninja.WebSockets.WebSocketServerFactory_<AcceptWebSocketAsync>d__5::MoveNext()
extern void U3CAcceptWebSocketAsyncU3Ed__5_MoveNext_m2D8CDC10139A44C45A94073E71E7D7BF22E2D411_AdjustorThunk (void);
// 0x0000010D System.Void Ninja.WebSockets.WebSocketServerFactory_<AcceptWebSocketAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CAcceptWebSocketAsyncU3Ed__5_SetStateMachine_m93BAA36E88AE0DE2F3D495CD0E89A8685F08A8D5_AdjustorThunk (void);
// 0x0000010E System.Void Ninja.WebSockets.WebSocketServerFactory_<AcceptWebSocketAsync>d__6::MoveNext()
extern void U3CAcceptWebSocketAsyncU3Ed__6_MoveNext_m2DA992B6C3E98FD83750BC0CB967993259ECBD95_AdjustorThunk (void);
// 0x0000010F System.Void Ninja.WebSockets.WebSocketServerFactory_<AcceptWebSocketAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CAcceptWebSocketAsyncU3Ed__6_SetStateMachine_mCBC617950048B59545D45061ACFD8BB0A4883211_AdjustorThunk (void);
// 0x00000110 System.Void Ninja.WebSockets.WebSocketServerFactory_<PerformHandshakeAsync>d__8::MoveNext()
extern void U3CPerformHandshakeAsyncU3Ed__8_MoveNext_mD405CDA01AA040C711F071258B99ABEFCF9EBDCF_AdjustorThunk (void);
// 0x00000111 System.Void Ninja.WebSockets.WebSocketServerFactory_<PerformHandshakeAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CPerformHandshakeAsyncU3Ed__8_SetStateMachine_m77079664E0FE410A658975F161A3EBAECF20B87E_AdjustorThunk (void);
// 0x00000112 System.Void Ninja.WebSockets.Internal.BinaryReaderWriter_<ReadExactly>d__0::MoveNext()
extern void U3CReadExactlyU3Ed__0_MoveNext_m4CECD1BD492A8EEFBD684BB450D4DE8B68780F69_AdjustorThunk (void);
// 0x00000113 System.Void Ninja.WebSockets.Internal.BinaryReaderWriter_<ReadExactly>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadExactlyU3Ed__0_SetStateMachine_mCFA1FE3A297F4B4618E50B88C32CD41ED3D1CE50_AdjustorThunk (void);
// 0x00000114 System.Void Ninja.WebSockets.Internal.BinaryReaderWriter_<ReadUShortExactly>d__1::MoveNext()
extern void U3CReadUShortExactlyU3Ed__1_MoveNext_mB619705604F9488B0FBAF17F132DA00EA802943E_AdjustorThunk (void);
// 0x00000115 System.Void Ninja.WebSockets.Internal.BinaryReaderWriter_<ReadUShortExactly>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadUShortExactlyU3Ed__1_SetStateMachine_mB43BA806F7217D54AA65A19F4E737307A357A8D5_AdjustorThunk (void);
// 0x00000116 System.Void Ninja.WebSockets.Internal.BinaryReaderWriter_<ReadULongExactly>d__2::MoveNext()
extern void U3CReadULongExactlyU3Ed__2_MoveNext_mF2EEAFDC1EFBABF5D9D1E3049F4E1C8F1343212A_AdjustorThunk (void);
// 0x00000117 System.Void Ninja.WebSockets.Internal.BinaryReaderWriter_<ReadULongExactly>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadULongExactlyU3Ed__2_SetStateMachine_m3367F0AC34F35E475DF7F61AF6922E52EF54F76A_AdjustorThunk (void);
// 0x00000118 System.Void Ninja.WebSockets.Internal.BinaryReaderWriter_<ReadLongExactly>d__3::MoveNext()
extern void U3CReadLongExactlyU3Ed__3_MoveNext_m88154E822A6770E226628D774A089C6323BAE9C0_AdjustorThunk (void);
// 0x00000119 System.Void Ninja.WebSockets.Internal.BinaryReaderWriter_<ReadLongExactly>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadLongExactlyU3Ed__3_SetStateMachine_m552E5328E4C5154017AF2D497C589EFF09C589B8_AdjustorThunk (void);
// 0x0000011A System.Void Ninja.WebSockets.Internal.WebSocketFrameReader_<ReadAsync>d__0::MoveNext()
extern void U3CReadAsyncU3Ed__0_MoveNext_m922BB2BE2990DD59BA776FDFFF997127B5F55920_AdjustorThunk (void);
// 0x0000011B System.Void Ninja.WebSockets.Internal.WebSocketFrameReader_<ReadAsync>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadAsyncU3Ed__0_SetStateMachine_mF0DACCAC5C122AABCD242A0C3CC533554F55B991_AdjustorThunk (void);
// 0x0000011C System.Void Ninja.WebSockets.Internal.WebSocketFrameReader_<ReadLength>d__2::MoveNext()
extern void U3CReadLengthU3Ed__2_MoveNext_m617A94F542FA7213D72859CE767EF3883EF53105_AdjustorThunk (void);
// 0x0000011D System.Void Ninja.WebSockets.Internal.WebSocketFrameReader_<ReadLength>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadLengthU3Ed__2_SetStateMachine_mC948A7E0922D59F436D2DC4039D4781BE629785A_AdjustorThunk (void);
// 0x0000011E System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<ReceiveAsync>d__35::MoveNext()
extern void U3CReceiveAsyncU3Ed__35_MoveNext_m9A396BEA41AB7B50AD3B5C8647D11DA685A325A6_AdjustorThunk (void);
// 0x0000011F System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<ReceiveAsync>d__35::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReceiveAsyncU3Ed__35_SetStateMachine_m71B2AA413ABD87138B1BD0B32E357DE1C88BE93B_AdjustorThunk (void);
// 0x00000120 System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<SendAsync>d__36::MoveNext()
extern void U3CSendAsyncU3Ed__36_MoveNext_m3DED6F48667C037FF9B37614D83E30F93B289C70_AdjustorThunk (void);
// 0x00000121 System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<SendAsync>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendAsyncU3Ed__36_SetStateMachine_m7B7D2D8CBCA15D9F1FE8D0943606940A9E4CCBB2_AdjustorThunk (void);
// 0x00000122 System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<SendPingAsync>d__37::MoveNext()
extern void U3CSendPingAsyncU3Ed__37_MoveNext_m72662311D82B3B59DF86470F5AD2FC9D64327242_AdjustorThunk (void);
// 0x00000123 System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<SendPingAsync>d__37::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendPingAsyncU3Ed__37_SetStateMachine_mB987667A9616ECD9F755CC4718E8EB553E943A84_AdjustorThunk (void);
// 0x00000124 System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<CloseAsync>d__39::MoveNext()
extern void U3CCloseAsyncU3Ed__39_MoveNext_m4B9403CDC9074F7B7BC4ED250C4E46FF7AD8FA2E_AdjustorThunk (void);
// 0x00000125 System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<CloseAsync>d__39::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCloseAsyncU3Ed__39_SetStateMachine_m138C1CCECAAB4BB3F7077A4726B5121C48C308D5_AdjustorThunk (void);
// 0x00000126 System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<CloseOutputAsync>d__40::MoveNext()
extern void U3CCloseOutputAsyncU3Ed__40_MoveNext_m16893577FD0E86F0DB01C48D65478FFB0879282D_AdjustorThunk (void);
// 0x00000127 System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<CloseOutputAsync>d__40::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCloseOutputAsyncU3Ed__40_SetStateMachine_m4F717CDA0944E4EB10EE2B4BC3CDD00A667FF9F6_AdjustorThunk (void);
// 0x00000128 System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<SendPongAsync>d__44::MoveNext()
extern void U3CSendPongAsyncU3Ed__44_MoveNext_m90796BF84457D076595D2123FF5168513E1CCA88_AdjustorThunk (void);
// 0x00000129 System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<SendPongAsync>d__44::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendPongAsyncU3Ed__44_SetStateMachine_m80F7724017FC16A3F0C879FBACFD2C91DAFD79A2_AdjustorThunk (void);
// 0x0000012A System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<RespondToCloseFrame>d__45::MoveNext()
extern void U3CRespondToCloseFrameU3Ed__45_MoveNext_m2E95874EF3B9A5AAC0221B6DDFC242B097DE68DF_AdjustorThunk (void);
// 0x0000012B System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<RespondToCloseFrame>d__45::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRespondToCloseFrameU3Ed__45_SetStateMachine_m7ACF698EA22370F856B20989750D401025B35440_AdjustorThunk (void);
// 0x0000012C System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<>c__DisplayClass48_0::.ctor()
extern void U3CU3Ec__DisplayClass48_0__ctor_m8B3285E336499E7EC0949DD906528E97FEC3B4FB (void);
// 0x0000012D System.Threading.Tasks.Task Ninja.WebSockets.Internal.WebSocketImplementation_<>c__DisplayClass48_0::<WriteStreamToNetwork>b__0(System.Threading.Tasks.Task)
extern void U3CU3Ec__DisplayClass48_0_U3CWriteStreamToNetworkU3Eb__0_m781B60613A123C8987C674BCC1D0E2F4DEE548E1 (void);
// 0x0000012E System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<WriteStreamToNetwork>d__48::MoveNext()
extern void U3CWriteStreamToNetworkU3Ed__48_MoveNext_mC3D06EC3ECB6D3705E584EC0906085D2C21C0454_AdjustorThunk (void);
// 0x0000012F System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<WriteStreamToNetwork>d__48::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWriteStreamToNetworkU3Ed__48_SetStateMachine_m84A61699392F6BF8FE917EE292513B8FE1D56D04_AdjustorThunk (void);
// 0x00000130 System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<CloseOutputAutoTimeoutAsync>d__50::MoveNext()
extern void U3CCloseOutputAutoTimeoutAsyncU3Ed__50_MoveNext_mA0E0538B8C02120B7DA013DCDC9B6DEE1FECFC2F_AdjustorThunk (void);
// 0x00000131 System.Void Ninja.WebSockets.Internal.WebSocketImplementation_<CloseOutputAutoTimeoutAsync>d__50::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCloseOutputAutoTimeoutAsyncU3Ed__50_SetStateMachine_m1A99A3A854543A3A18CCD905AE592EE5695BDEF5_AdjustorThunk (void);
static Il2CppMethodPointer s_methodPointers[305] = 
{
	BufferPool__ctor_m7AD0FF8A3027B532CBD752C6C56B7CB2B78ED94C,
	BufferPool__ctor_m70FAD3F2DA0391E267558B5E36D5E97B10F9BDF3,
	BufferPool_GetBuffer_m85A96E0CF0033684F1D59BADE82EFE68846CE6DF,
	BufferPool_ReturnBuffer_m93D682CB009427D5FBBA66D6DA4F735E86C4DDE9,
	HttpHelper_CalculateWebSocketKey_m7E68BCD6B6431427E5D24082305055393AE30E6D,
	HttpHelper_ComputeSocketAcceptString_m781D21403B73D23B01A748BBFA952F04AAD81F8F,
	HttpHelper_ReadHttpHeaderAsync_mCD37A79187BFCB48CC99DF64A84779D9B2F12456,
	HttpHelper_IsWebSocketUpgradeRequest_m664A0F3AED6EEA08E84D992C4CB93B82E20E8690,
	HttpHelper_GetPathFromHeader_m01ADE4D4550AEDA04F6F49ED65E385B5651D4724,
	HttpHelper_GetSubProtocols_m063C0C52E255DEBE0C22D74A1D8A0A1BCA9C1D9D,
	HttpHelper_ReadHttpResponseCode_m735C6ED28A76CB090C876113DCA47030302D2F69,
	HttpHelper_WriteHttpHeaderAsync_m28684994B536871BCCC190FBE990B4E5F0B3E68D,
	HttpHelper__ctor_m53BCEBC7F8541BAF2D353FA622229CA50947E8A6,
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
	PingPongManager_add_Pong_mB9311BB2D18A9794C3312D7D9E41F73F3307F351,
	PingPongManager_remove_Pong_m1380869DC53670087DAB678D7845C83102AC1C38,
	PingPongManager__ctor_m8C0186EFCF1C1C7434CF6A303CCABE80328FFA32,
	PingPongManager_SendPing_m6814C157494C2C0C3AF8440D2271A59357D695AC,
	PingPongManager_OnPong_mFC43B246061CF52A3244CD0449152E12D4E773BF,
	PingPongManager_PingForever_m494AB5810B9031D5442769AF1D34C9F04301530C,
	PingPongManager_WebSocketImpl_Pong_mE849F9F40AE729F88BC26AACD562D5F56AFC2B35,
	PongEventArgs_get_Payload_m8B6C8EC39426F159D025241596E6CACBE3D28FD3,
	PongEventArgs_set_Payload_m2E93E72B83DF07D31DB9AD61DDF89FB96CB083F8,
	PongEventArgs__ctor_m0C0CC7C53EEBA9D5FF52D9E4C67C55A00EA85E66,
	WebSocketClientFactory__ctor_m6C114C9D54994D893749376A1AAAC93031A1E9C9,
	WebSocketClientFactory__ctor_mDCC6338747AB684A9966BD3619251F2D8345E2B4,
	WebSocketClientFactory_ConnectAsync_m6E8EAC949510295ECBCC91F013BF7E9ABCA45671,
	WebSocketClientFactory_ConnectAsync_mEF633F9428473C6D21D022B7E7A1E68327DE7DE5,
	WebSocketClientFactory_ConnectAsync_m1461FD1FA25B276C1C99971360C2A264F4206620,
	WebSocketClientFactory_ConnectAsync_mE390D3A1AA0EA52EE757239D16F4B283A38C6D2A,
	WebSocketClientFactory_GetSubProtocolFromHeader_m2F9ED005B64A1AFC4A53CF6DD06570E1816A9CC0,
	WebSocketClientFactory_ThrowIfInvalidAcceptString_m5089D29FBE0184CC98B6F25E96E2BC5E5A3C31B7,
	WebSocketClientFactory_ThrowIfInvalidResponseCode_m248AFB216A68C2A3A5BF26E3DD6C28CAE34001B2,
	WebSocketClientFactory_GetStream_m28894EEEA289BA8E1B34FE726AB747752C4CC5B3,
	WebSocketClientFactory_ValidateServerCertificate_mBF4108CFB23F8A36DA2F3AAE9FCC071D436E29FF,
	WebSocketClientFactory_GetAdditionalHeaders_mDE172BC4E36F8D7F1AADA2F95CC76E77D7BE9284,
	WebSocketClientFactory_PerformHandshake_mFDF0E947CDDAA783D752E0ACE50727530F3B9598,
	WebSocketClientOptions_get_KeepAliveInterval_mF33E58C3934EB06A582C918F0B6F2D03F64A84D9,
	WebSocketClientOptions_set_KeepAliveInterval_mCAB2CAD8FB9380A449AB2491B0D31D77549557B8,
	WebSocketClientOptions_get_NoDelay_m1A5DC0818381289F64FFA96D849BF848FE91B50C,
	WebSocketClientOptions_set_NoDelay_mDDDAC044D0FAE24B660D9C30FF9B52A81236AA2C,
	WebSocketClientOptions_get_AdditionalHttpHeaders_m1501FEB5937607739A250696583F729D1D97FF55,
	WebSocketClientOptions_set_AdditionalHttpHeaders_m65B1A2807A0C2C19C1ADD601612E341F2446C29C,
	WebSocketClientOptions_get_IncludeExceptionInCloseResponse_mB2417E7CEDA4566FA765BF84803FC743974EA0D2,
	WebSocketClientOptions_set_IncludeExceptionInCloseResponse_m04150AD32018E464B20742B249452C25521F26A7,
	WebSocketClientOptions_get_SecWebSocketExtensions_m93A92426C1E05CBEEB12F162758086EBD9E0313C,
	WebSocketClientOptions_set_SecWebSocketExtensions_m53D9BB5ABD474369F9512FF05ADD212E326AA384,
	WebSocketClientOptions_get_SecWebSocketProtocol_m055A473969680C17A7C40E2A2918D66DF3155AAD,
	WebSocketClientOptions_set_SecWebSocketProtocol_mB81FB9F2572A3DF086BF4B27DF15A1DF44AD95F3,
	WebSocketClientOptions__ctor_mD213B28E275D504676C977B09E9DDFE8B32D4C0F,
	WebSocketHttpContext_get_IsWebSocketRequest_m9DA9D3F60E228253E42A1E062B0F188ECE777785,
	WebSocketHttpContext_set_IsWebSocketRequest_mF4845E2C9654D95F542200BEBD48EB565EDC68DD,
	WebSocketHttpContext_get_WebSocketRequestedProtocols_mC1AACED1D9C4A00CF2A35ACC0C91D55429C19740,
	WebSocketHttpContext_set_WebSocketRequestedProtocols_mE5EABD0920A4C9E8FA258BBF11AC827AA9051662,
	WebSocketHttpContext_get_HttpHeader_mA335DFD70D78A5B05790C66CE5057B518EDC41D0,
	WebSocketHttpContext_set_HttpHeader_m8329AB8AF9F0840CF607F1ED1069362DB23FEFB3,
	WebSocketHttpContext_get_Path_m6E5060815658DE07986C05BB542D08770F5F0821,
	WebSocketHttpContext_set_Path_mB176EA1BD724063308ABD35CD93981E834927DB5,
	WebSocketHttpContext_get_Stream_mF21C2A5E85A4D6F5FA64B619D91C9579BCB2FEF5,
	WebSocketHttpContext_set_Stream_mC1D2F49C965ADE516E134CD2A50241E4BD18B8F6,
	WebSocketHttpContext_get_Client_mA4C5005D99B0D6D5A51CBFE2A5E1C92B79248776,
	WebSocketHttpContext_set_Client_mC22AC13EBEF6D066C1EAF204F9319A515B682D57,
	WebSocketHttpContext__ctor_m6E03EFA4585863D9B5FDA7B80ED695963B946E6D,
	WebSocketServerFactory__ctor_mC1B85E1FD4834824FE72580E479494CB4E095E67,
	WebSocketServerFactory__ctor_mAD24FE4B9F66039B0C66E2DDC4C206E5DF5290E3,
	WebSocketServerFactory_ReadHttpHeaderFromStreamAsync_m74CD1A7DCDBE5B00996A440D7FDED351F3BB302D,
	WebSocketServerFactory_AcceptWebSocketAsync_mA4098E358DEC6ECCC344EA25FB9D1B4553CBAFD1,
	WebSocketServerFactory_AcceptWebSocketAsync_m320CD85E6B05F2A6553D4CC0E28C166BB2D3E8B9,
	WebSocketServerFactory_CheckWebSocketVersion_mE0348F6FC9B885DCEF38A3AA6E59CEFC6A671505,
	WebSocketServerFactory_PerformHandshakeAsync_mF12A792C2067A3279435E60A567256EA279C64A0,
	WebSocketServerOptions_get_KeepAliveInterval_mC2D458CB417E07DFBD1DA3F4E833EFAD9268FC27,
	WebSocketServerOptions_set_KeepAliveInterval_m5EA85441BAE66A0D55183DEA5BECDE32904101F8,
	WebSocketServerOptions_get_IncludeExceptionInCloseResponse_m9758F4B505F2F2784B4220888E4045211281ED87,
	WebSocketServerOptions_set_IncludeExceptionInCloseResponse_m263297F39DD3982833AF4962709E8C7D51753860,
	WebSocketServerOptions_get_SubProtocol_mE11424329287E5D8526A64FB003BB35EB7267696,
	WebSocketServerOptions_set_SubProtocol_mC7F3D7371EBD58E361DA11963F347E8B94A5B45D,
	WebSocketServerOptions__ctor_mB9269DB3C3EA0DC0F586BD7FCC176D0EF16FD8DB,
	BinaryReaderWriter_ReadExactly_m6C19BB1E2C0FD796571D6DDEA1D78A5E2AFEAB4F,
	BinaryReaderWriter_ReadUShortExactly_m341F4D9B1E3405C92A04315CB92BE2042D1BD1C3,
	BinaryReaderWriter_ReadULongExactly_mB912DE5084D28BA7433CBC0ECD3972A749C238FA,
	BinaryReaderWriter_ReadLongExactly_mF57395141618E9632B7EF6C0E35FEBB922F7BA12,
	BinaryReaderWriter_WriteInt_m11897500F8AA5053BEB30796E96C920B54C1FF3B,
	BinaryReaderWriter_WriteULong_m8CF26FCC822744730AE53E37C669FC1C6237037A,
	BinaryReaderWriter_WriteLong_mC8913ACDDC45D8E7CEA0313A16C155FABEE4CD33,
	BinaryReaderWriter_WriteUShort_m8FDB91A7A57A630E4D9826AE992BB8955FAC728C,
	BinaryReaderWriter__ctor_m0DF840330DA1A146EAD74D8E32FD758F84D89935,
	Events_ClientConnectingToIpAddress_m50D7E668610F282A50C40FD298BBAA72E475DBB7,
	Events_ClientConnectingToHost_mF5C2226C5C208772357EC6DC05C0AE8450B287D3,
	Events_AttemtingToSecureSslConnection_mFB6E39B42C9A95EC1466ED153C9D0137C3E0DCEB,
	Events_ConnectionSecured_m41D11992B51E0E2CC63D240CD3680AFA017179A7,
	Events_ConnectionNotSecure_m62F829C34C6F5D5AEAD0C37C3847C7F921A268B1,
	Events_SslCertificateError_m1F5CFD8DB7E2C628DCF4AD0F74B6DAE283441B72,
	Events_HandshakeSent_m8B254748872B4243773DA72D1DEC12CAFB3B9F5B,
	Events_ReadingHttpResponse_m5AEDD47CF8490C85202CF71B4A15AB29AB9114E4,
	Events_ReadHttpResponseError_mD304E26D926AD9F4F1E3A83B59314DF2365CED2B,
	Events_InvalidHttpResponseCode_m73CEA63F2454145256E58772A504C7D3FC51CD4E,
	Events_HandshakeFailure_m54DF4A354D2E51A57E8CABBC67DDC726F43885BA,
	Events_ClientHandshakeSuccess_m68F36EC56056A2608547E0C1BC9189E00E2870AA,
	Events_ServerHandshakeSuccess_m5A1C1D6FF8AB89C902418FC61ED6C56C30318109,
	Events_AcceptWebSocketStarted_m3289E9E308103DDEE8A857845BD7C991A44DC6EC,
	Events_SendingHandshakeResponse_m898D7063710D58FAF6B201E76A268F922F26C1D4,
	Events_WebSocketVersionNotSupported_m9C7C8BFECA85D7D9C8255D9EDE2A45E047B5FE79,
	Events_BadRequest_m2AF132C6A7C8B81E5090B6AB78D6DFBFB753ADD5,
	Events_UsePerMessageDeflate_m39C223B5197CE2D214722A11164E916745DA0D7E,
	Events_NoMessageCompression_mBA1FD8CB028A00857C627BDFF2C15810DB09F87A,
	Events_KeepAliveIntervalZero_m9954B66D647EF01AC5A00FDA75E31142BF2F1A29,
	Events_PingPongManagerStarted_m3A23C1B147BFA3EEBC7161E4830D45541FE5B9DF,
	Events_PingPongManagerEnded_m55D62DD98D1BACABB6A20F515A7460F0BD541656,
	Events_KeepAliveIntervalExpired_m2ABB09C3B5E23A96B23D203C52778306BA9B577C,
	Events_CloseOutputAutoTimeout_mC45901D3BF8524F2D3CB474E26A9584F337B5BD2,
	Events_CloseOutputAutoTimeoutCancelled_m36D46707EFA0A3F4008C2C6C35B98682AC3013B9,
	Events_CloseOutputAutoTimeoutError_mBEA2888127EEA47DA9E2D8AE911175EFDBB16C74,
	Events_TryGetBufferNotSupported_m6A19325384235DFDFD99F7507A0D103C15F2741A,
	Events_SendingFrame_mF5EA21272F531E6AE783BF8FE38B8A3BEFA2345D,
	Events_ReceivedFrame_mE0D8E4403ACD782F641DEFA867D69F08302E383E,
	Events_CloseOutputNoHandshake_m72661E0563C7A0F4846ED37669FBBCDB8CB69E32,
	Events_CloseHandshakeStarted_mD479B36843340888AA2BB3EA0A662623D1E20CA0,
	Events_CloseHandshakeRespond_mD83F7B4722990ED634B9A56E83EF7CB82F2F1AA9,
	Events_CloseHandshakeComplete_m42710FD5E42D741E23EB0E32B7DF6B4F88D17365,
	Events_CloseFrameReceivedInUnexpectedState_m51EE3649B54ED97AF92CAAB3DD49628ED15AADC3,
	Events_WebSocketDispose_mEF933EAB1C3C7EAAE76FA7B9D132898C28F99917,
	Events_WebSocketDisposeCloseTimeout_mEDA45772182A2FAADD912D17DE846D65860BFCA1,
	Events_WebSocketDisposeError_m1F019DE3312F2B420DE78467171A198D710FF1DA,
	Events_InvalidStateBeforeClose_m75080AF460746215108A6553FE85665A2768EFFA,
	Events_InvalidStateBeforeCloseOutput_mAA8007F3FE41DDE88AD1CEE3D6DC4AD92429E247,
	Events__ctor_mB4B49D5DB9A9DB803FEC90D9432473DC6613D581,
	Events__cctor_m0708D9E61D2506228A10E7322B9A6716356CD236,
	WebSocketFrame_get_IsFinBitSet_mE7FD80B0281FC7E3B90F18F1A50CE263C55B8DDD,
	WebSocketFrame_set_IsFinBitSet_m4E9CAA276FF435E6CC8B5E5330821BE7AAA45820,
	WebSocketFrame_get_OpCode_m104433E28DDDAB060B457046920B6D1A7C9368E7,
	WebSocketFrame_set_OpCode_m5F00CDEB9F1825C86777881271F9D40219507917,
	WebSocketFrame_get_Count_mC4A4A09A9077D11B3314E7E191379A744EF9509A,
	WebSocketFrame_set_Count_m62C99F09EE14E2080AAC4FC7D49DCF835CC51428,
	WebSocketFrame_get_CloseStatus_m2DCDAF9E6F8AA2FFA4F95076FB2885B32F07BDB3,
	WebSocketFrame_set_CloseStatus_m54F262FA1DAC27BC74D2F32CDBE389DE3B58FD64,
	WebSocketFrame_get_CloseStatusDescription_mE10DC02087D5C24A95B2E7F2614558D7B37C99D7,
	WebSocketFrame_set_CloseStatusDescription_m2DECCA51E44226397DAA4B752A92102278AD1125,
	WebSocketFrame__ctor_m459DEE97A378E92BC264291747FA854A643C3BEF,
	WebSocketFrame__ctor_m9262E9406DA37A5E34FE99E18AF6203C8C9B30B3,
	WebSocketFrameCommon_ToggleMask_m69B04C6F8654F2DE4AB55757BD95E4950DA390A8,
	WebSocketFrameReader_ReadAsync_mD0B3FEB070201D4D739399D93EA95DB377C312AA,
	WebSocketFrameReader_DecodeCloseFrame_mCB9B0050709876F1DD48C6D2A5A87872FB4F61DC,
	WebSocketFrameReader_ReadLength_mEA35EC231DA63EEB8C82B2FC4FA8B164E19406F3,
	WebSocketFrameWriter__cctor_m60A80A5D1B77C01627332586853AA5C660C69C8A,
	WebSocketFrameWriter_Write_mD7624FC57C25D4B74C81925CDEA447B3BC69290A,
	WebSocketImplementation_add_Pong_mEBA6801D659EBED7C0F234070F24D7F76DE70C67,
	WebSocketImplementation_remove_Pong_m8BA2A20609492FAFB1DEA18A67CA1A08846ED8DA,
	WebSocketImplementation_get_Context_m613372FAFD0403D330FC0F31E2D9FC852DB74789,
	WebSocketImplementation_set_Context_m6822CA4821DC586BC1E2A9AE652F96075223D6D9,
	WebSocketImplementation__ctor_mAA331D6A96613B05DF9C69FCFBF3BCB0D343B59B,
	WebSocketImplementation_get_CloseStatus_mE37F9BBD8B85A992EAA2724341A7595A864A00FB,
	WebSocketImplementation_get_CloseStatusDescription_mE9BFD6206442B2C615CBDD4C772F1EB3ED13A319,
	WebSocketImplementation_get_State_mEAE8A90E86AEBEEFF2A060C5AFAB7FC08F64F7A6,
	WebSocketImplementation_get_SubProtocol_m2F22384855BB8B57827D2B08CFD059BF27485991,
	WebSocketImplementation_get_KeepAliveInterval_m81F266D1B5E3D37334E19A32523164E7D55A122B,
	WebSocketImplementation_set_KeepAliveInterval_m0B43E1679747CF34877383D96D7E68F3B7A6359E,
	WebSocketImplementation_ReceiveAsync_m94D726EB32C5C06F04A6E384595B005C92526F94,
	WebSocketImplementation_SendAsync_mE71232392036FFE719441A975BAC1FEF8C739ABE,
	WebSocketImplementation_SendPingAsync_mC7D08E3394D160B07F6BBDBF8527480D956287EC,
	WebSocketImplementation_Abort_m2C9715AFA261614B22DC98D0F2F32993D5DC8EAD,
	WebSocketImplementation_CloseAsync_m7B08F9927D246F95C096AAA601B0D210E439A3F1,
	WebSocketImplementation_CloseOutputAsync_mCFD110D1CB64DBEEC170FAF655590B4FB8A406CC,
	WebSocketImplementation_Dispose_m70B8F8A16DD206093C61E1B1AE45CAE1E984F921,
	WebSocketImplementation_OnPong_mEE1AF39DC7BED2664C6F1F14C66180EE1ACDD8FC,
	WebSocketImplementation_BuildClosePayload_m642AC871AB572D3090520257B6C313267644DF07,
	WebSocketImplementation_SendPongAsync_mA1A475AE84817F19729A13690A6861547AA195C8,
	WebSocketImplementation_RespondToCloseFrame_mA04828D24E0559C2F79601019C5205C41482ACE6,
	WebSocketImplementation_GetBuffer_m24C61C3844B657AEA338A158C0C8F61E781F233D,
	WebSocketImplementation_WriteStreamToNetwork_m49B79F579E0288FCF9545CABD96D32C6C81A6AD9,
	WebSocketImplementation_GetOppCode_m8A0F1B9EB90BBFD5FD18E3F0860B100B9A1C6D05,
	WebSocketImplementation_CloseOutputAutoTimeoutAsync_mB2DD0FE1A7E9F3D115E109835A893D0F282A71EB,
	EntityTooLargeException__ctor_m6514ECB7E5635F0291A7F82070F2850436CD3D3D,
	EntityTooLargeException__ctor_m5396EBE192FCCBB390FE5CDE4C9B3D4F36B86BDE,
	EntityTooLargeException__ctor_m6390F6CC2F4C72A679852079B27BA1085CFBEF0D,
	InvalidHttpResponseCodeException_get_ResponseCode_m370D04C28E6D1F5EAB4EB8223702C1A52B8AA867,
	InvalidHttpResponseCodeException_set_ResponseCode_mA2951688C2EAD2D8C7D8DFB49C53DD418213E4AB,
	InvalidHttpResponseCodeException_get_ResponseHeader_m3D5BFA16FBA97274C90D307A21894349D0B0053B,
	InvalidHttpResponseCodeException_set_ResponseHeader_mB96199E973A9626F2F572FA44EA0FA6BBC038F0C,
	InvalidHttpResponseCodeException_get_ResponseDetails_m08A985D761FD9087D3FDA482A85A610F61DD9B87,
	InvalidHttpResponseCodeException_set_ResponseDetails_m7B19609E9DE93B19FDDD09FF1C862F64CA884787,
	InvalidHttpResponseCodeException__ctor_m49FD4EB30A6C23ACFDC9BE86FA5A101D9B635FC3,
	InvalidHttpResponseCodeException__ctor_mCFA4F18CC2E836885E4BC75653165495D889D0A4,
	InvalidHttpResponseCodeException__ctor_mBD32FF07CC7711F266F14D7B469A041D9E470823,
	InvalidHttpResponseCodeException__ctor_m81E81ED73D83A969377F7EDB9119CE4DFB286CB5,
	SecWebSocketKeyMissingException__ctor_m3A13CC5460DD1626FD623E84688C579258E688C1,
	SecWebSocketKeyMissingException__ctor_mBAED0768E54E859B3D4AE2CB40FC118F1B5193F7,
	SecWebSocketKeyMissingException__ctor_mE2CB9EFFC5584D826C5CFED56808C8C79DC9D197,
	ServerListenerSocketException__ctor_m8D72DDB25BA36E1A048C3C5F3982FCCE121D5D60,
	ServerListenerSocketException__ctor_m5906E7394144EB8341102272DD429FF876F74D98,
	ServerListenerSocketException__ctor_m3583B055E08FC47E26785F101B1003B2102A5DCC,
	WebSocketBufferOverflowException__ctor_mBB8DC65F47462CFAB11DE171F612C79339D42462,
	WebSocketBufferOverflowException__ctor_m5D4012BDE80EB0573E5631AE28E9A3B90A38917F,
	WebSocketBufferOverflowException__ctor_m386B60BE64CF430E106F78A40400A0A7FE3B6377,
	WebSocketHandshakeFailedException__ctor_mF7166C896E5A4FCBE8C8167500D8978B98BD16A9,
	WebSocketHandshakeFailedException__ctor_m26FFFA4E3D20A2B7D4E95067F0E5653020C40CCD,
	WebSocketHandshakeFailedException__ctor_m0E2A45FB357C0249BA77FDC1E56981126D7EC173,
	WebSocketVersionNotSupportedException__ctor_mB4FB99B1B7EE74C97A4459B8BEB18E8A3FEFBE46,
	WebSocketVersionNotSupportedException__ctor_m595A3CA38D6C583A34C8FF1D4BF47D280E7F5711,
	WebSocketVersionNotSupportedException__ctor_m264C44100C5BF3B6542B9B1C8DFDAC9DF4628B87,
	PublicBufferMemoryStream__ctor_mAA760D4A3D5713266BFB344D14F907BFC2C069F3,
	PublicBufferMemoryStream_get_Length_m9C91999B148835304C54DFB00DD6D8EBF7059D45,
	PublicBufferMemoryStream_BeginRead_mA1F476D6C10543A738D869CF37AC408D2FEE75EF,
	PublicBufferMemoryStream_BeginWrite_m50C6D3E6E9A0715DC39381081364099D717D410D,
	PublicBufferMemoryStream_get_CanRead_m17A5F06EE2AF30E077A3931A8816714A14CAD66B,
	PublicBufferMemoryStream_get_CanSeek_mA55D0D0D3084848F6E4432228AD13D72E2BD3DB3,
	PublicBufferMemoryStream_get_CanTimeout_m56CBCB888FE977853F5B285A7FBAFAAA71AF2443,
	PublicBufferMemoryStream_get_CanWrite_m33F1F6291D1815522BF4AE4AE0652E4B325CA0DC,
	PublicBufferMemoryStream_get_Capacity_m3B7E7FF586081009B98330767C43F50E483D97EC,
	PublicBufferMemoryStream_set_Capacity_m394BB65BA353742266E103BEAE5E72461C73799D,
	PublicBufferMemoryStream_Close_m4C9B7E2A6EC82D0D560156A67C731E1078AEE341,
	PublicBufferMemoryStream_CopyToAsync_m455EE6FF0E6CDD8161E7E0708AF489F2091935D3,
	PublicBufferMemoryStream_EndRead_mC115844BC59022B36650C96E92EE705E7E217514,
	PublicBufferMemoryStream_EndWrite_mA19C7B46D88924006C04AAEBA2A64E8EA154AD4D,
	PublicBufferMemoryStream_Flush_m1408FFE75CA73E1DB335EFBEAB787874EE069A1F,
	PublicBufferMemoryStream_FlushAsync_m22D11E4E46FD4239FC2E355A4DE763F0B198C902,
	PublicBufferMemoryStream_GetBuffer_m9AE3F1F4CF8AC9F7900C4286C1C1E079F7214D8F,
	PublicBufferMemoryStream_get_Position_m1B1435F375F39B1D9C40EDA1E201D72F09B2BAFE,
	PublicBufferMemoryStream_set_Position_m71F5DF784A261BB1257BB7654A2B6E1DFDC823FF,
	PublicBufferMemoryStream_Read_m6CE36823D0B8EDB14EF5E09545094ADB894F495C,
	PublicBufferMemoryStream_EnlargeBufferIfRequired_m6D118E62325D4322D1834DD057701481D33A7A43,
	PublicBufferMemoryStream_WriteByte_m99520D17CF41203BB02AF99F5BE7CE0205C7A1C0,
	PublicBufferMemoryStream_Write_m742E41596F75CD3BBE9318D31764884EBC40DC63,
	PublicBufferMemoryStream_WriteAsync_mD56DFB14FEC395336D6C328E582B145C930AB048,
	PublicBufferMemoryStream_InitializeLifetimeService_mB9CE7777B23A22D1909C1FD5ACDFA310D3AD30F3,
	PublicBufferMemoryStream_ReadAsync_m8848B017CC9C0BE0A5C57430FBFE1CB7C6B370F6,
	PublicBufferMemoryStream_ReadByte_m2209396D780070095582209D69F5F42A21574E6F,
	PublicBufferMemoryStream_get_ReadTimeout_mBB9040F2894D8EBBB45388F588B1CD573E91A004,
	PublicBufferMemoryStream_set_ReadTimeout_m33070D03B727B4B5C753F061AB0FA989603601C4,
	PublicBufferMemoryStream_Seek_mFB8B7F277CC8D2CE3346FFA42EEF3083D6C9ADC5,
	PublicBufferMemoryStream_SetLength_m2DCD1D5A64A3ABFF661833717106D09C7D86B2DB,
	PublicBufferMemoryStream_ToArray_mC44864D08981DA1FBD520B386B13EBD39EB0B9A2,
	PublicBufferMemoryStream_get_WriteTimeout_mF1DC9664B402CAF0AECC7FDDEB6855FF8C3ACC53,
	PublicBufferMemoryStream_set_WriteTimeout_m4CB149CF46BACCB1C74820D86AE1118EAECB1837,
	PublicBufferMemoryStream_TryGetBuffer_mB5355306A082248AC83E1CD8047A01209F77F1B7,
	PublicBufferMemoryStream_WriteTo_m32C1D86AD4195FCEFC3F7E6D143AE28CE6CCBB1C,
	U3CReadHttpHeaderAsyncU3Ed__3_MoveNext_m948BA992E9C195E4C980768A65F3DDE8F2073BB0_AdjustorThunk,
	U3CReadHttpHeaderAsyncU3Ed__3_SetStateMachine_m209D478BE98A85491FE10F2D9766DA70485A4B81_AdjustorThunk,
	U3CU3Ec__cctor_m54E0C00C514B40BD42C847721EEFC73B79BC61DA,
	U3CU3Ec__ctor_m8DEFD8A86EB4BEEF8872B61D57CB8649564E1A7F,
	U3CU3Ec_U3CGetSubProtocolsU3Eb__6_0_mABFAF2E7BB612EE16905794B86AEB1A9EB9E2175,
	U3CWriteHttpHeaderAsyncU3Ed__8_MoveNext_mE5F14F903A27E8A92F4CD976C5BA945C890D5C62_AdjustorThunk,
	U3CWriteHttpHeaderAsyncU3Ed__8_SetStateMachine_m62A17F5631796D9D694C9F0DD362C31E690EE00E_AdjustorThunk,
	U3CSendPingU3Ed__11_MoveNext_mF0DF296E0E827E1082AD277513584AA00ED1A676_AdjustorThunk,
	U3CSendPingU3Ed__11_SetStateMachine_m214CE2CB28440588799969E606E183736E8735B2_AdjustorThunk,
	U3CPingForeverU3Ed__13_MoveNext_m0DAC6997D4D015EE9B1F1576799069253FDF2660_AdjustorThunk,
	U3CPingForeverU3Ed__13_SetStateMachine_m968BE087BBB663D79A52E3C2FAB58055A765E51C_AdjustorThunk,
	U3CConnectAsyncU3Ed__4_MoveNext_mC53E22B4B246A9BBB993A50DD404ECB2D8D03F0C_AdjustorThunk,
	U3CConnectAsyncU3Ed__4_SetStateMachine_m7460D9FE4AEE4EE2AAC3C27177C1918345A8D802_AdjustorThunk,
	U3CConnectAsyncU3Ed__5_MoveNext_mBB585ECEA64ADD7EC294DAAF35EFCAA87AC0EBC3_AdjustorThunk,
	U3CConnectAsyncU3Ed__5_SetStateMachine_mF2553FABBB0DEC9725257C9E30D08E5FAD010446_AdjustorThunk,
	U3CConnectAsyncU3Ed__6_MoveNext_m180EDB27BD6A9A8A15FF8415AEBC10967E7F7BE3_AdjustorThunk,
	U3CConnectAsyncU3Ed__6_SetStateMachine_mC117340C351E6CE258A3C2DD024AA738E1B2822A_AdjustorThunk,
	U3CConnectAsyncU3Ed__7_MoveNext_m1ED0EA2F01A722C7B5323BE3BA05D72837C9D1A1_AdjustorThunk,
	U3CConnectAsyncU3Ed__7_SetStateMachine_m8B3CC3F46BAEC676B66776187769970D588FBE54_AdjustorThunk,
	U3CPerformHandshakeU3Ed__14_MoveNext_m2CCE0D26F730AECFF692A1E6185E22D2A9FD34A2_AdjustorThunk,
	U3CPerformHandshakeU3Ed__14_SetStateMachine_m4F046F9B8C294EC96DF5A226566F74C17FE910F1_AdjustorThunk,
	U3CReadHttpHeaderFromStreamAsyncU3Ed__4_MoveNext_mBA1858D1ACA1D1998A6E02C8DC2A5F6EF7D59849_AdjustorThunk,
	U3CReadHttpHeaderFromStreamAsyncU3Ed__4_SetStateMachine_mCE59D53D014CC9221D48D0BA2CD336A8F47EDB93_AdjustorThunk,
	U3CAcceptWebSocketAsyncU3Ed__5_MoveNext_m2D8CDC10139A44C45A94073E71E7D7BF22E2D411_AdjustorThunk,
	U3CAcceptWebSocketAsyncU3Ed__5_SetStateMachine_m93BAA36E88AE0DE2F3D495CD0E89A8685F08A8D5_AdjustorThunk,
	U3CAcceptWebSocketAsyncU3Ed__6_MoveNext_m2DA992B6C3E98FD83750BC0CB967993259ECBD95_AdjustorThunk,
	U3CAcceptWebSocketAsyncU3Ed__6_SetStateMachine_mCBC617950048B59545D45061ACFD8BB0A4883211_AdjustorThunk,
	U3CPerformHandshakeAsyncU3Ed__8_MoveNext_mD405CDA01AA040C711F071258B99ABEFCF9EBDCF_AdjustorThunk,
	U3CPerformHandshakeAsyncU3Ed__8_SetStateMachine_m77079664E0FE410A658975F161A3EBAECF20B87E_AdjustorThunk,
	U3CReadExactlyU3Ed__0_MoveNext_m4CECD1BD492A8EEFBD684BB450D4DE8B68780F69_AdjustorThunk,
	U3CReadExactlyU3Ed__0_SetStateMachine_mCFA1FE3A297F4B4618E50B88C32CD41ED3D1CE50_AdjustorThunk,
	U3CReadUShortExactlyU3Ed__1_MoveNext_mB619705604F9488B0FBAF17F132DA00EA802943E_AdjustorThunk,
	U3CReadUShortExactlyU3Ed__1_SetStateMachine_mB43BA806F7217D54AA65A19F4E737307A357A8D5_AdjustorThunk,
	U3CReadULongExactlyU3Ed__2_MoveNext_mF2EEAFDC1EFBABF5D9D1E3049F4E1C8F1343212A_AdjustorThunk,
	U3CReadULongExactlyU3Ed__2_SetStateMachine_m3367F0AC34F35E475DF7F61AF6922E52EF54F76A_AdjustorThunk,
	U3CReadLongExactlyU3Ed__3_MoveNext_m88154E822A6770E226628D774A089C6323BAE9C0_AdjustorThunk,
	U3CReadLongExactlyU3Ed__3_SetStateMachine_m552E5328E4C5154017AF2D497C589EFF09C589B8_AdjustorThunk,
	U3CReadAsyncU3Ed__0_MoveNext_m922BB2BE2990DD59BA776FDFFF997127B5F55920_AdjustorThunk,
	U3CReadAsyncU3Ed__0_SetStateMachine_mF0DACCAC5C122AABCD242A0C3CC533554F55B991_AdjustorThunk,
	U3CReadLengthU3Ed__2_MoveNext_m617A94F542FA7213D72859CE767EF3883EF53105_AdjustorThunk,
	U3CReadLengthU3Ed__2_SetStateMachine_mC948A7E0922D59F436D2DC4039D4781BE629785A_AdjustorThunk,
	U3CReceiveAsyncU3Ed__35_MoveNext_m9A396BEA41AB7B50AD3B5C8647D11DA685A325A6_AdjustorThunk,
	U3CReceiveAsyncU3Ed__35_SetStateMachine_m71B2AA413ABD87138B1BD0B32E357DE1C88BE93B_AdjustorThunk,
	U3CSendAsyncU3Ed__36_MoveNext_m3DED6F48667C037FF9B37614D83E30F93B289C70_AdjustorThunk,
	U3CSendAsyncU3Ed__36_SetStateMachine_m7B7D2D8CBCA15D9F1FE8D0943606940A9E4CCBB2_AdjustorThunk,
	U3CSendPingAsyncU3Ed__37_MoveNext_m72662311D82B3B59DF86470F5AD2FC9D64327242_AdjustorThunk,
	U3CSendPingAsyncU3Ed__37_SetStateMachine_mB987667A9616ECD9F755CC4718E8EB553E943A84_AdjustorThunk,
	U3CCloseAsyncU3Ed__39_MoveNext_m4B9403CDC9074F7B7BC4ED250C4E46FF7AD8FA2E_AdjustorThunk,
	U3CCloseAsyncU3Ed__39_SetStateMachine_m138C1CCECAAB4BB3F7077A4726B5121C48C308D5_AdjustorThunk,
	U3CCloseOutputAsyncU3Ed__40_MoveNext_m16893577FD0E86F0DB01C48D65478FFB0879282D_AdjustorThunk,
	U3CCloseOutputAsyncU3Ed__40_SetStateMachine_m4F717CDA0944E4EB10EE2B4BC3CDD00A667FF9F6_AdjustorThunk,
	U3CSendPongAsyncU3Ed__44_MoveNext_m90796BF84457D076595D2123FF5168513E1CCA88_AdjustorThunk,
	U3CSendPongAsyncU3Ed__44_SetStateMachine_m80F7724017FC16A3F0C879FBACFD2C91DAFD79A2_AdjustorThunk,
	U3CRespondToCloseFrameU3Ed__45_MoveNext_m2E95874EF3B9A5AAC0221B6DDFC242B097DE68DF_AdjustorThunk,
	U3CRespondToCloseFrameU3Ed__45_SetStateMachine_m7ACF698EA22370F856B20989750D401025B35440_AdjustorThunk,
	U3CU3Ec__DisplayClass48_0__ctor_m8B3285E336499E7EC0949DD906528E97FEC3B4FB,
	U3CU3Ec__DisplayClass48_0_U3CWriteStreamToNetworkU3Eb__0_m781B60613A123C8987C674BCC1D0E2F4DEE548E1,
	U3CWriteStreamToNetworkU3Ed__48_MoveNext_mC3D06EC3ECB6D3705E584EC0906085D2C21C0454_AdjustorThunk,
	U3CWriteStreamToNetworkU3Ed__48_SetStateMachine_m84A61699392F6BF8FE917EE292513B8FE1D56D04_AdjustorThunk,
	U3CCloseOutputAutoTimeoutAsyncU3Ed__50_MoveNext_mA0E0538B8C02120B7DA013DCDC9B6DEE1FECFC2F_AdjustorThunk,
	U3CCloseOutputAutoTimeoutAsyncU3Ed__50_SetStateMachine_m1A99A3A854543A3A18CCD905AE592EE5695BDEF5_AdjustorThunk,
};
static const int32_t s_InvokerIndices[305] = 
{
	23,
	32,
	14,
	26,
	4,
	0,
	899,
	114,
	0,
	0,
	0,
	2652,
	23,
	14,
	26,
	26,
	1482,
	1328,
	2653,
	2654,
	2653,
	1328,
	2653,
	26,
	26,
	2655,
	1482,
	26,
	14,
	27,
	2577,
	2576,
	2576,
	23,
	26,
	1328,
	2653,
	2654,
	2656,
	28,
	1043,
	26,
	2657,
	2658,
	0,
	2659,
	320,
	820,
	89,
	31,
	14,
	26,
	89,
	31,
	14,
	26,
	14,
	26,
	23,
	89,
	31,
	14,
	26,
	14,
	26,
	14,
	26,
	14,
	26,
	14,
	26,
	2660,
	23,
	26,
	2653,
	1328,
	2653,
	163,
	2661,
	320,
	820,
	89,
	31,
	14,
	26,
	23,
	2662,
	2663,
	2663,
	2663,
	2664,
	2665,
	2665,
	2666,
	23,
	1720,
	1720,
	1033,
	1033,
	1033,
	32,
	1787,
	1033,
	1787,
	1787,
	1787,
	1033,
	1033,
	1033,
	1787,
	1787,
	1787,
	1033,
	1033,
	1033,
	2667,
	1033,
	2667,
	2668,
	2669,
	2670,
	1787,
	2671,
	2672,
	2673,
	2673,
	2673,
	1033,
	2674,
	2667,
	2667,
	2675,
	2667,
	2667,
	23,
	3,
	89,
	31,
	10,
	32,
	10,
	32,
	1481,
	2676,
	14,
	26,
	1404,
	2677,
	2678,
	2679,
	2680,
	2681,
	3,
	2682,
	26,
	26,
	14,
	26,
	2683,
	1481,
	14,
	10,
	14,
	320,
	820,
	1482,
	1483,
	1482,
	23,
	1321,
	1321,
	23,
	26,
	2684,
	1482,
	2685,
	2686,
	1328,
	37,
	591,
	23,
	26,
	27,
	14,
	26,
	14,
	26,
	14,
	26,
	23,
	26,
	209,
	27,
	23,
	26,
	27,
	23,
	26,
	27,
	23,
	26,
	27,
	23,
	26,
	27,
	23,
	26,
	27,
	27,
	184,
	739,
	739,
	89,
	89,
	89,
	89,
	10,
	32,
	23,
	737,
	112,
	26,
	23,
	734,
	14,
	184,
	210,
	506,
	32,
	31,
	35,
	736,
	14,
	736,
	10,
	10,
	32,
	738,
	210,
	14,
	10,
	32,
	735,
	26,
	23,
	26,
	3,
	23,
	28,
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
	23,
	26,
	23,
	28,
	23,
	26,
	23,
	26,
};
extern const Il2CppCodeGenModule g_Ninja_WebSocketsCodeGenModule;
const Il2CppCodeGenModule g_Ninja_WebSocketsCodeGenModule = 
{
	"Ninja.WebSockets.dll",
	305,
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
