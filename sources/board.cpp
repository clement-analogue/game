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
 // dices
 layout.addWidget(&d);
 connect(&d, &dices::result, this, &board::result);
 // this
 widget.show();
}

void board::allowLaunchDices()
{
 d.allowLaunch();
}