#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fib(int n){
	if(n==1){
		return 1;
	}
	if(n==2){
		return 1;
	}
	return fib(n-1)+fib(n-2);
}


int main(int argc, char *argv[]) {
	int entrada, valor;
	
	printf("Informe a entrada: ");
	scanf("%d", &entrada);
	
	valor = fib(entrada);
	printf("O %d-esimo termo e: %d", entrada, valor);
	
	return 0;
}
