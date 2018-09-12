/*
 * nombre: ejercicio21.c
 * descripción: Hacer un programa que calcule la suma de factoriales
 * fecha: 27/03/2018
 */

#include <stdio.h>

int factorial(int num)
{
	int f = 1;
	for(int i=1;i<=num;i++)
		f*=i;
	return f;
}

int main()
{
	int facto = 0, num = 0;
	long int suma = 0;

	printf("Digite un numero mayor a 0: ");
	do{
		scanf("%i",&num);
	}while(num<=0);

	for(int i=1;i<=num;i++)
	{
		printf("Ingrese el %i digito: ", i);
		scanf("%i",&facto);
		suma+=factorial(facto);
	}
	printf("La suma de los %i numeros factoriales es %li\n",num,suma);

	return 0;
}
