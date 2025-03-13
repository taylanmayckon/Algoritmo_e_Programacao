#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char player1[100], player2[100];
	int palitos_count = 21, quantidade_selecionada, ganhador, i;
	bool flag = false;
	
	printf("Nome do Jogador 1: ");
	fflush(stdin);
	fgets(player1, 100, stdin);
	fflush(stdin);	
	
	printf("Nome do Jogador 2: ");
	fflush(stdin);
	fgets(player2, 100, stdin);
	fflush(stdin);	
	
	do{
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
		printf("Palitos disponiveis:\n");
		for(i=0; i<palitos_count; i++){
			printf("I");
		}
		printf("\n");
		
		do{
			printf("JOGADOR 1: Quantos palitos quer remover (1 a 3)? ");
			scanf("%d", &quantidade_selecionada);
		}while(quantidade_selecionada<1 || quantidade_selecionada > 3);
		
		palitos_count-=quantidade_selecionada;
		
		if(palitos_count<0){
			ganhador=2;
			flag = true;
		}
		
		do{
			printf("JOGADOR 2: Quantos palitos quer remover (1 a 3)? ");
			scanf("%d", &quantidade_selecionada);
		}while(quantidade_selecionada<1 || quantidade_selecionada > 3);
		
		palitos_count-=quantidade_selecionada;
		
		if(palitos_count<0 && !flag){
			ganhador=1;
		}
		
	} while(palitos_count>0);
	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	if(ganhador==1){
		printf("O ganhador foi: %s", player1);
	}
	else{
		printf("O ganhador foi: %s", player2);
	}
	
	return 0;
}
