/*
 * nome: exemplo39.c
 * descrição: goto
 * data: 21/03/2018
 */

#include <stdio.h>

int main()
{
	int cont=0;

	inicio:

	printf("cont1 = %d\n", ++cont);
	
	if(cont<=10) goto inicio;
	else goto fim;

	printf("Texto final\n");

	fim:

	return 0;
}
