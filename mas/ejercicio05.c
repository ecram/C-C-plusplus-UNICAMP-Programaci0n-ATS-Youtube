/*
 * nombre: ejercicio05.c
 * descripción: Calcule la media aritmética de 3 números cualesquiera
 * fecha: 26/03/2018
 */

#include <stdio.h>

int main()
{
	float a = 0, b = 0, c = 0;

	printf("Introduzca 3 números cualesquiera: ");
	scanf("%f %f %f",&a,&b,&c);

	printf("La media aritmética de %.1f, %.1f y %.1f es %.1f\n",a,b,c,(a+b+c)/3);

	return 0;
}
