// 07 - Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e 
// escreva raiz média quadrática. 

#include <stdio.h>
#include <math.h>

#define TAM 100
#define EXPOENTE 2

void LerConjunto(int conjunto[]) {
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &conjunto[i]);
    }
}
int TotalQuadrado(int conjunto[]){
    int quadrados=0;
    for (int i = 0; i < TAM; i++) {
        quadrados +=pow(conjunto[i],EXPOENTE);
        printf("%d\n", quadrados);
    }
    return quadrados;
}
float MediaQuadrados(int Quadrados){
    float media;
    media = Quadrados/TAM;

    return (float)media;
}

int main(){
    int conjunto[TAM];
    int Quadrados;
    float Media, RaizMedia;

    LerConjunto(conjunto);

    Quadrados = TotalQuadrado(conjunto);
    printf("Soma dos quadrados:%d\n", Quadrados);

    Media = MediaQuadrados(Quadrados);
    printf("Media dos quadrados: %f\n", Media);

    RaizMedia = sqrt(Media);
    printf("Raiz da media dos quadrados:%f", RaizMedia);

    return 0;

}