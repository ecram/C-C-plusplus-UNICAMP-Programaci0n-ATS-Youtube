/*
 * nome: exemplo48.c
 * descrição: Declaração de struct
 * data: 22/03/2018
 */

#include <stdio.h>

int main()
{
	struct data
	{
		int dia, mes, ano;
	} dia = {.dia = 14, .mes = 9, .ano = 1982};

	struct data *pdia = &dia;

	printf("Data de hoje %i/%i/%i\n", pdia->dia, (*pdia).mes, dia.ano);
	
	return 0;
}
