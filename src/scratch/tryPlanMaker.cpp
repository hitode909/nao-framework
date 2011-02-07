#include <iostream>
#include "interface/PlanMaker.cpp"

void abc(iPlanMaker* pm) {
  std::cout << pm->getPlan() << std::endl;
}


int main()
{
  std::cout << "HelloWorld" << std::endl;
  PlanMaker pm;
  abc(&pm);
  return 0;
}
