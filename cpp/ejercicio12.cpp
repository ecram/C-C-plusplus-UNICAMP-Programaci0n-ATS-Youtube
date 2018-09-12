/*
 * nome: ejercicio09.cpp
 * descripción: Sumatoria de números complejos usando estructuras.
 * fecha: 03/05/2018
 */

#include <iostream>
using namespace std;

/*Prototipos: */
int exponente(int,int);

int main()
{
  long int n = 0, e = 0;

  cout<<"Digite un numero: ";
  cin >>n;
  cout<<"Digite su exponente: ";
  cin >>e;

  cout<<"El exponente de "<<n<<"^"<<e<<" es: "<<exponente(n,e)<<endl;
  return 0;
}

int exponente(int n, int e)
{
  int res = 1;
  if(n == 0 && e == 0)
    return 1;
  else if(e == 1)
    return n;
  else if (e<=0)
    return 0;
  else
    return res * n * exponente(n,e-1);
}
