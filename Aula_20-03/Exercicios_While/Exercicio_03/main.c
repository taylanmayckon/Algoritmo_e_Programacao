#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=-1, k=0, l=0, i;
	float m=0.0, p=0.0, a0, a1;
	
	do{
		printf("Informe a quantidade de cotacoes: ");
		scanf("%d", &n);
	}while(n<1);
	
	float cotacoes[n];
	
	printf("Agora as informe em ordem cronologica:\n");
	for(i=0; i<n; i++){
		printf("COTACAO %d: ", i+1);
		scanf("%f", &cotacoes[i]);
	}
	
	for(i=0; i<n; i++){
		k+=(i*i);
		l+=i;
		m+=cotacoes[i];
		p+=cotacoes[i]*i;
	}
	
	a0=((m*k)-(l*p))/((n*k)-(l*l));
	a1=((n*p)-(m*l))/((n*k)-(l*l));
	
	if(a1<0){
		printf("T(x) = %.3f %.3f x", a0, a1);
	}
	else{
		printf("T(x) = %.3f +%.3f x", a0, a1);
	}
	
	return 0;
}
