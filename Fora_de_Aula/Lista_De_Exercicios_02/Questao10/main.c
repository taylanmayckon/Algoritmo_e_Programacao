#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N=0, i;
	float Peso[1000], media_peso, maior_peso=0.0, menor_peso=100000000.0, total_arrecadado, total_peso;	
	
	printf("Informe a quantidade de vendas do dia (Minimo 10 | Maximo 1000): ");
	scanf("%d", &N);
	
	while(N<10 || N>1000){
		printf("Informe um valor valido (Minimo 10 | Maximo 1000): ");
		scanf("%d", &N);
	}
	
	printf("Agora informe os pesos de cada venda (Em kg):\n");
	for(i = 0; i<N; i++){
		printf("Peso da venda %d: ", i+1);
		scanf("%f", &Peso[i]);
		total_peso += Peso[i];
		
		// Pegando o menor e maior peso inicial, para comparações
		if(i==0){
			menor_peso = Peso[i];
			maior_peso = Peso[i];
		}
		
		// Atualizando maior e menor peso
		if(i>0){
			// Pegando o menor
			if(Peso[i] <= menor_peso){
				menor_peso = Peso[i];
			}
			
			// Pegando o maior
			if(Peso[i] >= maior_peso){
				maior_peso = Peso[i];
			}
		}
	}
	
	total_arrecadado = 4.35*total_peso;
	
	printf("======================\n");
	printf("Peso medio das vendas: %.2f kg\n", total_peso/N);
	printf("Maior peso: %.2f | Menor peso: %.2f kg\n", maior_peso, menor_peso);
	printf("Arrecadacao total: R$ %.2f\n", total_arrecadado);
	
	return 0;
}
