/*
13) Operação Matemática
Leia dois números e uma operação (+, -, *, /).
Realize a operação e exiba o resultado.
*/

#include <stdio.h>

int main() {
    float a, b;
    char op;

    scanf("%f %f %c", &a, &b, &op);

    if (op == '+')
        printf("%.2f\n", a + b);
    else if (op == '-')
        printf("%.2f\n", a - b);
    else if (op == '*')
        printf("%.2f\n", a * b);
    else if (op == '/') {
        if (b != 0)
            printf("%.2f\n", a / b);
        else
            printf("Erro\n");
    } else
        printf("Operacao invalida\n");

    return 0;
}