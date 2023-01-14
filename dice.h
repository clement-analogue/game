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
 QLabel result{""};
 QPushButton button{"Launch"};
 std::random_device rd{};
 std::uniform_int_distribution<> distrib{1, 6};
 QString generateRandomNumber();
 void setLabel(const bool);
 static int diceNumber;
 public:
 explicit dice();
};