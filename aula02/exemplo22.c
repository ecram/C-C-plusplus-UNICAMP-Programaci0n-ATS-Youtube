/*
 * nome: exemplo22.c
 * descrição: Declaração,inicialização e utilização de enum
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	enum cores {vermelho, verde, azul} val1 = azul;

	enum estado_civil {solteiro = 1, casado, viuvo = 5, desquitado};

	enum estado_civil val2;

	val2 = casado;

	printf("cores %u %u %u\n", vermelho, verde, azul);
	printf("variaveis %u %u \n", val1, val2);
}
