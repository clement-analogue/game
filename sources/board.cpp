#include "board.h"

board::board()
{
 // tiles
 layout.addLayout(&tilesLayout);
 for(auto i{0}; i < 10; ++i)
 {
  tile * t = new tile{&widget};
  tilesLayout.addWidget(t);
 }
 layout.addWidget(&d);
 widget.show();
}

void board::allowLaunchDices()
{
 d.allowLaunch();
}