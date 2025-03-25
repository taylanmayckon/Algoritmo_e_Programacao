#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const char* inverteString(char *string, int index){
	
}


int main(int argc, char *argv[]) {
	char string[20];
	const char* stringInvertida;
	
	printf("Informe a string: ");
	fflush(stdin);
	fgets(string, 20, stdin);
	fflush(stdin);
	
	stringInvertida = inverteString(string, 0);
	printf("A string invertida e: %s", string);
	
	return 0;
}
