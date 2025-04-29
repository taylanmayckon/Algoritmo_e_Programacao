#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int soma_primeiros(int n){
	if(n==1){
		return n;
	}
	else{
		return n+soma_primeiros(n-1);
	}
}


int main(int argc, char *argv[]) {
	int entrada, soma;
	
	printf("Informe ate onde deseja somar:");
	scanf("%d", &entrada);
	
	soma = soma_primeiros(entrada);
	printf("A soma dos %d primeiros numeros e: %d", entrada, soma);
	return 0;
}
