#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int dobro(int num){
	return 2*num;
}


int main(int argc, char *argv[]) {
	int N;
	
	printf("Informe a entrada: ");
	scanf("%d", &N);
	
	printf("O resultado eh: %d", dobro(N));
	
	return 0;
}
