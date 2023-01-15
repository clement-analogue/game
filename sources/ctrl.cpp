#include "ctrl.h"

void ctrl::newResult(const int inputResult)
{
 if(result!=0)
 {
  throw "result must be zero";
 }
 result=inputResult;
}

// FIXME
#include <iostream>

void ctrl::processTile(const int tile)
{
 std::cout<<result<<" "<<tile<<std::endl;
 if(tile<=result)
 {
  result-=tile;
  emit setFlatAndDisableTile(tile);
 }
 if(result==0)
 {
  emit allowLaunchDices();
 }
}

void ctrl::start() const
{
 emit allowLaunchDices();
}