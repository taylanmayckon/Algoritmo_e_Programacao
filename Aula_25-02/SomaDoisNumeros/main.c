#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y, soma;
	
	printf("Informe o valor de x: ");
	scanf("%d", &x);
	printf("Informe o valor de y: ");
	scanf("%d", &y);
	
	soma = x+y;
	
	printf("Resultado da soma: %d", soma);
	
	return 0;
}
