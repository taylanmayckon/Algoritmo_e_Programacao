#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int menu_value = 0;
	
	printf("=-=-=-=-=-=-=\n");
	while(menu_value!=3){
		printf("1. Oi\n");
		printf("2. Ola\n");
		printf("3. Tchau\n");
	
		printf("Digite sua entrada: ");
		scanf("%d", &menu_value);
		
		switch(menu_value){
			case 1:
				printf("Oi\n\n");
				break;
			case 2:
				printf("Ola\n\n");
				break;
			case 3:
				printf("Tchau");
				break;
			default:
				printf("(ERRO) Digite uma opcao valida!");
				break;
		}
	}
	
	return 0;
}
