#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct{
	char nome[30];
	int pontos;
	int vitorias;
	int gols_realizados;
	int gols_sofridos;
} Selecoes;


int main(int argc, char *argv[]) {
	int i=0, j;
	char continua='S';
	Selecoes entradas[100]; // Max de 100 valores
	Selecoes vencedor;
	vencedor.pontos=0;
	
	while(i<100 && continua=='S'){
		printf("-> SELECAO %d:\n", i+1);
		printf("Nome da selecao: ");
		fflush(stdin);
		fgets(entradas[i].nome, 30, stdin);
		fflush(stdin);
		printf("Quantidade de pontos: ");
		scanf("%d", &entradas[i].pontos);
		printf("Quantidade de vitorias: ");
		scanf("%d", &entradas[i].vitorias);
		printf("Quantidade de gols realizados: ");
		scanf("%d", &entradas[i].gols_realizados);
		printf("Quantidade de gols sofridos: ");
		scanf("%d", &entradas[i].gols_sofridos);
		
		if(vencedor.pontos<entradas[i].pontos){
			vencedor=entradas[i];
		}
		else if(vencedor.pontos==entradas[i].pontos){
			if(vencedor.vitorias<entradas[i].vitorias){
				vencedor=entradas[i];
			}
			else if(vencedor.gols_realizados-vencedor.gols_sofridos<entradas[i].gols_realizados-entradas[i].gols_sofridos){
				vencedor=entradas[i];
			}
		}
		
		do{
			printf("Deseja continuar? [S | N] ");
			fflush(stdin);
			scanf(" %c", &continua);
		}while(continua!='S' && continua!='N');
		printf("\n\n");
		i++;
	}
	
	printf("-> TABELA DE RESULTADOS:\n");
	printf("Pontos\tVitorias\tGols Realizados\tGols Sofridos\tSelecao\n");
	for(j=0; j<i; j++){
		printf("%d\t%d\t\t%d\t\t%d\t\t%s", entradas[j].pontos, entradas[j].vitorias, entradas[j].gols_realizados, entradas[j].gols_sofridos, entradas[j].nome);
	}
	
	printf("\n\n-> VENCEDOR\n");
	printf("Pontos\tVitorias\tGols Realizados\tGols Sofridos\tSelecao\n");
	printf("%d\t%d\t\t%d\t\t%d\t\t%s\n", vencedor.pontos, vencedor.vitorias, vencedor.gols_realizados, vencedor.gols_sofridos, vencedor.nome);
	
	return 0;
}
