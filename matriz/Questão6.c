// 06 - Faça um programa para determinar a próxima jogada em um Jogo da Velha. 
// Assumir que o tabuleiro é representado por uma matriz de 3 x 3, onde cada 
// posição representa uma das casas do tabuleiro. A matriz pode conter os seguintes 
// valores -1, 0, 1 representando respectivamente uma casa contendo uma peça 
// minha (-1), uma casa vazia do tabuleiro (0), e uma casa contendo uma peça do 
// meu oponente (1). 


#include <stdio.h>

#define TAM 3

int main() {
    int tabuleiro[TAM][TAM];
    int jogada = 0;

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &tabuleiro[i][j]);
        }
    }

    for (int i = 0; i < TAM && !jogada; i++) {
        for (int j = 0; j < TAM && !jogada; j++) {
            if (tabuleiro[i][j] == 0) {
                printf("Proxima jogada: linha %d, coluna %d\n", i, j);
                jogada = 1;
            }
        }
    }

    if (!jogada)
        printf("Tabuleiro cheio, nenhuma jogada possível.\n");

    return 0;
}
