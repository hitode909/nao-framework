#ifndef __IGAMESTATE__H__
#define __IGAMESTATE__H__

class Framework;

enum game_state {
  GAME_STATE_PLAYING,
  GAME_STATE_INITIAL,
  GAME_STATE_PENALIZED,
  GAME_STATE_SET,
  GAME_STATE_READY,
  GAME_STATE_FINISH
};

class IGameState
{
 public:
  virtual void step(Framework* framework) = 0;
  virtual bool isPlaying() = 0;
  virtual bool isInitial() = 0;
  virtual bool isPenalized() = 0;
  virtual bool isSet() = 0;
  virtual bool isReady() = 0;
  virtual bool isFinish() = 0;
  virtual game_state getGameState() = 0;
};

#endif
