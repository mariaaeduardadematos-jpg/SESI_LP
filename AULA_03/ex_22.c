#include <stdio.h>

int main() {
	int num;

	do {
		printf("Digite um numero positivo: ");
		scanf("%d", &num);

		if (num <= 0) {
			printf("Numero invalido! Tente novamente.\n");
		}
	} while (num <= 0);

	printf("Voce digitou: %d\n", num);

	return 0;
}