/*
 * nome: lab04d.c
 * descrição: Laboratório 04 de Punteiros, d
 * data: 22/03/2018
 */

#include <stdio.h>
#include <stdlib.h>

int *pnum, *pdata, *pdata2;
char *phello, *phello2;


int main()
{
	int num = 10;
	int data[3] = { 22, 3, 2018};
	char hello[]= "Hello";
	struct sponto {int x,y,z;}*pponto=(struct sponto *)malloc(sizeof(struct sponto));

	//Alocação de memoria
	pnum = malloc(sizeof(int));
	pdata = malloc(sizeof(int)*3);
	pdata2 = calloc(3,sizeof(int));
	phello = malloc(sizeof(char)*5);
	phello2 = calloc(5,sizeof(char));

	// declaração de ponteiros para as anteriores variaveis
	pnum = &num;
	pdata = data;
	pdata2 = &pdata[0];
	phello = hello;
	phello2 = &hello[0];
	pponto->x=10;
	pponto->y=20;
	pponto->z=30;
	//struct sponto *pponto = &ponto;

	printf("Punteiro num = %i do endereço %p\n",*pnum,pnum);
	printf("Ponteiro data[3]=%d/%d/%d com endereço inicial %p\n",pdata[0],pdata[1],pdata[2],pdata);
	printf("Ponteiro data2[3]=%d/%d/%d com endereço inicial %p\n",pdata2[0],pdata2[1],pdata2[2],pdata2);
	printf("A cadeia phello imprimi %s com endereço inicial %p\n",phello,phello);
	printf("A cadeia phello imprimi %s com endereço inicial %p\n",phello2,phello2);
	printf("A struct pponto armazena: x = %i, y = %i, z = %i\n", pponto->x, pponto->y, pponto->z);

	return 0;
}
