#ifndef BOO_H
#define BOO_H

#include <iostream>
#include <string>
#include "Flying.h"
#include "Minions.h"
using namespace std;

class Boo : public Flying{
  private:
    string color;
    int hp, def, vel, fuerza;
    bool invisible;

  public:
    Boo();
    Boo(string, int, int, int, string, int, int, int, int, bool);

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

    bool getInvisible();
    void setInvisible(bool);

    virtual ~Boo();
};
#endif
