#include <stdio.h>

int main() {
	// 1) Ler 10 números e mostrar todos os pares
	int v2[10];
	printf("--- Exercicio 1: Ler 10 numeros e mostre os pares ---\n");
	for(int i = 0; i < 10; i++) {
		printf("Digite o valor %d: ", i + 1);
		scanf("%d", &v2[i]);
	}
	printf("Numeros pares: ");
	for(int i = 0; i < 10; i++) {
		if(v2[i] % 2 == 0) {
			printf("%d ", v2[i]);
		}
	}
	printf("\n\n");

}