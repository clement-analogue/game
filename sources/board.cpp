#include "board.h"

// std
#include <iostream>

board::board()
{
 // tiles
 layout.addLayout(&tilesLayout);
 for(auto i{0}; i < 9; ++i)
 {
  const auto t{new tile{&widget}};
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

void board::setFlatAndDisableTile(const int tile) const
{
 try
 {
  tiles.at(tile)->setFlat(true);
  tiles.at(tile)->setDisabled(true);
 }
 catch(const std::out_of_range e)
 {
  std::cerr << e.what() << std::endl;
  std::cerr << "Non-existing tile" << std::endl;
 }
}