/*
 * nome: ejercicio09.cpp
 * descripción: Sumatoria de números complejos usando estructuras.
 * fecha: 03/05/2018
 */

#include <iostream>
using namespace std;

/*Prototipos: */
void pedirNotas();
void mostrarNotas();

int numCalif,*calif;

int main()
{
  pedirNotas();
  mostrarNotas();

  delete[] calif;
  return 0;
}

void pedirNotas()
{
  cout<<"Digite el número de calificaciones: ";
  cin >>numCalif;

  calif = new int[numCalif];

  for(int i=0;i<numCalif;i++)
  {
    cout<<"Ingrese una nota: ";
    cin >>calif[i];
  }
}


void mostrarNotas()
{
  cout<<"\n\nMostrando notas del Usuario:\n";
  for(int i=0;i<numCalif;i++)
    cout<<"Nota["<<i<<"]: "<<calif[i]<<endl;
}
