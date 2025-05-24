#include <stdio.h>
#include <stdbool.h>

#define TAM 10

void bubbleSortOriginal(int arr[], int n, int* passos) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            (*passos)++;
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void bubbleSortOtimizado(int arr[], int n, int* passos) {
    bool trocou;
    for (int i = 0; i < n - 1; i++) {
        trocou = false;
        for (int j = 0; j < n - i - 1; j++) {
            (*passos)++;
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                trocou = true;
            }
        }
        if (!trocou) break; 
    }
}

int main() {
    int vetorOrdenado[TAM];
    for (int i = 0; i < TAM; i++) vetorOrdenado[i] = i;

    int vetor1[TAM], vetor2[TAM];
    for (int i = 0; i < TAM; i++) {
        vetor1[i] = vetorOrdenado[i];
        vetor2[i] = vetorOrdenado[i];
    }

    int passosOriginal = 0, passosOtimizado = 0;

    bubbleSortOriginal(vetor1, TAM, &passosOriginal);
    bubbleSortOtimizado(vetor2, TAM, &passosOtimizado);

    printf("Passos (Bubble Sort original): %d\n", passosOriginal);
    printf("Passos (Bubble Sort otimizado): %d\n", passosOtimizado);

    return 0;
}
