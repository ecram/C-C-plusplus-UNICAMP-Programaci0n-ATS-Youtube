#include<stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{

FILE *fp, *fread;
int num;

fp=fopen("lab05wgab.txt","r");


	if( fp == NULL )

	{
	
		perror("Erro com a funcao fopen \n Criando um arquivo\n");
		fp=fopen("lab05wgab.txt","w");

		for( int c=1 ; c<=20 ; c++ )
		{

			fprintf(fp,"%d ", c);
		
			

			//if( errno ) perror("Erro com a funcao fptintf");
		}

		fclose(fp)	;

		//fread = fopen("lab05wgab.txt","r");

		while ( fscanf(fp,"%d", &num) != EOF )
		{
			//fprintf(stdout, "Numero %d\n",num);
			
		}

	}

//fclose(fread) ; 

return 0; 
}






