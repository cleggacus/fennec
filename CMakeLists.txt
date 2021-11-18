cmake_minimum_required(VERSION 3.0.0)
project(Fennec VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 14)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)
