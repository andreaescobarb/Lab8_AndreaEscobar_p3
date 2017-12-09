#include "Boo.h"
#include "Flying.h"
Boo::Boo(){

}
Boo::Boo(string nombre, int wins, int experience, int habilidad,string color, int hp, int def, int vel, int fuerza, bool invisible):Flying(nombre, wins, experience,habilidad){
  this->color=color;
  hp=20;
  def=20;
  vel=35;
  fuerza=8;
  this->invisible=invisible;
}

int Boo::getHp(){
  return hp;
}

void Boo::setHp(int hp){
  this->hp=hp;
}

int Boo::getDef(){
  return def;
}

void Boo::setDef(int def){
  this->def=def;
}

int Boo::getVel(){
  return vel;
}

void Boo::setVel(int vel){
  this->vel=vel;
}

int Boo::getFuerza(){
  return fuerza;
}

void Boo::setFuerza(int fuerza){
  this->fuerza=fuerza;
}

bool Boo::getInvisible(){
  return invisible;
}

void Boo::setInvisible(bool invisible){
  this->invisible=invisible;
}

Boo::~Boo(){

}
