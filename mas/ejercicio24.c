/*
 * nombre: ejercicio.c
 * descripción: 
 * fecha: 27/03/2018
 */

#include <stdio.h>

// 1 - 9 =  uno..nueve
// 10 - 90 = diez ...  noventa
// 100 - 900 = cien o ciento ... novecientos
// 1000 - 9000 = mil dos mil nueve mil + mil
// 10,000 - 90,000 = diez mil - noventa mil
// 100,000 - 900.000 = cien mil - noventa mil

void centenas(int numero)
{
	switch(numero)
	{
		case 1: printf("cien "); break;
		case 2: printf("doscientos "); break;
		case 3: printf("trescientos "); break;
		case 4: printf("cuatrocientos "); break;
		case 5: printf("quinientos "); break;
		case 6: printf("seiscientos "); break;
		case 7: printf("setecientos "); break;
		case 8: printf("ochocientos "); break;
		case 9: printf("novecientos "); break;
	}
}

void decenas(int numero)
{
	switch(numero)
	{
		case 1: printf("diez "); break;
		case 2: printf("veinte "); break;
		case 3: printf("treinta "); break;
		case 4: printf("cuarenta "); break;
		case 5: printf("cincuenta "); break;
		case 6: printf("sesenta "); break;
		case 7: printf("setenta "); break;
		case 8: printf("ochenta "); break;
		case 9: printf("noventa "); break;
	}
}

void unidades(int numero)
{
	switch(numero)
	{
		case 1: printf("un "); break;
		case 2: printf("dos "); break;
		case 3: printf("tres "); break;
		case 4: printf("cuatro "); break;
		case 5: printf("cinco "); break;
		case 6: printf("seis "); break;
		case 7: printf("siete "); break;
		case 8: printf("ocho "); break;
		case 9: printf("nueve "); break;
	}
}

int main()
{
	int num,millon,milesimo,centena,decena,unidad,dmil,cmil;

	num,millon,milesimo,centena,decena,unidad,dmil,cmil = 0;

	printf("Digite un numero entre el 0 y el 999,999: ");
	scanf("%i",&num);

	if(num == 0)
		printf("cero");
	else
	{
		unidad = num%10; num/=10;
		decena = num%10; num/=10;
		centena = num%10; num/=10;
		milesimo = num%10;num/=10;
		dmil = num%10; num/=10;
		cmil = num%10; num/=10;
		millon = num%10;
	
		if(millon>0)
		{
			unidades(millon);
			printf("millón ");
		}
	
		if(milesimo>0 || dmil>0 || cmil>0)
		{
			centenas(cmil);
			decenas(dmil);
			unidades(milesimo);
			printf("mil ");
		}
	
		centenas(centena);
		decenas(decena);
		unidades(unidad);
	}

	printf("\n");

	return 0;
}
