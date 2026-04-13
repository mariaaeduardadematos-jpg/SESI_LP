#include <stdio.h>

int main() {
    int num[10], pares[10], impares[10], p = 0, im = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
        if(num[i] % 2 == 0) pares[p++] = num[i];
        else impares[im++] = num[i];
    }

    printf("\nPares (%d): ", p);
    for(int i = 0; i < p; i++) printf("%d ", pares[i]);
    printf("\nImpares (%d): ", im);
    for(int i = 0; i < im; i++) printf("%d ", impares[i]);

    return 0;
}
