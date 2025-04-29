#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int calc_potencia(int base, int expoente){
	if(expoente==1){
		return base;
	}
	return base*calc_potencia(base, expoente-1);
}


int main(int argc, char *argv[]) {
	int base, expoente, valor;
	
	printf("Informe a base:");
	scanf("%d", &base);
	printf("Informe o expoente:");
	scanf("%d", &expoente);
	
	valor = calc_potencia(base, expoente);
	
	printf("%d elevado a %d e: %d", base, expoente, valor);
	
	return 0;
}
