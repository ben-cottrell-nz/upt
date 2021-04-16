cmake_minimum_required(VERSION 3.17)
project(pt)

include_directories(../include)
set(SOURCES
        pt_application.cpp
        pt_object.cpp
        pt_window.cpp
        pt_event.cpp)

if(UNIX)
    set(PLATFORM_SRCS
            linux/pt_platform.cpp)
    include_directories(linux)
endif()

add_library(pt ${SOURCES} ${PLATFORM_SRCS})
