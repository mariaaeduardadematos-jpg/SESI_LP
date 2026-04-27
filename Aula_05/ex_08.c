#include <stdio.h>

int main() {
	float numeros[10], soma = 0, media;

	printf("--- Exercicio 8: Maiores que a Media ---\n");

	// Primeiro passo: Ler e calcular a media
	for(int i = 0; i < 10; i++) {
		printf("Digite o numero %d: ", i + 1);
		scanf("%f", &numeros[i]);
		soma += numeros[i];
	}
	media = soma / 10;
	printf("\nMedia calculada: %.2f\n", media);

	// Segundo passo: Percorrer o vetor de novo para comparar
	printf("Valores maiores que a media: ");
	for(int i = 0; i < 10; i++) {
		if(numeros[i] > media) {
			printf("%.2f ", numeros[i]);
		}
	}
	printf("\n");

	return 0;
}