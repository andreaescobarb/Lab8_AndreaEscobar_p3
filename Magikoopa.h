#ifndef MAGIKOOPA
#define MAGIKOOPA

#include "Range.h"
#include <iostream>
#include <string>
using namespace std;

class Magikoopa: public Range{
private:
  string color;
  int hp, def, vel, fuerza;

public:

  Magikoopa();
  Magikoopa(string, int, int, int,string, int, int, int, int);

  string getColor();
  void setColor(string);

  int getHp();
  void setHp(int);

  int getDef();
  void setDef(int);

  int getVel();
  void setVel(int);

  int getFuerza();
  void setFuerza(int);

  virtual ~Magikoopa();
};
#endif
