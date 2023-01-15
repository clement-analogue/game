#include "mainWindow.h"

// qt
#include <QStatusBar>

mainWindow::mainWindow(QWidget * const board)
{
 reset();
 connect(&resetButton, &QPushButton::pressed, this, &mainWindow::askReset);
 setCentralWidget(board);
 dock.setWidget(&resetButton);
 addDockWidget(Qt::DockWidgetArea::TopDockWidgetArea, &dock);
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

void mainWindow::resetStatus() const
{
 statusBar()->showMessage("");
}

void mainWindow::reset() const
{
 resetStatus();
}