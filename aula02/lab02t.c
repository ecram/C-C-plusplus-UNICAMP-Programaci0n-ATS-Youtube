/*
 * nome: lab02t.c
 * descrição: imprima la ficha de un curso usando typedef
 * data 20/03/2018
 */
#include <stdio.h>
void main()
{
	typedef char char_curso[];
	typedef int data[3];
	typedef enum curso {curso_c,curso_mpi,curso_openmp} oscursos;

	char_curso cur = "Curso de C";
	data inicio = {19,3,2018};
	data fim = {23,3,2018};
	oscursos os = curso_mpi;
	printf("Nome do curso = %s\n", cur);
	printf("Data de inicio %i/%i/%i \n",inicio[0],inicio[1],inicio[2]);
	printf("Data de fim %i/%i/%i \n",fim[0],fim[1],fim[2]);
	printf("Curso %u \n",os);
}
