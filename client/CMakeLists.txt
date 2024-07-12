cmake_minimum_required(VERSION 3.10)

project(Ant_client)

if (NOT (DEFINED EXECUTABLE_OUTPUT_PATH) OR (EXECUTABLE_OUTPUT_PATH STREQUAL ""))
  SET (EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
endif ()


add_definitions("-Wall -Wsign-conversion -Wextra -Weffc++")

SET( impl
    main.cpp
    client.cpp
    )

INCLUDE_DIRECTORIES(
  ${CMAKE_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
  )


# add the executable
add_executable(Ant_client ${impl})
