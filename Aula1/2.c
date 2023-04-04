#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero:");
    scanf("%d",&num);
    while (num>0)
    {
        printf("%d ",num);
        num--;
    }
    
    return 0;
}