#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t = 0, i, j, count_classificados=0, flag;
	float menor_tempo, limite;
	
	do{
		printf("Informe o numero de participantes [2,20]: ");
		scanf("%d", &t);
	}while(t<2 || t>20);
	
	char atletas[t][30];
	float tempos[t][3];
	
	for(i=0; i<t; i++){
		printf("Informe o nome do Atleta %d: ", i+1);
		fflush(stdin);
		fgets(atletas[t], 30, stdin);
		fflush(stdin);
	}
	
	printf("Informe o limite de tempo (em segundos): ");
	scanf("%f", &limite);
	
	for(i = 0; i<t; i++){
		for(j=0; j<3; j++){
			printf("ATLETA %d - TEMPO %d: ", i+1, j+1);
			scanf("%f", &tempos[i][j]);
		}
		printf("\n");
	}
	
	printf("LISTA DE CLASSIFICADOS - TEMPO LIMITE DE %.2fs\n", limite);
	printf("TEMPO\tATLETA\n");
	for(i=0; i<t; i++){
		flag=0;
		for(j=0; j<3; j++){
			if(tempos[i][j]<=limite){
				menor_tempo=tempos[i][j];
				flag=1;
			}
		}
		if(flag==1){
			printf("%.2fs\t", menor_tempo);
			printf("%s\n", atletas[i]);
			count_classificados++;
		}
	}
	
	if(count_classificados==0){
		printf("NENHUM CLASSIFICADO!");
	}
	
	return 0;
}
