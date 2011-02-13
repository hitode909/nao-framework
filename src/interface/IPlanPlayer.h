#ifndef __IPLANPLAYER__H__
#define __IPLANPLAYER__H__

#include <vector>
#include "../type/Plan.h"
#include "../framework/Framework.h"

class IPlanPlayer
{
 public:
  virtual void step(Framework* framework) = 0;
  virtual Plan getPlan() = 0;
  virtual void setPlan(Plan plan) = 0;
};

#endif
