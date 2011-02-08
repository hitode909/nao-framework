#include <iostream>
#include "../interface/IGlobalPosition.h"

class MockGlobalPosition : public IGlobalPosition
{
public:
  Position getBallPosition(){
    std::cout << "GlobalPosition::Position getBallPosition() called" << std::endl;
  }
  Position getSelfPosition(){
    std::cout << "GlobalPosition::Position getSelfPosition() called" << std::endl;
  }
  Position getGoalPosition(){
    std::cout << "GlobalPosition::Position getGoalPosition() called" << std::endl;
  }
};
