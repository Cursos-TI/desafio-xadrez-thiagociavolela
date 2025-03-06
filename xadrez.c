#include <stdio.h>

int main() {
    // Declaração de variáveis constantes para o número de casas

    // Bispo move 5 casas na diagonal
    const int CASAS_BISPO = 5; 
    // Torre move 5 casas para a direita  
    const int CASAS_TORRE = 5; 
    // Rainha move 8 casas para a esquerda  
    const int CASAS_RAINHA = 8;  
    // Cavalo move 2 casas na horizontal e 1 casa na vertical (ou vice-versa)
    const int CASAS_CAVALO_HORIZONTAL = 2;
    const int CASAS_CAVALO_VERTICAL = 1;

    // Movimentação do Bispo (5 casas na diagonal superior direita)
    printf("Movimentação do Bispo (%d casas na diagonal superior direita):\n", CASAS_BISPO);
    for (int i = 1; i <= CASAS_BISPO; i++) {
        // Simula o movimento na diagonal
        printf("Cima e Direita\n"); 
    }

    // Movimentação da Torre (5 casas para a direita)
    printf("\nMovimentação da Torre (%d casas para a direita):\n", CASAS_TORRE);
    for (int i = 1; i <= CASAS_TORRE; i++) {
        // Simula o movimento para a direita
        printf("Direita\n"); 
    }

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimentação da Rainha (%d casas para a esquerda):\n", CASAS_RAINHA);
    for (int i = 1; i <= CASAS_RAINHA; i++) {
        // Simula o movimento para a esquerda
        printf("Esquerda\n"); 
    }

    // Movimentação do Cavalo (em L)
    printf("\nMovimentação do Cavalo (em L):\n");

    // Loop para simular os movimentos horizontais (2 casas)
    for (int horizontal = 1; horizontal <= CASAS_CAVALO_HORIZONTAL; horizontal++) {
        // Loop para simular os movimentos verticais (1 casa)
        for (int vertical = 1; vertical <= CASAS_CAVALO_VERTICAL; vertical++) {
            // Movimento em L: 2 casas horizontal e 1 casa vertical
            printf("Move %d casa(s) para a direita e %d casa(s) para cima\n", horizontal, vertical);
            printf("Move %d casa(s) para a direita e %d casa(s) para baixo\n", horizontal, vertical);
            printf("Move %d casa(s) para a esquerda e %d casa(s) para cima\n", horizontal, vertical);
            printf("Move %d casa(s) para a esquerda e %d casa(s) para baixo\n", horizontal, vertical);
        }
    }

    return 0;
}