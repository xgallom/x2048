cmake_minimum_required(VERSION 2.8)

project(x2048)

add_executable(${PROJECT_NAME} "main.cpp")

target_link_libraries(${PROJECT_NAME} ncurses)

