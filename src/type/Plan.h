#ifndef __PLAN_H__
#define __PLAN_H__

#include "../type/Action.h"
#include <vector>

class Plan{
 public:
  std::vector<Action> actions;

  void step(int time);
  bool isRunning();
  bool isFinished();

 private:
  int index;
};

#endif
