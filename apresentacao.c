#include <stdio.h>

int main() {
	char nome[100], curso[100];
	int idade, anoNascimento;
	
	printf("\n=== PROGRAMA DE APRESENTA��O ===\n");
	
	printf("Digite seu nome completo: ");
	fgets(nome, sizeof(nome), stdin);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite seu curso: ");
	scanf(" %99[^\n]", &curso); //L� string com espa�os
	
	//Calculo
	anoNascimento = 2025 - idade;
	
	//Saida
	printf("\n=== BEM-VIND@! ===\n");
	printf("Ola, %s.\n", nome);
	printf("Voce tem %d anos e estuda %s.\n", idade, curso);
	printf("Voce nasceu aproximadamente em %d.\n", anoNascimento);
	
	return 0;
}
