/*
 * nome: puntero21.c
 * descripción: uso de punteros en arrays
 * data: 20/03/2018
 */

#include <stdio.h>

int mi_arreglo[] = {1,23,17,4,-5,100};
int *ptr, *ptr2, *ptr3;

int main()
{
	int i;
	//ptr = &mi_arreglo[0]; // apuntamos nuestro puntero al primer elemento del arreglo
	ptr = mi_arreglo; // También funciona
	ptr2 = ptr;
	ptr3 = ptr;
	printf("\n\n");
	for(i=0;i<6;i++)
	{
		printf("mi_arreglo[%d] = %d\n",i,mi_arreglo[i]);
		printf("V1: ptr + %d = %d\n",i,*(ptr+i));
		printf("V2: ptr + %d = %d\n",i,*ptr2++);
		printf("V3: ptr + %d = %d\n",i,*(++ptr3));
	}
	return 0;
}
