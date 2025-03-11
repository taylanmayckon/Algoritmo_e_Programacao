#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool verifica_digito(int *conta, int DV, int quant_digitos){
	int NP[6] = {1, 2, 3, 5, 7, 11}, i, SP=0, DC;
	
	for(i=0; i<quant_digitos; i++){
		SP += (conta[i]*NP[i]);
	}
	
	DC = SP%9;
	
	if(DC != DV){
		printf("ERRO! DIGITO VERIFICADOR INVALIDO!");
		return false;
	}
	else{
		return true;
	}
}

void print_values(int *vetor, int quant_digitos){
	int i;
	
	for(i=0; i<quant_digitos; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
}


int main(int argc, char *argv[]) {
	int CA[4], CC[6], i, DV, digito_valido;
	
	printf("Digitos do CODIGO DA AGENCIA!\n");
	for(i=0; i<4; i++){
		printf("Digito %d: ", i+1);
		scanf("%d", &CA[i]);
	}
	printf("Informe o DIGITO VERIFICADOR: ");
	scanf("%d", &DV);
	
	// Verificando para Conta da Agencia
	digito_valido = verifica_digito(CA, DV, 4);
	if(digito_valido){
		printf("Digitos do CODIGO DA CONTA!\n");
		for(i=0; i<6; i++){
			printf("Digito %d: ", i+1);
			scanf("%d", &CC[i]);
		}
		printf("Informe o DIGITO VERIFICADOR: ");
		scanf("%d", &DV);
		digito_valido = verifica_digito(CC, DV, 6);
	}
	
	if(digito_valido){
		printf("Foram digitados corretamente!\n");
		
		printf("Digitos da CA: ");
		print_values(CA, 4);
		printf("Digitos da CC: ");
		print_values(CC, 6);
	}
	
	
	return 0;
}
