/*
 * nome: ejercicio01.cpp
 * descripción: Primer programa en C++ "Hola Mundo"
 * fecha: 03/05/2018
 */

#include <iostream>
using namespace std;

void cuadrado(int vector[],int);
void imprimir(int vector[],int);

int main()
{
	const int TAM = 5;
	int vector[TAM] = {1,2,3,4,5};
	imprimir(vector,TAM);
	cuadrado(vector,TAM);
	imprimir(vector,TAM);
	return 0;
}

void cuadrado(int vector[],int tamano)
{
	for(int i=0;i<tamano;i++)
		vector[i]*=vector[i];
}

void imprimir(int vector[], int tamano)
{
	for(int i=0;i<tamano;i++)
		cout<<vector[i]<<" ";
	cout<<endl;
}
