#ifndef __IGAMESTATE__H__
#define __IGAMESTATE__H__

#include "HasFramework.h"

class IGameState : public HasFramework
{
 public:
  virtual bool isPlaying() = 0;
  virtual bool isPenalized() = 0;
  virtual bool isFinished() = 0;
};

#endif
