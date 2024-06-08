cmake_minimum_required(VERSION 3.10)

add_library(interpretor STATIC interpretor.c lexer.c)

target_include_directories(interpretor PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(interpretor PUBLIC maths)