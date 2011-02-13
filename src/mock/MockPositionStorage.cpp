#include <iostream>
#include "../interface/IPositionStorage.h"

class MockPositionStorage : public IPositionStorage
{
public:
  void step(Framework* framework) {
    std::cout << "PositionStorage::void step(Framework* framework) called" << std::endl;
  }
  void setLocalPositionInstance(ILocalPosition* local_position) {
    std::cout << "PositionStorage::void setLocalPositionInstance(ILocalPosition* local_position) called" << std::endl;
  }
  void setGlobalPositionInstance(IGlobalPosition* global_position) {
    std::cout << "PositionStorage::void setGlobalPositionInstance(IGlobalPosition* global_position) called" << std::endl;
  }
  void clear() {
    std::cout << "PositionStorage::void clear() called" << std::endl;
  }
  Position getSelfLocalPosition(int clock) {
    std::cout << "PositionStorage::Position getSelfLocalPosition(int clock) called" << std::endl;
  }
  Position getBallLocalPosition(int clock) {
    std::cout << "PositionStorage::Position getBallLocalPosition(int clock) called" << std::endl;
  }
  Position getGoalLocalPosition(int clock) {
    std::cout << "PositionStorage::Position getGoalLocalPosition(int clock) called" << std::endl;
  }
  std::vector<Position> getLineLocalPositions(int clock) {
    std::cout << "PositionStorage::std::vector<Position> getLineLocalPositions(int clock) called" << std::endl;
  }
  Position getSelfGlobalPosition(int clock) {
    std::cout << "PositionStorage::Position getSelfGlobalPosition(int clock) called" << std::endl;
  }
  Position getBallGlobalPosition(int clock) {
    std::cout << "PositionStorage::Position getBallGlobalPosition(int clock) called" << std::endl;
  }
  Position getGoalGlobalPosition(int clock) {
    std::cout << "PositionStorage::Position getGoalGlobalPosition(int clock) called" << std::endl;
  }
  std::vector<Position> getLineGlobalPositions(int clock) {
    std::cout << "PositionStorage::std::vector<Position> getLineGlobalPositions(int clock) called" << std::endl;
  }
};
