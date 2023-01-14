#pragma once

// local
#include "dices.h"
#include "tile.h"

// qt
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>

// std
#include <vector>

class board final
{
 QWidget widget{};
 QVBoxLayout layout{&widget};
 QHBoxLayout tilesLayout{};
 dices d{};
 public:
 explicit board();
};