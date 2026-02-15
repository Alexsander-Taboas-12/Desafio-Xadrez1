#include <stdio.h>

// Protótipos das funções recursivas
void moverTorre(int casas);
void moverBispoRecursivo(int casas);
void moverRainha(int casas);

int main() {
    // --- 1. Movimentação da Torre (Recursividade) ---
    // Objetivo: 5 casas para a Direita
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // --- 2. Movimentação do Bispo (Recursividade + Loops Aninhados) ---
    // Objetivo: 5 casas na diagonal (Cima e Direita)
    printf("Movimento do Bispo:\n");
    // O desafio pede recursividade para a peça, mas loops aninhados para a lógica interna
    moverBispoRecursivo(5);
    printf("\n");

    // --- 3. Movimentação da Rainha (Recursividade) ---
    // Objetivo: 8 casas para a Esquerda
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // --- 4. Movimentação do Cavalo (Loops Complexos e Controle de Fluxo) ---
    // Objetivo: 2 casas para Cima e 1 para a Direita
    printf("Movimento do Cavalo:\n");
    
    // Loop externo para o movimento vertical (Cima), interno para horizontal (Direita)
    for (int i = 0, j = 0; i < 2; i++) { // Duas variáveis no for para controle
        printf("Cima\n");
        
        // Condição complexa: quando chegar na última casa vertical, executa a horizontal
        if (i == 1) { 
            while (j < 1) {
                printf("Direita\n");
                j++;
                break; // Uso do break para interromper o while após 1 execução
            }
        } else {
            continue; // Pula para a próxima iteração do loop externo
        }
    }
    printf("\n");

    return 0;
}

// --- Implementação das Funções Recursivas ---

// Função recursiva para a Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // Chamada recursiva diminuindo o contador
    }
}

// Função recursiva para o Bispo com loops aninhados internos
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;

    // Loops aninhados simulando um passo da diagonal (1 Vertical, 1 Horizontal)
    for (int v = 0; v < 1; v++) {     // Loop externo: Vertical
        for (int h = 0; h < 1; h++) { // Loop interno: Horizontal
            printf("Cima, ");
        }
        printf("Direita\n");
    }

    moverBispoRecursivo(casas - 1); // Próxima casa da diagonal
}

// Função recursiva para a Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}