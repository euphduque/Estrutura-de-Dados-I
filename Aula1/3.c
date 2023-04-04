#include <stdio.h>

float CalcIMC(float massa,float altura);
void MostraResultado(float IMC);

int main (){
    float massa, altura, IMC;
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite sua Massa (em kg):");
    scanf("%f", &massa);
    IMC=CalcIMC(massa, altura);
    MostraResultado(IMC);
    return 0;
}

float CalcIMC(float massa,float altura){
    return massa/(altura*altura);
}

void MostraResultado(float IMC){
    if (IMC<18,5){
        printf("Seu IMC é: %f.\nAbaixo do peso normal.", IMC);
    }else if (IMC>=40.0){
        printf("Seu IMC é: %f.\nObesidade grau III.", IMC);
    }else if(IMC>=35.0 && IMC<40.0){
        printf("Seu IMC é: %f.\nObesidade grau II.", IMC);
    }else if(IMC>=30.0 && IMC<35.0){
        printf("Seu IMC é: %f.\nObesidade grau I.", IMC);
    }else if (IMC>=25.0 && IMC<30.0){
        printf("Seu IMC é: %f.\nSobrepeso", IMC);
    }else if(IMC>=18.5&&IMC<25.0){
        printf("Seu IMC é: %f.\nPeso Normal.", IMC);
    }else{
        printf("Valor Invalido.");
    }
}