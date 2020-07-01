cmake_minimum_required(VERSION 2.8)

project(crypto)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra -Wno-unused-parameter")

find_package(OpenSSL REQUIRED)
include_directories(${OPENSSL_INCLUDE_DIR})

add_executable(examples examples.cpp)
target_link_libraries(examples ${OPENSSL_CRYPTO_LIBRARY})
