#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nP=21, dispP, qtRetirar, ultJog=1, i;
	char n1[100], n2[100];
	
	printf("Digite o nome do jogador 1: ");
	fflush(stdin);
	fgets(n1, 100, stdin);
	fflush(stdin);
	
	printf("Digite o nome do jogador 2: ");
	fflush(stdin);
	fgets(n2, 100, stdin);
	fflush(stdin);
	
	while(nP!=0){
		while(ultJog==1 || nP==0){
			for(i=0; i<nP; i++){
				printf("I");
			}
			
			dispP=nP;
			if(dispP>3){
				dispP=3;
			}
			while(qtRetirar<=0 && qtRetirar>dispP){
				printf("\nQuantos palitos deseja remover jogador %d: ", 1-dispP);
				scanf("%d", qtRetirar);
			}
			
			nP=nP-qtRetirar;
			if(nP>0){
				if(ultJog==1){
					ultJog=2;
				}
				else{
					ultJog=1;
				}
			}
		}
	}
	
	if (ultJog==1){
		printf("O vencedor da partida foi: %s", n2);
	}
	else{
		printf("O vencedor da partida foi: %s", n1);
	}
	
	return 0;
}
