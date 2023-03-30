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
  float *v;
  v = (float *)malloc(MAX*sizeof(float));
  for(int i=0;i<MAX;i++){
    printf("Digite o valor do indice %d: ",i+1);
    scanf("%f",&v[i]);
  }
  float res = media(v);
  printf("%0.2f\n", res);
  free(v);
  return 0;
}