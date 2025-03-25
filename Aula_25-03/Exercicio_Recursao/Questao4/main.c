#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int CalcPotencia(int base, int expoente){
	if(expoente==0){
		return 1;
	}
	else{
		return base*CalcPotencia(base, expoente-1);
	}
}


int main(int argc, char *argv[]) {
	int base, expoente;
	
	printf("Informe a base: ");
	scanf("%d", &base);
	printf("Informe o expoente: ");
	scanf("%d", &expoente);
	
	int potencia = CalcPotencia(base, expoente);
	printf("A potencia entre os dois e: %d", potencia);
	
	return 0;
}
