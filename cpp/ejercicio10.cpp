/*
 * nome: ejercicio09.cpp
 * descripción: Sumatoria de números complejos usando estructuras.
 * fecha: 03/05/2018
 */

#include <iostream>
using namespace std;

/*Prototipos: */
int factorial(int);

int main()
{
  long int n = 0;

  cout<<"Digite un numero: ";
  cin >>n;

  cout<<"El factorial de "<<n<<" es: "<<factorial(n)<<endl;
  return 0;
}

int factorial(int n)
{
  if(n==0)
  {
    return n = 1;
  }
  else
  {
    n = n * factorial(n-1);
  }
  return n;
}
