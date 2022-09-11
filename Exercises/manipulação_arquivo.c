#include <stdio.h>
#include <stdlib.h>

double somar(int num1, int num2){
	double resultado;

	resultado = num1 + num2;

	return resultado;
}

int arquivo(){
	FILE *pont_arq;

	int numero1, numero2;
	double resultado;

	pont_arq = fopen("arquivo.txt", "a");

	if(pont_arq == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}

	printf("Digite um numero\n");
	scanf("%d", &numero1);

	printf("Agora digite outro numero:\n");
	scanf("%d", &numero2);

	resultado = somar(numero1, numero2);
	printf("\nO resultado da soma e: %lf\n", resultado);

	fprintf(pont_arq, "%lf\n", resultado);
	fclose(pont_arq);

	printf("Dados gravados com sucesso!");


	return 0;
}

int main(void){
	int retorno;
	retorno = arquivo();

	if(retorno == 1){
		printf("\nOcorreu um erro na gravacao!\n");
	}else{
		printf("\nGravacao concluida com sucesso!\n");
	}

	return 0;
}
