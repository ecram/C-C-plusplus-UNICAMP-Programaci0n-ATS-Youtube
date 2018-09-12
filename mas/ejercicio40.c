/*
 * nombre: ejercicio40.c
 * descripción: Leer un string con getchar() y contabilizar cuantas vocales tiene
 * fecha: 27/03/2018
 */

#include <stdio.h>

int main()
{
	int c, vocales = 0;

	printf("Introduzca una frase o palabra terminando con '#': ");

	while('#' != (c=getchar()))
	{
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
			vocales++;
	}

	printf("Número de vocales en la frase: %i",vocales);
	
	printf("\n");

	return 0;
}
