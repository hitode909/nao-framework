#ifndef __WALK_H__
#define __WALK_H__

#include "../type/IAction.h"

class Walk : IAction {
 public:
  double x;
  double y;
  double rz;
  double speed;
};

#endif
