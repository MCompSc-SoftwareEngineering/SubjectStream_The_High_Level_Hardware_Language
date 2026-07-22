cmake_minimum_required(VERSION 4.2.3)
project(CLIB_OpenEpiCentre VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_OpenEpiCentre STATIC
        include/CLIB_OpenEpiCentre.h
        src/CLIB_OpenEpiCentre.cpp
        include/engine/CLIB_OpenEpiCentre__Framework.h
        src/engine/CLIB_OpenEpiCentre__Framework.cpp
        include/engine/CLIB_OpenEpiCentre__Global.h
        src/engine/CLIB_OpenEpiCentre__Global.cpp
        include/structs/CLIB_OpenEpiCentre_STRUCT__Input.h
        src/structs/CLIB_OpenEpiCentre_STRUCT__Input.cpp
        include/structs/CLIB_OpenEpiCentre_STRUCT__Output.h
        src/structs/CLIB_OpenEpiCentre_STRUCT__Output.cpp
        include/structs/CLIB_OpenEpiCentre_STRUCT__Concurrent.h
        src/structs/CLIB_OpenEpiCentre_STRUCT__Concurrent.cpp
        include/structs/CLIB_OpenEpiCentre_STRUCT__User_Input.h
        src/structs/CLIB_OpenEpiCentre_STRUCT__User_Input.cpp
        include/structs/CLIB_OpenEpiCentre_STRUCT__User_Output.h
        src/structs/CLIB_OpenEpiCentre_STRUCT__User_Output.cpp
        include/structs/CLIB_OpenEpiCentre_STRUCT__User_Algorithm.h
        src/structs/CLIB_OpenEpiCentre_STRUCT__User_Algorithm.cpp
        include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise0.h
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise0.cpp
        include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise0.h
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise0.cpp
        include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise0.h
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise0.cpp
        include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise1.h
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise1.cpp
        include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise1.h
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise1.cpp
        include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise1.h
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise1.cpp
        include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise2.h
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise2.cpp
        include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise2.h
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise2.cpp
        include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise2.h
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise2.cpp
        include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise3.h
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise3.cpp
        include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise3.h
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise3.cpp
        include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise3.h
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise3.cpp
        include/engine/CLIB_OpenEpiCentre__Framework.h
        src/engine/CLIB_OpenEpiCentre__Framework.cpp
        include/engine/CLIB_OpenEpiCentre__App.h
        src/engine/CLIB_OpenEpiCentre__App.cpp
        include/engine/CLIB_OpenEpiCentre__Algorithms.h
        src/engine/CLIB_OpenEpiCentre__Algorithms.cpp
        include/engine/CLIB_OpenEpiCentre__Data.h
        src/engine/CLIB_OpenEpiCentre__Data.cpp
        include/engine/CLIB_OpenEpiCentre__Data__Control.h
        src/engine/CLIB_OpenEpiCentre__Data__Control.cpp
        include/engine/CLIB_OpenEpiCentre__Execute.h
        src/engine/CLIB_OpenEpiCentre__Execute.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/CLIB_WriteEnableForThreadsAt_ServerInputReceive.h
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/CLIB_WriteEnableForThreadsAt_ServerInputReceive.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/WriteEnableForThreadsAt_ServerInputReceive__Framework.h
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/WriteEnableForThreadsAt_ServerInputReceive__Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/WriteEnableForThreadsAt_ServerInputReceive__Global.h
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/WriteEnableForThreadsAt_ServerInputReceive__Global.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/WriteEnableForThreadsAt_ServerInputReceive__App.h
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/WriteEnableForThreadsAt_ServerInputReceive__App.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/WriteEnableForThreadsAt_ServerInputReceive__Control.h
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/WriteEnableForThreadsAt_ServerInputReceive__Control.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/include/LaunchEnableForConcurrentThreadsAt_Server__Framework.h
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server__Framework.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/include/LaunchEnableForConcurrentThreadsAt_Server__Global.h
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server__Global.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/include/LaunchEnableForConcurrentThreadsAt_Server__App.h
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server__App.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/include/LaunchEnableForConcurrentThreadsAt_Server__Control.h
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server__Control.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h
        libs/CLIB_LaunchQueForThreadsAt_Server/src/CLIB_LaunchEnableForConcurrentThreadsAt_Server.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/CLIB_WriteEnableForThreadsAt_ServerOutputSend.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/WriteEnableForThreadsAt_ServerOutputSend__Framework.h
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/WriteEnableForThreadsAt_ServerOutputSend__Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/WriteEnableForThreadsAt_ServerOutputSend__Global.h
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/WriteEnableForThreadsAt_ServerOutputSend__Global.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/WriteEnableForThreadsAt_ServerOutputSend__Control.h
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/WriteEnableForThreadsAt_ServerOutputSend__Control.cpp
        include/engine/CLIB_OpenEpiCentre__Execute__Control.h
        src/engine/CLIB_OpenEpiCentre__Execute__Control.cpp
)

target_include_directories(CLIB_OpenEpiCentre PUBLIC ../CLIB_LaunchQueForThreadsAt_Server ../CLIB_WriteQueForThreadsAt_ServerInputReceive ../CLIB_WriteQueForThreadsAt_ServerOutputSend)
