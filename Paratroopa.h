#ifndef PARATROOPA_H
#define PARATROOPA_H

#include "Flying.h"
#include <iostream>
#include <string>
using namespace std;

class Paratroopa: public Flying{
private:
  string color;
  int hp, def, vel, fuerza;
  bool esconderse;

public:

  Paratroopa();
  Paratroopa(string, int, int, int,string, int, int, int, int, bool);

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

  bool getEsconderse();
  void setEsconderse(bool);

  virtual ~Paratroopa();
};
#endif
