/*
 * nombre: ejercicio08.c
 * descripción: Comparar cadenas de caracteres
 * fecha: 26/03/2018
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char nombre[30], signo[20];

	printf("Digite su nombre: ");
	fgets(nombre,sizeof(nombre),stdin);

	printf("Digite su signo: ");
	fgets(signo,sizeof(signo),stdin);

	if(strcmp(signo,"virgo\n") == 0)
		printf("Es signo virgo, su nombre es %s",nombre);
	else
		printf("No es signo virgo, su signo es %s\n",signo);

	return 0;
}
