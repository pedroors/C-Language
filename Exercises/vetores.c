#include <stdio.h>
/*ATIVIDADE DE VETOR*/

int main(void){

    float notas [5];
    float total;
    float media;

    printf("Insira 5 notas: \n");

    for (int i = 0; i < 5; ++i){
        scanf("%f", &notas[i]);
        total += notas[i];
        media = total / 5;
    }

    printf("A media das notas e: %.2f", media);


return 0;
}

