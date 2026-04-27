#include <stdio.h>

int main() {
	// --- Exercício 6: Contar Positivos de 10 números ---
	int vetor10[10];
	int contPositivos = 0;

	printf("--- Exercicio 6: Contagem de Positivos ---\n");
	for(int i = 0; i < 10; i++) {
		printf("Digite o numero %d: ", i + 1);
		scanf("%d", &vetor10[i]);

		// Verifica se o número é maior que zero
		if(vetor10[i] > 0) {
			contPositivos++;
		}
	}
	printf("Voce digitou %d numeros positivos.\n", contPositivos);

	return 0;
}