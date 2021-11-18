add_executable (sandbox main.cpp)

include_directories(include ../../Fennec/src/include)

target_link_libraries (sandbox Fennec)
