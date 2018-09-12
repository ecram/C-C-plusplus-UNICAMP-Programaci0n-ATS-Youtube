/*
 * nome: exemplo33.c
 * descrição: if
 * data: 21/03/2018
 */

#include <stdio.h>

void main()
{
	int x = 1, y = 3;

	if (x > y)
	{
		printf("x é maior que y\n");
	}
	else if (x < y)
	{
		printf("x é menor que y\n");
	}
	else
	{
		printf("x não é igual a y\n");
	}
	if (x == y)
		printf("Porque essa linha é impressa?\n");
}
