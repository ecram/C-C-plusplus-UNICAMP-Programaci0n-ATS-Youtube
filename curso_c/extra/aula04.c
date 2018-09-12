#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vet[10]={1,2,3,4,5,6,7,8,9,10};
	int *pvet;
	pvet=vet;
	printf("%i\n",*pvet);
	pvet=pvet+1;
	printf("%i\n",*pvet);
	pvet=pvet+5;
	printf("%i\n",*pvet);
	return 0;
}
