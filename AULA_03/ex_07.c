#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 10; i++) {
        soma += i;
    }

    printf("Soma = %d\n", soma);

    return 0;
}