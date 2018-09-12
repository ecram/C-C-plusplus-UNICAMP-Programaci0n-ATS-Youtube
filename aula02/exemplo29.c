/*
 * nome: exemplo29.c
 * descrição: Operador membro
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	struct data
	{
		int dia,mes,ano;
	} hoje = {.dia=20,.mes=3,.ano=2018};

	printf("Data de hoje %d/%d/%d\n",hoje.dia, hoje.mes, hoje.ano);
}
