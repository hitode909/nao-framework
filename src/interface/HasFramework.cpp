#include "HasFramework.h"
#include <iostream>

void HasFramework::setup(Framework* framework){
  std::cout << "setup" << std::endl;
  this->framework = framework;
}
