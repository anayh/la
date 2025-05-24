// // 6 - Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e 

#include <stdio.h>
#include <math.h>

#define TAM 100

void LerConjunto(int conjunto[]) {
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &conjunto[i]);
    }
}

int Soma(int conjunto[]) {
    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        soma += conjunto[i];
    }
    return soma;
}

int Maior(int conjunto[]) {
    int maior = conjunto[0];
    for (int i = 1; i < TAM; i++) {
        if (conjunto[i] > maior) {
            maior = conjunto[i];
        }
    }
    return maior;
}

int Menor(int conjunto[]) {
    int menor = conjunto[0];
    for (int i = 1; i < TAM; i++) {
        if (conjunto[i] < menor) {
            menor = conjunto[i];
        }
    }
    return menor;
}

float DesvioMedio(int conjunto[], float media) {
    float somaDesvios = 0;
    for (int i = 0; i < TAM; i++) {
        somaDesvios += fabs(conjunto[i] - media); // fabs para valor absoluto & soma os devios de cada item pela media total
    }
    return somaDesvios / TAM;//depois descobre o desvio total & mas porque dividir pelo tamanho, porque a soma não serve
}

int main() {
    int conjunto[TAM];
    int soma, maior, menor;
    float media, amplitude, desvio;

    LerConjunto(conjunto);//é so conjunto dentro porque? não precisa do []?

    soma = Soma(conjunto);//creio que aqui ele chama a função soma para que alem de chamar a sua função que precisa de um vetor ela usa o vetor de conjuncao
    media = (float)soma / TAM;//media é a soma dividio pelo tamanho

    maior = Maior(conjunto);//aqui ele usar como parametro a variavel conjunto que possui o array
    menor = Menor(conjunto);//aqui tambem
    amplitude = maior - menor; 

    desvio = DesvioMedio(conjunto, media);//o desvio usar o arrei e a media do array

    printf("Media: %.2f\n", media);
    printf("Amplitude: %.2f\n", amplitude);
    printf("Desvio Medio: %.2f\n", desvio);

    return 0;
}
