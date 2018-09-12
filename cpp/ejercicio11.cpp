/*
 * nome: ejercicio09.cpp
 * descripción: Sumatoria de números complejos usando estructuras.
 * fecha: 03/05/2018
 */

#include <iostream>
using namespace std;

/*Prototipos: */
int fibonacci(int);

int main()
{
  long int n = 0;

  cout<<"Digite un numero: ";
  cin >>n;

  cout<<"El fibonacci de "<<n<<" es: "<<fibonacci(n)<<endl;
  cout<<"Serie fibonacci de F("<<n<<"): 0 1 ";
  for(int i = 1;i<=n;i++)
    cout<<fibonacci(i)<<" ";
    cout<<"\n";
  return 0;
}

int fibonacci(int n)
{
  int suma = 0;
  if(n == 0)
    return 1;
  else if(n == 1)
    return 1;
  else
    return suma + fibonacci(n-2)+fibonacci(n-1);
}
