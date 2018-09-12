/*
 * nombre: ejercicio.c
 * descripción: 
 * fecha: 26/03/2018
 */

#include <stdio.h>

int main()
{
	int aux = 0, num = 0, millares = 0, centenas = 0, decenas = 0,unidades = 0, i = 0;

	do{
		printf("\nDigite un número entre 1 y 9999: ");
		scanf("%i",&num);
	}while (num < 1 && num > 9999);
	

	unidades = num % 10; num/=10;
	decenas = num % 10; num/=10;
	centenas = num % 10; num/=10;
	millares = num % 10;

	printf("millares = %i\ncentenas = %i\ndecenas = %i\nunidades = %i\n",millares,centenas,decenas,unidades);

	switch(millares)
	{
		case 1: printf("M"); break;
		case 2: printf("MM"); break;
		case 3: printf("MMM"); break;
		case 4: printf("MV-"); break;
		case 5: printf("V-"); break;
		case 6: printf("V-M"); break;
		case 7: printf("V-MM"); break;
		case 8: printf("V-MMM");break;
		case 9: printf("X-"); break;
	}

	switch(centenas)
	{
		case 1: printf("C"); break;
		case 2: printf("CC"); break;
		case 3: printf("CCC"); break;
		case 4: printf("CD"); break;
		case 5: printf("D"); break;
		case 6: printf("DC"); break;
		case 7: printf("DCC"); break;
		case 8: printf("DCCC");break;
		case 9: printf("CM"); break;
	}

	switch(decenas)
	{
		case 1: printf("X"); break;
		case 2: printf("XX"); break;
		case 3: printf("XXX"); break;
		case 4: printf("XL"); break;
		case 5: printf("L"); break;
		case 6: printf("LX"); break;
		case 7: printf("LXX"); break;
		case 8: printf("LXXX");break;
		case 9: printf("XC"); break;
	}

	switch(unidades)
	{
		case 1: printf("I"); break;
		case 2: printf("II"); break;
		case 3: printf("III"); break;
		case 4: printf("IV"); break;
		case 5: printf("V"); break;
		case 6: printf("VI"); break;
		case 7: printf("VII"); break;
		case 8: printf("VIII");break;
		case 9: printf("IX"); break;
	}

	printf("\n");
	return 0;
}
