#ifndef __FRAME_WROK_H__
#define __FRAME_WROK_H__

#include <iostream>
#include <string>
#include <time.h>

#include "../interface/IGameState.h"
#include "../interface/IPlanMaker.h"
#include "../interface/IPlanPlayer.h"
#include "../interface/IPositionStorage.h"
#include "../interface/IGameState.h"

class Framework{
 public:

  std::string host;
  int port;

  IPlanMaker* plan_maker;
  IPlanPlayer* plan_player;
  IPositionStorage* position_storage;
  IGameState* game_state;

  void run(void);
  long getClock(void);
 private:
  void setup(void);
  long current_clock;
};

#endif
