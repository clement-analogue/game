#pragma once

// local
#include "dice.h"

// qt
#include <QWidget>
#include <QHBoxLayout>

class dices final : public QWidget
{
 dice d0{};
 dice d1{};
 QVBoxLayout layout{this};
 QHBoxLayout dicesLayout{};
 QPushButton button{"Launch"};
 void disallowLaunch();
 public:
 void allowLaunch();
 explicit dices();
};