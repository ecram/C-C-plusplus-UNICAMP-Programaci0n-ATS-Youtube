/*
 * nome: exemplo41
 * descrição: Definição de funções
 * data: 21/03/2018
 */

#include <stdio.h>

void inc(int x)
{
	x++;
}

void dec(int x)
{
	x--;
}

int sum(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x -y;
}

int main()
{
	int x = 10, y = 5;
	printf("A suma x + y = %d\n", sum(x,y));
	return 0;
}











