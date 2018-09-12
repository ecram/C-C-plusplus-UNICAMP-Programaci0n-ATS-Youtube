/*
 * nome: exemplo21.c
 * descrição: Declaração e utilização de enum
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	enum cores {vermelho, verde, azul} val1;

	enum estado_civil {solteiro = 1, casado, viuvo = 5, desquitado};

	enum estado_civil val2;

	val1 = azul;
	val2 = viuvo;

	printf("cores %u %u %u\n", vermelho, verde, azul);
	printf("variaveis %u %u \n", val1, val2);
}
