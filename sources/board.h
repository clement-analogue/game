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
#include <vector>

class board final : public QObject
{
 Q_OBJECT
 Q_DISABLE_COPY(board)
 QWidget widget{};
 QVBoxLayout layout{&widget};
 QHBoxLayout tilesLayout{};
 dices d{};
 public:
 explicit board();
 void allowLaunchDices();
 signals:
 void result(const int result) const;
};