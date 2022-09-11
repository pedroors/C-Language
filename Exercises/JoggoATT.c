#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

int a,b,L,L2;

int menuEscolhapers = 0; int escolhapers(){
printf("\nHORA DE ESCOLHER O SEU PERSONAGEM!\n");
printf("\n	LISTA DOS PERSONAGENS E UM BREVE RESUMO DE SUAS HISTORIAS E ATRIBUTOS	\n");

printf("\n---------------------------------------\n");
printf("\n---- ASSASSINO ----\n");

printf("\nTony Montana: Um dos criminosos mais procurados do mundo, gangster e chefe da máfia cubana, famoso pela sua inteligência agucada, possui uma alta capacidade de finalização.\n");
printf("\n----> SEUS ATRIBUTOS <----\n");
printf("HP - 25\nDano - 40\nVelocidade / Furtividade - 35\n");

printf("\n---------------------------------------\n");
printf("\n---- SEGURANCA ----\n");

printf("\nGandia: Chefe da segurança do estádio, experiente segurança espanhol, Ex-Lutador de MMA (Artes marciais mistas)\nBlack Belt no Judô. Sendo assim muito resistente e inteligente. \n");
printf("\n----> SEUS ATRIBUTOS <----\n");
printf("HP - 70\nDano - 15\nVelocidade / Furtividade - 15\n");


printf("\n---------------------------------------\n");
printf("\n---- ESPIAO ----\n");

printf("\nEthan Hunt: Experiente espião russo, ex-KGB, além de experiente, muito rápido e inteligente, se “camufla” muito bem.\n");
printf("\n----> SEUS ATRIBUTOS <----\n");
printf("HP - 20\nDano - 30\nVelocidade / Furtividade - 50\n");
printf("\n---------------------------------------\n");
printf("\n-- Qual voce deseja escolher? --\n");
printf("\nDigite:\n1. Assassino // Tony Montana\n2. Seguranca // Gandia\n3. Espiao // Ethan Hunt\n");
scanf("%d", &menuEscolhapers);

switch(menuEscolhapers){ case 1:
printf("\nVoce escolheu o personagem Tony Montana (ASSASSINO)\n"); break;
case 2:
printf("\nVoce escolheu o personagem Gandia (SEGURANCA)\n"); break;
case 3:
printf("\nVoce escolheu o personagem Ethan Hunt (ESPIAO)\n"); break;
default:

printf("\nOPCAO INVALIDA!\n"); break;
}
}


void gotoxy(int x,int y){
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main(){
    setlocale(LC_ALL,"Portuguese");

    system("color 4F");
    printf("#######   ######       ##      ##     #####         ##    #######   #   #\n      #  #      #     #   #   #  #    #    #       #  #      #      #  #\n     #   #      #    #     # #    #   #    #      #    #     #      # #\n    #    #      #   #       #      #  ########    ######     #      ##\n   #     #      #   #              #  #      #    #    #     #      # #\n  #      #      #   #              #  #      #    #    #     #      #  #\n #       #      #   #              #  #######     #    #     #      #   #\n########  ######     \n\n");
    system("pause");
    system("cls");



    /*//menu*/

    int opcao;
    do{
        inicio:
        opcao=0;
        L=2;L2=2;b=2;
        system("cls");
        system("color 4F");
        printf("\n\n      1 - JOGAR \n      2 - CREDITOS \n      3 - SAIR\n");
        do{
            gotoxy(1,L);
            printf("-->");
            gotoxy(10,6);
            if(kbhit){a=getch();}
            if(a == 80 && b < 5){L2=L;L++;b++;}/*seta p/baixo*/
            if(a == 72 && b > 2){L2=L;L--;b--;}/*seta p/cima */
            if(L!=L2){gotoxy(1,L2);printf("   ");L2=L;}
            if(a == 13){opcao=b-1;}
        }while(opcao == 0);
        switch (opcao){
            case 1:
                    system("cls");
                    printf("\n Com o avanço da tecnologia na medicina, cientistas conseguiram criar um medicamento baseado em um vírus genéticamente   modificado para caçar células câncerígenas por todo o corpo.\n");
                    printf("\n Após anos de pesquisas e testes esse medicamento foi lançado na sociedade e em torno de um ano reduziu 90 por cento da  taxa de tumores malignos irreversíveis, porém uma interação entre diferentes virus não foi cogitada durante os testes.\n");
                    printf("\n No dia 2 de fevereiro de 2020 na cidade de Miami um jovem que tinha recebido esse medicamento foi mordido por um cão    que portava o vírus da raiva na entrada do estádio no qual ia assistir uma partida de futebol americano. O vírus da\n raiva entrou no sistema sanguíneo do garoto e imediatamente encontrou o vírus modificado que reagiu a ele o\n incorporando e se replicando rapidamente, em poucos minutos dentro do estádio o garoto passava mal e correu para o\n banheiro para vomitar.\n");
                    printf("\n Era um dia normal, acontecia um jogo de futebol americano, o tão tradicional Super Bowl. E como é uma tradição\n americana, muita gente vai para acompanhar, muitas pessoas famosas e poderosas, dentre elas, o dono de um dos times\n participantes, o magnata Clark Hunt: dono da franquia Kansas City Chiefs. Uma peça muito importante para o esporte\n tradicional americano.\n");
                    printf("\n E como pessoas importantes e poderosas, um desses malefícios é a atração de olhos negativos. Por isso, dentre essas\n pessoas importantes, com quem o pessoal do estádio não contava que estivesse assistindo o mesmo jogo que eles, era um\n dos assassinos mais procurados do mundo, o gângster e chefe da máfia cubana, Tony Montana, que estava na busca do\n bilionário Clark Hunt. Ninguém contava com a presença dele, apenas 1 pessoa…\n");
                    printf("\n O experiente espião russo e ex-KGB, Ethan Hunt, que tinha o assassino Tony Montana como alvo. E para atrapalhar com a\n missão dos 2, o chefe da segurança do estádio, experiente segurança espanhol, Gandia.\n");
                    printf("\n Porém no meio do jogo Gandia notou um fluxo muito alto de gente vindo do banheiro, e de repente uma multidão começou a  gritar e correr, eram “pessoas” atacando umas as outras,porém essas “pessoas” que estavam atacando umas as outras\n estavam com uma aparência diferente, estavam pálidas e com os olhos brancos.\n\n");
                    system("pause");
                    system("cls");
                    escolhapers();

                Sleep(10000000000000000000000000000);
                break;
            case 2:
                system("cls");
                printf("\n    Creditos\n");
                Sleep(2000);
                break;
            case 3:
                system("cls");
                printf("\n    voce pediu para sair, prencione qualquer tecla para continuar\n");
                Sleep(2000);
                break;

            default:
                printf("voce deve escolher uma opcao valida\n");
                printf("Precione qualquer tecla para voltar ao menu\n");
                system("pause");
                goto inicio;
        }
    }while(opcao!=4);
    return 0;
}
