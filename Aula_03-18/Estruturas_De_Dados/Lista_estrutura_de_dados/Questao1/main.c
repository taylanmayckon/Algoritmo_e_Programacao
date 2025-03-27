#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=0, i, pares=0, impares=0, mediana_index, soma=0;
	float media, mediana;
	
	do{
		printf("Informe o tamanho do vetor [5,200]: ");
		scanf("%d", &n);
	} while(n<5 || n>200);
	int vetor[n];
	
	for(i=0; i<n; i++){
		printf("Digite o valor %d: ", i+1);
		scanf("%d", &vetor[i]);
		
		soma+=vetor[i];
		
		if(vetor[i]%2 == 0 && vetor[i] != 0){
			pares++;
		} else if(vetor[i]%2 != 0 && vetor[i] != 0){
			impares++;
		}
	}
	
	if(n%2 == 0){
		mediana_index = n/2;
		mediana = (float)(vetor[mediana_index] + vetor[mediana_index-1])/2;
	} else{
		mediana_index = (n-1)/2;
		mediana = vetor[mediana_index];
	}
	
	media = (float)soma/n;
	
	printf("=-=-=-=-=-=-=-=-\n");
	printf("Media: %.2f\n", media);
	printf("Mediana: %.2f\n", mediana);
	printf("Impares: %d\n", impares);
	printf("Pares: %d\n", pares);

	return 0;
}
