#include <iostream>
#include "../interface/IGameState.h"

class MockGameState : public IGameState
{
public:
bool isPlaying(){
std::cout << "GameState::bool isPlaying() called" << std::endl;
}
bool isPenalized(){
std::cout << "GameState::bool isPenalized() called" << std::endl;
}
bool isFinished(){
std::cout << "GameState::bool isFinished() called" << std::endl;
}
};
