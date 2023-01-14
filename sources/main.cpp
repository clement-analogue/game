// local
#include "board.h"

// qt
#include <QApplication>

int main(int argc, char* argv[])
{
 QApplication app{argc, argv};
 board b{};
 return app.exec();
}