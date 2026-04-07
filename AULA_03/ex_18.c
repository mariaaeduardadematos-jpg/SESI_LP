#include <stdio.h>

int main() {
    int idade;
    int soma = 0;
    int contador = 0;
    float media;

    printf("Digite as idades (0 para encerrar):\n");

    scanf("%d", &idade);

    while (idade != 0) {
        soma += idade;      // acumula a soma das idades
        contador++;         // conta quantas idades foram digitadas
        scanf("%d", &idade); // lê a próxima idade
    }

    if (contador > 0) {
        media = (float)soma / contador; // calcula a média
        printf("Media das idades = %.2f\n", media);
    } else {
        printf("Nenhuma idade foi digitada.\n");
    }

    return 0;
}