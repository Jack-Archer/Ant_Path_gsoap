//gsoap ns service name: FileSaver
//gsoap ns service namespace: urn:FileSaver
//gsoap ns service style: rpc
//gsoap ns service encoding: encoded

#include <string>

typedef std::wstring xsd__string;

enum ns__ErrorCode{
    ns__NO_ERROR,
    ns__COULD_NOT_OPEN_FILE,
    ns__COULD_NOT_SAVE_FILE,
    ns__COULD_NOT_LOAD_FILE
};

class xsd__base64Binary {
public:
    unsigned char* __ptr;
    int __size;
};

class ns__loadFileResponse {
public:
    xsd__base64Binary fileData;
    enum ns__ErrorCode errorCode;
};

int ns__findPath(struct soap *soap, int x, int y, int *result);