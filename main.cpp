#include "Boo.h"
#include "ChainChomp.h"
#include "Flying.h"
#include "Goomba.h"
#include "HammerBro.h"
#include "Magikoopa.h"
#include "Melee.h"
#include "Minions.h"
#include "Paratroopa.h"
#include "Range.h"

#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>

int menu();
int mins();

using namespace std;

int main(int argc, char const *argv[]) {

  bool program=true;
  vector< vector<Minion*> > teams;
  while (program) {
    switch (menu()) {
      case 1:{
        char res='s';
        vector<Minion*> min;
        string nombre;
        int wins, experience, hp, vel, fuerza, def;
        while (res=='s'||res=='S') {
          while (min.size()<7) {
            cout<<min.size();
            switch (mins()) {
              case 1:{
                int size, intimidar;
                bool sombrero;
                cout<<"Ingrese nombre"<<endl;
                cin>>nombre;
                cout<<"Ingrese capacidad para intimidad (int)"<<endl;
                cin>>intimidar;
                cout<<"Ingrese tamano"<<endl;
                cin>>size;
                cout<<"Ingrese HP (20-40)"<<endl;
                cin>>hp;
                while (hp<20||hp>40) {
                  cout<<"HP es invalido, intente de nuevo"<<endl;
                  cin>>hp;
                }
                min.push_back(new Goomba(nombre, 0, 0, intimidar, size, hp, 0, 65, 10, true));
                teams.push_back(min);
                break;
              }//fin del case 1 Minions
              case 2:{
                int intimidar;
                string color;
                cout<<"Ingrese nombre"<<endl;
                cin>>nombre;
                cout<<"Ingrese capacidad para intimidad (int)"<<endl;
                cin>>intimidar;
                cout<<"Ingrese color"<<endl;
                cin>>color;
                cout<<"Ingrese HP (10-30)"<<endl;
                cin>>hp;
                while (hp<10||hp>30) {
                  cout<<"HP es invalido, intente de nuevo"<<endl;
                  cin>>hp;
                }
                min.push_back(new ChainChomp(nombre, 0, 0, intimidar, color, hp, 60, 20, 15));
                teams.push_back(min);
                break;
              }//fin del case 2 Minions
              case 3:{
                int hab;
                string color;
                cout<<"Ingrese nombre"<<endl;
                cin>>nombre;
                cout<<"Ingrese capacidad para habilidad para volar (int)"<<endl;
                cin>>hab;
                cout<<"Ingrese color"<<endl;
                cin>>color;
                cout<<"Ingrese HP (20-40)"<<endl;
                cin>>hp;
                while (hp<10||hp>30) {
                  cout<<"HP es invalido, intente de nuevo"<<endl;
                  cin>>hp;
                }
                min.push_back(new Boo(nombre, 0, 0, hab, color, hp, 20, 35, 8));
                teams.push_back(min);
                break;
              }//fin del case 3 Minions
              case 4:{
                int hab;
                string color;
                cout<<"Ingrese nombre"<<endl;
                cin>>nombre;
                cout<<"Ingrese capacidad para habilidad para volar (int)"<<endl;
                cin>>hab;
                cout<<"Ingrese color"<<endl;
                cin>>color;
                cout<<"Ingrese HP (40-60)"<<endl;
                cin>>hp;
                while (hp<40||hp>60) {
                  cout<<"HP es invalido, intente de nuevo"<<endl;
                  cin>>hp;
                }
                min.push_back(new Paratroopa(nombre, 0, 0, hab, color, hp, 40, 10, 9));
                teams.push_back(min);
                break;
              }//fin del case 4 Minions
              case 5:{
                int rango;
                int tam;
                cout<<"Ingrese nombre"<<endl;
                cin>>nombre;
                cout<<"Ingrese capacidad rango (int)"<<endl;
                cin>>rango;
                cout<<"Ingrese tamano de martillo"<<endl;
                cin>>tam;
                cout<<"Ingrese HP (60-80)"<<endl;
                cin>>hp;
                while (hp<60||hp>80) {
                  cout<<"HP es invalido, intente de nuevo"<<endl;
                  cin>>hp;
                }
                min.push_back(new HammerBro(nombre, 0, 0, hab, tam, hp, 15, 30, 6));
                teams.push_back(min);
                break;
              }//fin del case 5 Minions
              case 6:{
                int rango;
                string color;
                cout<<"Ingrese nombre"<<endl;
                cin>>nombre;
                cout<<"Ingrese rango (int)"<<endl;
                cin>>hab;
                cout<<"Ingrese color"<<endl;
                cin>>color;
                cout<<"Ingrese HP (50-70)"<<endl;
                cin>>hp;
                while (hp<50||hp>70) {
                  cout<<"HP es invalido, intente de nuevo"<<endl;
                  cin>>hp;
                }
                min.push_back(new Magikoopa(nombre, 0, 0, rango, color, hp, 0, 60, 7));
                teams.push_back(min);
                break;
              }//fin del case 6 Minions
            }//fin del switch de agregar minions
          }//fin del while del vector
          cout<<"Desea agregar mas minions [s/n]"<<endl;
          cin>>res;
        }// fin del while del menu

        break;
      }//fin del case 1

      case 2:{

        break;
      }//fin del case 2
      case 3:{
        break;
      }//fin del case 3

      case 4:{
        break;
      }//fin del case 4

      case 5:{
        break;
      }//fin del case 5

      case 6:{
        program = false;
        break;
      }//fin del case 6
    }//fin del switch de MENU
  }//fin del while
  return 0;
}

int menu(){
  cout<<"         MENU PRINCIPAL"<<endl<<"_____________________________________"<<endl<<"Ingrese opcion"<<endl;
  cout<<"1- Crear equipo de Minions"<<endl;
  cout<<"2- Modificar equipo de Minions"<<endl;
  cout<<"3- Eliminar equipo de Minions"<<endl;
  cout<<"5- Simulacion de pelea"<<endl;
  cout<<"6- Salir de programa"<<endl;
  int opc;
  cin>>opc;
  while (opc>6||opc<1) {
    cout<<"Opcion invalida, intente de nuevo"<<endl;
    cin>>opc;
  }
  return opc;
}

int mins(){
  cout<<"         MENU DE MINIONS"<<endl<<"_____________________________________"<<endl<<"Ingrese opcion para formar equipo"<<endl;
  cout<<"1- Goomba"<<endl;
  cout<<"2- Chain Chomp"<<endl;
  cout<<"3- Paratroopa"<<endl;
  cout<<"5- Hammer Bro"<<endl;
  cout<<"6- Magikoopa"<<endl;
  int opc;
  cin>>opc;
  while (opc>6||opc<1) {
    cout<<"Opcion invalida, intente de nuevo"<<endl;
    cin>>opc;
  }
  return opc;
}
