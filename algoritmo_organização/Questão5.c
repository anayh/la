// EXERCÍCIO 05 - Intercalação de dois vetores ordenados
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
    }
}

void intercalaVetores(int v1[], int n1, int v2[], int n2, int v3[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (v1[i] < v2[j]) {
            v3[k++] = v1[i++];
        } else {
            v3[k++] = v2[j++];
        }
    }
    while (i < n1) v3[k++] = v1[i++];
    while (j < n2) v3[k++] = v2[j++];
}

int main() {
    int v1[100], v2[100], v3[200];
    int n1, n2;

    printf("Digite o tamanho do primeiro vetor (máx 100): ");
    scanf("%d", &n1);

    printf("Digite os %d elementos do primeiro vetor:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite o tamanho do segundo vetor (máx 100): ");
    scanf("%d", &n2);

    printf("Digite os %d elementos do segundo vetor:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &v2[i]);
    }

    bubbleSort(v1, n1);
    bubbleSort(v2, n2);

    intercalaVetores(v1, n1, v2, n2, v3);

    printf("Vetor intercalado e ordenado: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}
