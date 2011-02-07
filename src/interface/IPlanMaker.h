#ifndef __IPLANMAKER__H__
#define __IPLANMAKER__H__

#include "../type/Plan.h"
#include "HasFramework.h"

class IPlanMaker : public HasFramework
{
 public:
  virtual Plan getPlan() = 0;
};

#endif
