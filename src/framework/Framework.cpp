#include "Framework.h"

void Framework::run(void){
  this->setup();
  std::cout << "run" << std::endl;
  std::cout << "host: " << this->host << std::endl;
  std::cout << "port: " << this->port << std::endl;

  while (true){
    this->current_clock++;
    std::cout << "clock: " << this->getClock() << std::endl;
  }
}

void Framework::setup(void) {
  this->current_clock = 0;
}

long Framework::getClock(void) {
  return this->current_clock;
}
