#include <stdio.h>

int main() {
    int vetor[50];
    int vetor2[50]; 
    int contador = 0;

    for (int i = 0; i < 50; i++) {
        vetor[i] = i + 1;

        int primo = 1;
        if (vetor[i] <= 1) {
            primo = 0;
        } else {
            for (int j = 2; j * j <= vetor[i]; j++) {
                if (vetor[i] % j == 0) {
                    primo = 0;
                    break;
                }
            }
        }

        if (primo == 1) {
            vetor2[contador] = vetor[i];
            contador++;
        }
    }

    for (int i = 0; i < 50; i++) {
        printf("%d \n", vetor[i]);
    }

    printf("Primos:");
    for (int i = 0; i < contador; i++) {
        printf("%d ", vetor2[i]);
    }

    return 0;
}
