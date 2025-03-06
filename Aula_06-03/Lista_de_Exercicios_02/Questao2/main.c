#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int potencia(int base, int expoente){
	int i = 1;
	int resultado = base;
	
	while(i<=expoente-1){
		resultado = resultado*base;
		i++;
	}
	return resultado;
}

int main(int argc, char *argv[]) {
	int X, N;
	printf("Informe a base: ");
	scanf("%d", &X);
	
	printf("Informe o expoente: ");
	scanf("%d", &N);
	
	int resultado = potencia(X, N);
	printf("O resultado da potencia eh: %d", resultado);
	return 0;
}
