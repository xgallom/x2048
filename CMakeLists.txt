cmake_minimum_required(VERSION 2.8)

#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS --std=c++17)

project(x2048)

set(FILES
	"Position.h"
	"Entry.h" "Entry.cpp"
	"GameBoard.h" "GameBoard.cpp"
	"Direction.h" "Direction.cpp"
	"GameBoardIterator.h" "GameBoardIterator.cpp"
    )

add_executable(${PROJECT_NAME} "main.cpp" ${FILES})

target_link_libraries(${PROJECT_NAME} ncurses)

