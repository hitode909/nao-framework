#ifndef __IACTION_H__
#define __IACTION_H__

class IAction{
 public:
  virtual void step(int time);
  virtual bool isRunning();
  virtual bool isFinished();
};

#endif
