#include <stdio.h>

int main() {
    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int vetor[tam];
    printf("Digite %d numeros inteiros:\n", tam);
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vetor[i]);
    }
    int pilhaInicio[1000], pilhaFim[1000];
    int topo = 0;

    pilhaInicio[topo] = 0;
    pilhaFim[topo] = tam - 1;
    topo++;

    while (topo > 0) {
        topo--;
        int inicio = pilhaInicio[topo];
        int fim = pilhaFim[topo];

        if (inicio < fim) {
            int i = inicio, j = fim;
            int pivo = vetor[(inicio + fim) / 2];

            while (i <= j) {
                while (vetor[i] < pivo) i++;
                while (vetor[j] > pivo) j--;
                if (i <= j) {
                    int temp = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = temp;
                    i++;
                    j--;
                }
            }

            if (inicio < j) {
                pilhaInicio[topo] = inicio;
                pilhaFim[topo] = j;
                topo++;
            }
            if (i < fim) {
                pilhaInicio[topo] = i;
                pilhaFim[topo] = fim;
                topo++;
            }
        }
    }

    printf("Vetor ordenado: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

