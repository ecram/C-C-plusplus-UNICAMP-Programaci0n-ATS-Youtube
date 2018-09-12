/*
 * nome: lab023.c
 * descrição: Os valores de x,y,z,a,b
 * data: 20/03/2018
 */
#include <stdio.h>
void main()
{
	int x = 1, y = 3;
	int a = x>y ? x:y; // a = 3
	int b =! x  ? x:~x; // b = -2, porque ~x = 1
	printf("x = %i\n", x);
	x = a ? a:b+b ? b:1; // x = 3
	// x = 3, y = 3, a = 3 e b = -2
	printf("x = %i, y = %i, a = %i e b = %i \n", x,y,a,b);
}
