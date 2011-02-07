#ifndef __ILOCALPOSITION__H__
#define __ILOCALPOSITION__H__

#include "../type/Position.h"

class ILocalPosition
{
 public:
  virtual Position getBallPosition() = 0;
  virtual Position getSelfPosition() = 0;
  virtual Position getGoalPosition() = 0;
};

#endif
