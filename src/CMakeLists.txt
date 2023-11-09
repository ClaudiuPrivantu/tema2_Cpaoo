cmake_minimum_required(VERSION 3.22)
project(tema2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_subdirectory(Vehicle)

add_executable(tema2 main.cpp)

target_link_libraries(tema2 PUBLIC Vehicle Car Boat)

target_include_directories(tema2 PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/Vehicle"
        "${PROJECT_SOURCE_DIR}/Vehicle/Car"
        "${PROJECT_SOURCE_DIR}/Vehicle/Boat")