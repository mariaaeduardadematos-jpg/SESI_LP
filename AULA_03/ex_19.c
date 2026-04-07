#include <stdio.h>

int main() {
    int num;
    int maior = -2147483648; // valor inicial mínimo possível para int

    printf("Digite numeros (999 para encerrar):\n");

    scanf("%d", &num);

    while (num != 999) {
        if (num > maior) {
            maior = num; // atualiza o maior número
        }
        scanf("%d", &num);
    }

    printf("O maior numero digitado foi: %d\n", maior);

    return 0;
}