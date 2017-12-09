#include "Minions.h"

Minion::Minion(){

}
Minion::Minion(string nombre, int wins, int experience){
  this->nombre=nombre;
  this->wins=wins;
  this->experience=experience;
}

string Minion::getNombre(){
    return nombre;
}

void Minion::setNombre(string nombre){
  this->nombre=nombre;
}

int Minion::getWins(){
  return wins;
}

void Minion::setWins(int wins){
  this->wins=wins;
}

int Minion::getExperience(){
  return experience;
}

void Minion::setExperience(int experience){
  this->experience=experience;
}

Minion::~Minion(){

}
