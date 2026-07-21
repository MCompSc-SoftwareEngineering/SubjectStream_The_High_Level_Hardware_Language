cmake_minimum_required(VERSION 4.2.3)
project(CLIB_WriteQueForThreadsAt_ServerOutputSend VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_WriteQueForThreadsAt_ServerOutputSend STATIC
        include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h
        src/CLIB_WriteEnableForThreadsAt_ServerOutputSend.cpp
        include/WriteEnableForThreadsAt_ServerOutputSend__Framework.h
        src/WriteEnableForThreadsAt_ServerOutputSend__Framework.cpp
        include/WriteEnableForThreadsAt_ServerOutputSend__Global.h
        src/WriteEnableForThreadsAt_ServerOutputSend__Global.cpp
        include/WriteEnableForThreadsAt_ServerOutputSend__App.h
        src/WriteEnableForThreadsAt_ServerOutputSend__App.cpp
        include/WriteEnableForThreadsAt_ServerOutputSend__Control.h
        src/WriteEnableForThreadsAt_ServerOutputSend__Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
