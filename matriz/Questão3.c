// 03 - Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os 
// demais elementos. Escreva ao final a matriz obtida.

#include <stdio.h>

#define TAM 5

int main() {
    int matriz[TAM][TAM];

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (i == j)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
    }
}
