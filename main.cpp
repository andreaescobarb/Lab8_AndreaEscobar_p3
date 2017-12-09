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
      vector<Minion*> min;
      case 1:{
        char res='s';
        while (res=='s'||res=='S') {
          while (min.size()<8) {
            cout<<min.size();
            switch (mins()) {
              case 1:{

                break;
              }//fin del case 1 Minions
              case 2:{

                break;
              }//fin del case 2 Minions
              case 3:{

                break;
              }//fin del case 3 Minions
              case 4:{

                break;
              }//fin del case 4 Minions
              case 5:{

                break;
              }//fin del case 5 Minions
              case 6:{

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
