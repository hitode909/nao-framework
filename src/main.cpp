#include <string>
#include "framework/Framework.cpp"
#include "mock/MockKick.cpp"

int main(void){
  Framework framework;
  MockKick mock_kick;
  framework.ip = "123.456.789";
  framework.port = 1234;
  framework.kick = &mock_kick;
  framework.run();
}
