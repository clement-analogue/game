#pragma once

// qt
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>

// std
#include <random>

class dice final : public QWidget
{
 QVBoxLayout layout{this};
 QLabel label{""};
 QLabel resultLabel{""};
 std::random_device rd{};
 std::uniform_int_distribution<> distrib{1, 6};
 int generateRandomNumber();
 int result{0};
 static int diceNumber;
 public:
 explicit dice();
 void setLabel(const bool);
 int getResult() const;
};