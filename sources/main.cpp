// local
#include "board.h"
#include "ctrl.h"

// qt
#include <QApplication>

int main(int argc, char* argv[])
{
 QApplication app{argc, argv};
 board b{};
 ctrl c{};
 return app.exec();
}