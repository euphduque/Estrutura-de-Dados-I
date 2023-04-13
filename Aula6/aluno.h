#include <stdio.h>
#include <stdlib.h>
typedef struct aluno Aluno;

void inicializa(int n, Aluno** tab);

void leAluno(int n, Aluno** tab, int i);

void imprimeAluno(int n, Aluno** tab, int i);

void retiraAluno(int n, Aluno** tab, int i);

void imprimeTudo(int n, Aluno** tab);