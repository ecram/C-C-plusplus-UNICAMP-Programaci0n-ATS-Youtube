#include <stdio.h> 
#include "exemplo41.h"
// incluir o conteúdo do arquivo exemplo42.c aqui pode isar o include
int main() 
{ 
   int x=1,y=3; 
   inc(x);
   dec(y);
   printf("x=%d, y=%d\n",x,y);
   x=sum(x,y);
   printf("x=%d, y=%d\n",x,y);
   return 0;
} 

