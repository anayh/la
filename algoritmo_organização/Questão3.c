#include <stdio.h>

#define MAX 100

void selectionSort(int v[], int n, int comparacoesTrocas[]) {
    comparacoesTrocas[0] = 0; 
    comparacoesTrocas[1] = 0; 

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            comparacoesTrocas[0]++;
            if (v[j] < v[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = v[i];
            v[i] = v[minIndex];
            v[minIndex] = temp;
            comparacoesTrocas[1]++;
        }
    }
}

int main() {
    int v[MAX];
    int comparacoesTrocas[2];
    int n;

    printf("Quantos números deseja ordenar? (máx %d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Quantidade inválida. Use entre 1 e %d.\n", MAX);
        return 1;
    }

    printf("Digite %d números inteiros:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nVetor original: ");
    for (int i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n");

    selectionSort(v, n, comparacoesTrocas);

    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\nComparações: %d\nTrocas: %d\n", comparacoesTrocas[0], comparacoesTrocas[1]);

    return 0;
}
