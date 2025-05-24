#include <stdio.h>

int main() {
    int v1[100], v2[100], v3[200];
    int n1, n2;

    printf("Tamanho primeiro vetor ");
    scanf("%d", &n1);

    printf("Digite os %d elementos do primeiro vetor:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Tamanho segundo vetor: ");
    scanf("%d", &n2);

    printf("Digite os %d elementos do segundo vetor:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &v2[i]);
    }

    for (int i = 0; i < n1 - 1; i++) {
        for (int j = 0; j < n1 - 1 - i; j++) {
            if (v1[j] > v1[j + 1]) {
                int temp = v1[j];
                v1[j] = v1[j + 1];
                v1[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n2 - 1; i++) {
        for (int j = 0; j < n2 - 1 - i; j++) {
            if (v2[j] > v2[j + 1]) {
                int temp = v2[j];
                v2[j] = v2[j + 1];
                v2[j + 1] = temp;
            }
        }
    }

    int i = 0, j = 0, k = 0;
    for (; i < n1 && j < n2; ) {
        if (v1[i] < v2[j]) {
            v3[k++] = v1[i++];
        } else {
            v3[k++] = v2[j++];
        }
    }

    for (; i < n1; i++) {
        v3[k++] = v1[i];
    }
    for (; j < n2; j++) {
        v3[k++] = v2[j];
    }

    printf("Vetor intercalado e ordenado: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", v3[i]);
    }

    return 0;
}
