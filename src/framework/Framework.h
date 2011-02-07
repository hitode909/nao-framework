#ifndef __FRAME_WROK_H__
#define __FRAME_WROK_H__

#include <iostream>
#include <string>
#include "../interface/IPlanMaker.h"
#include "../interface/IKick.h"
#include "../interface/IPlanPlayer.h"
#include "../interface/IGlobalPosition.h"
#include "../interface/ILocalPosition.h"
#include "../interface/IGameState.h"
#include "../interface/IPosture.h"

class Framework{
 public:

  std::string ip;
  int port;
  IKick* kick;
  IPlanMaker* plan_maker;
  IPlanPlayer* plan_player;
  IGlobalPosition* global_position;
  ILocalPosition* local_position;
  IGameState* game_state;
  IPosture* posture;
  
  void run(void);
 private:
  void setup(void);
};

#endif
