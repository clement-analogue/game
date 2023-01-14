#include "dice.h"

int dice::diceNumber = 0;

dice::dice()
{
 label.setText("Dice " + QString::number(diceNumber));
 ++diceNumber;
 layout.addWidget(&label);
 layout.addWidget(&resultLabel);
}

int dice::generateRandomNumber()
{
 return distrib(rd);
}

void dice::setLabel(const bool)
{
 result = generateRandomNumber();
 resultLabel.setText(QString::number(result));
}

int dice::getResult() const
{
 return result;
}