/*
 * name: lab04s.c
 * descrição: Laboratório 04s.c
 * data: 22/03/2018
 */

#include <stdio.h>

int acumulador()
{
	static int num = 1;
	return num++;
}

int main()
{
	printf("Acumulador = %i\n",acumulador());
	printf("Acumulador = %i\n",acumulador());
	printf("Acumulador = %i\n",acumulador());
	printf("Acumulador = %i\n",acumulador());
	printf("Acumulador = %i\n",acumulador());
	return 0;
}
