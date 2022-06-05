/* soapMdxUpdateServiceProxy.h
   Generated by gSOAP 2.8.122 for mdx_acp_operational.h

gSOAP XML Web services tools
Copyright (C) 2000-2021, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef soapMdxUpdateServiceProxy_H
#define soapMdxUpdateServiceProxy_H
#include "soapH.h"

    class SOAP_CMAC MdxUpdateServiceProxy {
      public:
        /// Context to manage proxy IO and data
        struct soap *soap;
        /// flag indicating that this context is owned by this proxy and should be deleted by the destructor
        bool soap_own;
        /// Endpoint URL of service 'MdxUpdateServiceProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in mdx_acp_operational.h, if any
        /// Construct a proxy with new managing context
        MdxUpdateServiceProxy();
        /// Copy constructor
        MdxUpdateServiceProxy(const MdxUpdateServiceProxy& rhs);
        /// Construct proxy given a shared managing context
        MdxUpdateServiceProxy(struct soap*);
        /// Construct proxy given a shared managing context and endpoint URL
        MdxUpdateServiceProxy(struct soap*, const char *soap_endpoint_url);
        /// Constructor taking an endpoint URL
        MdxUpdateServiceProxy(const char *soap_endpoint_url);
        /// Constructor taking input and output mode flags for the new managing context
        MdxUpdateServiceProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        MdxUpdateServiceProxy(const char *soap_endpoint_url, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        MdxUpdateServiceProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and its managing context, when the context was allocated by the constructor
        virtual ~MdxUpdateServiceProxy();
        /// Initializer used by constructors
        virtual void MdxUpdateServiceProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual MdxUpdateServiceProxy *copy();
        /// Copy assignment
        MdxUpdateServiceProxy& operator=(const MdxUpdateServiceProxy&);
        /// Delete all deserialized data (uses soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to default
        virtual void reset();
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
        /// Get SOAP Fault structure (i.e. soap->fault, which is NULL when absent)
        virtual ::SOAP_ENV__Fault *soap_fault();
        /// Get SOAP Fault subcode QName string (NULL when absent)
        virtual const char *soap_fault_subcode();
        /// Get SOAP Fault string/reason (NULL when absent)
        virtual const char *soap_fault_string();
        /// Get SOAP Fault detail XML string (NULL when absent)
        virtual const char *soap_fault_detail();
        /// Close connection (normally automatic, except for send_X ops)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        //
        /// Web service synchronous operation 'UpdateGetInterfaceVersion' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int UpdateGetInterfaceVersion(char *Upd__UpdateGetInterfaceVersion, _Upd__UpdateGetInterfaceVersionResponse &Upd__UpdateGetInterfaceVersionResponse) { return this->UpdateGetInterfaceVersion(NULL, NULL, Upd__UpdateGetInterfaceVersion, Upd__UpdateGetInterfaceVersionResponse); }
        /// Web service synchronous operation 'UpdateGetInterfaceVersion' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int UpdateGetInterfaceVersion(const char *soap_endpoint_url, const char *soap_action, char *Upd__UpdateGetInterfaceVersion, _Upd__UpdateGetInterfaceVersionResponse &Upd__UpdateGetInterfaceVersionResponse) { return this->send_UpdateGetInterfaceVersion(soap_endpoint_url, soap_action, Upd__UpdateGetInterfaceVersion) || this->recv_UpdateGetInterfaceVersion(Upd__UpdateGetInterfaceVersionResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_UpdateGetInterfaceVersion' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_UpdateGetInterfaceVersion(const char *soap_endpoint_url, const char *soap_action, char *Upd__UpdateGetInterfaceVersion);
        /// Web service asynchronous operation 'recv_UpdateGetInterfaceVersion' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_UpdateGetInterfaceVersion(_Upd__UpdateGetInterfaceVersionResponse &Upd__UpdateGetInterfaceVersionResponse);
        //
        /// Web service synchronous operation 'UpdateRequest' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int UpdateRequest(_Upd__UpdateRequest *Upd__UpdateRequest, _Upd__UpdateRequestResponse &Upd__UpdateRequestResponse) { return this->UpdateRequest(NULL, NULL, Upd__UpdateRequest, Upd__UpdateRequestResponse); }
        /// Web service synchronous operation 'UpdateRequest' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int UpdateRequest(const char *soap_endpoint_url, const char *soap_action, _Upd__UpdateRequest *Upd__UpdateRequest, _Upd__UpdateRequestResponse &Upd__UpdateRequestResponse) { return this->send_UpdateRequest(soap_endpoint_url, soap_action, Upd__UpdateRequest) || this->recv_UpdateRequest(Upd__UpdateRequestResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_UpdateRequest' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_UpdateRequest(const char *soap_endpoint_url, const char *soap_action, _Upd__UpdateRequest *Upd__UpdateRequest);
        /// Web service asynchronous operation 'recv_UpdateRequest' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_UpdateRequest(_Upd__UpdateRequestResponse &Upd__UpdateRequestResponse);
        //
        /// Web service synchronous operation 'UpdateReboot' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int UpdateReboot(char *Upd__UpdateReboot, _Upd__UpdateRebootResponse &Upd__UpdateRebootResponse) { return this->UpdateReboot(NULL, NULL, Upd__UpdateReboot, Upd__UpdateRebootResponse); }
        /// Web service synchronous operation 'UpdateReboot' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int UpdateReboot(const char *soap_endpoint_url, const char *soap_action, char *Upd__UpdateReboot, _Upd__UpdateRebootResponse &Upd__UpdateRebootResponse) { return this->send_UpdateReboot(soap_endpoint_url, soap_action, Upd__UpdateReboot) || this->recv_UpdateReboot(Upd__UpdateRebootResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_UpdateReboot' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_UpdateReboot(const char *soap_endpoint_url, const char *soap_action, char *Upd__UpdateReboot);
        /// Web service asynchronous operation 'recv_UpdateReboot' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_UpdateReboot(_Upd__UpdateRebootResponse &Upd__UpdateRebootResponse);
        //
        /// Web service synchronous operation 'UpdateGetStatus' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int UpdateGetStatus(char *Upd__UpdateGetStatus, _Upd__UpdateGetStatusResponse &Upd__UpdateGetStatusResponse) { return this->UpdateGetStatus(NULL, NULL, Upd__UpdateGetStatus, Upd__UpdateGetStatusResponse); }
        /// Web service synchronous operation 'UpdateGetStatus' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int UpdateGetStatus(const char *soap_endpoint_url, const char *soap_action, char *Upd__UpdateGetStatus, _Upd__UpdateGetStatusResponse &Upd__UpdateGetStatusResponse) { return this->send_UpdateGetStatus(soap_endpoint_url, soap_action, Upd__UpdateGetStatus) || this->recv_UpdateGetStatus(Upd__UpdateGetStatusResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_UpdateGetStatus' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_UpdateGetStatus(const char *soap_endpoint_url, const char *soap_action, char *Upd__UpdateGetStatus);
        /// Web service asynchronous operation 'recv_UpdateGetStatus' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_UpdateGetStatus(_Upd__UpdateGetStatusResponse &Upd__UpdateGetStatusResponse);
        //
        /// Web service synchronous operation 'UpdateGetFailedReason' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int UpdateGetFailedReason(char *Upd__UpdateGetFailedReason, _Upd__UpdateGetFailedReasonResponse &Upd__UpdateGetFailedReasonResponse) { return this->UpdateGetFailedReason(NULL, NULL, Upd__UpdateGetFailedReason, Upd__UpdateGetFailedReasonResponse); }
        /// Web service synchronous operation 'UpdateGetFailedReason' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int UpdateGetFailedReason(const char *soap_endpoint_url, const char *soap_action, char *Upd__UpdateGetFailedReason, _Upd__UpdateGetFailedReasonResponse &Upd__UpdateGetFailedReasonResponse) { return this->send_UpdateGetFailedReason(soap_endpoint_url, soap_action, Upd__UpdateGetFailedReason) || this->recv_UpdateGetFailedReason(Upd__UpdateGetFailedReasonResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_UpdateGetFailedReason' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_UpdateGetFailedReason(const char *soap_endpoint_url, const char *soap_action, char *Upd__UpdateGetFailedReason);
        /// Web service asynchronous operation 'recv_UpdateGetFailedReason' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_UpdateGetFailedReason(_Upd__UpdateGetFailedReasonResponse &Upd__UpdateGetFailedReasonResponse);
        //
        /// Web service synchronous operation 'UpdateGetConfiguration' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int UpdateGetConfiguration(char *Upd__UpdateGetConfiguration, _Upd__UpdateGetConfigurationResponse &Upd__UpdateGetConfigurationResponse) { return this->UpdateGetConfiguration(NULL, NULL, Upd__UpdateGetConfiguration, Upd__UpdateGetConfigurationResponse); }
        /// Web service synchronous operation 'UpdateGetConfiguration' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int UpdateGetConfiguration(const char *soap_endpoint_url, const char *soap_action, char *Upd__UpdateGetConfiguration, _Upd__UpdateGetConfigurationResponse &Upd__UpdateGetConfigurationResponse) { return this->send_UpdateGetConfiguration(soap_endpoint_url, soap_action, Upd__UpdateGetConfiguration) || this->recv_UpdateGetConfiguration(Upd__UpdateGetConfigurationResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_UpdateGetConfiguration' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_UpdateGetConfiguration(const char *soap_endpoint_url, const char *soap_action, char *Upd__UpdateGetConfiguration);
        /// Web service asynchronous operation 'recv_UpdateGetConfiguration' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_UpdateGetConfiguration(_Upd__UpdateGetConfigurationResponse &Upd__UpdateGetConfigurationResponse);
    };
#endif
