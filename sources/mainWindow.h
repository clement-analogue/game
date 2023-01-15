#pragma once

// qt
#include <QMainWindow>

class mainWindow final : public QMainWindow
{
 public:
 explicit mainWindow(QWidget * const board);
 void win();
 void lost();
};