#include "mdt.h"

mdt::mdt()
{
 QObject::connect(&c, &ctrl::allowLaunchDices, &b, &board::allowLaunchDices);
 QObject::connect(&b, &board::result, &c, &ctrl::newResult);
 QObject::connect(&b, &board::tileClicked, &c, &ctrl::processTile);
 QObject::connect(&c, &ctrl::setFlatAndDisableTile, &b, &::board::setFlatAndDisableTile);

 c.start();
}