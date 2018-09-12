/*
 * nombre: ejercicio23.c
 * descripción: Hacer un bucle do...while para imprimir las letras minúsculas del alfabeto
 * fecha: 27/03/2018
 */

#include <stdio.h>

int main()
{
	char letra = 'a';

	do
	{
		if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
			printf("%c.\n",letra);
		letra++;
	}while(letra<='z');

	printf("\n");

	return 0;
}
