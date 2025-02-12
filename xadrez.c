// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

#include <stdio.h>
 
void recursiveLoop(int movbis) {
    if (movbis < 5) {
        printf("Cima e direita\n");
        recursiveLoop(movbis + 1);
    }
}
 
int main() {

    int movtorre = 0;
    int movrainha = 0;
    
//MOVIMENTAÇÃO DO BISPO
    printf("Movimentação do Bispo (5 casas na diagonal direita para cima)\n");
    int movbis = 0;
    recursiveLoop(movbis);

//Torre : 
    printf("Movimentação da Torre (5 casas para à direita)\n");
    while(movtorre < 5){
    printf("Direita\n");
    movtorre++;
    }

//RAINHA
        printf("Movimentação da Rainha (8 casas para à esquerda)\n");
        while(movrainha < 8){
        printf("esquerda\n");
        movrainha++;
        }

//CAVALO
        printf("Movimentação do Cravalo (1 vez em L para cima à direita)\n");
        for (int movcavalo = 0; movcavalo < 1; movcavalo++) {
            printf("cima\n");
            printf("cima\n");
            printf("direita\n");}
    

        

    
    
   
   
   
    return 0;
}
