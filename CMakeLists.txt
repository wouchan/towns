cmake_minimum_required(VERSION 3.30)
project(towns)

add_executable(${PROJECT_NAME})

add_subdirectory(lib/raylib)
add_subdirectory(lib/raylib-cpp)

add_library(raygui INTERFACE)
target_include_directories(raygui INTERFACE lib/raygui/src)

target_sources(
    ${PROJECT_NAME}
    PUBLIC
    src/main.cxx
)

set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 23)

target_link_libraries(${PROJECT_NAME} PRIVATE raylib raylib_cpp raygui)
