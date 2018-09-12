/*
 * nombre: ejercicio04.c
 * descripción: Área del trapecio
 * fecha: 26/03/2018
 */

#include <stdio.h>

int main()
{
	float a = 0, b = 0, h = 0;

	printf("Introduzca los dos lados (a, b) y altura h del trapecio: ");
	scanf("%f %f %f",&a,&b,&h);

	printf("El área de un trapecio de lados ( %.2f,%.2f) y altura %.2f es %.2f\n",a,b,h,h*((a+b)/2));

	return 0;
}
