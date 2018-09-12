/*
 * nome: exemplo30.c
 * descrição: Operadores relacionais binários
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	int x = 1, y = 3, z = 5;

	x = x>y ? x : y;
	z = !z ? 10 : z+10;

	printf("x = %i, y = %i e z = %i \n", x , y, z);
}
