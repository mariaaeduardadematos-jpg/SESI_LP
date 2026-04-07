#include <stdio.h>

int main() {
    int num;
    int soma = 0;
    
    printf("Digite numeros (0 para sair):\n");
    
    //loop contiua enquanto o usuario não digitar 0
    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;  // sai do loop se digitar 0
        }

        soma += num;  // acumula a soma
    }

    printf("Soma de todos os numeros digitados = %d\n", soma);

    return 0;
}