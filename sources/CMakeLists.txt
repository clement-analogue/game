message(${PROJECT_NAME})
find_package(Qt5 COMPONENTS Widgets REQUIRED)
set(CMAKE_AUTOMOC ON)
add_executable(${PROJECT_NAME}
 main.cpp
 board.h board.cpp
 dices.h dices.cpp
 dice.h dice.cpp
 tile.h tile.hpp tile.cpp
 ctrl.h
)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt::Widgets)