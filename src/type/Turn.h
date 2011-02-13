#ifndef __TURN_H__
#define __TURN_H__

#include "../type/IAction.h"

class Turn : IAction {
 public:
  double rz;
  double speed;
};

#endif
