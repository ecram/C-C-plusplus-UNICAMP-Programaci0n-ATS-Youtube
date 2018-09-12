/*
 * nome: ejercicio01.cpp
 * descripción: Primer programa en C++ "Hola Mundo"
 * fecha: 03/05/2018
 */

#include <iostream>

using namespace std;

void calcular(int,int,int&,int&);

int main()
{
	int num1,num2,suma=0,producto=0;

	cout <<"Digite 2 números: ";
	cin>>num1>>num2;

	calcular(num1,num2,suma,producto);

	cout<<"El valor de la suma es: "<<suma<<endl;
	cout<<"El valor de la multiplicación es: "<<producto<<endl;

	return 0;
}

void calcular(int num1, int num2, int& suma, int& producto)
{
	suma = num1 + num2;
	producto = num1 * num2;
}
