/*
 * nombre: ejercicio17.c
 * descripción: Sumar 1-2+3-4...n
 * fecha: 27/03/2018
 */

#include <stdio.h>

int main()
{
	int i = 1,suma = 0, num = 0;

	printf("Digite el total de elementos a sumar: ");
	scanf("%i",&num);

	while(i<=num)
	{
		if((i%2)!=0)
			suma+=i;
		else
			suma-=i;
		i++;
	}
	printf("La suma de los %i numeros es: %i\n",num,suma);

	return 0;
}
