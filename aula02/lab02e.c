/*
 * nome: lab02.c
 * descrição: imprima la ficha de un curso
 * data 20/03/2018
 */
#include <stdio.h>
void main()
{
	struct cursinho
	{
		char nome_curso[14];
		int data_inicio[3], data_fim[3];
		enum curso {curso_c,curso_mpi,curso_openmp} oscursos;
	} Curso = {.nome_curso = "Curso de C", .data_inicio={19,3,2018},.data_fim={23,3,2018},.oscursos=curso_mpi};
	printf("Nome do curso = %s\n", Curso.nome_curso);
	printf("Data de inicio %i/%i/%i \n",Curso.data_inicio[0],Curso.data_inicio[1],Curso.data_inicio[2]);
	printf("Data de fim %i/%i/%i \n",Curso.data_fim[0],Curso.data_fim[1],Curso.data_fim[2]);
	printf("Curso %u \n",Curso.oscursos);
}
