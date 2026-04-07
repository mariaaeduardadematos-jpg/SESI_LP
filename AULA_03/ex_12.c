#include <stdio.h>

int main() {
    int i = 1;      // começa em 1
    int count = 0;  // contador de pares

    while (i <= 50) {
        if (i % 2 == 0) {  // verifica se é par
            count++;
        }
        i++;  // incrementa
    }

    printf("Quantidade de numeros pares entre 1 e 50 = %d\n", count);

    return 0;
}