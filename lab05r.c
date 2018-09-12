/*
 * nome: exemplo55.c
 * descrição: Leitura de um arquivo
 * data: 23/03/2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
	FILE *fp;
	fp=fopen("lab05.txt","r");
	int num;
	if (fp == NULL)
	{
		perror("Erro com a função fopen");
	}
	else
	{
		while(fscanf(fp,"%d",&num) != EOF)
		{
			if(errno)
				perror("Erro com a função fscanf");
			else
				fprintf(stdout,"Número %d em %p\n",num,&num);
		}
	}
	fclose(fp);
	return 0;
}
