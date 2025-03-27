#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	
	printf("Informe o valor de x: ");
	scanf("%d", &x);
	
	printf("Informe o valor de y: ");
	scanf("%d", &y);
	
	printf("A soma %d + %d e igual a: %d\n", x, y, x+y);
	
	return 0;
}
