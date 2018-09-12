/*
 * nome: ejercicio16.cpp
 * descripción: POO.
 * fecha: 05/05/2018
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona{
  private:  // Atributos de la clase Persona
    int edad;
    string nombre;
  public: // Métodos de la clase Persona
    Persona(int, string); // Método constructur nos ayuda a iniciacilizar la clase
    void leer();
    void correr();
};
// Constructor, nos sirve para iniciacilizar los Atributos
Persona::Persona(int _edad,string _nombre){
  edad = _edad;
  nombre = _nombre;
}

void Persona::leer(){
  cout<<"Soy "<<nombre<<" y estoy leyendo un libro."<<endl;
}

void Persona::correr(){
  cout<<"Soy "<<nombre<<" y estoy corriendo una maratón y tengo "<<edad<<" años."<<endl;
}

int main()
{
  Persona p1 = Persona(35,"Marcelo Invert Palma Salas");
  Persona p2(30,"Helen Narda Numbela Valdivia");
  Persona p3(21,"Juan");

  p1.leer();
  p2.correr();

  p3.leer();
  p3.correr();
  return 0;
}
