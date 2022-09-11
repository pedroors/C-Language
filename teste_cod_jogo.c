#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    //ESTRUTURA PADRÃO DAS CLASSES.

    struct classe{
      char nome[20];
      char nome_classe[20];
      int dano;
      int vida;
      int velocidade;
    };

    //ATRIBUINDO CADA CLASSE PRA ESTUTURA.
    struct classe assassino;
    struct classe seguranca;
    struct classe espiao;

    //FUNCAO COM TODAS AS INFOS DA CLASSE E COM A FUNÇÃO DE EXIBIR O RESUMO DA CLASSE/PERSONAGEM NA TELA.
    void ExibeASS(struct classe assassino){
    assassino.nome;
    strcpy(assassino.nome, "Tony Montana");
    assassino.nome_classe;
    strcpy(assassino.nome_classe, "Assassino");
    assassino.vida = 25;
    assassino.dano = 40;
    assassino.velocidade = 35;

     //RESUMO PERSONAGEM ---- ASSASSINO ----
    printf("\nUm resumo do personagem escolhido:\nNome: %s\nClasse: %s\n----Atributos----\nDano: %d\nVida: %d\nVelocidade: %d\n",
     assassino.nome, assassino.nome_classe, assassino.dano, assassino.vida, assassino.velocidade);
    }


    //FUNCAO DO SEGURANCA.
    void ExibeSEG(struct classe seguranca){
    seguranca.nome;
    strcpy(seguranca.nome, "Gandia");
    seguranca.nome_classe;
    strcpy(seguranca.nome_classe, "Seguranca");
    seguranca.vida = 70;
    seguranca.dano = 15;
    seguranca.velocidade = 15;

     //RESUMO PERSONAGEM ---- SEGURANCA ----
    printf("\nUm resumo do personagem escolhido:\nNome: %s\nClasse: %s\n----Atributos----\nDano: %d\nVida: %d\nVelocidade: %d\n",
     seguranca.nome, seguranca.nome_classe, seguranca.dano, seguranca.vida, seguranca.velocidade);
    }


    //FUNCAO DO ESPIAO.
    void ExibeESP(struct classe espiao){
    espiao.nome;
    strcpy(espiao.nome, "Ethan Hunt");
    espiao.nome_classe;
    strcpy(espiao.nome_classe, "Espiao");
    espiao.vida = 20;
    espiao.dano = 30;
    espiao.velocidade = 50;

    //RESUMO PERSONAGEM ---- ESPIAO ----
    printf("\nUm resumo do personagem escolhido:\nNome: %s\nClasse: %s\n----Atributos----\nDano: %d\nVida: %d\nVelocidade: %d\n",
     espiao.nome, espiao.nome_classe, espiao.dano, espiao.vida, espiao.velocidade);
    }

int main()
{

    struct classe espiao, assassino, seguranca;

    ExibeESP (espiao);
    ExibeASS (assassino);
    ExibeSEG (seguranca);




    return 0;
}

//ABAIXO É TODA A FUNCAO, SO QUE USADA NO MAIN PARA USAR BASTA TIRAR O QUE JA POSSUI NO MAIN,
//COLAR LA E TIRAR OS SINAIS DE COMENTARIO

/*struct classe{
      char nome[20];
      char nome_classe[20];
      int dano;
      int vida;
      int velocidade;
    }assassino, seguranca, espiao;

    /*struct classe assassino;
    struct classe seguranca;
    struct classe espiao;*/

    /*assassino.nome;
    strcpy(assassino.nome, "Tony Montana");
    assassino.nome_classe;
    strcpy(assassino.nome_classe, "Assassino");
    assassino.vida = 25;
    assassino.dano = 40;
    assassino.velocidade = 35;

    seguranca.nome;
    strcpy(seguranca.nome, "Gandia");
    seguranca.nome_classe;
    strcpy(seguranca.nome_classe, "Seguranca");
    seguranca.vida = 70;
    seguranca.dano = 15;
    seguranca.velocidade = 15;

    espiao.nome;
    strcpy(espiao.nome, "Ethan Hunt");
    espiao.nome_classe;
    strcpy(espiao.nome_classe, "Espiao");
    espiao.vida = 20;
    espiao.dano = 30;
    espiao.velocidade = 50;

    //RESUMO PERSONAGEM ---- ASSASSINO ----
    printf("\nUm resumo do personagem escolhido:\nNome: %s\nClasse: %s\n----Atributos----\nDano: %d\nVida: %d\nVelocidade: %d\n",
     assassino.nome, assassino.nome_classe, assassino.dano, assassino.vida, assassino.velocidade);

     //RESUMO PERSONAGEM ---- SEGURANCA ----
    printf("\nUm resumo do personagem escolhido:\nNome: %s\nClasse: %s\n----Atributos----\nDano: %d\nVida: %d\nVelocidade: %d\n",
     seguranca.nome, seguranca.nome_classe, seguranca.dano, seguranca.vida, seguranca.velocidade);

     //RESUMO PERSONAGEM ---- ESPIAO ----
    printf("\nUm resumo do personagem escolhido:\nNome: %s\nClasse: %s\n----Atributos----\nDano: %d\nVida: %d\nVelocidade: %d\n",
     espiao.nome, espiao.nome_classe, espiao.dano, espiao.vida, espiao.velocidade);*/
