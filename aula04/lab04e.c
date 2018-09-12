/*
 * nome: lab04e.c
 * descrição: Corpo da função acumulador (int num){}
 * data: 22/03/2018
 */

#include <stdio.h>
#include "lab04e.h"

void acumulador(int num)
{
	static int x = 0;
	x+=num;
	printf("acumulou %i\n",x);
}

