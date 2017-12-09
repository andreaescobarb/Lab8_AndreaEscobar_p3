#include "Melee.h"

Melee::Melee(){

}
Melee::Melee(string nombre,int wins, int experience,int intimidar):Minion(nombre, wins, experience){
  this->intimidar=intimidar;
}

int Melee::getIntimidar(){
  return intimidar;
}

void Melee::setIntimidar(int intimidar){
  this->intimidar=intimidar;
}
Melee::~Melee(){

}
