#include "Framework.h"

void Framework::run(void){
  this->setup();
  std::cout << "run" << std::endl;
  std::cout << "host: " << this->host << std::endl;
  std::cout << "port: " << this->port << std::endl;

  while (true){
    sleep(1);
  }
}

void Framework::setup(void) {

}
