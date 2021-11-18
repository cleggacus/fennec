add_compile_definitions(FENNEC_BUILD_LINK)

include_directories(include)

add_library(Fennec Application.cpp)

find_package(glfw3 3.3 REQUIRED)
target_link_libraries(Fennec glfw)

find_package(OpenGL REQUIRED)
target_link_libraries(Fennec OpenGL::GL)

find_package(GLEW REQUIRED)
target_link_libraries(Fennec GLEW)

