#ifndef __IPLANMAKER__H__
#define __IPLANMAKER__H__

#include "../type/Plan.h"

class IPlanMaker
{
 public:
  virtual Plan getPlan() = 0;
};

#endif
