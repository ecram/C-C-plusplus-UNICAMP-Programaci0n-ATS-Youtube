/*
 * nombre: ejercicio22.c
 * descripción: Serie Fibonacci: 1 1 2 3 5 8 13 21 34...
 * fecha: 27/03/2018
 */

// 1 + 1 = 2
// 1 + 2 = 3
// 2 + 3 = 5

#include <stdio.h>

int main()
{
	int i, num = 0, a = 1, b = 1, fibo = 0;

	printf("Digite un número: ");
	do{
		scanf("%i",&num);
	}while(i<0);

	if(num == 0)
		printf("Fibonatti de 0 es: 0\n");
	else if(num == 1)
		printf("Fibonatti de 1 es: 1\n");
	else
	{
		printf("Fibonatti de %i es: 1 1 ",num);
		for(int j=2;j<=num-1;j++)
		{
			fibo = a + b;
			a = b;
			b = fibo;
			printf("%i ",fibo);
		}
	}

	printf("\n");

	return 0;
}
