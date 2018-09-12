/*
 * nombre: ejercicio26.c
 * descripción: Serie Fibonacci con Recursividad: 1 1 2 3 5 8 13 21 34...
 * fecha: 27/03/2018
 */

// 1 + 1 = 2
// 1 + 2 = 3
// 2 + 3 = 5

#include <stdio.h>

int fibonacci(int n)
{
	if(n==0 || n==1)
		return n;
	else
		return (fibonacci(n-1)+fibonacci(n-2));
}


int main()
{
	int i, num = 0, a = 1, b = 1, fibo = 0;

	printf("Digite un número: ");
	do{
		scanf("%i",&num);
	}while(i<0);
	
	for(int i=1;i<=num;i++)
		printf("%i ",fibonacci(i));

	printf("\n");

	return 0;
}
