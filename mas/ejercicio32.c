/*
 * nombre: ejercicio32.c
 * descripción: Crear una matriz de tipo entera preguntandole al usuario el numero de files y el numero de columnas, rellenar la matriz y luego imprimirla.
 * fecha: 27/03/2018
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int fil, col, inicio;
	fil=col=0;
	int **m = NULL;

	printf("Digite el número de filas: ");
	scanf("%i",&fil);

	printf("Digite el número de columnas: ");
	scanf("%i",&col);

	m = (int **)malloc(sizeof(int*)*fil);
	for(int i=0;i<fil;i++)
		m[i]=(int *)malloc(sizeof(int)*col);

	for(int i=0;i<fil;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("m[%i][%i] = ",i,j);
			scanf("%i",&m[i][j]);
		}
	}

	printf("\n");

	for(int i=0;i<fil;i++)
	{
		for(int j=0;j<col;j++)
		{
			//printf(" %i\t",m[i][j]);
			printf(" %i\t",*(*(m+i)+j));
		}
		printf("\n");
	}
	
	printf("\n");

	free(m);

	return 0;
}
