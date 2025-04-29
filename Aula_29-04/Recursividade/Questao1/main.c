#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fat(int n){
	if(n==1){
		return n;
	}
	return n*fat(n-1);
}


int main(int argc, char *argv[]) {
	int entrada, fatorial;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &entrada);
	
	fatorial = fat(entrada);
	printf("O fatorial de %d e: %d", entrada, fatorial);
	
	return 0;
}
