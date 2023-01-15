#pragma once

// local
#include "dices.h"
#include "tile.h"

// qt
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>

// std
#include <unordered_map>
#include <set>

class board final : public QWidget
{
 Q_OBJECT
 Q_DISABLE_COPY(board)
 QVBoxLayout layout{this};
 QHBoxLayout tilesLayout{};
 dices d{};
 QLabel remaining{};
 std::unordered_map<int, tile*> tiles{};
 public:
 explicit board(const int numerOfTiles);
 void allowLaunchDices();
 void setFlatAndDisableTile(const int tile) const;
 void displayRemaining(const int inputRemaining);
 std::set<int> getTilesId() const;
 void reset();
 signals:
 void result(const int result) const;
 void tileClicked(const int tile) const;
};