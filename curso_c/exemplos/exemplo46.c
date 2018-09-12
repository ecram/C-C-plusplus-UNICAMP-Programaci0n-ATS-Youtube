#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
    int *parray; 
    parray=(int*)calloc(10,sizeof(int)); 
    int *outroarray=(int*)calloc(10,sizeof(int)); 

    parray[0]=1; 
    parray[9]=10; 
 
    printf("%d %p\n", parray[0], &parray[0]); 
    printf("%d %p\n", parray[9], &parray[9]); 
    printf("%d %p\n", *(parray), parray); 
    printf("%d %p\n", *(parray+9), (parray+9)); 
 
    parray=realloc(parray,sizeof(int)*20); 
    parray[19]=100; 
 
    printf("%d %p\n", parray[0], &parray[0]); 
    printf("%d %p\n", parray[19], &parray[19]); 
    printf("%d %p\n", *(parray+19), (parray+19)); 
 
    free(parray);parray=NULL; 
    free(outroarray);outroarray=NULL; 
 
    return 0; 
} 

