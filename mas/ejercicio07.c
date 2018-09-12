/*
 * nombre: ejercicio07.c
 * descripción: Raiz imaginaria
 * fecha: 26/03/2018
 */

#include <stdio.h>
#include <math.h>

int main()
{
	float raiz = 0, num = 0;

	printf("Introduzca un numero cualquiera positivo 'n' o negativo '-n': ");
	scanf("%f",&num);

	if (num >= 0)
	{
		raiz = sqrt(num);
		printf("La raiz cuadrada de %.2f es %.2f\n",num,raiz);
	}
		
	else
	{
		raiz = sqrt(-1*num);
		printf("La raiz cuadrada de %.2f es %.2fi (raiz imaginaria)\n",num,raiz);
	}

	return 0;
}
