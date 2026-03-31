/*
7) Verificação de Triângulo
Leia três valores e verifique se podem formar um triângulo.
Caso formem, classifique como:
Equilátero
Isósceles
Escaleno
*/

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite tres lados: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c)
            printf("Equilatero\n");
        else if (a == b || a == c || b == c)
            printf("Isosceles\n");
        else
            printf("Escaleno\n");
    } else {
        printf("Nao forma triangulo\n");
    }

    return 0;
}