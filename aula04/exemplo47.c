/* 
 * nome: eemplo47.c
 * descrição: Ponteiros para strings
 * data: 22/03/2018
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *nome = (char*)malloc(sizeof(char)*20);
	nome[0]='M';
	nome[1]='a';
	nome[2]='r';
	nome[3]='c';
	nome[4]='e';
	nome[5]='l';
	nome[6]='o';
	nome[7]='\0';
	printf("Nome %s (letra inicial %c) (%%p %p)\n", nome, *nome, nome);
	free(nome); nome = NULL;
	return 0;
}
