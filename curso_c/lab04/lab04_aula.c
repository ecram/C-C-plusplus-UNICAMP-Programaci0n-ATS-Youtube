#include<stdio.h>

int main() {

	int num = 10;
	int data[3] = {19,4,2013};
	char hello[] ="Hello";
	struct sponto{int x,y,z;}; 

	struct sponto ponto;
	ponto.x = 10;	
	ponto.y = 20;	
	ponto.z = 30;	
	
 	int	*pnum = &num;

 	int *pdata;
 	pdata = data;
 
 	char *phello; 
 	phello = hello;

	struct sponto *pponto=&ponto;

	printf("num= %d \n", *pnum);
	printf("data= %d/%d/%d \n", pdata[0], pdata[1], pdata[2]);
	printf("num= %s \n", phello);
	printf("ponto (x,y,z) = (%d,%d,%d)\n", pponto->x, pponto->y, pponto->z);
 

return 0;
}
