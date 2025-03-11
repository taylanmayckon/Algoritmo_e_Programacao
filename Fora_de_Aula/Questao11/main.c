#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print_matrix(int matrix_values[3][3]){
	int i=0, j=0;
	
	printf("=================================\n");
	printf("{");
	for(i=0; i<3; i++){
		printf("{");
		for(j=0; j<3; j++){
			if(j==2 && i==2){
				printf("%d}}\n", matrix_values[i][j]);
			}
			else if(j==2){ // Nova linha
				printf("%d}, ", matrix_values[i][j]);
			}
			else{
				printf("%d, ", matrix_values[i][j]);
			}
		}
	}
	printf("=================================\n");
}


int main(int argc, char *argv[]) {
	int matrix[3][3], i, j, k;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Informe o valor [%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	print_matrix(matrix);
	
	printf("Informe o valor do multiplicador (inteiro): ");
	scanf("%d", &k);
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			matrix[i][j] *= k;
		}
	}
	
	print_matrix(matrix);
	
	return 0;
}
