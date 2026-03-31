/*
11) Verificação de Múltiplos
Leia dois números e verifique se o primeiro é múltiplo do segundo.
*/

#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if (a % b == 0)
        printf("Multiplo\n");
    else
        printf("Nao multiplo\n");

    return 0;
}