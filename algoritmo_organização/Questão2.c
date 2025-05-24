// EXERCÍCIO 02 - Insertion Sort com vetor aleatório
#include <stdio.h>
#include <stdlib.h>

void insertionSort(int v[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }
}

int main() {
    int v[20];
    srand(time(NULL));
    printf("Vetor aleatorio ");
    for (int i = 0; i < 20; i++) {
        v[i] = rand() % 100;
        printf("%d ", v[i]);
    }
    printf("\n");

    insertionSort(v, 20);

    printf("Vetor em Insertion Sort: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}
