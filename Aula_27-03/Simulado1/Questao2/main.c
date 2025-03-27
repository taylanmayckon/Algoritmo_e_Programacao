#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, champion, total_damage=0, q_damage=0, braum_count=0, teemo_count=0;
	char skill;
	float braum_proporcao;
	
	for(i=0; i<5; i++){
		printf("=-=-=-=-=- ROUND %d =-=-=-=-=-\n", i+1);
		printf("Escolha seu campeao:\n");
		printf("1 - Teemo\n");
		printf("2 - Ashe\n");
		printf("3 - Braum\n");
		scanf("%d", &champion);
		
		if(champion==3){
			braum_count++;
		}
		
		skill = 'Q';
		printf("Qual skill sera executada: \n");
			printf("Q - 10 de dano\n");
			printf("W - 50 de dano\n");
			printf("E - 100 de dano\n");
			printf("R - Encerra o round\n");
		do{
			scanf(" %c", &skill);
			fflush(stdin);
			switch(skill){
				case 'Q':
					total_damage+=10;
					break;
				case 'W':
					total_damage+=50;
					break;
				case 'E':
					total_damage+=100;
					break;
			}
			
			if(champion==1 && skill!='R'){
				teemo_count++;
			}
			
			if(skill=='Q'){
				q_damage+=10;
			}
		}while(skill=='Q' || skill=='W' || skill=='E');
		printf("\n\n\n");
	}
	
	printf("=-=-=-=-=- ESTATISTICAS =-=-=-=-=-\n");
	printf("- Dano total nos 5 rounds: %d\n", total_damage);
	printf("- Dano total da skill Q: %d\n", q_damage);
	printf("- Quantas vezes Teemo golpeou: %d\n", teemo_count);
	braum_proporcao=(float)braum_count/5;
	printf("- Proporcao de vezes que Braum foi utilizado: %.2f", braum_proporcao);
	
	
	return 0;
}
