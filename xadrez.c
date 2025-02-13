#include <stdio.h>
 
void recursiveLoop(int movbis) {
    if (movbis < 5) {
        printf("Cima e direita\n");
        recursiveLoop(movbis + 1);
    }
}
 
int main() {

    int casas = 0;
    int movcavalo = 0;
    int movtorre = 0;
    
    
//MOVIMENTAÇÃO DO BISPO UTILIZANDO MODO RECURSIVO
    printf("Movimentação do Bispo: 5 casas na diagonal direita para cima\n");
    int movbis = 0;
    recursiveLoop(movbis);
    printf("\n");

//MOVIMENTAÇÃO DA TORRE (WHILE)
    printf("Movimentação da Torre: 5 casas para à direita\n");
    while(movtorre < 20){
    printf("Direita\n");
    movtorre++;
    if( movtorre == 5){
       break;
    }
    }
    printf("\n");

//MOVIMENTAÇÃO DO CAVALO (WHILE)
    printf("Movimentação do Cravalo: 1 vez em L para cima à direita\n");
        while(movcavalo < 20){
        printf("cima\n");
        movcavalo++;
        if(movcavalo == 2){
        break;
        } 
    }
    printf("direita\n");
    printf("\n");

//MOVIMENTAÇÃO DA RAINHA (FOR)
printf("Movimentação da Rainha: 8 casas para à esquerda\n");
for (int movrainha = 0; movrainha <= 7; movrainha++) {
    printf("esquerda\n");
}
        
    return 0;
}