/*
 * nome:"exemplo13.c
 * descrição: Declaração e utilização de strings
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	char nome[] = "Marcelo Invert Palma Salas";
	char profissao[25] = "Engenhairo da Computacao";

	printf("Nome %s ( letra inicial %c )  profissão %s \n ", nome, nome[0], profissao);
}
