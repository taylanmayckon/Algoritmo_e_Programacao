#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float media(int *values, int size){
	int i;
	int sum=0;
	for(i=0; i<size; i++){
		sum+=values[i];
	}
	
	return (float)sum/size;
}

float mediana(int *values, int size){
	if(size%2==1){
		return values[(size-1)/2];
	}
	else{
		return (float)(values[size/2] + values[(size/2)-1])/2;
	}
}


int main(int argc, char *argv[]) {
	int n=0, i, pares=0, impares=0;
	
	do{
		printf("Informe o tamanho do vetor [5,200]: ");
		scanf("%d", &n);
	}while(n<5 || n>200);
	
	int vetor[n];
	
	for(i=0; i<n; i++){
		printf("Informe o valor %d: ", i+1);
		scanf("%d", &vetor[i]);
		if(vetor[i]%2==0){
			pares++;
		}else{
			impares++;
		}
	}
	
	float mean = media(vetor, n);
	printf("MEDIA: %.2f\n", mean);
	printf("MEDIANA: %.2f\n", mediana(vetor, n));
	printf("IMPARES: %d\n", impares);
	printf("PARES: %d", pares);
	
	return 0;
}
