#include <stdio.h>
#include <stdlib.h>
#define MAX 3
/*setbuf(stdin,NULL);*/

typedef struct aluno{
  char nome[81];
  int matricula;
} Aluno;

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

void inicializa(int n, Aluno** tab){
  for(int i=0; i<n;i++){
    tab[i] = NULL;
  }
}

void leAluno(int n, Aluno** tab, int i){
  if (i>=0&&i<n&&tab[i]==NULL){
    tab[i]= (Aluno*) malloc(sizeof(Aluno));
    printf("Digite o nome do aluno: ");
    scanf("%s",tab[i]->nome);
    printf("Digite a Matricula do aluno: ");
    scanf("%d",&tab[i]->matricula);
  }else{
    printf("Todas as Vagas já foram preenchidas.\n");
  }
}
void imprimeAluno(int n, Aluno** tab, int i){
  if (tab[i]==NULL){
    printf("Não temos Aluno nesta vaga.\n");
    return;
  }if (i>=0&&i<n){
    printf("Nome do Aluno: %s\nNumero da Matricula: %d\n",tab[i]->nome,tab[i]->matricula);
  }else{
    printf("Aluno não Existe.\n");
  }
}
void retiraAluno(int n, Aluno** tab, int i){
  if (i>=0&&i<n&&tab[i]!=NULL){
    printf("Removendo o Aluno %s\n que tem a Matricula %d\n",tab[i]->nome,tab[i]->matricula);
    free(tab[i]);
    tab[i]=NULL;
  }else{
    printf("Aluno não Existe.\n");
  }
}

void imprimeTudo(int n, Aluno** tab){
  int i=0;
  while (1){
    if (tab[i]==NULL){
      break;
    }
    imprimeAluno(n, tab, i);
    i++;
  }
}