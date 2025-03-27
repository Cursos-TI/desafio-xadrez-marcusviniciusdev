#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)
    printf("\nMovimento do Bispo:\n");
    int casa_bispo = 1;
    while (casa_bispo <= 5) {
        printf("Cima, Direita\n");
        casa_bispo++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    printf("\nMovimento da Rainha:\n");
    int casa_rainha = 1;
    do {
        printf("Esquerda\n");
        casa_rainha++;
    } while (casa_rainha <= 8);

    // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda (usando loops ANINHADOS)
    printf("\nMovimento do Cavalo:\n");
    
    const int passos_baixo = 2;   // 2 casas para baixo
    const int passos_esquerda = 1; // 1 casa para a esquerda
    
    // Loop externo (for) para controlar os passos para baixo
    for (int i = 1; i <= passos_baixo; i++) {
        printf("Baixo\n"); // Primeira parte do "L" (2 passos para baixo)
        
        // Loop interno (while) para controlar o passo para a esquerda
        // (Só executa na última iteração do loop externo)
        if (i == passos_baixo) { // Se for o último passo para baixo
            int j = 1;
            while (j <= passos_esquerda) {
                printf("Esquerda\n"); // Segunda parte do "L" (1 passo para a esquerda)
                j++;
            }
        }
    }

    return 0;
}