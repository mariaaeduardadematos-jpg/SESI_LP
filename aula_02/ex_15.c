/*
15) Verificação de Maioridade para Votação
Leia a idade e informe:
*/

#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Nao pode votar\n");
    } else if ((idade >= 16 && idade <= 17) || idade > 70) {
        printf("Voto opcional\n");
    } else {
        printf("Voto obrigatorio\n");
    }

    return 0;
}