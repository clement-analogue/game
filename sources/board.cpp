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
 layout.addLayout(&dicesLayout);
 dicesLayout.addWidget(&d0);
 dicesLayout.addWidget(&d1);
 widget.show();
}