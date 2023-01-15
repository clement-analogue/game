message(${PROJECT_NAME})
find_package(Qt5 COMPONENTS Widgets REQUIRED)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
add_executable(${PROJECT_NAME}
 main.cpp
 mdt.h mdt.cpp
 board.h board.cpp
 dices.h dices.cpp
 dice.h dice.hpp dice.cpp
 tile.h tile.hpp tile.cpp
 ctrl.h ctrl.cpp
)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt::Widgets)