#include <stdio.h>

int main() {
    int numeros[6];
    int maior;

    printf("--- Exercicio 4: Encontrar o Maior ---\n");

    for(int i = 0; i < 6; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        // Se for o primeiro numero lido, ele e o maior inicial
        if(i == 0) {
            maior = numeros[i];
        } else {
            // Se o numero atual for maior que o guardado, atualiza
            if(numeros[i] > maior) {
                maior = numeros[i];
            }
        }
    }

    printf("\nO maior valor digitado foi: %d\n", maior);

    return 0;
}