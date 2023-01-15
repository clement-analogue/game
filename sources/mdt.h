#pragma once

// local
#include "board.h"
#include "ctrl.h"
#include "mainWindow.h"

class mdt final
{
 board b;
 ctrl c;
 mainWindow window{b};
 public:
 explicit mdt(const int numberOfTiles);
};