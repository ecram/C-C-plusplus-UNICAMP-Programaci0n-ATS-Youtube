/*
 * nome: ejercicio01.cpp
 * descripción: Primer programa en C++ "Hola Mundo"
 * fecha: 03/05/2018
 */

#include <iostream>

using namespace std;

template <class TIPOD> // Permite definir en tipo de dato general
void mostrarAbs(TIPOD numero)
{
	if(numero < 0)
		numero = numero * -1;

	cout<<"El valor absoluto del número es: "<<numero<<endl;
}

int main()
{
	int num1 = -4;
	float num2 = -56.67;
	double num3 = -123.5678;

	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);

	return 0;
}
