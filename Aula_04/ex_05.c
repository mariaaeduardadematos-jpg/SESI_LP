#include <stdio.h>

int main() {
    float temp[7], soma = 0, media, max, min;
    int acima = 0;

    for(int i = 0; i < 7; i++) {
        printf("Temp. dia %d: ", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i];
        if(i == 0) { max = min = temp[i]; }
        if(temp[i] > max) max = temp[i];
        if(temp[i] < min) min = temp[i];
    }

    media = soma / 7;
    for(int i = 0; i < 7; i++) if(temp[i] > media) acima++;

    printf("\nMedia: %.1f | Max: %.1f | Min: %.1f | Acima da media: %d\n", media, max, min, acima);
    return 0;
}