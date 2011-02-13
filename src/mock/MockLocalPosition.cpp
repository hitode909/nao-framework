#include <iostream>
#include "../interface/ILocalPosition.h"

class MockLocalPosition : public ILocalPosition
{
public:
  void step(Framework* framework) {
    std::cout << "LocalPosition::void step(Framework* framework) called" << std::endl;
  }
  Position getSelfPosition(int clock) {
    std::cout << "LocalPosition::Position getSelfPosition(int clock) called" << std::endl;
  }
  Position getBallPosition(int clock) {
    std::cout << "LocalPosition::Position getBallPosition(int clock) called" << std::endl;
  }
  Position getGoalPosition(int clock) {
    std::cout << "LocalPosition::Position getGoalPosition(int clock) called" << std::endl;
  }
  std::vector<Position> getLinePositions(int clock) {
    std::cout << "LocalPosition::std::vector<Position> getLinePositions(int clock) called" << std::endl;
  }
};
