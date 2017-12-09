#ifndef MELEE_H
#define MELEE_H

#include "Minions.h"

class Melee:public Minion{
  private:
    int intimidar;
  public:
    Melee();
    Melee(string, int, int, int);

    int getIntimidar();
    void setIntimidar(int);

    virtual ~Melee();
};
#endif
