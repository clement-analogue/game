#include "ctrl.h"

ctrl::ctrl(const int numberOfTile)
: numberOfTileLeft{numberOfTile}
{}

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
  --numberOfTileLeft;
  emit setFlatAndDisableTile(tile);
  emit displayRemaining(result);
 }
 if(numberOfTileLeft==0)
 {
  if(result==0)
  {
   emit win();
  }
  else
  {
   emit loose();
  }
  return;
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