/*
 * nome: exemplo16.c
 * descrição: Declaração, inicialização e utilização de struct
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	struct data
	{
		int dia, mes, ano;
	} hoje = { .dia = 20, .mes = 3, .ano = 2018};

	struct data amanha;

	amanha.dia = hoje.dia + 1;
	amanha.mes = hoje.mes;
	amanha.ano = hoje.ano;

	printf("Data de hoje %d/%d/%d\n", hoje.dia, hoje.mes, hoje.ano);
	printf("Data de amanhã %d/%d/%d\n", amanha.dia, amanha.mes, amanha.ano);
}
