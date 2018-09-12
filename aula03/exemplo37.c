/*
 * nome: exemplo37.c
 * descrição: for
 * data: 21/03/2018
 */

#include <stdio.h>

int main()
{
	int cont;

	for(cont=1;cont<=10;cont++)
		printf("C1 cont = %d\n", cont);

	for(;cont>=0;cont--)
		printf("C2 cont = %d\n", cont);

	for(;cont<=10;)
		printf("C3 cont = %d\n", cont++);

	for (int outro=1;outro<=10;outro++)
		printf("C4 outro = %d\n", outro++);

	for (int outro=10,cont=1; outro>=10 && cont<=10; outro--,cont++)
		printf("C5 cont = %d e outro = %d\n", cont, outro);
	
	printf("e cont = %d\n", cont);

	return 0;
}
