#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void diagonal_principal(float input_matrix[300][300], int max){
	int i;
	
	printf("{");
	for(i=0; i<max; i++){
		if(i<max-1){
			printf("%.2f, ", input_matrix[i][i]);
		}
		else{
			printf("%.2f}\n", input_matrix[i][i]);
		}
	}
}

void print_matriz(float input_matrix[300][300], int lines, int cols, int multi, int soma){
	int i, j;
	
	printf("{");
	
	for(i=0; i<lines; i++){
		printf("{");
		for(j=0; j<cols; j++){
			if(j<cols-1){
				printf("%.2f,\t", input_matrix[i][j]*multi + soma);
			} 
			else if(j==cols-1 && i<lines-1){
				printf("%.2f},\n", input_matrix[i][j]*multi + soma);
			}
			else{
				printf("%.2f}", input_matrix[i][j]*multi + soma);
			}
		}
	}
	printf("}\n");
}

void matriz_transposta(float input_matrix[300][300], int lines, int cols){
	int i, j;
	
	printf("Matriz transposta: \n");
	printf("{");
	
	for(i=0; i<cols; i++){
		printf("{");
		for(j=0; j<lines; j++){
			if(j<lines-1){
				printf("%.2f,\t", input_matrix[j][i]);
			} 
			else if(j==lines-1 && i<cols-1){
				printf("%.2f},\n", input_matrix[j][i]);
			}
			else{
				printf("%.2f}", input_matrix[j][i]);
			}
		}
	}
	printf("}\n");
}


int main(int argc, char *argv[]) {
	int m=0, n=0, i, j, choice=0, escalar;
	float matriz[300][300];
	
	do{
		printf("Digite o valor de linhas [2,300]: ");
		scanf("%d", &m);
	} while(m<2 || m>300);
	do{
		printf("Digite o valor de colunas [2,300]: ");
		scanf("%d", &n);
	} while(n<2 || n>300);	
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("Informe o valor [%d][%d]: ", i, j);
			scanf("%f", &matriz[i][j]);
		}
	}	
	
	while(choice!=5){
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
		printf("O que deseja fazer?\n");
		printf("1. Imprimir a diagonal principal\n");
		printf("2. Imprimir a matriz transposta\n");
		printf("3. Imprimir a matriz multiplicada por um escalar\n");
		printf("4. Imprimir a matriz somada por um escalar\n");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				if(m==n){
					diagonal_principal(matriz, m);
				} else{
					printf("(ERRO) Matriz nao e quadrada!\n");
				}
				break;
			case 2:
				matriz_transposta(matriz, m, n);
				printf("\n");
				printf("Matriz original: \n");
				print_matriz(matriz, m, n, 1, 0);
				break;
			case 3:
				printf("Informe o valor do escalar: ");
				scanf("%d", &escalar);
				printf("Matriz multiplicada por %d: \n", escalar);
				print_matriz(matriz, m, n, escalar, 0);
				printf("\n");
				printf("Matriz original: \n");
				print_matriz(matriz, m, n, 1, 0);
				break;
			case 4:
				printf("Informe o valor do escalar: ");
				scanf("%d", &escalar);
				printf("Matriz somada por %d: \n", escalar);
				print_matriz(matriz, m, n, 1, escalar);
				printf("\n");
				printf("Matriz original: \n");
				print_matriz(matriz, m, n, 1, 0);
				break;
		}
	}
	
	return 0;
}
