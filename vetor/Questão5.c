// 5 - Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e 
// escreva média aritmética.
#include <stdio.h>

int main(){
    int conjunto[100];
    int TAM=100;
    int soma=0;
    float media;
    

    for(int i=0;i<TAM;i++){
        scanf("%d",&conjunto[i]);
        soma+=conjunto[i];
    }

    media=soma/TAM;
    printf("Media: %2.f",media);

    return 0;
}