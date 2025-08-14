#include <stdio.h>

int main(){
    float n1, n2, n3, n4, media;

    printf("\n=== ANALISE DE NOTAS ===\n");

    printf("Digite a 1a nota: ");
    scanf("%f", &n1);

    printf("Digite a 2a nota: ");
    scanf("%f", &n2);

    printf("Digite a 3a nota: ");
    scanf("%f", &n3);

    printf("Digite a 4a nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4)/4;

    if (media >= 70){
       printf("\nMEDIA = %.2f\n", media);
       printf("STATUS: Aprovado\n"); 
    }
    else{
        printf("\nMEDIA = %.2f\n", media);
       printf("STATUS = Reprovado\n");
    }

    return 0;
}