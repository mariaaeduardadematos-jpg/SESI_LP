#include <stdio.h>

int main() {
    int i = 1;      // começa em 1
    int count = 0;  // contador de impares

    while (i <= 100) {
        if (i % 2 == 0) {  // verifica se é par
            count++;
        }
        i++;  // incrementa
    }

    printf("Quantidade de numeros impares entre 1 e 100 = %d\n", count);

    return 0;
}