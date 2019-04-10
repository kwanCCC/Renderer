cmake_minimum_required(VERSION 3.12.2)

project(OpenGL-tutorial)

file(GLOB HEAD_FILES ${PROJECT_SOURCE_DIR}/include/*.h)

set(CMAKE_CXX_FLAGS "-g -Wall")
set(CMAKE_CXX_FLAGS "-std=c++17")
set(CMAKE_CXX_FLAGS "-g -pg -O3")

# set(SOURCES
#     src/tga.cpp
#     src/main.cpp
# )

# add_executable(main ${SOURCES})

# target_include_directories(main
#     PRIVATE
#     ${PROJECT_SOURCE_DIR}/include
# )


add_library(tga_lib STATIC 
    src/tga.cpp
)

target_include_directories(tga_lib
    PUBLIC 
    ${PROJECT_SOURCE_DIR}/include
)

add_executable(main 
    src/main.cpp
)

target_link_libraries(main PRIVATE 
    tga_lib
)