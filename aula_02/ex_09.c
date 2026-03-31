/*
9) Número Positivo, Negativo ou Zero
Leia um número e informe se ele é:
Positivo
Negativo
Zero
*/

#include <stdio.h>

int main() {
    float n;

    scanf("%f", &n);

    if (n > 0)
        printf("Positivo\n");
    else if (n < 0)
        printf("Negativo\n");
    else
        printf("Zero\n");

    return 0;
}