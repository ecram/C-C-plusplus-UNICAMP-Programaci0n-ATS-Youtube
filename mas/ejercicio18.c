/*
 * nombre: ejercicio17.c
 * descripción: Sumar pares de n hasta m
 * fecha: 27/03/2018
 */

#include <stdio.h>

int main()
{
	int i = 1,suma = 0, num = 0, num_inf = 0;

	printf("Digite el limite inferior: ");	
	scanf("%i",&num_inf);
	printf("Digite el limite superior: ");
	scanf("%i",&num);

	i = num_inf;
	while(i<=num)
	{
		if((i%2)==0)
			suma+=i;
		i++;
	}
	printf("La suma de los pares de %i hasta %i es: %i\n",num_inf,num,suma);

	return 0;
}
