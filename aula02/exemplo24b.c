/*
 * nome: exemplo24b.c
 * descrição: Operadores ++ e --
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	int x = 1, y = 3, z = 5;
	printf("x = %i, y = %i e z = %i\n", x, y, z);
	y = x++;
	printf("x = %i, y = %i e z = %i\n", x, y, z);
	z = ++x;
	printf("x = %i, y = %i e z = %i\n", x, y, z);
}
