/*
4) Verificação de Aprovação
Leia a nota de um aluno (0 a 10).
Informe:
Aprovado (nota >= 7)
Recuperação (nota entre 5 e 6.9)
Reprovado (nota < 5)
*/

#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota >= 7)
        printf("Aprovado\n");
    else if (nota >= 5)
        printf("Recuperacao\n");
    else
        printf("Reprovado\n");

    return 0;
}