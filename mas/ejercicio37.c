/*
 * nombre: ejercicio37.c
 * descripción: Lectura de cadenas con scanf
 * fecha: 27/03/2018
 */

#include <stdio.h>

int main()
{
	char palabra[20];

	do{
		scanf("%s",palabra);

		if(!feof(stdin))
			printf("%s ",palabra);
	}while(!feof(stdin));

	printf("\n");

	return 0;
}
