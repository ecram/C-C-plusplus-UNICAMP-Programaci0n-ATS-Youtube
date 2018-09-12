/*
 * nome: exemplo25.c
 * descrição: Operadores relacionais binários
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	int x = 1, y = 3, z = 5;
	printf("x = %i, y = %i e z = %i\n", x,y,z);
	printf("x>y %i, x<z %i e y<=z %i\n", x>y,x<z,y<=z);
	printf("x==y %d e x!=z %d\n", x==y, x!=z );
	printf("%d\n", z > y > x);
}
