#ifndef GOOMBA_H
#define GOOMBA_H
#include "Melee.h"

class Goomba: public Melee{
  private:
    int size, hp, def, vel, fuerza;
    bool sombrero;
  public:
    Goomba();
    Goomba(string, int, int, int, int, int, int, int, int, bool);
    int getSize();
    void setSize(int);

    int getHp();
    void setHp(int);

    int getDef();
    void setDef(int);

    int getVel();
    void setVel(int);

    int getFuerza();
    void setFuerza(int);

    bool getSombrero();
    void setSombrero(bool);
    virtual ~Goomba();

};
#endif
