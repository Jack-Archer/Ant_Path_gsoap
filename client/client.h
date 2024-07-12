#pragma once


#include "soapFileSaverProxy.h"
#include "soapH.h"



class Client : public FileSaverProxy{
    public:
        Client();
        ~Client();

        void callFindPath(struct soap *soap, int x, int y, int *result);

    private:
        struct soap *soap_;
};