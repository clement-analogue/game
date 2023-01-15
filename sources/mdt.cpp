#include "mdt.h"

mdt::mdt(const int numberOfTiles)
: b{new board{numberOfTiles}}
, c{b->getTilesId()}
{
 connect(&c, &ctrl::allowLaunchDices, b, &board::allowLaunchDices);
 connect(b, &board::result, &c, &ctrl::newResult);
 connect(b, &board::tileClicked, &c, &ctrl::processTile);
 connect(&c, &ctrl::setFlatAndDisableTile, b, &::board::setFlatAndDisableTile);
 connect(&c, &ctrl::displayRemaining, b, &board::displayRemaining);
 connect(&c, &ctrl::win, &window, &mainWindow::win);
 connect(&c, &ctrl::lost, &window, &mainWindow::lost);
 connect(&window, &mainWindow::askReset, this, &mdt::reset);

 reset();
}

void mdt::reset()
{
 window.reset();
 b->reset();
 c.reset(b->getTilesId());
}