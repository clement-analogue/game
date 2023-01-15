#pragma once

// qt
#include <QMainWindow>
#include <QDockWidget>
#include <QPushButton>

class mainWindow final : public QMainWindow
{
 Q_OBJECT
 Q_DISABLE_COPY(mainWindow)
 QDockWidget dock{};
 QPushButton resetButton{"Reset"};
 void resetStatus() const;
 public:
 explicit mainWindow(QWidget * const board);
 void win();
 void lost();
 void reset() const;
 signals:
 void askReset() const;
};