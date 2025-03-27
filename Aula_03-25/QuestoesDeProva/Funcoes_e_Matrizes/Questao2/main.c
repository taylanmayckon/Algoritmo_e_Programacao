#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void preencher(int matriz[3000][3000], int max){
	int i, j;
	
	printf("=-=-=-=-=-=-=-=-= PREENCHA OS RESULTADOS =-=-=-=-=-=-=-=-=\n");
	printf("-1 (derrota), 0 (empate), 1 (vitoria)\n");
	for(i=1; i<max; i++){
		for(j=0; j<i; j++){
			printf("Resultado do atleta %d contra o atleta %d: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
}


int main(int argc, char *argv[]) {
	int m[3000][3000], n;
	char nomes[30][30];
	printf("Digite a quantidade de atletas: ");
	scanf("%d", &n);
	
	preencher(m, n);
	return 0;
}
