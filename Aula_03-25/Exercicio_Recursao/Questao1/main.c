#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
calcFatorial(n){
	float fat = 1;
	if(n==0){
		return fat;
	}
	else{
		return n*calcFatorial(n-1);
	}
}


int main(int argc, char *argv[]) {
	int n, fatorial;
	
	printf("Informe o numero para calcular o fatorial: ");
	scanf("%d", &n);
	
	fatorial = calcFatorial(n);
	printf("O fatorial de %d e: %d", n, fatorial);
	
	return 0;
}
