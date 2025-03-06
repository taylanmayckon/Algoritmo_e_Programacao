#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int duplicate_number(int number){
	return 2*number;
}

int main(int argc, char *argv[]) {
	int entrada;
	printf("Informe o numero a ser dobrado: ");
	scanf("%d", &entrada);
	int entrada_dobrada = duplicate_number(entrada);
	printf("O dobro de %d eh %d", entrada, entrada_dobrada);
	return 0;
}
