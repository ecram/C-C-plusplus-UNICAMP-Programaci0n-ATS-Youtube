/*
 * nome: exemplo54.c
 * descrição: Administração de erros com arquivos
 * data: 23/03/2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
	FILE *fp;
	fp = fopen("exemplo54.txt","w");;
	if (fp == NULL)
	{
		perror("Erro com a função fopen.");
	}
	else
	{
		for (int c=1;c<=10;c++)
		{
			fprintf(fp,"%d ",c);
			if(errno) perror("Erro com a função fprintf");
		}
		fprintf(fp,"\n");
	}
	fclose(fp);
	return 0;
}
