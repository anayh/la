#include <stdio.h>

/* #define TAM 30
#define TAM2 60 */

int main() {
    int vetor[30];
    int vetor2[30];
    int vetor3[60];
    int x = 0;

    for (int i = 0; i < 30; i++) {
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 30; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; x < 30; i += 2, x++) {
        vetor3[i] = vetor[x];
        vetor3[i + 1] = vetor2[x];
    }

    for (int i = 0; i < 30; i++) {
        printf("%d\n", vetor[i]);
    }
    for (int i = 0; i < 30; i++) {
        printf("%d\n", vetor2[i]);
    }
    for (int i = 0; i < 60; i++) {
        printf("%d", vetor3[i]);
    }

    return 0;
}
