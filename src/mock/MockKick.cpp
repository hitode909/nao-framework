#include <iostream>
#include "../interface/IKick.h"

class MockKick : public IKick
{
public:
void kick(int power){
std::cout << "Kick::void kick(int power) called" << std::endl;
}
void interrupt(void){
std::cout << "Kick::void interrupt(void) called" << std::endl;
}
bool isKicking(void){
std::cout << "Kick::bool isKicking(void) called" << std::endl;
}
};
