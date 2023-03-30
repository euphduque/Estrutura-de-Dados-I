#include <stdio.h>
#include <stdlib.h>

#define MAX 10

float media(float *n){
  float res =0;
  for(int i=0;i<MAX;i++){
    res+=n[i];
  }
  res =res/MAX;
  return res;
}

int main(void) {
  float v[MAX];
  for(int i=0;i<MAX;i++){
    printf("Digite o valor do indice:");
    scanf("%f",&v[i]);
  }
  float res = media(v);
  printf("%f", res);
  return 0;
}