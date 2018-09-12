/*
 * nome: exemplo49.c
 * descrição: ponteiro para função
 * data: 22/03/2018
 */

#include <stdio.h>

int som(int x, int y)
{
	return x + y;
}

int main()
{
	int (*psom)(int,int)=&som;
	printf("Função psom end = %p resultado = %i\n",psom, psom(1,2));
	printf("Função printf end = %p \n",printf);
	return 0;
}
