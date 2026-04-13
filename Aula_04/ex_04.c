#include <stdio.h>

int main() {
    int n[10], dominante = -1;

    for(int i = 0; i < 10; i++) scanf("%d", &n[i]);

    for(int i = 0; i < 10; i++) {
        int cont = 0;
        for(int j = 0; j < 10; j++) {
            if(n[i] == n[j]) cont++;
        }
        if(cont > 5) {
            dominante = n[i];
            break;
        }
    }

    if(dominante != -1) printf("Valor dominante: %d\n", dominante);
    else printf("Nao existe valor dominante.\n");

    return 0;
}