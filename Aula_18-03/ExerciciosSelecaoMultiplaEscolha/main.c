#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
	
	printf("O animal e:\n");
	printf("1. Mamifero\n");
	printf("2. Ave\n");
	printf("3. Reptil\n");
	scanf("%d", &choice);
	
	switch(choice){
		// Mamifero
		case 1:
			printf("O animal e:\n");
			printf("1. Quadrupede\n");
			printf("2. Bipede\n");
			printf("3. Voador\n");
			printf("4. Aquatico\n");
			scanf("%d", &choice);
			
			switch(choice){
				// Quadrupede
				case 1:
					printf("O animal e:\n");
					printf("1. Carnivoro\n");
					printf("2. Herbivoro\n");
					scanf("%d", &choice);
					if(choice == 1){
						printf("Entao o animal escolhido foi o LEAO!\n");
					} else{
						printf("Entao o animal escolhido foi o CAVALO\n");
					}
					break;
				// Bipede
				case 2:
					printf("O animal e:\n");
					printf("1. Onivoro\n");
					printf("2. Herbivoro\n");
					scanf("%d", &choice);
					if(choice == 1){
						printf("Entao o animal escolhido foi o HOMEM!\n");
					} else{
						printf("Entao o animal escolhido foi o MACACO\n");
					}
					break;
				// Voador
				case 3:
					printf("Entao o animal escolhido foi o MORCEGO\n");
					break;
				// Aquatico
				case 4:
					printf("Entao o animal escolhido foi a BALEIA\n");
					break;
			}
			break;
		
		// Aves	
		case 2:
			printf("O animal e:\n");
			printf("1. Nao voador\n");
			printf("2. Nadador\n");
			printf("3. De rapina\n");
			scanf("%d", &choice);
			
			switch(choice){
				// Nao voador
				case 1:
					printf("O animal e:\n");
					printf("1. Tropical\n");
					printf("2. Polar\n");
					scanf("%d", &choice);
					if(choice == 1){
						printf("Entao o animal escolhido foi o AVESTRUZ\n");
					} else{
						printf("Entao o animal escolhido foi o PINGUIM\n");
					}
					break;
					
				case 2:
					printf("Entao o animal escolhido foi o PATO\n");
					break;
				case 3:
					printf("Entao o animal escolhido foi A AGUIA\n");
			}
			break;
			
		// Reptil
		case 3:
				printf("O animal e:\n");
				printf("1. Com casco\n");
				printf("2. Carnivoro\n");
				printf("3. Sem patas\n");
				scanf("%d", &choice);
				
				switch(choice){
					case 1:
						printf("Entao o animal escolhido foi a TARTARUGA");
						break;
					case 2:
						printf("Entao o animal escolhido foi o CROCODILO");
						break;
					case 3:
						printf("Entao o animal escolhido foi a COBRA");
						break;
				}
			break;
	}
	
	
	return 0;
}
