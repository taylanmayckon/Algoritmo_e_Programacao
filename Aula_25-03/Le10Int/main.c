#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, vetor[10];
	
	for(i=0; i<10; i++){
		printf("Informe o valor %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	printf("Os numeros inseridos foram:\n");
	printf("{");
	for(i=0; i<10; i++){
		if(i<10-1){
			printf("%d, ", vetor[i]);
		}
		else{
			printf("%d}\n", vetor[i]);
		}
	}
	
	return 0;
}
