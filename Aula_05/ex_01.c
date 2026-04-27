#include <stdio.h>

int main() {
	// 1) Ler 5 números e exibir todos
	int v1[5];
	printf("--- Exercicio 1: Ler 5 numeros ---\n");
	for(int i = 0; i < 5; i++) {
		printf("Digite o valor %d: ", i + 1);
		scanf("%d", &v1[i]);
	}
	printf("Valores digitados: ");
	for(int i = 0; i < 5; i++) {
		printf("%d ", v1[i]);
	}
	printf("\n\n");

}