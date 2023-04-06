#include <stdio.h>
#include <stdlib.h>

int digito (char c){
  if ((c>='a' && c<='z') || (c>='A' && c<='Z')){
    return 1;
  }else{
    return 0;
  }
}

int main (){
  char c= '9';
  printf("Digite um Caracter: ");
  scanf("%c",&c);
  if (digito(c)){
    printf("É uma letra.\n");
  }else{
    printf("Não é uma letra.\n");
  }
  return 0;
}