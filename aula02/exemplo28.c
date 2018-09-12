/*
 * nome: exemplo28.c
 * descrição: Operadores de atribuição
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	int x = 0, y = 0, z = 10;

	x = 1;
	y += x + 1;
	z %= y;

	printf("x = %i, y = %i e z = %i\n", x, y, z);
}
