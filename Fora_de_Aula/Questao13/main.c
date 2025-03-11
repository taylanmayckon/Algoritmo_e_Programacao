#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int COD[5], QUANT[5], i;
	float VAL[5];
	
	for(i=0; i<5; i++){
		printf("=-=-= PRODUTO %d =-=-=\n", i+1);
		printf("Codigo: ");
		scanf("%d", &COD[i]);
		printf("Quantidade: ");
		scanf("%d", &QUANT[i]);
		printf("Valor: ");
		scanf("%f", &VAL[i]);
	}
	
	printf("=-=-= VALORES PATRIMONIAIS =-=-=\n");
	printf("CODIGO\tVALOR\n");
	for(i=0; i<5; i++){
		printf("%d\tR$ %.2f\n", COD[i], QUANT[i]*VAL[i]);
	}
	
	return 0;
}
