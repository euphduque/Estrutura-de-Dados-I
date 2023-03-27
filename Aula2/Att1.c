#include<stdio.h>

void trocaValores(int *x, int*y);

int main (){
    int x,y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("Valor de x: %d\nValor de y: %d\n", x,y);
    trocaValores(&x, &y);
    printf("Valor de x: %d\nValor de y: %d\n", x,y);
    return 0;
}

void trocaValores(int *x, int*y){
    int aux=*x;
    int aux2=*y;
    *y=aux;
    *x=aux2;
}