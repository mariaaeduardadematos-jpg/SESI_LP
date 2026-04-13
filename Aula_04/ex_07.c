#include <stdio.h>

int main() {
    float saques[10], total = 0, maior = 0;
    int acima500 = 0;

    for(int i = 0; i < 10; i++) {
        printf("Valor do saque %d: ", i + 1);
        scanf("%f", &saques[i]);
        total += saques[i];
        if(saques[i] > maior) maior = saques[i];
        if(saques[i] > 500) acima500++;
    }

    printf("\nTotal sacado: R$ %.2f", total);
    printf("\nMaior saque: R$ %.2f", maior);
    printf("\nSaques acima de R$ 500: %d\n", acima500);

    return 0;
}