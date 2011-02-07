#include "Framework.h"


void Framework::run(void){
  std::cout << "run" << std::endl
	    << ip << port << std::endl;
  while (true){
    sleep(1);
    this->kick->kick(4);
  }
}
