#include "Goomba.h"

Goomba::Goomba(){

}
Goomba::Goomba(string nombre, int wins, int experience, int intimidar,int size, int hp, int def, int vel, int fuerza, bool sombrero):Melee(nombre, wins, experience,intimidar){
  this->size=size;
  hp=20;
  def=0;
  vel=65;
  fuerza=10;
  this->sombrero=sombrero;
}

int Goomba::getSize(){
  return size;
}

void Goomba::setSize(int size){
  this->size=size;
}

int Goomba::getHp(){
  return hp;
}

void Goomba::setHp(int hp){
  this->hp=hp;
}

int Goomba::getDef(){
  return def;
}

void Goomba::setDef(int def){
  this->def=def;
}

int Goomba::getVel(){
  return vel;
}

void Goomba::setVel(int vel){
  this->vel=vel;
}

int Goomba::getFuerza(){
  return fuerza;
}

void Goomba::setFuerza(int fuerza){
  this->fuerza=fuerza;
}

bool Goomba::getSombrero(){
  return sombrero;
}

void Goomba::setSombrero(bool sombrero){
  this->sombrero=sombrero;
}

Goomba::~Goomba(){

}
