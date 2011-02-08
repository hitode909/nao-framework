#include "Framework.h"

void Framework::run(void){
  this->setup();
  std::cout << "run" << std::endl;
  std::cout << "host: " << this->host << std::endl;
  std::cout << "port: " << this->port << std::endl;

  while (true){
    sleep(1);
    this->plan_player->doPlan(this->plan_maker->getPlan());
    this->kick->framework->kick->kick(4);
  }
}

void Framework::setup(void) {
  this->kick->setup(this);
  this->plan_maker->setup(this);
  this->plan_player->setup(this);
  this->global_position->setup(this);
  this->local_position->setup(this);
  this->game_state->setup(this);
  this->posture->setup(this);

}
