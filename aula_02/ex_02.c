/*
2) Leia um número inteiro e informe se ele é par ou ímpar.
*/

#include <stdio.h>
int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%i", &num);

    if(num % 2 == 0) {
        printf("Par");
    } else {
        printf("Impar");
    }
    return 0;
}