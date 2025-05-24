#include <stdio.h>

#define TAM 30
#define TAM2 60

void LerConjunto(int conjunto[], int conjunto2[]) {
    printf("Digite os 30 números do primeiro conjunto (ordenados):\n");
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &conjunto[i]);
    }

    printf("Digite os 30 números do segundo conjunto (ordenados):\n");
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &conjunto2[i]);
    }
}

// Intercala dois vetores ordenados em um terceiro vetor ordenado
void Intercalando(int conjunto[], int conjunto2[], int conjunto3[]) {
    int i = 0, j = 0, k = 0;

    while (i < TAM && j < TAM) {
        if (conjunto[i] < conjunto2[j]) {
            conjunto3[k++] = conjunto[i++];
        } else {
            conjunto3[k++] = conjunto2[j++];
        }
    }

    // Se ainda restarem elementos em um dos vetores
    while (i < TAM) conjunto3[k++] = conjunto[i++];
    while (j < TAM) conjunto3[k++] = conjunto2[j++];
}

int main() {
    int conjunto[TAM];
    int conjunto2[TAM];
    int conjunto3[TAM2];

    LerConjunto(conjunto, conjunto2);
    Intercalando(conjunto, conjunto2, conjunto3);

    printf("\nConjunto intercalado (ordenado):\n");
    for (int i = 0; i < TAM2; i++) {
        printf("%d\n", conjunto3[i]);
    }

    return 0;
}
