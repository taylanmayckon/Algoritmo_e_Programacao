#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void pesquisa(){
	int n=0, i, limpos=0, index_mais_mandatos, valor_mais_mandatos=0;
	do{
		printf("Informe a quantidade de politicos: ");
		scanf("%d", &n);
	}while(n<1);
	
	int registros[n];
	char estado[n][3];
	int mandatos[n];
	
	for(i=0; i<n; i++){
		printf("Digite o numero de registro: ");
		scanf("%d", &registros[i]);
		printf("Digite os 2 caracteres do estado: ");
		fflush(stdin);
		gets(estado[i]);
		fflush(stdin);
		
		printf("Ha algum mandato de prisao [1: Sim - 0: Nao]?  ");
		scanf("%d", &mandatos[i]);
		if(mandatos[i]==1){
			printf("Ligue para 190\n");
			if(valor_mais_mandatos < mandatos[i]){
				valor_mais_mandatos = mandatos[i];
				index_mais_mandatos=i;
			}
		}
		else{
			limpos++;
		}
	}
	
	printf("ESTATISTICAS: \n");
	printf("O politico %d e o que tem mais processos\n", index_mais_mandatos+1);
	printf("Porcentagem de sem processos criminais: %.2f%%\n", (float)100*limpos/n);
	
}


int main(int argc, char *argv[]) {
	int flag = 1;
	
	do{
		pesquisa();
		printf("\n");
		printf("Deseja continuar a pesquisa [1: Sim - 0: Nao]? ");
		scanf("%d", &flag);
	} while(flag==1);
	
	
	return 0;
}
