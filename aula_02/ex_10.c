/*
10) Cálculo de IMC
Leia peso e altura e calcule o IMC.
Classifique:
Abaixo do peso (< 18.5)
Normal (18.5–24.9)
Sobrepeso (25–29.9)
Obesidade (≥ 30)
*/

#include <stdio.h>

int main() {
    float peso, altura, imc;

    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5)
        printf("Abaixo do peso\n");
    else if (imc < 25)
        printf("Normal\n");
    else if (imc < 30)
        printf("Sobrepeso\n");
    else
        printf("Obesidade\n");

    return 0;
}