#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[20];

    srand(time(NULL));
    for (int i = 0; i < 20; i++) {
        vetor[i] = rand() % 100;
        printf("%d ", vetor[i]);
    }
    printf("\n");

    for (int i = 1; i < 20; i++) {
        int var = vetor[i];
        int j = i - 1;
        while (j >= 0 && vetor[j] > var) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = var;
    }

    printf("Vetor em Insertion Sort: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
