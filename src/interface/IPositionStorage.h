#ifndef __IPOSITIONSTORAGE__H__
#define __IPOSITIONSTORAGE__H__

#include "../interface/ILocalPosition.h"
#include "../interface/IGlobalPosition.h"
#include "../type/Position.h"
#include <vector>
class Framework;


class IPositionStorage
{
 public:
  virtual void step(Framework* framework) = 0;
  virtual void setLocalPositionInstance(ILocalPosition* local_position) = 0;
  virtual void setGlobalPositionInstance(IGlobalPosition* global_position) = 0;

  virtual void clear() = 0;

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
