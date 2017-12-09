#ifndef FLYING_H
#define FLYING_H
#include "Minions.h"

class Flying: public Minion{
  private:
    int habilidad;
  public:
    Flying();
    Flying(string, int, int,int);
    //setters and getters
    int getHabilidad();
    void setHabilidad(int);

    virtual ~Flying();

};
#endif
