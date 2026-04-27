#include <stdio.h>

int main() {
    int numeros[6];
    int menor;

    printf("--- Exercicio 5: Encontrar o Menor ---\n");

    for(int i = 0; i < 6; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        // Se for o primeiro numero lido, ele e o menor inicial
        if(i == 0) {
            menor = numeros[i];
        } else {
            // Se o numero atual for menor que o guardado, atualiza
            if(numeros[i] < menor) {
                menor = numeros[i];
            }
        }
    }

    printf("\nO menor valor digitado foi: %d\n", menor);

    return 0;
}