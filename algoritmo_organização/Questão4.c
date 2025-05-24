// EXERCÍCIO 04 - Quick Sort com pivô central
#include <stdio.h>

void quickSort(int v[], int inicio, int fim) {
    if (inicio < fim) {
        int i = inicio, j = fim;
        int pivo = v[(inicio + fim) / 2];

        while (i <= j) {
            while (v[i] < pivo) i++;
            while (v[j] > pivo) j--;
            if (i <= j) {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
                i++;
                j--;
            }
        }

        quickSort(v, inicio, j);
        quickSort(v, i, fim);
    }
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    printf("Digite %d numeros inteiros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    quickSort(v, 0, n - 1);

    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
