#include <stdio.h>

int main() {
// 3) Ler 8 números e calcular a soma
    int v3[8], soma = 0;
    printf("--- Exercicio 3: Soma de 8 numeros ---\n");
    for(int i = 0; i < 8; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v3[i]);
        soma += v3[i];
    }
    printf("Soma total: %d\n\n", soma);

}