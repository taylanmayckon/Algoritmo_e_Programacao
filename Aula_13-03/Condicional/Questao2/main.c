#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dia1=0, mes1=0, ano1=-1, dia2=0, mes2=0, ano2=-1;
	
	do{
		printf("Informe o dia da PRIMEIRA data: ");
		scanf("%d", &dia1);
	} while(dia1<1 || dia1>31);
	do{
		printf("Informe o mes (em numeros) da PRIMEIRA DATA: ");
		scanf("%d", &mes1);
	} while(mes1<1 || mes1>12);
	do{
		printf("Informe o ano da PRIMEIRA data: ");
		scanf("%d", &ano1);
	} while(ano1<0 || ano1>2011);
	
	do{
		printf("Informe o dia da SEGUNDA data: ");
		scanf("%d", &dia2);
	} while(dia2<1 || dia2>31);
	do{
		printf("Informe o mes (em numeros) da SEGUNDA DATA: ");
		scanf("%d", &mes2);
	} while(mes2<1 || mes2>12);
	do{
		printf("Informe o ano da PRIMEIRA data: ");
		scanf("%d", &ano2);
	} while(ano2<0 || ano2>2011);
	
	if(ano1>ano2){
		printf("A maior data e %d/%d/%d", dia1, mes1, ano1);
	} else if(ano2>ano1){
		printf("A maior data e %d/%d/%d", dia2, mes2, ano2);
	} else if(mes1>mes2){
		printf("A maior data e %d/%d/%d", dia1, mes1, ano1);
	} else if(mes2>mes1){
		printf("A maior data e %d/%d/%d", dia2, mes2, ano2);
	} else if(dia1>dia2){
		printf("A maior data e %d/%d/%d", dia1, mes1, ano1);
	} else if(dia2>dia1){
		printf("A maior data e %d/%d/%d", dia2, mes2, ano2);
	}
	
	
	return 0;
}
