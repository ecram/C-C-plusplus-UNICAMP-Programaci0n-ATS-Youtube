/*
 * nome: lab022.c
 * descrição: Os valores de x,y,z,a,b
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	int x = 1, y = 3;
	int a = x++; // x é copiado a a = 1 e x é incrementado em 1, sendo agora 2
	int b = ++x; // primero incrementamos x em 1, a 3 e b copia o valor de x = 3 
	// x = 3, a = 1 e b = 3
	printf("x = %i, a = %i e b = %i\n", x, a, b);
	y += a; // y = y + a = 3 + 1 = 4
	x -= b++; // x = 3 - 3 ==> x = 5, y b = 3 + 1 = 4
	// x = 0, y = 4 e b = 4
	printf("x = %i, y = %i e b = %i\n", x, y, b);
	int z = x---x; // z = 0 - 1 = -(-1) = 1
	// x = -1, y = 4, z = 1, a = 1 e b = 4
	printf("x = %i, y = %i, z = %i, a = %i e b = %i\n", x, y, z, a, b);
}
