/*
 * nombre: ejercicio20.c
 * descripción: Determinar si un número es primo o no
 * fecha: 27/03/2018
 */

#include <stdio.h>

int main()
{
	int num = 0, c = 0;

	printf("Digite un número: ");
	scanf("%i",&num);

	for(int i=1;i<=num;i++)
	{
		if((num%i)==0) c++;
	}

	if(c<=2)
		printf("El número %i es primo",num);
	else
		printf("El número %i no es primo",num);

	printf("\n");

	return 0;
}
