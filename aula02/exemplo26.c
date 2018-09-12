/*
 * nome:"exemplo26.c
 * descrição: Operadores lógicos
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	int x, y, z;

	x = 1 && 0;

	y = x || 20;

	z = !x;

	printf("x = %i, y = %i e z = %i\n", z,y,z);
}
