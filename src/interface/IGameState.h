#ifndef __IGAMESTATE__H__
#define __IGAMESTATE__H__

#include "HasFramework.h"

class IGameState : public HasFramework
{
 public:
  virtual bool isPlaying() = 0;
  virtual bool isInitial() = 0;
  virtual bool isPenalized() = 0;
  virtual bool isSet() = 0;
  virtual bool isReady() = 0;
  virtual bool isFinish() = 0;
};

#endif
