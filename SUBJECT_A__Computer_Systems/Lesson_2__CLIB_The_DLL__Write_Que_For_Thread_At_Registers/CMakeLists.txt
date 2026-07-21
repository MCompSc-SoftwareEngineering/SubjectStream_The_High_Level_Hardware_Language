cmake_minimum_required(VERSION 4.2.3)
project(CLIB_WriteQueForThreadsAt_STACK VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_WriteQueForThreadsAt_STACK STATIC
        include/CLIB_WriteEnableForThreadsAt_STACK.h
        src/CLIB_WriteEnableForThreadsAt_STACK.cpp
        include/WriteEnableForThreadsAt_STACK__Framework.h
        src/WriteEnableForThreadsAt_STACK__Framework.cpp
        include/WriteEnableForThreadsAt_STACK__Global.h
        src/WriteEnableForThreadsAt_STACK__Global.cpp
        include/WriteEnableForThreadsAt_STACK__App.h
        src/WriteEnableForThreadsAt_STACK__App.cpp
        include/WriteEnableForThreadsAt_STACK__Control.h
        src/WriteEnableForThreadsAt_STACK__Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
