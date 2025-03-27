#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float media(int *valores){
	int soma = 0;
	int i = 0;
	while(i<10){
		soma+=valores[i];
		i++;
	}
	
	return (float)soma/10;
}


int main(int argc, char *argv[]) {
	int vetor[10];
	
	int i = 0;
	while(i<10){
		printf("Informe o numero %d: ", i+1);
		scanf("%d", &vetor[i]);
		i++;
	}
	
	float media_vetor = media(vetor);
	printf("A media eh: %.2f\n", media_vetor);
	
	printf("O vetor duplicado eh: [");
	i=0;
	while(i<10){
		vetor[i] = vetor[i]*2;
		if(i==9){
			printf("%d", vetor[i]);
			break;
		}
		printf("%d,", vetor[i]);
		i++;
	}
	printf("]\n");
	
	
	return 0;
}
