/*
 * nombre: ejercicio38.c
 * descripción: Función getchar (leer caracter a caracter) y putchar (transmite caracter a 
 * caracter).
 * fecha: 27/03/2018
 */

#include <stdio.h>

int main()
{
	int c;

	while(EOF != (c=getchar()))
	{
		putchar(c);
	}
	
	printf("\n");

	return 0;
}
