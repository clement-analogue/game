#include "mainWindow.h"

// qt
#include <QStatusBar>

mainWindow::mainWindow(QWidget & board)
{
 setCentralWidget(&board);
 statusBar()->showMessage("");
 show();
}

void mainWindow::win()
{
 statusBar()->showMessage("YOU WIN!");
}

void mainWindow::lost()
{
 statusBar()->showMessage("YOU LOST!");
}