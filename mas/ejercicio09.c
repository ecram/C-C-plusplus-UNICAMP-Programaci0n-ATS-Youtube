/*
 * nombre: ejercicio09.c
 * descripción: 
 * fecha: 26/03/2018
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char nombre[30], sexo[3];
	short edad = 0;

	printf("Nombre: ");
	fgets(nombre,sizeof(nombre),stdin);

	printf("Sexo (M,F): ");
	fgets(sexo,sizeof(sexo),stdin);

	printf("Edad: ");
	scanf("%hi",&edad);

	if(strcmp(sexo,"M\n") == 0 && edad >= 18)
		printf("El nombre de la persona es %s\n",nombre);
	else
		printf("No es mayor de edad\n");

	return 0;
}
