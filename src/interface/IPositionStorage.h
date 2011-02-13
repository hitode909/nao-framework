#ifndef __IPOSITIONSTORAGE__H__
#define __IPOSITIONSTORAGE__H__

#include "../interface/ILocalPosition.h"
#include "../interface/IGlobalPosition.h"
#include "../type/Position.h"
#include "HasFramework.h"
#include <vector>

class IPositionStorage : public HasFramework
{
 public:
  virtual void setLocalPositionInstance(LocalPosition* local_position) = 0;
  virtual void setGlobalPositionInstance(LocalPosition* global_position) = 0;

  void clear() = 0;

  virtual Position getSelfLocalPosition(int clock) = 0;
  virtual Position getBallLocalPosition(int clock) = 0;
  virtual Position getGoalLocalPosition(int clock) = 0;
  virtual std::vector<Position> getLineLocalPositions(int clock) = 0;

  virtual Position getSelfGlobalPosition(int clock) = 0;
  virtual Position getBallGlobalPosition(int clock) = 0;
  virtual Position getGoalGlobalPosition(int clock) = 0;
  virtual std::vector<Position> getLineGlobalPositions(int clock) = 0;
};

#endif
