#include "ctrl.h"

ctrl::ctrl(const std::set<int> tilesId)
: remainingTiles{tilesId}
{
 reset(tilesId);
}

void ctrl::newResult(const int inputResult)
{
 if(result!=0)
 {
  throw "result must be zero";
 }
 result=inputResult;
 emit displayRemaining(result);
 checkIfLose();
}

void ctrl::processTile(const int tile)
{
 if(tile<=result)
 {
  result-=tile;
  remainingTiles.erase(tile);
  emit setFlatAndDisableTile(tile);
  emit displayRemaining(result);
 }
 if(remainingTiles.size()==0)
 {
  if(result==0)
  {
   emit win();
  }
  else
  {
   emit lost();
  }
  return;
 }
 if(result==0)
 {
  emit allowLaunchDices();
  return;
 }
 checkIfLose();
}

void ctrl::reset(const std::set<int> tilesId)
{
 result = 0;
 remainingTiles = tilesId;
 emit allowLaunchDices();
 emit displayRemaining(result);
}

void ctrl::checkIfLose() const
{
 if((*remainingTiles.cbegin())>result)
 {
  emit lost();
 }
}