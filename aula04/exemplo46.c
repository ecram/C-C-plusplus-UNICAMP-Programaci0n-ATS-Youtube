/*
 * nome: exemplo46.c
 * descrição: Ponteiros para array
 * data: 22/03/2018
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *parray;
	parray = (int*)calloc(10,sizeof(int));
	int *outroarray = (int*)calloc(10,sizeof(int));

	parray[0] = 1;
	parray[9] = 10;

	printf("parray[0] = %d %p = %p\n", parray[0], &parray[0], parray);
	printf("parray[9] = %i %p\n", parray[9], &parray[9]);
	printf("parray[8] = %i %p\n", parray[8], &parray[8]);
	printf("parray[0] = %i %p\n", *(parray), parray);
	printf("parray[9] = %i %p\n", *(parray+9), (parray+9));

	free(parray); parray=NULL;
	free(outroarray); outroarray=NULL;

	return 0;
}
