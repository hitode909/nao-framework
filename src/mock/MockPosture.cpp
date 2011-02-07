#include <iostream>
#include "../interface/IPosture.h"

class MockPosture : public IPosture
{
public:
bool isStanding(){
std::cout << "Posture::bool isStanding() called" << std::endl;
}
bool isLying(){
std::cout << "Posture::bool isLying() called" << std::endl;
}
};
