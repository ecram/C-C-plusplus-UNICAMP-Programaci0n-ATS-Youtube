/*
 * nome: exemplo32.c
 * descrição: Escopo em C
 * data: 21/03/2018
 */
int var_a = 10;

#include<stdio.h>

void main()
{
	int x = 1;
	{
		char x = 'a'; // esse x sobrepõe a declaração anterior
		{
			int x = 20;
			int var_b = 20;
			printf("Dentro do bloco interno %d\n", x);
			printf("var_a = %d, var_b = %d\n", var_a, var_b);
		}
		printf("Dentro do bloco %c\n",x);
	}
	// int x = 100; // no mesmo escopo
	printf("var_a = %d\n", var_a);
	// printf("var_b = %b\n", var_b);
	printf("Fora do escopo %d\n", x);
}
