/* 
 * nome: exemplo55.c 
 * descrição: 
 * data: 10/04/2013
 */ 
#include <stdio.h> 
#include <stdlib.h> 
#include <errno.h> 
int main() 
 { 
     FILE *fp; 
     fp=fopen("exemplo54.txt","r"); 
     int num; 
     if( fp == NULL ) 
     { 
        perror("Erro com a funcao fopen"); 
     } 
     else 
     { 
        while ( fscanf(fp,"%d", &num) != EOF ) 
        { 
              if( errno ) 
                 perror("Erro com a funcao fscanf"); 
              else 
                 fprintf(stdout,"Numero %d\n",num); 
        } 
     }
     fclose(fp);
     return 0; 
} 

