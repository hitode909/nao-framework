class IGameState
{
 public:
  virtual bool isPlaying() = 0;
  virtual bool isPenalized() = 0;
  virtual bool isFinished() = 0;
};
