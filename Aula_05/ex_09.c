#include <stdio.h>

int main() {
	int numeros[10];

	printf("--- Exercicio 9: Substituir Negativos por Zero ---\n");

	// Leitura dos dados
	for(int i = 0; i < 10; i++) {
		printf("Digite o numero %d: ", i + 1);
		scanf("%d", &numeros[i]);

		// Se o numero for negativo, substitui na hora
		if(numeros[i] < 0) {
			numeros[i] = 0;
		}
	}

	// Exibicao do vetor resultante
	printf("\nVetor processado: ");
	for(int i = 0; i < 10; i++) {
		printf("%d ", numeros[i]);
	}
	printf("\n");

	return 0;
}