/*
5) Valor > 100 -> 10% desconto | Caso contrário -> 5%
*/

#include <stdio.h>

int main() {
    float valor, final;

    printf("Valor da compra: ");
    scanf("%f", &valor);

    if (valor > 100)
        final = valor * 0.90;
    else
        final = valor * 0.95;

    printf("Valor final: %.2f\n", final);

    return 0;
}