/*
 * nombre: ejercicio36.c
 * descripción: Reservar memoria com malloc para un array de tipo double para n numeros,
 * comprobar si el puntero es válido (si el puntero devuelve NULL, significa que no hay 
 * suficiente memoria).
 * fecha: 27/03/2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	long int num = 0;
	double *p_array = NULL;
	
	printf("Digite un número mayor a 1000: ");
	scanf("%li",&num);

	p_array = malloc(sizeof(double)*num);

	if(p_array == NULL)
	{
		printf("Error en la Asignación de Memoria\n");
		return -1; //Intentar recuperar memoria
	}
	else
	{
		srand(time(NULL));
		for(int i=0;i<num;i++)
		{
			p_array[i]=1+rand()%((num+1)-1);
			printf("%lf\n",p_array[i]);
		}
	}

	printf("\n");
	free(p_array);

	return 0;
}
