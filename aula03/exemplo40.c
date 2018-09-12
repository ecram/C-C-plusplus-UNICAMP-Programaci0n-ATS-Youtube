/*
 * nome: exemplo40
 * descrição: funções
 * data: 21/03/2018
 */

#include <stdio.h>

int inc(int x)
{
	x++;
	return x;
}

int dec(int x)
{
	x--;
	return x;
}

int main()
{
	int var = 0;
	printf("inc(var) = %i\n", inc(var));
	printf("dec(var) = %i\n", dec(var));

	var = inc(var);
	
	printf("inc(var) = %i\n", inc(var));
	printf("dec(var) = %i\n", dec(var));

	return 0;
}
