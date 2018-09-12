#include <stdio.h>

int main () {
	int dia=19, mes=3, ano=2018, idade=19;
	char a='b';
	float altura=1.65, peso=55.0;
	long double pi=3.1459265358879323846L;

	printf("Minha altura é %f m e meu peso é de %f kg\n", altura, peso);
	printf("Minha letra favorita é a %c\n", a);
	printf("pi tem um valor de %Lf\n", pi);
	printf("A data de hoje é %d/%d/%d e eu tenho %d anos\n", dia, mes, ano, idade);

	return 0;
}
