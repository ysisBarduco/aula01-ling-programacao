#include <stdio.h>

int main(){
    int priNum, segNum, soma, subtr, multi;
    float div;

    printf("\n=== CALCULADORA BASICA ===\n");

    //1. Leia dois números 
    printf("Digite o primeiro numero: ");
    scanf("%d", &priNum);

    printf("Digite o segundo numero: ");
    scanf("%d", &segNum);

    //2. Realize as quatro operações básicas 
    soma = priNum + segNum;
    subtr = priNum - segNum;
    div = priNum / segNum;
    multi = priNum * segNum;
    
    //3. Exiba os resultados formatados
    printf("\n=== RESULTADOS ===\n");
    printf(" %d + %d = %d \n", priNum, segNum, soma);
    printf(" %d - %d = %d \n", priNum, segNum, subtr);
    printf(" %d / %d = %.2f \n", priNum, segNum, div);
    printf(" %d * %d = %d \n", priNum, segNum, multi);

    return 0;
}
