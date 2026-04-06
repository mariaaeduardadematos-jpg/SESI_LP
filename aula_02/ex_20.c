/*
20) Sistema de Multa de Trânsito
Leia a velocidade de um carro:
Até 60 km/h → sem multa
61–80 → multa leve
81–100 → multa grave
Acima de 100 → multa gravíssima
*/

#include <stdio.h>

int main() {
    int velocidade;

    printf("Digite a velocidade do carro (km/h): ");
    scanf("%d", &velocidade);

    if (velocidade <= 60) {
        printf("Sem multa\n");
    } else if (velocidade <= 80) {
        printf("Multa leve\n");
    } else if (velocidade <= 100) {
        printf("Multa grave\n");
    } else {
        printf("Multa gravissima\n");
    }

    return 0;
}