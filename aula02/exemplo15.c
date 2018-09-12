/*
 * nome: exemplo15.c
 * descrição: Declaração de struct
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	struct data
	{
		int dia, mes, ano;
	} hoje;

	struct data amanha;

	hoje.dia = 20;
	hoje.mes = 3;
	hoje.ano = 2018;

	// amanha = hoje + 1; //erro de compilação
	
	printf("Data de hoje %d/%d/%d\n", hoje.dia, hoje.mes, hoje.ano);
}
