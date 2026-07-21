cmake_minimum_required(VERSION 3.28.3)
project(CLIB_LaunchQueForThreadsAt_Server VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(CLIB_LaunchQueForThreadsAt_Server STATIC
        include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h
        src/CLIB_LaunchEnableForConcurrentThreadsAt_Server.cpp
        include/LaunchEnableForConcurrentThreadsAt_Server__App.h
        src/LaunchEnableForConcurrentThreadsAt_Server__App.cpp
        include/LaunchEnableForConcurrentThreadsAt_Server__Control.h
        src/LaunchEnableForConcurrentThreadsAt_Server__Control.cpp
        include/LaunchEnableForConcurrentThreadsAt_Server__Framework.h
        src/LaunchEnableForConcurrentThreadsAt_Server__Framework.cpp
        include/LaunchEnableForConcurrentThreadsAt_Server__Global.h
        src/LaunchEnableForConcurrentThreadsAt_Server__Global.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)