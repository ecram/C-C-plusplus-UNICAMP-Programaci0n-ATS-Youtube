#include <stdio.h>
#include "lab04e.h"
void acumulador(int num)
{
	static int x=0;
	x+=num;
	printf("acumulou %d\n",x);
}

