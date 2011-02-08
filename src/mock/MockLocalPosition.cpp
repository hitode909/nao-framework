#include <iostream>
#include "../interface/ILocalPosition.h"

class MockLocalPosition : public ILocalPosition
{
public:
  Position getBallPosition(){
    std::cout << "LocalPosition::Position getBallPosition() called" << std::endl;
  }
  Position getSelfPosition(){
    std::cout << "LocalPosition::Position getSelfPosition() called" << std::endl;
  }
  Position getGoalPosition(){
    std::cout << "LocalPosition::Position getGoalPosition() called" << std::endl;
  }
};
