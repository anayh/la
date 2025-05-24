#include <stdio.h>

int main() {
    int vetor[100];
    int comparacoes[2] = {0, 0};
    int n;

    printf("Tamanho(máx %d): ", 100);
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Não pode. Use entre 1 e %d.\n", 100);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor original: ");
    for (int i = 0; i < n; i++)
    printf("%d ", vetor[i]);


    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            comparacoes[0]++;
            if (vetor[j] < vetor[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = temp;
            comparacoes[1]++;
        }
    }

    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++) printf("%d ", vetor[i]);

    printf("\nComparações: %d\n", comparacoes[0]);
    printf("Trocas: %d", comparacoes[1]);

    return 0;
}
