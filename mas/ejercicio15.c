/*
 * nombre: ejercicio15.c
 * descripción: Multiplos de x de 1 hasta n
 * fecha: 27/03/2018
 */

#include <stdio.h>

int main()
{
	int multiplo = 0, num = 0, c = 0;

	printf("Digite un número de la tabla de multiplicar: ");
	scanf("%i",&multiplo);
	
	printf("La tabla de multiplicar llega de 1 hasta... ");
	scanf("%i",&num);

	while(c<=num)
	{
		printf(" %i x %i = %i\n",multiplo,c,multiplo*c);
		c++;
	}

	printf("\n");

	return 0;
}
