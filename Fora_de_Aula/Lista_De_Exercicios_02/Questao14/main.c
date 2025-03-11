#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float distancias[5][5];
	char cidades[5][20];
	int i, j;
	
	for(i=0; i<5; i++){
		printf("=-=-= CIDADE %d =-=-=\n", i+1);
		printf("Digite o nome da cidade: ", i+1);
		fflush(stdin);
		fgets(cidades[i], 20, stdin);
		fflush(stdin);
		for(j=0; j<5; j++){
			if(j>i){
				printf("Distancia entre ela e a cidade %d (Em km): ", j+1);
				scanf("%f", &distancias[i][j]);
			}
			else{
				distancias[i][j] = 0.0;
			}
		}
	}
	
	printf("{");
	for(i=0; i<5; i++){
		printf("{");
		for(j=0; j<5; j++){
			if(i==4 && j==4){
				printf("%.2f}}\n", distancias[i][j]);
			}
			else if(j==4){
				printf("%.2f},\n", distancias[i][j]);
			}
			else{
				printf("%.2f, ", distancias[i][j]);
			}
		}
	}
	
	return 0;
}
