/*
 * nombre: ejercicio30.c
 * descripción: Crea un programa que tenga un array de 100 números aleatorios entre 1 y 
 * 1000. Una vez creado organizarlo de tal manera que almacene los numero pares en 
 * un array y los impares en otro.
 * fecha: 27/03/2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	short aleatorio[100],pares[100],impares[100],aux=0,j=0,k=0;

	srand(time(NULL));

	for(int i = 0;i<100;i++)
	{
		aleatorio[i] = rand()%(1000+1-1)+1;
		printf("aleatorio[%hi]=%hi ",i,aleatorio[i]);
		if((aleatorio[i]%2)==0)
		{
			pares[j]=aleatorio[i];
			j++;
		}
		else
		{
			impares[k]=aleatorio[i];
			k++;
		}
	}
	printf("\n");

	for(int i=0;i<j;i++)
		printf("pares[%i] = %i ",i,pares[i]);
	printf("\n");

	for(int i=0;i<k;i++)
		printf("impares[%i] = %i ",i,impares[i]);
	printf("\n");

	return 0;
}
