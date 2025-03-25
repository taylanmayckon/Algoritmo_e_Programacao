#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int SomaNaturais(int n){
	if(n==0){
		return n;
	}
	else{
		return n+SomaNaturais(n-1);
	}
}

int main(int argc, char *argv[]) {
	int n, soma;
	printf("Informe o valor de n: ");
	scanf("%d", &n);
	
	soma = SomaNaturais(n);
	printf("A soma de 0 a %d e: %d", n, soma);
	
	return 0;
}
