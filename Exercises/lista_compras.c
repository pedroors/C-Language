#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int arquivo()
{
    FILE* pont_arq;

    pont_arq = fopen("lista.txt", "w");

    if(pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return 1;
    }
}

int main(void)
{
    char item[10];
    int i, j, menuCompra = 0, menuItem = 0, item2 = 0;

    setlocale(LC_ALL, "Portuguese");

    printf("\nSeja bem vindo!\n");
    printf("Digite:\n1. Para preencher a lista de compras\n2. Para conferir a lista de compras\n3. Para sair\n");
    scanf("%d", &menuCompra);

    do{
        switch(menuCompra)
    {
    case 1:
        printf("\nDigite o item que você deseja:\n");
        scanf("%s ", &item);
        break;

        do
        {
            printf("\nDeseja adicionar mais 1 item?\n");
            printf("1. Adicionar mais 1\n2. Não adicionar");
            scanf("%d", &menuItem);
            break;

            switch(menuItem)
            {
            case 1:
                printf("Digite o item que você deseja:\n");
                gets(item[item2++]);
                item2++;

            case 2:
                printf("Você escolheu a opção para não adicionar mais nenhum item!");
                printf("Os itens adicionados foram:");
                for(i = 0; item[item2]>=1; i++)
                {
                    printf("%s ", item[i]);
                }
                break;

            default:
                printf("Opção inválida!");
                break;
            }
            break;
        case 2:
            printf("Os itens adicionados na lista foram:\n");
            if(item2 == 0)
            {
                printf("Nenhum item foi adicionado na lista ainda.");
            }
            else(item2 >= 1);
            for(i = 0; item[item2]>=1; i++)
            {
                printf("%s ", item[i]);
            }
            break;
        case 3:
            printf("\nVocê escolheu a opção para sair do programa!");
            exit(1);
            break;

            break;
        }while(menuCompra == 3);

        }
    }while(menuCompra);




    getch();
    return 0;
}


