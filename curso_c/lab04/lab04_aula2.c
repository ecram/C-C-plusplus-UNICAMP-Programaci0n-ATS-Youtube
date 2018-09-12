#include<stdio.h>
#include<stdlib.h>

int main() {
	
	/*
	int num = 10;
	int data[3] = {19,4,2013};
	char hello[] ="Hello";
	struct sponto{int x,y,z;}; 

	struct sponto ponto;
	ponto.x = 10;	
	ponto.y = 20;	
	ponto.z = 30;	
	*/

	//struct sponto *pponto=&ponto;
	
 	int	*pnum;
	pnum = malloc (sizeof(int));
	*pnum= 10;

 	int *pdata;
	pdata = calloc(10,sizeof(int));
 	pdata[0] = 19;
	pdata[1] = 11;
	pdata[2] = 2013;
 
 	char *phello; 
	phello = calloc(10,sizeof(char));
 	phello[0] = 'h';
 	phello[1] = 'h';
 	phello[2] = 'l';

	struct sponto{int x,y,z;};
	struct sponto *pponto;
	pponto = malloc (sizeof (struct sponto));
	pponto->x = 10;
	pponto->y = 20;
	pponto->z = 30;

	printf("num= %d \n", *pnum);
	printf("data= %d/%d/%d \n", pdata[0], pdata[1], pdata[2]);
	printf("num= %s \n", phello);
	printf("ponto (x,y,z) = (%d,%d,%d)\n", pponto->x, pponto->y, pponto->z);
 

return 0;
}
