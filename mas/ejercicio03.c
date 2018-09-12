/*
 * nombre: ejercicio03.c
 * descripción: Longitud de una circunferencia
 * fecha: 26/03/2018
 */

#include <stdio.h>
#define PI 3.1416

int main()
{
	float radio = 0;

	printf("Introduzca el radio de la circunferencia: ");
	scanf("%f",&radio);

	printf("La longitud del radio %.2f de la circunferencia es %.2f\n",radio,2*PI*radio);

	return 0;
}
