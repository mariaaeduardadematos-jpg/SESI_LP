#include <stdio.h>

int main() {
    int opcao;

    do {
        // Exibe o menu
        printf("\nMENU:\n");
        printf("1: Dizer \"Olá\"\n");
        printf("2: Dizer \"Tudo bem?\"\n");
        printf("3: Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Processa a escolha
        switch(opcao) {
            case 1:
                printf("Olá!\n");
                break;
            case 2:
                printf("Tudo bem?\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while(opcao != 3); // repete até o usuário escolher sair

    return 0;
}