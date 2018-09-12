#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

	int * pnum = (int*)malloc(sizeof(int));
	int * pdata = (int*)calloc(3,sizeof(int));
	char * phello = (char*)calloc(10,sizeof(int));
	struct sponto {int x,y,z; } *pponto = (struct sponto *)malloc(sizeof(struct sponto));

	*pnum=1;
	pdata[0]=19 ; pdata[1]=4 ; pdata[2]=2013 ;

	//strcpy(phello, "Hello");
	phello[0]='H';phello[1]='e';phello[2]='l';phello[3]='l';phello[4]='o';phello[5]='\0';

	pponto->x=10 ; pponto->y=20 ; pponto->z=30 ;

	printf("num=%d\n",*pnum);
	printf("data=%d/%d/%d\n",pdata[0],pdata[1],pdata[2]);
	printf("hello=%s\n",phello);
	printf("ponto=(%d,%d,%d)\n",pponto->x,pponto->y,pponto->z);

	free(pnum); pnum=NULL;
	free(pdata); pdata=NULL;
	free(phello); phello=NULL;
	free(pponto); pponto=NULL;
	return 0;
}
