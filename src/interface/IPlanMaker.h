#ifndef __IPLANMAKER__H__
#define __IPLANMAKER__H__

#include "../type/Plan.h"
#include "../framework/Framework.h"

class IPlanMaker
{
 public:
  virtual void step(Framework* framework) = 0;
  virtual Plan getPlan() = 0;
};

#endif
