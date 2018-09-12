/*
 * nome: lab02.c
 * descrição: imprima la ficha de un curso
 * data 20/03/2018
 */
#include <stdio.h>
void main()
{
	char nome_curso[] = "Curso de C";
	int data_inicio[3] = {19,3,2018}, data_fim[3]={23,3,2018};
	enum curso {curso_c,curso_mpi,curso_openmp};
	printf("Nome do curso = %s\n", nome_curso);
	printf("Data de inicio %i/%i/%i \n",data_inicio[0],data_inicio[1],data_inicio[2]);
	printf("Data de fim %i/%i/%i \n",data_fim[0],data_fim[1],data_fim[2]);
	printf("Curso %u \n",curso_c);
}
