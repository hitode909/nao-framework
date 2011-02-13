#include <iostream>
#include "../interface/IPlanPlayer.h"

class MockPlanPlayer : public IPlanPlayer
{
public:
  void step(Framework* framework) {
    std::cout << "PlanPlayer::void step(Framework* framework) called" << std::endl;
  }
  Plan getPlan() {
    std::cout << "PlanPlayer::Plan getPlan() called" << std::endl;
  }
  void setPlan(Plan plan) {
    std::cout << "PlanPlayer::void setPlan(Plan plan) called" << std::endl;
  }
};
