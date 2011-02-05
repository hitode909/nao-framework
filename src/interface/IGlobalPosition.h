class IGlobalPosition
{
 public:
  virtual Position getBallPosition() = 0;
  virtual Position getSelfPosition() = 0;
  virtual Position getGoalPosition() = 0;
};
