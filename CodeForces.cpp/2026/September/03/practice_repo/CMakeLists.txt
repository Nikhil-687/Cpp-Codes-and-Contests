cmake_minimum_required(VERSION 3.10)
project(LibrarySystem CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -Wextra)

include_directories(include)

add_executable(library_app
    src/main.cpp
    src/book.cpp
    src/library.cpp
)

add_executable(library_tests
    test/test_library.cpp
    src/book.cpp
    src/library.cpp
)
