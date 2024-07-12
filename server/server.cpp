#include "server.h"
#include "FileSaver.nsmap"

#include "ant_path.h"
#include "check_move.h"

Server::Server(){}

Server::Server(const char *host, int port, int backlog){
    soap_ = soap_new();
    if(!soap_) {
        soap_print_fault(stderr);
        soap_destroy(soap_);
        soap_end(soap_);
        soap_done(soap_);
    }
    soap_init(soap_);
    server_socket_ = soap_bind(soap_, host, port, backlog);
    if(server_socket_ == SOAP_INVALID_SOCKET){
        soap_print_fault(stderr);
        exit(1);
    }

}

Server::~Server(){
    soap_destroy(soap_);
    soap_end(soap_);
    soap_done(soap_);
}


void Server::startSession(){
    int client;
    while(true){
        client = soap_accept(soap_);
        if(client < 0) {
            soap_print_fault(stderr);
            break;
        }
        std::cout << "Connection from socket = " << client << std::endl;
        if(soap_serve(soap_) != SOAP_OK){
            soap_print_fault(stderr);
            soap_destroy(soap_);
            soap_end(soap_);
            break;
        }
    }
    soap_done(soap_);
}


 int ns__findPath(struct soap *soap, int x, int y, int *result){
    Coordinates stay_now(x, y);
    AntPath ant(stay_now);
    ant.ExploreWorld();
    return SOAP_OK;
 }