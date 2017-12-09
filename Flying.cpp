#include "Flying.h"

Flying::Flying(){

}

Flying::Flying(string nombre, int wins, int experience, int habilidad):Minion(nombre, wins, experience){
  this->habilidad=habilidad;
}

int Flying::getHabilidad(){
  return habilidad;
}

void Flying::setHabilidad(int habilidad){
  this->habilidad=habilidad;
}

Flying::~Flying(){

}
