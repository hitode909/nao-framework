#include <iostream>
#include "../interface/IPlanPlayer.h"

class MockPlanPlayer : public IPlanPlayer
{
public:
  void doPlan(Plan plan){
    std::cout << "PlanPlayer::void doPlan(Plan plan) called" << std::endl;
  }
};
