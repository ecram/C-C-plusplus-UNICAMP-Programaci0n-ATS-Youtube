/*
 * nombre: ejercicio.c
 * descripción: 
 * fecha: 27/03/2018
 */

#include <stdio.h>
#include <string.h>

struct corredor{
	char nombre[20];
	int edad;
	char sexo[20];
	char club[20];
	char categoria[20];
}corredor1;

int main()
{
	printf("Digite su nombre: ");
	scanf("%s",corredor1.nombre);
	printf("Digite su edad: ");
	scanf("%i",&corredor1.edad);
	printf("Digite su sexo: ");
	scanf("%s",corredor1.sexo);
	printf("Digite su club: ");
	scanf("%s",corredor1.club);

	if(corredor1.edad <= 18)
		strcpy(corredor1.categoria,"Juvenil");
	else if(corredor1.edad <= 40)
		strcpy(corredor1.categoria,"Senior");
	else
		strcpy(corredor1.categoria,"Veterano");

	printf("\n-Datos del corredor-\n");
	printf("\nCategoria: %s",corredor1.categoria);
	printf("\nNombre: %s",corredor1.nombre);
	printf("\nEdad: %i",corredor1.edad);
	printf("\nSexo: %s",corredor1.sexo);
	printf("\nClub: %s",corredor1.club);
	printf("\n");

	return 0;
}
