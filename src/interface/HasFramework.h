#ifndef __HAS_FRAMEWORK_H__
#define __HAS_FRAMEWORK_H__

class Framework;

class HasFramework
{
 public:
  Framework* framework;
  virtual void step(int time);
  virtual void setup(Framework* framework);
};

#include "HasFramework.cpp"

#endif




