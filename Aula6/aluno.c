#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
  char nome[81];
  int matricula;
} Aluno;

void inicializa(int n, Aluno** tab){
  for(int i=0; i<n;i++){
    tab[i] = NULL;
  }
}

void leAluno(int n, Aluno** tab, int i){
  if (i>=0&&i<n&&tab[i]==NULL){
    tab[i]= (Aluno*) malloc(sizeof(Aluno));
    if(tab[i]!=NULL){
      printf("Digite o nome do aluno: ");
      scanf("%s",tab[i]->nome);
      tab[i]->matricula=i+1;
      printf("Matricula do aluno é: %d\n",tab[i]->matricula);
    }else{
    printf("Impossivel Alocar o aluno no indice %d.\n",i);
    }
  }else{
    printf("Impossivel Alocar o aluno no indice %d.\n",i);
  }
}

void imprimeAluno(int n, Aluno** tab, int i){
  if (tab[i]==NULL){
    printf("Não temos Aluno nesta vaga.\n");
    return;
  }else if (i>=0&&i<n){
    printf("Nome: %s - Matricula: %d\n",tab[i]->nome,tab[i]->matricula);
  }else{
    printf("Aluno não Existe.\n");
  }
}

void retiraAluno(int n, Aluno** tab, int i){
  if (i>=0&&i<n&&tab[i]!=NULL){
    printf("Removendo o Aluno %s - Matricula %d\n",tab[i]->nome,tab[i]->matricula);
    free(tab[i]);
    tab[i]=NULL;
  }else{
    printf("Aluno não Existe.\n");
  }
}

void imprimeTudo(int n, Aluno** tab){
  int i=0;
  printf("Imprime todos os Alunos matriculados.\n");
  while (i<n){
    imprimeAluno(n, tab, i);
    i++;
  }
  printf("Fim da Impressão.\n");
}