cmake_minimum_required(VERSION 3.10)

add_library(maths STATIC calculator.c number.c)

target_include_directories(interpretor PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(maths PUBLIC interpretor)