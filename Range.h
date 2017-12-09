#ifndef RANGE_H
#define RANGE_H
#include "Minions.h"

class Range: public Minion{
private:
  int rango;
public:
  Range();
  Range(string, int,int,int);
  //setters and getters
  int getRango();
  void setRango(int);

  virtual ~Range();
};
#endif
