#include <stdio.h>

// Funcao recursiva para movimento da torre

void moverTorre(int movimentosRestantes) {
    if (movimentosRestantes == 0) return;
    printf("Direita\n");
    moverTorre(movimentosRestantes - 1);
}

// Funcao recursiver para movimento da rainha

void moverRainha(int movimentosRestantes) {
    if (movimentosRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(movimentosRestantes - 1);
}

// Funcao recursiva para movimento do bispo + loop aninhado
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais == 0) return;

    for (int i = 0; i < casasHorizontais; i++){
        printf("Direita\n");
    }

    printf("Cima\n");
    moverBispo(casasVerticais -1, casasHorizontais);

}

int main(){

    // Simulacao do movimento da torre -> 5 casas para direita (RECURSIVO)

    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Simulacao do movimento do bispo -> 5 casas na diagonal cima/direita (RECURSIVO + LOOP)

    int casasBispoVerticais = 5;
    int casasBispoHorizontais = 1;
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispoVerticais, casasBispoHorizontais);

    // Simulacao do movimento da rainha -> 8 casas pra esquerda (RECURSIVO)

    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Simulacao do movimento do cavalo -> 2 casas pra baixo e 1 pra esquerda (loop + controle avancado)

    int movimentoCavaloCima, movimentoCavaloDireita;
    int casasCavaloCima = 2;
    int casasCavaloDireita = 1;

    printf("\nMovimento do Cavalo:\n");
    
    for (movimentoCavaloCima = 1; movimentoCavaloCima <= casasCavaloCima; movimentoCavaloCima++) {
        if (movimentoCavaloCima == 2){
            for (movimentoCavaloDireita = 1; movimentoCavaloDireita <= casasCavaloDireita; movimentoCavaloDireita++){
                if (movimentoCavaloDireita == 1){
                    printf("Direita\n");
                    break;
                }
            }
        }
        if (movimentoCavaloCima == 1){
            continue;
        }
        printf("Cima\n");
    }

    return 0;
    
}