#include <iostream>
#include "../interface/IGlobalPosition.h"

class MockGlobalPosition : public IGlobalPosition
{
public:
  void step(Framework* framework) {
    std::cout << "GlobalPosition::void step(Framework* framework) called" << std::endl;
  }
  Position getSelfPosition(int clock) {
    std::cout << "GlobalPosition::Position getSelfPosition(int clock) called" << std::endl;
  }
  Position getBallPosition(int clock) {
    std::cout << "GlobalPosition::Position getBallPosition(int clock) called" << std::endl;
  }
  Position getGoalPosition(int clock) {
    std::cout << "GlobalPosition::Position getGoalPosition(int clock) called" << std::endl;
  }
  std::vector<Position> getLinePositions(int clock) {
    std::cout << "GlobalPosition::std::vector<Position> getLinePositions(int clock) called" << std::endl;
  }
};
