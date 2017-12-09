#ifndef HAMMERBRO_H
#define HAMMERBRO_H

#include "Range.h"

class HammerBro: public Range{
private:
  int sizeHammer;
  int hp, def, vel, fuerza;

public:

  HammerBro();
  HammerBro(string, int, int, int,int, int, int, int, int);

  int getSizeHammer();
  void setSizeHammer(int);

  int getHp();
  void setHp(int);

  int getDef();
  void setDef(int);

  int getVel();
  void setVel(int);

  int getFuerza();
  void setFuerza(int);

  virtual ~HammerBro();
};
#endif
