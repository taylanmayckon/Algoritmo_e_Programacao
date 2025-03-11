#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N=0, i, j=0, contador_classificados=0;
	char NOME[1000][30], *CLAS[1000];
	float NOTAP[1000], NOTAM[1000], NOTACG[1000], MEDIA[1000], pontuacao_classificados=0, media_classificados;
	
	printf("Informe a quantidade de candidatos (Entre 10 e 1000): ");
	scanf("%d", &N);
	
	while(N<10 || N>1000){
		printf("ERRO! Informe uma quantidade valida (Entre 10 e 1000): ");
		scanf("%d", &N);
	}
	
	for(i=0; i<N; i++){
		printf("=-=-= Leituras do CANDIDATO %d\n", i+1);
		printf("Nome: ");
		fflush(stdin);
		fgets(NOME[i], 30, stdin);
		fflush(stdin);
		printf("Nota de Portugues: ");
		scanf("%f", &NOTAP[i]);
		printf("Nota de Matematica: ");
		scanf("%f", &NOTAM[i]);
		printf("Nota de Conhecimentos Gerais: ");
		scanf("%f", &NOTACG[i]);
		
		if((NOTAP[i]*2+NOTAP[i]*3+NOTACG[i])/6 >= 7.0){
			MEDIA[j] = (NOTAP[i]*2+NOTAP[i]*3+NOTACG[i])/6;
			CLAS[j] = NOME[i];
			contador_classificados++;
			pontuacao_classificados+=MEDIA[j];
			j++;
		}
	}
	
	printf("=-=-= Relacao classificados com media acima da media geral\n");
	if(contador_classificados==0){
		printf("Nenhum candidato foi classificado!");
	}
	else{
		media_classificados=pontuacao_classificados/contador_classificados;
		
		printf("Media\tNome\n");
		for(i=0; i<contador_classificados; i++){
			if(MEDIA[i]>=media_classificados){
				printf("%.2f\t%s", MEDIA[i], CLAS[i]);
			}
		}
	}
	
	return 0;
}
