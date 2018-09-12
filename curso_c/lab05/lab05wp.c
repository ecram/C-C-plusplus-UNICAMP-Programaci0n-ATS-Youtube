/* 
 * nome: exemplo55.c
 * descrição: 
 * data: 03/10/2012
 */
#include <stdio.h> 
#include <stdlib.h> 
#include <errno.h> 

int main(int argc, char *argv[])
{ 
   FILE *fp;
   fp=fopen("lab05.txt","a");
   if( fp == NULL )
   {
      perror("Erro com a funcao fopen");
   }
   else
   {
      fprintf(fp,"\n");
      for( int cont=1 ; cont<argc ; cont++)
      {
         printf("argv[%d]=\"%s\"\n", cont, argv[cont]); 
         fprintf(fp," %s", argv[cont]);
         if( errno ) perror("Erro com a funcao fptintf");
      }
      fprintf(fp,"\n");
      return 0;
   }
   fclose(fp);
} 

