#pragma once

// local
#include "dices.h"
#include "tile.h"

// qt
#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>

// std
#include <unordered_map>
#include <set>

class board final : public QObject
{
 Q_OBJECT
 Q_DISABLE_COPY(board)
 QWidget widget{};
 QVBoxLayout layout{&widget};
 QHBoxLayout tilesLayout{};
 dices d{};
 QLabel remaining{};
 std::unordered_map<int, tile*> tiles{};
 public:
 explicit board(const int numerOfTiles);
 void allowLaunchDices();
 void setFlatAndDisableTile(const int tile) const;
 void displayRemaining(const int inputRemaining);
 void win();
 void loose();
 std::set<int> getTilesId() const;
 signals:
 void result(const int result) const;
 void tileClicked(const int tile) const;
};