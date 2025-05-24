#include <stdio.h>

int main() {
    int tab[3][3];
    int jog = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &tab[i][j]);
        }
    }

    for (int i = 0; i < 3 && !jog; i++) {
        for (int j = 0; j < 3 && !jog; j++) {
            if (tab[i][j] == 0) {
                printf("Proxima jogada: linha %d, coluna %d\n", i, j);
                jog = 1;
            }
        }
    }
    return 0;
}
