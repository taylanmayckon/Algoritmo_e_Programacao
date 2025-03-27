#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[21];
	float peso, altura;
	
	printf("Informe o seu nome: ");
	fflush(stdin);
	fgets(nome, 21, stdin);
	
	printf("Informe o seu peso: ");
	scanf("%f", &peso);
	
	printf("Informe a sua altura: ");
	scanf("%f", &altura);
	
	float IMC = peso/(altura*altura);	
	fflush(stdin);
	printf("Seu IMC eh: %.2f, %s", IMC, nome);
	
	return 0;
}
