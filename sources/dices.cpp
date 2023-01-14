#include "dices.h"

dices::dices()
{
 dicesLayout.addWidget(&d0);
 dicesLayout.addWidget(&d1);
 layout.addLayout(&dicesLayout);
 layout.addWidget(&button);
 QObject::connect(&button, &QPushButton::clicked, &d0, &dice::setLabel);
 QObject::connect(&button, &QPushButton::clicked, &d1, &dice::setLabel);
}