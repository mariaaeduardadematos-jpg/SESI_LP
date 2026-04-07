#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    int i = num;
    do {
        printf("%d\n", i);
        i--;
    } while (i >= 0);

    return 0;
}