/******************************************************************************
Criar um sistema de controle de senhas para pacientes de um hospital conforme especificações abaixo:

    O sistema deverá controlar diferentes tipos de pacientes. Com COVID, outras doenças e idosos;

    Os 3 tipos de pacientes deverão possuir diferentes controladores de numeração de senha;

    O programa deverá solicitar ao usuário que informe: Novo paciente COVID, Novo paciente outras, Novo paciente idoso,

    Chamar paciente COVID,Chamar  paciente outras,Chamar paciente idoso e Consultar senhas atuais;

    Ao acionar as opções de chamar paciente, deverá incrementar a senha atual para este tipo de paciente;

    Ao acionar Consultar senhas atuais, deverá informar as numerações de senhas atuais para os 3 tipos de pacientes.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m=0,mpaciente=0,mfila=0;
    int covid[15]={},outros[15]={},idoso[15]={};
    int pcovid=0,poutros=0,pidoso=0;
    int filac=0,filao=0,filai=0;

    do   {
        printf("\nDigite 1 para adicionar novo paciente, 2 para consultar as senhas, 3 para Chamar um paciente e 4 para sair. \n");
         scanf("%d",&m);
     //sistema de cadastro
     switch(m){
        case 1:
        printf("\nDigite 1 para novo paciente COVID, 2 para novo paciente outros, 3 para novo paciente idoso\n");
         scanf("%d",&mpaciente);
            switch(mpaciente){
             case 1:
             covid[pcovid]=pcovid+1;

             printf("Paciente adicionado na fila \"COVID\"");
             pcovid++;
             break;

             case 2:
             outros[poutros]=poutros+1;
             poutros++;
             printf("Paciente adicionado na fila \"outros\"");
             break;

             case 3:
             idoso[pidoso]=pidoso+1;
             pidoso++;
             printf("\n\nPaciente adicionado na fila \"idoso\"\n\n");
             break;

            }
             system("clear");
        break;
 //sistema de consulta
        case 2:
        printf("\nA Quantidade de senhas para pacientes COVID e: %d\n", pcovid);
        printf("\nA Quantidade de senhas para pacientes outros e: %d\n", poutros);
        printf("\nA Quantidade de senhas para pacientes idoso e: %d\n", pidoso);
        break;
// Chamar o paciente
        case 3:
        printf("\nDigite 1 para Chamar um paciente COVID, 2 para paciente outros, 3 para paciente idoso\n");
         scanf("%d",&mfila);
        switch(mfila)
        {

            case 1:
             if(covid[filac]==0){
                 printf("\n\nNao existem senhas nesta fila\n\n");
                }
                else{
                 printf("\n\nSenha numero :%d .\n\n",covid[filac]);
                filac++ ;
                }
            break;
            case 2:
             if(outros[filao]==0){
                 printf("\n\nNao existem senhas nesta fila\n\n");
                }
                else{
                 printf("\n\nSenha numero :%d .\n\n",outros[filao]);
                filao++ ;
                }
            break;
            case 3:
            if(idoso[filai]==0){
                 printf("\n\nNao existem senhas nesta fila\n\n");
                }
                else{
                 printf("\n\nSenha numero :%d .\n\n",idoso[filai]);
                filai++ ;
                }
            break;


        }


    }
}
while(m!=4);
return 0;
}
