#include "board.h"

board::board()
{
 // tiles
 layout.addLayout(&tilesLayout);
 for(auto i{0}; i < 10; ++i)
 {
  tile * t = new tile{&widget};
  tilesLayout.addWidget(t);
  tiles.push_back(t);
  connect(t, &QPushButton::clicked, this, [this, i](const bool b){emit tileClicked(i+1);});
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

void board::setFlat(const int tile)
{
 // FIXME catch expection
 tiles.at(tile-1)->setFlat(true);
}