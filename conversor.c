#include <stdio.h>

int main(){
int op;
float c, f, m, km, kg, lb;

    printf("\n=== CONVERSOR DE UNIDADES ===\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Metros para quilometros\n");
    printf("3. Quilos para libras\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &op);

    //1. Converta temperatura (Celsius para Fahrenheit)
    if (op == 1){
        printf("Digite a temperatura em graus Celsiu: ");
        scanf("%f", &c);

        f = (c * 1.8) + 32;

        printf("\n=== TEMPERATURA ===\n");
        printf("Celsiu: %.3f\n", c);
        printf("Fahrenheit: %.3f\n", f);
    }
    //2. Converta distância (metros para quilômetros)
    else if (op == 2){
        printf("Digite a distancia em metros: ");
        scanf("%f", &m);

       km = m * 0.001;

        printf("\n=== DISTANCIA ===\n");
        printf("Metros: %.3f\n", m);
        printf("Quilometros: %.3f\n", km);  
    }

    //3. Converta peso (quilos para libras)
    else if (op == 3){
        printf("Digite o peso em quilos: ");
        scanf("%f", &kg);

       lb = kg * 2.2046;

        printf("\n=== PESO ===\n");
        printf("Quilos: %.3f\n", kg);
        printf("Libras: %.3f\n", lb);  
    }

    else{
        printf("\nOPCAO INVALIDA!\n");
    }

    return 0;
}