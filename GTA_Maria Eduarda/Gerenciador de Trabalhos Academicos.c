#include <stdio.h>
#include <string.h>

// Definindo os limites do sistema
#define MAX_TAREFAS 10
#define MAX_NOME 50

// Variáveis globais (Requisito: Variáveis e Tipos de Dados)
char nomes[MAX_TAREFAS][MAX_NOME];
int prazos[MAX_TAREFAS];
int total = 0; 

// Função para limpar o lixo da memória do teclado (Requisito: Validação)
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// FUNÇÃO DE ORDENAÇÃO (O "Pulo do Gato" para a lista ficar correta)
void ordenarTarefas() {
    for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - i - 1; j++) {
            // Se o prazo atual for maior que o próximo, eles trocam de lugar
            if (prazos[j] > prazos[j + 1]) {
                
                // Troca os números (prazos)
                int tempPrazo = prazos[j];
                prazos[j] = prazos[j + 1];
                prazos[j + 1] = tempPrazo;

                // Troca os nomes (usa strcpy porque são strings/matrizes)
                char tempNome[MAX_NOME];
                strcpy(tempNome, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], tempNome);
            }
        }
    }
}

// 1. Função de Adicionar Tarefa
void adicionarTarefa() {
    if (total >= MAX_TAREFAS) {
        printf("\n[Erro] A lista de tarefas esta cheia!\n");
        return;
    }

    printf("\n--- NOVA TAREFA ---\n");
    printf("Digite o nome da tarefa: ");
    fgets(nomes[total], MAX_NOME, stdin);
    nomes[total][strcspn(nomes[total], "\n")] = 0; 

    printf("Dias para a entrega: ");
    while (scanf("%d", &prazos[total]) != 1 || prazos[total] < 0) {
        printf("[Erro] Digite um numero valido e positivo: ");
        limparBuffer();
    }
    limparBuffer(); 

    total++; 
    printf("[Sucesso] Tarefa cadastrada!\n");
}

// 2. Função de Listar Tarefas (Com ordenação automática)
void listarTarefas() {
    if (total > 0) {
        ordenarTarefas(); // Arruma a ordem antes de mostrar
    }

    printf("\n--- LISTA DE TAREFAS (POR URGENCIA) ---\n");
    if (total == 0) {
        printf("Nenhuma tarefa pendente. Voces estao livres!\n");
        return;
    }

    for (int i = 0; i < total; i++) {
        printf("%d. %s - Faltam %d dia(s)\n", i + 1, nomes[i], prazos[i]);
    }
}

// 3. Função de Concluir (Remover) Tarefa
void concluirTarefa() {
    listarTarefas();
    if (total == 0) return; 

    int indice;
    printf("\nDigite o numero da tarefa que concluiu (ou 0 para cancelar): ");
    scanf("%d", &indice);
    limparBuffer();

    if (indice == 0) return; 

    if (indice > 0 && indice <= total) {
        // Puxa as tarefas de baixo para cima para cobrir o buraco
        for (int i = indice - 1; i < total - 1; i++) {
            strcpy(nomes[i], nomes[i + 1]);
            prazos[i] = prazos[i + 1];
        }
        total--; 
        printf("[Sucesso] Tarefa concluida e removida da lista!\n");
    } else {
        printf("[Erro] Numero invalido.\n");
    }
}

// Função Principal e Menu (Requisito: Estruturas de Controle)
int main() {
    int opcao;

    do {
        printf("\n=================================\n");
        printf(" GERENCIADOR DE TAREFAS ACADEMICAS\n");
        printf("=================================\n");
        printf("1. Cadastrar nova tarefa\n");
        printf("2. Listar tarefas (Ordem de Prazo)\n");
        printf("3. Concluir tarefa (Remover)\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            opcao = 0;
        }
        limparBuffer();

        switch (opcao) {
            case 1: adicionarTarefa(); break;
            case 2: listarTarefas(); break;
            case 3: concluirTarefa(); break;
            case 4: printf("\nEncerrando o sistema. Boa sorte!\n"); break;
            default: printf("\n[Erro] Opcao invalida.\n");
        }
    } while (opcao != 4); 

    return 0;
}