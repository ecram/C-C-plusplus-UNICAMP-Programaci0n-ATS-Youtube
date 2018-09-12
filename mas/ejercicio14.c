/*
 * nombre: ejercicio14.c
 * descripción: Digite un número, si el número supera a 10, multiplique los 10 primeros números, sino, súmelos.
 * fecha: 27/03/2018
 */

#include <stdio.h>

int main()
{
	int num = 0, res = 0;
	long int mul = 1;
	int i = 1;

	printf("Digite un número:  ");
	scanf("%i",&num);

	if(num > 10)
	{
		while(i<=10)
		{
			mul*=i;
			i++;
		}
		printf("La multiplicación de los primeros 10 es %li\n",mul);
	}
	else
	{
		while(i<=10)
		{
			res+=i;
			i++;
		}
		printf("La suma de los primeros 10 es %i\n",res);
	}

	return 0;
}
