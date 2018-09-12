/*
 * nombre: ejercicio43.c
 * descripción: Pedir 2 palabras al usuario y ordenarlos alfabeticamente
 * fecha: 27/03/2018
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char palabra1[20], palabra2[20];

	printf("Digite la primera palabra: ");
	scanf("%s",palabra1);
	printf("Digite la segunda palabra: ");
	scanf("%s",palabra2);

	if(strcmp(palabra1,palabra2)>0)
		printf("%s, %s",palabra2,palabra1);
	else
		printf("%s, %s",palabra1,palabra2);
	
	printf("\n");

	return 0;
}
