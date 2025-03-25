#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int dominante(int matriz[3][3]){
	int i, flag;
	
	for(i=0; i<3; i++){
		if(fabs(matriz[i][1]) > fabs(matriz[i][0])+fabs(matriz[i][2])){
			flag=1;
		}
		else{
			return 0;
		}
	}
	return flag;
}

void escalona(int matriz[3][3]){
	int i, j, index, max, temporario;
	
	for(i=0; i<3; i++){
		if(fabs(matriz[0][i]) >= fabs(matriz[2][i])){
			index = 0;
			max = matriz[0][i];
		}
		else{
			index = 2;
			max = matriz[2][i];
		}
		
		if(fabs(matriz[i][i]) < fabs(max)){
			for(j=0; j<3; j++){
				temporario = matriz[i][j];
				matriz[i][j] = matriz[index][j];
				matriz[index][j] = temporario;
			}
		}
	}
}

void imprime(int matriz[3][3]){
	int i, j;
	printf("{");
	for(i=0; i<3; i++){
		if(i==0){
			printf("{");
		}
		else{
			printf(" {");
		}
		for(j=0; j<3; j++){
			if(j==i && j==2){
				printf("%d}", matriz[i][j]);
			}
			else if(j==2){
				printf("%d},\n", matriz[i][j]);
			}
			else{
				printf("%d, ", matriz[i][j]);
			}
		}
	}
	printf("}\n");
}


int main(int argc, char *argv[]) {
	int i, j, matriz[3][3], flag;
	
	printf("Informe os valores da matriz: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Informe o valor Matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	flag = dominante(matriz);
	if(flag){
		imprime(matriz);
	}
	else{
		escalona(matriz);
		imprime(matriz);
	}
	
	return 0;
}
