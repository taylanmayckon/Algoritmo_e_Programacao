#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N=0, d1, d2, soma;
	float raiz;
	
	do{
		printf("Digite o valor de N: ");
		scanf("%d", &N);
	} while(N<999 && N>9999);
	
	
	d1 = N/100;
	d2 = N%100;
	soma = d1+d2;
	raiz = sqrt(N);
		
	if(soma == raiz){
		printf("A raiz quadrada de 'N' e igual a soma de suas dezenas.");
	}
	else{
		printf("A raiz quadrada de 'N' e diferente a soma de suas dezenas.");
	}
	
	return 0;
}
