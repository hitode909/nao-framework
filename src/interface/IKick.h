#ifndef __IKICK_H__
#define __IKICK_H__

class IKick
{
 public:
  virtual void kick(int power) = 0;
  virtual void interrupt(void) = 0;
  virtual bool isKicking(void) = 0;
};

#endif
