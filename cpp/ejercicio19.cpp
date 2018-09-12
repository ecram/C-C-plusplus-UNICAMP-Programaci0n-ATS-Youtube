/*
 * nome: ejercicio19.cpp
 * descripción: POO Destructor
 * fecha: 05/05/2018
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

class Perro{
private:
  string nombre,raza;
public:
  Perro(string,string); //Constructor
  ~Perro(); //Destructor, no va ningun tipo de parámetro
  void mostrarDatos();
  void jugar();
};

// Constructor
Perro::Perro(string _nombre, string _raza){
  nombre = _nombre;
  raza = _raza;
}

// Destructor
Perro::~Perro(){
}

void Perro::mostrarDatos(){
  cout<<"Nombre: "<<nombre<<endl;
  cout<<"Raza: "<<raza<<endl;
}

void Perro::jugar(){
  cout<<"El perro "<<nombre<<" está jugando"<<endl;
}



int main(){
  Perro perro1("Fido","Doberman");

  perro1.mostrarDatos();
  perro1.jugar();
  perro1.~Perro(); // Destructor del objeto Perro
  cout<<"Objeto Perro1 destruido"<<endl;

  perro1.mostrarDatos();

  return 0;
}
