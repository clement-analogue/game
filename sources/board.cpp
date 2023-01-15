#include "board.h"

// std
#include <iostream>

board::board(const int numberOfTiles)
{
 // tiles
 layout.addLayout(&tilesLayout);
 for(auto i{0}; i < 9; ++i)
 {
  const auto t{new tile{this}};
  tilesLayout.addWidget(t);
  tiles.insert(std::make_pair(t->getId(), t));
  connect(t, &tile::emitId, this, &board::tileClicked);
 }
 // dices
 layout.addWidget(&d);
 connect(&d, &dices::result, this, &board::result);
 // remaining
 layout.addWidget(&remaining);

 reset();
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

void board::displayRemaining(const int inputRemaining)
{
 remaining.setText("Remaining: " + QString::number(inputRemaining));
}

std::set<int> board::getTilesId() const
{
 std::set<int> tilesId{};
 for(const auto tile : tiles)
 {
  tilesId.insert(tile.first);
 }
 return tilesId;
}

void board::reset()
{
 for(const auto tile : tiles)
 {
  tile.second->setFlat(false);
  tile.second->setEnabled(true);
 }
 d.reset();
}