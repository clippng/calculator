cmake_minimum_required(VERSION 3.10)

add_executable(Calculator main.c)

target_link_libraries(Calculator maths interpretor)
