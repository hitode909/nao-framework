#include <iostream>
#include "PlanMaker.h"

PlanMaker::PlanMaker(){
  std::cout << "constructor" << std::endl;
}

PlanMaker::~PlanMaker(){
  std::cout << "destructor" << std::endl;
}

int PlanMaker::getPlan(){
  std::cout << "getPlan" << std::endl;
  return 6;
}


