#pragma once

// qt
#include <QObject>

// local
#include "board.h"
#include "ctrl.h"
#include "mainWindow.h"

class mdt final : public QObject
{
 Q_OBJECT
 Q_DISABLE_COPY(mdt)
 board * const b{};
 ctrl c;
 mainWindow window{b};
 public:
 explicit mdt(const int numberOfTiles);
 void reset();
};