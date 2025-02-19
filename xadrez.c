#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverBispo(int casa){
    if(casa > 0 && casa <= 5) {
        printf("Cima, ");
        printf("Direita\n");
        moverBispo(casa -1);
    }
}

void moverTorre(int casa){
    if(casa > 0) {
        printf("Direita\n");
        moverTorre(casa -1);
    }
}

void moverRainha(int casa){
    if(casa > 0) {
        printf("Esquerda\n");
        moverRainha(casa -1);
    }
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    //int bispo, torre, rainha, cavalo;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    //printf("Bispo\n");

    //for (int bispo = 0; bispo < 5; bispo++)
       
            {
                //printf("Cima, ");                         
                //printf("direita \n");
        }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    //printf("torre \n");

    //for(int torre = 0 ; torre < 5 ; torre++)
        {
            //printf("Direita \n");
        }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    //printf("rainha \n");
    
    //for(int rainha = 0 ; rainha < 8 ; rainha++)
        {
            //printf("Esquerda \n");
        }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    //printf("Cavalo \n");

    //for (cavalo = 0; cavalo <= 1; cavalo++)
    {
        //for (cavalo = 0; cavalo <= 3; cavalo++)
        {
           //printf("Cima \n");
        }
        
        //printf("Direita \n");
    }
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

        printf("Bispo se moveu para á diágonal:\n ");
        moverBispo(5);

        printf("Torre se moveu para :\n ");
        moverTorre(5);

        printf("Rainha se movimentou para :\n");
        moverRainha(8);


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
