cmake_minimum_required(VERSION 4.2)
project(Cpp_Introduction_To_Dynamic_Link_Library)

set(CMAKE_CXX_STANDARD 20)

add_library(CLIB_MyDLL__Cpp_Introduction_To_Dynamic_Link_Library STATIC
        include/Introduction_To_Dynamic_Link_Library__Framework.h
        src/Introduction_To_Dynamic_Link_Library__Framework.cpp
        include/Introduction_To_Dynamic_Link_Library__Global.h
        src/Introduction_To_Dynamic_Link_Library__Global.cpp
        include/Introduction_To_Dynamic_Link_Library__App.h
        src/Introduction_To_Dynamic_Link_Library__App.cpp
        src/Introduction_To_Dynamic_Link_Library__Algorithms.cpp
        include/Introduction_To_Dynamic_Link_Library__Data.h
        src/Introduction_To_Dynamic_Link_Library__Data.cpp
        include/Introduction_To_Dynamic_Link_Library__Input.h
        src/Introduction_To_Dynamic_Link_Library__Input.cpp
        include/Introduction_To_Dynamic_Link_Library__Output.h
        src/Introduction_To_Dynamic_Link_Library__Output.cpp
        src/Introduction_To_Dynamic_Link_Library__Algorithms.cpp
        include/Introduction_To_Dynamic_Link_Library__Algorithms.h
        src/CLIB_MyDLL.cpp
        include/CLIB_MyDLL.h
)
