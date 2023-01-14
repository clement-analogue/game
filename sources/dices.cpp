#include "dices.h"

dices::dices()
{
 dicesLayout.addWidget(&d0);
 dicesLayout.addWidget(&d1);
 layout.addLayout(&dicesLayout);
 layout.addWidget(&button);
}

void dices::allowLaunch()
{
 connect(&button, &QPushButton::clicked, &d0, &dice::setLabel);
 connect(&button, &QPushButton::clicked, &d1, &dice::setLabel);
 connect(&button, &QPushButton::clicked, this, &dices::gatherResults);
 connect(&button, &QPushButton::clicked, this, &dices::disallowLaunch);
}

void dices::disallowLaunch()
{
 disconnect(&button, 0, 0, 0);
}

void dices::gatherResults() const
{
 emit result(d0.getResult() + d1.getResult());
}