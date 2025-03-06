#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

incremento(int num){
	num++;
	return num;
}

int main(int argc, char *argv[]) {
	int N;
	
	printf("Informe o numero: ");
	scanf("%d", &N);
	
	printf("Seu incremento eh: %d", incremento(N));
	
	return 0;
}
