/*
 * nombre: ejercicio12.c
 * descripción: Condicionales con el operador '?'
 * fecha: 27/03/2018
 */

#include <stdio.h>

int main()
{
	int numero = 0;

	printf("Digite un número: ");
	scanf("%d",&numero);

	(numero%2==0) ? printf("El número %i es par\n", numero) : printf("El número %i es impar\n",numero);

	return 0;
}
