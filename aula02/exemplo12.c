/*
 * nome: exemplo12.c
 * descrição: Declaração e inicialização de vetores e matrizes
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	int idade = 34;
	int dataNascimento[3];
	dataNascimento[0] = 14;
	dataNascimento[1] = 9;
	dataNascimento[2] = 1982;

	printf("Data de nascimento %d/%d/%d, idade = %d\n", dataNascimento[0], dataNascimento[1], dataNascimento[2], idade);
}
