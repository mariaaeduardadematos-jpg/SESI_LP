#include <stdio.h>

int main() {
	int a, b, i;

	printf("Digite o primeiro numero: ");
	scanf("%d", &a);

	printf("Digite o segundo numero: ");
	scanf("%d", &b);

	// garantir que a seja menor que b
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}

	i = a;

	do {
		printf("%d\n", i);
		i++;
	} while (i <= b);

	return 0;
}