#include <stdio.h>

int main() {
    int vetor[10], aux;

    printf("--- Exercicio 11: Ordem Decrescente ---\n");

    // Leitura dos dados
    for(int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Algoritmo Bubble Sort (Decrescente)
    for(int i = 0; i < 10; i++) {
        for(int j = i + 1; j < 10; j++) {
            // Se o atual for menor que o proximo, troca (leva o maior para o inicio)
            if(vetor[i] < vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\nVetor em ordem decrescente: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}