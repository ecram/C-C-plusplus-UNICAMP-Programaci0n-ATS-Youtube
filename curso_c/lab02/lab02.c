#include <stdio.h>

int main()
{
	char  nome_curso[]= "Introducao ao C";
	int data_inicio[]={14,4,2013};
	int data_fim[]={19,4,2013};
	enum ecurso { curso_c, curso_mpi, curso_openmp} curso = curso_c;

	printf("Nome do curso = %s\n",nome_curso);
	printf("Data de inicio %d/%d/%d\n", data_inicio[0], data_inicio[1], data_inicio[2]);
	printf("Data final %d/%d/%d\n", data_fim[0], data_fim[1], data_fim[2]);
	printf("Curso %u\n", curso);

	return 0;
}
