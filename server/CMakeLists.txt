cmake_minimum_required(VERSION 3.10)

project(gsoap_server)



#include_directories("")
#include_directories("/home/jack-archer/VCcode/Own/Ant_Path/server/")

SET( SOAP_LIBS
    #/usr/lib/x86_64-linux-gnu/libgsoap++-2.8.132.so
    /usr/lib/x86_64-linux-gnu/libgsoap++.so
)
set(SOAP_CPP
soapC.cpp
soapFileSaverService.cpp
main.cpp
server.cpp
check_move.cpp 
ant_path.cpp
)

add_definitions("-Wall -Wsign-conversion -Wextra -Weffc++")


  add_executable(gs_server ${SOAP_CPP})
  

#link_directories(usr/local/include)

target_link_libraries( gs_server
  ${SOAP_LIBS}
  )
  
  #link_directories(/home/jack-archer/VCcode/Own/Ant_Path/server/)
  #target_link_libraries(gs_server "/usr/local/include/stdsoap2.h")
  #target_link_libraries(gs_server "/home/jack-archer/VCcode/Own/Ant_Path/server/Ant_protocol.h")

  add_definitions( -DWITH_PURE_VIRTUAL )