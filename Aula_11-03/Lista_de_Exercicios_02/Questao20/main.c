#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void DOBRAVETOR(int *input, int size){
	int i; 
	
	for(i=0; i<size; i++){
		input[i] *= 2;
	}
}

void print_vetor(int *input, int size){
	int i;
	
	printf("{");
	for(i=0; i<size; i++){
		if(i==size-1){
			printf("%d}\n", input[i]);
		}
		else{
			printf("%d, ", input[i]);
		}
	}
}

int main(int argc, char *argv[]) {
	int vetor[4], i;
	
	for(i=0; i<4; i++){
		printf("Informe o valor %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	DOBRAVETOR(vetor, 4);
	print_vetor(vetor, 4);
	DOBRAVETOR(vetor, 4);
	print_vetor(vetor, 4);
	
	return 0;
}
