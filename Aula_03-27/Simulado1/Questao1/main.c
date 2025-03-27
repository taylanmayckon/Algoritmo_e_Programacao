#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade, i=0, feminino=0, maior_idade=0;
	float renda, renda_soma=0, media_renda, proporcao_feminino;
	char sexo;
	
	while(i<1000){
		printf("=-=-=-=-=- CIDADAO %d =-=-=-=-=-\n", i+1);
		printf("Digite a IDADE do Cidadao %d: ", i+1);
		scanf("%d", &idade);
		if(idade<0){
			break;
		}
		else if(idade>maior_idade){
			maior_idade=idade;
		}
		
		printf("Digite a RENDA do Cidadao %d: ", i+1);
		scanf("%f", &renda);
		renda_soma+=renda;
		
		sexo = 'D'; 
		do{
			printf("Informe o SEXO do Cidadao %d [M|F]: ", i+1);
			scanf(" %c", &sexo);
			if(sexo=='F'){
				feminino++;
			}
		}while(sexo != 'F' && sexo != 'M');
		
		
		i++;
	}
	
	printf("=-=-=-=-=- ESTATISTICAS =-=-=-=-=-\n");
	printf("- Total de pessoas cadastradas: %d\n", i);
	proporcao_feminino = (float)feminino*100/i;
	printf("- Proporcao de pessoas do sexo feminino: %.2f\n", proporcao_feminino);
	printf("- Maior idade registrada: %d\n", maior_idade);
	media_renda = (float)renda_soma/i;
	printf("- Media de renda: %.2f\n", media_renda);
	
	return 0;
}
