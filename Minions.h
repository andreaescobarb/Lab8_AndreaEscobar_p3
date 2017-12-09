#ifndef MINION_H
#define MINION_H

#include <string>
#include <iostream>
using namespace std;

class Minion{
  private:
    string nombre;
    int wins, experience;

  public:
    Minion();
    Minion(string, int, int);
    string getNombre();
    void setNombre(string);

    int getWins();
    void setWins(int);

    int getExperience();
    void setExperience(int);

    virtual ~Minion();
};
#endif
