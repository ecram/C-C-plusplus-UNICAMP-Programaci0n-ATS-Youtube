/*
 * nombre: ejercicio31.c
 * descripción: Realice un programa que permite leer una cadena de caracteres y que 
 * devuelva el número de caracteres que tiene dicha cadena e imprimir dicha cade al reves.
 * fecha: 27/03/2018
 */

#include <stdio.h>
#define TAM 100

int main()
{
	char cadena[TAM];
	int c = 0, i = 0;

	printf("Digite una cadena: ");
	fgets(cadena,sizeof(cadena),stdin);

	for(i=0;cadena[i];i++)
	{
		if(cadena[i]=='\n')
			break;
	}

	printf("La cadena tiene tamaño %i.\n",i);

	return 0;
}
