#include <stdio.h>

void somaProduto (float Num1, float Num2, float *Soma, float *Produto);

int main (){
    float Num1, Num2, Soma, Produto;
    printf("Digite o valor de NUM1: ");
    scanf("%f", &Num1);
    printf("Digite o valor de NUM2: ");
    scanf("%f", &Num2);
    somaProduto(Num1,Num2, &Soma, &Produto);
    printf("%f+%f=%f\n%f+%f=%f\n",Num1,Num2,Soma,Num1,Num2,Produto);
    return 0;
}

void somaProduto (float Num1, float Num2, float *Soma, float *Produto){
    *Soma= Num1+Num2;
    *Produto= Num1*Num2;
}