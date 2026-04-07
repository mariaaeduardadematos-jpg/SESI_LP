#include <stdio.h>

int main() {
    int num, i, primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num <= 1) {
        primo = 0;
    } else {
        for(i = 2; i < num; i++) {
            if(num % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if(primo)
        printf("O numero %d é primo.\n", num);
    else
        printf("O numero %d nao é primo.\n", num);

    return 0;
}