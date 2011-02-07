#ifndef __IGAMESTATE__H__
#define __IGAMESTATE__H__

class IGameState
{
 public:
  virtual bool isPlaying() = 0;
  virtual bool isPenalized() = 0;
  virtual bool isFinished() = 0;
};

#endif
