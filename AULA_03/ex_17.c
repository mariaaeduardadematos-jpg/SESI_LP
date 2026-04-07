#include <stdio.h>

int main() {
    int num;
    int contador = 0;

    printf("Digite numeros (um numero negativo para sair):\n");

    do {
        scanf("%d", &num);
        if (num >= 0) {
            contador++;
        }
    } while (num >= 0);

    printf("Quantidade de numeros digitados: %d\n", contador);

    return 0;
}