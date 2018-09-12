/*
 * nome: ejercicio21.cpp
 * descripción: Herencia en POO.
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
    Persona(string,int); // Método constructur nos ayuda a iniciacilizar la clase
    void mostrarPersona();
    void leer();
    void correr();
};

// Constructor, nos sirve para iniciacilizar los Atributos
Persona::Persona(string _nombre,int _edad){
  nombre = _nombre;
  edad = _edad;
}

void Persona::leer(){
  cout<<"Soy "<<nombre<<" y estoy leyendo un libro."<<endl;
}

void Persona::correr(){
  cout<<"Soy "<<nombre<<" y estoy corriendo una maratón y tengo "<<edad<<" años."<<endl;
}

void Persona::mostrarPersona(){
  cout<<"Nombre: "<<nombre<<endl;
  cout<<"Edad: "<<edad<<endl;
}

class Alumno : public Persona{
private: // Atributos de la clase Alumno
  string codigoAlumno;
  float notaFinal;
public: // Métodos de la clase Alumno
  Alumno(string,int,string,float); // Constructor de la clase Alumno
  void mostrarAlumno();
};

Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal): Persona(_nombre,_edad){
  codigoAlumno = _codigoAlumno;
  notaFinal = _notaFinal;
}

void Alumno::mostrarAlumno(){
  mostrarPersona();
  cout<<"Codigo alumno: "<<codigoAlumno<<endl;
  cout<<"Nota final: "<<notaFinal<<endl;
}

int main()
{
  Persona persona1("Marcelo",35);
  persona1.mostrarPersona();
  Alumno alumno1("Marcelo",35,"89053",8.1);
  alumno1.mostrarAlumno();

  return 0;
}
