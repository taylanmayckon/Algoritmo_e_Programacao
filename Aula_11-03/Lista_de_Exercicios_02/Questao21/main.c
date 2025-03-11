#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void disp_valores(int *NP1, int *NP2, int *NP3){
	
}


int main(int argc, char *argv[]) {
	int N=0, NP1, NP2, NP3, i, IMC;
	float ALT[80], PESO[80];
	
	do{
		printf("Informe o numero de atletas [5,80]: ");
		scanf("%d", &N);
	} while(N<5 || N>80);
	
	for(i=0; i<N; i++){
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		printf("Altura do Atleta %d", i+1);
		scanf("%f", &ALT[i]);
		printf("Peso do Atleta %d", i+1);
		scanf("%f", &PESO[i]);
		
		IMC = peso/(altura*altura);
		if(IMC<18.5){
			NP1++;
		}
		else if(IMC<25){
			NP2++;
		}
		else{
			NP3++;
		}
	}
	
	disp_valores(NP1, NP2, NP3);
	
	return 0;
}
