// 07 - Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e 
// escreva raiz média quadrática. 

#include <stdio.h>
#include <math.h>


int main() {
    int vetor[100];
    int quadrados = 0;
    float media, raiz;

    for (int i = 0; i < 100; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 100; i++) {
        quadrados += pow(vetor[i], 2);
        printf("%d\n", quadrados);
    }

    media = (float)quadrados / 100;
    printf("Media: %f\n", media);

    raiz = sqrt(media);
    printf("Raiz da media: %f\n", raiz);

    return 0;
}
