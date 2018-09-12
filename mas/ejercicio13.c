/*
 * nombre: ejercicio13.c
 * descripción: Suma de los n primeros números
 * fecha: 27/03/2018
 */

#include <stdio.h>

int main()
{
	int numero, aux, suma, i, n_suma;

	numero = aux = suma = n_suma = 0;

	printf("Digite cuantos números desea sumar:  ");
	scanf("%i",&numero);

	i = 1;
	while(i <= numero)
	{
		printf("Digite el %i# número: ",i);
		scanf("%i",&aux);
		suma+=aux;
		n_suma+=i;
		i++;
	}

	printf("La suma de los %i números es %i\n",numero,suma);
	printf("La suma de los %i primeros números es %i\n",numero,n_suma);

	return 0;
}
