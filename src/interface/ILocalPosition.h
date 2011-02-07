#ifndef __ILOCALPOSITION__H__
#define __ILOCALPOSITION__H__

#include "../type/Position.h"
#include "HasFramework.h"

class ILocalPosition : public HasFramework
{
 public:
  virtual Position getBallPosition() = 0;
  virtual Position getSelfPosition() = 0;
  virtual Position getGoalPosition() = 0;
};

#endif
