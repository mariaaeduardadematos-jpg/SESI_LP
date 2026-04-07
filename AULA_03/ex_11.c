#include <stdio.h>

int main() {
    int num, i = 1;
    long long fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (i <= num) {
        fatorial *= i;
        i++;
    }

    printf("Fatorial de %d = %lld\n", num, fatorial);

    return 0;
}