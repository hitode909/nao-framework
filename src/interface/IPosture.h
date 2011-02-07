#ifndef __IPOSTURE__H__
#define __IPOSTURE__H__

class IPosture
{
 public:
  virtual bool isStanding() = 0;
  virtual bool isLying() = 0;
};

#endif
