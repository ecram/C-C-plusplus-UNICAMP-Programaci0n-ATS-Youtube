/*
 * nome: exemplo27.c
 * descrição: Operadores bit binários
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	int x = 1, y = 1, z = 1;

	x = 1 << 1;
	y = 10 & 3;
	z = 10 | 3;

	printf("x = %i, y = %i e z = %i\n", x, y, z);
	printf("~x = %i\n", ~x);
}
