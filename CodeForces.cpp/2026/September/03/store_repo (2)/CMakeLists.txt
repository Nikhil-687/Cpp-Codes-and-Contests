cmake_minimum_required(VERSION 3.10)
project(StoreSystem CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -g3 -fno-omit-frame-pointer")

option(ENABLE_SANITIZERS "Build with AddressSanitizer and UndefinedBehaviorSanitizer" OFF)

if(ENABLE_SANITIZERS)
    add_compile_options(-fsanitize=address,undefined)
    add_link_options(-fsanitize=address,undefined)
endif()

add_compile_options(-Wall -Wextra)

include_directories(include)

add_executable(store_app
    src/main.cpp
    src/product.cpp
    src/inventory.cpp
    src/order.cpp
    src/receipt.cpp
    src/checkout.cpp
)

add_executable(store_tests
    test/test_suite.cpp
    src/product.cpp
    src/inventory.cpp
    src/order.cpp
    src/receipt.cpp
    src/checkout.cpp
)

add_custom_target(gdb_store_tests
    COMMAND gdb --args $<TARGET_FILE:store_tests>
    DEPENDS store_tests
    USES_TERMINAL
)
