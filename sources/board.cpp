#include "board.h"

board::board()
{
 // tiles
 layout.addLayout(&tilesLayout);
 for(auto i{0}; i < 9; ++i)
 {
  tile * t = new tile{&widget};
  tilesLayout.addWidget(t);
  tiles.insert(std::make_pair(t->getId(), t));
  connect(t, &tile::emitId, this, &board::tileClicked);
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

void board::setFlatAndDisable(const int tile)
{
 // FIXME catch expection
 tiles.at(tile)->setFlat(true);
 tiles.at(tile)->setDisabled(true);
}