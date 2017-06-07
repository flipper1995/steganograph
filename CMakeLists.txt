cmake_minimum_required(VERSION 2.6)
project(hello)
find_package(ImageMagick COMPONENTS Magick++)

add_executable(hello main.cpp)



install(TARGETS hello RUNTIME DESTINATION bin)
include_directories(${ImageMagick_INCLUDE_DIRS})
target_link_libraries(hello ${ImageMagick_LIBRARIES})