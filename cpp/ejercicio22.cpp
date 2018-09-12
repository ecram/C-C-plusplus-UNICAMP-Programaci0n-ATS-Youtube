/*
 * nome: ejercicio22.cpp
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

class Universitario : public Alumno{
private:
  string carrera;
  int anioIngreso;
  float beca;
public:
  Universitario(string,int,string,float,string,int,float);
  void mostrarUniversitario();
};

Universitario::Universitario(string _nombre, int _edad, string _codigoAlumno, float _notaFinal,string _carrera,int _anioIngreso,float _beca): Alumno(_nombre,_edad,_codigoAlumno,_notaFinal){
  carrera = _carrera;
  anioIngreso = _anioIngreso;
  beca = _beca;
}

void Universitario::mostrarUniversitario(){
  mostrarAlumno();
  cout<<"Carrera: "<<carrera<<endl;
  cout<<"Año de Ingreso: "<<anioIngreso<<endl;
  cout<<"Beca en porcentaje: "<<beca<<endl;
}

class Empleado : public Persona{
private:
  string puesto;
  float salario;
public:
  Empleado(string,int,string,float);
  void mostrarEmpleado();
};

Empleado::Empleado(string _nombre, int _edad, string _puesto, float _salario): Persona(_nombre,_edad){
  puesto = _puesto;
  salario = _salario;
}

void Empleado::mostrarEmpleado(){
  mostrarPersona();
  cout<<"Puesto: "<<puesto<<endl;
  cout<<"Salario: "<<salario<<endl;
}

int main()
{
  cout<<"Superclase o Clase Padre Persona:"<<endl;
  Persona persona1("Marcelo",35);
  persona1.mostrarPersona();
  cout<<"\nSubclase o clase hijo Empleado:"<<endl;
  Empleado empleado1("Helen",35,"Odontologa",3500);
  empleado1.mostrarEmpleado();
  cout<<"\nSubclase o clase hijo Alumno:"<<endl;
  Alumno alumno1("Marcelo",35,"89053",8.1);
  alumno1.mostrarAlumno();
  cout<<"\nSubsubclase o clase hijo Universitario:"<<endl;
  Universitario universitario1("Leandro",30,"089024",8.5,"Computação",2009,10.5);
  universitario1.mostrarUniversitario();

  return 0;
}
