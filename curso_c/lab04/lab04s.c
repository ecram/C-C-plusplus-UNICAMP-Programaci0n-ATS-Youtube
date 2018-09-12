#include <stdio.h>


void acumulador(int num)
{
	static int x=0;
	x+=num;
	printf("acumulou %d\n",x);
}

int main()
{
	acumulador(1);
	acumulador(10);
	acumulador(-100);
	return 0;
}
