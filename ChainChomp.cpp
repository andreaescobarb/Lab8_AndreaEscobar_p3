#include "ChainChomp.h"
//#include "Melee.h"

ChainChomp::ChainChomp(){

}
ChainChomp::ChainChomp(string nombre, int wins, int experience, int intimidar, string color, int hp, int def, int vel, int fuerza):Melee(nombre, wins, experience,intimidar){
  this->color=color;
  this->hp;
  this->def;
  this->vel;
  this->fuerza;
}

string ChainChomp::getColor(){
  return color;
}

void ChainChomp::setColor(string color){
  this->color=color;
}

int ChainChomp::getHp(){
  return hp;
}

void ChainChomp::setHp(int hp){
  this->hp=hp;
}

int ChainChomp::getDef(){
  return def;
}

void ChainChomp::setDef(int def){
  this->def=def;
}

int ChainChomp::getVel(){
  return vel;
}

void ChainChomp::setVel(int vel){
  this->vel=vel;
}

int ChainChomp::getFuerza(){
  return fuerza;
}

void ChainChomp::setFuerza(int fuerza){
  this->fuerza=fuerza;
}
ChainChomp::~ChainChomp(){

}
