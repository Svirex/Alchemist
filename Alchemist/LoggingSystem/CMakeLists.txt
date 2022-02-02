cmake_minimum_required(VERSION 3.16)
project(LoggingSystem)

set(CMAKE_CXX_STANDARD 17)

add_library(LoggingSystemStatic STATIC
        ""
        )

target_sources(LoggingSystemStatic PRIVATE
        LoggingSystem.hpp
        LoggingSystem.cpp
        )

add_subdirectory(ThirdParty/spdlog)

include_directories(ThirdParty/)

target_include_directories(LoggingSystemStatic PUBLIC
        ../
        ../LoggingSystem/ThirdParty/spdlog/include
        )

target_link_libraries(LoggingSystemStatic PRIVATE spdlog)
