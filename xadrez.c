#include <stdio.h>

/*
 * Função recursiva para movimentar a Torre.
 * Simula o movimento para a direita, imprimindo "Direita" para cada casa.
 * A recursão termina quando não há mais casas para mover (casas <= 0).
 */
void moverTorre(int casas) {
    if (casas <= 0) return; // Caso base: nenhuma casa restante.
    printf("Direita\n");    // Imprime a direção do movimento.
    moverTorre(casas - 1);   // Chamada recursiva para a próxima casa.
}

/*
 * Função recursiva para movimentar o Bispo.
 * Simula o movimento diagonal (Cima, Direita) para cada casa.
 * A recursão termina quando o número de casas atinge zero.
 */
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return; // Caso base: nenhuma casa restante.
    printf("Cima, Direita\n"); // Imprime o movimento diagonal.
    moverBispoRecursivo(casas - 1); // Chamada recursiva para a próxima casa.
}

/*
 * Função recursiva para movimentar a Rainha.
 * Simula o movimento para a esquerda, imprimindo "Esquerda" para cada casa.
 * A recursão termina quando o número de casas for zero ou negativo.
 */
void moverRainha(int casas) {
    if (casas <= 0) return; // Caso base.
    printf("Esquerda\n");  // Imprime a direção do movimento.
    moverRainha(casas - 1); // Chamada recursiva para a próxima casa.
}

/*
 * Função para movimentar o Bispo utilizando loops aninhados.
 * O loop externo representa o movimento vertical e o interno o movimento horizontal.
 * Para simular o movimento diagonal, a impressão ocorre quando o número da casa vertical
 * é igual ao número da casa horizontal.
 */
void moverBispoLoops(int casas) {
    for (int vertical = 1; vertical <= casas; vertical++) {       // Loop vertical (movimento para "Cima")
        for (int horizontal = 1; horizontal <= casas; horizontal++) { // Loop horizontal (movimento para "Direita")
            if (vertical == horizontal) { // Apenas quando os índices são iguais ocorre o movimento diagonal
                printf("Cima, Direita\n");
            }
        }
    }
}

/*
 * Função para movimentar o Cavalo utilizando loops complexos.
 * O movimento do Cavalo é em "L": duas casas para cima e uma para a direita.
 * Utiliza-se um loop externo para as duas casas para cima e, na última iteração,
 * um loop interno com condição que usa 'continue' e 'break' para simular o movimento horizontal.
 */
void moverCavalo(int cavaloCima, int cavaloDireita) {
    for (int i = 1; i <= cavaloCima; i++) {
        printf("Cima\n"); // Movimento vertical: duas casas para cima.
        // Ao atingir a última casa vertical, realiza o movimento horizontal
        if (i == cavaloCima) {
            for (int j = 1; j <= cavaloDireita; j++) {
                // Se ainda não for a última iteração do loop horizontal, usa 'continue'
                if (j != cavaloDireita) {
                    continue;
                }
                printf("Direita\n"); // Imprime o movimento horizontal: uma casa para a direita.
                break; // Interrompe o loop horizontal após completar o movimento.
            }
            break; // Interrompe o loop vertical, finalizando o movimento em "L".
        }
    }
}

int main() {
    // Definição das constantes para os movimentos de cada peça
    const int torreCasas = 5;    // Número de casas para a Torre
    const int bispoCasas = 5;    // Número de casas para o Bispo
    const int rainhaCasas = 8;   // Número de casas para a Rainha
    const int cavaloCima = 2;    // Número de casas para o movimento vertical do Cavalo
    const int cavaloDireita = 1; // Número de casas para o movimento horizontal do Cavalo

    // Movimento da Torre (utilizando recursividade)
    printf("Movimento da Torre (Recursivo):\n");
    moverTorre(torreCasas);
    printf("\n");

    // Movimento do Bispo utilizando loops aninhados
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoLoops(bispoCasas);
    printf("\n");

    // Movimento do Bispo (utilizando recursividade)
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(bispoCasas);
    printf("\n");

    // Movimento da Rainha (utilizando recursividade)
    printf("Movimento da Rainha (Recursivo):\n");
    moverRainha(rainhaCasas);
    printf("\n");

    // Movimento do Cavalo (utilizando loops complexos)
    printf("Movimento do Cavalo (Loops Complexos):\n");
    moverCavalo(cavaloCima, cavaloDireita);

    return 0;
}
