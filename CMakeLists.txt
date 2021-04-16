cmake_minimum_required(VERSION 3.17)
project(showcase)

set(CMAKE_CXX_STANDARD 20)

set(PT_PATH pt)
add_subdirectory(${PT_PATH}/src)
include_directories(${PT_PATH}/include)

set(SOURCES
        main.cpp)

add_executable(showcase ${SOURCES})
target_link_libraries(showcase PUBLIC pt)

if(UNIX)
target_link_libraries(showcase PRIVATE X11)
endif()