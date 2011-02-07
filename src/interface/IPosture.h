#ifndef __IPOSTURE__H__
#define __IPOSTURE__H__

#include "HasFramework.h"

class IPosture : public HasFramework
{
 public:
  virtual bool isStanding() = 0;
  virtual bool isLying() = 0;
};

#endif
