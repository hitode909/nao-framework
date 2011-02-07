#include "../type/Position.h"

class ILocalPosition
{
 public:
  virtual Position getBallPosition() = 0;
  virtual Position getSelfPosition() = 0;
  virtual Position getGoalPosition() = 0;
};
