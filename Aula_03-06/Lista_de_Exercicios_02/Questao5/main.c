#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int LeVetor(int *entrada){
	int i = 0;
	while(i<3){
		printf("%d", entrada[i]);
		i++;
	}
}

int main(int argc, char *argv[]) {
	int vetor[3];
	int i = 0;
	
	while(i<3){
		printf("Informe o numero %d: ", i+1);
		scanf("%d", &vetor[i]);
		i++;
	}
	
	LeVetor(vetor);
	
	return 0;
}
