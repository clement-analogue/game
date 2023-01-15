#pragma once

// local
#include "board.h"
#include "ctrl.h"

class mdt final
{
 board b;
 ctrl c;
 public:
 explicit mdt(const int numberOfTiles);
};