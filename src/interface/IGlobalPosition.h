#ifndef __IGLOBALPOSITION__H__
#define __IGLOBALPOSITION__H__

#include "../type/Position.h"
#include "../framework/Framework.h"
#include <vector>

class IGlobalPosition
{
 public:
  virtual void step(Framework* framework) = 0;
  virtual Position getSelfPosition(int clock) = 0;
  virtual Position getBallPosition(int clock) = 0;
  virtual Position getGoalPosition(int clock) = 0;
  virtual std::vector<Position> getLinePositions(int clock) = 0;
};

#endif
