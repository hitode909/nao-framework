#include <iostream>
#include "../interface/IPlanMaker.h"

class MockPlanMaker : public IPlanMaker
{
public:
  void step(Framework* framework) {
    std::cout << "PlanMaker::void step(Framework* framework) called" << std::endl;
  }
  Plan getPlan() {
    std::cout << "PlanMaker::Plan getPlan() called" << std::endl;
  }
};
