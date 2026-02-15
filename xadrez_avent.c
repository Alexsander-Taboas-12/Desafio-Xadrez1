#include <stdio.h>

/**
 * Desafio de Xadrez - Nível Aventureiro
 * Simulação de movimentação de peças (Torre, Bispo, Rainha e Cavalo).
 */

int main() {
    // Constantes de movimentação
    const int MOV_TORRE = 5;
    const int MOV_BISPO = 5;
    const int MOV_RAINHA = 8;

    // --- Movimentação da Torre (for) ---
    printf("Movimento da Torre:\n");
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- Movimentação do Bispo (while) ---
    printf("Movimento do Bispo:\n");
    int b = 0;
    while (b < MOV_BISPO) {
        printf("Cima, Direita\n");
        b++;
    }
    printf("\n");

    // --- Movimentação da Rainha (do-while) ---
    printf("Movimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < MOV_RAINHA);
    printf("\n");

    // --- Movimentação do Cavalo (Loops Aninhados) ---
    // Objetivo: 2 casas para Baixo e 1 para a Esquerda.
    // Utilizaremos um 'for' para o eixo vertical e um 'while' para o horizontal.
    printf("Movimento do Cavalo:\n");

    for (int i = 1; i <= 1; i++) { // Loop externo (executa a sequência uma vez)
        int j = 0;
        while (j < 2) { // Movimento vertical: 2 casas para baixo
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n"); // Movimento horizontal: 1 casa para a esquerda
    }
    
    /* Nota: O uso de loops aninhados para o cavalo é uma abstração lógica. 
       No xadrez real, o salto é atômico (acontece de uma vez), mas aqui 
       simulamos o passo a passo da trajetória em L.
    */

    printf("\n");

    return 0;
}