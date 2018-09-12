/*
 * nome: exemplo52.c
 * descrição: Trabalhando com a variável externa
 * data: 22/03/2018
 */

#include <stdio.h>

extern int variavel;
int main()
{
	printf("variavel externa = %i\n", variavel);
	return 0;
}
