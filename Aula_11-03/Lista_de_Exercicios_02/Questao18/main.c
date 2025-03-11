#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m=0, i, j;
	char cidades[10][100];
	float valor_lido, consumo = 10.0;
	
	do{
		printf("Informe a quantidade de cidades [2,10]: ");
		scanf("%d", &m);
	} while(m<2 || m>10);
	
	float distancias[m][m];
	
	for(i=0; i<m; i++){
		for(j=0; j<m; j++){
			if(j==i){
				distancias[i][j] = 0.0;
			}
			else if(j>i){
				printf("Informe a distancia entre a cidade %d e %d: ", j, j-1);
				scanf("%f", &valor_lido);
				if(valor_lido<0.0){
					distancias[i][j] = 0.0;
				}
				else{
					distancias[i][j] = valor_lido;
					distancias[j][i] = valor_lido;
				}
			}
		}
	}
	
	/*
	printf("{");
	for(i=0; i<m; i++){
		printf("{");
		for(j=0; j<m; j++){
			if(i==m-1 && j==m-1){
				printf("%.2f}", distancias[i][j]);
			}
			else if(j==m-1){
				printf("%.2f},\n", distancias[i][j]);
			}
			else{
				printf("%.2f, ", distancias[i][j]);
			}
		}
	}
	printf("}\n");
	*/
	
	printf("TABELA CONSUMO X CIDADES");
	for(i=0; i<m; i++){
		for(j=0; j<m; j++){
			
		}
	}
	
	return 0;
}
