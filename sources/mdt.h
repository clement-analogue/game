#pragma once

#include "board.h"
#include "ctrl.h"

class mdt final
{
 ctrl c{};
 board b{};
 public:
 explicit mdt()
 {
  b.allowLaunchDices();
 }
};