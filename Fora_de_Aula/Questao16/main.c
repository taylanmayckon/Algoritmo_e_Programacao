#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t=0, i, j;
	char nomes[20][100];
	float limite, tempos[20][3], menor_tempo;
	bool nenhum_atleta = true;
	
	
	printf("Informe o numero de participantes (Entre 2 e 20): ");
	scanf("%d", &t);
	
	while(t<2 || t>20){
		printf("ERRO! Digite o numero de participantes corretamente (Entre 2 e 20): ");
		scanf("%d", &t);
	}
	
	// Entradas de nome para cada atleta
	printf("=-=-= NOME DOS ATLETAS\n");
	for(i=0; i<t; i++){
		printf("Nome do Atleta %d: ", i+1);
		fflush(stdin);
		fgets(nomes[i], 100, stdin);
		fflush(stdin);
	}
	
	printf("Informe o TEMPO MAXIMO para CLASSIFICACAO (em segundos): ");
	scanf("%f", &limite);
	
	// Entradas de tempo para cada atleta
	for(i=0; i<t; i++){
		printf("=-=-= Tempos De %s", nomes[i]);
		for(j=0; j<3; j++){
			printf("Tempo %d (em segundos): ", i+1);
			scanf("%f", &tempos[i][j]);
		}
	}
	
	// Verificação dos atletas classificados
	printf("=-=-= Lista de Atletas Classificados\n");
	printf("Tempo (s)\tAtleta\n");
	for(i=0; i<t; i++){
		menor_tempo = 300;
		for(j=0; j<3; j++){
			if(tempos[i][j] <= limite){ // Detecta tempos inferiores ao limite
				if(nenhum_atleta){ // Desativa a flag caso nao tenha nenhum atleta
					nenhum_atleta = !nenhum_atleta;
				}
				menor_tempo = tempos[i][j];
			}
		}
		
		if(menor_tempo<limite){
			printf("%.3fs\t\t%s", menor_tempo, nomes[i]);
		}
	}
	
	if(nenhum_atleta){
		printf("Nao ha nenhum atleta classificado.");
	}
	
	return 0;
}
