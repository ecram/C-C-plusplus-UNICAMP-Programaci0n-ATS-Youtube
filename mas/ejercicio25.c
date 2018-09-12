/*
 * nombre: ejercicio25.c
 * descripción: Recursividad: Una función recursividad es una función que se llama a si misma.
 * fecha: 27/03/2018
 */

// 4! = 4 * 3!
// 3! = 3 * 2!
// 2! = 2 * 1!
// 1! = 1

#include <stdio.h>

long factorial(int num)
{
	if (num <= 1)
		return 1;
	else
		return num*factorial(num-1);

}

int main()
{
	int num = 0;

	printf("Digite un número: ");
	scanf("%i",&num);

	printf("Factorial de %i es: %li",num,factorial(num));

	printf("\n");

	return 0;
}
