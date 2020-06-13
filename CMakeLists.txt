cmake_minimum_required(VERSION 3.16)
project(Playground)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/ctci_ransom_note)
add_subdirectory(src/ctci_ransom_note)

include_directories(src/two_strings)
add_subdirectory(src/two_strings)

include_directories(src/sherlock_and_anagrams)
add_subdirectory(src/sherlock_and_anagrams)

include_directories(src/count_triplets_1)
add_subdirectory(src/count_triplets_1)

include_directories(src/frequency_queries)
add_subdirectory(src/frequency_queries)

add_subdirectory(test)