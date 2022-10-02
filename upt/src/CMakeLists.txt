cmake_minimum_required(VERSION 3.17)
project(pt)

#include_directories(../include)
set(SOURCES
        upt_application.cpp
        upt_object.cpp
        upt_window.cpp
        upt_event.cpp
        upt_button.cpp)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux")
    set(PLATFORM_SRCS
            linux/upt_platform.cpp)
elseif(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    set(PLATFORM_SRCS
            msw/upt_platform.cpp)
endif()

# this is used so we don't need headers for types
# only needed in the library's implementation
#add_compile_definitions(LIBPT_BUILD)
add_library(pt ${SOURCES} ${PLATFORM_SRCS})

if (${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux")
    target_include_directories(pt PRIVATE
            ../include/linux
            /usr/include/gtk-3.0
            /usr/include/at-spi2-atk/2.0
            /usr/include/at-spi-2.0
            /usr/include/dbus-1.0
            /usr/lib/x86_64-linux-gnu/dbus-1.0/include
            /usr/include/atk-1.0
            /usr/include/gtk-3.0
            /usr/include/gio-unix-2.0
            /usr/include/cairo
            /usr/include/pango-1.0
            /usr/include/harfbuzz
            /usr/include/pango-1.0
            /usr/include/fribidi
            /usr/include/harfbuzz
            /usr/include/gdk-pixbuf-2.0
            /usr/include/x86_64-linux-gnu
            /usr/include/libmount
            /usr/include/blkid
            /usr/include/cairo
            /usr/include/pixman-1
            /usr/include/uuid
            /usr/include/freetype2
            /usr/include/libpng16
            /usr/include/glib-2.0
            /usr/lib/x86_64-linux-gnu/glib-2.0/include
    )
    target_link_libraries(pt PRIVATE
            gtk-3
            gdk-3
            pangocairo-1.0
            pango-1.0
            harfbuzz
            atk-1.0
            cairo-gobject
            cairo
            gdk_pixbuf-2.0
            gio-2.0
            gobject-2.0
            glib-2.0)
endif()
