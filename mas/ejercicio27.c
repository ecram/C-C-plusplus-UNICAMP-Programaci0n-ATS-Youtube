/*
 * nombre: ejercicio27.c
 * descripción: Función recursiva de imprimir los n primeros dígitos a partir del 1.
 * fecha: 27/03/2018
 */

#include <stdio.h>

void imprimir_desc(int n)
{
	if(n<=1)
		printf("%i",n);
	else
	{
		printf("%i ",n);
		return(imprimir_desc(n-1));
	}
}

void imprimir_asc(int i, int n)
{
	printf("%i ",i);
	if(i<n)
		return imprimir_asc(i+1,n);
}

int main()
{
	int num = 0, inicio = 1;

	printf("Digite un numero: ");
	scanf("%i",&num);

	imprimir_asc(inicio,num);

	printf("   ");

	imprimir_desc(num);

	printf("\n");

	return 0;
}
