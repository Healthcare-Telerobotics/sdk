// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: state_manager.proto
#ifndef GRPC_state_5fmanager_2eproto__INCLUDED
#define GRPC_state_5fmanager_2eproto__INCLUDED

#include "state_manager.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace telerobotics {
namespace protos {

//
// Manages the state of the procedure
class StateManagerService final {
 public:
  static constexpr char const* service_full_name() {
    return "telerobotics.protos.StateManagerService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Receives catheter data from clients
    std::unique_ptr< ::grpc::ClientWriterInterface< ::telerobotics::protos::SendCatheterDataRequest>> SendCatheterData(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response) {
      return std::unique_ptr< ::grpc::ClientWriterInterface< ::telerobotics::protos::SendCatheterDataRequest>>(SendCatheterDataRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::telerobotics::protos::SendCatheterDataRequest>> AsyncSendCatheterData(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::telerobotics::protos::SendCatheterDataRequest>>(AsyncSendCatheterDataRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::telerobotics::protos::SendCatheterDataRequest>> PrepareAsyncSendCatheterData(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::telerobotics::protos::SendCatheterDataRequest>>(PrepareAsyncSendCatheterDataRaw(context, response, cq));
    }
    // Stream frames to all listeners
    std::unique_ptr< ::grpc::ClientReaderInterface< ::telerobotics::protos::StreamFramesResponse>> StreamFrames(::grpc::ClientContext* context, const ::telerobotics::protos::StreamFramesRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::telerobotics::protos::StreamFramesResponse>>(StreamFramesRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::telerobotics::protos::StreamFramesResponse>> AsyncStreamFrames(::grpc::ClientContext* context, const ::telerobotics::protos::StreamFramesRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::telerobotics::protos::StreamFramesResponse>>(AsyncStreamFramesRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::telerobotics::protos::StreamFramesResponse>> PrepareAsyncStreamFrames(::grpc::ClientContext* context, const ::telerobotics::protos::StreamFramesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::telerobotics::protos::StreamFramesResponse>>(PrepareAsyncStreamFramesRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // Receives catheter data from clients
      virtual void SendCatheterData(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response, ::grpc::experimental::ClientWriteReactor< ::telerobotics::protos::SendCatheterDataRequest>* reactor) = 0;
      // Stream frames to all listeners
      virtual void StreamFrames(::grpc::ClientContext* context, ::telerobotics::protos::StreamFramesRequest* request, ::grpc::experimental::ClientReadReactor< ::telerobotics::protos::StreamFramesResponse>* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientWriterInterface< ::telerobotics::protos::SendCatheterDataRequest>* SendCatheterDataRaw(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::telerobotics::protos::SendCatheterDataRequest>* AsyncSendCatheterDataRaw(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::telerobotics::protos::SendCatheterDataRequest>* PrepareAsyncSendCatheterDataRaw(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::telerobotics::protos::StreamFramesResponse>* StreamFramesRaw(::grpc::ClientContext* context, const ::telerobotics::protos::StreamFramesRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::telerobotics::protos::StreamFramesResponse>* AsyncStreamFramesRaw(::grpc::ClientContext* context, const ::telerobotics::protos::StreamFramesRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::telerobotics::protos::StreamFramesResponse>* PrepareAsyncStreamFramesRaw(::grpc::ClientContext* context, const ::telerobotics::protos::StreamFramesRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientWriter< ::telerobotics::protos::SendCatheterDataRequest>> SendCatheterData(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response) {
      return std::unique_ptr< ::grpc::ClientWriter< ::telerobotics::protos::SendCatheterDataRequest>>(SendCatheterDataRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::telerobotics::protos::SendCatheterDataRequest>> AsyncSendCatheterData(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::telerobotics::protos::SendCatheterDataRequest>>(AsyncSendCatheterDataRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::telerobotics::protos::SendCatheterDataRequest>> PrepareAsyncSendCatheterData(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::telerobotics::protos::SendCatheterDataRequest>>(PrepareAsyncSendCatheterDataRaw(context, response, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::telerobotics::protos::StreamFramesResponse>> StreamFrames(::grpc::ClientContext* context, const ::telerobotics::protos::StreamFramesRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::telerobotics::protos::StreamFramesResponse>>(StreamFramesRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::telerobotics::protos::StreamFramesResponse>> AsyncStreamFrames(::grpc::ClientContext* context, const ::telerobotics::protos::StreamFramesRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::telerobotics::protos::StreamFramesResponse>>(AsyncStreamFramesRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::telerobotics::protos::StreamFramesResponse>> PrepareAsyncStreamFrames(::grpc::ClientContext* context, const ::telerobotics::protos::StreamFramesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::telerobotics::protos::StreamFramesResponse>>(PrepareAsyncStreamFramesRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void SendCatheterData(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response, ::grpc::experimental::ClientWriteReactor< ::telerobotics::protos::SendCatheterDataRequest>* reactor) override;
      void StreamFrames(::grpc::ClientContext* context, ::telerobotics::protos::StreamFramesRequest* request, ::grpc::experimental::ClientReadReactor< ::telerobotics::protos::StreamFramesResponse>* reactor) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientWriter< ::telerobotics::protos::SendCatheterDataRequest>* SendCatheterDataRaw(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response) override;
    ::grpc::ClientAsyncWriter< ::telerobotics::protos::SendCatheterDataRequest>* AsyncSendCatheterDataRaw(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncWriter< ::telerobotics::protos::SendCatheterDataRequest>* PrepareAsyncSendCatheterDataRaw(::grpc::ClientContext* context, ::telerobotics::protos::SendCatheterDataResponse* response, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReader< ::telerobotics::protos::StreamFramesResponse>* StreamFramesRaw(::grpc::ClientContext* context, const ::telerobotics::protos::StreamFramesRequest& request) override;
    ::grpc::ClientAsyncReader< ::telerobotics::protos::StreamFramesResponse>* AsyncStreamFramesRaw(::grpc::ClientContext* context, const ::telerobotics::protos::StreamFramesRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::telerobotics::protos::StreamFramesResponse>* PrepareAsyncStreamFramesRaw(::grpc::ClientContext* context, const ::telerobotics::protos::StreamFramesRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SendCatheterData_;
    const ::grpc::internal::RpcMethod rpcmethod_StreamFrames_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Receives catheter data from clients
    virtual ::grpc::Status SendCatheterData(::grpc::ServerContext* context, ::grpc::ServerReader< ::telerobotics::protos::SendCatheterDataRequest>* reader, ::telerobotics::protos::SendCatheterDataResponse* response);
    // Stream frames to all listeners
    virtual ::grpc::Status StreamFrames(::grpc::ServerContext* context, const ::telerobotics::protos::StreamFramesRequest* request, ::grpc::ServerWriter< ::telerobotics::protos::StreamFramesResponse>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_SendCatheterData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SendCatheterData() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SendCatheterData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendCatheterData(::grpc::ServerContext* context, ::grpc::ServerReader< ::telerobotics::protos::SendCatheterDataRequest>* reader, ::telerobotics::protos::SendCatheterDataResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendCatheterData(::grpc::ServerContext* context, ::grpc::ServerAsyncReader< ::telerobotics::protos::SendCatheterDataResponse, ::telerobotics::protos::SendCatheterDataRequest>* reader, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncClientStreaming(0, context, reader, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_StreamFrames : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_StreamFrames() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_StreamFrames() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamFrames(::grpc::ServerContext* context, const ::telerobotics::protos::StreamFramesRequest* request, ::grpc::ServerWriter< ::telerobotics::protos::StreamFramesResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStreamFrames(::grpc::ServerContext* context, ::telerobotics::protos::StreamFramesRequest* request, ::grpc::ServerAsyncWriter< ::telerobotics::protos::StreamFramesResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SendCatheterData<WithAsyncMethod_StreamFrames<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_SendCatheterData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_SendCatheterData() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackClientStreamingHandler< ::telerobotics::protos::SendCatheterDataRequest, ::telerobotics::protos::SendCatheterDataResponse>(
          [this] { return this->SendCatheterData(); }));
    }
    ~ExperimentalWithCallbackMethod_SendCatheterData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendCatheterData(::grpc::ServerContext* context, ::grpc::ServerReader< ::telerobotics::protos::SendCatheterDataRequest>* reader, ::telerobotics::protos::SendCatheterDataResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerReadReactor< ::telerobotics::protos::SendCatheterDataRequest, ::telerobotics::protos::SendCatheterDataResponse>* SendCatheterData() {
      return new ::grpc::internal::UnimplementedReadReactor<
        ::telerobotics::protos::SendCatheterDataRequest, ::telerobotics::protos::SendCatheterDataResponse>;}
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_StreamFrames : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_StreamFrames() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc::internal::CallbackServerStreamingHandler< ::telerobotics::protos::StreamFramesRequest, ::telerobotics::protos::StreamFramesResponse>(
          [this] { return this->StreamFrames(); }));
    }
    ~ExperimentalWithCallbackMethod_StreamFrames() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamFrames(::grpc::ServerContext* context, const ::telerobotics::protos::StreamFramesRequest* request, ::grpc::ServerWriter< ::telerobotics::protos::StreamFramesResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerWriteReactor< ::telerobotics::protos::StreamFramesRequest, ::telerobotics::protos::StreamFramesResponse>* StreamFrames() {
      return new ::grpc::internal::UnimplementedWriteReactor<
        ::telerobotics::protos::StreamFramesRequest, ::telerobotics::protos::StreamFramesResponse>;}
  };
  typedef ExperimentalWithCallbackMethod_SendCatheterData<ExperimentalWithCallbackMethod_StreamFrames<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SendCatheterData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SendCatheterData() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SendCatheterData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendCatheterData(::grpc::ServerContext* context, ::grpc::ServerReader< ::telerobotics::protos::SendCatheterDataRequest>* reader, ::telerobotics::protos::SendCatheterDataResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_StreamFrames : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_StreamFrames() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_StreamFrames() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamFrames(::grpc::ServerContext* context, const ::telerobotics::protos::StreamFramesRequest* request, ::grpc::ServerWriter< ::telerobotics::protos::StreamFramesResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SendCatheterData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_SendCatheterData() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SendCatheterData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendCatheterData(::grpc::ServerContext* context, ::grpc::ServerReader< ::telerobotics::protos::SendCatheterDataRequest>* reader, ::telerobotics::protos::SendCatheterDataResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendCatheterData(::grpc::ServerContext* context, ::grpc::ServerAsyncReader< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* reader, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncClientStreaming(0, context, reader, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_StreamFrames : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_StreamFrames() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_StreamFrames() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamFrames(::grpc::ServerContext* context, const ::telerobotics::protos::StreamFramesRequest* request, ::grpc::ServerWriter< ::telerobotics::protos::StreamFramesResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStreamFrames(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_SendCatheterData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_SendCatheterData() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackClientStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this] { return this->SendCatheterData(); }));
    }
    ~ExperimentalWithRawCallbackMethod_SendCatheterData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendCatheterData(::grpc::ServerContext* context, ::grpc::ServerReader< ::telerobotics::protos::SendCatheterDataRequest>* reader, ::telerobotics::protos::SendCatheterDataResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerReadReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* SendCatheterData() {
      return new ::grpc::internal::UnimplementedReadReactor<
        ::grpc::ByteBuffer, ::grpc::ByteBuffer>;}
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_StreamFrames : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_StreamFrames() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this] { return this->StreamFrames(); }));
    }
    ~ExperimentalWithRawCallbackMethod_StreamFrames() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamFrames(::grpc::ServerContext* context, const ::telerobotics::protos::StreamFramesRequest* request, ::grpc::ServerWriter< ::telerobotics::protos::StreamFramesResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerWriteReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* StreamFrames() {
      return new ::grpc::internal::UnimplementedWriteReactor<
        ::grpc::ByteBuffer, ::grpc::ByteBuffer>;}
  };
  typedef Service StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_StreamFrames : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_StreamFrames() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::SplitServerStreamingHandler< ::telerobotics::protos::StreamFramesRequest, ::telerobotics::protos::StreamFramesResponse>(std::bind(&WithSplitStreamingMethod_StreamFrames<BaseClass>::StreamedStreamFrames, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_StreamFrames() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status StreamFrames(::grpc::ServerContext* context, const ::telerobotics::protos::StreamFramesRequest* request, ::grpc::ServerWriter< ::telerobotics::protos::StreamFramesResponse>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedStreamFrames(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::telerobotics::protos::StreamFramesRequest,::telerobotics::protos::StreamFramesResponse>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_StreamFrames<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_StreamFrames<Service > StreamedService;
};

}  // namespace protos
}  // namespace telerobotics


#endif  // GRPC_state_5fmanager_2eproto__INCLUDED
