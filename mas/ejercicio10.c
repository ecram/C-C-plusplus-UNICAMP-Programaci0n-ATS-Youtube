/*
 * nombre: ejercicio10.c
 * descripción: Borrar pantalla
 * fecha: 26/03/2018
 */

#include <stdio.h>
#include <stdlib.h>

void clean_stdin(void)
{
	int c;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}

int main()
{
	char tecla;

	printf("Programa de Borrado de Pantalla!!!!\n ");
	printf("-------------------------------------\n");
	printf("-------------------------------------\n\n");
	printf("Digite el número 1: ");
	scanf("%c",&tecla);

	if(tecla == '1')
	{
		system("clear");
		printf("Ha funcionado, el limpiado de pantalla\n");
	}
	else
	{
		clean_stdin();
		printf("No ha funcionado el limpiado de pantalla\n");
		printf("Por favor, digite el 1: ");
		scanf("%c",&tecla);
		if(tecla == '1')
			system("clear");
		else
			printf("No funciono...");
	}

	return 0;
}
