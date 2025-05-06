#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*
Exemplo 2016-1-3EE-struct, onde uma delegacia realiza consulta sobre carrros roubados de uma determinada marca em um ano específico.
*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct{
	int codigo_bo;
	char nome[30];
	int ano_ocorrencia;
	char descricao[100];
} Boletim;

typedef struct{
	int codigo_bo;
	char placa[7];
	char modelo[20];
	int ano_fabricacao;
	char fabricante[10];	
} Carro;

int main(int argc, char *argv[]) {
	int i, j, input_ano_ocorrencia, boletins_encontrados=0;
	char input_fabricante[10];
	Boletim bo[10];
	Carro carro[10];
	
	for(i=0; i<10; i++){
		printf("(%d) Codigo do BO: ", i+1);
		scanf("%d", &bo[i].codigo_bo);
		carro[i].codigo_bo = bo[i].codigo_bo;
		
		printf("(%d) Nome: ", i+1);
		fflush(stdin);
		fgets(bo[i].nome, 30, stdin);
		fflush(stdin);
		
		printf("(%d) Ano de ocorrencia: ", i+1);
		scanf("%d", &bo[i].ano_ocorrencia);
		
		printf("(%d) Descricao do BO: ", i+1);
		fflush(stdin);
		fgets(bo[i].descricao, 100, stdin);
		fflush(stdin);
		
		printf("(%d) Placa do carro: ", i+1);
		fflush(stdin);
		fgets(carro[i].placa, 7, stdin);
		fflush(stdin);
		
		printf("(%d) Modelo do carro: ", i+1);
		fflush(stdin);
		fgets(carro[i].modelo, 20, stdin);
		fflush(stdin);
		
		printf("(%d) Ano de fabricacao: ", i+1);
		scanf("%d", &carro[i].ano_fabricacao);
		
		printf("(%d) Fabricante: ", i+1);
		fflush(stdin);
		fgets(carro[i].fabricante, 10, stdin);
		fflush(stdin);		
	}
	
	printf("\n\n");
	
	printf("(USUARIO) Informe o ANO DE OCORRENCIA: ");
	scanf("%d", &input_ano_ocorrencia);
	printf("(USUARIO) Informe o fabricante do carro: ");
	fflush(stdin);
	fgets(input_fabricante, 10, stdin);
	fflush(stdin);
		
	for(i=0; i<10; i++){
		if(bo[i].ano_ocorrencia == input_ano_ocorrencia){
			for(j=0; j<10; j++){
				if(bo[i].codigo_bo == carro[i].codigo_bo){
					if(strcmp(input_fabricante, carro[i].fabricante) == 0){
						boletins_encontrados++;
					}
				}
			}
		}
	}
	
	if(boletins_encontrados==0){
		printf("Nenhum registo encontrado!\n");
	}
	else{
		printf("%d registros encontrados!\n", boletins_encontrados);
	}
	
	return 0;
}
