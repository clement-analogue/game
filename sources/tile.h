#pragma once

#include <QPushButton>

class tile final : public QPushButton
{
 Q_OBJECT
 Q_DISABLE_COPY(tile)
 static int tileNumber;
 int id{};
 public:
 template<class... T>
 explicit tile(T... args);
 signals:
 void getId(const int id) const;
};

#include "tile.hpp"