#include <stdio.h>
#include "combinatoria.h"

int main() {
	char escolha;
	int n, p, per, arr, com;
	printf("Digite p para permutacao, a para arranjo ou c para combinacao:\n");
	scanf("%c", &escolha);
	switch(escolha){
		case 'p':
			printf("Escolhar um valor n para a permutacao:\n");
			scanf("%d", &n);
			per = permutacao(n);
			printf("A permutacao de %d elementos eh: %d\n", n, per);
			break;
		case 'a':
			printf("Escolhar dois valores n e p para o arranjo:\n");
			scanf("%d%d", &n, &p);
			arr = arranjo(n, p);
			printf("O arranjo de %d elementos tomados %d a %d eh: %d\n", n, p, p, arr);
			break;
		case 'c':
			printf("Escolhar dois valores n e p para a combinacao:\n");
			scanf("%d%d", &n, &p);
			com = combinacao(n, p);
			printf("A combinacao de %d elementos tomados %d a %d eh: %d\n", n, p, p, com);
			break;
		default:
			printf("INVALIDO");				
	}
	return 0;
}
