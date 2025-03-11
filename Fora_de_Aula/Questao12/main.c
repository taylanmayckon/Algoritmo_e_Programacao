#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print_lines(int quant){
	int i;
	
	for(i=0; i<quant; i++){
		printf("=");
	}
	printf("\n");
}

int main(int argc, char *argv[]) {
	int N=0, i, j, soma, valor_lido;
	
	printf("Informe o valor de N (entre 3 e 10): ");
	scanf("%d", &N);
	
	while(N<3 || N>10){
		printf("ERRO! Insira um valor valido (entre 3 e 10): ");
		scanf("%d", &N);
	}
	
	int matrix[N][N];
	
	for(i = 0; i<N; i++){
		for(j=0; j<N; j++){
			printf("Informe o valor [%d][%d]: ", i, j);
			scanf("%d", &valor_lido);
			
			if(valor_lido<0){
				valor_lido = 0;
			}
			if(i==j){
				soma+=valor_lido;
			}
			
			matrix[i][j] = valor_lido;	
		}
	}
	
	printf("A soma da diagonal principal eh: %d\n", soma);
	
	print_lines(11);
	printf("{");
	for(i=0; i<N; i++){
		if(i==0){
			printf("{");
		}
		else{
			printf(" {");
		}
		
		for(j=0; j<N; j++){
			if(j==2 && i==2){
				printf("%d}", matrix[i][j]);
			}
			else if(j==2){
				printf("%d},\n", matrix[i][j]);
			}
			else{
				printf("%d, ", matrix[i][j]);
			}
		}
	}
	printf("}\n");
	print_lines(11);
	
	return 0;
}
