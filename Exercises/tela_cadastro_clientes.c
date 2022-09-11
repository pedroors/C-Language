#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    char NOME[21], APELIDO[21], a = 1;
    int idade, opcao, alerta;

    do
    {
        printf("\n-------------------------\n");
        printf("\t\t\nOla, seja bem vindo! \n");
        printf("\nQual opcao voce deseja escolher?\n");
        printf("1. Cadastro\n");
        printf("2. Consulta de cadastros\n");
        printf("3. Sair\n");
        printf("\n-------------------------\n");
        printf("\nOpcao: ");
        scanf("%d", &opcao);
        printf("\n-------------------------\n");


        switch(opcao)
        {
        case 1:

            printf("\nOk! Voce selecionou a opcao de cadastro!\n");
            printf("\nDigite o seu nome: \n");
            scanf(" %s", &NOME);
            printf("\nDigite o seu apelido: \n");
            scanf(" %s", &APELIDO);
            printf("\nDigite a sua idade: \n");
            scanf(" %d", &idade);
            alerta = 1;



            break;

        case 2:
            if(alerta > 0)
            {
                printf("\nOk! Voce selecionou a opcao para a consulta de usuarios cadastrados:\n");
                printf("\n-------------------------\n");
                printf("\nCadastros: \nNOME: %s \nApelido: %s \nIdade: %d", NOME, APELIDO, idade);
            }
            else
            {
                printf("\nNao existem usuarios cadastrados!\n");
                printf("\n-------------------------\n");
            }


            break;

        case 3:

            printf("\nVoce escolheu a opcao para sair do programa!\n");
            printf("\n-------------------------\n");
            exit(1);
            break;

        default:
            printf("\nOpcao invalida! Tente novamente.\n");
            printf("\n-------------------------\n");
            exit(1);

        }

        getch();
    }
    while (opcao);

    return 0;

}
