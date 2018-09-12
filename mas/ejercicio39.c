/*
 * nombre: ejercicio39.c
 * descripción: Función getchar (leer caracter a caracter) y putchar (transmite caracter a 
 * caracter).
 * fecha: 27/03/2018
 */

#include <stdio.h>

int main()
{
	int c, contador = 0;

	printf("Introduzca una frase o palabra terminando con '#': ");

	while('#' != (c=getchar()))
		contador++;

	printf("Número de caracteres: %i",contador);
	
	printf("\n");

	return 0;
}
