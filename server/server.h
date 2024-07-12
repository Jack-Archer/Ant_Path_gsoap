#pragma once

#include "soapH.h"
#include "soapFileSaverService.h"



class Server : public FileSaverService {
    public:
        Server() = delete;
        Server(const char *host, int port, int backlog);
        ~Server();

        void startSession();

    private:
        struct soap *soap_;
        int server_socket_;
};


int ns__findPath(struct soap *soap, int x, int y, int *result);