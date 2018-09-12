/* 
 * nome: exemplo49.c 
 * descrição: ponteiro para struct 
 * data: 03/10/2012 
 */ 
#include <stdio.h> 

int som(int x, int y) 
{ 
    return x + y; 
} 
 
int main() 
{ 
    int (*psom)(int,int)=&som; 
    printf("funcao psom end=%p resultado=%d\n",psom,psom(1,2)); 
    printf("funcao printf end=%p \n",printf); 
    return 0; 
} 

