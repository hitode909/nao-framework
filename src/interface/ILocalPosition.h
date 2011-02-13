#ifndef __ILOCALPOSITION__H__
#define __ILOCALPOSITION__H__

#include "../type/Position.h"
#include "HasFramework.h"
#include <vector>

class ILocalPosition : public HasFramework
{
 public:
  virtual Position getSelfPosition(int clock) = 0;
  virtual Position getBallPosition(int clock) = 0;
  virtual Position getGoalPosition(int clock) = 0;
  virtual std::vector<Position> getLinePositions(int clock) = 0;
};

#endif
