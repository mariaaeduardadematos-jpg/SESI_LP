#include <stdio.h>
#include <string.h>

int main() {
    char senha[20];           // variável para armazenar a senha digitada
    char senha_correta[] = "1234"; // senha fixa

    printf("Digite a senha:\n");

    // enquanto a senha digitada for diferente da senha correta
    while (1) {
        scanf("%s", senha);   // lê a senha do usuário

        if (strcmp(senha, senha_correta) == 0) { // compara strings
            printf("Senha correta! Acesso permitido.\n");
            break;  // sai do loop
        } else {
            printf("Senha incorreta. Tente novamente:\n");
        }
    }

    return 0;
}