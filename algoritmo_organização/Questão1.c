// EXERCÍCIO 01 - Bubble Sort com impressão a cada passagem
#include <stdio.h>

void bubbleSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
        printf("Passagem %d: ", i + 1);
        for (int k = 0; k < n; k++) {
            printf("%d ", v[k]);
        }
        printf("\n");
    }
}

int main() {
    int v[10];

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    bubbleSort(v, 10);

    printf("\nVetor ordenado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
