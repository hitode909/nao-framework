#include <iostream>
#include "../interface/IPlanMaker.h"

class MockPlanMaker : public IPlanMaker
{
public:
  Plan getPlan(){
    std::cout << "PlanMaker::Plan getPlan() called" << std::endl;
    Plan plan;
    plan.kick = true;
    return plan;
  }
};
