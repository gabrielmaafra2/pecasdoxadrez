#include <stdio.h>

int main(){

    // Simulacao do movimento da torre -> 5 casas para direita

    int movimentoTorre;
    int casasTorre = 5;
    printf("Movimento da Torre: \n");
    for (movimentoTorre = 1; movimentoTorre <= casasTorre; movimentoTorre++) {
        printf("Direita\n");
    }

    // Simulacao do movimento do bisco -> 5 casas na diagonal cima/direita

    int movimentoBispo = 1;
    int casasBispo = 5;
    printf("\nMovimento do Bispo:\n");
    while(movimentoBispo <= casasBispo){
        printf("Cima Direita\n");
        movimentoBispo++;
    }

    // Simulacao do movimento da rainha -> 8 casas pra esquerda

    int movimentoRainha = 1;
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        movimentoRainha++;
    }while (movimentoRainha <= casasRainha);

    return 0;
    
}