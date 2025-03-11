#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool check_entry(char *entry){
	int count = 0, i;
	for(i=0; i<3; i++){
		if(entry[i]=='Z'){
			count++;
		}
	}
	
	if(count==3){
		return 1;
	}
	else{
		return 0;
	}
}

bool check_bra(char *entry){
	int count = 0;
	
	if(entry[count]=='B'){
		count++;
	}
	if(entry[count]=='R'){
		count++;
	}
	if(entry[count]=='A'){
		count++;
	}
	
	if(count==3){
		return 1;
	}
	else{
		return 0;
	}
}


int main(int argc, char *argv[]) {
	char pais[800][4], nome[800][16];
	float altura[800], total_alturas, media_alturas;
	int i, total_atletas;
	bool stop_flag = 0;
	
	for(i=0; i<800; i++){
		printf("=-=-=-=-=-=\n");
		printf("Nome do pais do atleta %d: ", i+1);
		fflush(stdin);
		fgets(pais[i], 4, stdin);
		fflush(stdin);
		
		stop_flag = check_entry(pais[i]);
		if(stop_flag){
			break;
		}
		
		printf("Nome do atleta %d: ", i+1);
		fflush(stdin);
		fgets(nome[i], 16, stdin);
		fflush(stdin);
		
		printf("Altura do atleta %d: ", i+1);
		scanf("%f", &altura[i]);
		total_alturas+=altura[i];
	} 
	
	total_atletas = i;
	media_alturas = total_alturas/total_atletas;
	
	printf("=-=-=-=-=-=\n");
	printf("RELACAO JOGADORES BRASIL\n");
	printf("ALTURA\tNOME\n");
	for(i=0; i<total_atletas; i++){
		if(check_bra(pais[i])){
			if(altura[i]>=media_alturas){
				printf("%.2f", altura[i]);
				printf("\t%s", nome[i]);
			}
		}
	}	
	return 0;
}
