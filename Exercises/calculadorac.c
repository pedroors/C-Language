#include <stdio.h>

int main ()
{

    int primeiro;
    int segundo;
    int soma;
    int multiplicacao;
    int subtracao;
    float divisao;

    printf("Digite 2 valores inteiros: \n");
    scanf("%d%d", &primeiro, &segundo);

    soma=primeiro+segundo;
    multiplicacao=primeiro*segundo;
    subtracao=primeiro-segundo;
    divisao=(float)primeiro/segundo;


    printf("\n O resultado da soma foi de: %d", soma);
    printf("\n O resultado da multiplicacao foi de: %d", multiplicacao);
    printf("\n O resultado da subtracao foi de: %d", subtracao);
    printf("\n O resultado da divisao foi de: %.2f", divisao);


    return 0;
}
