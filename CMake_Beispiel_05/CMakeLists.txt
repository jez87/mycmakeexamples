cmake_minimum_required( VERSION 2.6)
project(Find_Package_Boost)

find_package(Boost)
find_package(DBUS)

message(STATUS "=== ${CMAKE_MODULE_PATH} ===")
message(STATUS "=== ${CMAKE_SOURCE_DIR} ===")