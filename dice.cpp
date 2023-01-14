#include "dice.h"

int dice::diceNumber = 0;

dice::dice()
{
 label.setText("Dice " + QString::number(diceNumber));
 ++diceNumber;
 QObject::connect(&button, &QPushButton::clicked, this, &dice::setLabel);
 layout.addWidget(&label);
 layout.addWidget(&result);
 layout.addWidget(&button);
}

QString dice::generateRandomNumber()
{
 return QString::number(distrib(rd));
}

void dice::setLabel(const bool)
{
 result.setText(generateRandomNumber());
}