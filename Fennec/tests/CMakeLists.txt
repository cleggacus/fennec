set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

add_executable (test1 test1.cpp)

include_directories(../src/include include)

target_link_libraries (test1 Fennec)
add_test (NAME test1 COMMAND test1)
