#include <stdio.h>

int main() {
    int matriz[9][9];
    int i, j;

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int possibilidade = 1;

    for (i = 0; i < 9 && possibilidade; i++) {
        int cont[10] = {0};
        for (j = 0; j < 9; j++) {
            int v = matriz[i][j];
            if (v < 1 || v > 9 || cont[v] > 0) {
                possibilidade = 0;
                break;
            }
            cont[v]++;
        }
    }

    for (j = 0; j < 9 && possibilidade; j++) {
        int cont[10] = {0};
        for (i = 0; i < 9; i++) {
            int v = matriz[i][j];
            if (v < 1 || v > 9 || cont[v] > 0) {
                possibilidade = 0;
                break;
            }
            cont[v]++;
        }
    }

    for (int lin = 0; lin < 9 && possibilidade; lin += 3) {
        for (int col = 0; col < 9 && possibilidade; col += 3) {
            int cont[10] = {0};
            for (i = lin; i < lin + 3; i++) {
                for (j = col; j < col + 3; j++) {
                    int v = matriz[i][j];
                    if (v < 1 || v > 9 || cont[v] > 0) {
                        possibilidade = 0;
                        break;
                    }
                    cont[v]++;
                }
            }
        }
    }

    if (possibilidade) {
        printf("A matriz pode ser um Sudoku.\n");
    } else {
        printf("A matriz NÃO pode ser um Sudoku.\n");
    }

    return 0;
}
