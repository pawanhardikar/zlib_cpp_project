cmake_minimum_required(VERSION 3.10)
project(zlib_project)

set(CMAKE_CXX_STANDARD 17)
# add_subdirectory(zlib)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(my_app src/main.cpp)
# target_link_libraries(my_app zlib)
target_link_libraries(my_app
    ${CMAKE_SOURCE_DIR}/libs/zlib.lib
)
