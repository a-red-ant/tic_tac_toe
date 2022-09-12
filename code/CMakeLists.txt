cmake_minimum_required(VERSION 3.5.1)

# MAJOR: important changes (added/removed/edited) in the interface
# MINOR: minor changes (something added/removed) in the interface, nothing obsolete
# PATCH: fixes and changes in the implementation

project( tic_tac_toe VERSION 0.0.1 LANGUAGES CXX )

string( APPEND CMAKE_CXX_FLAGS " -Wall -Wextra -Wno-cast-function-type -Wno-parentheses -Wno-psabi -g" )

#set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" )
#include(get_os_id)

set(CMAKE_ECLIPSE_VERSION "4.12.0")
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

message( STATUS "VERSION OF using name ${tic_tac_toe_VERSION_MAJOR}.${tic_tac_toe_VERSION_MINOR}.${tic_tac_toe_VERSION_PATCH}" )

find_package( PkgConfig REQUIRED )

pkg_check_modules( libsigc++ sigc++-2.0 REQUIRED )
pkg_check_modules( GTKMM gtkmm-3.0 REQUIRED )

set( Boost_USE_RELEASE_LIBS ON )
set( Boost_USE_MULTITHREADED ON )
set( Boost_USE_STATIC_LIBS ON )

add_subdirectory( src_inc )
add_subdirectory( test )
add_subdirectory( utilities )

