#include <stdio.h>

// Função recursiva para a Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para a Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o Bispo, com loops aninhados dentro
void moverBispo(int casas) {
    if (casas <= 0) return;

    // Loops aninhados para simular movimento diagonal
    for (int Bcima = 0; Bcima < 1; Bcima++) { // vertical (cima)
        for (int Bdireita = 0; Bdireita < 1; Bdireita++) { // horizontal (direita)
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

int main() {
    // Movimento da TORRE: recursividade
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(5);

    printf("\n");

    // Movimento do BISPO: recursividade + loops aninhados
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    moverBispo(5);

    printf("\n");

    // Movimento da RAINHA: recursividade
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(8);

    printf("\n");

    // Movimento do CAVALO: loops aninhados e múltiplas variáveis
    printf("Movimento do Cavalo (2 casas para Cima e 1 para a Direita):\n");

    int cima = 0, direita = 0;
    for (int i = 0; i < 3; i++) {  // limite de tentativas (segurança)
        for (int j = 0; j < 2; j++) {
            if (cima < 2) {
                printf("Cima\n");
                cima++;
            }

            if (cima == 2 && direita < 1) {
                printf("Direita\n");
                direita++;
                break;
            }
        }

        if (cima == 2 && direita == 1) break;
    }

    return 0;
}
