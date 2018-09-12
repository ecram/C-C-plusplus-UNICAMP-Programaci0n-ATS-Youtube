/* 
 * nome: exemplo47.c
 * descrição: Ponteiros para strings
 * data: 03/10/2012
 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
    char *nome=(char*)malloc(sizeof(char)*20); 
    nome[0]='C'; 
    nome[1]='a'; 
    nome[2]='r'; 
    nome[3]='l'; 
    nome[4]='o'; 
    nome[5]='s'; 
    nome[6]='\0'; 
    printf("Nome %s ( letra inicial %c )(%%p %p)\n", nome, nome[0], nome); 
    free(nome); nome=NULL;
    return 0; 
} 

