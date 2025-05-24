#include <stdio.h>
#include <math.h>


int main() {
    int vetor[100];
    int soma = 0;
    int ma, m;
    float media, ampli, desvio, TotalDesvios = 0;
    ma = vetor[0];
    m = vetor[0];

    for (int i = 0; i < 100; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 100; i++) {
        soma += vetor[i];
    }

    media = soma / 100;
    for (int i = 1; i < 100; i++) {
        if (vetor[i] > ma) {
            ma = vetor[i];
        }
        if (vetor[i] < m) {
            m = vetor[i];
        }
    }

    ampli = ma - m;
    for (int i = 0; i < 100; i++) {
        TotalDesvios += fabs(vetor[i] - media);
    }
    desvio = TotalDesvios / 100;

    printf("Media: %.2f\n", media);
    printf("Amplitude: %.2f\n", ampli);
    printf("Desvio Medio: %.2f\n", desvio);

    return 0;
}
