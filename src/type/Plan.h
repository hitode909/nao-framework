#ifndef __PLAN_H__
#define __PLAN_H__

#include "../type/IAction.h"
#include <vector>

class Plan{
 public:
  std::vector<IAction> actions;

  void step(int time);
  bool isRunning();
  bool isFinished();

 private:
  int index;
};

#endif
