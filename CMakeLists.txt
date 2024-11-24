cmake_minimum_required(VERSION 3.30)
project(towns)

set(CMAKE_CXX_STANDARD 23)

add_executable(towns)

target_sources(
    towns
    PUBLIC
    FILE_SET modules TYPE CXX_MODULES FILES
    src/main.ixx
    src/a.ixx
)
