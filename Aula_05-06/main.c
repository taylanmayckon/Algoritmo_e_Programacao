#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct pessoa {
	char nome[4];
};

struct pessoa salva_noe(struct pessoa p){
	strcpy(p.nome, "ABC");
	return p;
}

int main(int argc, char *argv[]) {
	struct pessoa p;
	strcpy(p.nome, "XYZ");
	p = salva_nome(p);
	printf("%s", p.nome);	
	return 0;
}
