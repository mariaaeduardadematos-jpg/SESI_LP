/*
17) Classificação de Temperatura
Leia uma temperatura:
Frio (< 15°C)
Agradável (15–25°C)
Quente (> 25°C)
*/

#include <stdio.h>

int main() {
    float temp;

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    if (temp < 15) {
        printf("Frio\n");
    } else if (temp <= 25) {
        printf("Agradavel\n");
    } else {
        printf("Quente\n");
    }

    return 0;
}