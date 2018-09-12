/*
 * nombre: ejercicio19.c
 * descripción: Hacer un árbol com '*' del tipo *** ** *, digite el número de filas n
 * fecha: 27/03/2018
 */

#include <stdio.h>

int main()
{
	short num = 0;

	printf("Digite el número de filas del árbol: ");
	scanf("%hi",&num);

	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=num-i;j++)
			printf(" ");
		for(int k=1;k<=i;k++)
			printf("* ");
		printf("\n");
	}

	return 0;
}
