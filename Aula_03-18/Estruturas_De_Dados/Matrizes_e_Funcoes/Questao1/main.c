#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int insere_nome(char *nome, char lista[100][15], int index){
	int i;
	
	if(strcmp(nome, lista[index]) == 0){
		for(i=0; i<15; i++){
			lista[index][i] = nome[i];
		}
		printf("Nome cadastrado na lista!\n");
		return 1;
	}
	else{
		printf("(ERRO) Nome ja esta na lista!\n");
		return 0;
	}
}

int conta_letra(char letra, char lista[100][15]){
	int count=0, i;
	
	for(i=0; i<100; i++){
		if(lista[i][0] == letra){
			count++;
		}
	}
	
	return count;
}

int main(int argc, char *argv[]) {
	char lista[100][15], entrada[15];
	int count = 0, flag=1, retorno;
	
	while(count<100){
		printf("Informe o nome a ser cadastrado: ");
		fflush(stdin);
		fgets(entrada, 15, stdin);
		fflush(stdin);
		retorno = insere_nome(entrada, lista, count);
		count+=retorno;
		printf("%d\n", count);
		
		printf("Deseja cadatrar mais? [1: Sim | 0: Nao] ");
		scanf("%d", &flag);
	}
	
	
	return 0;
}
