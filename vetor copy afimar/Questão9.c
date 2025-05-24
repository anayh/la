#include <stdio.h>

int main() {
    int vetor[30];
    int vetor2[30];
    int vetor3[60];
    int i, j, k;

    printf("Primeiros 30:\n");
    for (i = 0; i < 30; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Segundo 30:\n");
    for (i = 0; i < 30; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Intercalação com for completo
    for (i = 0, j = 0, k = 0; i < 30 && j < 30;) {
        if (vetor[i] < vetor2[j]) {
            vetor3[k++] = vetor[i++];
        } else {
            vetor3[k++] = vetor2[j++];
        }
    }

    for (i = i; i < 30; i++) { // continua de onde i parou
        vetor3[k++] = vetor[i];
    }

    for (j = j; j < 30; j++) { // continua de onde j parou
        vetor3[k++] = vetor2[j];
    }

    printf("Vetor intercalado:\n");
    for (i = 0; i < 60; i++) {
        printf("%d\n", vetor3[i]);
    }

    return 0;
}
