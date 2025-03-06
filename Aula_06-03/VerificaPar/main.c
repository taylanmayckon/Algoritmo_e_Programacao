#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int X;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &X);

	if(X%2 == 0){
		printf("Numero par!\n");
	}
	else{
		printf("Nao eh par!\n");
	}
	
	printf("Tchau...");
	
	return 0;
}
