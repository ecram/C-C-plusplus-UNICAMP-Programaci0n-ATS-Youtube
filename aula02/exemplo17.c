/*
 * nome: exemplo17.c
 * descrição: Declaração de union
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
	} val1;

	union valor val2;
}
