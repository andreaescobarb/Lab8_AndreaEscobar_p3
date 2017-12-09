#include "Paratroopa.h"

Paratroopa::Paratroopa(){

}
Paratroopa::Paratroopa(string nombre, int wins, int experience, int habilidad,string color, int hp, int def, int vel, int fuerza, bool esconderse):Flying(nombre, wins, experience,habilidad){
  this->color=color;
  this->hp;
  this->def;
  this->vel;
  this->fuerza;
  this->esconderse=esconderse;
}

int Paratroopa::getHp(){
  return hp;
}

void Paratroopa::setHp(int hp){
  this->hp=hp;
}

int Paratroopa::getDef(){
  return def;
}

void Paratroopa::setDef(int def){
  this->def=def;
}

int Paratroopa::getVel(){
  return vel;
}

void Paratroopa::setVel(int vel){
  this->vel=vel;
}

int Paratroopa::getFuerza(){
  return fuerza;
}

void Paratroopa::setFuerza(int fuerza){
  this->fuerza=fuerza;
}

bool Paratroopa::getEsconderse(){
  return esconderse;
}

void Paratroopa::setEsconderse(bool esconderse){
  this->esconderse=esconderse;
}

Paratroopa::~Paratroopa(){

}
