/*
 * nombre: ejercicio16.c
 * descripción: Multiplos de 5 desde 1 hasta n
 * fecha: 27/03/2018
 */

#include <stdio.h>

int main()
{
	int num = 0, i = 1;

	printf("Digite el total de números a comprobar: ");
	scanf("%i",&num);

	while(i<=num)
	{
		if((i%5)==0)
			printf("%i es multiplo de 5\n",i);
		i++;
	}

	return 0;
}
