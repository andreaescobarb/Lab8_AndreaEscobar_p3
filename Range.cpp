#include "Range.h"

Range::Range(){

}

Range::Range(string nombre, int wins, int experience, int rango):Minion(nombre, wins, experience){
  this->rango=rango;
}

int Range::getRango(){
  return rango;
}

void Range::setRango(int rango){
  this->rango=rango;
}

Range::~Range(){

}
