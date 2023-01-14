#pragma once

#include "board.h"
#include "ctrl.h"

// FIXME
#include <iostream>

class mdt final
{
 ctrl c{};
 board b{};
 int result{0};
 public:
 explicit mdt()
 {
  // FIXME
  b.allowLaunchDices();
  QObject::connect(&b, &board::result, [this](const int inputResult){std::cout<<result<<std::endl; result=inputResult;});
  QObject::connect(&b, &board::tileClicked, &b, [this](const int tile)
  {
   std::cout<<result<<" "<<tile<<std::endl;
   if(tile<=result)
   {
    result-=tile;
    b.setFlatAndDisable(tile);
   }
   if(result==0)
   {
    b.allowLaunchDices();
   }
  });
 }
};