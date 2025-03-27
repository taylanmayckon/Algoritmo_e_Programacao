#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void calcula_confiabilidade(){
	int n=0, i;
	float t=0.0;
	
	do {
		printf("Informe a quantidade de componentes: ");
		scanf("%d", &n);
	} while(n<=0);
	
	do {
		printf("Informe o tempo para o calculo: ");
		scanf("%f", &t);
	} while(t<=0.0);
	
	float mttf[n], componentes[n], confiabilidade=1;
	
	for(i=0; i<n; i++){
		printf("COMPONENTE %d - Tempo medio para falha (mttf): ", i+1);
		scanf("%f", &mttf[i]);
		componentes[i] = pow(2.718, -t/mttf[i]);
		confiabilidade = confiabilidade * componentes[i];
	}
	
	printf("Confiabilidade calculada: %.2f\n\n", confiabilidade);
	printf("\n\n\n");
}


int main(int argc, char *argv[]) {
	int flag = 1;
	calcula_confiabilidade();
	
	do{
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
		printf("Deseja calcular para outro sistema?\n");
		printf("1. Sim\n");
		printf("2. Nao\n");
		scanf("%d", &flag);
		if(flag==1){
			calcula_confiabilidade();
		}
		else if(flag==2){
			break;
		}
		else{
			printf("(ERRO) Entrada invalida!");
		}
		
	} while(flag != 2);
	return 0;
}
