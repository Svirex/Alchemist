cmake_minimum_required(VERSION 3.16)
project(Sandbox)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(${CMAKE_SOURCE_DIR}/Alchemist/ build)

add_executable(Sandbox Sandbox.cpp)

target_link_libraries(Sandbox PRIVATE AlchemistEngineStatic)
