/*
 * nome: exemplo36.c
 * descrição: do
 * data: 21/03/2018
 */

#include <stdio.h>

void main()
{
	int cont = 1;
	
	do
	{
		printf("C1 cont = %d\n", cont);
		cont++;
	}
	while (cont <= 10);

	do
		printf("C2 cont = %d\n", cont);
	while (--cont);
}
