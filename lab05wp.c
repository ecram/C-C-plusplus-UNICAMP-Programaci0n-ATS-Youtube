/*
 * nome: exemplo54.c
 * descrição: Administração de erros com arquivos
 * data: 23/03/2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	fp = fopen("lab05.txt","a");
	if (fp == NULL)
	{
		perror("Erro com a função fopen.");
	}
	else
	{
		fprintf(fp,"\n");
		for (int cont=1; cont<argc; cont++)
		{
			printf("argv[%d] = \"%s\"\n",cont,argv[cont]);
			fprintf(fp,"%s ", argv[cont]);
			if(errno) perror("Erro com a função fprintf");
		}
		fprintf(fp,"\n");
	}
	fclose(fp);
	return 0;
}
