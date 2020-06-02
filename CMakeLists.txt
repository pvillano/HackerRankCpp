cmake_minimum_required(VERSION 3.16)
project(Playground)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/ctci_ransom_note)
add_subdirectory(src/ctci_ransom_note)

add_subdirectory(test)