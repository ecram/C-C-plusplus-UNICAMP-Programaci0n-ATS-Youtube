/* 
 * nome: exemplo44.c
 * descrição: ponteiros
 * data: 22/03/2018
 */

#include <stdio.h>

int main()
{
	int x = 1, y = 3;
	int *px = &x, *py = &y;

	printf("x = %d, y = %i\n",x, y);
	printf("*px = %d, *py = %i\n", *px, *py);
	printf("px = %p, py = %p\n", px, py);
	printf("&x = %p, &y = %p\n", &x, &y);
	
	return 0;
}
