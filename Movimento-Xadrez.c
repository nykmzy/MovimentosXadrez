#include <stdio.h>

int main () {

    //while p/ torre, do while p/ bispo, for p/ rainha
    //torre avança 5 casas reto direita
    //bispo avança 5 casas na diagonal (reto e direita)
    //rainha 8 casas para esquerda

    int torre = 1, bispo = 1, rainha = 1; // entrada de dados

    printf("Movimento da torre\n");      // qual peça será movimentada

    do                                  //utilizando do, while
 {
    printf("Direita\n");               // exibe o movimento
    torre++;                           //incrementa +1 à variáveç
 } while (torre <= 5);                 //enquanto torre for menor ou igual a 5 (quantidade de movimentos)

    printf("Movimento do bispo\n");
 do
 {
    printf("Cima, direita\n");
    bispo++;
 } while (bispo <= 5);

 printf("Movimento da rainha\n");
  do
 {
    printf("Esquerda\n");
    rainha++;
 } while (rainha <= 8);

    return 0;
}