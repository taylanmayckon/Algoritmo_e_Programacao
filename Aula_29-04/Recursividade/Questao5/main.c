#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void print_reverse(char *string, int tamanho){
	if(tamanho==0){
		return 0;
	}
	printf("%c", string[tamanho-1]);
	print_reverse(string, tamanho-1);
}

int main(int argc, char *argv[]) {
	char string[30];
	
	printf("Digite uma palavra de ate 30 caracteres: ");
	fflush(stdin);
	fgets(string, 30, stdin);
	fflush(stdin);
	
	print_reverse(string, 30);
	
	return 0;
}
