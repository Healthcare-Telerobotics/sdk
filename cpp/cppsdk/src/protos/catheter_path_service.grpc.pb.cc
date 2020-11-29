// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: catheter_path_service.proto

#include "catheter_path_service.pb.h"
#include "catheter_path_service.grpc.pb.h"

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

static const char* CatheterPathService_method_names[] = {
  "/telerobotics.protos.CatheterPathService/Create",
  "/telerobotics.protos.CatheterPathService/Get",
  "/telerobotics.protos.CatheterPathService/GetCoordinates",
  "/telerobotics.protos.CatheterPathService/List",
};

std::unique_ptr< CatheterPathService::Stub> CatheterPathService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< CatheterPathService::Stub> stub(new CatheterPathService::Stub(channel));
  return stub;
}

CatheterPathService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Create_(CatheterPathService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Get_(CatheterPathService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetCoordinates_(CatheterPathService_method_names[2], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_List_(CatheterPathService_method_names[3], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::Status CatheterPathService::Stub::Create(::grpc::ClientContext* context, const ::telerobotics::protos::CreateCatheterPathRequest& request, ::telerobotics::protos::CreateCatheterPathResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Create_, context, request, response);
}

void CatheterPathService::Stub::experimental_async::Create(::grpc::ClientContext* context, const ::telerobotics::protos::CreateCatheterPathRequest* request, ::telerobotics::protos::CreateCatheterPathResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Create_, context, request, response, std::move(f));
}

void CatheterPathService::Stub::experimental_async::Create(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::telerobotics::protos::CreateCatheterPathResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Create_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::telerobotics::protos::CreateCatheterPathResponse>* CatheterPathService::Stub::AsyncCreateRaw(::grpc::ClientContext* context, const ::telerobotics::protos::CreateCatheterPathRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::telerobotics::protos::CreateCatheterPathResponse>::Create(channel_.get(), cq, rpcmethod_Create_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::telerobotics::protos::CreateCatheterPathResponse>* CatheterPathService::Stub::PrepareAsyncCreateRaw(::grpc::ClientContext* context, const ::telerobotics::protos::CreateCatheterPathRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::telerobotics::protos::CreateCatheterPathResponse>::Create(channel_.get(), cq, rpcmethod_Create_, context, request, false);
}

::grpc::Status CatheterPathService::Stub::Get(::grpc::ClientContext* context, const ::telerobotics::protos::GetCatheterPathRequest& request, ::telerobotics::protos::GetCatheterPathResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Get_, context, request, response);
}

void CatheterPathService::Stub::experimental_async::Get(::grpc::ClientContext* context, const ::telerobotics::protos::GetCatheterPathRequest* request, ::telerobotics::protos::GetCatheterPathResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Get_, context, request, response, std::move(f));
}

void CatheterPathService::Stub::experimental_async::Get(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::telerobotics::protos::GetCatheterPathResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Get_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::telerobotics::protos::GetCatheterPathResponse>* CatheterPathService::Stub::AsyncGetRaw(::grpc::ClientContext* context, const ::telerobotics::protos::GetCatheterPathRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::telerobotics::protos::GetCatheterPathResponse>::Create(channel_.get(), cq, rpcmethod_Get_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::telerobotics::protos::GetCatheterPathResponse>* CatheterPathService::Stub::PrepareAsyncGetRaw(::grpc::ClientContext* context, const ::telerobotics::protos::GetCatheterPathRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::telerobotics::protos::GetCatheterPathResponse>::Create(channel_.get(), cq, rpcmethod_Get_, context, request, false);
}

::grpc::ClientReader< ::telerobotics::protos::GetCoordinatesCatheterPathResponse>* CatheterPathService::Stub::GetCoordinatesRaw(::grpc::ClientContext* context, const ::telerobotics::protos::GetCoordinatesCatheterPathRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::telerobotics::protos::GetCoordinatesCatheterPathResponse>::Create(channel_.get(), rpcmethod_GetCoordinates_, context, request);
}

void CatheterPathService::Stub::experimental_async::GetCoordinates(::grpc::ClientContext* context, ::telerobotics::protos::GetCoordinatesCatheterPathRequest* request, ::grpc::experimental::ClientReadReactor< ::telerobotics::protos::GetCoordinatesCatheterPathResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::telerobotics::protos::GetCoordinatesCatheterPathResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_GetCoordinates_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::telerobotics::protos::GetCoordinatesCatheterPathResponse>* CatheterPathService::Stub::AsyncGetCoordinatesRaw(::grpc::ClientContext* context, const ::telerobotics::protos::GetCoordinatesCatheterPathRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::telerobotics::protos::GetCoordinatesCatheterPathResponse>::Create(channel_.get(), cq, rpcmethod_GetCoordinates_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::telerobotics::protos::GetCoordinatesCatheterPathResponse>* CatheterPathService::Stub::PrepareAsyncGetCoordinatesRaw(::grpc::ClientContext* context, const ::telerobotics::protos::GetCoordinatesCatheterPathRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::telerobotics::protos::GetCoordinatesCatheterPathResponse>::Create(channel_.get(), cq, rpcmethod_GetCoordinates_, context, request, false, nullptr);
}

::grpc::ClientReader< ::telerobotics::protos::ListCatheterPathsResponse>* CatheterPathService::Stub::ListRaw(::grpc::ClientContext* context, const ::telerobotics::protos::ListCatheterPathsRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::telerobotics::protos::ListCatheterPathsResponse>::Create(channel_.get(), rpcmethod_List_, context, request);
}

void CatheterPathService::Stub::experimental_async::List(::grpc::ClientContext* context, ::telerobotics::protos::ListCatheterPathsRequest* request, ::grpc::experimental::ClientReadReactor< ::telerobotics::protos::ListCatheterPathsResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::telerobotics::protos::ListCatheterPathsResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_List_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::telerobotics::protos::ListCatheterPathsResponse>* CatheterPathService::Stub::AsyncListRaw(::grpc::ClientContext* context, const ::telerobotics::protos::ListCatheterPathsRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::telerobotics::protos::ListCatheterPathsResponse>::Create(channel_.get(), cq, rpcmethod_List_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::telerobotics::protos::ListCatheterPathsResponse>* CatheterPathService::Stub::PrepareAsyncListRaw(::grpc::ClientContext* context, const ::telerobotics::protos::ListCatheterPathsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::telerobotics::protos::ListCatheterPathsResponse>::Create(channel_.get(), cq, rpcmethod_List_, context, request, false, nullptr);
}

CatheterPathService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CatheterPathService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CatheterPathService::Service, ::telerobotics::protos::CreateCatheterPathRequest, ::telerobotics::protos::CreateCatheterPathResponse>(
          std::mem_fn(&CatheterPathService::Service::Create), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CatheterPathService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CatheterPathService::Service, ::telerobotics::protos::GetCatheterPathRequest, ::telerobotics::protos::GetCatheterPathResponse>(
          std::mem_fn(&CatheterPathService::Service::Get), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CatheterPathService_method_names[2],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< CatheterPathService::Service, ::telerobotics::protos::GetCoordinatesCatheterPathRequest, ::telerobotics::protos::GetCoordinatesCatheterPathResponse>(
          std::mem_fn(&CatheterPathService::Service::GetCoordinates), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CatheterPathService_method_names[3],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< CatheterPathService::Service, ::telerobotics::protos::ListCatheterPathsRequest, ::telerobotics::protos::ListCatheterPathsResponse>(
          std::mem_fn(&CatheterPathService::Service::List), this)));
}

CatheterPathService::Service::~Service() {
}

::grpc::Status CatheterPathService::Service::Create(::grpc::ServerContext* context, const ::telerobotics::protos::CreateCatheterPathRequest* request, ::telerobotics::protos::CreateCatheterPathResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CatheterPathService::Service::Get(::grpc::ServerContext* context, const ::telerobotics::protos::GetCatheterPathRequest* request, ::telerobotics::protos::GetCatheterPathResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CatheterPathService::Service::GetCoordinates(::grpc::ServerContext* context, const ::telerobotics::protos::GetCoordinatesCatheterPathRequest* request, ::grpc::ServerWriter< ::telerobotics::protos::GetCoordinatesCatheterPathResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CatheterPathService::Service::List(::grpc::ServerContext* context, const ::telerobotics::protos::ListCatheterPathsRequest* request, ::grpc::ServerWriter< ::telerobotics::protos::ListCatheterPathsResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace telerobotics
}  // namespace protos
