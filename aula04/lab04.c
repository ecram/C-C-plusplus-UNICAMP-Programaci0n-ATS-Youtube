/*
 * nome: lab04.c
 * descrição: Laboratório 04 de Punteiros
 * data: 22/03/2018
 */

#include <stdio.h>

int *pnum, *pdata, *pdata2;
char *phello, *phello2;


int main()
{
	int num = 10;
	int data[3] = { 22, 3, 2018};
	char hello[]= "Hello";
	struct sponto {int x,y,z;}ponto = {10,20,30};

	// declaração de ponteiros para as anteriores variaveis
	pnum = &num;
	pdata = data;
	pdata2 = &pdata[0];
	phello = hello;
	phello2 = &hello[0];
	struct sponto *pponto = &ponto;

	printf("Punteiro num = %i do endereço %p\n",*pnum,pnum);
	printf("Ponteiro data[3]=%d/%d/%d com endereço inicial %p\n",pdata[0],pdata[1],pdata[2],pdata);
	printf("Ponteiro data2[3]=%d/%d/%d com endereço inicial %p\n",pdata2[0],pdata2[1],pdata2[2],pdata2);
	printf("A cadeia phello imprimi %s com endereço inicial %p\n",phello,phello);
	printf("A cadeia phello imprimi %s com endereço inicial %p\n",phello2,phello2);
	printf("A struct pponto armazena: x = %i, y = %i, z = %i\n", pponto->x, pponto->y, pponto->z);

	return 0;
}
