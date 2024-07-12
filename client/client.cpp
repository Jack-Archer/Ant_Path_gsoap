#include "client.h"

Client::Client(){
    soap_ = soap_new();
    if(!soap_){
        soap_print_fault(stderr);
        soap_destroy(soap_);
        soap_end(soap_);
        soap_done(soap_);
    }
}

Client::~Client(){
    soap_destroy(soap_);
    soap_end(soap_);
    soap_done(soap_);
}

void Client::callFindPath(struct soap *soap, int x, int y, int *result){
    soap_init(soap_);
    send_findPath("127.0.0.1", "ns:findPath" , soap, 1000, 1000);
    recv_findPath(result);
    if(!result){
        soap_print_fault(stderr);
        soap_destroy(soap_);
        soap_end(soap_);
        return;
    }

    std::cout << "Answer is = " << result << std::endl;
}