#include <stdio.h>
#include <stdlib.h>

void imprimeMatriz(int n,int m, int **mat){
  for (int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      printf("%d ",mat[i][j]);
    }
    printf("\n");
  }
}

int ** transpostaMatriz(int n,int m, int **mat){
  int **transMatriz=(int**)malloc(n*sizeof(int*));
  for(int i=0;i<n;i++){
    transMatriz[i]=(int*)malloc(m*sizeof(int));
  }
    for (int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        transMatriz[i][j]= mat[j][i];
      }
  }
  return transMatriz;
}

int main (){
  int m=NULL,n=NULL,**mat=NULL;
  printf("Digite a quantidade de linhas da matriz: ");
  scanf("%d",&m);
  printf("Digite a quantidade de colunas da matriz: ");
  scanf("%d",&n);

  mat=(int**)malloc(m*sizeof(int*));
  for(int i=0;i<m;i++){
    mat[i]=(int*)malloc(n*sizeof(int));
  }
  imprimeMatriz(n,m,mat);
  mat = transpostaMatriz(n, m, mat);
  imprimeMatriz(n,m,mat);

  return 0;
}