cmake_minimum_required(VERSION 3.12.2)

project(OpenGL-tutorial)

set(CMAKE_CXX_FLAGS "-g -Werror -Wall -Wextra")
set(CMAKE_CXX_FLAGS "-std=c++17")
set(CMAKE_CXX_FLAGS "-g -pg -O3")

SET(SDL_PREFIX "${CMAKE_BINARY_DIR}/thir-part/SDL2")

include(ExternalProject)
ExternalProject_Add(SDL
    SOURCE_DIR ${CMAKE_SOURCE_DIR}/third-part/SDL2-2.0.9
    CONFIGURE_COMMAND ${CMAKE_SOURCE_DIR}/third-part/SDL2-2.0.9/configure --prefix=${SDL_PREFIX}
    BUILD_COMMAND make
)

SET(SDL_LIB_DIR "${SDL_PREFIX}/lib")
SET(SDL_INT_DIR "${SDL_PREFIX}/include")
MESSAGE(STATUS "sdl_lib_dir ---- ${SDL_LIB_DIR}")
SET(SDL_LIB "${SDL_LIB_DIR}/libSDL2-2.0.0.dylib")

SET(SOURCES
    src/tga.cpp
    src/main.cpp
)

INCLUDE_DIRECTORIES(include ${sdl_inc_dir})

ADD_EXECUTABLE(game ${SOURCES})

ADD_DEPENDENCIES(game SDL)

TARGET_LINK_LIBRARIES(game ${SDL_LIB})

TARGET_INCLUDE_DIRECTORIES(game
    PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)