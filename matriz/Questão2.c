// 02 - Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela 
// possui. 

#include <stdio.h>

#define TAM 4

void lerMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int MaioresQue10(int matriz[TAM][TAM]) {
    int contador = 0;
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }
    return contador;
}

int main() {
    int matriz[TAM][TAM];
    int total;

    lerMatriz(matriz);

    total = MaioresQue10(matriz);

    printf("%d\n", total);

    return 0;
}
