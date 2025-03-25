#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void LerDados(float (*array)[1000], int size){
	int i;
	
	for(i=0; i<size; i++){
		printf("=-=-=-=-=-=-= HABITANTE %d =-=-=-=-=-=-=\n", i+1);
		printf("Informe o salario: ");
		scanf("%f", &array[0][i]);
		printf("Informe a idade: ");
		scanf("%f", &array[1][i]);
		printf("Informe o numero de filhos: ");
		scanf("%f", &array[2][i]);
	}
}

float CalcMedia(float (*array)[1000], int size, int line){
	int i;
	float sum=0.0;
	
	for(i=0; i<size; i++){
		sum+=array[line][i];
	}
	
	return (float)sum/size;
}

float* CalcMinMax(float (*array)[1000], int size, int line){
	int i=0;
	float menor, maior, MinMax[2];
	
	do{
		if(i==0){
			menor=array[line][i];
			maior=array[line][i];
		}
		else{
			if(array[line][i]<menor){
				menor=array[line][i];
			}
			if(array[line][i]>maior){
				maior=array[line][i];
			}
		}
		i++;
	} while(i<size);
	MinMax[0]=menor;
	MinMax[1]=maior;
	return MinMax;
}

int main(int argc, char *argv[]) {
	float MINF[3][1000], media; // Habitante: salario, idade, num. de filhos
	float *MenorMaior;
	int size=0, i;
	
	printf("Informe o tamanho do vetor (MAX = 1000): ");
	scanf("%d", &size);
	
	LerDados(MINF, size);
	
	printf("=-=-=-=-=-=-= CALCULOS ESTATISTICOS =-=-=-=-=-=-=\n");
	media = CalcMedia(MINF, size, 0); // Media salarial
	printf("MEDIA SALARIAL: %.2f\n", media);
	media = CalcMedia(MINF, size, 1); // Media idade
	printf("MEDIA DE IDADE: %.2f\n", media);
	media = CalcMedia(MINF, size, 2); // Media de filhos
	printf("MEDIA DE FILHOS: %.2f\n", media);
	MenorMaior = CalcMinMax(MINF, size, 1);
	printf("A MAIOR IDADE FOI: %.0f, A MENOR FOI: %.0f\n", MenorMaior[0], MenorMaior[1]);
	
	
	return 0;
}
