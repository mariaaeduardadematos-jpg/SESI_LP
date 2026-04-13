#include <stdio.h>

int main() {
    int idades[15], jovem = 0, adulto = 0, idoso = 0;

    for(int i = 0; i < 15; i++) {
        printf("Idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
        if(idades[i] <= 17) jovem++;
        else if(idades[i] <= 59) adulto++;
        else idoso++;
    }

    printf("\nJovens: %d | Adultos: %d | Idosos: %d", jovem, adulto, idoso);
    
    if(jovem > adulto && jovem > idoso) printf("\nMaior grupo: Jovens");
    else if(adulto > idoso) printf("\nMaior grupo: Adultos");
    else printf("\nMaior grupo: Idosos");
    
    return 0;
}