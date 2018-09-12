/* 
 * nombre: Ejercicio01.c
 * descripción: Convertir Grados Celsius a Grados Fahrenheit
 * fecha: 26/03/2018
 */

#include <stdio.h>

int main()
{
	int celcius = 0;

	printf("Introduzca la temperatura en grados celcius: ");
	scanf("%i",&celcius);
	
	printf("\n%i grados celcius equivalen a %.f grados fahrenheit\n",celcius,celcius*1.8+32);

	return 0;
}
