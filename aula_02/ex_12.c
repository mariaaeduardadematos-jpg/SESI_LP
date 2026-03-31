/*
12) Cálculo de Salário com Bônus
Leia o salário:
Se maior que 3000 → bônus de 5%
Caso contrário → bônus de 10%
Exiba o salário final.
*/

#include <stdio.h>

int main() {
    float salario, final;

    scanf("%f", &salario);

    if (salario > 3000)
        final = salario * 1.05;
    else
        final = salario * 1.10;

    printf("Salario final: %.2f\n", final);

    return 0;
}