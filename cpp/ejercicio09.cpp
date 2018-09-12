/*
 * nome: ejercicio09.cpp
 * descripción: Sumatoria de números complejos usando estructuras.
 * fecha: 03/05/2018
 */

#include <iostream>
using namespace std;

/*Declarando la estructura de tipo global: */
struct Complejo
{
  float real,imaginario;
}z1,z2;

/*Prototipos: */
void pedirDatos();
Complejo suma(Complejo,Complejo);
void muestra(Complejo);

int main()
{
  pedirDatos();
  Complejo x = suma(z1,z2);
  muestra(x);
  return 0;
}

void pedirDatos()
{
  cout<<"Digite un numero real para z1: ";
  cin >>z1.real;
  cout<<"Digite un numero complejo para z1: ";
  cin >>z1.imaginario;
  cout<<"Digite un numero real para z2: ";
  cin >>z2.real;
  cout<<"Digite un numero complejo para z2: ";
  cin >>z2.imaginario;
}

Complejo suma(Complejo z1, Complejo z2)
{
  z1.real += z2.real;
  z1.imaginario += z2.imaginario;
  return z1;
}

void muestra(Complejo x)
{
  cout<<"\nResultado de la suma: "<<x.real<<" + "<<x.imaginario<<"i"<<endl;
}
