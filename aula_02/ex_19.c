/*
19) Cálculo de Frete
Leia o peso de uma encomenda:
Até 5kg → R$10
5 a 20kg → R$20
Acima de 20kg → R$50
*/

#include <stdio.h>

int main() {
    float peso;

    printf("Digite o peso da encomenda (kg): ");
    scanf("%f", &peso);

    if (peso <= 5) {
        printf("Frete: R$ 10\n");
    } else if (peso <= 20) {
        printf("Frete: R$ 20\n");
    } else {
        printf("Frete: R$ 50\n");
    }

    return 0;
}