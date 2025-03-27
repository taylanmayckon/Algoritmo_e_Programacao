#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char n[100], nP[100], r;
	int p, v, gPro, gCon, s, sP, pP=-1, vP, i;
	bool troca;
	
	do{
		troca=false;
		printf("Digite o nome da selecao: ");
		
		fflush(stdin);
		fgets(n, 100, stdin);
		fflush(stdin);
		
		printf("Digite a quantidade de pontos, vitorias, gols a favor e contra da selecao %s", n);
		scanf("%d %d %d %d", &p, &v, &gPro, &gCon);
		s=gPro-gCon;
		
		printf("%d pontos, %d vitorias e um saldo de %d gols para %s", p, v, s, n);
		
		if(p>pP){
			troca=true;
		} 
		else if(p==pP){
			if(v>vP){
				troca = true;
			} 
			else if(v==vP){
				if(s>sP){
					troca=true;
				}
			}
		}
		
		if(troca){
			pP=p;
			sP=s;
			vP=v;
			for(i=0; i<100; i++){
				nP[i]=n[i];
				if(nP[i]=='\0'){
					break;
				}
			}
		}
		
		do{
			printf("Deseja cadastar informacoes de outra selecao (S/N)? ");
			scanf("%c", &r);
		} while(r!='S' || r!='N');
		
	} while(r=='N');
	
	if(pP!=-1){
		printf("Dados do vencedor:\n");
		printf("Pontos\tVitorias\tSaldo\n");
		printf("%d\t%d\t%d\t%s", pP, vP, sP, n);
	}
	else{
		printf("Nenhuma selecao cadastrada!");
	}
	return 0;
}
