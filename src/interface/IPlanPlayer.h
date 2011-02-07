#ifndef __IPLANPLAYER__H__
#define __IPLANPLAYER__H__

#include "../type/Plan.h"
#include "HasFramework.h"

class IPlanPlayer : public HasFramework
{
 public:
  virtual void doPlan(Plan plan) = 0;
};

#endif
