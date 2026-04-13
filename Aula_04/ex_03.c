#include <stdio.h>

int main() {
	int v[12], cres = 1, decres = 1;

	for(int i = 0; i < 12; i++) {
		printf("Valor %d: ", i + 1);
		scanf("%d", &v[i]);
	}

	for(int i = 0; i < 11; i++) {
		if(v[i] < v[i+1]) decres = 0;
		if(v[i] > v[i+1]) cres = 0;
	}

	if(cres) printf("Ordem: Crescente\n");
	else if(decres) printf("Ordem: Decrescente\n");
	else printf("Ordem: Desordenada\n");

	return 0;
}