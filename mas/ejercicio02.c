/*
 * nombre: ejercicio02.c
 * descripción: Sacar la hipotenusa de un triángulo rectángulo.
 * fecha: 26/03/2018
 */

#include <stdio.h>
#include <math.h>

int main()
{
	float cateto1, cateto2;

	printf("Introduzca los dos catetos del triángulo rectángulo: ");
	scanf("%f %f",&cateto1,&cateto2);

	printf("La hipotenusa de los catetos %.2f y %.2f es %.2f\n",cateto1,cateto2,  sqrt(pow(cateto1,2)+pow(cateto2,2)));

	return 0;
}
