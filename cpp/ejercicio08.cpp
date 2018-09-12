/*
 * nome: ejercicio08.cpp
 * descripción: Realice una función que tome como parámetros un vector de
 * números enteros y devuelva la suma de sus elementos
 * fecha: 03/05/2018
 */

 #include <iostream>
 using namespace std;
 /*Prototipos: */
 int sumatoria(int vec[], int);

 int main()
 {
	 const int TAM = 5;
	 int vec[TAM] = {1,2,3,4,5}, suma = 0;

	 suma = sumatoria(vec,TAM);

	 cout<<"La suma de los números del vector[5] = "<<suma<<endl;

	 return 0;
 }

int sumatoria(int vec[], int tamano)
{
	int suma = 0;
	for(int i=0;i<tamano;i++)
		suma+=vec[i];
		return suma;
}
