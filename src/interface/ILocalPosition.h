#ifndef __ILOCALPOSITION__H__
#define __ILOCALPOSITION__H__

#include "../type/Position.h"
#include <vector>
class Framework;

class ILocalPosition
{
 public:
  virtual void step(Framework* framework) = 0;
  virtual Position getSelfPosition(int clock) = 0;
  virtual Position getBallPosition(int clock) = 0;
  virtual Position getGoalPosition(int clock) = 0;
  virtual std::vector<Position> getLinePositions(int clock) = 0;
};

#endif
