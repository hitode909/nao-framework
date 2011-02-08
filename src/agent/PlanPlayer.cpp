#include <iostream>
#include "../interface/IPlanPlayer.h"

class PlanPlayer : public IPlanPlayer
{
public:
  void doPlan(Plan plan){
    this->current_plan = &plan;
    std::cout << "PlanPlayer::void doPlan(Plan plan) called" << std::endl;
  }
  
private:
  Plan* current_plan;
};
