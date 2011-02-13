#ifndef __IPLANPLAYER__H__
#define __IPLANPLAYER__H__

#include <vector>
#include "../type/Plan.h"
#include "HasFramework.h"

class IPlanPlayer : public HasFramework
{
 public:
  virtual Plan getPlan() = 0;
  virtual void setPlan(Plan plan) = 0;
};

#endif
