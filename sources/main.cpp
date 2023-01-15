// local
#include "mdt.h"

// qt
#include <QApplication>

int main(int argc, char* argv[])
{
 const constexpr auto numberOfTiles{9};
 QApplication app{argc, argv};
 const mdt m{numberOfTiles};
 return app.exec();
}