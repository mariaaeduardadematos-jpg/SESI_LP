#include <stdio.h>

int main() {
	float numeros[10];
	float soma = 0, media;

	printf("--- Exercicio 7: Calcular Media ---\n");

	for(int i = 0; i < 10; i++) {
		printf("Digite o numero %d: ", i + 1);
		scanf("%f", &numeros[i]);
		soma += numeros[i]; // Acumula a soma
	}

	media = soma / 10;
	printf("\nA soma total e: %.2f", soma);
	printf("\nA media dos valores e: %.2f\n", media);

	return 0;
}