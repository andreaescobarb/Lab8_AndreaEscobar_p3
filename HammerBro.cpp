#include "HammerBro.h"

HammerBro::HammerBro(){

}
HammerBro::HammerBro(string nombre, int wins, int experience, int rango,int sizeHammer, int hp, int def, int vel, int fuerza):Range(nombre, wins, experience, rango){
  this->sizeHammer=sizeHammer;
  this->hp;
  this->def;
  this->vel;
  this->fuerza;
}

int HammerBro::getSizeHammer(){
  return sizeHammer;
}

void HammerBro::setSizeHammer(int sizeHammer){
  this->sizeHammer=sizeHammer;
}

int HammerBro::getHp(){
  return hp;
}

void HammerBro::setHp(int hp){
  this->hp=hp;
}

int HammerBro::getDef(){
  return def;
}

void HammerBro::setDef(int def){
  this->def=def;
}

int HammerBro::getVel(){
  return vel;
}

void HammerBro::setVel(int vel){
  this->vel=vel;
}

int HammerBro::getFuerza(){
  return fuerza;
}

void HammerBro::setFuerza(int fuerza){
  this->fuerza=fuerza;
}

HammerBro::~HammerBro(){

}
