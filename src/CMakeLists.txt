add_library(Fennec Fennec.cpp)
add_executable (demo main.cpp)

include_directories(include)

find_package(glfw3 3.3 REQUIRED)
target_link_libraries(Fennec glfw)

find_package(OpenGL REQUIRED)
target_link_libraries(Fennec OpenGL::GL)

find_package(GLEW REQUIRED)
target_link_libraries(Fennec GLEW)

target_link_libraries (demo Fennec)
