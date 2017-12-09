#include "Magikoopa.h"

Magikoopa::Magikoopa(){

}
Magikoopa::Magikoopa(string nombre, int wins, int experience, int rango,string color, int hp, int def, int vel, int fuerza):Range(nombre, wins, experience, rango){
  this->color=color;
  this->hp;
  this->def;
  this->vel;
  this->fuerza;
}

string Magikoopa::getColor(){
  return color;
}

void Magikoopa::setColor(string color){
  this->color=color;
}

int Magikoopa::getHp(){
  return hp;
}

void Magikoopa::setHp(int hp){
  this->hp=hp;
}

int Magikoopa::getDef(){
  return def;
}

void Magikoopa::setDef(int def){
  this->def=def;
}

int Magikoopa::getVel(){
  return vel;
}

void Magikoopa::setVel(int vel){
  this->vel=vel;
}

int Magikoopa::getFuerza(){
  return fuerza;
}

void Magikoopa::setFuerza(int fuerza){
  this->fuerza=fuerza;
}

Magikoopa::~Magikoopa(){

}
