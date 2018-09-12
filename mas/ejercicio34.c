/*
 * nombre: ejercicio34.c
 * descripción: 
 * fecha: 27/03/2018
 */

#include <stdio.h>

struct persona{
	char nombre[20];
	int edad;
} personas[5];

int main()
{
	for(int i=0;i<5;i++)
	{
		printf("%i. Digite su nombre: ",i+1);
		scanf("%s",personas[i].nombre);
		printf("%i. Digite su edad: ",i+1);
		scanf("%i",&personas[i].edad);
		printf("\n");
	}

	for(int i=0;i<5;i++)
	{
		printf("\n%i. Su nombre es: %s",i+1,personas[i].nombre);
		printf("\n%i. Su edad es: %i",i+1,personas[i].edad);
	}

	printf("\n");

	return 0;
}
