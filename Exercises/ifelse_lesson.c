#include <stdio.h>
/*ATIVIDADE DE CONDIÇÃO*/
int main() {

int A;
int multiplicacao;

printf("Digite o numero: ");
scanf("%d", &A);

if (A>=50)
{
    multiplicacao=A*2;
    printf("O numero digitado foi maior que 50, logo, o resultado da multiplicacao foi: %d", multiplicacao);
}
else
{
    multiplicacao = A*3;
    printf("O numero digitado foi menor ou igual a 50, logo, o resultado da multiplicacao foi: %d", multiplicacao);
}


return 0;

}
