#include <stdio.h>

int main()
{
char nome_curso[] = "curso_c";

int data_inicio[3]={10,03,1986}, data_fim[3] = {10,03,1990};

enum curso {curso_c, curso_mpi, curso_openmp} curso1= curso_c;

printf("Nome do curso = %s \n", nome_curso);
printf("Data de inicio %d/%d/%d\n", data_inicio[0],data_inicio[1],data_inicio[2]);
printf("Data final %d/%d/%d\n", data_fim[0],data_fim[1],data_fim[2]);
printf("Curso %u ", curso1); 


return 0;
}
