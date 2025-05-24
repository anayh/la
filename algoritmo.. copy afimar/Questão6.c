#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100000
#define MAX TAM

int main() {
    int vetor[TAM];
    int ESQ[TAM / 2];
    int DIR[TAM / 2];

    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        vetor[i] = rand();
    }

    clock_t inicio = clock();

    int esq_auxiliar[MAX], dir_auxiliar[MAX], topo = -1;
    int esquerda, direita, meio;

    topo++;
    esq_auxiliar[topo] = 0;
    dir_auxiliar[topo] = TAM - 1;

    for (int p = topo; p >= 0;) {
        esquerda = esq_auxiliar[p];
        direita = dir_auxiliar[p];
        p--;

        if (esquerda < direita) {
            meio = esquerda + (direita - esquerda) / 2;

            if (p + 2 >= MAX) {
                printf("Estouro de pilha\n");
                return 1;
            }

            p++;
            esq_auxiliar[p] = meio + 1;
            dir_auxiliar[p] = direita;

            p++;
            esq_auxiliar[p] = esquerda;
            dir_auxiliar[p] = meio;

            int i, j, k;
            int passo1 = meio - esquerda + 1;
            int passo2 = direita - meio;

            for (i = 0; i < passo1; i++) ESQ[i] = vetor[esquerda + i];
            for (j = 0; j < passo2; j++) DIR[j] = vetor[meio + 1 + j];

            i = 0;
            j = 0;
            k = esquerda;

            for (; i < passo1 && j < passo2;) {
                if (ESQ[i] <= DIR[j]) vetor[k++] = ESQ[i++];
                else vetor[k++] = DIR[j++];
            }

            for (; i < passo1; i++) vetor[k++] = ESQ[i];
            for (; j < passo2; j++) vetor[k++] = DIR[j];
        }

        topo = p;
    }

    clock_t fim = clock();

    double tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo: %.4f segundos\n", tempo);

    return 0;
}
