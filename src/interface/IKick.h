class IKick
{
 public:
  virtual void do(int power) = 0;
  virtual void interrupt(void) = 0;
  virtual void isKicking(void) = 0;
};
