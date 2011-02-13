#include <iostream>
#include "../interface/IGameState.h"

class MockGameState : public IGameState
{
public:
  void step(Framework* framework) {
    std::cout << "GameState::void step(Framework* framework) called" << std::endl;
  }
  bool isPlaying() {
    std::cout << "GameState::bool isPlaying() called" << std::endl;
  }
  bool isInitial() {
    std::cout << "GameState::bool isInitial() called" << std::endl;
  }
  bool isPenalized() {
    std::cout << "GameState::bool isPenalized() called" << std::endl;
  }
  bool isSet() {
    std::cout << "GameState::bool isSet() called" << std::endl;
  }
  bool isReady() {
    std::cout << "GameState::bool isReady() called" << std::endl;
  }
  bool isFinish() {
    std::cout << "GameState::bool isFinish() called" << std::endl;
  }
};
