#include "mdt.h"

mdt::mdt(const int numberOfTiles)
: b{numberOfTiles}
, c{b.getTilesId()}
{
 QObject::connect(&c, &ctrl::allowLaunchDices, &b, &board::allowLaunchDices);
 QObject::connect(&b, &board::result, &c, &ctrl::newResult);
 QObject::connect(&b, &board::tileClicked, &c, &ctrl::processTile);
 QObject::connect(&c, &ctrl::setFlatAndDisableTile, &b, &::board::setFlatAndDisableTile);
 QObject::connect(&c, &ctrl::displayRemaining, &b, &board::displayRemaining);
 QObject::connect(&c, &ctrl::win, &b, &board::win);
 QObject::connect(&c, &ctrl::lost, &b, &board::lost);

 c.start();
}