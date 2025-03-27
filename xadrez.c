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

    return 0;
}