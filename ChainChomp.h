#ifndef CHAINCHOP_H
#define CHAINCHOP_H

#include "Melee.h"
#include <iostream>
#include <string>
using namespace std;

class ChainChomp: public Melee{
  private:
    string color;
    int hp, def, vel, fuerza;
  public:
    ChainChomp();
    ChainChomp(string, int, int, int,string, int, int, int, int);
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

    virtual ~ChainChomp();
};
#endif
