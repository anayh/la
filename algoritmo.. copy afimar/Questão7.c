#include <stdio.h>

int main() {
    int vetorO[10];
    for (int i = 0; i < 10; i++) vetorO[i] = i;

    int vetor1[10], vetor2[10];
    for (int i = 0; i < 10; i++) {
        vetor1[i] = vetorO[i];
        vetor2[i] = vetorO[i];
    }

    int original = 0, otimizado = 0;

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            original++;
            if (vetor1[j] > vetor1[j + 1]) {
                int tmp = vetor1[j];
                vetor1[j] = vetor1[j + 1];
                vetor1[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < 10 - 1; i++) {
        int trocas = 0;
        for (int j = 0; j < 10 - i - 1; j++) {
            otimizado++;
            if (vetor2[j] > vetor2[j + 1]) {
                int tmp = vetor2[j];
                vetor2[j] = vetor2[j + 1];
                vetor2[j + 1] = tmp;
                trocas = 1;
            }
        }
        if (!trocas) break;
    }

    printf("Original: %d\n", original);
    printf("Otimizado: %d", otimizado);

    return 0;
}
