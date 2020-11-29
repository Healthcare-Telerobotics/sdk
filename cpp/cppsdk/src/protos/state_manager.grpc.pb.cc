// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: state_manager.proto

#include "state_manager.pb.h"
#include "state_manager.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace telerobotics {
namespace protos {

static const char* StateManagerService_method_names[] = {
  "/telerobotics.protos.StateManagerService/SendCatheterData",
  "/telerobotics.protos.StateManagerService/StreamFrames",
};

std::unique_ptr< StateManagerService::Stub> StateManagerService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< StateManagerService::Stub> stub(new StateManagerService::Stub(channel));
  return stub;
}

StateManagerService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SendCatheterData_(StateManagerService_method_names[0], ::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_StreamFrames_(StateManagerService_method_names[1], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientWriter< ::telerobotics::protos::SendCatheterDataRequest>* StateManagerService::Stub::SendCatheterDataRaw(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response) {
  return ::grpc::internal::ClientWriterFactory< ::telerobotics::protos::SendCatheterDataRequest>::Create(channel_.get(), rpcmethod_SendCatheterData_, context, response);
}

void StateManagerService::Stub::experimental_async::SendCatheterData(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response, ::grpc::experimental::ClientWriteReactor< ::telerobotics::protos::SendCatheterDataRequest>* reactor) {
  ::grpc::internal::ClientCallbackWriterFactory< ::telerobotics::protos::SendCatheterDataRequest>::Create(stub_->channel_.get(), stub_->rpcmethod_SendCatheterData_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::telerobotics::protos::SendCatheterDataRequest>* StateManagerService::Stub::AsyncSendCatheterDataRaw(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::telerobotics::protos::SendCatheterDataRequest>::Create(channel_.get(), cq, rpcmethod_SendCatheterData_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::telerobotics::protos::SendCatheterDataRequest>* StateManagerService::Stub::PrepareAsyncSendCatheterDataRaw(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::telerobotics::protos::SendCatheterDataRequest>::Create(channel_.get(), cq, rpcmethod_SendCatheterData_, context, response, false, nullptr);
}

::grpc::ClientReader< ::telerobotics::protos::StreamFramesResponse>* StateManagerService::Stub::StreamFramesRaw(::grpc::ClientContext* context, const ::telerobotics::protos::StreamFramesRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::telerobotics::protos::StreamFramesResponse>::Create(channel_.get(), rpcmethod_StreamFrames_, context, request);
}

void StateManagerService::Stub::experimental_async::StreamFrames(::grpc::ClientContext* context, ::telerobotics::protos::StreamFramesRequest* request, ::grpc::experimental::ClientReadReactor< ::telerobotics::protos::StreamFramesResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::telerobotics::protos::StreamFramesResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_StreamFrames_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::telerobotics::protos::StreamFramesResponse>* StateManagerService::Stub::AsyncStreamFramesRaw(::grpc::ClientContext* context, const ::telerobotics::protos::StreamFramesRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::telerobotics::protos::StreamFramesResponse>::Create(channel_.get(), cq, rpcmethod_StreamFrames_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::telerobotics::protos::StreamFramesResponse>* StateManagerService::Stub::PrepareAsyncStreamFramesRaw(::grpc::ClientContext* context, const ::telerobotics::protos::StreamFramesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::telerobotics::protos::StreamFramesResponse>::Create(channel_.get(), cq, rpcmethod_StreamFrames_, context, request, false, nullptr);
}

StateManagerService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StateManagerService_method_names[0],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< StateManagerService::Service, ::telerobotics::protos::SendCatheterDataRequest, ::telerobotics::protos::SendCatheterDataResponse>(
          std::mem_fn(&StateManagerService::Service::SendCatheterData), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StateManagerService_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< StateManagerService::Service, ::telerobotics::protos::StreamFramesRequest, ::telerobotics::protos::StreamFramesResponse>(
          std::mem_fn(&StateManagerService::Service::StreamFrames), this)));
}

StateManagerService::Service::~Service() {
}

::grpc::Status StateManagerService::Service::SendCatheterData(::grpc::ServerContext* context, ::grpc::ServerReader< ::telerobotics::protos::SendCatheterDataRequest>* reader, ::telerobotics::protos::SendCatheterDataResponse* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StateManagerService::Service::StreamFrames(::grpc::ServerContext* context, const ::telerobotics::protos::StreamFramesRequest* request, ::grpc::ServerWriter< ::telerobotics::protos::StreamFramesResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace telerobotics
}  // namespace protos
