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

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux")
    target_include_directories(showcase PRIVATE
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
            /usr/lib/x86_64-linux-gnu/glib-2.0/include)
    target_link_libraries(showcase PRIVATE
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