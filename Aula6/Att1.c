#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

#define MAX 19
/*setbuf(stdin,NULL);*/

void inicializa(int n, Aluno** tab);
void leAluno(int n, Aluno** tab, int i);
void imprimeAluno(int n, Aluno** tab, int i);
void retiraAluno(int n, Aluno** tab, int i);
void imprimeTudo(int n, Aluno** tab);

int main (){
  Aluno **tab=(Aluno**) malloc(MAX*sizeof(Aluno*));
  inicializa(MAX, tab);
  leAluno(MAX, tab, 0);
  leAluno(MAX, tab, 1);
  leAluno(MAX, tab, 9);
  imprimeAluno(MAX, tab, 0);
  imprimeAluno(MAX, tab, 1);
  imprimeTudo(MAX, tab);
  retiraAluno(MAX, tab, 1);
  imprimeAluno(MAX, tab, 1);
  imprimeTudo(MAX, tab);
  printf("Fim...\n");
  return 0;
}
