#pragma once

#include "board.h"
#include "ctrl.h"

// FIXME
#include <iostream>

class mdt final
{
 ctrl c{};
 board b{};
 public:
 explicit mdt()
 {
  // FIXME
  b.allowLaunchDices();
  QObject::connect(&b, &board::result, [](const int result){std::cout<<result<<std::endl;});
 }
};