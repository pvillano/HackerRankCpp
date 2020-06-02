project(tests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Google_Tests_run test_ctci_ransom_note.cpp)

target_link_libraries(Google_Tests_run ctci_ransom_note_lib)
target_link_libraries(Google_Tests_run gtest gtest_main)