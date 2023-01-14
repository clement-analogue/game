#pragma once

//#include <QWidget>
#include <QPushButton>

#include <QVBoxLayout>
#include <QLabel>

class tile final : public QPushButton
{
 static int tileNumber;
 public:
 template<class... T>
 explicit tile(T... args);
};

#include "tile.hpp"