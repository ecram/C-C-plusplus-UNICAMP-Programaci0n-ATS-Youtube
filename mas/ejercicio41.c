/*
 * nombre: ejercicio41.c
 * descripción: Leer un string con getchar() y contabilizar cuantas vocales tiene
 * fecha: 27/03/2018
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char cad1[] = "Hola mundo";
	char cad2[34];

	strcpy(cad2,cad1);

	strcpy(cad2+5,"y bienvenidos al lenguaje C");

	printf("%s",cad2);
	
	printf("\n");

	return 0;
}
