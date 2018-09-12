/*
 * nome: lab021.c
 * descrição: Exercicio 2.1
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	int x = 1, y = 3;
	float z = 5, w = 7;
	x = (w+y)/2; // x = (7+3)/2 = 5
	y = (x+z)/2; // y = (5+5)/2 = 5
	printf("x = %i, y = %i e z = %f\n", x, y, z);
}
