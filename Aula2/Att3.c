#include <stdio.h>

int fat (int n);

int main(){
    int x, fatorial;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    fatorial = fat(x);
    printf("Fatorial de %d = %d", x, fatorial);

    return 0;
}

int fat (int n){
    if(n==0){
        return 1;
    }else{
        return (n*fat(n-1));
    }
}