/*
 * nome: exemplo53.c
 * descrição: Utilização da variável Static, escopo global
 * data: 22/03/2018
 */

#include <stdio.h>

int conta()
{
	static int var = 1;
	return var++;
}

int repetir()
{
	int constante = 1;
	return constante++;
}

int main()
{
	printf("Conta = %i\n", conta());
	printf("Conta = %i\n", conta());
	printf("Conta = %i\n", conta());

	printf("Conta = %i\n", repetir());
	printf("Conta = %i\n", repetir());
	printf("Conta = %i\n", repetir());

	return 0;
}
