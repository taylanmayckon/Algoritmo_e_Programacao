#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m=0, i, j;
	char cidades[10][100];
	
	do{
		printf("Informe a quantidade de cidades [2,10]: ");
		scanf("%d", &m);
	} while(m<2 || m>10);
	
	float distancias[m][m];
	
	
	
	return 0;
}
