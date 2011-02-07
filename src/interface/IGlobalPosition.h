#ifndef __IGLOBALPOSITION__H__
#define __IGLOBALPOSITION__H__

#include "../type/Position.h"
#include "HasFramework.h"

class IGlobalPosition : public HasFramework
{
 public:
  virtual Position getBallPosition() = 0;
  virtual Position getSelfPosition() = 0;
  virtual Position getGoalPosition() = 0;
};

#endif
