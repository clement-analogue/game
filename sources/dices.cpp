#include "dices.h"

dices::dices()
{
 reset();
 dicesLayout.addWidget(&d0);
 dicesLayout.addWidget(&d1);
 layout.addLayout(&dicesLayout);
 layout.addWidget(&button);
}

void dices::allowLaunch()
{
 button.setEnabled(true);
 connect(&button, &QPushButton::clicked, &d0, &dice::setLabel);
 connect(&button, &QPushButton::clicked, &d1, &dice::setLabel);
 connect(&button, &QPushButton::clicked, this, &dices::gatherResults);
 connect(&button, &QPushButton::clicked, this, &dices::disallowLaunch);
}

void dices::disallowLaunch()
{
 button.setDisabled(true);
 disconnect(&button, 0, 0, 0);
}

void dices::gatherResults() const
{
 emit result(d0.getResult() + d1.getResult());
}

void dices::reset()
{
 d0.reset();
 d1.reset();
}