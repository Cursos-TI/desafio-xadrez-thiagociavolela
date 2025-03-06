#include <stdio.h>

int main() {
    // Declaração de variáveis constantes para o número de casas

    // Bispo move 5 casas na diagonal
    const int CASAS_BISPO = 5; 
    // Torre move 5 casas para a direita  
    const int CASAS_TORRE = 5; 
    // Rainha move 8 casas para a esquerda  
    const int CASAS_RAINHA = 8;  

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

    return 0;
}