/*
 * nombre: ejercicio28.c
 * descripción: Pasar un número a binario con Recursividad
 * fecha: 27/03/2018
 */

#include <stdio.h>

void binario(int n)
{
	if (n>1)
		binario(n/2);
	printf("%i",n%2);
}

int main()
{
	int num = 0;

	do
	{
		printf("Digite un número: ");
		scanf("%i",&num);
	}while(num<0);

	binario(num);

	printf("\n");

	return 0;
}
