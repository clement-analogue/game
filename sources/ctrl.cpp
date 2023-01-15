#include "ctrl.h"

void ctrl::newResult(const int inputResult)
{
 if(result!=0)
 {
  throw "result must be zero";
 }
 result=inputResult;
 emit displayRemaining(result);
}

void ctrl::processTile(const int tile)
{
 if(tile<=result)
 {
  result-=tile;
  emit setFlatAndDisableTile(tile);
  emit displayRemaining(result);
 }
 if(result==0)
 {
  emit allowLaunchDices();
 }
}

void ctrl::start() const
{
 emit displayRemaining(result);
 emit allowLaunchDices();
}