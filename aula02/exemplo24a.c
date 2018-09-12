/*
 * nome: exemplo24.c
 * descrição: Operadores aritméticos binários
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	int x = 1, y = 3, z = 5;

	x = y + z; // x = 8
	z = x % y; // z = 2
	y = z / x; // int / int = int y = 0
	x =-x; // x = 7

	printf("x = %i, y = %i e z = %i\n", x, y, z);
	printf("x = %d, y = %d e z = %d\n", x, y, z);
}
