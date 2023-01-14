cmake_minimum_required(VERSION 2.8.12)

project(game)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
set(CMAKE_AUTOMOC ON)
add_executable(game main.cpp dice.h dice.cpp board.h board.cpp tile.h tile.hpp tile.cpp)
target_link_libraries(game PRIVATE Qt::Widgets)