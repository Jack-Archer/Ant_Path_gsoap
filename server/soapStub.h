/* soapStub.h
   Generated by gSOAP 2.8.132 for /home/jack-archer/VScode/Own/Ant_Path/server/Ant_protocol.h

gSOAP XML Web services tools
Copyright (C) 2000-2023, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include <string>

#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"
#if GSOAP_VERSION != 208132
# error "GSOAP VERSION 208132 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Enumeration Types                                                          *
 *                                                                            *
\******************************************************************************/


/* /home/jack-archer/VScode/Own/Ant_Path/server/Ant_protocol.h:10 */
#ifndef SOAP_TYPE_ns__ErrorCode
#define SOAP_TYPE_ns__ErrorCode (9)
/* ns:ErrorCode */
enum ns__ErrorCode {
	ns__NO_ERROR = 0,
	ns__COULD_NOT_OPEN_FILE = 1,
	ns__COULD_NOT_SAVE_FILE = 2,
	ns__COULD_NOT_LOAD_FILE = 3
};
#endif

/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes, Structs and Unions                                                *
 *                                                                            *
\******************************************************************************/

class xsd__base64Binary;	/* /home/jack-archer/VScode/Own/Ant_Path/server/Ant_protocol.h:17 */
class ns__loadFileResponse;	/* /home/jack-archer/VScode/Own/Ant_Path/server/Ant_protocol.h:23 */
struct ns__findPathResponse;	/* /home/jack-archer/VScode/Own/Ant_Path/server/Ant_protocol.h:29 */
struct ns__findPath;	/* /home/jack-archer/VScode/Own/Ant_Path/server/Ant_protocol.h:29 */

/* /home/jack-archer/VScode/Own/Ant_Path/server/Ant_protocol.h:17 */
#ifndef SOAP_TYPE_xsd__base64Binary
#define SOAP_TYPE_xsd__base64Binary (10)
/* base64Binary XML schema type: */
class SOAP_CMAC xsd__base64Binary {
      public:
        unsigned char *__ptr;
        int __size;
      public:
        /// Return unique type id SOAP_TYPE_xsd__base64Binary
        virtual long soap_type(void) const { return SOAP_TYPE_xsd__base64Binary; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type xsd__base64Binary, default initialized and not managed by a soap context
        virtual xsd__base64Binary *soap_alloc(void) const { return SOAP_NEW_UNMANAGED(xsd__base64Binary); }
      public:
        /// Constructor with default initializations
        xsd__base64Binary() : __ptr(), __size() { }
        /// Destructor
        virtual ~xsd__base64Binary() { }
        /// Friend allocator used by soap_new_xsd__base64Binary(struct soap*, int)
        friend SOAP_FMAC1 xsd__base64Binary * SOAP_FMAC2 soap_instantiate_xsd__base64Binary(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* /home/jack-archer/VScode/Own/Ant_Path/server/Ant_protocol.h:23 */
#ifndef SOAP_TYPE_ns__loadFileResponse
#define SOAP_TYPE_ns__loadFileResponse (14)
/* complex XML schema type 'ns:loadFileResponse': */
class SOAP_CMAC ns__loadFileResponse {
      public:
        /// Required element 'fileData' of XML schema type 'xsd:base64Binary'
        xsd__base64Binary fileData;
        /// Required element 'errorCode' of XML schema type 'ns:ErrorCode'
        enum ns__ErrorCode errorCode;
      public:
        /// Return unique type id SOAP_TYPE_ns__loadFileResponse
        virtual long soap_type(void) const { return SOAP_TYPE_ns__loadFileResponse; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns__loadFileResponse, default initialized and not managed by a soap context
        virtual ns__loadFileResponse *soap_alloc(void) const { return SOAP_NEW_UNMANAGED(ns__loadFileResponse); }
      public:
        /// Constructor with default initializations
        ns__loadFileResponse() : fileData(), errorCode() { }
        /// Destructor
        virtual ~ns__loadFileResponse() { }
        /// Friend allocator used by soap_new_ns__loadFileResponse(struct soap*, int)
        friend SOAP_FMAC1 ns__loadFileResponse * SOAP_FMAC2 soap_instantiate_ns__loadFileResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* /home/jack-archer/VScode/Own/Ant_Path/server/Ant_protocol.h:29 */
#ifndef SOAP_TYPE_ns__findPathResponse
#define SOAP_TYPE_ns__findPathResponse (18)
/* complex XML schema type 'ns:findPathResponse': */
struct SOAP_CMAC ns__findPathResponse {
      public:
        /** Optional element 'result' of XML schema type 'xsd:int' */
        int *result;
      public:
        /** Return unique type id SOAP_TYPE_ns__findPathResponse */
        long soap_type() const { return SOAP_TYPE_ns__findPathResponse; }
        /** Constructor with member initializations */
        ns__findPathResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__findPathResponse * SOAP_FMAC2 soap_instantiate_ns__findPathResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* /home/jack-archer/VScode/Own/Ant_Path/server/Ant_protocol.h:29 */
#ifndef SOAP_TYPE_ns__findPath
#define SOAP_TYPE_ns__findPath (19)
/* complex XML schema type 'ns:findPath': */
struct SOAP_CMAC ns__findPath {
      public:
        /** Context that manages this object */
        struct soap *soap;
        /** Required element 'x' of XML schema type 'xsd:int' */
        int x;
        /** Required element 'y' of XML schema type 'xsd:int' */
        int y;
      public:
        /** Return unique type id SOAP_TYPE_ns__findPath */
        long soap_type() const { return SOAP_TYPE_ns__findPath; }
        /** Constructor with member initializations */
        ns__findPath() : soap(), x(), y() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__findPath * SOAP_FMAC2 soap_instantiate_ns__findPath(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* /home/jack-archer/VScode/Own/Ant_Path/server/Ant_protocol.h:29 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (20)
/* SOAP_ENV__Header: */
struct SOAP_CMAC SOAP_ENV__Header {
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Header */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Header; }
        /** Constructor with member initializations */
        SOAP_ENV__Header() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Header * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* /home/jack-archer/VScode/Own/Ant_Path/server/Ant_protocol.h:29 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (21)
/* Type SOAP_ENV__Code is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* SOAP_ENV__Code: */
struct SOAP_CMAC SOAP_ENV__Code {
      public:
        /** Optional element 'SOAP-ENV:Value' of XML schema type 'xsd:QName' */
        char *SOAP_ENV__Value;
        /** Optional element 'SOAP-ENV:Subcode' of XML schema type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Subcode;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Code */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Code; }
        /** Constructor with member initializations */
        SOAP_ENV__Code() : SOAP_ENV__Value(), SOAP_ENV__Subcode() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Code * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* /home/jack-archer/VScode/Own/Ant_Path/server/Ant_protocol.h:29 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (23)
/* SOAP_ENV__Detail: */
struct SOAP_CMAC SOAP_ENV__Detail {
      public:
        char *__any;
        /** Any type of element 'fault' assigned to fault with its SOAP_TYPE_<typename> assigned to __type */
        /** Do not create a cyclic data structure through this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *fault;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Detail */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Detail; }
        /** Constructor with member initializations */
        SOAP_ENV__Detail() : __any(), __type(), fault() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Detail * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* /home/jack-archer/VScode/Own/Ant_Path/server/Ant_protocol.h:29 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (26)
/* SOAP_ENV__Reason: */
struct SOAP_CMAC SOAP_ENV__Reason {
      public:
        /** Optional element 'SOAP-ENV:Text' of XML schema type 'xsd:string' */
        char *SOAP_ENV__Text;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Reason */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Reason; }
        /** Constructor with member initializations */
        SOAP_ENV__Reason() : SOAP_ENV__Text() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Reason * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* /home/jack-archer/VScode/Own/Ant_Path/server/Ant_protocol.h:29 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (27)
/* SOAP_ENV__Fault: */
struct SOAP_CMAC SOAP_ENV__Fault {
      public:
        /** Optional element 'faultcode' of XML schema type 'xsd:QName' */
        char *faultcode;
        /** Optional element 'faultstring' of XML schema type 'xsd:string' */
        char *faultstring;
        /** Optional element 'faultactor' of XML schema type 'xsd:string' */
        char *faultactor;
        /** Optional element 'detail' of XML schema type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *detail;
        /** Optional element 'SOAP-ENV:Code' of XML schema type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Code;
        /** Optional element 'SOAP-ENV:Reason' of XML schema type 'SOAP-ENV:Reason' */
        struct SOAP_ENV__Reason *SOAP_ENV__Reason;
        /** Optional element 'SOAP-ENV:Node' of XML schema type 'xsd:string' */
        char *SOAP_ENV__Node;
        /** Optional element 'SOAP-ENV:Role' of XML schema type 'xsd:string' */
        char *SOAP_ENV__Role;
        /** Optional element 'SOAP-ENV:Detail' of XML schema type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *SOAP_ENV__Detail;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Fault */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Fault; }
        /** Constructor with member initializations */
        SOAP_ENV__Fault() : faultcode(), faultstring(), faultactor(), detail(), SOAP_ENV__Code(), SOAP_ENV__Reason(), SOAP_ENV__Node(), SOAP_ENV__Role(), SOAP_ENV__Detail() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Fault * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* (built-in):0 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
typedef char *_XML;
#endif

/* (built-in):0 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
typedef char *_QName;
#endif

/* /home/jack-archer/VScode/Own/Ant_Path/server/Ant_protocol.h:8 */
#ifndef SOAP_TYPE_xsd__string
#define SOAP_TYPE_xsd__string (8)
typedef std::wstring xsd__string;
#endif

/******************************************************************************\
 *                                                                            *
 * Serializable Types                                                         *
 *                                                                            *
\******************************************************************************/


/* char has binding name 'byte' for type 'xsd:byte' */
#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif

/* int has binding name 'int' for type 'xsd:int' */
#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif

/* unsigned char has binding name 'unsignedByte' for type 'xsd:unsignedByte' */
#ifndef SOAP_TYPE_unsignedByte
#define SOAP_TYPE_unsignedByte (12)
#endif

/* unsigned int has binding name 'unsignedInt' for type 'xsd:unsignedInt' */
#ifndef SOAP_TYPE_unsignedInt
#define SOAP_TYPE_unsignedInt (11)
#endif

/* enum ns__ErrorCode has binding name 'ns__ErrorCode' for type 'ns:ErrorCode' */
#ifndef SOAP_TYPE_ns__ErrorCode
#define SOAP_TYPE_ns__ErrorCode (9)
#endif

/* ns__loadFileResponse has binding name 'ns__loadFileResponse' for type 'ns:loadFileResponse' */
#ifndef SOAP_TYPE_ns__loadFileResponse
#define SOAP_TYPE_ns__loadFileResponse (14)
#endif

/* xsd__base64Binary has binding name 'xsd__base64Binary' for type 'xsd:base64Binary' */
#ifndef SOAP_TYPE_xsd__base64Binary
#define SOAP_TYPE_xsd__base64Binary (10)
#endif

/* xsd__string has binding name 'xsd__string' for type 'xsd:string' */
#ifndef SOAP_TYPE_xsd__string
#define SOAP_TYPE_xsd__string (8)
#endif

/* std::wstring has binding name 'std__wstring' for type 'xsd:string' */
#ifndef SOAP_TYPE_std__wstring
#define SOAP_TYPE_std__wstring (7)
#endif

/* struct SOAP_ENV__Fault has binding name 'SOAP_ENV__Fault' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (27)
#endif

/* struct SOAP_ENV__Reason has binding name 'SOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (26)
#endif

/* struct SOAP_ENV__Detail has binding name 'SOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (23)
#endif

/* struct SOAP_ENV__Code has binding name 'SOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (21)
#endif

/* struct SOAP_ENV__Header has binding name 'SOAP_ENV__Header' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (20)
#endif

/* struct ns__findPath has binding name 'ns__findPath' for type 'ns:findPath' */
#ifndef SOAP_TYPE_ns__findPath
#define SOAP_TYPE_ns__findPath (19)
#endif

/* struct ns__findPathResponse has binding name 'ns__findPathResponse' for type 'ns:findPathResponse' */
#ifndef SOAP_TYPE_ns__findPathResponse
#define SOAP_TYPE_ns__findPathResponse (18)
#endif

/* struct SOAP_ENV__Reason * has binding name 'PointerToSOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (29)
#endif

/* struct SOAP_ENV__Detail * has binding name 'PointerToSOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (28)
#endif

/* struct SOAP_ENV__Code * has binding name 'PointerToSOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (22)
#endif

/* int * has binding name 'PointerToint' for type 'xsd:int' */
#ifndef SOAP_TYPE_PointerToint
#define SOAP_TYPE_PointerToint (16)
#endif

/* unsigned char * has binding name 'PointerTounsignedByte' for type 'xsd:unsignedByte' */
#ifndef SOAP_TYPE_PointerTounsignedByte
#define SOAP_TYPE_PointerTounsignedByte (13)
#endif

/* _QName has binding name '_QName' for type 'xsd:QName' */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
#endif

/* _XML has binding name '_XML' for type '' */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
#endif

/* char * has binding name 'string' for type 'xsd:string' */
#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


#endif

/* End of soapStub.h */
