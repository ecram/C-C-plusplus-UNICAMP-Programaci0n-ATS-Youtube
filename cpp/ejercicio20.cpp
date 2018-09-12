/*
 * nome: ejercicio20.cpp
 * descripción: POO Métodos Constructores y Modificadores (Getters y Setters)
 * fecha: 05/05/2018
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

class Punto{
private: // atributos
  int x,y;
public: // Métodos
  Punto();
  void setPunto(int,int); // Setters
  int getPuntoX();
  int getPuntoY();
};

Punto::Punto(){}

// Establecemos valores a los atributos
void Punto::setPunto(int _x,int _y){
  x = _x;
  y = _y;
}

int Punto::getPuntoX(){
  return x;
}

int Punto::getPuntoY(){
  return y;
}

int main(){
  Punto punto1;

  punto1.setPunto(15,10);

  cout<<"Y: "<<punto1.getPuntoX()<<endl;
  cout<<"X: "<<punto1.getPuntoY()<<endl;

  return 0;
}
