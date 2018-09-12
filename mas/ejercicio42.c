/*
 * nombre: ejercicio42.c
 * descripción: Pedir al usuario que digite una cadena, luego copiar su contenido hacia
 * otro array de caracteres, y por último modificar su mensaje poniendo a partir de la 
 * posicion 10 "Buena broma"
 * fecha: 27/03/2018
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char cad1[30];
	char cad2[50];

	printf("Digite una cadena: ");
	scanf("%s",cad1);

	strcpy(cad2,cad1);

	strcpy(cad2+10,"Buena broma");

	printf("%s",cad2);
	
	printf("\n");

	return 0;
}
