#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char covid[10], outras[10], idoso[10];
    int i, j, opcao = 0, cadastro = 0, chamar = 0, idade[3], senhas[9];
    int pacicovid = 0, pacioutras = 0, pacidoso = 0;
    int filacovid = 0, filaoutras = 0, filaidoso = 0;

    printf("Seja bem vindo!\n");
    printf("\nPARA ENTRAR NA FILA E NECESSARIO FAZER O CADASTRO DE PACIENTE!");
    do
    {
        printf("\n--------------------------\n");
        printf("\nDigite 1 para cadastro, 2 para consultar senhas atuais, 3 para chamar paciente e 4 para sair:\n");
        printf("\nOpcao: ");
        scanf("%d", &opcao);
        printf("\n--------------------------\n");

        switch(opcao)
        {
        //SISTEMA DE CADASTRO
        case 1:
            printf("\nVoce escolheu a opcao de cadastro:");
            printf("\nDigite 1 para cadastro de paciente COVID, 2 para paciente com outras doenças e 3 para paciente idoso:\n");
            scanf("%d", &cadastro);
            printf("\n--------------------------\n");

            switch(cadastro)
            {
            case 1:
                printf("\nVoce escolheu a opcao de cadastro para paciente COVID! ");
                printf("\nDigite o seu nome:\n");
                scanf(" %s", &covid);
                printf("Agora digite a sua idade:\n");
                scanf(" %d", &idade[0]);
                printf("\nPRONTO! %s, O SEU CADASTRO FOI CONCLUIDO COM SUCESSO\n", covid);
                printf("\nAGORA BASTA ESPERAR A SUA VEZ NA FILA!\n");
                pacicovid++;

                break;

            case 2:
                printf("\nVoce escolheu a opcao de cadastro para paciente com outras doencas! ");
                printf("\nDigite o seu nome:\n");
                scanf("%s", &outras);
                printf("Agora digite a sua idade:\n");
                scanf("%d", &idade[1]);
                printf("\nPRONTO! %s, O SEU CADASTRO FOI CONCLUIDO COM SUCESSO\n", outras);
                printf("\nAGORA BASTA ESPERAR A SUA VEZ NA FILA!\n");
                pacioutras++;

                break;

            case 3:
                printf("\nVoce escolheu a opcao de cadastro para paciente idoso! ");
                printf("\nDigite o seu nome:\n");
                scanf("%s", &idoso);
                printf("Agora digite a sua idade:\n");
                scanf("%d", &idade[2]);
                printf("\nPRONTO! %s, O SEU CADASTRO FOI CONCLUIDO COM SUCESSO\n", idoso);
                printf("\nAGORA BASTA ESPERAR A SUA VEZ NA FILA!\n");
                pacidoso++;

                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                printf("\n--------------------------\n");
                exit(1);
            }
            break;

        case 2:
            printf("\nVoce escolheu a opcao para consulta de senhas!\n");
            printf("\nO numero de senhas disponiveis para pacientes COVID sao: %d\n", pacicovid);
            printf("\nO numero de senhas disponiveis para pacientes com outras doencas sao: %d\n", pacioutras);
            printf("\nO numero de senhas disponiveis para pacientes idosos sao: %d\n", pacidoso);

            break;

        case 3:
            printf("\nVoce escolheu a opcao para chamar paciente!\n");
            printf("\nDigite 1 para chamar paciente COVID, 2 para outras doencas e 3 para idoso:\n");
            scanf("%d", &chamar);

            switch(chamar)
            {

            case 1:
                if(pacicovid>=1)
                {
                    printf("\nSenha(s) numero: ");
                    srand(time(NULL) );
                    for(i = 0; i < 1; i++)
                    {
                        printf("%d ", 5+ rand() % 10);
                    }

                }
                else
                {
                    printf("\nNao existem senhas nessa fila!\n");
                }

                break;

            case 2:
                if(pacioutras>=1)
                {
                    printf("\nSenha(s) numero: ");
                    srand(time(NULL) );
                    for(i = 0; i < 1; i++)
                    {
                        printf("%d ", 10+ rand() % 15);
                    }
                }
                else
                {
                    printf("\nNao existem senhas nessa fila!\n");
                }

                break;

                case 3:
                    if(pacidoso>=1)
                    {
                        printf("\nSenha(s) numero: ");
                        srand(time(NULL) );
                        for(i = 0; i < 1; i++)
                        {
                            printf("%d ", 15+ rand() % 20);
                        }
                    }
                    else
                    {
                        printf("\nNao existem senhas nessa fila!\n");
                    }

                    break;



                }
            }
        }while (opcao);

    getch();
    return 0;
    }





