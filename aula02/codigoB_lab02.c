#include <stdio.h>
void main()
{
	float a = 1.0, b = 10, c = 100.0, d = 1000.0;
	float media = (a + b + c + d) / 4.0;
	int H = 4/ (1/a + 1/b + 1/c + 1/d);
	int a_maior_b = a>b ? a : b;
	int b_maior_c = b>c ? b : c;
	int a_maior_c = a>c ? a_maior_b : b_maior_c;
	int valor_maior_ab = a_maior_b ? a:b;
}
