#pragma once

#include <QObject>

class ctrl final : public QObject
{
 Q_OBJECT
 Q_DISABLE_COPY(ctrl)
 int result{0};
 using QObject::QObject;
 public:
 void newResult(const int result);
 void processTile(const int tile);
 void start() const;
 signals:
 void allowLaunchDices() const;
 void setFlatAndDisableTile(const int tile) const;
 void displayRemaining(const int remaining) const;
};