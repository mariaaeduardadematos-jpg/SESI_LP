#include <stdio.h>

int main() {
	int vetor[10], aux;

	printf("--- Exercicio 10: Ordem Crescente ---\n");

	// Leitura dos dados
	for(int i = 0; i < 10; i++) {
		printf("Digite o numero %d: ", i + 1);
		scanf("%d", &vetor[i]);
	}

	// Algoritmo Bubble Sort (Crescente)
	for(int i = 0; i < 10; i++) {
		for(int j = i + 1; j < 10; j++) {
			if(vetor[i] > vetor[j]) {
				// Troca os valores usando uma variavel auxiliar
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}

	printf("\nVetor em ordem crescente: ");
	for(int i = 0; i < 10; i++) {
		printf("%d ", vetor[i]);
	}
	printf("\n");

	return 0;
}