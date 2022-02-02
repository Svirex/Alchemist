cmake_minimum_required(VERSION 3.16)
project(AlchemistEngine)

set(CMAKE_CXX_STANDARD 17)

add_library(AlchemistEngineStatic STATIC
        Alchemist.hpp
        )

target_include_directories(AlchemistEngineStatic PUBLIC
        ../
        )

add_subdirectory(Application)

target_link_libraries(AlchemistEngineStatic PRIVATE ApplicationStatic)
