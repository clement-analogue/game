#pragma once

// qt
#include <QObject>

// std
#include <set>

class ctrl final : public QObject
{
 Q_OBJECT
 Q_DISABLE_COPY(ctrl)
 int result{0};
 std::set<int> remainingTiles{};
 void checkIfLose() const;
 public:
 explicit ctrl(const std::set<int> tilesId);
 void newResult(const int result);
 void processTile(const int tile);
 void reset(const std::set<int> tilesId);
 signals:
 void allowLaunchDices() const;
 void setFlatAndDisableTile(const int tile) const;
 void displayRemaining(const int remaining) const;
 void win() const;
 void lost() const;
};