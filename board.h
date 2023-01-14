#pragma once

// local
#include "dice.h"
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
 QHBoxLayout dicesLayout{};
 dice d0{};
 dice d1{};
 public:
 explicit board();
};