#include <stdio.h>

/**
 * Desafio de Xadrez - Nível Novato
 * Simulação de movimentação de peças utilizando estruturas de repetição.
 */

int main() {
    // Definição das constantes de movimento
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;

    // --- Movimentação da Torre ---
    // Peça: Torre
    // Movimento: 5 casas para a Direita
    // Estrutura utilizada: for
    printf("Movimento da Torre:\n");
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- Movimentação do Bispo ---
    // Peça: Bispo
    // Movimento: 5 casas para Cima e Direita (Diagonal)
    // Estrutura utilizada: while
    printf("Movimento do Bispo:\n");
    int contadorBispo = 0;
    while (contadorBispo < MOVIMENTO_BISPO) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // --- Movimentação da Rainha ---
    // Peça: Rainha
    // Movimento: 8 casas para a Esquerda
    // Estrutura utilizada: do-while
    printf("Movimento da Rainha:\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < MOVIMENTO_RAINHA);
    printf("\n");

    return 0;
}