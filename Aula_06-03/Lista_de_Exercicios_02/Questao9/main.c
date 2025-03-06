#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void print_vetor(float *vetor, char letra_vetor){
	int i = 0;
	printf("Vetor %c: [", letra_vetor);
	while(i<5){
		if(i==4){
			printf("%.2f", vetor[i]);
			break;
		}
		printf("%.2f, ", vetor[i]);
		i++;
	}
	printf("]\n");
}

int main(int argc, char *argv[]) {
	float A[5], B[5];
	float S[5] = {0, 0, 0, 0, 0};
	int i, j;
	
	for(i=0; i<5; i++){
		printf("Valor %d do vetor A: ", i+1);
		scanf("%f", &A[i]);
	}
	
	for(i=0; i<5; i++){
		printf("Valor %d do vetor B: ", i+1);
		scanf("%f", &B[i]);
	}
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(A[i] == B[j]){
				S[i] = A[i];
			}
		}
	}
	
	printf("\n");
	print_vetor(A, 'A');
	print_vetor(B, 'B');
	print_vetor(S, 'S');
	
	return 0;
}
