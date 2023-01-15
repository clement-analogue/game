#pragma once

// qt
#include <QMainWindow>

class mainWindow final : public QMainWindow
{
 public:
 explicit mainWindow(QWidget & board);
 void win();
 void lost();
};