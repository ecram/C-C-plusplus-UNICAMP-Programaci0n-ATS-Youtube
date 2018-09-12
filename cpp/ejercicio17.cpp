/*
 * nome: ejercicio17.cpp
 * descripción: POO Clase rectangulo.
 * fecha: 04/05/2018
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

// declaramos la clase rectangulo
class Rectangulo{
private:
  int largo;
  int ancho;
public:
  Rectangulo(int,int); // Constructor
  void perimetro();
  void area();
};

// Constructor
Rectangulo::Rectangulo(int _largo,int _ancho){
  largo = _largo;
  ancho = _ancho;
}

void Rectangulo::perimetro(){
  cout<<"El perimetro del rectangulo es: "<<(largo*2)+(ancho*2)<<endl;
}

void Rectangulo::area(){
  cout<<"El área del rectangulo es: "<<largo*ancho<<endl;
}

int main(){
  Rectangulo r1 = Rectangulo(5,4);
  r1.perimetro();
  r1.area();

  return 0;
}
