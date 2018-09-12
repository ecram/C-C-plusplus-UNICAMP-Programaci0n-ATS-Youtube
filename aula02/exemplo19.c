/*
 * nome: exemplo19.c
 * descrição: Declaração, inicialização e utilização de union
 * data: 20/3.2018
 */
#include <stdio.h>
void main()
{
	union valor
	{
		int inteiro;
		float real;
		double big_real;
	} val1 = { .inteiro = 10 };

	union valor val2;

	val2.real = 1,5;

	printf("inteiro %d\n", val1.inteiro);
	printf("real %f\n", val1.real);
}
