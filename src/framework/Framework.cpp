#include "Framework.h"

void Framework::run(void){
  this->setup();
  std::cout << "run" << std::endl;
  std::cout << "host: " << this->host << std::endl;
  std::cout << "port: " << this->port << std::endl;

  this->game_state->step(this);
  this->position_storage->step(this);
  this->plan_maker->step(this);
  this->plan_player->step(this);
}

void Framework::setup(void) {
  this->current_clock = 0;
}

long Framework::getClock(void) {
  return this->current_clock;
}
