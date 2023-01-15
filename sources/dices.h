#pragma once

// local
#include "dice.h"

// qt
#include <QWidget>
#include <QHBoxLayout>

class dices final : public QWidget
{
 Q_OBJECT
 Q_DISABLE_COPY(dices)
 dice d0{};
 dice d1{};
 QVBoxLayout layout{this};
 QHBoxLayout dicesLayout{};
 QPushButton button{"Launch"};
 void disallowLaunch();
 void gatherResults() const;
 public:
 void allowLaunch();
 explicit dices();
 void reset();
 signals:
 void result(const int result) const;
};