#include <stdio.h>

int main() {
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }

        printf("Vetor%d: ", i + 1);
        for (int k = 0; k < 10; k++) {
            printf("%d ", vetor[k]);
        }
    }

    printf("Vetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}
