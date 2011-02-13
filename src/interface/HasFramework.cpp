#include "HasFramework.h"
#include <iostream>

void HasFramework::setup(Framework* framework){
  std::cout << "setup" << std::endl;
  this->framework = framework;
}

void HasFramework::step(int time){
  std::cout << "step " << time << std::endl;
}
