/*
 * nome: exemplo50.c
 * descrição: Ponteiros como parâmetros de função
 * data: 22/03/2018
 */

#include <stdio.h>
#include "exemplo50.h"

int main()
{
	int x = 1, y = 3;
	printf("x %d  e y = %d\n", x, y);
	inc(&x);
	dec(&y);
	printf("x %d  e y = %d\n", x, y);
	return 0;
}
