#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char texto[10];
	printf("Digite um texto: ");
	fflush(stdin);
	fgets(texto,10,stdin);
	fflush(stdin);
	printf("Voce digitou: %s\n", texto);
	return 0;
}
