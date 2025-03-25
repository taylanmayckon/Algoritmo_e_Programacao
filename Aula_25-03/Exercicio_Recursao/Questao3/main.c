#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int CalcFibonacci(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return CalcFibonacci(n-1) + CalcFibonacci(n-2);
	}
}


int main(int argc, char *argv[]) {
	int n, fibonacci;
	
	printf("Informe o valor de n: ");
	scanf("%d", &n);
	
	fibonacci = CalcFibonacci(n);
	printf("O n-esimo termo e: %d", fibonacci);
	
	return 0;
}
