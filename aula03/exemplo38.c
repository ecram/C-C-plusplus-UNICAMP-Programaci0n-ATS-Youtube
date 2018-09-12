/*
 * nome: exemplo38.c
 * descrição: while e do while
 * data: 21/03/2018
 */

#include <stdio.h>

int main()
{
	int cont = 1;

	while (cont++ <= 10)
	{
		if (cont==3) continue;
		if (cont==5) break;
		printf("C1 cont = %d\n", cont);
	}

	do
	{
		if (cont==3) continue;
		if (cont==5) break;
		printf("C2 cont = %d\n", cont);
	} while (cont-- >= 0);

	for (cont=1; cont<=10;cont++)
	{
		if(cont==3) continue;
		if(cont==5) break;
		printf("C3 cont = %d\n", cont);
	}
	return 0;
}
