cmake_minimum_required(VERSION 3.16)
project(Application)

set(CMAKE_CXX_STANDARD 17)

add_library(ApplicationStatic STATIC
        ""
        )

target_sources(ApplicationStatic PRIVATE
        Application.cpp
        Application.hpp
        EntryPoint.cpp
        EntryPoint.hpp
        )

target_include_directories(ApplicationStatic PUBLIC
        ./
        )
add_subdirectory(../LoggingSystem build)

target_link_libraries(ApplicationStatic PRIVATE LoggingSystemStatic)
