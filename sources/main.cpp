// local
#include "mdt.h"

// qt
#include <QApplication>

int main(int argc, char* argv[])
{
 QApplication app{argc, argv};
 mdt m{};
 return app.exec();
}