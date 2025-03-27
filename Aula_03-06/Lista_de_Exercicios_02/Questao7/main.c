#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nomes[5][21];
	int i = 0;
	
	while(i<5){
		printf("Informe o nome %d: ", i+1);
		fflush(stdin);
		fgets(nomes[i], 21, stdin);
		i++;
	}
	
	i=0;
	while(i<5){
		printf("%d - ", i+1);
		fflush(stdin);
		printf("%s", nomes[i]);
		i++;
	}
	
	return 0;
}
