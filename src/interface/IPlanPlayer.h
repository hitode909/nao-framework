#ifndef __IPLANPLAYER__H__
#define __IPLANPLAYER__H__

#include "../type/Plan.h"

class IPlanPlayer
{
 public:
  virtual void doPlan(Plan plan) = 0;
};

#endif
