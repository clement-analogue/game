#pragma once

// local
#include "dices.h"
#include "tile.h"

// qt
#include <QObject>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>

// std
#include <unordered_map>

class board final : public QObject
{
 Q_OBJECT
 Q_DISABLE_COPY(board)
 QWidget widget{};
 QVBoxLayout layout{&widget};
 QHBoxLayout tilesLayout{};
 dices d{};
 std::unordered_map<int, tile*> tiles{};
 public:
 explicit board();
 void allowLaunchDices();
 void setFlatAndDisable(const int tile);
 signals:
 void result(const int result) const;
 void tileClicked(const int tile) const;
};