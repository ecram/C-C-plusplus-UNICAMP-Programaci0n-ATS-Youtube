/*
 * nome: exemplo55.c
 * descrição: Leitura de um arquivo
 * data: 23/03/2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>

int main()
{
	//float cua = 0.0, raiz = 0.0;
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
			{
				//cua =  sqrt(num);
				//raiz = pow(num,2);
				fprintf(stdout,"Número %d em %p\n",num,&num);
				fprintf(stdout,"Raiz cuadrado = %f em %p\n",sqrt(num),&num);
				fprintf(stdout,"Cuadrada de %i^2 = %f em %p\n\n",num,pow(num,2),&num);
			}
		}
	}
	fclose(fp);
	return 0;
}
