#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int FAT(int num){
	if(num>1){
		num = num * FAT(num-1);
	}
	return num;
}

int main(int argc, char *argv[]) {
	int N;
	bool zero = 1;
	
	while(zero){
		printf("Informe um numero inteiro: ");
		scanf("%d", &N);		
		if(N!=0){
			zero = !zero;
		}
	}
	
	printf("Seu fatorial eh: %d", FAT(N));
	
	return 0;
}
