/*
 * nome: exemplo34.c
 * descrição: Uso de funções em C
 * data: 21/03/2018
 * Executa usando estes comandos:
 * 1) gcc -c exemplo42.c
 * 2) gcc -c exemplo43.c
 * 3) gcc -o exemplo42e43 exemplo42.o exemplo43.o
 */

#include <stdio.h>
#include "exemplo41.h"

int main()
{
	int x = 1, y = 3;

	inc(x);
	dec(y);
	printf("x = %d, y = %d\n",x,y);

	x = sum(x,y);
	printf("x = %d, y = %d\n",x,y);
	return 0;
}
