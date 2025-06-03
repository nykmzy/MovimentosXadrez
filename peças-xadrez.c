#include <stdio.h>

int main () {

    //while p/ torre, do while p/ bispo, for p/ rainha
    //torre avança 5 casas reto direita
    //bispo avança 5 casas na diagonal (reto e direita)
    //rainha 8 casas para esquerda
    //movimento do cavalo c/ loop aninhado (2 casa para baixo e 1 p/ esquerda)

    // Movimento da TORRE: 5 casas para a Direita (usando FOR)
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int torre = 1; torre <= 5; torre++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do BISPO: 5 casas na diagonal para Cima Direita (usando WHILE)
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    int bispo = 1;
    while (bispo <= 5) {
        printf("Cima Direita\n");
        bispo++;
    }

    printf("\n");

    // Movimento da RAINHA: 8 casas para a Esquerda (usando DO-WHILE)
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    int rainha = 1;
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);

    printf("\n");

    // Movimento do CAVALO: 2 casas para Baixo + 1 para Esquerda (usando FOR + WHILE)
    printf("Movimento do Cavalo (2 casas para Baixo e 1 para a Esquerda):\n");

    // Primeiro loop (FOR): duas casas para baixo
    for (int Cbaixo = 1; Cbaixo <= 2; Cbaixo++) {
        printf("Baixo\n");
        
        // Dentro de cada passo para baixo, verificamos se chegamos no segundo para fazer o L
        if (Cbaixo == 2) {
            // Segundo loop (WHILE): uma casa para esquerda
            int Clado = 0;
            while (Clado < 1) {
                printf("Esquerda\n");
                Clado++;
            }
        }
    }

    return 0;
}