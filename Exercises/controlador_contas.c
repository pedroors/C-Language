int main()
{
    int menuPrincipal=0, menuGastos=0, menuGanhos=0, menuConsulta=0;
    float gastos[500]= {}, ganhos[500]= {};
    int gastos2=0,  ganhos2=0;

    do
    {
        printf("Digite\n 1 para gastos\n 2 para ganhos\n 3 para consulta\n 4 para sair\n");
        scanf("%d", &menuPrincipal);
        switch(menuPrincipal)
        {
        case 1:
            do
            {
                printf(" Digite o valor que voce quer adicionar\n");
                scanf("%f", &gastos[gastos2]);
                gastos2++;
                printf("\nAdicionar outros\n 1-SIM\n 2- NAO\n");
                scanf ("%d", &menuGastos);
            }
            while (menuGastos==1);

            break;

        case 2:
            do
            {
                printf(" Digite o valor que voce quer adicionar\n");
                scanf("%f", &ganhos[ganhos2]);
                ganhos2++;
                printf("\nAdicionar outros\n 1-SIM\n 2- NAO\n");
                scanf ("%d", &menuGanhos);
            }
            while (menuGanhos==1);

            break;

        case 3:
            do
            {
                printf("Escolha sua consulta\n 1.Gastos\n 2.Ganhos\n 3.Saldo atual\n");
                scanf("%d",&menuConsulta);
                switch(menuConsulta)
                {
                case 1:
                    if(gastos2==0)
                    {
                        printf("nao existem valores adicionados\n");
                    }
                    else
                    {
                        printf("valores gastos:\n");
                        for (int i = 0; i <= gastos2; i++)
                        {
                            printf("\n R$ %.3f\n",gastos[i]);
                            break;

                        }
                    }
                case 2:
                    if(ganhos2==0)
                    {
                        printf("nao existem valores adicionados\n");
                    }
                    else
                    {
                        printf("valores ganhos:\n");
                        for (int i = 0; i <= ganhos2; i++)
                        {
                            printf("\n R$ %.3f\n",ganhos[i]);
                            break;

                        }
                    }
                }

                break;



                break;

            }
            while(menuConsulta);

        }


    }
    while(menuPrincipal!=4);


    return 0;
}
