#ifndef __FRAME_WROK_H__
#define __FRAME_WROK_H__

#include <iostream>
#include <string>

class IPlanMaker;
class IPlanPlayer;
class IPositionStorage;
class IGameState;

class Framework{
 public:

  std::string host;
  int port;
  IPlanMaker* plan_maker;
  IPlanPlayer* plan_player;
  IPositionStorage* position_storage;
  IGameState* game_state;
  
  void run(void);
 private:
  void setup(void);
};

#endif
